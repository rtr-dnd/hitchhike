using UnityEngine;
using System.Collections.Generic;

public class InterRegionalTaskManager : BaseTaskManager
{
    [System.Serializable]
    public class ExperimentalCondition
    {
        public int startRegionIndex;
        public int targetRegionIndex;
        public TranslationAxis translationAxis;
        public RotationAxisPair rotationAxis;
        public float rotationAngle; // 45f or 90f

        public ExperimentalCondition(int startIdx, int targetIdx, TranslationAxis tAxis, RotationAxisPair rAxis, float rAngle)
        {
            startRegionIndex = startIdx;
            targetRegionIndex = targetIdx;
            translationAxis = tAxis;
            rotationAxis = rAxis;
            rotationAngle = rAngle;
        }
    }

    private List<ExperimentalCondition> allConditions = new List<ExperimentalCondition>();
    private ExperimentalCondition currentCondition = null;

    protected override void SelectRandomRotationAxes()
    {
        // All 12 rotation axes are used in this experiment
        // This method is kept for compatibility but rotation axes are assigned in GenerateAllExperimentalConditions
        Random.InitState(randomSeed);
    }

    protected override void GenerateAllExperimentalConditions()
    {
        allConditions.Clear();

        TranslationAxis[] allTranslations = { TranslationAxis.PlusX, TranslationAxis.MinusX,
                                              TranslationAxis.PlusZ, TranslationAxis.MinusZ };

        // All 12 rotation axes
        RotationAxisPair[] allRotationAxes = {
            RotationAxisPair.PlusXPlusY, RotationAxisPair.PlusXMinusY,
            RotationAxisPair.MinusXPlusY, RotationAxisPair.MinusXMinusY,
            RotationAxisPair.PlusYPlusZ, RotationAxisPair.PlusYMinusZ,
            RotationAxisPair.MinusYPlusZ, RotationAxisPair.MinusYMinusZ,
            RotationAxisPair.PlusXPlusZ, RotationAxisPair.PlusXMinusZ,
            RotationAxisPair.MinusXPlusZ, RotationAxisPair.MinusXMinusZ
        };

        float[] rotationAngles = { 45f, 90f };

        // Step 1: Generate 49 base conditions (7 start regions × 7 target regions)
        List<(int startIdx, int targetIdx)> baseConditions = new List<(int, int)>();
        for (int startIdx = 0; startIdx < GetExpectedRegionCount(); startIdx++)
        {
            for (int targetIdx = 0; targetIdx < GetExpectedRegionCount(); targetIdx++)
            {
                baseConditions.Add((startIdx, targetIdx));
            }
        }

        // Step 2: Generate translation axis assignments (4 types, each ~12-13 times for 49 trials)
        List<TranslationAxis> translationAssignments = new List<TranslationAxis>();
        for (int i = 0; i < 49; i++)
        {
            translationAssignments.Add(allTranslations[i % 4]);
        }
        // Shuffle translation assignments
        for (int i = translationAssignments.Count - 1; i > 0; i--)
        {
            int randomIndex = Random.Range(0, i + 1);
            var temp = translationAssignments[i];
            translationAssignments[i] = translationAssignments[randomIndex];
            translationAssignments[randomIndex] = temp;
        }

        // Step 3: Generate rotation conditions (24 types × 2 = 48, plus 1 extra = 49)
        List<(RotationAxisPair axis, float angle)> rotationConditions = new List<(RotationAxisPair, float)>();
        foreach (var rAxis in allRotationAxes)
        {
            foreach (var angle in rotationAngles)
            {
                // Each rotation condition appears twice
                rotationConditions.Add((rAxis, angle));
                rotationConditions.Add((rAxis, angle));
            }
        }
        // Add one more random rotation condition to make 49
        rotationConditions.Add((allRotationAxes[Random.Range(0, allRotationAxes.Length)], rotationAngles[Random.Range(0, 2)]));

        // Shuffle rotation conditions
        for (int i = rotationConditions.Count - 1; i > 0; i--)
        {
            int randomIndex = Random.Range(0, i + 1);
            var temp = rotationConditions[i];
            rotationConditions[i] = rotationConditions[randomIndex];
            rotationConditions[randomIndex] = temp;
        }

        // Step 4: Combine all conditions
        for (int i = 0; i < baseConditions.Count; i++)
        {
            var (startIdx, targetIdx) = baseConditions[i];
            var tAxis = translationAssignments[i];
            var (rAxis, rAngle) = rotationConditions[i];
            allConditions.Add(new ExperimentalCondition(startIdx, targetIdx, tAxis, rAxis, rAngle));
        }

        Debug.Log($"Generated {allConditions.Count} experimental conditions (7 start regions × 7 target regions = 49)");

        if (isPractice)
        {
            // Shuffle again to ensure random selection from the full set
            for (int i = allConditions.Count - 1; i > 0; i--)
            {
                int randomIndex = Random.Range(0, i + 1);
                var temp = allConditions[i];
                allConditions[i] = allConditions[randomIndex];
                allConditions[randomIndex] = temp;
            }

            if (allConditions.Count > 20)
            {
                allConditions = allConditions.GetRange(0, 20);
            }
            Debug.Log($"Practice mode enabled: Reduced conditions to {allConditions.Count}");
        }
    }

