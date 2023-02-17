using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
namespace V1
{
  public class ObjectViewerScalePanel : CanvasElement
  {
    protected Image image;
    protected Color color;
    public List<GameObject> hiddenComponents;
    protected override void Awake()
    {
      base.Awake();
      image = GetComponent<Image>();
      color = image.color;
      image.color = new Color(1, 1, 1, 0);
      hiddenComponents.ForEach((c) => c.SetActive(false));
    }
    public override void OnPointerEnter(PointerEventData eventData)
    {
      image.color = color;
      hiddenComponents.ForEach((c) => c.SetActive(true));
      base.OnPointerEnter(eventData);
    }
    public override void OnPointerExit(PointerEventData eventData)
    {
      image.color = new Color(1, 1, 1, 0);
      hiddenComponents.ForEach((c) => c.SetActive(false));
      base.OnPointerExit(eventData);
    }
  }
}