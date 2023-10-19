using System;
using System.Linq;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Hitchhike
{

  public class HandWrap : MonoBehaviour
  {
    public Material enabledMaterial;
    public Material disabledMaterial;
    public Transform mainHand;
    public bool isEnabled { get; protected set; }
    public bool isVisible { get; protected set; }
    public bool scaleHandModel;
    public bool mirrored;
    public bool doNotResetHand;
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
    [HideInInspector]
    public HandArea area { get; protected set; }
    public int handPrefabIndex;

    public virtual void Init(HandArea handArea, Transform original, Transform copied, bool scale, bool mirror, bool doNotResetHandPosition, float filterRatio) { }
    public virtual void SetEnabled(bool enabled)
    {
      isEnabled = enabled;
      ChangeMaterial(enabled);
      SetUpdating(enabled);
    }
    public virtual void SetVisible(bool visible)
    {
      isVisible = visible;
    }
    public virtual void ChangeMaterial(bool enabled) { }
    public virtual void SetUpdating(bool updating) { }

    // void Update()
    // {
    //   Debug.Log(originalSpace.transform.posi)
    // }
  }

}