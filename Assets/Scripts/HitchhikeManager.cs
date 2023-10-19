using System.Collections.Generic;
using UnityEngine;
using RootScript;
using System.Linq;
using Oculus.Interaction.HandGrab;
using Oculus.Interaction;
using System;
using Unity.VisualScripting;

namespace Hitchhike
{

  public enum Handedness
  {
    None,
    Right,
    Left,
    Bimanual
  }

  public enum OriginalFollowsHeadMovement
  {
    Never,
    Always,
    Partial
  }

  public class HitchhikeManager : SingletonMonoBehaviour<HitchhikeManager>
  {
    public GameObject ovrHands;
    public Handedness hitchhikeHandedness = Handedness.Right;

    [HideInInspector]
    public GameObject leftHandPrefab;
    [HideInInspector]
    public GameObject rightHandPrefab;
    [HideInInspector]
    public List<GameObject> handWrapPrefabs;
    [HideInInspector]
    public List<Pose> rawHandPoses;
    public GameObject handAreaPrefab; // used to spawn new hand areas at runtime
    [HideInInspector]
    public List<HandArea> handAreas { get; protected set; }
    public SwitchTechnique switchTechnique;
    public GlobalTechnique globalTechnique;
    [HideInInspector]
    public bool isGlobal;
    public bool scaleHandModel;
    public bool DisableDnd = false;
    public bool billboard = true;

    [SerializeField]
    GameObject _billboardingTarget; // if nothing is specified, billboard to originalHandArea
    [HideInInspector]
    public GameObject billboardingTarget
    {
      get
      {
        return _billboardingTarget == null ? handAreas[0].gameObject : _billboardingTarget;
      }
      private set { _billboardingTarget = value; }
    }

    // [Header("Original Follows Head Movement")]
    public OriginalFollowsHeadMovement originalFollowsHeadMovement;
    protected bool originalFollows_hasInitialized = false;
    Vector3 headToOriginal;
    Vector3 initialHeadForward;
    Quaternion initialOriginalRotation;
    public Transform head;
    public Material transparentMaterial;
    public float partialFollowDelay = 0.1f;

    [HideInInspector]
    public Vector3 initialCameraRigPosition;

    override protected void Awake()
    {
      base.Awake();
      initialCameraRigPosition = ovrHands.GetComponentInParent<OVRCameraRig>().transform.position;
    }

    virtual protected void Start()
    {
      leftHandPrefab = ovrHands.transform.Find("LeftHandWrap").gameObject;
      rightHandPrefab = ovrHands.transform.Find("RightHandWrap").gameObject;
      handWrapPrefabs = new List<GameObject>();
      switch (hitchhikeHandedness)
      {
        case Handedness.None:
          ovrHands.transform.Find("RightHand").gameObject.SetActive(true);
          ovrHands.transform.Find("LeftHand").gameObject.SetActive(true);
          break;
        case Handedness.Right:
          handWrapPrefabs.Add(rightHandPrefab);
          ovrHands.transform.Find("RightHand").gameObject.SetActive(false);
          ovrHands.transform.Find("LeftHand").gameObject.SetActive(true);
          break;
        case Handedness.Left:
          handWrapPrefabs.Add(leftHandPrefab);
          ovrHands.transform.Find("RightHand").gameObject.SetActive(true);
          ovrHands.transform.Find("LeftHand").gameObject.SetActive(false);
          break;
        default: // bimanual
          handWrapPrefabs.Add(rightHandPrefab);
          handWrapPrefabs.Add(leftHandPrefab);
          ovrHands.transform.Find("RightHand").gameObject.SetActive(false);
          ovrHands.transform.Find("LeftHand").gameObject.SetActive(false);
          break;
      }

      handAreas = new List<HandArea>();
      var originalHandArea = new List<HandArea>(FindObjectsOfType<HandArea>()).Find(e => e.isOriginal);
      handAreas.Add(originalHandArea);
      var copiedHandAreas = new List<HandArea>(FindObjectsOfType<HandArea>()).FindAll(e => (!e.isOriginal && !e.isInvisible));
      handAreas.AddRange(copiedHandAreas);
      handAreas.ForEach((e) => InitArea(e));

      ActivateHandArea(handAreas.Find((e) => e.isOriginal));
      rightHandPrefab.SetActive(false);
      leftHandPrefab.SetActive(false);

      switchTechnique.Init();
      if (globalTechnique != null) globalTechnique.Init();

      if (originalFollowsHeadMovement != OriginalFollowsHeadMovement.Never)
      {
        StartCoroutine(HitchhikeExtensions.DelayMethod(1f, () => InitOriginalFollow()));
      }
    }

