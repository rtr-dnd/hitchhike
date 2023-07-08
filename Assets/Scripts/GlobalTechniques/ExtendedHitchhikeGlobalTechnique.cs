using System.Collections.Generic;
using Oculus.Interaction.Input;
using UnityEngine;

namespace Hitchhike
{

  public class ExtendedHitchhikeGlobalTechnique : GlobalTechnique
  {
    public GameObject handAreaPrefab;
    HandArea area;
    public Material globalHandMaterial;
    public Material globalAreaMaterial;
    Material defaultAreaMaterial;
    Vector3 previousPosition = new Vector3(float.NaN, float.NaN, float.NaN);
    bool isLefty;
    [HideInInspector]
    public bool isActive;

    public override void Init()
    {
      isLefty = HitchhikeManager.Instance.hitchhikeHandedness == Handedness.Left;
      var handAreaInstance = GameObject.Instantiate(handAreaPrefab);
      area = handAreaInstance.GetComponent<HandArea>();
      area.Init(
          new List<GameObject>()
          {
                isLefty ? HitchhikeManager.Instance.leftHandPrefab : HitchhikeManager.Instance.rightHandPrefab
          },
          HitchhikeManager.Instance.ovrHands.transform,
          HitchhikeManager.Instance.handAreas[0],
          false,
          true,
          false,
          HitchhikeManager.Instance.billboardingTarget
      );
      area.isInvisible = true;
      area.autoUpdateOriginal = false;
      area.gameObject.GetComponent<MeshRenderer>().enabled = false;
      area.image.enabled = false;
      area.wraps[0].enabledMaterial = globalHandMaterial;
      area.wraps[0].transform.Find(isLefty ? "HandInteractorsLeft" : "HandInteractorsRight").gameObject.SetActive(false);
      area.SetEnabled(true);
      Invoke("AsyncInit", 1f);
    }

    void AsyncInit()
    {
      area.SetEnabled(false);
      area.SetVisibility(false);
    }

    public void SetIsActiveLeft(bool value)
    {
      if (!isLefty) return;
      isActive = value;
    }
    public void SetIsActiveRight(bool value)
    {
      if (isLefty) return;
      isActive = value;
    }

    public override bool isGlobalMoveActive()
    {
      // return Input.GetKey(KeyCode.Space);
      return isActive;
    }

    int delay;
    public override void OnGlobalMoveStart(HandArea _area)
    {
      area.SetVisibility(true);
      area.SyncDelayedOriginal();
      area.transform.position = _area.transform.position;
      area.transform.rotation = _area.transform.rotation;
      area.transform.localScale = _area.transform.lossyScale * 2;
      area.SetEnabled(true);
      _area.SetHandVisibility(false);
      defaultAreaMaterial = _area.GetComponent<MeshRenderer>().material;
      _area.GetComponent<MeshRenderer>().material = globalAreaMaterial;
      delay = 10; // timeout for init of bigger hand
    }

    public override void OnGlobalMoveStay(HandArea _area)
    {
      if (delay > 0)
      {
        delay--;
        return;
      }

      var delta = Vector3.zero;
      if (!float.IsNaN(previousPosition.x)) delta = area.wraps[0].transform.position - previousPosition;
      _area.transform.position += delta;
      previousPosition = area.wraps[0].transform.position;
    }

    public override void OnGlobalMoveEnd(HandArea _area)
    {
      area.SetEnabled(false);
      area.SetVisibility(false);
      _area.SetHandVisibility(true);
      _area.GetComponent<MeshRenderer>().material = defaultAreaMaterial;
      previousPosition = new Vector3(float.NaN, float.NaN, float.NaN);
    }
  }
}