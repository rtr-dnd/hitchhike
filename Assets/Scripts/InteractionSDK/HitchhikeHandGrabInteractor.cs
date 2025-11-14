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
    /// This allows to preserve the grab pose when transferring an object between hands.
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
  }
}
