using System.Collections;
using System.Collections.Generic;
using Oculus.Interaction;
using UnityEngine;
using Hitchhike;
using RootScript;

public class GazeHandManager : MonoBehaviour
{
  public Transform head;
  public GameObject hoverGizmo;
  public GameObject gazeGizmo;
  public Transform handAnchor;
  List<OVREyeGaze> eyeGazes;
  int maxRaycastDistance = 100;
  RemoteHandTarget hoverTarget;
  RemoteHandTarget pinchTarget;
  Vector3 handInitialPos;
  Quaternion handInitialRot;
  Vector3 targetInitialPos;
  Quaternion targetInitialRot;
  bool isPinching;
  int pinchCounter;
  float coolDownTime = 0.2f;
  public GazeHandSwitchTechnique ghst;
  Coroutine doublePinchDelay;

  // Start is called before the first frame update
  void Start()
  {
    eyeGazes = new List<OVREyeGaze>(GetComponents<OVREyeGaze>());
    pinchCounter = 0;
  }

  public void setIsPinching(bool value)
  {
    isPinching = value;
    if (value)
    {
      if (doublePinchDelay != null) StopCoroutine(doublePinchDelay);
      pinchCounter += 1;
      if (pinchCounter >= 2)
      {
        OnDoublePinch();
        pinchCounter = 0;
      }
      else
      {
        doublePinchDelay = StartCoroutine(HitchhikeExtensions.DelayMethod(coolDownTime, () =>
        {
          pinchCounter -= 1;
          OnPinch();
        }));
      }
    }
    else
    {
      OnPinchEnd();
    }
  }

  void OnPinch()
  {
    handInitialPos = handAnchor.position;
    handInitialRot = handAnchor.rotation;
    if (hoverTarget != null && HitchhikeManager.Instance.GetHandAreaIndex(HitchhikeManager.Instance.GetActiveHandArea()) == 0)
    {
      pinchTarget = hoverTarget;
      pinchTarget.OnHoverEnd(hoverGizmo);
      pinchTarget.OnPinch();
      hoverTarget = null;
      targetInitialPos = pinchTarget.transform.position;
      targetInitialRot = pinchTarget.transform.rotation;
    }
  }
  void OnPinchEnd()
  {
    handInitialPos = Vector3.zero;
    handInitialRot = Quaternion.identity;
    targetInitialPos = Vector3.zero;
    targetInitialRot = Quaternion.identity;
    if (pinchTarget != null)
    {
      pinchTarget.OnPinchEnd();
      pinchTarget = null;
    }
  }
  void OnDoublePinch()
  {
    if (hoverTarget == null)
    {
      ghst.switchIndex = 0;
      return;
    }
    if (hoverTarget.GetComponentInChildren<HandArea>() != null)
    {
      // already has hand area
      var lookingArea = hoverTarget.GetComponentInChildren<HandArea>();
      if (HitchhikeManager.Instance.GetActiveHandArea() == lookingArea)
      {
        ghst.switchIndex = 0;
      }
      else
      {
        ghst.switchIndex = HitchhikeManager.Instance.GetHandAreaIndex(lookingArea);
      }
    }
    else
    {
      // does not have hand area
      var _area = HitchhikeManager.Instance.AddArea(hoverTarget.transform.position, hoverTarget.transform);
      var col = hoverTarget.GetComponent<Collider>();
      _area.transform.position = col.bounds.center;
      Debug.Log(col.bounds.size.x + ", " + _area.transform.localScale.x + ", " + _area.transform.lossyScale.x);
      _area.transform.localScale = new Vector3(
        col.bounds.size.x * _area.transform.localScale.x / _area.transform.lossyScale.x * 1.1f,
        col.bounds.size.y * _area.transform.localScale.y / _area.transform.lossyScale.y * 1.1f,
        col.bounds.size.x * _area.transform.localScale.x / _area.transform.lossyScale.x * 1.1f
      );
      ghst.switchIndex = HitchhikeManager.Instance.GetHandAreaIndex(_area);
    }
  }

  // Update is called once per frame
  void Update()
  {
    if (isPinching)
    {
      UpdatePinch();
    }
    else
    {
      UpdateHover();
    }
  }

  void UpdatePinch()
  {
    if (pinchTarget == null) return;
    var gain = Vector3.Distance(handInitialPos, targetInitialPos) * 2 + 1;
    pinchTarget.transform.position = targetInitialPos + (handAnchor.position - handInitialPos) * gain;
    var handToTargetRot = Quaternion.Inverse(handInitialRot) * targetInitialRot;
    pinchTarget.transform.rotation = handAnchor.rotation * handToTargetRot;
  }

  void UpdateHover()
  {
    if (!eyeGazes[0].EyeTrackingEnabled)
    {
      Debug.Log("Eye tracking not working");
    }

    Ray gazeRay = GetGazeRay();

    RaycastHit closestHit = new RaycastHit();
    float closestDistance = float.PositiveInfinity;
    foreach (var hit in Physics.RaycastAll(gazeRay, maxRaycastDistance))
    {
      var target = hit.transform.GetComponent<RemoteHandTarget>();
      if (target != null)
      {
        // finding a nearest hit
        var colliderDistance = Vector3.Distance(hit.collider.gameObject.transform.position, head.transform.position);
        if (colliderDistance < closestDistance)
        {
          closestHit = hit;
          closestDistance = colliderDistance;
        }
      }
    }

    if (closestDistance < float.PositiveInfinity)
    {
      if (hoverTarget != null) hoverTarget.OnHoverEnd(hoverGizmo);
      var target = closestHit.transform.GetComponent<RemoteHandTarget>();
      if (!target.isHovered) target.OnHover(hoverGizmo);
      hoverTarget = target;
      var renderer = target.GetComponent<Renderer>();
      if (renderer == null) renderer = target.GetComponentInChildren<Renderer>();
      if (renderer != null)
      {
        if (HitchhikeManager.Instance.GetHandAreaIndex(HitchhikeManager.Instance.GetActiveHandArea()) == 0)
        {
          hoverGizmo.SetActive(true);
        }
        else
        {
          hoverGizmo.SetActive(false);
        }
        hoverGizmo.transform.position = renderer.bounds.center;
        hoverGizmo.transform.rotation = target.transform.rotation;
        hoverGizmo.transform.localScale = renderer.bounds.size;
      }
    }
    else
    {
      if (hoverTarget != null) hoverTarget.OnHoverEnd(hoverGizmo);
    }
  }

  Vector3? filteredDirection = null;
  Vector3? filteredPosition = null;
  float ratio = 0.3f;
  private Ray GetGazeRay()
  {
    Vector3 direction = Vector3.zero;
    eyeGazes.ForEach((e) => { direction += e.transform.forward; });
    direction /= eyeGazes.Count;

    if (!filteredDirection.HasValue)
    {
      filteredDirection = direction;
      filteredPosition = head.transform.position;
    }
    else
    {
      filteredDirection = filteredDirection.Value * (1 - ratio) + direction * ratio;
      filteredPosition = filteredPosition.Value * (1 - ratio) + head.transform.position * ratio;
    }

    if (gazeGizmo != null) gazeGizmo.transform.position = filteredPosition.Value + filteredDirection.Value * 0.5f;
    return new Ray(filteredPosition.Value, filteredDirection.Value);
  }
}
