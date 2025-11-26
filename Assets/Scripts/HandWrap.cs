
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

    [Header("Gaze Collider Scaling")]
    public Transform gazeColliderTarget;
    public float minVisualAngle = 2.0f;
    public float referenceSize = 0.1f; // Assumed size of the object in meters
    private Vector3 initialColliderScale;
    private bool hasInitializedColliderScale = false;

    protected virtual void Start()
    {
      if (gazeColliderTarget != null)
      {
        initialColliderScale = gazeColliderTarget.localScale;
        hasInitializedColliderScale = true;
      }
    }

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

    protected virtual void Update()
    {
      if (hasInitializedColliderScale && gazeColliderTarget != null && HitchhikeManager.Instance.head != null)
      {
        float distance = Vector3.Distance(HitchhikeManager.Instance.head.position, gazeColliderTarget.position);
        float requiredScale = (2.0f * distance * Mathf.Tan(minVisualAngle * Mathf.Deg2Rad * 0.5f)) / referenceSize;
        float finalScale = Mathf.Max(initialColliderScale.x, requiredScale);
        gazeColliderTarget.localScale = Vector3.one * finalScale;
      }
    }
  }

}