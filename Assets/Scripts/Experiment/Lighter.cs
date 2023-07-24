/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 * All rights reserved.
 *
 * Licensed under the Oculus SDK License Agreement (the "License");
 * you may not use the Oculus SDK except in compliance with the License,
 * which is provided at the time of installation or download, or which
 * otherwise accompanies this software in either electronic or hard copy form.
 *
 * You may obtain a copy of the License at
 *
 * https://developer.oculus.com/licenses/oculussdk/
 *
 * Unless required by applicable law or agreed to in writing, the Oculus SDK
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

using Oculus.Interaction.HandGrab;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

namespace Oculus.Interaction.Demo
{
  public class Lighter : MonoBehaviour, IHandGrabUseDelegate
  {

    [Header("Input")]
    [SerializeField]
    private Transform _trigger;
    [SerializeField]
    private AnimationCurve _triggerRotationCurve;
    [SerializeField]
    private SnapAxis _axis = SnapAxis.X;
    [SerializeField]
    [Range(0f, 1f)]
    private float _releaseThresold = 0.3f;
    [SerializeField]
    [Range(0f, 1f)]
    private float _fireThresold = 0.9f;
    [SerializeField]
    private float _triggerSpeed = 3f;
    [SerializeField]
    private AnimationCurve _strengthCurve = AnimationCurve.EaseInOut(0f, 0f, 1f, 1f);

    public GameObject fireGizmo;


    [SerializeField]
    private UnityEvent WhenSpray;
    [SerializeField]
    private UnityEvent WhenUnspray;
    [SerializeField]
    private UnityEvent WhenStream;

    private static readonly int WET_MAP_PROPERTY = Shader.PropertyToID("_WetMap");
    private static readonly int STAMP_MULTIPLIER_PROPERTY = Shader.PropertyToID("_StampMultipler");
    private static readonly int SUBTRACT_PROPERTY = Shader.PropertyToID("_Subtract");
    private static readonly int WET_BUMPMAP_PROPERTY = Shader.PropertyToID("_WetBumpMap");
    private static readonly int STAMP_MATRIX_PROPERTY = Shader.PropertyToID("_StampMatrix");

    private static readonly WaitForSeconds WAIT_TIME = new WaitForSeconds(0.1f);

    private bool _wasFired = false;
    private float _dampedUseStrength = 0;
    private float _lastUseTime;

    #region input

    private void SprayWater()
    {
      WhenSpray?.Invoke();
    }

    private void UnsprayWater()
    {
      WhenUnspray?.Invoke();
    }

    private void UpdateTriggerRotation(float progress)
    {
      float value = _triggerRotationCurve.Evaluate(progress);
      Vector3 angles = _trigger.localEulerAngles;
      if ((_axis & SnapAxis.X) != 0)
      {
        angles.x = value;
      }
      if ((_axis & SnapAxis.Y) != 0)
      {
        angles.y = value;
      }
      if ((_axis & SnapAxis.Z) != 0)
      {
        angles.z = value;
      }
      _trigger.localEulerAngles = angles;
    }

    #endregion

    #region output
    /// <summary>
    /// Cleans destroyed MeshBlits form the dictionary
    /// </summary>
    private void OnDestroy()
    {
      NonAlloc.CleanUpDestroyedBlits();
    }

    public void BeginUse()
    {
      _dampedUseStrength = 0f;
      _lastUseTime = Time.realtimeSinceStartup;
    }

    public void EndUse()
    {

    }

    public float ComputeUseStrength(float strength)
    {
      float delta = Time.realtimeSinceStartup - _lastUseTime;
      _lastUseTime = Time.realtimeSinceStartup;
      if (strength > _dampedUseStrength)
      {
        _dampedUseStrength = Mathf.Lerp(_dampedUseStrength, strength, _triggerSpeed * delta);
      }
      else
      {
        _dampedUseStrength = strength;
      }
      float progress = _strengthCurve.Evaluate(_dampedUseStrength);
      UpdateTriggerProgress(progress);
      return progress;
    }

    private void UpdateTriggerProgress(float progress)
    {
      UpdateTriggerRotation(progress);

      if (progress >= _fireThresold && !_wasFired)
      {
        _wasFired = true;
        SprayWater();
      }
      else if (progress <= _releaseThresold)
      {
        _wasFired = false;
        UnsprayWater();
      }
    }

    private void Start()
    {
      if (fireGizmo != null) fireGizmo.SetActive(false);
    }
    public void Fire()
    {
      if (fireGizmo == null) return;
      fireGizmo.SetActive(true);
    }
    public void Unfire()
    {
      if (fireGizmo == null) return;
      fireGizmo.SetActive(false);
    }

    #endregion
    /// <summary>
    /// Allocation helpers
    /// </summary>
    static class NonAlloc
    {
      public static readonly Collider[] _overlapResults = new Collider[12];
      public static readonly Dictionary<int, MeshBlit> _blits = new Dictionary<int, MeshBlit>();
      public static MaterialPropertyBlock PropertyBlock => _block != null ? _block : _block = new MaterialPropertyBlock();

      private static readonly List<MeshFilter> _meshFilters = new List<MeshFilter>();
      private static readonly HashSet<Transform> _roots = new HashSet<Transform>();
      private static MaterialPropertyBlock _block;

      public static List<MeshFilter> GetMeshFiltersInChildren(Transform root)
      {
        root.GetComponentsInChildren(_meshFilters);
        return _meshFilters;
      }

      public static HashSet<Transform> GetRootsFromOverlapResults(int hitCount)
      {
        _roots.Clear();
        for (int i = 0; i < hitCount; i++)
        {
          Transform root = GetRoot(_overlapResults[i]);
          _roots.Add(root);
        }
        return _roots;
      }

      /// <summary>
      /// Returns the most likely 'root object' for the hit e.g. the rigidbody
      /// </summary>
      static Transform GetRoot(Collider hit)
      {
        return hit.attachedRigidbody ? hit.attachedRigidbody.transform :
            hit.transform.parent ? hit.transform.parent :
            hit.transform;
      }

      public static void CleanUpDestroyedBlits()
      {
        if (!_blits.ContainsValue(null)) { return; }

        foreach (int key in new List<int>(_blits.Keys))
        {
          if (_blits[key] == null) _blits.Remove(key);
        }
      }
    }
  }


}
