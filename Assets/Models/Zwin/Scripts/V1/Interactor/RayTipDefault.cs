using UnityEngine;
// using UnityEngine.InputSystem;
using UnityEngine.UI;

public class RayTipDefault : RayTipVisual
{
  [SerializeField] Image dot;
  protected override void Awake()
  {
    base.Awake();
  }
  private void Update()
  {
    // var mouse = Mouse.current;
    // if (mouse.leftButton.wasPressedThisFrame)
    if (Input.GetMouseButtonDown(0))
    {
      dot.rectTransform.localScale = new Vector3(0.7f, 0.7f, 0.7f);
    }
    // else if (mouse.leftButton.wasReleasedThisFrame)
    else if (Input.GetMouseButtonUp(0))
    {
      dot.rectTransform.localScale = Vector3.one;
    }
  }
}