using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InkBehavior : MonoBehaviour
{

    [Header("Pincel")]
    [Tooltip("One single color stable for usual painting. For other effects you may use gradients with different colors")]
    public Gradient inkColor;


    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("BallPen"))
        {
            other.GetComponent<BallPen>().SetColor(inkColor);
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.CompareTag("BallPen"))
        {
            other.GetComponent<BallPen>().StartDripping(); // Makes some particles drop
            other.GetComponent<BallPen>().RefillInk(); // Recharges the time the pencil can draw (in case there is any)
        }
    }
}
