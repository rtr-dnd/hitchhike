using System.Collections.Generic;
using UnityEngine;

namespace Hitchhike
{

  public class GazeHandSwitchTechnique : SwitchTechnique
  {
    [HideInInspector]
    public int switchIndex = 0;

    public override int UpdateSwitch()
    {
      return switchIndex;
    }
  }

}