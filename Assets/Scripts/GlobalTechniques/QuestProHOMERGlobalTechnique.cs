using System.Collections.Generic;
using Oculus.Interaction.Input;
using UnityEngine;

namespace Hitchhike
{

  public class QuestProHOMERGlobalTechnique : GlobalTechnique
  {
    public GameObject gazePointGizmo;
    public Transform head;
    List<OVREyeGaze> eyeGazes;
    int maxRaycastDistance = 100;
    Vector3? currentGazePoint = null;

    public GameObject globalHandAreaPrefab;
    HandArea area;
    public Material globalHandMaterial;
    public Material globalAreaMaterial;
    Material defaultAreaMaterial;
    Vector3 previousPosition = new Vector3(float.NaN, float.NaN, float.NaN);
    bool isLefty;
    [HideInInspector]
    public bool isActive;

    public override void Init()
    {
      eyeGazes = new List<OVREyeGaze>(GetComponents<OVREyeGaze>());

      // isLefty = HitchhikeManager.Instance.hitchhikeHandedness == Handedness.Left;
      // var handAreaInstance = GameObject.Instantiate(globalHandAreaPrefab);
      // area = handAreaInstance.GetComponent<HandArea>();
      // area.Init(
      //     new List<GameObject>()
      //     {
      //           isLefty ? HitchhikeManager.Instance.leftHandPrefab : HitchhikeManager.Instance.rightHandPrefab
      //     },
      //     HitchhikeManager.Instance.ovrHands.transform,
      //     HitchhikeManager.Instance.handAreas[0],
      //     false,
      //     true,
      //     false,
      //     HitchhikeManager.Instance.billboardingTarget
      // );
      // area.isInvisible = true;
      // area.autoUpdateOriginal = false;
      // area.gameObject.GetComponent<MeshRenderer>().enabled = false;
      // area.image.enabled = false;
      // area.wraps[0].enabledMaterial = globalHandMaterial;
      // area.wraps[0].transform.Find(isLefty ? "HandInteractorsLeft" : "HandInteractorsRight").gameObject.SetActive(false);
      // area.SetEnabled(true);
      // Invoke("AsyncInit", 1f);
    }

    // void AsyncInit()
    // {
    //   area.SetEnabled(false);
    //   area.SetVisibility(false);
    // }

    public override void UpdateGlobal()
    {
      Ray gazeRay = GetGazeRay();
      RaycastHit closestHit = new RaycastHit();
      float closestDistance = float.PositiveInfinity;
      foreach (var hit in Physics.RaycastAll(gazeRay, maxRaycastDistance))
      {
        // finding a nearest hit
        var colliderDistance = Vector3.Distance(hit.collider.gameObject.transform.position, head.transform.position);
        if (colliderDistance < closestDistance)
        {
          closestHit = hit;
          closestDistance = colliderDistance;
        }
      }
      if (closestDistance < float.PositiveInfinity
        && closestHit.transform.GetComponentInParent<HandArea>() == null
        && closestHit.transform.GetComponentInParent<HandWrap>() == null
      )
      {
        gazePointGizmo.SetActive(true);
        gazePointGizmo.transform.position = closestHit.point + closestHit.normal * 0.05f;
        gazePointGizmo.transform.forward = -closestHit.normal;
        currentGazePoint = closestHit.point;
      }
      else
      {
        gazePointGizmo.SetActive(false);
        currentGazePoint = null;
      }
    }

    public void AddArea()
    {
      if (currentGazePoint == null) return;
      HitchhikeManager.Instance.AddArea(currentGazePoint.Value);
    }
    public void DeleteArea(HandWrap self)
    {
      HitchhikeManager.Instance.DeleteArea(self.area);
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
      return new Ray(filteredPosition.Value, filteredDirection.Value);
    }

    public void SetIsActiveLeft(bool value)
    {
      if (!isLefty) return;
      isActive = value;
    }
    public void SetIsActiveRight(bool value)
    {
      if (isLefty) return;
      isActive = value;
    }

    public override bool isGlobalMoveActive()
    {
      // return Input.GetKey(KeyCode.Space);
      return isActive;
    }

    int delay;
    public override void OnGlobalMoveStart(HandArea _area)
    {
      area.SetVisibility(true);
      area.SyncDelayedOriginal();
      area.transform.position = _area.transform.position;
      area.transform.rotation = _area.transform.rotation;
      area.transform.localScale = _area.transform.lossyScale * 2;
      area.SetEnabled(true);
      _area.SetHandVisibility(false);
      defaultAreaMaterial = _area.GetComponent<MeshRenderer>().material;
      _area.GetComponent<MeshRenderer>().material = globalAreaMaterial;
      delay = 10; // timeout for init of bigger hand
    }

    public override void OnGlobalMoveStay(HandArea _area)
    {
      if (delay > 0)
      {
        delay--;
        return;
      }

      var delta = Vector3.zero;
      if (!float.IsNaN(previousPosition.x)) delta = area.wraps[0].transform.position - previousPosition;
      _area.transform.position += delta;
      previousPosition = area.wraps[0].transform.position;
    }

    public override void OnGlobalMoveEnd(HandArea _area)
    {
      area.SetEnabled(false);
      area.SetVisibility(false);
      _area.SetHandVisibility(true);
      _area.GetComponent<MeshRenderer>().material = defaultAreaMaterial;
      previousPosition = new Vector3(float.NaN, float.NaN, float.NaN);
    }
  }
}