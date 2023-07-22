using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraFlagsChange : MonoBehaviour
{
    private Camera _cam;

    void Start()
    {
        _cam = GetComponent<Camera>();
        Invoke(nameof(ChangeFlags), 0.1f);

    }
    /// <summary>
    /// Resets the current painting that the camera is rendering to. CameraMask will erase all drawing, CameraColor will turn all painting into black.
    /// </summary>
    public void ResetPaint() // Method to clear all paint
    {
        _cam.clearFlags = CameraClearFlags.SolidColor;
        Invoke(nameof(ChangeFlags), 0.1f);
    }
    private void ChangeFlags() // Clears all trails that have been stored in the camera buffer.
    {
        _cam.clearFlags = CameraClearFlags.Nothing;
    }

    private void Render() 
    {
        _cam.Render();
    }
}
