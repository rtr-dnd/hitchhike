using System.Collections.Generic;
using UnityEngine;
// using UnityEngine.InputSystem;
using UnityEngine.XR;
using System;
using UnityEngine.UI;

public class Interactable : MonoBehaviour
{
  protected bool isHovered = false;
  protected Vector3 hoveredHitPosition;
  public void SetIsHover(bool val, Vector3? hitPosition, Vector3? hitNormal)
  {
    if (isHovered == val)
    {
      if (val) OnHoverStay(hitPosition.HasValue ? hitPosition.Value : Vector3.zero, hitNormal.HasValue ? hitNormal.Value : Vector3.zero);
      return;
    }
    if (val)
    {
      OnHover(hitPosition.HasValue ? hitPosition.Value : Vector3.zero,
      hitNormal.HasValue ? hitNormal.Value : Vector3.zero
    );
    }
    else { OnHoverEnd(); }
    isHovered = val;
  }
  public bool GetIsHover() { return isHovered; }

  protected bool isSelected = false;
  public void SetIsSelected(bool val, Vector3? hitPosition, Vector3? hitNormal)
  {
    if (isSelected == val) return;
    if (val) { OnSelect(hitPosition.HasValue ? hitPosition.Value : Vector3.zero, hitNormal.HasValue ? hitNormal.Value : Vector3.zero); } else { OnSelectEnd(); }
    isSelected = val;
  }

  protected virtual void OnHover(Vector3 hitPosition, Vector3 hitNormal) { }
  protected virtual void OnHoverStay(Vector3 hitPosition, Vector3 hitNormal) { }
  protected virtual void OnHoverEnd() { }
  protected virtual void OnSelect(Vector3 hitPosition, Vector3 hitNormal) { }
  protected virtual void OnSelectEnd() { }
  public virtual void BeforePreprocessIfSelected(out SelectedToPreprocessMsg msgToInteractor)
  {
    msgToInteractor = new SelectedToPreprocessMsg();
  } // asked on update by AskSelectedInteractable
  public virtual void PreprocessInteractable(PreprocessMsg preprocessMsg, out PreprocessToProcessMsg ptpMsg)
  {
    ptpMsg = new PreprocessToProcessMsg();
  }
  public virtual void ProcessInteractable(ProcessMsg processMsg) { }
}