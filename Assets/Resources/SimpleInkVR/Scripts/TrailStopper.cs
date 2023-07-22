using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TrailStopper : MonoBehaviour
{
    // Stop the trail renderer when its not moving. This stops the line to get wider when the pencil is not moving

    private static float threshold = 0.001f; // Any movement with a distance betwween updatesTime lower than this threshold will stop the trail
    private static float updateTime = 0.05f; // The time between checks on the movement of the pencil
    private Vector3 _prevPos = Vector3.zero; // Last position stored
    private TrailRenderer _trail; // Reference to the trail (This script must be on the trail we want to stop)

    void Start()
    {
        _prevPos = transform.position;
        _trail = GetComponent<TrailRenderer>();

        if (_trail == null) this.enabled = false; // Deactivate the script if there is no reference to the TrailRenderer

        InvokeRepeating(nameof(CheckMovement), 0f, updateTime);
    }

    private void CheckMovement()
    {
        if (Vector3.Distance(_prevPos, transform.position) < threshold)
        {
            _trail.Clear();
            _trail.enabled = false;
        }
        else
            _trail.enabled = true;

        _prevPos = transform.position;
    }
}
