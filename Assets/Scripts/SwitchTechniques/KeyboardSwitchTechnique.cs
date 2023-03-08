using UnityEngine;

namespace Hitchhike
{

public class KeyboardSwitchTechnique : SwitchTechnique
{
  public override int UpdateSwitch()
  {
    int i = HitchhikeManager.Instance.GetHandAreaIndex(
      HitchhikeManager.Instance.GetActiveHandArea()
    );
    if (!Input.GetKeyDown(KeyCode.Tab)) return i;

    return i >= HitchhikeManager.Instance.handAreas.Count - 1 ? 0 : i + 1;
  }
}
}