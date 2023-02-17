using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RayTip : MonoBehaviour
{
  List<RayTipVisual> visuals;
  [HideInInspector] public bool isLocked = false;

  private void Awake()
  {
    visuals = new List<RayTipVisual>(gameObject.GetComponentsInChildren<RayTipVisual>());
    visuals.ForEach((v) =>
    {
      v.SetActive(v.kind == RayTipKind.Default);
    });
  }

  public void UpdateRayTip(RayTipKind? kind, SelectedToPreprocessMsg stpMsg)
  {
    isLocked = (stpMsg != null && stpMsg.rayBehavior == RayBehavior.Passive);

    if (!kind.HasValue)
    {
      visuals.ForEach((v) => v.SetActive(v.kind == RayTipKind.Default));
    }
    else
    {
      visuals.ForEach((v) => { v.SetActive(v.kind == kind); });
    }
  }
}
