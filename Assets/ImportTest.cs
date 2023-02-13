using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using UnityEngine;

public class ImportTest : MonoBehaviour
{
  [DllImport("NativeDLL")]
  private static extern int Test(int a, int b);
  [DllImport("InteractionSdk")]
  private static extern int isdk_DataSource_Create(int id);
  // Start is called before the first frame update
  void Start()
  {
    int c = Test(1, 2);
    Debug.Log(c);
    var i = isdk_DataSource_Create(0);
    Debug.Log(i);
  }

  // Update is called once per frame
  void Update()
  {

  }
}
