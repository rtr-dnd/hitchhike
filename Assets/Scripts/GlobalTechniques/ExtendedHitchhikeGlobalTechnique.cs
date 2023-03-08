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
    Vector3 previousPosition = new Vector3(float.NaN, float.NaN, float.NaN);

    public override void Init()
    {
        var handAreaInstance = GameObject.Instantiate(handAreaPrefab);
        area = handAreaInstance.GetComponent<HandArea>();
        area.Init(
            new List<GameObject>(){ HitchhikeManager.Instance.RightHandPrefab },
            HitchhikeManager.Instance.ovrHands.transform,
            HitchhikeManager.Instance.handAreas[0],
            true,
            true,
            HitchhikeManager.Instance.billboardingTarget
        );
        area.isInvisible = true;
        area.gameObject.GetComponent<MeshRenderer>().enabled = false;
        area.image.enabled = false;
        area.wraps[0].enabledMaterial = globalHandMaterial;
        area.SetEnabled(true);
        Invoke("AsyncInit", 1f);
    }

    void AsyncInit()
    {
        area.SetEnabled(false);
        area.SetVisibility(false);
    }

    public override bool isGlobalActive()
    {
        return Input.GetKey(KeyCode.Space);
    }

    int delay;
    public override void OnGlobalStart(HandArea _area)
    {
        area.SetVisibility(true);
        area.transform.position = _area.transform.position;
        area.transform.rotation = _area.transform.rotation;
        area.transform.localScale = _area.transform.lossyScale * 2;
        area.SetEnabled(true);
        _area.SetHandVisibility(false);
        delay = 10; // timeout for init of bigger hand
    }

    public override void OnGlobalMove(HandArea _area)
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

    public override void OnGlobalEnd(HandArea _area)
    {
        area.SetEnabled(false);
        area.SetVisibility(false);
        _area.SetHandVisibility(true);
        previousPosition = new Vector3(float.NaN, float.NaN, float.NaN);
    }
}
}