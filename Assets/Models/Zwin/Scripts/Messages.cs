
// msgs
using System;
using System.Collections.Generic;
using UnityEngine;

public class SelectedToPreprocessMsg
{
  public RayVisibility rayVisibility;
  public RayBehavior rayBehavior;
  public Vector3? rayEnd;
  public Vector3? rayNormal;
  public bool requestDnd;
  public List<Type> dropCandidates;
}
public class PreprocessMsg
{
  public InteractableHit? selected;
  public InteractableHit? hovered;
  public InteractableHit? dnd;
}
public class PreprocessToProcessMsg
{
  public RayTipKind? rayKind;
}
public class ProcessMsg
{
  // ?
}

public class MsgUtility
{
  public static PreprocessToProcessMsg AggregatePtp(List<PreprocessToProcessMsg> ptpMsgs)
  {
    var ptpMsg = new PreprocessToProcessMsg();
    ptpMsgs.ForEach((m) =>
    {
      if (m.rayKind != null) ptpMsg.rayKind = m.rayKind;
    });
    return ptpMsg;
  }
}