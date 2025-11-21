using UnityEngine;
using System.Collections.Generic;

public class WithinRegionalTaskManager : BaseTaskManager
{
    [System.Serializable]
    public class ExperimentalCondition
    {
        public int regionIndex;
        public TranslationAxis translationAxis;
        public RotationAxisPair rotationAxis;

        public ExperimentalCondition(int regIdx, TranslationAxis tAxis, RotationAxisPair rAxis)
        {
            regionIndex = regIdx;
            translationAxis = tAxis;
            rotationAxis = rAxis;
        }
    }

    private List<ExperimentalCondition> allConditions = new List<ExperimentalCondition>();
    private List<ExperimentalCondition> completedConditions = new List<ExperimentalCondition>();
    private ExperimentalCondition currentCondition = null;

    protected override int GetExpectedRegionCount()
    {
        return 6;
    }

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
    }

    protected override void GenerateAllExperimentalConditions()
    {
        allConditions.Clear();

        TranslationAxis[] allTranslations = { TranslationAxis.PlusX, TranslationAxis.MinusX,
                                              TranslationAxis.PlusZ, TranslationAxis.MinusZ };

        // For each region, generate all possible combinations and randomly select 3
        for (int regionIdx = 0; regionIdx < regionAreas.Count; regionIdx++)
        {
            // Generate all 12 possible combinations for this region (4 translations × 3 rotation axes)
            List<ExperimentalCondition> regionConditions = new List<ExperimentalCondition>();

            foreach (var tAxis in allTranslations)
            {
                foreach (var rAxis in selectedRotationAxes)
                {
                    regionConditions.Add(new ExperimentalCondition(regionIdx, tAxis, rAxis));
                }
            }

            // Shuffle the region conditions
            for (int i = regionConditions.Count - 1; i > 0; i--)
            {
                int randomIndex = Random.Range(0, i + 1);
                var temp = regionConditions[i];
                regionConditions[i] = regionConditions[randomIndex];
                regionConditions[randomIndex] = temp;
            }

            // Add first 3 conditions to all conditions
            for (int i = 0; i < 3; i++)
            {
                allConditions.Add(regionConditions[i]);
            }
        }

        Debug.Log($"Generated {allConditions.Count} experimental conditions (6 regions × 3 repetitions with varied offsets)");
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

        return CalculateTargetRotation(currentCondition.rotationAxis);
    }

    protected override string GetConditionCSVColumns()
    {
        return "Region Index,Translation Axis,Rotation Axis";
    }

    protected override string GetConditionCSVValues(int taskIndex)
    {
        if (taskIndex < completedConditions.Count)
        {
            var condition = completedConditions[taskIndex];
            return $"{condition.regionIndex},{condition.translationAxis},{condition.rotationAxis}";
        }
        return "N/A,N/A,N/A";
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

            return;
        }

        // Get the next condition
        int conditionIndex = conditionIndices[currentConditionIndex];
        currentCondition = allConditions[conditionIndex];
        currentConditionIndex++;

        Debug.Log($"Prepared trial {currentConditionIndex}/{conditionIndices.Count}: Region={currentCondition.regionIndex}, Translation={currentCondition.translationAxis}, Rotation={currentCondition.rotationAxis}");

        // Set state to waiting for start
        currentTrialState = TrialState.WaitingToStart;
        ShowTrialStartButton();

        // Hide objects until trial starts
        if (movableObject != null)
        {
            movableObject.SetActive(false);
        }
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
