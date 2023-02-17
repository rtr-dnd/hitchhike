using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class VirtualObject : MonoBehaviour
{
  protected GameObject tempGO;
  protected Transform tempTransform;
  protected GameObject self;
  public VirtualObject() { }

  protected List<VirtualObjectInteractable> vois;
  protected Vector3 coordinate;
  protected Quaternion posture;
  [SerializeField] protected Vector3 size; // different from scale!
  // changing size does not change font size rendered in the app, while changing scale does;
  // size is defined with dmm (at the origin of the vo)
  protected bool inFocus = false;
  protected bool p_isHovered;
  public bool isHovered
  {
    get { return p_isHovered; }
    set
    {
      if (value == p_isHovered) return;
      if (value) { vois.ForEach((v) => { v.OnParentHover(); }); }
      else { vois.ForEach((v) => { v.OnParentHoverEnd(); }); }
      p_isHovered = value;
    }
  }
  public Vector3 GetCoordinate() { return coordinate; }
  public Quaternion GetPosture() { return posture; }
  public Vector3 GetSize() { return size; }
  public Vector3 GetLossyScale() { return self.transform.lossyScale; }
  public Vector3 GetLocalScale() { return self.transform.localScale; }

  public virtual void SetCoordinate(Vector3 coor)
  {
    coordinate = coor;

    CoorPost2TR(out var position, out var rotation, coordinate, posture);
    self.transform.position = position;
    self.transform.rotation = rotation;
  }
  public virtual void SetPosture(Quaternion post)
  {
    posture = post;

    CoorPost2TR(out var position, out var rotation, coordinate, posture);
    self.transform.position = position;
    self.transform.rotation = rotation;
  }
  public virtual void SetSize(Vector3 siz, Vector3 pivot)
  {
    size = siz;
  }
  public virtual void SetGlobalPosition(Vector3 pos)
  {
    self.transform.position = pos;

    TR2CoorPost(out var coor, out var post, self.transform.position, self.transform.rotation);
    coordinate = coor;
    posture = post;
  }
  public virtual void SetGlobalRotation(Quaternion rot)
  {
    self.transform.rotation = rot;

    TR2CoorPost(out var coor, out var post, self.transform.position, self.transform.rotation);
    coordinate = coor;
    posture = post;
  }
  public virtual void SetLocalScale(Vector3 scale)
  {
    self.transform.localScale = scale;
  }
  public virtual float GetBillboardingAngle()
  {
    return (coordinate[2] > -InteractionManager.Instance.thresholdAlpha && coordinate[2] < InteractionManager.Instance.thresholdAlpha) // cylindrical
    ? 0f : coordinate[2];
  }

  public virtual void OnFocus()
  {
    inFocus = true;
    Debug.Log("focus set at " + self);
    vois.ForEach((v) => { v.OnParentFocus(); });
  }

  public virtual void OnFocusEnd()
  {
    inFocus = false;
    vois.ForEach((v) => { v.OnParentFocusEnd(); });
  }

  protected virtual void Awake()
  {
    tempGO = new GameObject();
    tempTransform = tempGO.transform;
    self = gameObject;
    vois = new List<VirtualObjectInteractable>(gameObject.GetComponentsInChildren<VirtualObjectInteractable>());
  }

  protected virtual void Start()
  {
    // SetGlobalPosition(self.transform.position);
    // SetGlobalRotation(self.transform.rotation);
  }

  public virtual void ProcessVirtualObject()
  {
    List<bool> isHoveredList = vois.Select(v => v.GetIsHover()).ToList();
    bool isCurrentlyHovered = isHoveredList.FindIndex(e => e) != -1;
    if (isHovered == isCurrentlyHovered) return;
    isHovered = isCurrentlyHovered;
  }

  void TR2CoorPost(out Vector3 coordinate, out Quaternion posture, Vector3 position, Quaternion rotation)
  {
    var fixedHeadOrigin = InteractionManager.Instance.fixedHeadOrigin;
    var thresholdAlpha = InteractionManager.Instance.thresholdAlpha;

    coordinate = Vector3.zero;
    coordinate[0] = Vector3.Distance(position, fixedHeadOrigin.position); // r
    var posVector = position - fixedHeadOrigin.position;
    var flatVector = Vector3.ProjectOnPlane(posVector, fixedHeadOrigin.up);
    coordinate[1] = -Vector3.SignedAngle(flatVector, fixedHeadOrigin.forward, fixedHeadOrigin.up); // theta
    coordinate[2] = Vector3.SignedAngle(posVector, flatVector, -Vector3.Cross(posVector, flatVector)); // phi

    // imagine a gameobject that's just applied coordinate, not posture
    tempTransform.position = fixedHeadOrigin.position;
    tempTransform.rotation = fixedHeadOrigin.rotation;
    if (coordinate[2] > -thresholdAlpha && coordinate[2] < thresholdAlpha) // cylindrical
    {
      tempTransform.position += fixedHeadOrigin.forward * coordinate[0] * Mathf.Cos(thresholdAlpha * Mathf.Deg2Rad); // rcos(alpha)
      tempTransform.RotateAround(fixedHeadOrigin.position, Vector3.up, coordinate[1]); // theta, left is positive
      tempTransform.position += fixedHeadOrigin.up * coordinate[0] * Mathf.Cos(thresholdAlpha * Mathf.Deg2Rad) * Mathf.Tan(coordinate[2] * Mathf.Deg2Rad); // rcos(alpha)tan(phi)
    }
    else // spherical
    {
      tempTransform.position += fixedHeadOrigin.forward * coordinate[0]; // r
      tempTransform.RotateAround(fixedHeadOrigin.position, Vector3.up, coordinate[1]); // theta, left is positive
      tempTransform.RotateAround(fixedHeadOrigin.position, -tempTransform.right, coordinate[2]); // phi, upward is positive
    }
    tempTransform.rotation = tempTransform.rotation;
    // posture is relative rotation
    posture = Quaternion.Inverse(tempTransform.rotation) * rotation;
  }

  void CoorPost2TR(out Vector3 position, out Quaternion rotation, Vector3 coor, Quaternion post) // spherical coordinate and posture → actual world position and rotation
  {
    var fixedHeadOrigin = InteractionManager.Instance.fixedHeadOrigin;
    var thresholdAlpha = InteractionManager.Instance.thresholdAlpha;
    tempTransform.position = fixedHeadOrigin.position;
    tempTransform.rotation = fixedHeadOrigin.rotation;

    if (coor[2] > -thresholdAlpha && coor[2] < thresholdAlpha) // cylindrical
    {
      tempTransform.position += fixedHeadOrigin.forward * coor[0] * Mathf.Cos(thresholdAlpha * Mathf.Deg2Rad); // rcos(alpha)
      tempTransform.RotateAround(fixedHeadOrigin.position, Vector3.up, coor[1]); // theta, left is positive
      tempTransform.position += fixedHeadOrigin.up * coor[0] * Mathf.Cos(thresholdAlpha * Mathf.Deg2Rad) * Mathf.Tan(coor[2] * Mathf.Deg2Rad); // rcos(alpha)tan(phi)
    }
    else // spherical
    {
      tempTransform.position += fixedHeadOrigin.forward * coor[0]; // r
      tempTransform.RotateAround(fixedHeadOrigin.position, Vector3.up, coor[1]); // theta, left is positive
      tempTransform.RotateAround(fixedHeadOrigin.position, -tempTransform.right, coor[2]); // phi, upward is positive
    }

    tempTransform.rotation = tempTransform.rotation;
    position = tempTransform.position;
    rotation = tempTransform.rotation * post;
  }
}