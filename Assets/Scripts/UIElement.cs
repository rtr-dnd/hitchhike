
using UnityEngine;

public class UIElement : MonoBehaviour
{
  protected bool isHovered;
  protected bool isActive;
  public Material defaultMaterial;
  public Material hoverMaterial;
  public Material activeMaterial;
  protected MeshRenderer meshRenderer;
  protected virtual void Start()
  {
    meshRenderer = gameObject.GetComponent<MeshRenderer>();
  }
  public virtual void OnHover()
  {
    isHovered = true;
    meshRenderer.material = hoverMaterial;
  }
  public virtual void OnHoverEnd()
  {
    isHovered = false;
    meshRenderer.material = isActive ? activeMaterial : defaultMaterial;
  }
  public virtual void OnSelect()
  {
    isActive = true;
    meshRenderer.material = activeMaterial;
  }
  public virtual void OnSelectEnd()
  {
    isActive = false;
    meshRenderer.material = isHovered ? hoverMaterial : defaultMaterial;
  }

}