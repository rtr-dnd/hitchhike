using System.Collections.Generic;
using UnityEngine;
// using UnityEngine.InputSystem;
using UnityEngine.XR;
using System;
using UnityEngine.UI;

public class InteractionManager : SingletonMonoBehaviour<InteractionManager>
{
  protected List<VirtualObject> vos;
  protected VirtualObject p_voInFocus;
  public VirtualObject voInFocus
  {
    get { return p_voInFocus; }
    set
    {
      if (p_voInFocus == value) return;
      if (p_voInFocus != null) p_voInFocus.OnFocusEnd();
      p_voInFocus = value;
      p_voInFocus.OnFocus();
    }
  }

  protected List<Interactor> interactors;
  protected List<Interactable> interactables;

  // Msgs between interactors/interactables
  SelectedToPreprocessMsg stpMsg;
  List<PreprocessMsg> preprocessMsgs;
  List<PreprocessToProcessMsg> ptpMsgs;
  List<ProcessMsg> processMsgs;

  protected Interactable selected, hovered;

  public Transform fixedHeadOrigin;
  public float mouseGain = 0.3f;
  public float currentMouseGainFactor = 1f;
  public float thresholdAlpha = 30;
  public float planeDepth { get; private set; } = 1.2f;

  protected override void Awake()
  {
    base.Awake();
    interactors = new List<Interactor>(GameObject.FindObjectsOfType<Interactor>());
    interactables = new List<Interactable>(UnityEngine.Object.FindObjectsOfType<Interactable>());
    vos = new List<VirtualObject>(GameObject.FindObjectsOfType<VirtualObject>());
  }

  protected void Start()
  {
    XRSettings.eyeTextureResolutionScale = 2f;

    // init vo positions
    var i = 1;
    vos.ForEach((element) =>
    {
      element.OnFocusEnd();
      var coor = element.GetCoordinate();
      element.SetCoordinate(new Vector3(planeDepth, 30 * i / 2 * Mathf.Pow(-1, i - 1), 0));
      element.SetPosture(Quaternion.identity);
      i++;
    });
  }

  protected void Update()
  {
    HandleGlobalEvents(); // keyboard events etc.
    AskSelectedInteractable(); // if ray should be passive, interactable determines next ray position
    PreprocessInteractors(); // determines new ray direction, raycasthit, detect selected/hovered objects
    PreprocessInteractables(); // notify hover event to objects, ask objects about request for interactor e.g. hidden ray, specify cursor or boardsurface stickiness position
    ProcessInteractors(); // moves ray, update visual, set cursor
    ProcessInteractables(); // objects move
    ProcessVirtualObjects(); // update vo visual using hover info
  }
  protected void HandleGlobalEvents()
  {
    // var keyboard = Keyboard.current;
    // if (keyboard == null) return;
    // if (keyboard.spaceKey.wasPressedThisFrame)
    if (Input.GetKeyDown(KeyCode.Space))
    {
      Cursor.lockState = Cursor.lockState == CursorLockMode.Locked ? CursorLockMode.None : CursorLockMode.Locked;
    }
  }
  protected void AskSelectedInteractable()
  {
    stpMsg = new SelectedToPreprocessMsg();
    if (selected) selected.BeforePreprocessIfSelected(out stpMsg);
  }
  protected void PreprocessInteractors()
  {
    preprocessMsgs = new List<PreprocessMsg>();
    foreach (var interactor in interactors)
    {
      interactor.PreprocessInteractor(stpMsg, out PreprocessMsg preprocessMsg);
      preprocessMsgs.Add(preprocessMsg);
    }
    selected = (preprocessMsgs[0].selected?.interactable != null) ? preprocessMsgs[0].selected?.interactable : null; // todo: aggregate msgs
    hovered = (preprocessMsgs[0].hovered?.interactable != null) ? preprocessMsgs[0].hovered?.interactable : null; // todo: aggregate msgs
  }
  protected void PreprocessInteractables()
  {
    PreprocessMsg preprocessMsg = preprocessMsgs[0]; // todo: aggregate msgs for multiple interactors
    ptpMsgs = new List<PreprocessToProcessMsg>();
    foreach (var interactable in interactables)
    {
      interactable.PreprocessInteractable(preprocessMsg, out PreprocessToProcessMsg ptpMsg);
      ptpMsgs.Add(ptpMsg);
    }
  }
  protected void ProcessInteractors()
  {
    PreprocessToProcessMsg ptpMsg = MsgUtility.AggregatePtp(ptpMsgs);
    processMsgs = new List<ProcessMsg>();
    foreach (var interactor in interactors)
    {
      interactor.ProcessInteractor(ptpMsg, out ProcessMsg processMsg);
      processMsgs.Add(processMsg);
    }
  }
  protected void ProcessInteractables()
  {
    ProcessMsg processMsg = new ProcessMsg(); // todo: aggregate msgs
    foreach (var interactable in interactables)
    {
      interactable.SetIsHover(
        interactable == preprocessMsgs[0].hovered?.interactable,
        interactable == preprocessMsgs[0].hovered?.interactable ? preprocessMsgs[0].hovered?.hitPosition : null,
        interactable == preprocessMsgs[0].hovered?.interactable ? preprocessMsgs[0].hovered?.hitNormal : null);
      interactable.SetIsSelected(
        interactable == preprocessMsgs[0].selected?.interactable,
        interactable == preprocessMsgs[0].selected?.interactable ? preprocessMsgs[0].selected?.hitPosition : null,
        interactable == preprocessMsgs[0].selected?.interactable ? preprocessMsgs[0].selected?.hitNormal : null);
      // todo: set dnd
      interactable.ProcessInteractable(processMsg);
    }
  }
  protected void ProcessVirtualObjects()
  {
    vos.ForEach((v) => { v.ProcessVirtualObject(); });
  }
}