using UnityEngine;
using Oculus.Interaction.Input;
using Oculus.Interaction.HandGrab;
using Oculus.Interaction;

namespace Hitchhike
{
  public class InteractionHandWrap : HandWrap
  {
    public SkinnedMeshRenderer meshRenderer;
    private FromOVRHandDataSource ods;
    private HandGrabInteractor grab;
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
        ods.originalSpace = value;
      }
    }
    public override Transform thisSpace
    {
      get { return _thisSpace; }
      set
      {
        _thisSpace = value;
        ods.thisSpace = value;
        ods.defaultPosition = value.position;
      }
    }

    void Awake()
    {
      ods = gameObject.GetComponentInChildren<FromOVRHandDataSource>();
      ods._cameraRigRef = gameObject.GetComponentInParent<OVRCameraRigRef>();
      ods.InjectHandSkeletonProvider(gameObject.GetComponentInParent<HandSkeletonOVR>());
      ods.InjectTrackingToWorldTransformer(gameObject.GetComponentInParent<TrackingToWorldTransformerOVR>());

      grab = gameObject.GetComponentInChildren<HandGrabInteractor>();
    }

    void Update()
    {
      // initializing; waits for first confident hand data and then disables itself
      if (state == 1)
      {
        var hand = gameObject.GetComponent<Hand>();
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

    public override void Init(HandArea handArea, Transform original, Transform copied, bool scale, float ratio)
    {
      area = handArea;
      originalSpace = original;
      thisSpace = copied;
      scaleHandModel = scale;
      ods.scaleHandModel = scale;
      filterRatio = ratio;
      ods.filterRatio = ratio;
      state = 1;
    }

    public override void SetEnabled(bool enabled)
    {
      base.SetEnabled(enabled);
      ChangeMaterial(enabled);
      SetUpdating(enabled);
    }

    public override void ChangeMaterial(bool enabled)
    {
      meshRenderer.materials = new Material[] { enabled ? enabledMaterial : disabledMaterial };
    }

    public override void SetUpdating(bool updating)
    {
      base.SetUpdating(updating);
      ods.isUpdating = updating;
    }

    public Pose GetRawHandPose()
    {
      return ods.rawHandPose;
    }

    public HandGrabInteractable Unselect()
    {
      var interactable = grab.SelectedInteractable;
      if (grab.HasSelectedInteractable) grab.Unselect();
      return interactable;
    }

    public void Select(HandGrabInteractable interactable)
    {
      // grab._candidate = interactable;
      // grab.Hover();
      // grab.Select();
      // grab.SelectInteractable(interactable);
    }

    public void Detect()
    {
      Debug.Log("gesture detected");
    }
  }

}