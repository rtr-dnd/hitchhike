using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[ExecuteAlways]
public class ConstantRatio : MonoBehaviour
{
  [HideInInspector]
  public float size;

  void Update()
  {
    var los = transform.lossyScale;
    var loc = transform.localScale;
    if (size == 0) return;
    transform.localScale = new Vector3(
        loc.x / los.x * size,
        loc.y / los.y * size,
        loc.z / los.z * size
    );
  }
}
