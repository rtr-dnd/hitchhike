using System;
using System.Collections.Generic;
using UnityEngine;

public enum RayBehavior
{
  Active, // ray determines position of the selected interactable
  Passive // the selected interactable determines ray position
}
public enum RayVisibility
{
  Visible,
  Hidden
}
public enum RayTipKind
{
  Default,
  Horizontal,
  Vertical,
  Cursor
}

public struct InteractableHit
{
  public Interactable interactable;
  public Vector3? hitPosition;
  public Vector3? hitNormal;

  public InteractableHit(Interactable i, Vector3? hp, Vector3? hn)
  {
    this.interactable = i;
    this.hitPosition = hp;
    this.hitNormal = hn;
  }
}
