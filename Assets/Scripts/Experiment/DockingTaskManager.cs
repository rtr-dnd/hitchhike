using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using Oculus.Interaction;
using UnityEngine.Events;
using System.Linq;

[RequireComponent(typeof(BoxCollider))]
public class DockingTaskManager : MonoBehaviour
{
    [Header("Spawn Settings")]
    public GameObject prefabToSpawn;
    public GameObject movableObject;

    [Header("Hand Tracking")]
    public Transform handTransform; // Transform to track (e.g., hand or controller)

    [Header("Docking Thresholds")]
    public float positionThreshold = 0.1f;
    public float rotationThresholdDegrees = 15f;

    [Header("Visual Feedback")]
    public Material normalMaterial;
    public Material withinThresholdMaterial;

    [Header("Experimental Conditions")]
    [SerializeField]
    private float translationDistance = 0.2f;
    [SerializeField]
    private int randomSeed = 42;

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

    public enum RotationMagnitude
    {
        Deg45 = 45,
        Deg90 = 90
    }

    [System.Serializable]
    public class ExperimentalCondition
    {
        public TranslationAxis translationAxis;
        public RotationAxisPair rotationAxis;
        public RotationMagnitude rotationMagnitude;

        public ExperimentalCondition(TranslationAxis tAxis, RotationAxisPair rAxis, RotationMagnitude rMag)
        {
            translationAxis = tAxis;
            rotationAxis = rAxis;
            rotationMagnitude = rMag;
        }
    }

    private BoxCollider spawnArea;
    private GameObject spawnedObject;
    private MeshRenderer targetMeshRenderer;
    private bool isWithinThreshold = false;
    private bool wasWithinThreshold = false;
    private bool isObjectGrabbed = false;
    private float taskStartTime;
    private List<float> taskTimes = new List<float>();
    private List<int> clutchingCounts = new List<int>();
    private int taskCount = 0;
    private int currentClutchingCount = 0;

    private List<RotationAxisPair> selectedRotationAxes = new List<RotationAxisPair>();
    private List<ExperimentalCondition> allConditions = new List<ExperimentalCondition>();
    private List<int> conditionIndices = new List<int>();
    private int currentConditionIndex = 0;
    private bool allConditionsCompleted = false;
    private List<ExperimentalCondition> completedConditions = new List<ExperimentalCondition>();

    // Hand movement tracking
    private float totalDistanceTraveled = 0f;
    private float totalRotationAngle = 0f;
    private Vector3 lastHandPosition;
    private Quaternion lastHandRotation;
    private bool isTrackingStarted = false;
    private int ignoredPositionCount = 0;
    private int ignoredRotationCount = 0;

    // Grabbed state tracking
    private float grabbedDistanceTraveled = 0f;
    private float grabbedRotationAngle = 0f;
    private int grabbedIgnoredPositionCount = 0;
    private int grabbedIgnoredRotationCount = 0;

    void Awake()
    {
        spawnArea = GetComponent<BoxCollider>();
        spawnArea.isTrigger = true;
    }

    void Start()
    {
        if (prefabToSpawn != null && movableObject != null)
        {
            SelectRandomRotationAxes();
            GenerateAllExperimentalConditions();
            ShuffleConditionIndices();
            SpawnObjectAtRandomPosition();

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
        }
        else
        {
            Debug.LogWarning("Prefab to spawn or movable object is not assigned!");
        }
    }

    void SelectRandomRotationAxes()
    {
        Random.InitState(randomSeed);
        selectedRotationAxes.Clear();

        // Define the three axis pairs
        List<List<RotationAxisPair>> axisPairGroups = new List<List<RotationAxisPair>>
        {
            // ±X±Y group
            new List<RotationAxisPair> { RotationAxisPair.PlusXPlusY, RotationAxisPair.PlusXMinusY,
                                         RotationAxisPair.MinusXPlusY, RotationAxisPair.MinusXMinusY },
            // ±Y±Z group
            new List<RotationAxisPair> { RotationAxisPair.PlusYPlusZ, RotationAxisPair.PlusYMinusZ,
                                         RotationAxisPair.MinusYPlusZ, RotationAxisPair.MinusYMinusZ },
            // ±X±Z group
            new List<RotationAxisPair> { RotationAxisPair.PlusXPlusZ, RotationAxisPair.PlusXMinusZ,
                                         RotationAxisPair.MinusXPlusZ, RotationAxisPair.MinusXMinusZ }
        };

        // Randomly select one axis from each group
        foreach (var group in axisPairGroups)
        {
            int randomIndex = Random.Range(0, group.Count);
            selectedRotationAxes.Add(group[randomIndex]);
        }

        Debug.Log($"Selected rotation axes: {selectedRotationAxes[0]}, {selectedRotationAxes[1]}, {selectedRotationAxes[2]}");
    }

