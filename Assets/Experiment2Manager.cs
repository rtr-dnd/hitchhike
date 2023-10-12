using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using TMPro;
using UnityEngine;
using RootScript;
using Hitchhike;
using Oculus.Interaction;

public class Experiment2Manager : MonoBehaviour
{
    public TextMeshProUGUI tmp;
    public Transform rightHandAnchor;
    public Transform leftHandAnchor;
    public GameObject[] objects = new GameObject[] { };

    enum State
    {
        Welcome,
        Task,
        Paused,
        Finish
    }
    State state = State.Welcome;
    bool hasStarted;
    DateTime previousTime;
    float interval = 0.1f;
    string welcomeText = "実験が始まるまでお待ち下さい。";
    string finishText = "実験終了です。お疲れ様でした。";

    struct Task
    {
        public int id;
        public string text;
    }
    List<Task> tasks;
    int taskIndex = 0;
    List<string> taskTexts;
    string[] directHandTaskTexts = {
        // direct hand
        // "時計の針を10時10分に合わせてください。",
        "テディベアを操作して、今挙げている手と反対の手を挙げさせてください。",
        "ペンを使ってスケッチボードに笑顔マークを描いてください。",
        "キャンドルにライターで火をつけてください。",
        "箱から鳥のオブジェを出して、箱の隣に並べてください。",
    };
    string[] globalTaskTexts = {
        // global 6DoF
        "回転椅子を好きな位置に移動してください。",
        "ソファを好きな位置に移動してください。",
        "オレンジの棚を好きな位置に移動してください。",
        "時計を壁の好きな位置に移動してください。",
        // "スケッチボードを壁の好きな位置に移動してください。",
    };
    string[] localTaskTexts = {
        // local 6DoF
        // "時計を移動してください。",
        "テディベアを移動してください。",
        "スケッチボードを移動してください。",
        "キャンドルを移動してください。",
        "箱を移動してください。",
    };
    List<string> localTaskTargets = new List<string>() {
        "机の上",
        "白い棚の上",
        "机の上",
        "白い棚の上"
    };

    string dataPath;
    [Serializable]
    struct Object
    {
        public string name;
        public Pose pose;
        public Vector3 scale;
    }

    [Serializable]
    struct LogDataMoment
    {
        public SerializableDateTime time;
        public State state;
        public int taskId;
        public Pose[] physicalHand;
        public Pose eyeAnchor;
        public bool didTeleport;
        public Pose[] handAreaPoses;
        public Vector3[] handAreaScales;
        public int activeHandAreaIndex;
        public Pose[] activeHand;
        public Object[] objects;
        public string[] grabbedObjects;
    }
    bool didTeleport;
    [Serializable]
    class Log
    {
        public List<LogDataMoment> moments = new List<LogDataMoment> { };
    }
    Log log = new Log();
    int logCount = 0;
    int maxLogCount = 1000;

