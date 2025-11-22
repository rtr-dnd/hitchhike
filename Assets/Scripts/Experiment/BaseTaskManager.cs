using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using TMPro;
using Hitchhike;

public abstract class BaseTaskManager : MonoBehaviour
{
    public GameObject origin;
    public GameObject headAnchor;

    [Header("Spawn Settings")]
    public GameObject prefabToSpawn;
    public GameObject movableObject;

    [Header("Regional Settings")]
    public GameObject originalRegion;
    public GameObject centerMiddleRegion, centerFarRegion;
    public GameObject rightMiddleRegion, rightFarRegion;
    public GameObject leftMiddleRegion, leftFarRegion;
    private List<GameObject> _allRegions = new List<GameObject>();
    private Dictionary<Hitchhike.HandArea, GameObject> _handAreaToRegionMap = new Dictionary<Hitchhike.HandArea, GameObject>();

    [Header("Hand Tracking")]
    public Transform handTransform;
    public GameObject gazeSourceGameObject;

    [Header("Visual Feedback")]
    public Material normalMaterial;
    public Material withinThresholdMaterial;

    [Header("Trial Control")]
    public GameObject trialStartButton;
    public GameObject trialRetryButton;

    [Header("UI")]
    public TextMeshProUGUI trialCountText;

    [Header("Logging")]
    public int participantId = 1;
    public string conditionName = "DefaultCondition";

    [SerializeField]
    protected int randomSeed = 42;

    protected float positionThreshold = 0.02f;
    protected float rotationThresholdDegrees = 15f;
    protected float translationDistance = 0.314f;

    protected enum TrialState
    {
        WaitingToStart,
        Running,
        Completed
    }

    protected enum Phase
    {
        PreTrial,
        Reaching,
        Manipulating,
        Holding,
        ReAcquiring,
        Completed
    }

    public enum RotationAxisPair
    {
        PlusXPlusY,
        PlusXMinusY,
        MinusXPlusY,
        MinusXMinusY,
        PlusYPlusZ,
        PlusYMinusZ,
        MinusYPlusZ,
        MinusYMinusZ,
        PlusXPlusZ,
        PlusXMinusZ,
        MinusXPlusZ,
        MinusXMinusZ
    }

    public enum TranslationAxis
    {
        PlusX,
        MinusX,
        PlusZ,
        MinusZ
    }

    // State management
    protected TrialState currentTrialState = TrialState.WaitingToStart;
    protected int currentConditionIndex = 0;
    protected bool allConditionsCompleted = false;
    protected bool isCalibrated = false;
    protected bool isHitchhikeManagerAvailable = false;

    // Object references
    protected GameObject spawnedObject;
    protected MeshRenderer targetMeshRenderer;
    protected WireframeCubeVR targetWireframe;

    // Tracking variables
    protected bool isWithinThreshold = false;
    protected Coroutine _completionCoroutine = null;
    protected bool isObjectGrabbed = false;
    protected float taskStartTime;
    protected List<float> taskTimes = new List<float>();
    protected List<int> clutchingCounts = new List<int>();
    protected int taskCount = 0;
    protected int currentClutchingCount = 0;

    // Randomization
    protected List<RotationAxisPair> selectedRotationAxes = new List<RotationAxisPair>();
    protected List<int> conditionIndices = new List<int>();

    // Hand movement tracking
    protected float totalDistanceTraveled = 0f;
    protected float totalRotationAngle = 0f;
    protected Vector3 lastHandPosition;
    protected Quaternion lastHandRotation;
    protected bool isTrackingStarted = false;
    protected int ignoredPositionCount = 0;
    protected int ignoredRotationCount = 0;

    // Grabbed state tracking
    protected float grabbedDistanceTraveled = 0f;
    protected float grabbedRotationAngle = 0f;
    protected int grabbedIgnoredPositionCount = 0;
    protected int grabbedIgnoredRotationCount = 0;

    // Gaze tracking
    List<OVREyeGaze> eyeGazes;
    Vector3? filteredDirection = null;
    Vector3? filteredPosition = null;
    float ratio = 0.3f;

    // Logging & Phase tracking
    protected Oculus.Interaction.Input.IHand hand;
    protected bool isPinched = false; // New field for external pinch state
    protected Phase currentPhase = Phase.PreTrial;
    protected bool isInitialReachCompleted = false;
    protected float initialReachingTime = 0f;
    protected float manipulationTime = 0f;
    protected float preshapingRotation = 0f;
    protected float manipulationHandPathLength = 0f;
    protected float manipulationHandRotation = 0f;
    protected int failedGrabs = 0; // To be implemented

    // Retry tracking
    protected int currentRetryCount = 0;
    protected bool isRetryPressedThisFrame = false;

