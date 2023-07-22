using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Follower : MonoBehaviour
{
    public bool followPosition = true;
    public bool followRotation = true;
    public Transform TargetAnchor;

    //public GrabbableBase ReferenceObject;
    private void Update()
    {
        if(followPosition)
            transform.position = TargetAnchor.position;
        if(followRotation)
            transform.rotation = TargetAnchor.rotation;
    }
    

    //public OVRInput.Controller GetController()
    //{
    //    return ReferenceObject.grabbedBy.m_controller;
    //}
}
