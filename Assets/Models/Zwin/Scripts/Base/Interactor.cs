using System.Collections.Generic;
using UnityEngine;
// using UnityEngine.InputSystem;
using UnityEngine.XR;
using System;
using UnityEngine.UI;

public class Interactor : MonoBehaviour
{
  public virtual void PreprocessInteractor(SelectedToPreprocessMsg stpMsg, out PreprocessMsg preprocessMsg)
  {
    preprocessMsg = new PreprocessMsg();
  }
  public virtual void ProcessInteractor(PreprocessToProcessMsg ptpMsg, out ProcessMsg processMsg)
  {
    processMsg = new ProcessMsg();
  }
}
