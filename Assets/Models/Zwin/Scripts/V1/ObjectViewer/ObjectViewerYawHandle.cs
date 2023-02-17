using System.Collections.Generic;
using System.Linq;
using UnityEngine;
// using UnityEngine.InputSystem;

namespace V1
{
  public class ObjectViewerYawHandle : VirtualObjectInteractable
  {
    Vector3 localHitPosition;
    Vector3 localHitNormal;
    List<Transform> rotationTargets;
    ObjectViewerPitchHandle pitchHandle;

    public MeshRenderer handle;
    public MeshRenderer hoverHandle;
    protected override void Awake()
    {
      base.Awake();
      rotationTargets = new List<Transform>();
      rotationTargets.AddRange(vo.GetComponentsInChildren<ObjectViewerPitchHandle>().Select(e => e.transform).ToList());
      rotationTargets.AddRange(vo.GetComponentsInChildren<VirtualObjectContent>().Select(e => e.transform).ToList());
      rotationTargets.Add(transform);
      pitchHandle = vo.gameObject.GetComponentInChildren<ObjectViewerPitchHandle>();

      handle.gameObject.SetActive(false);
      hoverHandle.gameObject.SetActive(false);
    }

    public override void OnParentHover()
    {
      base.OnParentHover();
      hoverHandle.gameObject.SetActive(true);
    }
    public override void OnParentHoverEnd()
    {
      base.OnParentHoverEnd();
      hoverHandle.gameObject.SetActive(false);
    }
    protected override void OnHover(Vector3 hitPosition, Vector3 hitNormal)
    {
      base.OnHover(hitPosition, hitNormal);
      handle.gameObject.SetActive(true);
    }
    protected override void OnHoverStay(Vector3 hitPosition, Vector3 hitNormal)
    {
      base.OnHoverStay(hitPosition, hitNormal);
      // var mouse = Mouse.current;
      // var keyboard = Keyboard.current;
      // if (keyboard.shiftKey.isPressed)
      if (Input.GetKey(KeyCode.LeftShift) || Input.GetKey(KeyCode.RightShift))
      {
        // pitchHandle.Rotate(mouse.scroll.ReadValue().y * InteractionManager.Instance.mouseGain * 4f);
        pitchHandle.Rotate(Input.mouseScrollDelta.y * InteractionManager.Instance.mouseGain * 4f);
      }
      else
      {
        // Rotate(mouse.scroll.ReadValue().y * InteractionManager.Instance.mouseGain);
        Rotate(Input.mouseScrollDelta.y * InteractionManager.Instance.mouseGain);
      }
    }
    protected override void OnHoverEnd()
    {
      base.OnHoverEnd();
      if (isSelected) return;
      handle.gameObject.SetActive(false);
    }
    protected override void OnSelect(Vector3 hitPosition, Vector3 hitNormal)
    {
      base.OnSelect(hitPosition, hitNormal);
      localHitPosition = vo.transform.InverseTransformPoint(hitPosition);
      localHitNormal = hitNormal;
    }
    protected override void OnSelectEnd()
    {
      base.OnSelectEnd();
      if (!isHovered) handle.gameObject.SetActive(false);
    }

    public override void BeforePreprocessIfSelected(out SelectedToPreprocessMsg msgToInteractor)
    {
      base.BeforePreprocessIfSelected(out msgToInteractor);
      // var mouse = Mouse.current;
      var mouseGain = InteractionManager.Instance.mouseGain * 2;
      rotationTargets.ForEach(e =>
        // e.RotateAround(transform.position, transform.up, -mouse.delta.x.ReadValue() * mouseGain)
        e.RotateAround(transform.position, transform.up, -Input.GetAxis("Mouse X") * mouseGain)
      );

      msgToInteractor.rayBehavior = RayBehavior.Passive;
      msgToInteractor.rayEnd = vo.transform.TransformPoint(localHitPosition);
      msgToInteractor.rayNormal = localHitNormal;
    }

    public override void PreprocessInteractable(PreprocessMsg preprocessMsg, out PreprocessToProcessMsg ptpMsg)
    {
      base.PreprocessInteractable(preprocessMsg, out ptpMsg);
      if (isHovered || isSelected) ptpMsg.rayKind = RayTipKind.Horizontal;
    }

    public void Rotate(float val)
    {
      rotationTargets.ForEach(e =>
        e.RotateAround(transform.position, transform.up, val)
      );
    }
  }
}