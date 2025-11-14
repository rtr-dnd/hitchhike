using UnityEngine;
using Oculus.Interaction.HandGrab;
using Oculus.Interaction.Grab;
using Oculus.Interaction;

namespace Hitchhike
{
  public class HitchhikeHandGrabInteractor : HandGrabInteractor
  {
    private HandGrabResult _pendingCustomResult = null;
    private GrabTypeFlags _pendingCustomGrabType;
    private HandAlignType _pendingCustomHandAlignment;

    /// <summary>
    /// Force select an interactable with a custom HandGrabTarget configuration.
    /// This allows you to preserve the grab pose when transferring an object between hands.
    /// </summary>
    public void ForceSelectWithCustomTarget(
      HandGrabInteractable interactable,
      HandGrabResult customResult,
      GrabTypeFlags grabType,
      HandAlignType handAlignment)
    {
      _pendingCustomResult = customResult;
      _pendingCustomGrabType = grabType;
      _pendingCustomHandAlignment = handAlignment;

      ForceSelect(interactable, true);
    }

    protected override void InteractableSelected(HandGrabInteractable interactable)
    {
      // Set custom target BEFORE calling base to ensure WristToGrabPoseOffset is calculated correctly
      if (_pendingCustomResult != null && interactable != null)
      {
        HandGrabTarget.Set(
          interactable.RelativeTo,
          _pendingCustomHandAlignment,
          _pendingCustomGrabType,
          _pendingCustomResult
        );
      }

      base.InteractableSelected(interactable);

      // Regenerate movement with the custom target
      if (_pendingCustomResult != null && interactable != null)
      {
        Movement = this.GenerateMovement(interactable);
        _pendingCustomResult = null;
      }
    }

    /// <summary>
    /// Get the current grab type (Pinch or Palm) being used
    /// </summary>
    public GrabTypeFlags GetCurrentGrabType()
    {
      return HandGrabTarget.Anchor;
    }

    /// <summary>
    /// Print debug information about the current grab state
    /// </summary>
    public void PrintLog()
    {
      if (SelectedInteractable == null) return;

      Transform relativeTo = SelectedInteractable.RelativeTo;
      Pose worldPose = HandGrabTarget.GetWorldPoseDisplaced(Pose.identity);
      Pose wristPose = WristPoint.GetPose();
      Pose movementPose = Movement != null ? Movement.Pose : Pose.identity;

      Debug.Log($"[Grab] {SelectedInteractable.name} | Anchor:{HandGrabTarget.Anchor} Align:{HandGrabTarget.HandAlignment} | " +
                $"RelTo:{relativeTo.position:F2} | TargetWorld:{worldPose.position:F2} | Wrist:{wristPose.position:F2} | " +
                $"Offset:{WristToGrabPoseOffset.position:F2} | Movement:{movementPose.position:F2} | HasHandPose:{HandGrabTarget.HandPose != null}");
    }
  }
}
