using UnityEngine;
using UnityEngine.SceneManagement;

public class ExperimentSceneSwitcher : SingletonMonoBehaviour<ExperimentSceneSwitcher>
{
    protected override void Awake()
    {
        base.Awake();
        DontDestroyOnLoad(this.gameObject);
    }

    void Update()
    {
        bool shift = Input.GetKey(KeyCode.LeftShift) || Input.GetKey(KeyCode.RightShift);

        if (shift)
        {
            if (Input.GetKeyDown(KeyCode.D)) LoadScene("Practice_Direct");
            else if (Input.GetKeyDown(KeyCode.H)) LoadScene("Practice_Hitchhike");
            else if (Input.GetKeyDown(KeyCode.G)) LoadScene("Practice_GazePinch");
            else if (Input.GetKeyDown(KeyCode.I)) LoadScene("Practice_Hitchhike_Inter");
            else if (Input.GetKeyDown(KeyCode.B)) LoadScene("Practice_Bunny");
        }
        else
        {
            if (Input.GetKeyDown(KeyCode.D)) LoadScene("Direct");
            else if (Input.GetKeyDown(KeyCode.H)) LoadScene("Hitchhike");
            else if (Input.GetKeyDown(KeyCode.G)) LoadScene("GazePinch");
            else if (Input.GetKeyDown(KeyCode.I)) LoadScene("Hitchhike_Inter");
        }
    }

    void LoadScene(string sceneName)
    {
        // Check if scene exists in build settings would be good, but for now just try to load
        Debug.Log($"Switching to scene: {sceneName}");
        SceneManager.LoadScene(sceneName);
    }
}
