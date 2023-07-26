using System.Collections.Generic;
using Oculus.Interaction.Input;
using UnityEngine;

namespace Hitchhike
{

  public class QuestProTranslationalGlobalTechnique : GlobalTechnique
  {
    public Transform head;
    [SerializeField]
    float HOMERHeight = 0.9f;
    [SerializeField]
    float addAreaOffset = 0.3f;
    public GameObject gazePointGizmo;
    List<OVREyeGaze> eyeGazes;
    int maxRaycastDistance = 100;
    Vector3? currentGazePoint = null;
    Vector3? currentGazeNormal = null;

    HandArea area;
    Material defaultAreaMaterial;
    Vector3 previousPosition = new Vector3(float.NaN, float.NaN, float.NaN);
    bool isLefty;
    [HideInInspector]
    public bool isActive;
    int preferredHandIndex;

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
        currentGazeNormal = closestHit.normal;
      }
      else
      {
        gazePointGizmo.SetActive(false);
        currentGazePoint = null;
        currentGazeNormal = null;
      }
    }

    public void AddArea()
    {
      if (currentGazePoint == null || currentGazeNormal == null) return;
      HitchhikeManager.Instance.AddArea(currentGazePoint.Value + (currentGazeNormal.Value * addAreaOffset));
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

    public override void ActivateGlobal(int prefIndex, Mode _mode)
    {
      base.ActivateGlobal(prefIndex, _mode);
      mode = _mode;
      isActive = true;
      preferredHandIndex = prefIndex;
    }

    public override void DeactivateGlobal()
    {
      base.DeactivateGlobal();
      isActive = false;
    }
    public override bool isGlobalActive()
    {
      return isActive;
    }


    public override void OnGlobalStart(HandArea _area)
    {
      _area.SetHandsVisible(false);
      _area.ChangeSprite(HandArea.Status.global);

      switch (mode)
      {
        case Mode.Move:
          OnMoveStart(_area);
          break;
        case Mode.Scale:
          OnScaleStart(_area);
          break;
      }
    }

    public override void OnGlobalStay(HandArea _area)
    {
      switch (mode)
      {
        case Mode.Move:
          OnMoveStay(_area);
          break;
        case Mode.Scale:
          OnScaleStay(_area);
          break;
      }
      _area.AfterTransformChange();
    }

    public override void OnGlobalEnd(HandArea _area)
    {
      switch (mode)
      {
        case Mode.Move:
          OnMoveEnd(_area);
          break;
        case Mode.Scale:
          OnScaleEnd(_area);
          break;
      }
      _area.SetHandsVisible(true);
      _area.ChangeSprite(HandArea.Status.enabled);
    }

    Vector3 handToArea;
    Vector3 rawHandToArea;
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
    void OnMoveStart(HandArea _area)
    {
      // homer
      initialHandPosition = _area.wraps[preferredHandIndex].transform.position;
      handToArea = _area.transform.position - initialHandPosition;
      initialRawHandPosition = HitchhikeManager.Instance.rawHandPoses[preferredHandIndex].position;
      rawHandToArea = _area.transform.position - initialRawHandPosition;
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

    void OnMoveStay(HandArea _area)
    {
      var currentRawHandPosition = HitchhikeManager.Instance.rawHandPoses[preferredHandIndex].position;
      var currentRawHandForward = HitchhikeManager.Instance.rawHandPoses[preferredHandIndex].forward;
      if (_area.isOriginal)
      {
        _area.transform.position = currentRawHandPosition + rawHandToArea;
        _area.transform.LookAt(new Vector3(head.transform.position.x, _area.transform.position.y, head.transform.position.z));
        _area.transform.Rotate(new Vector3(0, 180, 0));
      }
      else
      {
        tempGO_3.transform.position = origin;
        tempGO_3.transform.LookAt(currentRawHandPosition);
        tempGO_3.transform.rotation *= originalToCopiedQ;
        var current_d = Vector3.Distance(currentRawHandPosition, origin);

        var final_pos = origin + (tempGO_3.transform.forward * current_d * d_ratio) + handToArea;
        _area.transform.position = final_pos;

        _area.transform.rotation = initialAreaRotation;
        _area.transform.Rotate(Vector3.up, Quaternion.FromToRotation(initialRawHandForward, currentRawHandForward).eulerAngles.y);
      }
    }

    void OnMoveEnd(HandArea _area)
    {
      if (_area.isOriginal && (HitchhikeManager.Instance.originalFollowsHeadMovement != OriginalFollowsHeadMovement.Never))
        HitchhikeManager.Instance.RepositionOriginalFollow(_area.transform.position, _area.transform.rotation);
      Destroy(tempGO_1);
      Destroy(tempGO_2);
      Destroy(tempGO_3);
    }

    Vector3 initialAreaScale;
    Vector3 initialAreaPosition;
    Vector3 pivotPosition;
    void OnScaleStart(HandArea _area)
    {
      initialRawHandPosition = HitchhikeManager.Instance.rawHandPoses[preferredHandIndex].position;
      initialAreaScale = _area.transform.localScale;
      initialAreaPosition = _area.transform.position;
      pivotPosition = _area.transform.position - new Vector3(0, _area.transform.lossyScale.y, 0);
    }

    void OnScaleStay(HandArea _area)
    {
      var currentRawHandPosition = HitchhikeManager.Instance.rawHandPoses[preferredHandIndex].position;
      var diff = HitchhikeManager.Instance.handAreas[0].transform.InverseTransformPoint(currentRawHandPosition)
        - HitchhikeManager.Instance.handAreas[0].transform.InverseTransformPoint(initialRawHandPosition);
      var scaleX = initialAreaScale.x + (initialAreaScale.x * diff.x);
      var scaleY = initialAreaScale.y + (initialAreaScale.y * diff.y);
      _area.transform.localScale = new Vector3(
        scaleX, scaleY, scaleX
      );
      _area.transform.position = pivotPosition + (initialAreaPosition - pivotPosition) * (scaleY / initialAreaScale.y);
    }

    void OnScaleEnd(HandArea _area)
    {

    }
  }
}