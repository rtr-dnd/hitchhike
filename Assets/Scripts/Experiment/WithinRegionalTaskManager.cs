using UnityEngine;
using System.Collections.Generic;

public class WithinRegionalTaskManager : BaseTaskManager
{
    public enum InteractionType
    {
        Direct,
        GazePinch,
        HitchhikingHands
    }

    [Header("Interaction Type")]
    public InteractionType interactionType = InteractionType.HitchhikingHands;

    [System.Serializable]
    public class ExperimentalCondition
    {
        public int regionIndex;
        public TranslationAxis translationAxis;
        public RotationAxisPair rotationAxis;
        public float rotationAngle; // 45f or 90f

        public ExperimentalCondition(int regIdx, TranslationAxis tAxis, RotationAxisPair rAxis, float rAngle)
        {
            regionIndex = regIdx;
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

        if (interactionType == InteractionType.Direct)
        {
            // Direct: Region 0 only, 4 translation axes × 6 trials = 24 trials
            // 24 rotation conditions (12 axes × 2 angles), each used once
            List<(int regionIdx, TranslationAxis tAxis)> baseConditions = new List<(int, TranslationAxis)>();
            foreach (var tAxis in allTranslations)
            {
                // 6 trials per translation axis
                for (int i = 0; i < 6; i++)
                {
                    baseConditions.Add((0, tAxis));
                }
            }

            // Generate 24 rotation conditions (each used once)
            List<(RotationAxisPair axis, float angle)> rotationConditions = new List<(RotationAxisPair, float)>();
            foreach (var rAxis in allRotationAxes)
            {
                foreach (var angle in rotationAngles)
                {
                    rotationConditions.Add((rAxis, angle));
                }
            }

            // Shuffle rotation conditions
            ShuffleList(rotationConditions);

            // Combine
            for (int i = 0; i < baseConditions.Count; i++)
            {
                var (regionIdx, tAxis) = baseConditions[i];
                var (rAxis, rAngle) = rotationConditions[i];
                allConditions.Add(new ExperimentalCondition(regionIdx, tAxis, rAxis, rAngle));
            }

            Debug.Log($"Generated {allConditions.Count} experimental conditions for Direct (region 0 × 4 translations × 6 trials = 24)");
        }
        else
        {
            // GP/HH: Regions 1-6, 6 regions × 4 translation axes × 2 trials = 48 trials
            // 24 rotation conditions, each used twice
            List<(int regionIdx, TranslationAxis tAxis)> baseConditions = new List<(int, TranslationAxis)>();
            for (int regionIdx = 1; regionIdx <= 6; regionIdx++)
            {
                foreach (var tAxis in allTranslations)
                {
                    // 2 trials per region-translation combination
                    baseConditions.Add((regionIdx, tAxis));
                    baseConditions.Add((regionIdx, tAxis));
                }
            }

            // Generate 24 rotation conditions, each used twice = 48 total
            List<(RotationAxisPair axis, float angle)> rotationConditions = new List<(RotationAxisPair, float)>();
            foreach (var rAxis in allRotationAxes)
            {
                foreach (var angle in rotationAngles)
                {
                    rotationConditions.Add((rAxis, angle));
                    rotationConditions.Add((rAxis, angle));
                }
            }

            // Shuffle rotation conditions
            ShuffleList(rotationConditions);

            // Combine
            for (int i = 0; i < baseConditions.Count; i++)
            {
                var (regionIdx, tAxis) = baseConditions[i];
                var (rAxis, rAngle) = rotationConditions[i];
                allConditions.Add(new ExperimentalCondition(regionIdx, tAxis, rAxis, rAngle));
            }

            Debug.Log($"Generated {allConditions.Count} experimental conditions for {interactionType} (6 regions × 4 translations × 2 trials = 48)");
        }

        if (isPractice)
        {
            ShuffleList(allConditions);
            if (allConditions.Count > 20)
            {
                allConditions = allConditions.GetRange(0, 20);
            }
            Debug.Log($"Practice mode enabled: Reduced conditions to {allConditions.Count}");
        }
    }

    private void ShuffleList<T>(List<T> list)
    {
        for (int i = list.Count - 1; i > 0; i--)
        {
            int randomIndex = Random.Range(0, i + 1);
            T temp = list[i];
            list[i] = list[randomIndex];
            list[randomIndex] = temp;
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

        Vector3 regionCenter = GetRegionCenter(currentCondition.regionIndex);
        return regionCenter;
    }

    protected override Vector3 GetTargetObjectPosition()
    {
        if (currentCondition == null)
        {
            Debug.LogError("currentCondition is null");
            return Vector3.zero;
        }

        Vector3 regionCenter = GetRegionCenter(currentCondition.regionIndex);
        return CalculateTargetPosition(regionCenter, currentCondition.translationAxis);
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
        return GetRegionName(currentCondition.regionIndex);
    }

    protected override string GetCurrentTargetRegionName()
    {
        // Within-regional: start and target are the same region
        if (currentCondition == null) return "N/A";
        return GetRegionName(currentCondition.regionIndex);
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

        Debug.Log($"Prepared trial {currentConditionIndex}/{conditionIndices.Count}: Region={currentCondition.regionIndex}, Translation={currentCondition.translationAxis}, Rotation={currentCondition.rotationAxis}, Angle={currentCondition.rotationAngle}°");

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
        base.ResetExperiment();
    }
}
