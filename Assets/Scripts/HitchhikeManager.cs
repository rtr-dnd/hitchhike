using System.Collections.Generic;
using UnityEngine;
using RootScript;

public class HitchhikeManager : SingletonMonoBehaviour<HitchhikeManager>
{
  public GameObject ovrHands;
  public GameObject handWrapPrefab;
  [HideInInspector]
  public List<HandWrap> handWraps;
  public GameObject originalHandArea;
  public List<GameObject> copiedHandAreas;
  List<GameObject> handAreas;
  public SwitchTechnique switchTechnique;
  private bool initialized = false; // for delayed initial load: ensures hands are displayed correctly

  void Start()
  {
    handAreas = new List<GameObject>();
    handAreas.Add(originalHandArea);
    handAreas.AddRange(copiedHandAreas);

    handWraps = new List<HandWrap>();
    handAreas.ForEach((e) => InitArea(e));

    Invoke("AsyncStart", 1f);

    switchTechnique.Init();
  }

  void AsyncStart()
  {
    ActivateHandWrap(handWraps[0]);
    initialized = true;
  }

  void Update()
  {
    if (!initialized) return;

    int i = switchTechnique.UpdateSwitch();
    if (GetHandWrapIndex(GetActiveHandWrap()) != i)
    {
      // todo: d&d
      // var beforeWrap = GetActiveHandWrap();
      // var interactable = (GetActiveHandWrap() as InteractionHandWrap).Unselect();
      ActivateHandWrap(handWraps[i]);
      // var afterWrap = GetActiveHandWrap();
      // if (interactable != null)
      // {
      //   interactable.gameObject.transform.position += afterWrap.thisSpace.position - beforeWrap.thisSpace.position;
      //   // todo: rotation
      //   (afterWrap as InteractionHandWrap).Select(interactable);
      // }
    }
  }

  void InitArea(GameObject area)
  {
    var initialHandPosition = area.GetChildWithName("InitialHandPosition");
    var handWrapInstance = GameObject.Instantiate(handWrapPrefab, ovrHands.transform);
    var handWrap = handWrapInstance.GetComponent<HandWrap>();
    handWrap.Init(originalHandArea.transform, area.transform);
    handWrap.SetEnabled(true);
    handWraps.Add(handWrap);
  }

  private void ActivateHandWrap(HandWrap wrap)
  {
    handWraps.ForEach((e) =>
    {
      e.SetEnabled(e == wrap);
    });
  }
  public HandWrap GetActiveHandWrap()
  {
    HandWrap wrap = null;
    handWraps.ForEach((e) => { if (e.isEnabled) wrap = e; });
    return wrap;
  }
  public int GetHandWrapIndex(HandWrap wrap)
  {
    var i = handWraps.FindIndex(e => e == wrap);
    return i;
  }
}