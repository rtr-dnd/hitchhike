using System.Collections.Generic;
using UnityEngine;
// using UnityEngine.InputSystem;
using UnityEngine.XR;
using System;
using UnityEngine.UI;
using UnityEngine.EventSystems;

[ExecuteInEditMode]
public class CanvasInteractable : Interactable
{
  Canvas canvas;
  Camera eventCamera;
  BoxCollider boxCollider;
  RectTransform rt;
  List<Graphic> hoveredGraphics;
  List<Graphic> selectedGraphics;

  protected void Awake()
  {
    canvas = gameObject.GetComponent<Canvas>();
    eventCamera = canvas.worldCamera;
    boxCollider = gameObject.GetComponent<BoxCollider>();
    rt = gameObject.GetComponent<RectTransform>();
    hoveredGraphics = new List<Graphic>();
    selectedGraphics = new List<Graphic>();
  }

  private void Update()
  {
    boxCollider.size = new Vector3(rt.rect.size.x, rt.rect.size.y, 0.001f);
  }

  public override void BeforePreprocessIfSelected(out SelectedToPreprocessMsg msgToInteractor)
  {
    if (selectedGraphics.Count >= 1)
    {
      var tmpMsgToInteractor = new SelectedToPreprocessMsg();
      selectedGraphics.ForEach((Graphic g) =>
      {
        var e = g.gameObject.GetComponent<CanvasElement>();
        if (e == null) return;
        e.BeforePreprocessIfSelected(out tmpMsgToInteractor);
      });
      msgToInteractor = tmpMsgToInteractor;
    }
    else
    {
      msgToInteractor = new SelectedToPreprocessMsg();
    }
  }

  public override void PreprocessInteractable(PreprocessMsg preprocessMsg, out PreprocessToProcessMsg ptpMsg)
  {
    base.PreprocessInteractable(preprocessMsg, out ptpMsg);
    // todo: aggregate preprocess
  }

  protected override void OnHover(Vector3 hitPosition, Vector3 hitNormal)
  {
    (var pointerPosition, var hitGraphics) = HandleHitEvent(hitPosition, hitNormal);
    hitGraphics.ForEach((Graphic g) =>
    {
      hoveredGraphics.Add(g);
      var ped = new PointerEventData(EventSystem.current);
      var rr = new RaycastResult();
      rr.worldPosition = hitPosition;
      rr.worldNormal = hitNormal;
      ped.pointerCurrentRaycast = rr;
      ExecuteEvents.ExecuteHierarchy(g.gameObject, ped, ExecuteEvents.pointerEnterHandler);
    });
  }
  protected override void OnHoverStay(Vector3 hitPosition, Vector3 hitNormal)
  {
    (var pointerPosition, var hitGraphics) = HandleHitEvent(hitPosition, hitNormal);

    var newlyHoveredGraphics = hitGraphics.FindAll((Graphic g) => { return !hoveredGraphics.Contains(g); });
    newlyHoveredGraphics.ForEach((Graphic g) =>
    {
      hoveredGraphics.Add(g);
      var ped = new PointerEventData(EventSystem.current);
      var rr = new RaycastResult();
      rr.worldPosition = hitPosition;
      rr.worldNormal = hitNormal;
      ped.pointerCurrentRaycast = rr;
      ExecuteEvents.ExecuteHierarchy(g.gameObject, ped, ExecuteEvents.pointerEnterHandler);
    });
    var continuedHoveredGraphics = hitGraphics.FindAll((Graphic g) => { return hoveredGraphics.Contains(g); });
    continuedHoveredGraphics.ForEach((Graphic g) =>
    {
      hoveredGraphics.Add(g);
      var ped = new PointerEventData(EventSystem.current);
      var rr = new RaycastResult();
      rr.worldPosition = hitPosition;
      rr.worldNormal = hitNormal;
      ped.pointerCurrentRaycast = rr;
      ExecuteEvents.ExecuteHierarchy(g.gameObject, ped, ExecuteEvents.pointerMoveHandler);
    });
    var previouslyHoveredGraphics = hoveredGraphics.FindAll((Graphic g) => { return !hitGraphics.Contains(g); });
    previouslyHoveredGraphics.ForEach((Graphic g) =>
    {
      hoveredGraphics.Remove(g);
      ExecuteEvents.ExecuteHierarchy(g.gameObject, new PointerEventData(EventSystem.current), ExecuteEvents.pointerExitHandler);
    });
  }

  protected override void OnHoverEnd()
  {
    hoveredGraphics.ForEach((Graphic g) =>
    {
      ExecuteEvents.ExecuteHierarchy(g.gameObject, new PointerEventData(EventSystem.current), ExecuteEvents.pointerExitHandler);
    });
    hoveredGraphics = new List<Graphic>();
  }

  // todo: select event
  protected override void OnSelect(Vector3 hitPosition, Vector3 hitNormal)
  {
    (var pointerPosition, var hitGraphics) = HandleHitEvent(hitPosition, hitNormal);
    hitGraphics.ForEach((Graphic g) =>
    {
      selectedGraphics.Add(g);
      var ped = new PointerEventData(EventSystem.current);
      var rr = new RaycastResult();
      rr.worldPosition = hitPosition;
      rr.worldNormal = hitNormal;
      ped.pointerCurrentRaycast = rr;
      ExecuteEvents.ExecuteHierarchy(g.gameObject, ped, ExecuteEvents.pointerDownHandler);
    });
  }

  protected override void OnSelectEnd()
  {
    selectedGraphics.ForEach((Graphic g) =>
    {
      ExecuteEvents.ExecuteHierarchy(g.gameObject, new PointerEventData(EventSystem.current), ExecuteEvents.pointerUpHandler);
    });
    selectedGraphics = new List<Graphic>();
  }

  (Vector2, List<Graphic>) HandleHitEvent(Vector3 hitPosition, Vector3 hitNormal)
  {
    IList<Graphic> graphics = GraphicRegistry.GetGraphicsForCanvas(canvas);
    List<Graphic> hitGraphics = new List<Graphic>();
    Vector2 pointerPosition = eventCamera.WorldToScreenPoint(hitPosition);
    for (int i = 0; i < graphics.Count; i++)
    {
      Graphic graphic = graphics[i];

      if (graphic.depth == -1 || !graphic.raycastTarget)
      {
        continue;
      }

      Transform graphicTransform = graphic.transform;
      Vector3 graphicForward = graphicTransform.forward;

      float dir = Vector3.Dot(-graphicForward, hitNormal);

      // Return immediately if direction is negative.
      if (dir <= 0)
      {
        continue;
      }

      // To continue if the graphic doesn't include the point.
      if (!RectTransformUtility.RectangleContainsScreenPoint(graphic.rectTransform, pointerPosition, eventCamera))
      {
        continue;
      }

      // To continue if graphic raycast has failed.
      if (!graphic.Raycast(pointerPosition, eventCamera))
      {
        continue;
      }

      hitGraphics.Add(graphic);
    }
    return (pointerPosition, hitGraphics);
  }
}