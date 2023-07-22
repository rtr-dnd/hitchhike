using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ColorSaver : MonoBehaviour
{
    [Tooltip("Time needed to leave the brush inside to change the saved color")]
    public float TimeInside = 2f;

    [Header("Indicator")]
    public MeshRenderer JarrRenderer;
    
    Material _saverMat;

    Gradient _gradient;
    GradientColorKey[] _colorKey;
    GradientAlphaKey[] _alphaKey;

    Color _currentColor = Color.white;
    Collider _penInside;
    float _timer;

    private void Start()
    {
        _saverMat = JarrRenderer.material;
        Debug.Log(JarrRenderer.material);
        ResetColor();
    }

    private void Update()
    {
        if (_penInside)
            _timer += Time.deltaTime;

        if(_timer > TimeInside) // Change the saved color
        {
            GetColorGrad(_penInside.GetComponent<BallPen>().TrailRend_Color.colorGradient);
            _penInside.GetComponent<BallPen>().SetColor(_gradient);
        }
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("BallPen") && !_penInside)
        {
            _penInside = other;
            _timer = 0;
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if(other == _penInside) // Exit of the first pen entered
        {
            if(_timer < TimeInside) // Sets the saved color into the pen
                _penInside.GetComponent<BallPen>().SetColor(_gradient);

            _penInside.GetComponent<BallPen>().RefillInk();
            _penInside.GetComponent<BallPen>().StartDripping();

            _penInside = null;
        }
    }

    private void GetColorGrad(Gradient grad)
    {
        SetColor(grad.Evaluate(1f));
    }

    private void SetColor(Color addedColor)
    {
        _currentColor = addedColor;

        SetColorGradient();
    }

    private void SetColorGradient()
    {
        SetIndicatorColor();

        _gradient = new Gradient();

        _colorKey = new GradientColorKey[2];
        _colorKey[0].color = _currentColor;
        _colorKey[0].time = 0.0f;
        _colorKey[1].color = _currentColor;
        _colorKey[1].time = 1.0f;

        _alphaKey = new GradientAlphaKey[2];
        _alphaKey[0].alpha = 1.0f;
        _alphaKey[0].time = 0.0f;
        _alphaKey[1].alpha = 1.0f;
        _alphaKey[1].time = 1.0f;

        _gradient.SetKeys(_colorKey, _alphaKey);
    }

    /// <summary>
    /// Sets the material of the Jarr to be the same color of the internal Gradient
    /// </summary>
    private void SetIndicatorColor()
    {
        _saverMat.SetColor("_Color", _currentColor);
    }

    /// <summary>
    /// Reset the color saved in the current ColorSaver. If no new color is added will be set as White
    /// </summary>
    private void ResetColor()
    {
        _currentColor = Color.white;
        SetColorGradient();
    }

}
