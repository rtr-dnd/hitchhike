using System.Collections.Generic;
using UnityEngine;
using RootScript;

public class HitchhikeManagerOld: MonoBehaviour
{
  public Transform head;
  public GameObject handWrapPrefab;
  List<HandWrap> handWraps;
  public GameObject originalHandArea;
  public List<GameObject> copiedHandAreas;
  List<GameObject> handAreas;
  public Transform handAnchor;
  List<OVREyeGaze> eyeGazes;
  int maxRaycastDistance = 100;

  void Start()
  {
    eyeGazes = new List<OVREyeGaze>(GetComponents<OVREyeGaze>());

    handAreas = new List<GameObject>();
    handAreas.Add(originalHandArea);
    handAreas.AddRange(copiedHandAreas);

    handWraps = new List<HandWrap>();
    handAreas.ForEach((e) =>
    {
      var initialHandPosition = e.GetChildWithName("InitialHandPosition");
      var handWrapInstance = GameObject.Instantiate(handWrapPrefab, initialHandPosition.transform.position, initialHandPosition.transform.rotation);
      handWraps.Add(handWrapInstance.GetComponent<HandWrap>());
    });
    handWraps.ForEach((e) => { e.SetEnabled(false); });
    ActivateHandWrap(handWraps[0]);
  }

  void Update()
  {
    if (eyeGazes == null) return;
    if (!eyeGazes[0].EyeTrackingEnabled)
    {
      Debug.Log("Eye tracking not working");
      return;
    }

    Ray gazeRay = GetGazeRay();
    int layerMask = 1 << LayerMask.NameToLayer("Hitchhike");

    RaycastHit closestHit = new RaycastHit();
    float closestDistance = float.PositiveInfinity;
    foreach (var hit in Physics.RaycastAll(gazeRay, maxRaycastDistance, layerMask))
    {
      // finding a nearest hit
      var colliderDistance = Vector3.Distance(hit.collider.gameObject.transform.position, head.transform.position);
      if (colliderDistance < closestDistance)
      {
        closestHit = hit;
        closestDistance = colliderDistance;
      }
    }

    HandWrap currentGazeWrap = null;
    if (closestDistance < float.PositiveInfinity)
    {
      currentGazeWrap = GetHandWrapFromHit(closestHit);
      if (currentGazeWrap != null) ActivateHandWrap(currentGazeWrap);
    }


    // update hand pos
    var activeHandIndex = GetHandWrapIndex(GetActiveHandWrap());
    var originalSpaceOrigin = handAreas[0].transform;
    var activeSpaceOrigin = handAreas[activeHandIndex].transform;

    var originalToActiveRot = Quaternion.Inverse(activeSpaceOrigin.rotation) * originalSpaceOrigin.rotation;
    var originalToActiveScale = new Vector3(
      activeSpaceOrigin.lossyScale.x / originalSpaceOrigin.lossyScale.x,
      activeSpaceOrigin.lossyScale.y / originalSpaceOrigin.lossyScale.y,
      activeSpaceOrigin.lossyScale.z / originalSpaceOrigin.lossyScale.z
    );

    var oMt = Matrix4x4.TRS(
      handAnchor.transform.position,
      handAnchor.transform.rotation,
      new Vector3(1, 1, 1)
    );

    var resMat =
    Matrix4x4.Translate(activeSpaceOrigin.position - originalSpaceOrigin.position) // orignal to copied translation
    * Matrix4x4.TRS(
        originalSpaceOrigin.position,
        Quaternion.Inverse(originalToActiveRot),
        originalToActiveScale
    ) // translation back to original space and rotation & scale around original space
    * Matrix4x4.Translate(-originalSpaceOrigin.position) // offset translation for next step
    * oMt; // hand anchor

    handWraps[activeHandIndex].transform.position = resMat.GetColumn(3);
    handWraps[activeHandIndex].transform.rotation = resMat.rotation;
  }

  private void ActivateHandWrap(HandWrap wrap)
  {
    handWraps.ForEach((e) =>
    {
      e.SetEnabled(e == wrap);
    });
  }
  private HandWrap GetActiveHandWrap()
  {
    HandWrap wrap = null;
    handWraps.ForEach((e) => { if (e.isEnabled) wrap = e; });
    return wrap;
  }
  private HandWrap GetHandWrapFromHit(RaycastHit hit)
  {
    var target = hit.collider.gameObject;
    return target.GetComponentInParent<HandWrap>();
  }
  private int GetHandWrapIndex(HandWrap wrap)
  {
    var i = handWraps.FindIndex(e => e == wrap);
    return i;
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
}