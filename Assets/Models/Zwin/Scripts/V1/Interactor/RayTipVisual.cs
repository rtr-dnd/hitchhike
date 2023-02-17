using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RayTipVisual : MonoBehaviour
{
  public RayTipKind kind;
  protected RayTip tip;
  protected virtual void Awake()
  {
    tip = GetComponentInParent<RayTip>();
  }

  public void SetActive(bool val)
  {
    if (gameObject.activeSelf == val) return;
    gameObject.SetActive(val);
  }
}
