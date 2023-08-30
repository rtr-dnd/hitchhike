using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BoxItem : MonoBehaviour
{
    public GameObject box;
    bool _insideBox;
    bool insideBox
    {
        get { return _insideBox; }
        set
        {
            _insideBox = value;
            transform.SetParent(_insideBox ? box.transform : box.transform.parent);
        }
    }
    public Collider boxCollider;

    private void Start()
    {
        CheckContainment();
    }

    void CheckContainment()
    {
        var containment = boxCollider.bounds.Contains(transform.position);
        insideBox = containment;
    }

    public void OnRelease()
    {
        CheckContainment();
    }
}