    public void SetIsPinched(bool value)
    {
        isPinched = value;
    }

    protected virtual int GetExpectedRegionCount()
    {
        return 7;
    }

    // Abstract methods - must be implemented by child classes
    protected abstract void SelectRandomRotationAxes();
    protected abstract void GenerateAllExperimentalConditions();
    protected abstract int GetTotalConditionCount();
    protected abstract Vector3 GetMovableObjectStartPosition();
    protected abstract Vector3 GetTargetObjectPosition();
    protected abstract Quaternion GetTargetObjectRotation();
    protected abstract string GetConditionCSVColumns();
    protected abstract string GetConditionCSVValues(int taskIndex);
    protected abstract void StoreCompletedCondition();

    // Trial parameters for logging
    protected abstract string GetCurrentStartRegionName();
    protected abstract string GetCurrentTargetRegionName();
    protected abstract string GetCurrentTranslationAxis();
    protected abstract string GetCurrentRotationAxis();
    protected abstract float GetCurrentRotationAngle();

    // Helper to get region name by index
    protected string GetRegionName(int regionIndex)
    {
        if (regionIndex < 0 || regionIndex >= _allRegions.Count || _allRegions[regionIndex] == null)
        {
            return "N/A";
        }
        return _allRegions[regionIndex].name;
    }

    protected virtual void Start()
    {
        // Populate and validate regions
        _allRegions.AddRange(new List<GameObject> {
                originalRegion, centerMiddleRegion, centerFarRegion,
                rightMiddleRegion, rightFarRegion, leftMiddleRegion, leftFarRegion
            });
        if (_allRegions.Any(r => r == null))
        {
            Debug.LogError("One or more region GameObjects are not assigned in the Inspector!");
            return;
        }

        // Create HandArea to Region map
        foreach (var region in _allRegions)
        {
            var handArea = region.GetComponentInChildren<Hitchhike.HandArea>();
            if (handArea != null)
            {
                _handAreaToRegionMap[handArea] = region;
            }
            else
            {
                Debug.LogWarning($"No HandArea component found in the children of region '{region.name}'");
            }
        }

        // Get IHand component
        hand = handTransform.GetComponent<Oculus.Interaction.Input.IHand>();

        // Populate eyeGazes list from assigned gazeSourceGameObject or self-components
        if (gazeSourceGameObject != null)
        {
            eyeGazes = new List<OVREyeGaze>(gazeSourceGameObject.GetComponents<OVREyeGaze>());
            if (eyeGazes.Count == 0)
            {
                Debug.LogWarning($"No OVREyeGaze components found on assigned Gaze Source GameObject '{gazeSourceGameObject.name}'. Gaze data will default to head forward.");
            }
        }
        else
        {
            eyeGazes = new List<OVREyeGaze>(GetComponents<OVREyeGaze>());
            if (eyeGazes.Count == 0)
            {
                Debug.LogWarning("No Gaze Source GameObject assigned, and no OVREyeGaze components found on this GameObject. Gaze data will default to head forward.");
            }
        }

        // Validate all regions have BoxColliders
        foreach (var region in _allRegions)
        {
            if (region == null || region.GetComponent<BoxCollider>() == null)
            {
                Debug.LogError("All region areas must have BoxColliders!");
                return;
            }
        }

        // Check HitchhikeManager availability (use FindObjectOfType to avoid Singleton error spam)
        var hitchhikeManager = FindObjectOfType<Hitchhike.HitchhikeManager>();
        if (hitchhikeManager != null)
        {
            isHitchhikeManagerAvailable = true;
        }
        else
        {
            isHitchhikeManagerAvailable = false;
            Debug.LogWarning("HitchhikeManager not found in scene. Virtual hand data will not be logged.");
        }

        if (prefabToSpawn != null && movableObject != null)
        {
            SelectRandomRotationAxes();
            GenerateAllExperimentalConditions();
            ShuffleConditionIndices();

            // Initialize hand tracking
            if (handTransform != null)
            {
                lastHandPosition = handTransform.position;
                lastHandRotation = handTransform.rotation;
                isTrackingStarted = true;
                Debug.Log("Hand tracking initialized");
            }
            else
            {
                Debug.LogWarning("Hand transform not assigned for tracking!");
            }

            // Start Logger
            if (Logger.Instance != null)
            {
                Logger.Instance.StartNewLog(participantId);
            }

            // Prepare the first trial (but don't show button until calibrated)
            PrepareNextTrial();

            // Hide buttons until calibration is done
            HideAllTrialButtons();
            Debug.Log("Please press H key to calibrate origin height before starting trials");
        }
        else
        {
            Debug.LogWarning("Prefab to spawn or movable object is not assigned!");
        }
    }

