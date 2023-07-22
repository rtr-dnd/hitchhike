using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class RGBPickColor : MonoBehaviour
{
    //

    public RawImage ShowColor;
    public Material Mat;

    public Slider Red;
    public Slider Green;
    public Slider Blue;

    private Color _color = new Color (0, 0, 0, 1);

    public void UpdateColor()
    {
        float r = Red.value;
        float g = Green.value;
        float b = Blue.value;

        _color = new Color(r, g, b, 1f);

        ShowColor.color = _color;
        Mat.SetColor("_Color", _color);
    }

    public void SetRed()
    {
        _color = new Color(1, 0, 0, 1);

        ShowColor.color = _color;
        Mat.SetColor("_Color", _color);
    }

    public void SetBlack()
    {
        _color = new Color(0, 0, 0, 1);

        ShowColor.color = _color;
        Mat.SetColor("_Color", _color);
    }

    public void SetBlue()
    {
        _color = new Color(0, 0, 1, 1);

        ShowColor.color = _color;
        Mat.SetColor("_Color", _color);
    }
}