    // Start is called before the first frame update
    void Start()
    {
        dataPath = Path.Combine(Application.persistentDataPath, Guid.NewGuid() + "/");
        if (!Directory.Exists(dataPath))
        {
            Directory.CreateDirectory(dataPath);
        }

        taskTexts = directHandTaskTexts.Concat(globalTaskTexts).Concat(localTaskTexts).ToList();
        tasks = taskTexts.Select((text, index) => new Task { id = index, text = text }).ToList();
        tasks = tasks.OrderBy(a => Guid.NewGuid()).ToList(); // randomize order
        localTaskTargets = localTaskTargets.OrderBy(a => Guid.NewGuid()).ToList();
        UpdateText();
    }
    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Return))
        {
            if (Input.GetKey(KeyCode.LeftShift) || Input.GetKey(KeyCode.RightShift))
            {
                // back to previous task
                OnShiftReturnPressed();
            }
            else
            {
                // next task
                OnReturnPressed();
            }
        }
        if (Input.GetKeyDown(KeyCode.P))
        {
            if (state == State.Task) state = State.Paused;
        }
        if (Input.GetKeyDown(KeyCode.R))
        {
            if (state == State.Paused) state = State.Task;
            Debug.Log("resumed");
        }
        if (state == State.Paused) Debug.Log("paused");

        if ((DateTime.Now - previousTime).TotalSeconds < interval) return;
        if (!hasStarted) return;

        // logging
        log.moments.Add(new LogDataMoment
        {
            time = DateTime.Now,
            state = state,
            taskId = state == State.Task ? tasks[taskIndex].id : -1,
            physicalHand = new Pose[] { new Pose(rightHandAnchor.position, rightHandAnchor.rotation), new Pose(leftHandAnchor.position, leftHandAnchor.rotation) },
            eyeAnchor = new Pose(HitchhikeManager.Instance.head.position, HitchhikeManager.Instance.head.rotation),
            didTeleport = didTeleport,
            handAreaPoses = HitchhikeManager.Instance.handAreas.Select(area => new Pose(area.transform.position, area.transform.rotation)).ToArray(),
            handAreaScales = HitchhikeManager.Instance.handAreas.Select(area => area.transform.lossyScale).ToArray(),
            activeHandAreaIndex = HitchhikeManager.Instance.GetHandAreaIndex(HitchhikeManager.Instance.GetActiveHandArea()),
            activeHand = HitchhikeManager.Instance.GetActiveHandArea().wraps.Select(wrap => new Pose(wrap.mainHand.position, wrap.mainHand.rotation)).ToArray(),
            objects = objects.Select(obj => new Object() { name = obj.name, pose = new Pose(obj.transform.position, obj.transform.rotation), scale = obj.transform.lossyScale }).ToArray(),
            grabbedObjects = HitchhikeManager.Instance.GetActiveHandArea().wraps.Select(wrap =>
            {
                var i = (wrap as InteractionHandWrap).GetCurrentInteractable();
                if (i == null) return "";
                return i.GetComponentInParent<Grabbable>().name;
            }).ToArray()
        });
        didTeleport = false;
        if (log.moments.Count > maxLogCount) RefreshLog();
        previousTime = DateTime.Now;
    }

    void OnDestroy()
    {
        if (!hasStarted) return;
        RefreshLog();
    }

    void RefreshLog()
    {
        var path = Path.Combine(dataPath, "log" + logCount + ".json");
        var json = JsonUtility.ToJson(log, false);
        File.WriteAllText(path, json);
        log = new Log();
        logCount++;
        Debug.Log("log refreshed: " + path);
    }

    public void OnTeleport()
    {
        didTeleport = true;
    }

    void UpdateText()
    {
        switch (state)
        {
            case State.Welcome:
                tmp.text = welcomeText;
                break;
            case State.Task:
                if (localTaskTexts.Contains(tasks[taskIndex].text))
                {
                    var localTarget = localTaskTargets[0];
                    localTaskTargets.RemoveAt(0);
                    tmp.text = "タスク" + (taskIndex + 1) + ": " + tasks[taskIndex].text + ("移動先：" + localTarget);
                }
                else
                {
                    tmp.text = "タスク" + (taskIndex + 1) + ": " + tasks[taskIndex].text;
                }

                break;
            case State.Finish:
                tmp.text = finishText;
                break;
        }
    }

    void OnReturnPressed()
    {
        hasStarted = true;
        switch (state)
        {
            case State.Welcome:
                taskIndex = 0;
                state = State.Task;
                break;
            case State.Task:
                taskIndex++;
                if (taskIndex >= tasks.Count)
                {
                    taskIndex = tasks.Count - 1;
                    state = State.Finish;
                }
                break;
            case State.Finish:
                break;
        }
        UpdateText();
    }

    void OnShiftReturnPressed()
    {
        switch (state)
        {
            case State.Welcome:
                break;
            case State.Task:
                taskIndex--;
                if (taskIndex < 0)
                {
                    taskIndex = 0;
                    state = State.Welcome;
                }
                break;
            case State.Finish:
                taskIndex = tasks.Count - 1;
                state = State.Task;
                break;
        }
        UpdateText();
    }

}
