using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using Oculus.Interaction;
using UnityEngine.Events;

[RequireComponent(typeof(BoxCollider))]
public class DockingTaskManager : MonoBehaviour
{
    [Header("Spawn Settings")]
    public GameObject prefabToSpawn;
    public GameObject movableObject;

    [Header("Docking Thresholds")]
    public float positionThreshold = 0.1f;
    public float rotationThresholdDegrees = 15f;

    [Header("Visual Feedback")]
    public Material normalMaterial;
    public Material withinThresholdMaterial;

    [Header("Pre-generated Poses")]
    [SerializeField]
    private int numberOfPoses = 30;
    [SerializeField]
    private int randomSeed = 42;
    
    [System.Serializable]
    public class SpawnPose
    {
        public Vector3 position;
        public Quaternion rotation;
        
        public SpawnPose(Vector3 pos, Quaternion rot)
        {
            position = pos;
            rotation = rot;
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
    
    private List<SpawnPose> preGeneratedPoses = new List<SpawnPose>();
    private List<int> poseIndices = new List<int>();
    private int currentPoseIndex = 0;
    private bool allPosesCompleted = false;

    void Awake()
    {
        spawnArea = GetComponent<BoxCollider>();
        spawnArea.isTrigger = true;
    }

    void Start()
    {
        if (prefabToSpawn != null && movableObject != null)
        {
            GenerateRandomPoses();
            ShufflePoseIndices();
            SpawnObjectAtRandomPosition();
        }
        else
        {
            Debug.LogWarning("Prefab to spawn or movable object is not assigned!");
        }
    }
    
    void GenerateRandomPoses()
    {
        Random.InitState(randomSeed);
        preGeneratedPoses.Clear();
        
        for (int i = 0; i < numberOfPoses; i++)
        {
            Vector3 randomPosition = GetRandomPositionInBox();
            Quaternion randomRotation = GetUniformRandomRotation();
            preGeneratedPoses.Add(new SpawnPose(randomPosition, randomRotation));
        }
        
        Debug.Log($"Generated {numberOfPoses} random poses with seed {randomSeed}");
    }
    
    void ShufflePoseIndices()
    {
        poseIndices.Clear();
        for (int i = 0; i < preGeneratedPoses.Count; i++)
        {
            poseIndices.Add(i);
        }
        
        // Fisher-Yates shuffle
        for (int i = poseIndices.Count - 1; i > 0; i--)
        {
            int randomIndex = Random.Range(0, i + 1);
            int temp = poseIndices[i];
            poseIndices[i] = poseIndices[randomIndex];
            poseIndices[randomIndex] = temp;
        }
        
        currentPoseIndex = 0;
        Debug.Log("Shuffled pose order");
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
        taskCount = 0;
        currentClutchingCount = 0;
        allPosesCompleted = false;
        
        // Reshuffle poses and start over
        ShufflePoseIndices();
        SpawnObjectAtRandomPosition();
        
        Debug.Log("Experiment reset with new randomized order");
    }

    void CheckDockingAlignment()
    {
        if (spawnedObject == null || movableObject == null || allPosesCompleted)
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

        if (isWithinThreshold && !isObjectGrabbed)
        {
            float taskTime = Time.time - taskStartTime;
            taskCount++;
            taskTimes.Add(taskTime);
            clutchingCounts.Add(currentClutchingCount);
            Debug.Log($"Task {taskCount} completed in {taskTime:F2} seconds with {currentClutchingCount} clutches");
            SpawnObjectAtRandomPosition();
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
        
        if (currentPoseIndex >= poseIndices.Count)
        {
            Debug.Log($"=== EXPERIMENT COMPLETED ===");
            Debug.Log($"All {numberOfPoses} poses have been used!");
            Debug.Log($"Press 'E' to export results or 'R' to reset");
            allPosesCompleted = true;
            
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

        // Get the next pose from the pre-generated list
        int poseIndex = poseIndices[currentPoseIndex];
        SpawnPose pose = preGeneratedPoses[poseIndex];
        currentPoseIndex++;
        
        Debug.Log($"Spawning object at pose {currentPoseIndex}/{poseIndices.Count} (original index: {poseIndex})");

        spawnedObject = Instantiate(prefabToSpawn, pose.position, pose.rotation);

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

    Vector3 GetRandomPositionInBox()
    {
        Bounds bounds = spawnArea.bounds;

        float x = Random.Range(bounds.min.x, bounds.max.x);
        float y = Random.Range(bounds.min.y, bounds.max.y);
        float z = Random.Range(bounds.min.z, bounds.max.z);

        return new Vector3(x, y, z);
    }

    Quaternion GetUniformRandomRotation()
    {
        return Random.rotationUniform;
    }

    void ExportTaskTimesToCSV()
    {
        if (taskTimes.Count == 0)
        {
            Debug.Log("No task times to export");
            return;
        }

        System.Text.StringBuilder csv = new System.Text.StringBuilder();
        csv.AppendLine("Task Number,Time (seconds),Clutching Count");
        
        for (int i = 0; i < taskTimes.Count; i++)
        {
            csv.AppendLine($"{i + 1},{taskTimes[i]:F3},{clutchingCounts[i]}");
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