    protected override int GetTotalConditionCount()
    {
        return allConditions.Count;
    }

    protected override Vector3 GetMovableObjectStartPosition()
    {
        if (currentCondition == null)
        {
            Debug.LogError("currentCondition is null");
            return Vector3.zero;
        }

        Vector3 startRegionCenter = GetRegionCenter(currentCondition.startRegionIndex);
        return startRegionCenter;
    }

    protected override Vector3 GetTargetObjectPosition()
    {
        if (currentCondition == null)
        {
            Debug.LogError("currentCondition is null");
            return Vector3.zero;
        }

        Vector3 targetRegionCenter = GetRegionCenter(currentCondition.targetRegionIndex);
        return CalculateTargetPosition(targetRegionCenter, currentCondition.translationAxis);
    }

    protected override Quaternion GetTargetObjectRotation()
    {
        if (currentCondition == null)
        {
            Debug.LogError("currentCondition is null");
            return Quaternion.identity;
        }

        return CalculateTargetRotationWithAngle(currentCondition.rotationAxis, currentCondition.rotationAngle);
    }

    private Quaternion CalculateTargetRotationWithAngle(RotationAxisPair axisPair, float angle)
    {
        Vector3 rotationAxis = Vector3.zero;

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

    protected override string GetConditionCSVColumns() => "";

    protected override string GetConditionCSVValues(int taskIndex) => "";

    protected override void StoreCompletedCondition() { }

    protected override string GetCurrentStartRegionName()
    {
        if (currentCondition == null) return "N/A";
        return GetRegionName(currentCondition.startRegionIndex);
    }

    protected override string GetCurrentTargetRegionName()
    {
        if (currentCondition == null) return "N/A";
        return GetRegionName(currentCondition.targetRegionIndex);
    }

    protected override string GetCurrentTranslationAxis()
    {
        return currentCondition?.translationAxis.ToString() ?? "N/A";
    }

    protected override string GetCurrentRotationAxis()
    {
        return currentCondition?.rotationAxis.ToString() ?? "N/A";
    }

    protected override float GetCurrentRotationAngle()
    {
        return currentCondition?.rotationAngle ?? 0f;
    }

    protected override void PrepareNextTrial()
    {
        // Check if there are more trials
        if (currentConditionIndex >= conditionIndices.Count)
        {
            Debug.Log($"=== EXPERIMENT COMPLETED ===");
            Debug.Log($"All {allConditions.Count} conditions have been tested!");
            Debug.Log($"Press 'E' to export results or 'R' to reset");
            allConditionsCompleted = true;
            HideAllTrialButtons();

            // Destroy any remaining spawned object
            if (spawnedObject != null)
            {
                Destroy(spawnedObject);
                spawnedObject = null;
            }

            UpdateTrialCountDisplay();
            return;
        }

        // Get the next condition
        int conditionIndex = conditionIndices[currentConditionIndex];
        currentCondition = allConditions[conditionIndex];
        currentConditionIndex++;

        // Reset retry count for new trial
        currentRetryCount = 0;

        Debug.Log($"Prepared trial {currentConditionIndex}/{conditionIndices.Count}: Start={currentCondition.startRegionIndex}, Target={currentCondition.targetRegionIndex}, Translation={currentCondition.translationAxis}, Rotation={currentCondition.rotationAxis}, Angle={currentCondition.rotationAngle}°");

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

        UpdateTrialCountDisplay();
    }

    protected override void ResetExperiment()
    {
        currentCondition = null;

        // Call base reset
        base.ResetExperiment();
    }
}
