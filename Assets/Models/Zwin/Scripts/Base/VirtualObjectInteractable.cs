using UnityEngine;

public class VirtualObjectInteractable : Interactable
{
  protected VirtualObject vo;
  protected Color baseColor; // original color
  protected Color interactiveColor; // changed by parent focus

  protected virtual void Awake()
  {
    vo = GetComponentInParent<VirtualObject>();
    // baseColor = gameObject.GetComponent<MeshRenderer>().material.color;
    // interactiveColor = baseColor;
  }

  public virtual void OnParentFocus()
  {
    // interactiveColor = baseColor;
    // gameObject.GetComponent<MeshRenderer>().material.color = baseColor;
  }
  public virtual void OnParentFocusEnd()
  {
    // Color.RGBToHSV(baseColor, out var h, out var s, out var v);
    // interactiveColor = Color.HSVToRGB(h, s - 0.2f, v + 0.4f);
    // gameObject.GetComponent<MeshRenderer>().material.color = interactiveColor;
  }

  public virtual void OnParentHover() { }
  public virtual void OnParentHoverEnd() { }

  protected override void OnSelect(Vector3 hitPosition, Vector3 hitNormal)
  {
    base.OnSelect(hitPosition, hitNormal);
    if (InteractionManager.Instance.voInFocus != vo) InteractionManager.Instance.voInFocus = vo;
  }
}