    private (Ray left, Ray right) GetGazeRays()
    {
        Ray defaultRay = new Ray(headAnchor.transform.position, headAnchor.transform.forward);
        Ray leftRay = defaultRay;
        Ray rightRay = defaultRay;

        if (eyeGazes != null && eyeGazes.Count > 0)
        {
            var leftEye = eyeGazes.FirstOrDefault(e => e.Eye == OVREyeGaze.EyeId.Left);
            var rightEye = eyeGazes.FirstOrDefault(e => e.Eye == OVREyeGaze.EyeId.Right);

            if (leftEye != null && leftEye.EyeTrackingEnabled)
            {
                leftRay = new Ray(leftEye.transform.position, leftEye.transform.forward);
            }
            if (rightEye != null && rightEye.EyeTrackingEnabled)
            {
                rightRay = new Ray(rightEye.transform.position, rightEye.transform.forward);
            }
        }

        return (leftRay, rightRay);
    }

    protected virtual void Update()
    {
        if (Input.GetKeyDown(KeyCode.Space))
        {
            OnTrialStartButtonPressed();
        }

        if (Input.GetKeyDown(KeyCode.R))
        {
            ResetExperiment();
        }

        if (Input.GetKeyDown(KeyCode.E))
        {
            ExportTaskTimesToCSV();
        }

        if (Input.GetKeyDown(KeyCode.H))
        {
            CalibrateOriginHeight();
        }

        CheckDockingAlignment();
    }

    protected virtual void FixedUpdate()
    {
        TrackHandMovement();

        if (!allConditionsCompleted && Logger.Instance != null)
        {
            // Get gaze rays
            var (leftGaze, rightGaze) = GetGazeRays();

            // Get pinch state (now set externally)
            bool isIndexPinching = isPinched;

            // Get Hitchhiking data if available
            string activeRegionName = "N/A";
            Pose virtualHandPose = Pose.identity;
            if (isHitchhikeManagerAvailable && Hitchhike.HitchhikeManager.Instance != null)
            {
                var activeArea = Hitchhike.HitchhikeManager.Instance.GetActiveHandArea();
                if (activeArea != null)
                {
                    if (_handAreaToRegionMap.ContainsKey(activeArea))
                    {
                        activeRegionName = _handAreaToRegionMap[activeArea].name;
                    }

                    if (activeArea.wraps != null && activeArea.wraps.Count > 0)
                    {
                        var virtualHand = (activeArea.wraps[0] as InteractionHandWrap).mainHand.FindChildRecursive("XRHand_Wrist");
                        virtualHandPose.position = virtualHand.transform.position;
                        virtualHandPose.rotation = virtualHand.transform.rotation;
                    }
                }
            }

            // Get object poses safely
            Pose movablePose = Pose.identity;
            if (movableObject != null)
            {
                movablePose = new Pose(movableObject.transform.position, movableObject.transform.rotation);
            }

            Pose spawnedPose = Pose.identity;
            if (spawnedObject != null)
            {
                spawnedPose = new Pose(spawnedObject.transform.position, spawnedObject.transform.rotation);
            }

            // Log frame data
            Logger.Instance.LogFrameData(
                Time.time,
                currentConditionIndex,
                conditionName,
                currentPhase.ToString(),
                GetCurrentStartRegionName(),
                GetCurrentTargetRegionName(),
                GetCurrentTranslationAxis(),
                GetCurrentRotationAxis(),
                GetCurrentRotationAngle(),
                headAnchor.transform.position.x, headAnchor.transform.position.y, headAnchor.transform.position.z,
                headAnchor.transform.rotation.x, headAnchor.transform.rotation.y, headAnchor.transform.rotation.z, headAnchor.transform.rotation.w,
                handTransform.position.x, handTransform.position.y, handTransform.position.z,
                handTransform.rotation.x, handTransform.rotation.y, handTransform.rotation.z, handTransform.rotation.w,
                virtualHandPose.position.x, virtualHandPose.position.y, virtualHandPose.position.z,
                virtualHandPose.rotation.x, virtualHandPose.rotation.y, virtualHandPose.rotation.z, virtualHandPose.rotation.w,
                activeRegionName,
                leftGaze.origin.x, leftGaze.origin.y, leftGaze.origin.z,
                leftGaze.direction.x, leftGaze.direction.y, leftGaze.direction.z,
                rightGaze.origin.x, rightGaze.origin.y, rightGaze.origin.z,
                rightGaze.direction.x, rightGaze.direction.y, rightGaze.direction.z,
                movablePose.position.x, movablePose.position.y, movablePose.position.z,
                movablePose.rotation.x, movablePose.rotation.y, movablePose.rotation.z, movablePose.rotation.w,
                spawnedPose.position.x, spawnedPose.position.y, spawnedPose.position.z,
                spawnedPose.rotation.x, spawnedPose.rotation.y, spawnedPose.rotation.z, spawnedPose.rotation.w,
                isObjectGrabbed,
                isIndexPinching,
                isWithinThreshold,
                isRetryPressedThisFrame
            );

            // Reset retry flag after logging
            isRetryPressedThisFrame = false;
        }
    }

