using System.Collections.Generic;
using UnityEngine;

namespace Hitchhike
{

  public class QuestProGazeSwitchTechnique : SwitchTechnique
  {
    public Transform head;
    public Transform gazeGizmo;
    List<OVREyeGaze> eyeGazes;
    int maxRaycastDistance = 100;

    public override void Init()
    {
      eyeGazes = new List<OVREyeGaze>(GetComponents<OVREyeGaze>());
    }

    public override int UpdateSwitch()
    {
      int i = HitchhikeManager.Instance.GetHandAreaIndex(
        HitchhikeManager.Instance.GetActiveHandArea()
      );

      if (eyeGazes == null) return i;
      if (!eyeGazes[0].EyeTrackingEnabled)
      {
        Debug.Log("Eye tracking not working");
        return i;
      }

      Ray gazeRay = GetGazeRay();
      int layerMask = 1 << LayerMask.NameToLayer("Hitchhike");

      RaycastHit closestHit = new RaycastHit();
      float closestDistance = float.PositiveInfinity;
      foreach (var hit in Physics.RaycastAll(gazeRay, maxRaycastDistance, layerMask))
      {
        // finding a nearest hit
        var colliderDistance = Vector3.Distance(hit.collider.gameObject.transform.position, head.transform.position);
        if (colliderDistance < closestDistance)
        {
          closestHit = hit;
          closestDistance = colliderDistance;
        }
      }

      HandWrap currentGazeWrap = null;
      if (closestDistance < float.PositiveInfinity)
      {
        Debug.Log("hit is there");
        currentGazeWrap = GetHandWrapFromHit(closestHit);
        if (currentGazeWrap != null)
        {
          i = HitchhikeManager.Instance.GetHandAreaIndex(HitchhikeManager.Instance.GetAreaFromWrap(currentGazeWrap));
          Debug.Log("switch: " + i);
          return i;
        }
      }
      Debug.Log("switch: " + i);

      return i;
    }

    private HandWrap GetHandWrapFromHit(RaycastHit hit)
    {
      var target = hit.collider.gameObject;
      return target.GetComponentInParent<HandWrap>();
    }

    Vector3? filteredDirection = null;
    Vector3? filteredPosition = null;
    float ratio = 0.3f;
    private Ray GetGazeRay()
    {
      Vector3 direction = Vector3.zero;
      eyeGazes.ForEach((e) => { direction += e.transform.forward; });
      direction /= eyeGazes.Count;

      if (!filteredDirection.HasValue)
      {
        filteredDirection = direction;
        filteredPosition = head.transform.position;
      }
      else
      {
        filteredDirection = filteredDirection.Value * (1 - ratio) + direction * ratio;
        filteredPosition = filteredPosition.Value * (1 - ratio) + head.transform.position * ratio;
      }

      if (gazeGizmo != null) gazeGizmo.transform.position = filteredPosition.Value + filteredDirection.Value * 0.5f;
      return new Ray(filteredPosition.Value, filteredDirection.Value);
    }
  }

}