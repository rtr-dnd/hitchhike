using System.Collections;
using System.Collections.Generic;
using UnityEngine;
// using UnityEngine.InputSystem;

public class MouseVisualizer : MonoBehaviour
{
  [SerializeField] GameObject boundary;
  float mouseGain = 0.0001f;

  // Start is called before the first frame update
  void Start()
  {
  }

  // Update is called once per frame
  void Update()
  {
    // var mouse = Mouse.current;

    // var tempX = transform.position.x + mouse.delta.x.ReadValue() * mouseGain;
    var tempX = transform.position.x +Input.GetAxis("Mouse X") * mouseGain;
    var newX = (
        tempX < boundary.transform.position.x + boundary.transform.lossyScale.x / 2
        &&
        tempX > boundary.transform.position.x - boundary.transform.lossyScale.x / 2
    )
     ? tempX
     : transform.position.x;

    var tempZ = transform.position.z + Input.GetAxis("Mouse Y") * mouseGain;
    var newZ = (
        tempZ < boundary.transform.position.z + boundary.transform.lossyScale.z / 2
        &&
        tempZ > boundary.transform.position.z - boundary.transform.lossyScale.z / 2
    )
     ? tempZ
     : transform.position.z;

    transform.position = new Vector3(
        newX,
        transform.position.y,
        newZ
    );
  }
}
