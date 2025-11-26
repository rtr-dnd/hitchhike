using UnityEngine;

public class GazeDebugVisualizer : MonoBehaviour
{
    public Camera targetCamera;
    public Color cursorColor = Color.red;
    public float cursorSize = 20f;
    private Texture2D cursorTexture;

    void Start()
    {
        // Generate a simple circular texture
        cursorTexture = new Texture2D((int)cursorSize, (int)cursorSize);
        Color[] colors = new Color[(int)(cursorSize * cursorSize)];
        Vector2 center = new Vector2(cursorSize / 2, cursorSize / 2);
        float radius = cursorSize / 2;

        for (int y = 0; y < cursorSize; y++)
        {
            for (int x = 0; x < cursorSize; x++)
            {
                float distance = Vector2.Distance(new Vector2(x, y), center);
                if (distance <= radius)
                {
                    colors[y * (int)cursorSize + x] = cursorColor;
                }
                else
                {
                    colors[y * (int)cursorSize + x] = Color.clear;
                }
            }
        }
        cursorTexture.SetPixels(colors);
        cursorTexture.Apply();
    }

#if UNITY_EDITOR
    void OnGUI()
    {
        Camera cam = targetCamera != null ? targetCamera : Camera.main;
        if (cam == null) return;

        // Use the object's position directly
        Vector3 point = transform.position;
        Vector3 screenPos = cam.WorldToScreenPoint(point);

        // Check if point is in front of camera
        if (screenPos.z > 0)
        {
            // Screen coordinates in OnGUI have Y inverted relative to WorldToScreenPoint
            float y = Screen.height - screenPos.y;
            Rect rect = new Rect(screenPos.x - cursorSize / 2, y - cursorSize / 2, cursorSize, cursorSize);
            
            if (cursorTexture != null)
            {
                GUI.DrawTexture(rect, cursorTexture);
            }
        }
    }
#endif
}