    void GenerateAllExperimentalConditions()
    {
        allConditions.Clear();

        // Generate all 24 combinations
        TranslationAxis[] allTranslations = { TranslationAxis.PlusX, TranslationAxis.MinusX,
                                              TranslationAxis.PlusZ, TranslationAxis.MinusZ };
        RotationMagnitude[] allMagnitudes = { RotationMagnitude.Deg45, RotationMagnitude.Deg90 };

        foreach (var tAxis in allTranslations)
        {
            foreach (var rAxis in selectedRotationAxes)
            {
                foreach (var rMag in allMagnitudes)
                {
                    allConditions.Add(new ExperimentalCondition(tAxis, rAxis, rMag));
                }
            }
        }

        Debug.Log($"Generated {allConditions.Count} experimental conditions");
    }

    void ShuffleConditionIndices()
    {
        conditionIndices.Clear();
        for (int i = 0; i < allConditions.Count; i++)
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

    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Space))
        {
            SpawnObjectAtRandomPosition();
        }

        if (Input.GetKeyDown(KeyCode.R))
        {
            ResetExperiment();
        }

        if (Input.GetKeyDown(KeyCode.E))
        {
            ExportTaskTimesToCSV();
        }

        CheckDockingAlignment();
    }

    void ResetExperiment()
    {
        // Reset all tracking variables
        taskTimes.Clear();
        clutchingCounts.Clear();
        completedConditions.Clear();
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

        // Reshuffle conditions and start over
        ShuffleConditionIndices();
        SpawnObjectAtRandomPosition();

        Debug.Log("Experiment reset with new randomized order");
    }

    void CheckDockingAlignment()
    {
        if (spawnedObject == null || movableObject == null || allConditionsCompleted)
            return;

        float positionDistance = Vector3.Distance(movableObject.transform.position, spawnedObject.transform.position);
        float rotationAngle = Quaternion.Angle(movableObject.transform.rotation, spawnedObject.transform.rotation);

        wasWithinThreshold = isWithinThreshold;
        isWithinThreshold = (positionDistance <= positionThreshold && rotationAngle <= rotationThresholdDegrees);

        if (isWithinThreshold != wasWithinThreshold)
        {
            UpdateTargetMaterial(isWithinThreshold);
        }

        if (isWithinThreshold && !isObjectGrabbed)
        {
            if (wasWithinThreshold)
            {
                StartCoroutine(DelayedSpawn());
            }
        }
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

    IEnumerator DelayedSpawn()
    {
        yield return new WaitForSeconds(0.01f);

        if (isWithinThreshold && !isObjectGrabbed && !allConditionsCompleted)
        {
            float taskTime = Time.time - taskStartTime;
            taskCount++;
            taskTimes.Add(taskTime);
            clutchingCounts.Add(currentClutchingCount);

            // Store the completed condition
            if (currentConditionIndex > 0 && currentConditionIndex <= conditionIndices.Count)
            {
                int conditionIndex = conditionIndices[currentConditionIndex - 1];
                completedConditions.Add(allConditions[conditionIndex]);
            }

            Debug.Log($"Task {taskCount} completed in {taskTime:F2} seconds with {currentClutchingCount} clutches");

            // Only spawn next object if there are more conditions to test
            if (currentConditionIndex < conditionIndices.Count)
            {
                SpawnObjectAtRandomPosition();
            }
            else
            {
                // All conditions completed
                float totalTaskTime = taskTimes.Count > 0 ? taskTimes.Sum() : 0f;
                int totalClutchingCount = clutchingCounts.Count > 0 ? clutchingCounts.Sum() : 0;
                
                Debug.Log($"=== EXPERIMENT COMPLETED ===");
                Debug.Log($"All {allConditions.Count} conditions have been tested!");
                
                // Output summary as CSV
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
                allConditionsCompleted = true;

                // Destroy the last spawned object
                if (spawnedObject != null)
                {
                    Destroy(spawnedObject);
                    spawnedObject = null;
                }
            }
        }
    }

    void UpdateTargetMaterial(bool withinThreshold)
    {
        if (targetMeshRenderer == null)
            return;

        if (withinThreshold && withinThresholdMaterial != null)
        {
            targetMeshRenderer.material = withinThresholdMaterial;
        }
        else if (!withinThreshold && normalMaterial != null)
        {
            targetMeshRenderer.material = normalMaterial;
        }
    }

    void SpawnObjectAtRandomPosition()
    {
        if (prefabToSpawn == null)
        {
            Debug.LogWarning("Prefab to spawn is not assigned!");
            return;
        }

        if (currentConditionIndex >= conditionIndices.Count)
        {
            Debug.Log($"=== EXPERIMENT COMPLETED ===");
            Debug.Log($"All {allConditions.Count} conditions have been tested!");
            Debug.Log($"Press 'E' to export results or 'R' to reset");
            allConditionsCompleted = true;

            // Destroy the last spawned object to prevent confusion
            if (spawnedObject != null)
            {
                Destroy(spawnedObject);
                spawnedObject = null;
            }
            return;
        }

        if (spawnedObject != null)
        {
            Destroy(spawnedObject);
        }

        // Get the next condition from the shuffled list
        int conditionIndex = conditionIndices[currentConditionIndex];
        ExperimentalCondition condition = allConditions[conditionIndex];
        currentConditionIndex++;

        Debug.Log($"Condition {currentConditionIndex}/{conditionIndices.Count}: Translation={condition.translationAxis}, Rotation={condition.rotationAxis}, Magnitude={condition.rotationMagnitude}°");

        // Calculate position based on translation axis
        Vector3 spawnPosition = CalculateSpawnPosition(condition.translationAxis);

        // Calculate rotation based on rotation axis and magnitude
        Quaternion spawnRotation = CalculateSpawnRotation(condition.rotationAxis, condition.rotationMagnitude);

        spawnedObject = Instantiate(prefabToSpawn, spawnPosition, spawnRotation);

        targetMeshRenderer = spawnedObject.GetComponentInChildren<MeshRenderer>();
        if (targetMeshRenderer != null && normalMaterial != null)
        {
            targetMeshRenderer.material = normalMaterial;
        }

        if (movableObject != null)
        {
            movableObject.transform.position = spawnArea.bounds.center;
            movableObject.transform.rotation = Quaternion.identity;
        }

        isWithinThreshold = false;
        wasWithinThreshold = false;
        taskStartTime = Time.time;
        currentClutchingCount = 0;
    }

    Vector3 CalculateSpawnPosition(TranslationAxis axis)
    {
        Vector3 basePosition = spawnArea.bounds.center;
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

    Quaternion CalculateSpawnRotation(RotationAxisPair axisPair, RotationMagnitude magnitude)
    {
        Vector3 rotationAxis = Vector3.zero;
        float angle = (float)magnitude;

        // Determine the rotation axis based on the axis pair
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

    void ExportTaskTimesToCSV()
    {
        if (taskTimes.Count == 0)
        {
            Debug.Log("No task times to export");
            return;
        }

        System.Text.StringBuilder csv = new System.Text.StringBuilder();
        csv.AppendLine("Task Number,Time (seconds),Clutching Count,Translation Axis,Rotation Axis,Rotation Magnitude");

        for (int i = 0; i < taskTimes.Count; i++)
        {
            if (i < completedConditions.Count)
            {
                var condition = completedConditions[i];
                csv.AppendLine($"{i + 1},{taskTimes[i]:F3},{clutchingCounts[i]},{condition.translationAxis},{condition.rotationAxis},{condition.rotationMagnitude}");
            }
            else
            {
                csv.AppendLine($"{i + 1},{taskTimes[i]:F3},{clutchingCounts[i]},N/A,N/A,N/A");
            }
        }

        float averageTime = 0;
        float averageClutching = 0;
        foreach (float time in taskTimes)
        {
            averageTime += time;
        }
        foreach (int clutch in clutchingCounts)
        {
            averageClutching += clutch;
        }
        averageTime /= taskTimes.Count;
        averageClutching /= clutchingCounts.Count;

        csv.AppendLine($"Average,{averageTime:F3},{averageClutching:F1}");

        Debug.Log("=== Task Times CSV ===");
        Debug.Log(csv.ToString());
        Debug.Log("=== End CSV ===");
    }

    void FixedUpdate()
    {
        TrackHandMovement();
    }

    void TrackHandMovement()
    {
        if (!isTrackingStarted || handTransform == null || allConditionsCompleted)
            return;

        // Calculate distance traveled
        float distanceDelta = Vector3.Distance(handTransform.position, lastHandPosition);

        // Ignore unrealistic movements (> 10cm per frame)
        if (distanceDelta <= 0.1f) // 0.1m = 10cm
        {
            totalDistanceTraveled += distanceDelta;

            // Track grabbed state separately
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

        // Ignore unrealistic rotations (> 10 degrees per frame)
        if (rotationDelta <= 20f)
        {
            totalRotationAngle += rotationDelta;

            // Track grabbed state separately
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

    void OnDrawGizmosSelected()
    {
        if (spawnArea == null)
            spawnArea = GetComponent<BoxCollider>();

        if (spawnArea != null)
        {
            Gizmos.color = new Color(0, 1, 0, 0.3f);
            Gizmos.matrix = Matrix4x4.TRS(transform.position, transform.rotation, transform.lossyScale);
            Gizmos.DrawCube(spawnArea.center, spawnArea.size);

            Gizmos.color = Color.green;
            Gizmos.DrawWireCube(spawnArea.center, spawnArea.size);
        }

        if (spawnedObject != null && movableObject != null)
        {
            Gizmos.color = isWithinThreshold ? Color.yellow : Color.red;
            Gizmos.DrawLine(movableObject.transform.position, spawnedObject.transform.position);
        }
    }
}
