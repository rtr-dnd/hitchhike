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
  public Transform originalSpace;
  public Transform thisSpace;
  public virtual void Init(Transform original, Transform copied) {}
  public virtual void SetEnabled(bool enabled)
  {
    isEnabled = enabled;
    ChangeMaterial(enabled);
    SetUpdating(enabled);
  }
  public virtual void ChangeMaterial(bool enabled) {}
  public virtual void SetUpdating(bool updating) {}
}