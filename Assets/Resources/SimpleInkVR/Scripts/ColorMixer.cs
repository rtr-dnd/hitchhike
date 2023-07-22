using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ColorMixer : MonoBehaviour
{
    [Header("Clearer")]
    public bool Water = false;

    [Header("Indicator")]
    public Material MixerMat;

    Gradient _gradient;
    GradientColorKey[] colorKey;
    GradientAlphaKey[] alphaKey;

    Color _currentColor = Color.white;

    private void Start()
    {
        ResetColor();
    }


    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("BallPen"))
        {
            if (Water)
                ResetColor();
            else if(other.GetComponent<BallPen>().TrailRend_Color)
                GetColorGrad(other.GetComponent<BallPen>().TrailRend_Color.colorGradient);

            other.GetComponent<BallPen>().SetColor(_gradient);
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.CompareTag("BallPen"))
        {
            other.GetComponent<BallPen>().StartDripping();
            other.GetComponent<BallPen>().RefillInk();
        }
    }
    private void GetColorGrad(Gradient grad)
    {
        AddColor(grad.Evaluate(1f));
    }

    private void AddColor(Color addedColor)
    {
        _currentColor += addedColor;
        _currentColor /= 2f;

        SetColorGradient();
    }

    private void SetColorGradient()
    {
        SetIndicatorColor();

        _gradient = new Gradient();
        colorKey = new GradientColorKey[2];
        colorKey[0].color = _currentColor;
        colorKey[0].time = 0.0f;
        colorKey[1].color = _currentColor;
        colorKey[1].time = 1.0f;
        alphaKey = new GradientAlphaKey[2];
        alphaKey[0].alpha = 1.0f;
        alphaKey[0].time = 0.0f;
        alphaKey[1].alpha = 1.0f;
        alphaKey[1].time = 1.0f;

        _gradient.SetKeys(colorKey, alphaKey);
    }

    private void SetIndicatorColor()
    {
        MixerMat.SetColor("_Color", _currentColor);
    }

    private void ResetColor()
    {
        _currentColor = Color.white;

        SetColorGradient();
    }

}
