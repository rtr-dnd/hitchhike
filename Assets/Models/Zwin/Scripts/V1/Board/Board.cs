using System.Collections.Generic;
using UnityEngine;

namespace V1
{
  public class Board : VirtualObject
  {
    public Board() : base() { }

    public Transform initWindowOrigin;
    // public MeshFilter surfaceMeshFilter;

    private List<Window> windows = new List<Window>();
    public void AddWindow(Window window)
    {
      windows.Add(window);
    }
    public void RemoveWindow(Window window)
    {
      windows.Remove(window);
    }

    public override void SetSize(Vector3 siz, Vector3 pivot)
    {
      var previousSize = size;
      // todo: setsize implementation
      base.SetSize(siz, pivot);

    }
    protected override void Start()
    {
      base.Start();
      SetSize(size, transform.position);
    }
  }
}