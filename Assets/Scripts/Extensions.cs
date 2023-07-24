using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace RootScript
{
  static class HitchhikeExtensions
  {
    public static GameObject GetChildWithName(this GameObject obj, string name) => obj.transform.Find(name)?.gameObject;
    public static IEnumerator DelayMethod(float wait, Action action)
    {
      yield return new WaitForSeconds(wait);
      action();
    }
    // usage
    // StartCoroutine(DelayMethod(3.5f, () =>
    // {
    //     Debug.Log("Delay call");
    // }));
  }
}