using UnityEngine;

namespace Hitchhike
{

  public class GlobalTechnique : MonoBehaviour
  {
    public virtual void Init() { }
    public virtual void UpdateGlobal() { }

    public virtual bool isGlobalMoveActive() { return false; }
    public virtual void ActivateGlobalMove(int preferredHandIndex) { }
    public virtual void DeactivateGlobalMove() { }

    public virtual void OnGlobalMoveStart(HandArea area) { }
    public virtual void OnGlobalMoveStay(HandArea area) { }
    public virtual void OnGlobalMoveEnd(HandArea area) { }
  }
}