    protected void ShuffleConditionIndices()
    {
        conditionIndices.Clear();
        int totalCount = GetTotalConditionCount();
        for (int i = 0; i < totalCount; i++)
        {
            conditionIndices.Add(i);
        }

        // Fisher-Yates shuffle
        for (int i = conditionIndices.Count - 1; i > 0; i--)
        {
            int randomIndex = Random.Range(0, i + 1);
            int temp = conditionIndices[i];
            conditionIndices[i] = conditionIndices[randomIndex];
            conditionIndices[randomIndex] = temp;
        }

        currentConditionIndex = 0;
        Debug.Log("Shuffled condition order");
    }

    protected virtual void ResetExperiment()
    {
        // Reset all tracking variables
        taskTimes.Clear();
        clutchingCounts.Clear();
        taskCount = 0;
        currentClutchingCount = 0;
        allConditionsCompleted = false;

        // Reset hand tracking
        totalDistanceTraveled = 0f;
        totalRotationAngle = 0f;
        ignoredPositionCount = 0;
        ignoredRotationCount = 0;

        // Reset grabbed state tracking
        grabbedDistanceTraveled = 0f;
        grabbedRotationAngle = 0f;
        grabbedIgnoredPositionCount = 0;
        grabbedIgnoredRotationCount = 0;

        if (handTransform != null)
        {
            lastHandPosition = handTransform.position;
            lastHandRotation = handTransform.rotation;
            isTrackingStarted = true;
        }

        // Clean up any existing spawned object
        if (spawnedObject != null)
        {
            Destroy(spawnedObject);
            spawnedObject = null;
        }

        // Re-select random axes and reshuffle conditions
        SelectRandomRotationAxes();
        GenerateAllExperimentalConditions();
        ShuffleConditionIndices();

        // Prepare the first trial
        PrepareNextTrial();

        Debug.Log("Experiment reset with new randomized order.");
    }

    protected void CalibrateOriginHeight()
    {
        if (headAnchor != null && origin != null)
        {
            Vector3 newPosition = origin.transform.position;
            newPosition.y = headAnchor.transform.position.y - 0.5f;
            origin.transform.position = newPosition;
            Debug.Log($"Origin height calibrated to {newPosition.y:F3}m (head anchor - 0.4m)");

            // Mark as calibrated and show trial start button if in waiting state
            isCalibrated = true;
            if (currentTrialState == TrialState.WaitingToStart && !allConditionsCompleted)
            {
                ShowTrialStartButton();
                Debug.Log("Calibration complete! You can now start the first trial.");
            }

            // Update the UI display
            UpdateTrialCountDisplay();
        }
        else
        {
            if (headAnchor == null)
                Debug.LogWarning("Head anchor not assigned!");
            if (origin == null)
                Debug.LogWarning("Origin not assigned!");
        }
    }

    protected void CheckDockingAlignment()
    {
        if (spawnedObject == null || movableObject == null || allConditionsCompleted || currentTrialState != TrialState.Running)
            return;

        float positionDistance = Vector3.Distance(movableObject.transform.position, spawnedObject.transform.position);
        float rotationAngle = Quaternion.Angle(movableObject.transform.rotation, spawnedObject.transform.rotation);

        isWithinThreshold = (positionDistance <= positionThreshold && rotationAngle <= rotationThresholdDegrees);

        if (isObjectGrabbed && isWithinThreshold)
        {
            if (currentPhase != Phase.Holding)
            {
                currentPhase = Phase.Holding;
            }
            if (_completionCoroutine == null)
            {
                _completionCoroutine = StartCoroutine(CompleteTrialAfterDelay());
            }
        }
        else
        {
            if (_completionCoroutine != null)
            {
                StopCoroutine(_completionCoroutine);
                _completionCoroutine = null;
            }
            // If we were holding and now we are not, revert phase
            if (currentPhase == Phase.Holding)
            {
                currentPhase = isObjectGrabbed ? Phase.Manipulating : Phase.ReAcquiring;
            }
        }
    }

    protected IEnumerator CompleteTrialAfterDelay()
    {
        yield return new WaitForSeconds(0.3f);

        // After waiting, re-check the conditions.
        // This is a safeguard in case the state changed during the frame the coroutine was paused.
        if (isObjectGrabbed && isWithinThreshold && currentTrialState == TrialState.Running)
        {
            CompleteTrial();
        }
        _completionCoroutine = null; // Mark as finished
    }

