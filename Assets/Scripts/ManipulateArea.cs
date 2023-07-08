using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Hitchhike
{

  public class ManipulateArea : MonoBehaviour
  {
    public GameObject wrap;
    private HandArea area;
    // Start is called before the first frame update
    void Start()
    {

    }

    public void AddArea()
    {
      Debug.Log("adding area");
      area = HitchhikeManager.Instance.AddArea(transform.position);
    }

    // Update is called once per frame
    void Update()
    {
      if (Input.GetKeyDown(KeyCode.A))
      {
        area = HitchhikeManager.Instance.AddArea(transform.position);
      }
      if (Input.GetKeyDown(KeyCode.W))
      {
        GameObject.Instantiate(wrap, this.transform);
      }
      if (Input.GetKeyDown(KeyCode.D))
      {
        HitchhikeManager.Instance.DeleteArea(area);
      }
    }
  }

}