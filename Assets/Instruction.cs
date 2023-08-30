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
    Vector3 cameraForward = Vector3.ProjectOnPlane(eyeAnchor.transform.forward, Vector3.up);
    transform.rotation = Quaternion.identity;
    transform.forward = cameraForward;
    transform.Rotate(-30, 0, 0);

    transform.position = new Vector3(
        eyeAnchor.transform.position.x,
        1.5f,
        eyeAnchor.transform.position.z
    ) + cameraForward * 1.5f;
  }
}