    public void OnGrab()
    {
        isObjectGrabbed = true;
        currentClutchingCount++;

        if (!isInitialReachCompleted)
        {
            isInitialReachCompleted = true;
            initialReachingTime = Time.time - taskStartTime;
            // Preshaping rotation is already tracked by TrackHandMovement
            currentPhase = Phase.Manipulating;
        }
        else
        {
            currentPhase = Phase.Manipulating;
        }
    }

    public void OnRelease()
    {
        isObjectGrabbed = false;
        if (currentTrialState == TrialState.Running)
        {
            currentPhase = Phase.ReAcquiring;
        }
    }

    public void OnTrialStartButtonPressed()
    {
        if (!isCalibrated)
        {
            Debug.LogWarning("Please calibrate origin height first by pressing H key!");
            return;
        }

        if (currentTrialState != TrialState.WaitingToStart)
            return;

        Debug.Log("Trial start button pressed");
        StartCurrentTrial();
    }

    public void OnTrialRetryButtonPressed()
    {
        if (currentTrialState != TrialState.Running)
            return;

        Debug.Log("Trial retry button pressed");
        RetryCurrentTrial();
    }

    protected void ShowTrialStartButton()
    {
        if (trialStartButton != null)
            trialStartButton.SetActive(true);
        if (trialRetryButton != null)
            trialRetryButton.SetActive(false);
    }

    protected void ShowTrialRetryButton()
    {
        if (trialStartButton != null)
            trialStartButton.SetActive(false);
        if (trialRetryButton != null)
            trialRetryButton.SetActive(true);
    }

    protected void HideAllTrialButtons()
    {
        if (trialStartButton != null)
            trialStartButton.SetActive(false);
        if (trialRetryButton != null)
            trialRetryButton.SetActive(false);
    }

    protected virtual void PrepareNextTrial()
    {
        // Check if there are more trials
        if (currentConditionIndex >= conditionIndices.Count)
        {
            int totalCount = GetTotalConditionCount();
            Debug.Log($"=== EXPERIMENT COMPLETED ===");
            Debug.Log($"All {totalCount} conditions have been tested!");
            Debug.Log($"Press 'E' to export results or 'R' to reset");
            allConditionsCompleted = true;
            HideAllTrialButtons();

            // Destroy any remaining spawned object
            if (spawnedObject != null)
            {
                Destroy(spawnedObject);
                spawnedObject = null;
            }

            // Update display for experiment completion
            UpdateTrialCountDisplay();
            return;
        }

        currentConditionIndex++;

        // Reset retry count for new trial
        currentRetryCount = 0;

        Debug.Log($"Prepared trial {currentConditionIndex}/{conditionIndices.Count}");

        // Set state to waiting for start
        currentTrialState = TrialState.WaitingToStart;

        // Only show button if already calibrated
        if (isCalibrated)
        {
            ShowTrialStartButton();
        }

        // Hide objects until trial starts
        if (movableObject != null)
        {
            movableObject.SetActive(false);
        }

        // Update trial count display
        UpdateTrialCountDisplay();
    }

    protected virtual void UpdateTrialCountDisplay()
    {
        if (trialCountText == null) return;

        if (!isCalibrated)
        {
            trialCountText.text = "Please wait";
        }
        else if (allConditionsCompleted)
        {
            trialCountText.text = "Finished";
        }
        else
        {
            int totalTrials = GetTotalConditionCount();
            trialCountText.text = $"Trial: {currentConditionIndex} / {totalTrials}";
        }
    }

    protected void StartCurrentTrial()
    {
        Debug.Log("Starting trial");

        // Change state to running
        currentTrialState = TrialState.Running;
        currentPhase = Phase.Reaching;
        ShowTrialRetryButton();

        // Get positions and rotations from child class
        Vector3 movablePosition = GetMovableObjectStartPosition();
        Vector3 targetPosition = GetTargetObjectPosition();
        Quaternion targetRotation = GetTargetObjectRotation();

        // Place movable object (set position before showing)
        if (movableObject != null)
        {
            movableObject.transform.position = movablePosition;
            movableObject.transform.rotation = Quaternion.identity;
            movableObject.SetActive(true);
        }

        // Destroy old spawned object if it exists
        if (spawnedObject != null)
        {
            Destroy(spawnedObject);
        }

        // Spawn target object (set position before showing)
        spawnedObject = Instantiate(prefabToSpawn, targetPosition, targetRotation);
        spawnedObject.SetActive(false); // Hide first

        targetMeshRenderer = spawnedObject.GetChildWithName("Stanford_Bunny").GetComponent<MeshRenderer>();
        if (targetMeshRenderer != null && normalMaterial != null)
        {
            targetMeshRenderer.material = normalMaterial;
        }
        targetWireframe = spawnedObject.GetComponentInChildren<WireframeCubeVR>();
        if (targetWireframe != null && normalMaterial != null)
        {
            targetWireframe.UpdateMaterial(normalMaterial);
        }

        spawnedObject.SetActive(true); // Show after all setup is complete

        // Reset trial logging variables
        isWithinThreshold = false;
        taskStartTime = Time.time;
        currentClutchingCount = 0;
        isInitialReachCompleted = false;
        initialReachingTime = 0f;
        manipulationTime = 0f;
        preshapingRotation = 0f;
        manipulationHandPathLength = 0f;
        manipulationHandRotation = 0f;
        failedGrabs = 0;
        totalDistanceTraveled = 0f;
        totalRotationAngle = 0f;
    }

