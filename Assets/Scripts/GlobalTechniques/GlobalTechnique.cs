using UnityEngine;

namespace Hitchhike
{

  public class GlobalTechnique : MonoBehaviour
  {
    public enum Mode
    {
      Move,
      Scale
    }
    [HideInInspector]
    public Mode mode;
    public virtual void Init() { }
    public virtual void UpdateGlobal() { }

    public virtual bool isGlobalActive() { return false; }
    public virtual void ActivateGlobal(int preferredHandIndex, Mode _mode) { }
    public virtual void DeactivateGlobal() { }

    public virtual void OnGlobalStart(HandArea area) { }
    public virtual void OnGlobalStay(HandArea area) { }
    public virtual void OnGlobalEnd(HandArea area) { }
  }
}