using System.Collections.Generic;
using System.Linq;
using UnityEngine;
// using UnityEngine.InputSystem;

namespace V1
{
  public class ObjectViewerPitchHandle : VirtualObjectInteractable
  {
    Vector3 localHitPosition;
    Vector3 localHitNormal;
    List<Transform> rotationTargets;
    ObjectViewerYawHandle yawHandle;

    public MeshRenderer handle;
    public MeshRenderer hoverHandle;
    protected override void Awake()
    {
      base.Awake();
      rotationTargets = new List<Transform>();
      rotationTargets.AddRange(vo.GetComponentsInChildren<ObjectViewerPitchHandle>().Select(e => e.transform).ToList());
      rotationTargets.AddRange(vo.GetComponentsInChildren<VirtualObjectContent>().Select(e => e.transform).ToList());
      rotationTargets.Add(transform);
      yawHandle = vo.GetComponentInChildren<ObjectViewerYawHandle>();

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
      if (Input.GetKeyDown(KeyCode.LeftShift) || Input.GetKeyDown(KeyCode.RightShift))
      {
        Rotate(Input.mouseScrollDelta.y * InteractionManager.Instance.mouseGain);
      }
      else
      {
        yawHandle.Rotate(Input.mouseScrollDelta.y * InteractionManager.Instance.mouseGain);
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
      var mouseGain = InteractionManager.Instance.mouseGain * 3;

      rotationTargets.ForEach(e =>
        e.RotateAround(transform.position, transform.up, Input.GetAxis("Mouse Y") * mouseGain)
      );

      msgToInteractor.rayBehavior = RayBehavior.Passive;
      msgToInteractor.rayEnd = vo.transform.TransformPoint(localHitPosition);
      msgToInteractor.rayNormal = localHitNormal;
    }

    public override void PreprocessInteractable(PreprocessMsg preprocessMsg, out PreprocessToProcessMsg ptpMsg)
    {
      base.PreprocessInteractable(preprocessMsg, out ptpMsg);
      if (isHovered || isSelected) ptpMsg.rayKind = RayTipKind.Vertical;
    }

    public void Rotate(float val)
    {
      rotationTargets.ForEach(e =>
        e.RotateAround(transform.position, transform.up, val)
      );
    }
  }
}