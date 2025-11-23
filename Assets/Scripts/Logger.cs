using UnityEngine;
using System.IO;
using System.Text;
using System;

// A singleton logger class to handle writing experimental data to CSV files.
public class Logger : SingletonMonoBehaviour<Logger>
{
    private StreamWriter _frameLogWriter;
    private StreamWriter _summaryLogWriter;
    private string _logDirectory;

    private bool _isLogging = false;

    public void StartNewLog(int participantId, bool isPractice = false)
    {
        if (_isLogging)
        {
            Debug.LogWarning("Logger is already running. Please close the current log first.");
            return;
        }

        // Create directory
        string timestamp = DateTime.Now.ToString("yyyy-MM-dd_HH-mm-ss");
        string practiceSuffix = isPractice ? "_practice" : "";
        _logDirectory = Path.Combine(Application.dataPath, "Logs", $"Participant_{participantId}_{timestamp}{practiceSuffix}");
        Directory.CreateDirectory(_logDirectory);

        // --- Initialize Frame-by-Frame Log ---
        string frameLogPath = Path.Combine(_logDirectory, "frame_log.csv");
        _frameLogWriter = new StreamWriter(frameLogPath, false, Encoding.UTF8);
        string[] frameLogHeaders = {
            "Timestamp", "TrialID", "Condition", "Phase",
            "StartRegionName", "TargetRegionName", "TranslationAxis", "RotationAxis", "RotationAngle",
            "HeadPosX", "HeadPosY", "HeadPosZ", "HeadRotX", "HeadRotY", "HeadRotZ", "HeadRotW",
            "HandPosX", "HandPosY", "HandPosZ", "HandRotX", "HandRotY", "HandRotZ", "HandRotW",
            "VirtualHandPosX", "VirtualHandPosY", "VirtualHandPosZ", "VirtualHandRotX", "VirtualHandRotY", "VirtualHandRotZ", "VirtualHandRotW",
            "ActiveRegionName",
            "LeftGazeOriginX", "LeftGazeOriginY", "LeftGazeOriginZ", "LeftGazeDirX", "LeftGazeDirY", "LeftGazeDirZ",
            "RightGazeOriginX", "RightGazeOriginY", "RightGazeOriginZ", "RightGazeDirX", "RightGazeDirY", "RightGazeDirZ",
            "MovableObjectPosX", "MovableObjectPosY", "MovableObjectPosZ", "MovableObjectRotX", "MovableObjectRotY", "MovableObjectRotZ", "MovableObjectRotW",
            "TargetObjectPosX", "TargetObjectPosY", "TargetObjectPosZ", "TargetObjectRotX", "TargetObjectRotY", "TargetObjectRotZ", "TargetObjectRotW",
            "IsGrabbing", "IsIndexPinching", "IsInThreshold", "IsRetryPressed"
        };
        _frameLogWriter.WriteLine(string.Join(",", frameLogHeaders));
        _frameLogWriter.Flush();

        // --- Initialize Trial Summary Log ---
        string summaryLogPath = Path.Combine(_logDirectory, "summary_log.csv");
        _summaryLogWriter = new StreamWriter(summaryLogPath, false, Encoding.UTF8);
        string[] summaryLogHeaders = {
            "TrialID", "ParticipantID", "Condition", "RandomSeed",
            "StartRegionName", "TargetRegionName", "TranslationAxis", "RotationAxis", "RotationAngle",
            "TaskCompletionTime", "InitialReachingTime", "ManipulationTime",
            "ClutchCount", "FailedGrabs", "RetryCount",
            "TotalHandPathLength", "TotalHandRotation",
            "PreshapingAmount",
            "ManipulationHandPathLength", "ManipulationHandRotation",
            "FinalPositionError", "FinalRotationError"
        };
        _summaryLogWriter.WriteLine(string.Join(",", summaryLogHeaders));
        _summaryLogWriter.Flush();

        _isLogging = true;
        Debug.Log($"Logging started for participant {participantId} in directory: {_logDirectory}");
    }

    public void LogFrameData(params object[] data)
    {
        if (!_isLogging || _frameLogWriter == null) return;
        _frameLogWriter.WriteLine(string.Join(",", data));
    }

    public void LogTrialSummary(params object[] data)
    {
        if (!_isLogging || _summaryLogWriter == null) return;
        _summaryLogWriter.WriteLine(string.Join(",", data));
        _summaryLogWriter.Flush(); // Flush after each trial to save data progressively
    }

    public void CloseLog()
    {
        if (!_isLogging) return;

        if (_frameLogWriter != null)
        {
            _frameLogWriter.Flush();
            _frameLogWriter.Close();
            _frameLogWriter = null;
        }
        if (_summaryLogWriter != null)
        {
            _summaryLogWriter.Flush();
            _summaryLogWriter.Close();
            _summaryLogWriter = null;
        }

        _isLogging = false;
        Debug.Log("Logging stopped and files saved.");
    }

    private void OnDestroy()
    {
        CloseLog();
    }
}
