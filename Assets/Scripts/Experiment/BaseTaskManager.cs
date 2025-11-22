using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using TMPro;

public abstract class BaseTaskManager : MonoBehaviour
{
    public GameObject origin;
    public GameObject headAnchor;

    [Header("Spawn Settings")]
    public GameObject prefabToSpawn;
    public GameObject movableObject;

    [Header("Regional Settings")]
    public List<GameObject> regionAreas = new List<GameObject>();

    [Header("Hand Tracking")]
    public Transform handTransform;

    [Header("Visual Feedback")]
    public Material normalMaterial;
    public Material withinThresholdMaterial;

    [Header("Trial Control")]
    public GameObject trialStartButton;
    public GameObject trialRetryButton;

    [Header("UI")]
    public TextMeshProUGUI trialCountText;

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

    // Abstract methods - must be implemented by child classes
    protected abstract int GetExpectedRegionCount();
    protected abstract void SelectRandomRotationAxes();
    protected abstract void GenerateAllExperimentalConditions();
    protected abstract int GetTotalConditionCount();
    protected abstract Vector3 GetMovableObjectStartPosition();
    protected abstract Vector3 GetTargetObjectPosition();
    protected abstract Quaternion GetTargetObjectRotation();
    protected abstract string GetConditionCSVColumns();
    protected abstract string GetConditionCSVValues(int taskIndex);
    protected abstract void StoreCompletedCondition();

    protected virtual void Start()
    {
        // Validate region areas
        int expectedCount = GetExpectedRegionCount();
        if (regionAreas.Count != expectedCount)
        {
            Debug.LogError($"Expected {expectedCount} region areas, but got {regionAreas.Count}!");
            return;
        }

        // Validate all regions have BoxColliders
        foreach (var region in regionAreas)
        {
            if (region == null || region.GetComponent<BoxCollider>() == null)
            {
                Debug.LogError("All region areas must have BoxColliders!");
                return;
            }
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

        // If the conditions to start the timer are met and it's not already running
        if (isObjectGrabbed && isWithinThreshold && _completionCoroutine == null)
        {
            _completionCoroutine = StartCoroutine(CompleteTrialAfterDelay());
        }
        // If the conditions to keep the timer running are broken and it is running
        else if ((!isObjectGrabbed || !isWithinThreshold) && _completionCoroutine != null)
        {
            StopCoroutine(_completionCoroutine);
            _completionCoroutine = null;
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
    }

    public void OnRelease()
    {
        isObjectGrabbed = false;
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

        // Reset trial tracking
        isWithinThreshold = false;
        taskStartTime = Time.time;
        currentClutchingCount = 0;
    }

    protected void RetryCurrentTrial()
    {
        Debug.Log("Retrying current trial");

        // Stop completion coroutine if it's running
        if (_completionCoroutine != null)
        {
            StopCoroutine(_completionCoroutine);
            _completionCoroutine = null;
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
        // Stop completion coroutine if it's running (safeguard)
        if (_completionCoroutine != null)
        {
            StopCoroutine(_completionCoroutine);
            _completionCoroutine = null;
        }

        float taskTime = Time.time - taskStartTime;
        taskCount++;
        taskTimes.Add(taskTime);
        clutchingCounts.Add(currentClutchingCount);

        // Store the completed condition (child class specific)
        StoreCompletedCondition();

        Debug.Log($"Task {taskCount} completed in {taskTime:F2} seconds with {currentClutchingCount} clutches");

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
        if (regionIndex < 0 || regionIndex >= regionAreas.Count)
        {
            Debug.LogError($"Invalid region index: {regionIndex}");
            return Vector3.zero;
        }

        BoxCollider collider = regionAreas[regionIndex].GetComponent<BoxCollider>();
        return regionAreas[regionIndex].transform.TransformPoint(collider.center);
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

    protected virtual void OnDrawGizmosSelected()
    {
        // Draw region areas
        if (regionAreas != null)
        {
            for (int i = 0; i < regionAreas.Count; i++)
            {
                if (regionAreas[i] == null) continue;

                BoxCollider collider = regionAreas[i].GetComponent<BoxCollider>();
                if (collider == null) continue;

                Gizmos.color = new Color(0, 1, 0, 0.3f);
                Gizmos.matrix = Matrix4x4.TRS(
                    regionAreas[i].transform.position,
                    regionAreas[i].transform.rotation,
                    regionAreas[i].transform.lossyScale
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
