using UnityEngine;

namespace V1
{
  public class BoardSurface : CanvasInteractable
  {
    public override void PreprocessInteractable(PreprocessMsg preprocessMsg, out PreprocessToProcessMsg ptpMsg)
    {
      base.PreprocessInteractable(preprocessMsg, out ptpMsg);
      if (isHovered) ptpMsg.rayKind = RayTipKind.Cursor;
    }
  }
}