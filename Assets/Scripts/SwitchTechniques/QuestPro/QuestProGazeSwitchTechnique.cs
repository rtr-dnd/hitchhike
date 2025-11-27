using System.Collections.Generic;
using UnityEngine;

namespace Hitchhike
{

    public class QuestProGazeSwitchTechnique : SwitchTechnique
    {
        public Transform head;
        public Transform gazeGizmo;
        List<OVREyeGaze> eyeGazes;

        [Header("Disambiguation Settings")]
        [Tooltip("The angle of the cone for fuzzy targeting (degrees).")]
        public float coneAngle = 10.0f;

        [Tooltip("Minimum distance for a valid gaze hit.")]
        public float minGazeDistance = 0.3f;

        [Tooltip("Maximum distance for a valid gaze hit.")]
        public float maxGazeDistance = 10.0f;

        [Tooltip("Radius of the sphere cast.")]
        public float sphereCastRadius = 0.1f;

        [Header("Scoring Weights")]
        public float distanceWeight = 0.25f;
        public float angleWeight = 1.0f;
        public float distanceToCenterWeight = 0.5f;
        public float angleToCenterWeight = 0.0f;

        public override void Init()
        {
            eyeGazes = new List<OVREyeGaze>(GetComponentsInChildren<OVREyeGaze>());
        }

        public override int UpdateSwitch()
        {
            int i = HitchhikeManager.Instance.GetHandAreaIndex(
              HitchhikeManager.Instance.GetActiveHandArea()
            );

            if (Input.GetKeyDown(KeyCode.Tab))
            {
                return i >= HitchhikeManager.Instance.handAreas.Count - 1 ? 0 : i + 1;
            }

            if (eyeGazes == null) return i;

            Ray gazeRay = GetGazeRay();
            int layerMask = 1 << LayerMask.NameToLayer("Hitchhike");

            // Use SphereCastAll to get all potential candidates
            RaycastHit[] hits = Physics.SphereCastAll(gazeRay.origin, sphereCastRadius, gazeRay.direction, maxGazeDistance, layerMask);

            float bestScore = float.PositiveInfinity;
            HandWrap bestTarget = null;

            foreach (var hit in hits)
            {
                if (IsHitValid(gazeRay.origin, gazeRay.direction, hit))
                {
                    float score = ScoreHit(hit, gazeRay.origin, gazeRay.direction);

                    if (score < bestScore)
                    {
                        HandWrap wrap = GetHandWrapFromHit(hit);
                        if (wrap != null)
                        {
                            bestScore = score;
                            bestTarget = wrap;
                        }
                    }
                }
            }

            if (bestTarget != null)
            {
                i = HitchhikeManager.Instance.GetHandAreaIndex(HitchhikeManager.Instance.GetAreaFromWrap(bestTarget));
                return i;
            }

            return i;
        }

        private bool IsHitValid(Vector3 rayOrigin, Vector3 rayDirection, RaycastHit hit)
        {
            Vector3 directionToHit = hit.point - rayOrigin;
            float distance = directionToHit.magnitude;

            if (distance < minGazeDistance || distance > maxGazeDistance)
                return false;

            float angle = Vector3.Angle(rayDirection, directionToHit);
            if (angle > coneAngle)
                return false;

            return true;
        }

        private float ScoreHit(RaycastHit hit, Vector3 rayOrigin, Vector3 rayDirection)
        {
            Vector3 hitPoint = hit.point;
            Vector3 directionToHit = hitPoint - rayOrigin;

            // 1. Distance Score
            float distanceScore = distanceWeight * directionToHit.magnitude;

            // 2. Angle Score
            float angleToHit = Vector3.Angle(rayDirection, directionToHit);
            float angleScore = angleWeight * angleToHit;

            // 3. Center Score
            // Assuming collider transform position is the center. 
            // For more complex shapes, hit.collider.bounds.center might be better, but transform.position is standard for simple objects.
            Vector3 hitDistance = hit.collider.transform.position - hitPoint;
            float centerScore = distanceToCenterWeight * hitDistance.magnitude;

            // 4. Center Angle Score
            Vector3 directionToCenter = hit.collider.transform.position - rayOrigin;
            float angleToCenter = Vector3.Angle(rayDirection, directionToCenter);
            float centerAngleScore = angleToCenterWeight * angleToCenter;

            return distanceScore + angleScore + centerScore + centerAngleScore;
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

        private void OnDrawGizmos()
        {
            if (Application.isPlaying && filteredDirection.HasValue && filteredPosition.HasValue)
            {
                Gizmos.color = Color.blue;
                Gizmos.DrawRay(filteredPosition.Value, filteredDirection.Value * maxGazeDistance);

                // Draw Cone (Approximation)
                Gizmos.color = new Color(0, 1, 1, 0.2f);
                float rayRange = maxGazeDistance;
                float coneRadius = Mathf.Tan(coneAngle * Mathf.Deg2Rad) * rayRange;
                
                // Draw a few circles to represent the cone
                Vector3 endPoint = filteredPosition.Value + filteredDirection.Value * rayRange;
                
                Gizmos.DrawWireSphere(endPoint, coneRadius);
                Gizmos.DrawLine(filteredPosition.Value, endPoint + Vector3.up * coneRadius);
                Gizmos.DrawLine(filteredPosition.Value, endPoint - Vector3.up * coneRadius);
                Gizmos.DrawLine(filteredPosition.Value, endPoint + Vector3.right * coneRadius);
                Gizmos.DrawLine(filteredPosition.Value, endPoint - Vector3.right * coneRadius);
            }
        }
    }

}
