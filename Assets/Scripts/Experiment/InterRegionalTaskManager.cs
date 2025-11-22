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

        public ExperimentalCondition(int startIdx, int targetIdx, TranslationAxis tAxis, RotationAxisPair rAxis)
        {
            startRegionIndex = startIdx;
            targetRegionIndex = targetIdx;
            translationAxis = tAxis;
            rotationAxis = rAxis;
        }
    }

    private List<ExperimentalCondition> allConditions = new List<ExperimentalCondition>();
    private List<ExperimentalCondition> completedConditions = new List<ExperimentalCondition>();
    private ExperimentalCondition currentCondition = null;

    private TranslationAxis selectedTranslationAxis;
    private RotationAxisPair selectedRotationAxis;

    protected override void SelectRandomRotationAxes()
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

        // Select one random translation and rotation for inter-regional task
        SelectRandomTranslationAndRotation();
    }

    private void SelectRandomTranslationAndRotation()
    {
        // Select one random translationAxis from 4 options
        TranslationAxis[] allTranslations = { TranslationAxis.PlusX, TranslationAxis.MinusX,
                                              TranslationAxis.PlusZ, TranslationAxis.MinusZ };
        selectedTranslationAxis = allTranslations[Random.Range(0, allTranslations.Length)];

        // Select one random rotationAxis from 3 selected axes
        selectedRotationAxis = selectedRotationAxes[Random.Range(0, selectedRotationAxes.Count)];

        Debug.Log($"Selected translation axis: {selectedTranslationAxis}, rotation axis: {selectedRotationAxis}");
    }

    protected override void GenerateAllExperimentalConditions()
    {
        allConditions.Clear();

        // Generate all combinations (7 start regions × 6 target regions = 42 conditions)
        for (int startIdx = 0; startIdx < GetExpectedRegionCount(); startIdx++)
        {
            for (int targetIdx = 0; targetIdx < GetExpectedRegionCount(); targetIdx++)
            {
                if (startIdx != targetIdx)
                {
                    allConditions.Add(new ExperimentalCondition(
                        startIdx,
                        targetIdx,
                        selectedTranslationAxis,
                        selectedRotationAxis
                    ));
                }
            }
        }

        Debug.Log($"Generated {allConditions.Count} experimental conditions (7 start regions × 6 target regions)");
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

        return CalculateTargetRotation(currentCondition.rotationAxis);
    }

    protected override string GetConditionCSVColumns()
    {
        return "Start Region,Target Region,Translation Axis,Rotation Axis";
    }

    protected override string GetConditionCSVValues(int taskIndex)
    {
        if (taskIndex < completedConditions.Count)
        {
            var condition = completedConditions[taskIndex];
            return $"{condition.startRegionIndex},{condition.targetRegionIndex},{condition.translationAxis},{condition.rotationAxis}";
        }
        return "N/A,N/A,N/A,N/A";
    }

    protected override void StoreCompletedCondition()
    {
        if (currentCondition != null)
        {
            completedConditions.Add(currentCondition);
        }
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

        Debug.Log($"Prepared trial {currentConditionIndex}/{conditionIndices.Count}: Start Region={currentCondition.startRegionIndex}, Target Region={currentCondition.targetRegionIndex}, Translation={currentCondition.translationAxis}, Rotation={currentCondition.rotationAxis}");

        // Set state to waiting for start
        currentTrialState = TrialState.WaitingToStart;
        ShowTrialStartButton();

        // Hide objects until trial starts
        if (movableObject != null)
        {
            movableObject.SetActive(false);
        }

        UpdateTrialCountDisplay();
    }

    protected override void ResetExperiment()
    {
        // Reset child-specific variables
        completedConditions.Clear();
        currentCondition = null;

        // Call base reset
        base.ResetExperiment();
    }
}