    protected void RetryCurrentTrial()
    {
        Debug.Log("Retrying current trial");

        // Track retry
        isRetryPressedThisFrame = true;
        currentRetryCount++;

        // Stop completion coroutine if it's running
        if (_completionCoroutine != null)
        {
            StopCoroutine(_completionCoroutine);
            _completionCoroutine = null;
        }

        // Manually reset grab state before disabling the object
        if (isObjectGrabbed)
        {
            isObjectGrabbed = false;
        }

        // Hide and destroy objects
        if (movableObject != null)
        {
            movableObject.SetActive(false);
        }
        if (spawnedObject != null)
        {
            Destroy(spawnedObject);
            spawnedObject = null;
        }

        // Reset clutching count for this trial (don't save it)
        currentClutchingCount = 0;

        // Go back to waiting state
        currentTrialState = TrialState.WaitingToStart;
        ShowTrialStartButton();

        Debug.Log("Trial reset. Press start button to try again.");
    }

    protected void CompleteTrial()
    {
        if (currentTrialState != TrialState.Running) return; // Prevent double completion

        // Stop completion coroutine if it's running (safeguard)
        if (_completionCoroutine != null)
        {
            StopCoroutine(_completionCoroutine);
            _completionCoroutine = null;
        }
        currentPhase = Phase.Completed;

        // --- Calculate final metrics ---
        float taskTime = Time.time - taskStartTime;
        manipulationTime = isInitialReachCompleted ? (taskTime - initialReachingTime) : 0;
        float finalPositionError = Vector3.Distance(movableObject.transform.position, spawnedObject.transform.position);
        float finalRotationError = Quaternion.Angle(movableObject.transform.rotation, spawnedObject.transform.rotation);

        // --- Log Summary Data ---
        if (Logger.Instance != null)
        {
            Logger.Instance.LogTrialSummary(
                currentConditionIndex,
                participantId,
                conditionName,
                GetCurrentStartRegionName(),
                GetCurrentTargetRegionName(),
                GetCurrentTranslationAxis(),
                GetCurrentRotationAxis(),
                GetCurrentRotationAngle(),
                taskTime,
                initialReachingTime,
                manipulationTime,
                currentClutchingCount,
                failedGrabs,
                currentRetryCount,
                totalDistanceTraveled,
                totalRotationAngle,
                preshapingRotation,
                manipulationHandPathLength,
                manipulationHandRotation,
                finalPositionError,
                finalRotationError
            );
        }

        taskCount++;
        taskTimes.Add(taskTime);
        clutchingCounts.Add(currentClutchingCount);

        // Store the completed condition (child class specific)
        StoreCompletedCondition();

        Debug.Log($"Task {taskCount} completed in {taskTime:F2} seconds with {currentClutchingCount} clutches");

        // Manually reset grab state before disabling the object
        if (isObjectGrabbed)
        {
            isObjectGrabbed = false;
        }

        // Hide movable object and destroy target
        if (movableObject != null)
        {
            movableObject.SetActive(false);
        }
        if (spawnedObject != null)
        {
            Destroy(spawnedObject);
            spawnedObject = null;
        }

        // Set state to completed
        currentTrialState = TrialState.Completed;
        isWithinThreshold = false; // Reset after trial completion
        HideAllTrialButtons();

        // Check if all conditions are completed
        if (currentConditionIndex >= conditionIndices.Count)
        {
            // All conditions completed
            OutputExperimentSummaryCSV();
            allConditionsCompleted = true;
            UpdateTrialCountDisplay();
        }
        else
        {
            // Prepare next trial
            PrepareNextTrial();
        }
    }



