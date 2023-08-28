using System.Collections.Generic;
using UnityEngine;
using RootScript;
using System.Linq;
using Oculus.Interaction.HandGrab;

namespace Hitchhike
{
  public class GazeHand2Manager : HitchhikeManager, IRemoteHandManager
  {
    protected List<RemoteHandTarget> remoteHandTargets;
    bool isPaused;

    protected override void Awake()
    {
      base.Awake();
      remoteHandTargets = FindObjectsOfType<RemoteHandTarget>().ToList();
      foreach (var target in remoteHandTargets) { target.remoteHandManager = this; }
    }

    public void SetIsPaused(bool paused)
    {
      // remotehandtarget calls this when the object is grabbed
      isPaused = paused;
    }

    protected override void Start()
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

      remoteHandTargets.ForEach((e) => AddArea(e.transform.position, e.transform));

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

    protected override void Update()
    {
      UpdateRawHandPoses();

      if (originalFollowsHeadMovement == OriginalFollowsHeadMovement.Always && originalFollows_hasInitialized) UpdateOriginalPosition();

      // hitchhike
      int i = switchTechnique.UpdateSwitch();

      if (i == 0)
      {
        // gaze + pinch

      }

      if (i >= 0 && i < handAreas.Count && GetHandAreaIndex(GetActiveHandArea()) != i)
      {
        // d&d
        var beforeArea = GetActiveHandArea();
        var interactables = beforeArea.wraps.Select(wrap => (wrap as InteractionHandWrap).GetCurrentInteractable()).ToList();
        beforeArea.wraps.ForEach(wrap => { (wrap as InteractionHandWrap).Unselect(); });
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
          (afterArea.wraps[handIndex] as InteractionHandWrap).Select(interactable);
          alreadyDroppedInteractables.Add(interactable);
        }
      }
    }
  }

}