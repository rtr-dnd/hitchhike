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
    private HitchhikeFromOVRHandDataSource hds;
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
        hds.originalSpace = value;
      }
    }
    public override Transform thisSpace
    {
      get { return _thisSpace; }
      set
      {
        _thisSpace = value;
        hds.thisSpace = value;
        hds.defaultPosition = area.defaultHandPosition.position;
      }
    }

    void Awake()
    {
      var dataSourceGo = transform.Find("RightHitchhikeHandV2/OVRHandDataSource");
      if (dataSourceGo == null) dataSourceGo = transform.Find("LeftHitchhikeHandV2/OVRHandDataSource");
      Debug.Log("dataSourceGo: " + dataSourceGo);

      hds = dataSourceGo.GetComponent<HitchhikeFromOVRHandDataSource>();
      hds._cameraRigRef = gameObject.GetComponentInParent<OVRCameraRigRef>();
      hds.InjectHandSkeletonProvider(gameObject.GetComponentInParent<HandSkeletonOVR>());
      hds.InjectTrackingToWorldTransformer(gameObject.GetComponentInParent<TrackingToWorldTransformerOVR>());
      Debug.Log("dataSourceGo hds: " + hds);

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
      hds.scaleHandModel = scale;
      mirrored = mirror;
      // hds.mirrored = mirror; // todo: meta xr
      // hds.doNotResetHand = doNotResetHandPosition; // todo: meta xr
      filterRatio = ratio;
      hds.filterRatio = ratio;
      state = 1;
      // hds.initialCameraRigPosition = HitchhikeManager.Instance.initialCameraRigPosition; // todo: meta xr
    }

    public override void SetEnabled(bool enabled)
    {
      base.SetEnabled(enabled);
      ChangeMaterial(enabled);
      SetUpdating(enabled);
    }

    public override void ChangeMaterial(bool enabled)
    {
      meshRenderer.materials = enabled ? new Material[] { enabledMaterial } : new Material[] { disabledMaterial };
    }

    public override void SetUpdating(bool updating)
    {
      base.SetUpdating(updating);
      hds.isUpdating = updating;
    }

    public override void SetVisible(bool visible)
    {
      base.SetVisible(visible);
      meshRenderer.gameObject.SetActive(visible);
    }

    public Pose GetRawHandPose()
    {
      return hds.rawHandPose;
    }

    public void Unselect()
    {
      grab.Unselect();
      if (grabUse != null) grabUse.Unselect();
    }

    public void Select(HandGrabInteractable interactable)
    {
      // grab.ForceSelectOnce(interactable); // todo: meta xr
      grab.ForceSelect(interactable, true); // todo: meta xr
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