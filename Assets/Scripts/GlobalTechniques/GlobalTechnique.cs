using UnityEngine;

namespace Hitchhike
{

public class GlobalTechnique : MonoBehaviour {
    public virtual void Init() {}

    public virtual bool isGlobalActive() { return false; }

    public virtual void OnGlobalStart(HandArea area) {}
    public virtual void OnGlobalMove(HandArea area) {}
    public virtual void OnGlobalEnd(HandArea area) {}
}
}