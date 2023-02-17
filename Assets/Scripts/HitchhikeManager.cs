using System.Collections.Generic;
using UnityEngine;
using RootScript;
using System.Linq;

public class HitchhikeManager : SingletonMonoBehaviour<HitchhikeManager>
{
  public GameObject ovrHands;
  public GameObject handWrapPrefab;
  [HideInInspector]
  // public HandArea originalHandArea;
  // public List<HandArea> copiedHandAreas;
  public List<HandArea> handAreas { get; private set; }
  public SwitchTechnique switchTechnique;
  public bool scaleHandModel;
  private bool initialized = false; // for delayed initial load: ensures hands are displayed correctly

  void Start()
  {
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
      var interactable = (GetActiveHandArea().wrap as InteractionHandWrap).Unselect();
      ActivateHandArea(handAreas[i]);
      var afterArea = GetActiveHandArea();
      if (interactable != null)
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
        Matrix4x4.Translate(afterArea.transform.position - beforeArea.transform.position) // orignal to copied translation
        * Matrix4x4.TRS(
            beforeArea.transform.position,
            Quaternion.Inverse(beforeToAfterRot),
            beforeToAfterScale
        ) // translation back to original space and rotation & scale around original space
        * Matrix4x4.Translate(-beforeArea.transform.position) // offset translation for next step
        * oMt; // hand anchor

        interactable.gameObject.transform.position = resMat.GetColumn(3);
        interactable.gameObject.transform.rotation = resMat.rotation;
        interactable.gameObject.transform.localScale *= new List<float> { beforeToAfterScale.x, beforeToAfterScale.y, beforeToAfterScale.z }.Average();
        // (afterWrap as InteractionHandWrap).Select(interactable);
      }
    }
  }

  void InitArea(HandArea area)
  {
    // var initialHandPosition = area.gameObject.GetChildWithName("InitialHandPosition");
    var handWrap = area.Init(handWrapPrefab, ovrHands.transform, handAreas[0].transform, scaleHandModel);
    // handWraps.Add(handWrap);
    area.SetEnabled(true);
  }

  private void ActivateHandArea(HandArea area)
  {
    handAreas.ForEach((e) =>
    {
      e.SetEnabled(e == area);
    });
  }
  // private void ActivateHandWrap(HandWrap wrap)
  // {
  //   handWraps.ForEach((e) =>
  //   {
  //     e.SetEnabled(e == wrap);
  //   });
  // }

  public HandArea GetActiveHandArea()
  {
    HandArea area = null;
    handAreas.ForEach((e) => { if (e.isEnabled) area = e; });
    return area;
  }
  // public HandWrap GetActiveHandWrap()
  // {
  //   HandWrap wrap = null;
  //   handWraps.ForEach((e) => { if (e.isEnabled) wrap = e; });
  //   return wrap;
  // }

  public int GetHandAreaIndex(HandArea area)
  {
    var i = handAreas.FindIndex(e => e == area);
    return i;
  }
  // public int GetHandWrapIndex(HandWrap wrap)
  // {
  //   var i = handWraps.FindIndex(e => e == wrap);
  //   return i;
  // }

  public HandArea GetAreaFromWrap(HandWrap wrap)
  {
    var area = handAreas.Find(e => e.wrap == wrap);
    return area;
  }
}