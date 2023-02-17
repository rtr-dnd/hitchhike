using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace V1
{
  public class NameplateMenuButton : CanvasButton
  {
    public GameObject menu;

    public override void OnPointerDown(PointerEventData eventData)
    {
      base.OnPointerDown(eventData);
      menu.SetActive(!menu.activeSelf);
    }
  }
}