
using UnityEngine;

namespace Hitchhike
{

public class SwitchTechnique : MonoBehaviour {
  public virtual void Init() {}

  public virtual int UpdateSwitch() { return 0; }
}
}