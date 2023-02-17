using UnityEngine;
// using UnityEngine.InputSystem;

namespace V1
{
  public class ObjectViewerContent : VirtualObjectContent
  {
    ObjectViewerYawHandle yawHandle;
    ObjectViewerPitchHandle pitchHandle;
    protected override void Awake()
    {
      base.Awake();
      yawHandle = vo.gameObject.GetComponentInChildren<ObjectViewerYawHandle>();
      pitchHandle = vo.gameObject.GetComponentInChildren<ObjectViewerPitchHandle>();
    }
    protected override void OnHoverStay(Vector3 hitPosition, Vector3 hitNormal)
    {
      base.OnHoverStay(hitPosition, hitNormal);
      // var mouse = Mouse.current;
      // var keyboard = Keyboard.current;
      // if (keyboard.shiftKey.isPressed)
      if (Input.GetKeyDown(KeyCode.LeftShift) || Input.GetKeyDown(KeyCode.RightShift))
      {
        pitchHandle.Rotate(Input.mouseScrollDelta.y * InteractionManager.Instance.mouseGain);
      }
      else
      {
        yawHandle.Rotate(Input.mouseScrollDelta.y * InteractionManager.Instance.mouseGain);
      }
    }
  }
}