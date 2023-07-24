using System.Collections;
using System.Collections.Generic;
using Oculus.Interaction;
using UnityEngine;

public class RemoteHandTarget : MonoBehaviour
{
  public bool isGrabbable;

  [Header("Optional")]
  public Grabbable grabbable;
  public bool isChildGrabbable;
  public GameObject grabbableChild;
  Vector3 childPos;
  Quaternion childRot;
  bool _isHovered;
  [HideInInspector]
  public bool isHovered
  {
    get { return _isHovered; }
    set
    {
      _isHovered = value;
      if (value)
      {
        OnHover();
      }
      else
      {
        OnHoverEnd();
      }
    }
  }
  bool _isPinched;
  [HideInInspector]
  public bool isPinched
  {
    get { return _isPinched; }
    set
    {
      _isPinched = value;
      if (value)
      {
        OnPinch();
      }
      else
      {
        OnPinchEnd();
      }
    }
  }
  // Start is called before the first frame update
  void Awake()
  {
    if (RemoteHandManager.Instance == null) return;
    if (!isGrabbable) return;
    var g = grabbable != null
      ? grabbable
      : gameObject.GetComponent<Grabbable>();
    if (g == null) return;
    var puew = gameObject.AddComponent(typeof(PointableUnityEventWrapper)) as PointableUnityEventWrapper;
    puew.InjectPointable(g);

    puew.CreateWhenSelect();
    puew.WhenSelect.AddListener(OnGrab);
    puew.CreateWhenUnselect();
    puew.WhenUnselect.AddListener(OnRelease);
  }

  // Update is called once per frame
  void Update()
  {

  }

  public void OnHover()
  {

  }

  public void OnHoverEnd()
  {

  }

  public void OnPinch()
  {

  }

  public void OnPinchEnd()
  {

  }
  public void OnMove()
  {

  }

  public void OnGrab()
  {
    RemoteHandManager.Instance.SetIsPaused(true);
  }
  public void OnRelease()
  {
    RemoteHandManager.Instance.SetIsPaused(false);
  }

  public void OnChildGrab()
  {
    if (isChildGrabbable && grabbableChild != null)
    {
      childPos = grabbableChild.transform.localPosition;
      childRot = grabbableChild.transform.localRotation;
    }
  }
  public void OnChildRelease()
  {
    transform.position = grabbableChild.transform.position - childPos;
    grabbableChild.transform.localPosition = childPos;
    transform.rotation = grabbableChild.transform.rotation * Quaternion.Inverse(childRot);
    grabbableChild.transform.localRotation = childRot;
  }
}
