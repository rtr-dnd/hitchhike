using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace V1
{
  public class CanvasVisibleElement : CanvasElement
  {
    protected Image image;
    Material localMaterial;
    Color defaultColor;
    protected override void Awake()
    {
      base.Awake();
      localMaterial = Instantiate(image.material);
      image.material = localMaterial;
      defaultColor = localMaterial.color;
    }
    public override void OnPointerEnter(PointerEventData eventData)
    {
      Color.RGBToHSV(defaultColor, out var h, out var s, out var v);
      image.material.color = Color.HSVToRGB(h, s - 0.2f, v + 0.2f);
    }

    public override void OnPointerExit(PointerEventData eventData)
    {
      image.material.color = defaultColor;
    }

    public override void OnPointerDown(PointerEventData eventData)
    {
      Color.RGBToHSV(defaultColor, out var h, out var s, out var v);
      image.material.color = Color.HSVToRGB(h, s - 0.3f, v + 0.4f);
    }
    public override void OnPointerUp(PointerEventData eventData)
    {
      image.material.color = defaultColor;
    }
  }
}