    protected void UpdateTargetMaterial(bool withinThreshold)
    {
        if (targetMeshRenderer == null)
            return;

        if (withinThreshold && withinThresholdMaterial != null)
        {
            targetMeshRenderer.material = withinThresholdMaterial;
            if (targetWireframe != null) targetWireframe.UpdateMaterial(withinThresholdMaterial);
        }
        else if (!withinThreshold && normalMaterial != null)
        {
            targetMeshRenderer.material = normalMaterial;
            if (targetWireframe != null) targetWireframe.UpdateMaterial(normalMaterial);
        }
    }

    protected Vector3 GetRegionCenter(int regionIndex)
    {
        if (regionIndex < 0 || regionIndex >= _allRegions.Count)
        {
            Debug.LogError($"Invalid region index: {regionIndex}");
            return Vector3.zero;
        }

        BoxCollider collider = _allRegions[regionIndex].GetComponent<BoxCollider>();
        return _allRegions[regionIndex].transform.TransformPoint(collider.center);
    }

    protected Vector3 CalculateTargetPosition(Vector3 basePosition, TranslationAxis axis)
    {
        Vector3 offset = Vector3.zero;

        switch (axis)
        {
            case TranslationAxis.PlusX:
                offset = Vector3.right * translationDistance;
                break;
            case TranslationAxis.MinusX:
                offset = Vector3.left * translationDistance;
                break;
            case TranslationAxis.PlusZ:
                offset = Vector3.forward * translationDistance;
                break;
            case TranslationAxis.MinusZ:
                offset = Vector3.back * translationDistance;
                break;
        }

        return basePosition + offset;
    }

    protected Quaternion CalculateTargetRotation(RotationAxisPair axisPair)
    {
        Vector3 rotationAxis = Vector3.zero;
        float angle = 45f;

        switch (axisPair)
        {
            case RotationAxisPair.PlusXPlusY:
                rotationAxis = (Vector3.right + Vector3.up).normalized;
                break;
            case RotationAxisPair.PlusXMinusY:
                rotationAxis = (Vector3.right - Vector3.up).normalized;
                break;
            case RotationAxisPair.MinusXPlusY:
                rotationAxis = (-Vector3.right + Vector3.up).normalized;
                break;
            case RotationAxisPair.MinusXMinusY:
                rotationAxis = (-Vector3.right - Vector3.up).normalized;
                break;
            case RotationAxisPair.PlusYPlusZ:
                rotationAxis = (Vector3.up + Vector3.forward).normalized;
                break;
            case RotationAxisPair.PlusYMinusZ:
                rotationAxis = (Vector3.up - Vector3.forward).normalized;
                break;
            case RotationAxisPair.MinusYPlusZ:
                rotationAxis = (-Vector3.up + Vector3.forward).normalized;
                break;
            case RotationAxisPair.MinusYMinusZ:
                rotationAxis = (-Vector3.up - Vector3.forward).normalized;
                break;
            case RotationAxisPair.PlusXPlusZ:
                rotationAxis = (Vector3.right + Vector3.forward).normalized;
                break;
            case RotationAxisPair.PlusXMinusZ:
                rotationAxis = (Vector3.right - Vector3.forward).normalized;
                break;
            case RotationAxisPair.MinusXPlusZ:
                rotationAxis = (-Vector3.right + Vector3.forward).normalized;
                break;
            case RotationAxisPair.MinusXMinusZ:
                rotationAxis = (-Vector3.right - Vector3.forward).normalized;
                break;
        }

        return Quaternion.AngleAxis(angle, rotationAxis);
    }

    protected void ExportTaskTimesToCSV()
    {
        if (taskTimes.Count == 0)
        {
            Debug.Log("No task times to export");
            return;
        }

        System.Text.StringBuilder csv = new System.Text.StringBuilder();

        // Header: common columns + condition-specific columns
        csv.AppendLine($"Task Number,Time (seconds),Clutching Count,{GetConditionCSVColumns()}");

        // Data rows
        for (int i = 0; i < taskTimes.Count; i++)
        {
            string conditionValues = i < taskCount ? GetConditionCSVValues(i) : "N/A";
            csv.AppendLine($"{i + 1},{taskTimes[i]:F3},{clutchingCounts[i]},{conditionValues}");
        }

        // Average (common)
        float averageTime = taskTimes.Sum() / taskTimes.Count;
        float averageClutching = clutchingCounts.Sum() / (float)clutchingCounts.Count;
        csv.AppendLine($"Average,{averageTime:F3},{averageClutching:F1}");

        Debug.Log("=== Task Times CSV ===");
        Debug.Log(csv.ToString());
        Debug.Log("=== End CSV ===");
    }

