using UnityEngine;
using Oculus.Interaction.Input;

public class InteractionHandWrap : HandWrap
{
  private FromOVRHandDataSource ods;
  void Awake()
  {
    ods = gameObject.GetComponentInChildren<FromOVRHandDataSource>();
    ods._cameraRigRef = gameObject.GetComponentInParent<OVRCameraRigRef>();
    ods.InjectHandSkeletonProvider(gameObject.GetComponentInParent<HandSkeletonOVR>());
    ods.InjectTrackingToWorldTransformer(gameObject.GetComponentInParent<TrackingToWorldTransformerOVR>());
  }

  public override void Init(Transform original, Transform copied)
  {
    ods.originalSpace = original;
    ods.thisSpace = copied;
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

  // private SkinnedMeshRenderer GetRenderer()
  // {
  //   return gameObject.GetComponentInChildren<SkinnedMeshRenderer>();
  // }
  // private OVRSkeleton GetSkelton()
  // {
  //   return gameObject.GetComponentInChildren<OVRSkeleton>();
  // }
}