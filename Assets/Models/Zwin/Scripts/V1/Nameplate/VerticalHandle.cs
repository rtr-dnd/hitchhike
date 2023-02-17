using UnityEngine;
using UnityEngine.EventSystems;
// using UnityEngine.InputSystem;
using UnityEngine.UI;

namespace V1
{
  public class VerticalHandle : CanvasVisibleElement
  {
    public Image panel;
    VirtualObject vo;
    Vector3 localHitPosition;
    Vector3 localHitNormal;

    protected override void Awake()
    {
      image = panel;
      vo = GetComponentInParent<VirtualObject>();
      base.Awake();
    }

    public override void OnPointerDown(PointerEventData eventData)
    {
      base.OnPointerDown(eventData);
      localHitPosition = vo.transform.InverseTransformPoint(eventData.pointerCurrentRaycast.worldPosition);
      localHitNormal = eventData.pointerCurrentRaycast.worldNormal;
    }
    public override void OnPointerUp(PointerEventData eventData)
    {
      base.OnPointerUp(eventData);
      localHitPosition = Vector3.zero;
      localHitNormal = Vector3.zero;
    }

    public override void BeforePreprocessIfSelected(out SelectedToPreprocessMsg msgToInteractor)
    {
      base.BeforePreprocessIfSelected(out msgToInteractor);

      // var mouse = Mouse.current;
      var oldCoor = vo.GetCoordinate();
      var mouseGain = InteractionManager.Instance.mouseGain;
      vo.SetCoordinate(new Vector3(
        oldCoor.x, // r
        // oldCoor.y + mouse.delta.x.ReadValue() * mouseGain * InteractionManager.Instance.currentMouseGainFactor, // theta
        // oldCoor.z + mouse.delta.y.ReadValue() * mouseGain * InteractionManager.Instance.currentMouseGainFactor // phi
        oldCoor.y + Input.GetAxis("Mouse X") * mouseGain * InteractionManager.Instance.currentMouseGainFactor, // theta
        oldCoor.z + Input.GetAxis("Mouse Y") * mouseGain * InteractionManager.Instance.currentMouseGainFactor // phi
      ));

      msgToInteractor.rayBehavior = RayBehavior.Passive;
      msgToInteractor.rayEnd = vo.transform.TransformPoint(localHitPosition);
      msgToInteractor.rayNormal = localHitNormal;
    }
  }
}