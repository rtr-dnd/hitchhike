using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RemoteHandTarget : MonoBehaviour
{
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
  void Start()
  {

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
}
