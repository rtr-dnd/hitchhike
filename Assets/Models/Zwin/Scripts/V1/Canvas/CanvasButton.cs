using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace V1
{
  public class CanvasButton : CanvasVisibleElement
  {
    public Color hoverColor;
    protected override void Awake()
    {
      image = gameObject.GetComponent<Image>();
      base.Awake();
    }
  }
}