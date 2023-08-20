using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Instruction : MonoBehaviour
{
  public GameObject eyeAnchor;
  // Start is called before the first frame update
  void Start()
  {

  }

  // Update is called once per frame
  void Update()
  {
    transform.position = new Vector3(
        eyeAnchor.transform.position.x,
        transform.position.y,
        eyeAnchor.transform.position.z
    );
  }
}