    protected void OutputExperimentSummaryCSV()
    {
        float totalTaskTime = taskTimes.Count > 0 ? taskTimes.Sum() : 0f;
        int totalClutchingCount = clutchingCounts.Count > 0 ? clutchingCounts.Sum() : 0;

        int totalCount = GetTotalConditionCount();
        Debug.Log($"=== EXPERIMENT COMPLETED ===");
        Debug.Log($"All {totalCount} conditions have been tested!");

        System.Text.StringBuilder summaryCSV = new System.Text.StringBuilder();
        summaryCSV.AppendLine("Metric,Value,Unit");
        summaryCSV.AppendLine($"Total Task Time,{totalTaskTime:F2},seconds");
        summaryCSV.AppendLine($"Total Clutching Count,{totalClutchingCount},count");
        summaryCSV.AppendLine($"Total Hand Distance,{totalDistanceTraveled:F3},meters");
        summaryCSV.AppendLine($"Total Hand Rotation,{totalRotationAngle:F1},degrees");
        summaryCSV.AppendLine($"Ignored Position Updates,{ignoredPositionCount},count");
        summaryCSV.AppendLine($"Ignored Rotation Updates,{ignoredRotationCount},count");
        summaryCSV.AppendLine($"Grabbed Distance,{grabbedDistanceTraveled:F3},meters");
        summaryCSV.AppendLine($"Grabbed Rotation,{grabbedRotationAngle:F1},degrees");
        summaryCSV.AppendLine($"Grabbed Ignored Position,{grabbedIgnoredPositionCount},count");
        summaryCSV.AppendLine($"Grabbed Ignored Rotation,{grabbedIgnoredRotationCount},count");

        Debug.Log("=== EXPERIMENT SUMMARY CSV ===");
        Debug.Log(summaryCSV.ToString());
        Debug.Log("=== END SUMMARY CSV ===");
        Debug.Log($"Press 'E' to export task details or 'R' to reset");
    }

    protected void TrackHandMovement()
    {
        if (!isTrackingStarted || handTransform == null || allConditionsCompleted)
            return;

        // Calculate distance traveled
        float distanceDelta = Vector3.Distance(handTransform.position, lastHandPosition);

        // Ignore unrealistic movements (> 10cm per frame)
        if (distanceDelta <= 0.1f)
        {
            totalDistanceTraveled += distanceDelta;
            if (isObjectGrabbed)
            {
                grabbedDistanceTraveled += distanceDelta;
                if (currentPhase == Phase.Manipulating || currentPhase == Phase.Holding)
                {
                    manipulationHandPathLength += distanceDelta;
                }
            }
        }
        else
        {
            ignoredPositionCount++;
            if (isObjectGrabbed)
            {
                grabbedIgnoredPositionCount++;
            }
        }

        // Calculate rotation angle
        float rotationDelta = Quaternion.Angle(handTransform.rotation, lastHandRotation);

        // Ignore unrealistic rotations (> 20 degrees per frame)
        if (rotationDelta <= 20f)
        {
            totalRotationAngle += rotationDelta;
            if (isObjectGrabbed)
            {
                grabbedRotationAngle += rotationDelta;
                if (currentPhase == Phase.Manipulating || currentPhase == Phase.Holding)
                {
                    manipulationHandRotation += rotationDelta;
                }
            }
            if (currentPhase == Phase.Reaching)
            {
                preshapingRotation += rotationDelta;
            }
        }
        else
        {
            ignoredRotationCount++;
            if (isObjectGrabbed)
            {
                grabbedIgnoredRotationCount++;
            }
        }

        // Update last position and rotation
        lastHandPosition = handTransform.position;
        lastHandRotation = handTransform.rotation;
    }

    protected virtual void OnDestroy()
    {
        if (Logger.Instance != null)
        {
            Logger.Instance.CloseLog();
        }
    }

    protected virtual void OnDrawGizmosSelected()
    {
        // Draw region areas
        if (_allRegions != null)
        {
            for (int i = 0; i < _allRegions.Count; i++)
            {
                if (_allRegions[i] == null) continue;

                BoxCollider collider = _allRegions[i].GetComponent<BoxCollider>();
                if (collider == null) continue;

                Gizmos.color = new Color(0, 1, 0, 0.3f);
                Gizmos.matrix = Matrix4x4.TRS(
                    _allRegions[i].transform.position,
                    _allRegions[i].transform.rotation,
                    _allRegions[i].transform.lossyScale
                );
                Gizmos.DrawCube(collider.center, collider.size);

                Gizmos.color = Color.green;
                Gizmos.DrawWireCube(collider.center, collider.size);
            }
        }

        if (spawnedObject != null && movableObject != null)
        {
            Gizmos.color = isWithinThreshold ? Color.yellow : Color.red;
            Gizmos.DrawLine(movableObject.transform.position, spawnedObject.transform.position);
        }
    }
}
