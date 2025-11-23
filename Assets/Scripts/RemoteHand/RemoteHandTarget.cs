using System;
using System.Collections;
using System.Collections.Generic;
using Hitchhike;
using Oculus.Interaction;
using UnityEngine;
using UnityEngine.Events;

public class RemoteHandTarget : TargetObject
{
  public static List<RemoteHandTarget> allTargets = new List<RemoteHandTarget>();

  private void OnEnable()
  {
    allTargets.Add(this);
  }

  private void OnDisable()
  {
    allTargets.Remove(this);
  }
  public bool isGrabbable;

  [Header("Optional")]
  public Grabbable grabbable;
  public bool isChildGrabbable;
  public GameObject grabbableChild;
  Vector3 childPos;
  Quaternion childRot;
  [HideInInspector]
  public IRemoteHandManager remoteHandManager;

  [Header("Grab Events")]
  public UnityEvent onPinch;
  public UnityEvent onPinchEnd;

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

    // puew.CreateWhenSelect(); // todo: meta xr
    // puew.WhenSelect.AddListener(OnGrab); // todo: meta xr
    // puew.CreateWhenUnselect(); // todo: meta xr
    // puew.WhenUnselect.AddListener(OnRelease); // todo: meta xr
  }

  // Update is called once per frame
  void Update()
  {

  }

  public void OnPinch()
  {
    onPinch?.Invoke();
  }

  public void OnPinchEnd()
  {
    onPinchEnd?.Invoke();
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
