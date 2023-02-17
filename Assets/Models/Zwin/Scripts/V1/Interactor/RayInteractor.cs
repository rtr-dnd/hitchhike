using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
// using UnityEngine.InputSystem;

namespace V1
{
  public class RayInteractor : Interactor
  {
    protected sealed class RaycastHitComparer
    {
      public int Compare(RaycastHit a, RaycastHit b)
      {
        var aDistance = a.collider != null ? a.distance : float.MaxValue;
        var bDistance = b.collider != null ? b.distance : float.MaxValue;
        return aDistance.CompareTo(bDistance);
      }
    }

    protected Transform rayAnchor; // transform for raycast origin: might be different from linerenderer's origin
    protected RayTip rayTip;
    protected LineRenderer lineRenderer;

    SelectedToPreprocessMsg currentStpMsg;
    InteractableHit? selected = null;
    InteractableHit? hovered = null;
    [SerializeField] protected float maxRayLength = 100f;

    protected virtual void Awake()
    {
      lineRenderer = gameObject.GetComponent<LineRenderer>();
    }

    protected virtual void Start()
    {
      rayAnchor = new GameObject("Ray Anchor").transform;
      rayAnchor.position = gameObject.transform.position;
      rayAnchor.rotation = gameObject.transform.rotation;
      rayTip = GetComponentInChildren<RayTip>();
      rayTip.transform.position = gameObject.transform.position + gameObject.transform.forward * maxRayLength;
    }

    public override void PreprocessInteractor(SelectedToPreprocessMsg stpMsg, out PreprocessMsg preprocessMsg)
    {
      currentStpMsg = stpMsg;
      UpdateRayDirection(stpMsg?.rayBehavior, stpMsg?.rayEnd);
      UpdateRaycastHits(out var hitsInteractable);

      preprocessMsg = new PreprocessMsg();
      HandleSelectAndHoverEvents(
        hitsInteractable,
        out preprocessMsg.selected,
        out preprocessMsg.hovered,
        out preprocessMsg.dnd
      );
    }

    protected virtual void UpdateRayDirection(RayBehavior? rayBehavior, Vector3? requestedRayEnd)
    {
      if (rayBehavior.HasValue && rayBehavior.Value != RayBehavior.Active)
      {
        if (requestedRayEnd.HasValue) rayAnchor.LookAt(requestedRayEnd.Value);
        return;
      }
      // var mouse = Mouse.current;
      // rayAnchor.eulerAngles = mouseDelta2RayAngle(mouse.delta.x.ReadValue(), mouse.delta.y.ReadValue(), rayAnchor.eulerAngles);
      rayAnchor.eulerAngles = mouseDelta2RayAngle(Input.GetAxis("Mouse X"), Input.GetAxis("Mouse Y"), rayAnchor.eulerAngles);
    }
    protected virtual Vector3 mouseDelta2RayAngle(float deltaX, float deltaY, Vector3 oldAngle)
    {
      var mouseGain = InteractionManager.Instance.mouseGain;

      Vector3 newAngle = oldAngle;
      newAngle.y += deltaX * mouseGain;
      newAngle.x -= deltaY * mouseGain;

      // limit angle
      if (newAngle.x > 70.0f && newAngle.x < 180.0f) newAngle.x = 70.0f; // angle: 0~90 below horizon, 360~270 above horizon
      if (newAngle.x < 290.0f && newAngle.x > 180.0f) newAngle.x = 290.0f;
      return newAngle;
    }

