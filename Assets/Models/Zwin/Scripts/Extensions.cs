using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

static class Extensions
{
  public static GameObject GetChildWithName(this GameObject obj, string name) => obj.transform.Find(name)?.gameObject;
  public static GameObject GetChildWithTag(this GameObject obj, string tag)
  {
    foreach (Transform tr in obj.transform)
    {
      if (tr.tag == tag) return tr.gameObject;
    }
    return null;
  }
}

static class SortingHelpers
{
  public static void Sort<T>(IList<T> hits, IComparer<T> comparer) where T : struct
  {
    bool fullPass;
    do
    {
      fullPass = true;
      for (var i = 1; i < hits.Count; ++i)
      {
        var result = comparer.Compare(hits[i - 1], hits[i]);
        if (result > 0)
        {
          var temp = hits[i - 1];
          hits[i - 1] = hits[i];
          hits[i] = temp;
          fullPass = false;
        }
      }
    } while (fullPass == false);
  }
}
