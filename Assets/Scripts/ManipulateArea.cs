using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Hitchhike
{

  public class ManipulateArea : MonoBehaviour
  {
    public GameObject wrap;
    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
      if (Input.GetKeyDown(KeyCode.A))
      {
        HitchhikeManager.Instance.AddArea(transform.position, transform.rotation);
      }
      if (Input.GetKeyDown(KeyCode.W))
      {
        GameObject.Instantiate(wrap, this.transform);
      }
    }
  }

}