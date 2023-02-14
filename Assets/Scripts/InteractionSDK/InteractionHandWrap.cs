using UnityEngine;
using Oculus.Interaction.Input;
using Oculus.Interaction.HandGrab;

public class InteractionHandWrap : HandWrap
{
  private FromOVRHandDataSource ods;
  private HandGrabInteractor grab;

  void Awake()
  {
    ods = gameObject.GetComponentInChildren<FromOVRHandDataSource>();
    ods._cameraRigRef = gameObject.GetComponentInParent<OVRCameraRigRef>();
    ods.InjectHandSkeletonProvider(gameObject.GetComponentInParent<HandSkeletonOVR>());
    ods.InjectTrackingToWorldTransformer(gameObject.GetComponentInParent<TrackingToWorldTransformerOVR>());

    grab = gameObject.GetComponentInChildren<HandGrabInteractor>();
  }

  public override void Init(Transform original, Transform copied)
  {
    originalSpace = original;
    ods.originalSpace = original;
    thisSpace = copied;
    ods.thisSpace = copied;
    ods.defaultPosition = copied.position;
  }

  public override void SetEnabled(bool enabled)
  {
    base.SetEnabled(enabled);
    ChangeMaterial(enabled);
    SetUpdating(enabled);
  }

  public override void ChangeMaterial(bool enabled)
  {
    // base.ChangeMaterial(enabled);
  }

  public override void SetUpdating(bool updating)
  {
    base.SetUpdating(updating);
    ods.isUpdating = updating;
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

  void Update()
  {

  }
}