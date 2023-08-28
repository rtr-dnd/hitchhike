using System.Collections;
using System.Collections.Generic;
using Oculus.Interaction;
using UnityEngine;

public class RemoteHandManager : SingletonMonoBehaviour<RemoteHandManager>, IRemoteHandManager
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
  bool isPaused;

  protected override void Awake()
  {
    var targets = FindObjectsOfType<RemoteHandTarget>();
    foreach (var target in targets) { target.remoteHandManager = this; }
  }

  // Start is called before the first frame update
  void Start()
  {
    eyeGazes = new List<OVREyeGaze>(GetComponents<OVREyeGaze>());
  }

  public void setIsPinching(bool value)
  {
    isPinching = value;
    if (value)
    {
      OnPinch();
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
    if (hoverTarget != null)
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

  // Update is called once per frame
  void Update()
  {
    if (isPaused) return;
    if (isPinching)
    {
      UpdatePinch();
    }
    else
    {
      UpdateHover();
    }
  }

  public void SetIsPaused(bool val)
  {
    if (val)
    {
      isPaused = true;
      hoverGizmo.SetActive(false);
      hoverTarget = null;
      pinchTarget = null;
    }
    else
    {
      isPaused = false;
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
      var target = closestHit.transform.GetComponent<RemoteHandTarget>();
      if (hoverTarget != null) hoverTarget.OnHoverEnd(hoverGizmo);
      if (!target.isHovered) target.OnHover(hoverGizmo);
      hoverTarget = target;
    }
    else
    {
      if (hoverTarget != null) hoverTarget.OnHoverEnd(hoverGizmo);
      hoverTarget = null;
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
