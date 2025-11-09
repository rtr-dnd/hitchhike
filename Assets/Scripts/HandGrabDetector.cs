using UnityEngine;
using UnityEngine.Events;
using Oculus.Interaction.GrabAPI;
using Oculus.Interaction.Input;
using Oculus.Interaction.Grab;

namespace Oculus.Interaction
{
    public class HandGrabDetector : MonoBehaviour
    {
        [Header("Hand Configuration")]
        [SerializeField]
        [Tooltip("The HandGrabAPI component to monitor for grab gestures")]
        private HandGrabAPI _handGrabAPI;

        [Header("Grab Detection Settings")]
        [SerializeField]
        [Tooltip("The grab types to detect")]
        private GrabTypeFlags _detectGrabTypes = GrabTypeFlags.All;

        [SerializeField]
        [Tooltip("Use default pinch rule (thumb and index optional) or palm rule")]
        private bool _usePinchRule = true;

        [SerializeField]
        [Tooltip("Minimum finger strength required to trigger grab (0-1)")]
        [Range(0f, 1f)]
        private float _grabThreshold = 0.85f;

        [SerializeField]
        [Tooltip("Minimum finger strength to maintain grab (0-1)")]
        [Range(0f, 1f)]
        private float _releaseThreshold = 0.35f;

        [Header("Events")]
        [SerializeField]
        [Tooltip("Event fired when grab gesture is detected")]
        public UnityEvent onGrabStarted;

        [SerializeField]
        [Tooltip("Event fired when grab gesture is released")]
        public UnityEvent onGrabEnded;

        [SerializeField]
        [Tooltip("Event fired continuously while grabbing")]
        public UnityEvent onGrabbing;

        private bool _isGrabbing = false;
        private GrabTypeFlags _currentGrabType = GrabTypeFlags.None;
        private float _currentFingerStrength = 0f;
        private bool _wasPinchGrabbing = false;
        private bool _wasPalmGrabbing = false;
        private GrabbingRule _grabbingRule;
        [SerializeField]
        private bool _overridesGrabbingRule = false;
        [SerializeField]
        private GrabbingRule _overrideGrabbingRule;

        public bool IsGrabbing => _isGrabbing;
        public GrabTypeFlags CurrentGrabType => _currentGrabType;
        public float CurrentFingerStrength => _currentFingerStrength;

        private void Awake()
        {
            // Initialize grabbing rule with default settings
            // Use static properties from GrabbingRule
            _grabbingRule = _overridesGrabbingRule ? _overrideGrabbingRule
            : _usePinchRule ? GrabbingRule.DefaultPinchRule : GrabbingRule.DefaultPalmRule;
        }

        private void Start()
        {
            if (_handGrabAPI == null)
            {
                _handGrabAPI = GetComponent<HandGrabAPI>();
                if (_handGrabAPI == null)
                {
                    Debug.LogError("HandGrabAPI component is required but not found!");
                    enabled = false;
                    return;
                }
            }
        }

        private void Update()
        {
            if (_handGrabAPI == null)
                return;

            UpdateGrabDetection();
        }

        private void UpdateGrabDetection()
        {
            // Check pinch and palm grabbing states
            bool isPinchGrabbing = false;
            bool isPalmGrabbing = false;

            if ((_detectGrabTypes & GrabTypeFlags.Pinch) != 0)
            {
                isPinchGrabbing = _handGrabAPI.IsHandPinchGrabbing(_grabbingRule);
                _currentFingerStrength = _handGrabAPI.GetHandPinchScore(_grabbingRule);
            }

            if ((_detectGrabTypes & GrabTypeFlags.Palm) != 0)
            {
                isPalmGrabbing = _handGrabAPI.IsHandPalmGrabbing(_grabbingRule);
                if (!isPinchGrabbing)
                {
                    _currentFingerStrength = _handGrabAPI.GetHandPalmScore(_grabbingRule);
                }
            }

            bool shouldGrab = isPinchGrabbing || isPalmGrabbing;

            // Determine grab state based on finger strength and thresholds
            if (!_isGrabbing)
            {
                // Check for grab start using change detection
                bool pinchStarted = (_detectGrabTypes & GrabTypeFlags.Pinch) != 0
                    && _handGrabAPI.IsHandSelectPinchFingersChanged(_grabbingRule);
                bool palmStarted = (_detectGrabTypes & GrabTypeFlags.Palm) != 0
                    && _handGrabAPI.IsHandSelectPalmFingersChanged(_grabbingRule);

                if ((pinchStarted || palmStarted) && _currentFingerStrength >= _grabThreshold)
                {
                    StartGrab();
                }
            }
            else
            {
                // Check for grab end using change detection
                bool pinchEnded = (_detectGrabTypes & GrabTypeFlags.Pinch) != 0
                    && _handGrabAPI.IsHandUnselectPinchFingersChanged(_grabbingRule);
                bool palmEnded = (_detectGrabTypes & GrabTypeFlags.Palm) != 0
                    && _handGrabAPI.IsHandUnselectPalmFingersChanged(_grabbingRule);

                if ((pinchEnded || palmEnded) || !shouldGrab || _currentFingerStrength <= _releaseThreshold)
                {
                    EndGrab();
                }
                else
                {
                    // Still grabbing
                    onGrabbing?.Invoke();
                }
            }

            _wasPinchGrabbing = isPinchGrabbing;
            _wasPalmGrabbing = isPalmGrabbing;
        }

        private void StartGrab()
        {
            _isGrabbing = true;

            // Determine which type of grab is active
            if (_wasPinchGrabbing)
            {
                _currentGrabType = GrabTypeFlags.Pinch;
            }
            else if (_wasPalmGrabbing)
            {
                _currentGrabType = GrabTypeFlags.Palm;
            }

            Debug.Log($"[HandGrabDetector] Grab started - Type: {_currentGrabType}, Strength: {_currentFingerStrength:F2}");

            onGrabStarted?.Invoke();
        }

        private void EndGrab()
        {
            _isGrabbing = false;

            Debug.Log($"[HandGrabDetector] Grab ended - Strength: {_currentFingerStrength:F2}");

            _currentGrabType = GrabTypeFlags.None;
            onGrabEnded?.Invoke();
        }

        // Public methods for manual control
        public void ForceStartGrab()
        {
            if (!_isGrabbing)
            {
                StartGrab();
            }
        }

        public void ForceEndGrab()
        {
            if (_isGrabbing)
            {
                EndGrab();
            }
        }

        public void ResetDetector()
        {
            _isGrabbing = false;
            _currentGrabType = GrabTypeFlags.None;
            _currentFingerStrength = 0f;
        }

        // Editor helpers
        private void OnValidate()
        {
            // Ensure release threshold is lower than grab threshold
            if (_releaseThreshold >= _grabThreshold)
            {
                _releaseThreshold = _grabThreshold * 0.5f;
            }
        }

#if UNITY_EDITOR
        private void OnDrawGizmosSelected()
        {
            if (Application.isPlaying && _isGrabbing)
            {
                Gizmos.color = Color.green;
                Gizmos.DrawWireSphere(transform.position, 0.1f);
            }
        }
#endif
    }
}