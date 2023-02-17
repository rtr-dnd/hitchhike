using System;
using System.Linq;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HandWrap : MonoBehaviour
{
  public Material enabledMaterial;
  public Material disabledMaterial;
  public bool isEnabled { get; private set; }
  public bool scaleHandModel;
  [HideInInspector]
  public Transform originalSpace;
  [HideInInspector]
  public Transform thisSpace;
  protected HandArea area;
  public virtual void Init(HandArea handArea, Transform original, Transform copied, bool scale) {}
  public virtual void SetEnabled(bool enabled)
  {
    isEnabled = enabled;
    ChangeMaterial(enabled);
    SetUpdating(enabled);
  }
  public virtual void ChangeMaterial(bool enabled) {}
  public virtual void SetUpdating(bool updating) {}
}