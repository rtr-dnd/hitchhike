using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BallPen : MonoBehaviour
{
    public const float UpdateTime = 0.02f;
    public const float WidthOffsetColor = 0.001f;


    [Tooltip("End of the BallPen to follow by the collisions and trails.")]
    public Transform BallEnd;

    [Header("Bone")]
    public Animator BoneAnim;

    [Header("Trail")]
    [Tooltip("Mask |\n What should be painted with RenderTexture (or Color) -> White; Original Texture -> Black;")]
    public TrailRenderer TrailRend_Mask;
    [Tooltip("Parent of the Trails")]
    public GameObject TrailPaint;
    [Range(0.001f, 0.15f)] [Tooltip("Width of the lines painted. \n Trail width will be overwritten so you should \n change it from here")]
    public float Width = 0.03f;
    [Range(0,1)]
    public float AlphaStart = (float) 60 / 255;
    [Range(0,1)]
    public float AlphaEnd = 0f;

    [Tooltip("It will keep the color when unassigned. Left to none for a instrument that does not change colors. Alternatively, Set the trail that puts the color.")]
    [Header("Only for colored")]
    public TrailRenderer TrailRend_Color;


    
    [Header("Dripping Ink")]
    [Tooltip("Leave blank for no dripping effect")]
    public ParticleSystem Dripping;
    [Tooltip("Only works when Dripping is enabled \n Allows dripping to paint the paper")]
    public bool DrippingStains = false;

    [Header("Ink Vanishing")]
    [Tooltip("Time that you can be writing wasting Ink. \n Leave 0 for infinite time.")]
    public float TimeInk = 0f;
    [Tooltip("Percetange of the above time that the pen can draw without losing alpha")]
    [Range(0,1)]
    public float PercetangeTimeInkVanish = 0.8f;
    [Tooltip("For Colored Pen is best to leave it at 0")]
    [Range(0, 0.5f)]
    public float MinimumAlpha = 0f;

    Color _color;
    float _timer = 0f; // Time Painted

    Vector3 _previousPos;
    Vector3 _dir = Vector3.zero;
    Vector3 _newDir = Vector3.zero;
    float _timerBone;

    // Filter Data Movement
    [Range(0, 1)]
    float _currentDirWeight = 0.92f;





    private void Start()
    {
        
        RefillInk();
        InitPen();
    }

    private void InitPen()
    {
        TrailPaint?.SetActive(false);

        if (TrailRend_Color) TrailRend_Color.widthMultiplier = Width + WidthOffsetColor;
        if (TrailRend_Mask) TrailRend_Mask.widthMultiplier = Width;

        if (Dripping && !DrippingStains)
        {
            Dripping.subEmitters.SetSubEmitterEmitProbability(1, 0f);
            Dripping.subEmitters.SetSubEmitterEmitProbability(2, 0f);
        }
    }

    private void Update()
    {
        transform.position = BallEnd.position; // Follower of the end of the Ball Pen. Collisions are not working properly when setting as children

        if (TrailPaint.activeInHierarchy && TimeInk > 0)
            VanishInk();

    }

    #region TRIGGER_METHODS
    private void OnTriggerEnter(Collider other)
    {
        if(other.CompareTag("Paper"))
        {

            TrailPaint.SetActive(true);

            if(TrailRend_Color)
                TrailRend_Color.Clear();

            TrailRend_Mask.Clear();
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if(other.CompareTag("Paper"))
        {
            TrailPaint.SetActive(false);
        }
    }

    #endregion

    #region PAINT&COLOR

    /// <summary>
    /// You can change the Mask Trail Material
    /// </summary>
    /// <param name="ink"></param>
    public void ChangeInk(Material ink)
    {
        TrailRend_Mask.material = ink;
    }


    public void StartDripping()
    {
        if(Dripping)
        {
            Dripping.startColor = _color;
            Dripping.Play();
        }
    }

    private void VanishInk()
    {
        _timer -= Time.deltaTime;

        if(_timer > 0)
        {
            if(_timer < TimeInk * (1- PercetangeTimeInkVanish))
            {
                
                float alpha =  _timer / (TimeInk * (1 - PercetangeTimeInkVanish)) + MinimumAlpha;
                SetAlphaGradient(alpha);
            }
        }
        else
        {
            SetColorer(false);
            SetAlphaGradient(MinimumAlpha);
        }
    }

    private void SetAlphaGradient(float alpha)
    {

        Gradient _gradient = new Gradient();
        GradientColorKey[] colorKey = new GradientColorKey[2];
        colorKey[0].color = Color.white;
        colorKey[0].time = 0.0f;
        colorKey[1].color = Color.white;
        colorKey[1].time = 1.0f;
        GradientAlphaKey[] alphaKey = new GradientAlphaKey[2];
        alphaKey[0].alpha = alpha;
        alphaKey[0].time = 0.0f;
        alphaKey[1].alpha = alpha;
        alphaKey[1].time = 1.0f;

        _gradient.SetKeys(colorKey, alphaKey);

        SetMask(_gradient);
    }

    public void SetColor(Gradient grad)
    {
        if(TrailRend_Color)
        {
            _color = grad.Evaluate(1f);
            TrailRend_Color.colorGradient = grad;
        }
    }

    public void SetMask(Gradient grad)
    {
        TrailRend_Mask.colorGradient = grad;
    }
    public void RefillInk()
    {
        if(TimeInk != 0) // When there is no alpha degrading, alpha is left as selected in inspector for the mask
            SetAlphaGradient(1);

        SetColorer(true);

        if (TimeInk != 0f)
        {
            _timer = TimeInk;
        }
    }

    private void SetColorer(bool value)
    {
        if (TrailRend_Color)
            TrailRend_Color.emitting = value;
    }


    #endregion


    private void LateUpdate()
    {
        if (BoneAnim) // Update the tip of the PainterTool to be moved as it was colliding with paper
        {
            if(TrailPaint.activeInHierarchy) // Only updates position when the PainterTool is beign used
            {
                _timerBone += Time.deltaTime;
                if(_timerBone > UpdateTime)
                {
                    _timerBone = 0;
                    UpdateBones();  
                }

            }
            else // Reset Position once is not painting
            {
                BoneAnim.SetFloat("X", 0f);
                BoneAnim.SetFloat("Y", 0f);
                _dir = Vector3.zero;
                _newDir = Vector3.zero;
            }
        }
        
    }

    private void UpdateBones() // Calculates new direction of movement based on the previos position
    {
        _newDir = (_previousPos - transform.position);

        _newDir.Normalize();

        FilterDirection();

        // Sets the new direcion into Animator's Blend tree for a proper Animation
        BoneAnim.SetFloat("X", _dir.z);
        BoneAnim.SetFloat("Y", _dir.x);

        _previousPos = transform.position;
    }

    private void FilterDirection() // Filter the new direction to avoid jittering
    {
        _dir = _newDir * (1 - _currentDirWeight) + _dir * _currentDirWeight;
    }
    private void OnDrawGizmos() // Draws the direction of the movement
    {
        Gizmos.DrawLine(BallEnd.position, BallEnd.position - _dir * 10);
    }
}
