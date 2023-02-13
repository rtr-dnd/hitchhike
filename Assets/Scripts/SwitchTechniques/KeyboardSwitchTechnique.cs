using UnityEngine;

public class KeyboardSwitchTechnique : SwitchTechnique
{
  public override int UpdateSwitch()
  {
    int i = HitchhikeManager.Instance.GetHandWrapIndex(
      HitchhikeManager.Instance.GetActiveHandWrap()
    );
    if (!Input.GetKeyDown(KeyCode.Space)) return i;

    return i >= HitchhikeManager.Instance.handWraps.Count - 1 ? 0 : i + 1;
  }
}