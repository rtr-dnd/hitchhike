using UnityEngine;
using UnityEngine.SceneManagement;

public class SceneSwitcher : MonoBehaviour
{
  public void LoadScene(string name)
  {
    SceneManager.LoadScene(name);
  }
}