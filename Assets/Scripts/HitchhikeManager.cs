using System.Collections.Generic;
using UnityEngine;
using RootScript;

public class HitchhikeManager: MonoBehaviour
{
  public GameObject ovrHands;
  public GameObject handWrapPrefab;
  List<HandWrap> handWraps;
  public GameObject originalHandArea;
  public List<GameObject> copiedHandAreas;
  List<GameObject> handAreas;
  public QuestProGazeSwitchTechnique switchTechnique;

  void Start()
  {
    handAreas = new List<GameObject>();
    handAreas.Add(originalHandArea);
    handAreas.AddRange(copiedHandAreas);

    handWraps = new List<HandWrap>();
    handAreas.ForEach((e) => InitArea(e));
    // ActivateHandWrap(handWraps[0]);
  }

  void InitArea(GameObject area) {
    var initialHandPosition = area.GetChildWithName("InitialHandPosition");
    var handWrapInstance = GameObject.Instantiate(handWrapPrefab, ovrHands.transform);
    var handWrap = handWrapInstance.GetComponent<HandWrap>();
    handWrap.Init(originalHandArea.transform, area.transform);
    // handWrap.SetEnabled(false);
    handWraps.Add(handWrap);
  }
}