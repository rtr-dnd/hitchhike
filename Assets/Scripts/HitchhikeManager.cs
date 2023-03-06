using System.Collections.Generic;
using UnityEngine;
using RootScript;
using System.Linq;

public enum Handedness
{
  None,
  Right,
  Left,
  Bimanual
}

public class HitchhikeManager : SingletonMonoBehaviour<HitchhikeManager>
{
  public GameObject ovrHands;
  public Handedness hitchhikeHandedness = Handedness.Right;
  public GameObject LeftHandPrefab;
  public GameObject RightHandPrefab;
  [HideInInspector]
  public List<GameObject> handWrapPrefabs;
  [HideInInspector]
  public List<HandArea> handAreas { get; private set; }
  public SwitchTechnique switchTechnique;
  public bool scaleHandModel;
  public bool DisableDnd = false;
  private bool initialized = false; // for delayed initial load: ensures hands are displayed correctly

  void Start()
  {
    handWrapPrefabs = new List<GameObject>();
    switch (hitchhikeHandedness)
    {
      case Handedness.None:
        ovrHands.transform.Find("RightHand").gameObject.SetActive(true);
        ovrHands.transform.Find("LeftHand").gameObject.SetActive(true);
        break;
      case Handedness.Right:
        handWrapPrefabs.Add(RightHandPrefab);
        ovrHands.transform.Find("RightHand").gameObject.SetActive(false);
        ovrHands.transform.Find("LeftHand").gameObject.SetActive(true);
        break;
      case Handedness.Left:
        handWrapPrefabs.Add(LeftHandPrefab);
        ovrHands.transform.Find("RightHand").gameObject.SetActive(true);
        ovrHands.transform.Find("LeftHand").gameObject.SetActive(false);
        break;
      default: // bimanual
        handWrapPrefabs.Add(LeftHandPrefab);
        handWrapPrefabs.Add(RightHandPrefab);
        ovrHands.transform.Find("RightHand").gameObject.SetActive(false);
        ovrHands.transform.Find("LeftHand").gameObject.SetActive(false);
        break;
    }
    
    handAreas = new List<HandArea>();
    var originalHandArea = new List<HandArea>(FindObjectsOfType<HandArea>()).Find(e => e.isOriginal);
    handAreas.Add(originalHandArea);
    var copiedHandAreas = new List<HandArea>(FindObjectsOfType<HandArea>()).FindAll(e => !e.isOriginal);
    handAreas.AddRange(copiedHandAreas);
    handAreas.ForEach((e) => InitArea(e));

    Invoke("AsyncStart", 1f);

    switchTechnique.Init();
  }

  void AsyncStart()
  {
    ActivateHandArea(handAreas.Find((e) => e.isOriginal));
    initialized = true;
  }

  void Update()
  {
    if (!initialized) return;

    int i = switchTechnique.UpdateSwitch();
    if (GetHandAreaIndex(GetActiveHandArea()) != i)
    {
      // todo: d&d
      var beforeArea = GetActiveHandArea();
      var interactables = GetActiveHandArea().wraps.Select(wrap => (wrap as InteractionHandWrap).Unselect()).ToList();
      ActivateHandArea(handAreas[i]);
      var afterArea = GetActiveHandArea();

      interactables.ForEach(interactable =>
      {
        if (interactable != null && !DisableDnd)
        {
          var beforeToAfterRot = Quaternion.Inverse(afterArea.transform.rotation) * beforeArea.transform.rotation;
          var beforeToAfterScale = new Vector3(
            afterArea.transform.lossyScale.x / beforeArea.transform.lossyScale.x,
            afterArea.transform.lossyScale.y / beforeArea.transform.lossyScale.y,
            afterArea.transform.lossyScale.z / beforeArea.transform.lossyScale.z
          );

          var oMt = Matrix4x4.TRS(
            interactable.gameObject.transform.position,
            interactable.gameObject.transform.rotation,
            new Vector3(1, 1, 1)
          );

          var resMat =
            Matrix4x4.Translate(afterArea.transform.position -
                                beforeArea.transform.position) // orignal to copied translation
            * Matrix4x4.TRS(
              beforeArea.transform.position,
              Quaternion.Inverse(beforeToAfterRot),
              beforeToAfterScale
            ) // translation back to original space and rotation & scale around original space
            * Matrix4x4.Translate(-beforeArea.transform.position) // offset translation for next step
            * oMt; // hand anchor

          interactable.gameObject.transform.position = resMat.GetColumn(3);
          interactable.gameObject.transform.rotation = resMat.rotation;
          if (scaleHandModel)
            interactable.gameObject.transform.localScale *= new List<float>
              { beforeToAfterScale.x, beforeToAfterScale.y, beforeToAfterScale.z }.Average();
        }
      });
    }
  }

  void InitArea(HandArea area)
  {
    area.Init(handWrapPrefabs, ovrHands.transform, handAreas[0].transform, scaleHandModel);
    area.SetEnabled(true);
  }

  private void ActivateHandArea(HandArea area)
  {
    handAreas.ForEach((e) =>
    {
      e.SetEnabled(e == area);
    });
  }

  public HandArea GetActiveHandArea()
  {
    HandArea area = null;
    handAreas.ForEach((e) => { if (e.isEnabled) area = e; });
    return area;
  }

  public int GetHandAreaIndex(HandArea area)
  {
    var i = handAreas.FindIndex(e => e == area);
    return i;
  }

  public HandArea GetAreaFromWrap(HandWrap wrap)
  {
    var area = handAreas.Find(a => a.wraps.Contains(wrap));
    return area;
  }
}