using System.Collections.Generic;
using UnityEngine;
using RootScript;
using System.Linq;
using Oculus.Interaction.HandGrab;

namespace Hitchhike
{

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
    public List<HandArea> handAreas { get; private set; }
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

    void Start()
    {
      leftHandPrefab = ovrHands.transform.Find("LeftHitchhikeHand").gameObject;
      rightHandPrefab = ovrHands.transform.Find("RightHitchhikeHand").gameObject;
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
          handWrapPrefabs.Add(leftHandPrefab);
          handWrapPrefabs.Add(rightHandPrefab);
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
    }

    void Update()
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
          }
          return; // skip hitchhike when global
        }
      }

      // hitchhike
      int i = switchTechnique.UpdateSwitch();
      if (i >= 0 && i < handAreas.Count && GetHandAreaIndex(GetActiveHandArea()) != i)
      {
        // todo: d&d
        var beforeArea = GetActiveHandArea();
        var interactables = GetActiveHandArea().wraps.Select(wrap => (wrap as InteractionHandWrap).Unselect()).ToList().Distinct().ToList();
        ActivateHandArea(handAreas[i]);
        var afterArea = GetActiveHandArea();

        foreach (var rawInteractable in interactables)
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

          // actual dnd
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
      }
    }

    void UpdateRawHandPoses()
    {
      rawHandPoses = GetActiveHandArea().wraps.Select(w => (w as InteractionHandWrap).GetRawHandPose()).ToList();
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

    void InitArea(HandArea area)
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

}