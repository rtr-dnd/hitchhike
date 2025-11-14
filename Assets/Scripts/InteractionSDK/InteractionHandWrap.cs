using UnityEngine;
using Oculus.Interaction.Input;
using Oculus.Interaction.HandGrab;
using Oculus.Interaction;
using RootScript;
using Oculus.Interaction.Grab;

namespace Hitchhike
{
  public class InteractionHandWrap : HandWrap
  {
    public SkinnedMeshRenderer meshRenderer;
    private HitchhikeFromOVRHandDataSource hds;
    private HitchhikeHandGrabInteractor grab;
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

      grab = gameObject.GetComponentInChildren<HitchhikeHandGrabInteractor>();
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

    /// <summary>
    /// Stores the grab state for transferring between hands
    /// </summary>
    public class SavedGrabState
    {
      public HandGrabTarget target;
      public Pose relativePose;
      public Vector3 objectScale;
    }

    /// <summary>
    /// Unselect the currently grabbed object and save its state
    /// </summary>
    /// <returns>Saved grab state, or null if nothing is selected</returns>
    public SavedGrabState Unselect()
    {
      if (grab.SelectedInteractable == null)
      {
        grab.Unselect();
        if (grabUse != null) grabUse.Unselect();
        return null;
      }

      var state = new SavedGrabState();
      state.target = grab.HandGrabTarget;

      // Get current grab point in world space
      Pose worldGrabPose = grab.HandGrabTarget.GetWorldPoseDisplaced(Pose.identity);
      Transform relativeTo = grab.SelectedInteractable.RelativeTo;

      // Save the object's current scale for later compensation
      state.objectScale = relativeTo.lossyScale;

      // Convert to relative pose (ignoring scale to handle objects with non-uniform scale)
      Vector3 worldOffset = worldGrabPose.position - relativeTo.position;
      Vector3 localOffset = Quaternion.Inverse(relativeTo.rotation) * worldOffset;
      Quaternion localRotation = Quaternion.Inverse(relativeTo.rotation) * worldGrabPose.rotation;

      state.relativePose = new Pose(localOffset, localRotation);

      grab.Unselect();
      if (grabUse != null) grabUse.Unselect();

      return state;
    }

    /// <summary>
    /// Select an interactable with a previously saved grab state
    /// </summary>
    /// <param name="interactable">The interactable to select</param>
    /// <param name="savedState">The saved grab state from a previous Unselect call</param>
    public void Select(HandGrabInteractable interactable, SavedGrabState savedState)
    {
      var newResult = new HandGrabResult();

      // Copy HandPose if it exists
      if (savedState.target.HandPose != null)
      {
        newResult.HasHandPose = true;
        newResult.HandPose.CopyFrom(savedState.target.HandPose);
      }

      // Compensate for scale changes between Unselect and Select
      Vector3 currentScale = interactable.RelativeTo.lossyScale;
      Vector3 scaleRatio = new Vector3(
        currentScale.x / savedState.objectScale.x,
        currentScale.y / savedState.objectScale.y,
        currentScale.z / savedState.objectScale.z
      );

      // Adjust the relative pose to maintain the same world-space grab point
      // When object scales down, the relative offset should scale up proportionally
      Vector3 compensatedPosition = new Vector3(
        savedState.relativePose.position.x * scaleRatio.x,
        savedState.relativePose.position.y * scaleRatio.y,
        savedState.relativePose.position.z * scaleRatio.z
      );

      newResult.RelativePose = new Pose(compensatedPosition, savedState.relativePose.rotation);

      // Force select with the custom target
      grab.ForceSelectWithCustomTarget(
        interactable,
        newResult,
        savedState.target.Anchor,
        savedState.target.HandAlignment
      );
    }

    /// <summary>
    /// Get the currently selected interactable
    /// </summary>
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