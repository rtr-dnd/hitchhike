using System.Collections.Generic;
using Oculus.Interaction.Input;
using UnityEngine;

namespace Hitchhike
{

  public class QuestProHOMERGlobalTechnique : GlobalTechnique
  {
    public Transform head;
    [SerializeField]
    float HOMERHeight = 0.9f;
    public GameObject gazePointGizmo;
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
    int preferredHandIndex;
    public Sprite handAreaGlobalSprite;

    public override void Init()
    {
      eyeGazes = new List<OVREyeGaze>(GetComponents<OVREyeGaze>());
    }

    public override void UpdateGlobal()
    {
      // display gaze gizmo
      Ray gazeRay = GetGazeRay();
      RaycastHit closestHit = new RaycastHit();
      float closestDistance = float.PositiveInfinity;
      bool intersectsHandArea = false;
      foreach (var hit in Physics.RaycastAll(gazeRay, maxRaycastDistance))
      {
        if (hit.transform.GetComponentInParent<HandArea>() != null) intersectsHandArea = true;
        // finding a nearest hit
        var colliderDistance = Vector3.Distance(hit.collider.gameObject.transform.position, head.transform.position);
        if (colliderDistance < closestDistance)
        {
          closestHit = hit;
          closestDistance = colliderDistance;
        }
      }
      if (closestDistance < float.PositiveInfinity && !intersectsHandArea)
      {
        gazePointGizmo.SetActive(true);
        gazePointGizmo.transform.position = closestHit.point + closestHit.normal * 0.05f;
        gazePointGizmo.transform.forward = -closestHit.normal;
        var gizmoScale = Mathf.Min(closestDistance * 0.05f, 1f);
        gazePointGizmo.transform.localScale = new Vector3(gizmoScale, gizmoScale, gizmoScale);
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

    public override void ActivateGlobalMove(int prefIndex)
    {
      base.ActivateGlobalMove(prefIndex);
      isActive = true;
      preferredHandIndex = prefIndex;
    }

    public override void DeactivateGlobalMove()
    {
      base.DeactivateGlobalMove();
      isActive = false;
    }

    public override bool isGlobalMoveActive()
    {
      return isActive;
    }

    Vector3 handToArea;
    Vector3 initialHandPosition;
    Vector3 initialRawHandPosition;
    Vector3 initialRawHandForward;
    Quaternion initialAreaRotation;
    GameObject tempGO_1; // looks at copied hand
    GameObject tempGO_2; // looks at original hand
    GameObject tempGO_3; // looks at new copied hand pos
    Vector3 origin;
    float d_ratio;
    Quaternion originalToCopiedQ;
    public override void OnGlobalMoveStart(HandArea _area)
    {
      _area.SetHandsVisible(false);
      _area.ChangeSprite(handAreaGlobalSprite);

      // homer
      initialHandPosition = _area.wraps[preferredHandIndex].transform.position;
      handToArea = _area.transform.position - initialHandPosition;
      initialRawHandPosition = HitchhikeManager.Instance.rawHandPoses[preferredHandIndex].position;
      initialRawHandForward = HitchhikeManager.Instance.rawHandPoses[preferredHandIndex].forward;
      initialAreaRotation = _area.transform.rotation;
      tempGO_1 = new GameObject("tempgo_1_global_homer");
      tempGO_2 = new GameObject("tempgo_2_global_homer");
      tempGO_3 = new GameObject("tempgo_3_global_homer");
      origin = new Vector3(head.position.x, HOMERHeight, head.position.z);
      d_ratio = Vector3.Distance(initialHandPosition, origin) / Vector3.Distance(initialRawHandPosition, origin);

      tempGO_1.transform.position = origin;
      tempGO_1.transform.LookAt(initialHandPosition);
      tempGO_2.transform.position = origin;
      tempGO_2.transform.LookAt(initialRawHandPosition);
      originalToCopiedQ = Quaternion.Inverse(tempGO_2.transform.rotation) * tempGO_1.transform.rotation;
    }

    public override void OnGlobalMoveStay(HandArea _area)
    {
      var currentRawHandPosition = HitchhikeManager.Instance.rawHandPoses[preferredHandIndex].position;
      var currentRawHandForward = HitchhikeManager.Instance.rawHandPoses[preferredHandIndex].forward;
      tempGO_3.transform.position = origin;
      tempGO_3.transform.LookAt(currentRawHandPosition);
      tempGO_3.transform.rotation *= originalToCopiedQ;
      var current_d = Vector3.Distance(currentRawHandPosition, origin);

      var final_pos = origin + (tempGO_3.transform.forward * current_d * d_ratio) + handToArea;
      _area.transform.position = final_pos;

      _area.transform.rotation = initialAreaRotation;
      _area.transform.Rotate(Vector3.up, Quaternion.FromToRotation(initialRawHandForward, currentRawHandForward).eulerAngles.y);

      _area.AfterTransformChange();
    }

    public override void OnGlobalMoveEnd(HandArea _area)
    {
      Destroy(tempGO_1);
      Destroy(tempGO_2);
      Destroy(tempGO_3);
      _area.SetHandsVisible(true);
      _area.ChangeSprite(true);
    }
  }
}