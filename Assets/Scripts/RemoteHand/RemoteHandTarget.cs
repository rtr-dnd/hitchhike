using System.Collections;
using System.Collections.Generic;
using Hitchhike;
using Oculus.Interaction;
using UnityEngine;

public class RemoteHandTarget : TargetObject
{
  public bool isGrabbable;

  [Header("Optional")]
  public Grabbable grabbable;
  public bool isChildGrabbable;
  public GameObject grabbableChild;
  Vector3 childPos;
  Quaternion childRot;
  [HideInInspector]
  public IRemoteHandManager remoteHandManager;

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
  void Start()
  {
    if (remoteHandManager == null) return;
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
    if (remoteHandManager != null) remoteHandManager.SetIsPaused(true);
  }
  public void OnRelease()
  {
    if (remoteHandManager != null) remoteHandManager.SetIsPaused(false);
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
