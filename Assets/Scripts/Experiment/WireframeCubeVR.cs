using UnityEngine;
using System.Collections.Generic;

public class WireframeCubeVR : MonoBehaviour
{
    [Header("Wireframe Settings")]
    public Vector3 cubeSize = Vector3.one;
    public Color wireframeColor = Color.white;
    public float lineWidth = 0.002f; // 2mm default for VR visibility

    [Header("Display Options")]
    public bool showWireframe = true;
    public Material lineMaterial; // Optional custom material

    private List<LineRenderer> lineRenderers = new List<LineRenderer>();
    private bool isInitialized = false;
    
    // Define the 12 edges of a cube
    private readonly int[,] cubeEdges = new int[,]
    {
        // Bottom face edges
        {0, 1}, {1, 2}, {2, 3}, {3, 0},
        // Top face edges
        {4, 5}, {5, 6}, {6, 7}, {7, 4},
        // Vertical edges
        {0, 4}, {1, 5}, {2, 6}, {3, 7}
    };
    
    void Start()
    {
        InitializeWireframe();
    }

    void OnEnable()
    {
        // Update wireframe immediately when object is enabled to prevent displaying at old position
        if (isInitialized && showWireframe)
        {
            UpdateWireframe();
        }
    }

    void InitializeWireframe()
    {
        if (isInitialized)
            return;

        // Create material if not assigned
        if (lineMaterial == null)
        {
            // Create simple unlit material for lines
            Shader shader = Shader.Find("Sprites/Default") ?? Shader.Find("Unlit/Color");
            lineMaterial = new Material(shader);
        }

        // Create 12 LineRenderers for the 12 edges
        for (int i = 0; i < 12; i++)
        {
            GameObject lineObj = new GameObject($"WireframeEdge_{i}");
            lineObj.transform.SetParent(transform, false);

            LineRenderer lr = lineObj.AddComponent<LineRenderer>();
            lr.material = lineMaterial;
            lr.startWidth = lineWidth;
            lr.endWidth = lineWidth;
            lr.positionCount = 2;
            lr.useWorldSpace = true; // Use world space for proper scale handling
            lr.startColor = wireframeColor;
            lr.endColor = wireframeColor;

            // Disable shadows for better performance
            lr.shadowCastingMode = UnityEngine.Rendering.ShadowCastingMode.Off;
            lr.receiveShadows = false;

            lineRenderers.Add(lr);
        }

        isInitialized = true;
        UpdateWireframe();
    }
    
    void Update()
    {
        if (showWireframe)
        {
            UpdateWireframe();
        }

        // Toggle visibility
        foreach (var lr in lineRenderers)
        {
            if (lr != null && lr.gameObject != null)
            {
                lr.gameObject.SetActive(showWireframe);
            }
        }
    }
    
    void UpdateWireframe()
    {
        // Calculate the 8 vertices of the cube in local space
        Vector3[] localVertices = new Vector3[]
        {
            new Vector3(-cubeSize.x, -cubeSize.y, -cubeSize.z) * 0.5f,
            new Vector3( cubeSize.x, -cubeSize.y, -cubeSize.z) * 0.5f,
            new Vector3( cubeSize.x,  cubeSize.y, -cubeSize.z) * 0.5f,
            new Vector3(-cubeSize.x,  cubeSize.y, -cubeSize.z) * 0.5f,
            new Vector3(-cubeSize.x, -cubeSize.y,  cubeSize.z) * 0.5f,
            new Vector3( cubeSize.x, -cubeSize.y,  cubeSize.z) * 0.5f,
            new Vector3( cubeSize.x,  cubeSize.y,  cubeSize.z) * 0.5f,
            new Vector3(-cubeSize.x,  cubeSize.y,  cubeSize.z) * 0.5f
        };

        // Transform vertices to world space (includes position, rotation, and scale)
        Vector3[] worldVertices = new Vector3[8];
        for (int i = 0; i < 8; i++)
        {
            worldVertices[i] = transform.TransformPoint(localVertices[i]);
        }

        // Update each edge position
        for (int i = 0; i < 12; i++)
        {
            if (i < lineRenderers.Count && lineRenderers[i] != null)
            {
                LineRenderer lr = lineRenderers[i];
                int startVertex = cubeEdges[i, 0];
                int endVertex = cubeEdges[i, 1];

                lr.SetPosition(0, worldVertices[startVertex]);
                lr.SetPosition(1, worldVertices[endVertex]);
            }
        }
    }

    /// <summary>
    /// Updates the material for all wireframe line renderers
    /// </summary>
    public void UpdateMaterial(Material newMaterial)
    {
        lineMaterial = newMaterial;
        foreach (var lr in lineRenderers)
        {
            if (lr != null)
                lr.material = newMaterial;
        }
    }

    /// <summary>
    /// Updates the color for all wireframe line renderers
    /// </summary>
    public void UpdateColor(Color newColor)
    {
        wireframeColor = newColor;
        foreach (var lr in lineRenderers)
        {
            if (lr != null)
            {
                lr.startColor = newColor;
                lr.endColor = newColor;
            }
        }
    }

    /// <summary>
    /// Updates the line width for all wireframe line renderers
    /// </summary>
    public void UpdateLineWidth(float newWidth)
    {
        lineWidth = newWidth;
        foreach (var lr in lineRenderers)
        {
            if (lr != null)
            {
                lr.startWidth = newWidth;
                lr.endWidth = newWidth;
            }
        }
    }
    
    void OnDestroy()
    {
        // Clean up LineRenderer objects
        foreach (var lr in lineRenderers)
        {
            if (lr != null && lr.gameObject != null)
            {
                Destroy(lr.gameObject);
            }
        }
        lineRenderers.Clear();
    }
    
    // Also draw in Scene view for debugging
    void OnDrawGizmos()
    {
        Gizmos.color = wireframeColor;
        Matrix4x4 oldMatrix = Gizmos.matrix;
        Gizmos.matrix = Matrix4x4.TRS(transform.position, transform.rotation, transform.lossyScale);
        Gizmos.DrawWireCube(Vector3.zero, cubeSize);
        Gizmos.matrix = oldMatrix;
    }
    
    void OnDrawGizmosSelected()
    {
        Gizmos.color = Color.yellow;
        Matrix4x4 oldMatrix = Gizmos.matrix;
        Gizmos.matrix = Matrix4x4.TRS(transform.position, transform.rotation, transform.lossyScale);
        Gizmos.DrawWireCube(Vector3.zero, cubeSize);
        Gizmos.matrix = oldMatrix;
    }
}