    protected void InitOriginalFollow()
    {
      var originalHandArea = new List<HandArea>(FindObjectsOfType<HandArea>()).Find(e => e.isOriginal);
      headToOriginal = originalHandArea.transform.position - head.transform.position;
      initialHeadForward = head.transform.forward;
      initialOriginalRotation = originalHandArea.transform.rotation;
      // originalHandArea.wraps.ForEach((w) =>
      // {
      //   w.disabledMaterial = transparentMaterial;
      // });
      originalFollows_hasInitialized = true;
    }
    public void RepositionOriginalFollow(Vector3 newPosition, Quaternion newRotation)
    {
      var originalHandArea = new List<HandArea>(FindObjectsOfType<HandArea>()).Find(e => e.isOriginal);
      headToOriginal = newPosition - head.transform.position;
      initialHeadForward = head.transform.forward;
      initialOriginalRotation = newRotation;
    }
    protected void UpdateOriginalPosition()
    {
      var originalHandArea = handAreas[0];
      var horizontalAngle = Vector3.SignedAngle(
        Vector3.ProjectOnPlane(initialHeadForward, Vector3.up),
        Vector3.ProjectOnPlane(head.forward, Vector3.up),
        Vector3.up
      );
      originalHandArea.transform.position = head.position + Quaternion.AngleAxis(horizontalAngle, Vector3.up) * headToOriginal;
      originalHandArea.transform.rotation = initialOriginalRotation;
      originalHandArea.transform.Rotate(new Vector3(0, horizontalAngle, 0));
      originalHandArea.AfterTransformChange();
    }

