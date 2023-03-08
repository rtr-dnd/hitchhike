using System;
using System.Linq;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HandWrap : MonoBehaviour
{
  public Material enabledMaterial;
  public Material disabledMaterial;
  public bool isEnabled { get; protected set; }
  public bool scaleHandModel;
  [HideInInspector]
  protected Transform _originalSpace;
  [HideInInspector]
  public virtual Transform originalSpace
  {
    get { return _originalSpace; }
    set { _originalSpace = value; }
  }
  [HideInInspector]
  protected Transform _thisSpace;
  [HideInInspector]
  public virtual Transform thisSpace
  {
    get { return _thisSpace; }
    set { _thisSpace = value; }
  }

  public float filterRatio = 1f;
  protected HandArea area;
  public virtual void Init(HandArea handArea, Transform original, Transform copied, bool scale, float filterRatio) {}
  public virtual void SetEnabled(bool enabled)
  {
    isEnabled = enabled;
    ChangeMaterial(enabled);
    SetUpdating(enabled);
  }
  public virtual void ChangeMaterial(bool enabled) {}
  public virtual void SetUpdating(bool updating) {}
}