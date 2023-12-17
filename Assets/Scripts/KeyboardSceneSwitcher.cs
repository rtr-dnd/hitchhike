using UnityEngine;
using UnityEngine.SceneManagement;

public class KeyboardSceneSwitcher : MonoBehaviour
{
  private void Update()
  {
    if (Input.GetKeyDown(KeyCode.W))
    {
      SceneManager.LoadScene("VRWindowingSystem");
    }
    if (Input.GetKeyDown(KeyCode.C))
    {
      SceneManager.LoadScene("VRCity");
    }
  }
}