    virtual protected void Update()
    {
      UpdateRawHandPoses();

      if (globalTechnique != null)
      {
        globalTechnique.UpdateGlobal();
        if (!isGlobal && globalTechnique.isGlobalActive())
        {
          isGlobal = true;
          globalTechnique.OnGlobalStart(GetActiveHandArea());
        }
        if (isGlobal)
        {
          globalTechnique.OnGlobalStay(GetActiveHandArea());
          if (!globalTechnique.isGlobalActive())
          {
            isGlobal = false;
            globalTechnique.OnGlobalEnd(GetActiveHandArea());
            if (originalFollowsHeadMovement == OriginalFollowsHeadMovement.Partial) StartCoroutine(HitchhikeExtensions.DelayMethod(partialFollowDelay, () => UpdateOriginalPosition()));
          }
          return; // skip hitchhike when global
        }
      }

      if (originalFollowsHeadMovement == OriginalFollowsHeadMovement.Always && originalFollows_hasInitialized) UpdateOriginalPosition();

      // hitchhike
      int i = switchTechnique.UpdateSwitch();
      if (i >= 0 && i < handAreas.Count && GetHandAreaIndex(GetActiveHandArea()) != i)
      {
        // d&d
        var beforeArea = GetActiveHandArea();
        var interactables = beforeArea.wraps.Select(wrap => (wrap as InteractionHandWrap).GetCurrentInteractable()).ToList();
        if (!beforeArea.doNotResetHand) beforeArea.wraps.ForEach(wrap => { (wrap as InteractionHandWrap).Unselect(); });
        ActivateHandArea(handAreas[i]);
        var afterArea = GetActiveHandArea();

        if (i != 0 && originalFollowsHeadMovement == OriginalFollowsHeadMovement.Partial) StartCoroutine(HitchhikeExtensions.DelayMethod(partialFollowDelay, () => UpdateOriginalPosition()));

        List<HandGrabInteractable> alreadyDroppedInteractables = new List<HandGrabInteractable>();
        foreach (var (rawInteractable, handIndex) in interactables.Select((value, index) => (value, index)))
        {
          // determine if dnd can be performed
          if (rawInteractable == null || DisableDnd) continue;
          var interactable = rawInteractable;
          var pdd = interactable.GetComponent<PreventDragAndDrop>();
          if (pdd != null)
          {
            var mtoi = pdd.moveThisObjectInstead;
            if (mtoi != null && mtoi.GetComponent<HandGrabInteractable>() != null)
            {
              interactable = mtoi.GetComponent<HandGrabInteractable>();
            }
            else
            {
              continue;
            }
          }
          if (alreadyDroppedInteractables.FindIndex(v => v == interactable) != -1) continue;

          var grabbable = interactable.GetComponentInParent<Grabbable>();

          // actual dnd
          var beforeToAfterRot = Quaternion.Inverse(afterArea.transform.rotation) * beforeArea.transform.rotation;
          var beforeToAfterScale = new Vector3(
            afterArea.transform.lossyScale.x / beforeArea.transform.lossyScale.x,
            afterArea.transform.lossyScale.y / beforeArea.transform.lossyScale.y,
            afterArea.transform.lossyScale.z / beforeArea.transform.lossyScale.z
          );

          var oMt = Matrix4x4.TRS(
            grabbable.transform.position,
            grabbable.transform.rotation,
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

          grabbable.transform.position = resMat.GetColumn(3);
          grabbable.transform.rotation = resMat.rotation;
          if (scaleHandModel)
            grabbable.transform.localScale *= new List<float>
                { beforeToAfterScale.x, beforeToAfterScale.y, beforeToAfterScale.z }.Average();
          (afterArea.wraps[handIndex] as InteractionHandWrap).Select(interactable);
          alreadyDroppedInteractables.Add(interactable);
        }
      }
    }

    protected void UpdateRawHandPoses()
    {
      rawHandPoses = GetActiveHandArea().wraps.Select(w => (w as InteractionHandWrap).GetRawHandPose()).ToList();
    }

    public void OnTeleport()
    {
      if (originalFollowsHeadMovement == OriginalFollowsHeadMovement.Always) UpdateOriginalPosition();
      if (originalFollowsHeadMovement == OriginalFollowsHeadMovement.Partial) StartCoroutine(HitchhikeExtensions.DelayMethod(partialFollowDelay, () => UpdateOriginalPosition()));
    }

    public HandArea AddArea(Vector3 position)
    {
      rightHandPrefab.SetActive(true);
      leftHandPrefab.SetActive(true);
      var newArea = GameObject.Instantiate(handAreaPrefab, position, handAreaPrefab.transform.rotation).GetComponent<HandArea>();
      InitArea(newArea);
      handAreas.Add(newArea);
      rightHandPrefab.SetActive(false);
      leftHandPrefab.SetActive(false);
      newArea.SetEnabled(false);
      if (originalFollowsHeadMovement == OriginalFollowsHeadMovement.Partial) StartCoroutine(HitchhikeExtensions.DelayMethod(partialFollowDelay, () => UpdateOriginalPosition()));
      return newArea;
    }
    public HandArea AddArea(Vector3 position, Transform parent)
    {
      rightHandPrefab.SetActive(true);
      leftHandPrefab.SetActive(true);
      var newArea = GameObject.Instantiate(handAreaPrefab, parent).GetComponent<HandArea>();
      newArea.transform.position = position;
      newArea.transform.rotation = handAreaPrefab.transform.rotation;
      InitArea(newArea);
      handAreas.Add(newArea);
      rightHandPrefab.SetActive(false);
      leftHandPrefab.SetActive(false);
      newArea.SetEnabled(false);
      if (originalFollowsHeadMovement == OriginalFollowsHeadMovement.Partial) StartCoroutine(HitchhikeExtensions.DelayMethod(partialFollowDelay, () => UpdateOriginalPosition()));
      return newArea;
    }


    public bool DeleteArea(HandArea area)
    {
      if (area.isOriginal) return false;
      if (area == GetActiveHandArea()) ActivateHandArea(handAreas[0]);
      handAreas.Remove(area);
      Destroy(area.gameObject);
      return true;
    }

    protected void InitArea(HandArea area)
    {
      area.Init(
        handWrapPrefabs,
        ovrHands.transform,
        handAreas[0],
        true,
        scaleHandModel,
        billboard,
        billboardingTarget
      );
      area.SetEnabled(true);
    }

    protected void ActivateHandArea(HandArea area)
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

}