using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Eraser : MonoBehaviour
{
    public GameObject TrailPaint;

    public Transform Rubber;

    private void Update()
    {
        transform.position = Rubber.position; // Follow the grabbable object of the rubber
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Paper")) // When in contact with the paper, activates the trail for erasing. This avoids erasing when the rubber is far from the paper
        {
            TrailPaint.SetActive(true);
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.CompareTag("Paper"))
        {
            TrailPaint.SetActive(false);
        }
    }

}
