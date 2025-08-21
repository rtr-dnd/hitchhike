using UnityEngine;
using Oculus.Interaction.Input;
using Oculus.Interaction.HandGrab;
using Oculus.Interaction;
using RootScript;

namespace Hitchhike
{
  public class InteractionHandWrap : HandWrap
  {
    public SkinnedMeshRenderer meshRenderer;
    private FromOVRHandDataSource ods;
    private HandGrabInteractor grab;
    private HandGrabUseInteractor grabUse;
    private int state = 0;
    // 0: before Init()
    // 1: waiting for IsHighConfidence
    // 2: found first confident hand pose; is valid
    public override Transform originalSpace
    {
      get { return _originalSpace; }
      set
      {
        _originalSpace = value;
        // ods.originalSpace = value; // todo: meta xr
      }
    }
    public override Transform thisSpace
    {
      get { return _thisSpace; }
      set
      {
        _thisSpace = value;
        // ods.thisSpace = value; // todo: meta xr
        // ods.defaultPosition = area.defaultHandPosition.position; // todo: meta xr
      }
    }

    void Awake()
    {
      ods = gameObject.GetComponentInChildren<FromOVRHandDataSource>();
      // ods._cameraRigRef = gameObject.GetComponentInParent<OVRCameraRigRef>(); // todo: meta xr
      ods.InjectHandSkeletonProvider(gameObject.GetComponentInParent<HandSkeletonOVR>());
      ods.InjectTrackingToWorldTransformer(gameObject.GetComponentInParent<TrackingToWorldTransformerOVR>());

      grab = gameObject.GetComponentInChildren<HandGrabInteractor>();
      grabUse = gameObject.GetComponentInChildren<HandGrabUseInteractor>();
    }

    void Update()
    {
      // initializing; waits for first confident hand data and then disables itself
      if (state == 1)
      {
        var hand = mainHand.GetComponent<Hand>();
        if (hand == null) return;
        if (hand.IsHighConfidence)
        {
          state = 2;
          SetUpdating(isEnabled);
        }
        else
        {
          SetUpdating(true);
        }
      }
    }

    public override void Init(HandArea handArea, Transform original, Transform copied, bool scale, bool mirror, bool doNotResetHandPosition, float ratio)
    {
      area = handArea;
      originalSpace = original;
      thisSpace = copied;
      scaleHandModel = scale;
      // ods.scaleHandModel = scale; // todo: meta xr
      mirrored = mirror;
      // ods.mirrored = mirror; // todo: meta xr
      // ods.doNotResetHand = doNotResetHandPosition; // todo: meta xr
      filterRatio = ratio;
      // ods.filterRatio = ratio; // todo: meta xr
      state = 1;
      // ods.initialCameraRigPosition = HitchhikeManager.Instance.initialCameraRigPosition; // todo: meta xr
    }

    public override void SetEnabled(bool enabled)
    {
      base.SetEnabled(enabled);
      ChangeMaterial(enabled);
      SetUpdating(enabled);
    }

    public override void ChangeMaterial(bool enabled)
    {
      meshRenderer.materials = enabled ? new Material[] { disabledMaterial, enabledMaterial } : new Material[] { disabledMaterial };
    }

    public override void SetUpdating(bool updating)
    {
      base.SetUpdating(updating);
      // ods.isUpdating = updating; // todo: meta xr
    }

    public override void SetVisible(bool visible)
    {
      base.SetVisible(visible);
      meshRenderer.gameObject.SetActive(visible);
    }

    public Pose GetRawHandPose()
    {
      // return ods.rawHandPose; // todo: meta xr
      return new Pose();
    }

    public void Unselect()
    {
      grab.Unselect();
      if (grabUse != null) grabUse.Unselect();
    }

    public void Select(HandGrabInteractable interactable)
    {
      // grab.ForceSelectOnce(interactable); // todo: meta xr
    }

    public HandGrabInteractable GetCurrentInteractable()
    {
      return grab.SelectedInteractable;
    }

    public void Detect()
    {
      Debug.Log("gesture detected");
    }
  }

}