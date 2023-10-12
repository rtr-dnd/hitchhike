using System.Collections;
using System.Collections.Generic;
using System.Linq;
using Oculus.Interaction;
using UnityEngine;

public class TargetObject : MonoBehaviour
{
  bool _isHovered;
  [HideInInspector]
  public bool isHovered
  {
    get { return _isHovered; }
    protected set { _isHovered = value; }
  }
  public virtual void OnHover(GameObject hoverGizmo)
  {
    isHovered = true;
    var bounds = CalculateLocalBounds();
    if (!bounds.HasValue) return;
    hoverGizmo.transform.position = transform.position + transform.rotation * bounds.Value.center;
    hoverGizmo.transform.rotation = transform.rotation;
    hoverGizmo.transform.localScale = bounds.Value.size * 1.1f;
    hoverGizmo.SetActive(true);
  }

  public virtual void OnHoverEnd(GameObject hoverGizmo)
  {
    isHovered = false;
    hoverGizmo.SetActive(false);
  }

  private Bounds? CalculateLocalBounds()
  {
    Quaternion currentRotation = this.transform.rotation;
    this.transform.rotation = Quaternion.Euler(0f, 0f, 0f);
    Bounds bounds = new Bounds(this.transform.position, Vector3.zero);
    var renderers = GetComponentsInChildren<Renderer>();
    if (renderers.Length == 0) return null;
    foreach (Renderer renderer in renderers)
    {
      if (!renderer.enabled || !renderer.gameObject.activeInHierarchy) continue;
      bounds.Encapsulate(renderer.bounds);
    }
    Vector3 localCenter = bounds.center - this.transform.position;
    bounds.center = localCenter;
    this.transform.rotation = currentRotation;
    return bounds;
  }

  public Vector3 GetCenter()
  {
    var bounds = CalculateLocalBounds();
    return bounds == null
      ? transform.position
      : transform.position + transform.rotation * bounds.Value.center;
  }

  public Vector3 GetSize()
  {
    var bounds = CalculateLocalBounds();
    return bounds == null
      ? transform.lossyScale
      : bounds.Value.size;
  }
}
