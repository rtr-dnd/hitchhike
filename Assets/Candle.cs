using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Candle : MonoBehaviour
{
  public GameObject fireGizmo;
  // Start is called before the first frame update
  void Start()
  {
    if (fireGizmo != null) fireGizmo.SetActive(false);
  }

  // Update is called once per frame
  void Update()
  {

  }

  private void OnTriggerEnter(Collider other)
  {
    if (
      other.gameObject.name == "LighterFlame"
      && other.gameObject.GetComponentInParent<Oculus.Interaction.Demo.Lighter>() != null
      && other.gameObject.activeInHierarchy
    )
    {
      fireGizmo.SetActive(true);
    }
  }
}
