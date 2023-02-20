using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LaserPointerBehaviour : MonoBehaviour
{

    #region SerializeFields

    [SerializeField]
    private Transform _HandAnchor;

    [SerializeField]
    private OVRInput.Controller _TargetController;

    [SerializeField]
    private OVRInput.Button _GrabTriggerButton;


    [SerializeField]
    private float _MaxDistance = 100.0f;

    [SerializeField]
    private LineRenderer _LaserPointerRenderer;

    #endregion

    #region Fields

    private bool _IsGrabbedObject = false;

    private GameObject _GrabbedObject = null;
    
    private Vector3? _PreviousControllerPosition;

    #endregion


    #region Methods

    #region Magic Methods

    void Update()
    {
        var connected = OVRInput.IsControllerConnected(this._TargetController);
        if (!connected)
            return;

        // Cast ray from controller
        var pointerRay = new Ray(this._HandAnchor.position, this._HandAnchor.forward);

        // 0 is start point
        this._LaserPointerRenderer.SetPosition(0, pointerRay.origin);

        if (Physics.Raycast(pointerRay, out var hitInfo, this._MaxDistance))
        {
            // Set end point to hit position if ray intersects with a collider
            _LaserPointerRenderer.SetPosition(1, hitInfo.point);
        }
        else
        {
            // Extend MaxDistance in the direction if ray does not intersect with a collider
            _LaserPointerRenderer.SetPosition(1, pointerRay.origin + pointerRay.direction * this._MaxDistance);
        }

        if (OVRInput.GetDown(this._GrabTriggerButton))
        {
            Debug.Log("grabbing");
            var hitObj = hitInfo.collider.gameObject;
            if (hitObj != null)
            {
                _GrabbedObject = hitObj;
                hitObj.transform.SetParent(_HandAnchor);
            }
        }
        if (OVRInput.GetUp(this._GrabTriggerButton))
        {
            if (_GrabbedObject != null)
            {
                _GrabbedObject.transform.SetParent(null);
                _GrabbedObject = null;
            }
        }

        
    }

    #endregion

    #endregion

}