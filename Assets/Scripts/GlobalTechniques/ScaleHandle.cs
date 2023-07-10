using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScaleHandle : UIElement
{
  // Update is called once per frame
  void Update()
  {

  }

  public override void OnHover()
  {
    isHovered = true;
    meshRenderer.enabled = true;
    meshRenderer.material = hoverMaterial;
  }
  public override void OnHoverEnd()
  {
    isHovered = false;
    if (!isActive) meshRenderer.enabled = false;
  }
  public override void OnSelectEnd()
  {
    isActive = false;
    if (isHovered)
    {
      meshRenderer.material = hoverMaterial;
    }
    else
    {
      meshRenderer.enabled = false;
    }
  }
}
