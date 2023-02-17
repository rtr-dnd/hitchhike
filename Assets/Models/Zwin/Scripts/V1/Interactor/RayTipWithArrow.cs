using UnityEngine;
// using UnityEngine.InputSystem;
using UnityEngine.UI;

public class RayTipWithArrow : RayTipVisual
{
  [SerializeField] Image dot;
  [SerializeField] Image right;
  [SerializeField] Image left;
  [SerializeField] Image up;
  [SerializeField] Image down;
  [SerializeField] Sprite activeArrow;
  [SerializeField] Sprite defaultArrow;
  float arrowSensitivity = 0.5f;
  protected override void Awake()
  {
    base.Awake();
    if (right != null) { right.sprite = defaultArrow; }
    if (left != null) { left.sprite = defaultArrow; }
    if (up != null) { up.sprite = defaultArrow; }
    if (down != null) { down.sprite = defaultArrow; }
  }
  private void Update()
  {
    if (tip.isLocked)
    {
      dot.rectTransform.localScale = new Vector3(0.7f, 0.7f, 0.7f);
      // var mouse = Mouse.current;
      if (kind == RayTipKind.Horizontal)
      {
        // var delta = mouse.delta.x.ReadValue();
        var delta = Input.GetAxis("Mouse X");
        dot.rectTransform.localPosition = new Vector3(
          dot.rectTransform.localPosition.x + delta * 3,
          dot.rectTransform.localPosition.y,
          dot.rectTransform.localPosition.z
        );
        if (delta > arrowSensitivity)
        {
          right.sprite = activeArrow;
          left.sprite = defaultArrow;
        }
        else if (delta < -arrowSensitivity)
        {
          left.sprite = activeArrow;
          right.sprite = defaultArrow;
        }
        else
        {
          right.sprite = defaultArrow;
          left.sprite = defaultArrow;
        }
      }
      else if (kind == RayTipKind.Vertical)
      {
        // var delta = mouse.delta.y.ReadValue();
        var delta = Input.GetAxis("Mouse Y");
        dot.rectTransform.localPosition = new Vector3(
          dot.rectTransform.localPosition.x,
          dot.rectTransform.localPosition.y + delta * 3,
          dot.rectTransform.localPosition.z
        );
        if (delta > arrowSensitivity)
        {
          up.sprite = activeArrow;
          down.sprite = defaultArrow;
        }
        else if (delta < -arrowSensitivity)
        {
          down.sprite = activeArrow;
          up.sprite = defaultArrow;
        }
        else
        {
          up.sprite = defaultArrow;
          down.sprite = defaultArrow;
        }
      }
    }
    else
    {
      dot.rectTransform.localScale = Vector3.one;
      dot.rectTransform.localPosition = Vector3.zero;
    }
  }
}