    protected virtual void UpdateRaycastHits(out List<RaycastHit> hitsInteractable)
    {
      // do raycast
      var hits = new List<RaycastHit>(Physics.RaycastAll(rayAnchor.position, rayAnchor.forward, maxRayLength));
      hits.Sort((a, b) => a.distance.CompareTo(b.distance));

      hitsInteractable = hits.FindAll(hit => hit.collider.gameObject.GetComponent<Interactable>() != null);
      var hitsNonInteractable = hits.FindAll(hit => hit.collider.gameObject.GetComponent<Interactable>() == null);


    }
    protected virtual void HandleSelectAndHoverEvents(
      List<RaycastHit> hitsInteractable,
      out InteractableHit? out_selected,
      out InteractableHit? out_hovered,
      out InteractableHit? out_dnd
    )
    {
      // todo: dnd events
      out_selected = null; out_hovered = null; out_dnd = null;
      hovered = null;

      // var mouse = Mouse.current;

      if (hitsInteractable.Count == 0)
      {
        hovered = null;
        // if (selected?.interactable != null && mouse.leftButton.wasReleasedThisFrame) selected = null;
        if (selected?.interactable != null && Input.GetMouseButtonUp(0)) selected = null;

        out_selected = selected;
        out_hovered = null;
        return;
      }

      // hit exists
      // if (mouse.leftButton.wasPressedThisFrame)
      if (Input.GetMouseButtonDown(0))
      {
        out_selected = new InteractableHit(
          hitsInteractable[0].collider.gameObject.GetComponent<Interactable>(),
          hitsInteractable[0].point,
          hitsInteractable[0].normal
        );
        out_hovered = new InteractableHit(
          hitsInteractable[0].collider.gameObject.GetComponent<Interactable>(),
          hitsInteractable[0].point,
          hitsInteractable[0].normal
        );
        selected = out_selected; hovered = out_hovered;
        return;
      }
      // else if (mouse.leftButton.wasReleasedThisFrame && selected != null)
      else if (Input.GetMouseButtonUp(0) && selected != null)
      {
        selected = null;
      }

      // mouse event does not exist
      if (selected != null)
      {
        // something is already selected
        hovered = new InteractableHit(
          hitsInteractable[0].collider.gameObject.GetComponent<Interactable>(),
            hitsInteractable[0].point,
            hitsInteractable[0].normal
        );
        out_hovered = hovered;

        if (selected.Value.interactable == hovered.Value.interactable)
        {
          selected = hovered; out_selected = hovered;
          return;
        }
        else
        {
          // hovering different object (maybe during dnd?)
          selected = new InteractableHit(
            selected.HasValue ? selected.Value.interactable : null,
            null,
            null
          );
          out_selected = selected;
          return;
        }
      }
      else
      {
        // nothing is selected
        selected = null;
        hovered = new InteractableHit(
          hitsInteractable[0].collider.gameObject.GetComponent<Interactable>(),
            hitsInteractable[0].point,
            hitsInteractable[0].normal
        );

        out_selected = null;
        out_hovered = hovered;
        return;
      }
    }

    public override void ProcessInteractor(PreprocessToProcessMsg ptpMsg, out ProcessMsg processMsg)
    {
      processMsg = null;
      UpdateRayVisual(ptpMsg.rayKind);
    }
    protected virtual void UpdateRayVisual(RayTipKind? kind)
    {
      if (currentStpMsg.rayEnd.HasValue)
      {
        rayTip.transform.position = currentStpMsg.rayEnd.Value;
        rayTip.transform.rotation = Quaternion.LookRotation(
          currentStpMsg.rayNormal.HasValue
          ? -currentStpMsg.rayNormal.Value
          : Vector3.zero,
        Vector3.up);
      }
      else if (hovered == null)
      {
        rayTip.transform.position = rayAnchor.position + rayAnchor.forward * maxRayLength;
        rayTip.transform.rotation = Quaternion.LookRotation(-rayAnchor.forward, Vector3.up);
      }
      else
      {
        rayTip.transform.position = hovered.Value.hitPosition.HasValue ? hovered.Value.hitPosition.Value : Vector3.zero;
        rayTip.transform.rotation = Quaternion.LookRotation(
          hovered.Value.hitNormal.HasValue ? -hovered.Value.hitNormal.Value : Vector3.zero,
          Vector3.up);
      }

      lineRenderer.enabled = !(currentStpMsg != null && currentStpMsg.rayVisibility != RayVisibility.Visible);

      lineRenderer.SetPosition(0, rayAnchor.position);
      var endPos = (currentStpMsg != null && currentStpMsg.rayEnd.HasValue) ? currentStpMsg.rayEnd.Value : rayTip.transform.position;
      lineRenderer.SetPosition(1, endPos - rayAnchor.forward * 0.05f);
      rayTip.UpdateRayTip(kind, currentStpMsg);
    }
  }
}