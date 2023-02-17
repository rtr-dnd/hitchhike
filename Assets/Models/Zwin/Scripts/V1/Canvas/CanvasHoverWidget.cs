using Unity.VectorGraphics;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace V1
{
  public class CanvasHoverWidget : CanvasElement
  {
    protected SVGImage svg;
    protected override void Awake()
    {
      svg = GetComponentInChildren<SVGImage>();
      svg.color = new Color(1, 1, 1, 0);
      base.Awake();
    }

    public override void OnPointerEnter(PointerEventData eventData)
    {
      svg.color = new Color(1, 1, 1, 1);
      base.OnPointerEnter(eventData);
    }
    public override void OnPointerExit(PointerEventData eventData)
    {
      svg.color = new Color(1, 1, 1, 0);
      base.OnPointerExit(eventData);
    }
  }
}