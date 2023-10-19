using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.UI;
using RootScript;

namespace Hitchhike
{

  public class HandArea : MonoBehaviour
  {
    public bool isOriginal;
    public bool mirrored = false;
    public Image image;
    public Sprite enabledSprite;
    public Sprite disabledSprite;
    public Sprite globalSprite;
    public Transform defaultHandPosition;
    public bool doNotResetHand;
    [HideInInspector]
    public List<HandWrap> wraps;
    [HideInInspector]
    public bool isEnabled;
    [HideInInspector]
    public bool billboard;
    [HideInInspector]
    public GameObject billboardingTarget;
    private HandArea original;
    [HideInInspector]
    public bool autoUpdateOriginal = true; // for ExtendedHitchhikeGlobalTechnique; sometimes original transform should be updated manually
    [HideInInspector]
    public Transform delayedOriginalTransform; // for ExtendedHitchhikeGlobalTechnique
    public bool isInvisible = false; // prevent hitchhikemanager from detecting this area; for ExtendedHitchhikeGlobalTechnique
    public bool isHandHidden = false; // QuestProHOMERGlobalTechnique hides hand during the global move

    public float filterRatio = 1; // for low pass filter; 1: no filter, 0: all filter

    public void Init(
      List<GameObject> handWrapPrefabs,
      Transform parent,
      HandArea _original,
      bool _autoUpdateOriginal,
      bool scaleHandModel,
      bool _billboard,
      GameObject _billboardingTarget
    )
    {
      var _parent = parent == null ? transform : parent;

      original = _original;
      autoUpdateOriginal = _autoUpdateOriginal;
      billboard = _billboard;
      billboardingTarget = _billboardingTarget;
      if (!original && billboard) Billboard();

      foreach (var (handWrapPrefab, index) in handWrapPrefabs.Select((value, index) => (value, index)))
      {
        var handWrapInstance = GameObject.Instantiate(handWrapPrefab, parent);
        if (mirrored) handWrapInstance.transform.localScale = new Vector3(
          handWrapInstance.transform.localScale.x * -1,
          handWrapInstance.transform.localScale.y * -1,
          handWrapInstance.transform.localScale.z
        );
        var handWrap = handWrapInstance.GetComponent<HandWrap>();
        wraps.Add(handWrap);
        if (!autoUpdateOriginal)
        {
          GameObject _ = new GameObject();
          _.transform.SetParent(_original.transform.parent);
          delayedOriginalTransform = _.transform;
        }
        handWrap.Init(this, !autoUpdateOriginal ? delayedOriginalTransform : (
          isOriginal ? transform : _original.transform
        ), transform, scaleHandModel, mirrored, doNotResetHand, filterRatio);
        handWrap.SetEnabled(true);
      }
    }

    public void AfterTransformChange() // call this after your script changed the transform of this area on Update()
    {
      if (isOriginal)
      {
        wraps.ForEach((w) =>
        {
          w.thisSpace = transform;
          w.originalSpace = transform;
        });
        // doesn't reset haschanged yet; other handareas will refer to it. will be reset in lateupdate
      }
      else
      {
        wraps.ForEach((w) => w.thisSpace = transform);
        transform.hasChanged = false;
      }
    }

    public void Update()
    {
      if (isOriginal)
      {
        if (transform.hasChanged)
        {
          AfterTransformChange();
        }
      }
      else
      {
        if (autoUpdateOriginal && original.transform.hasChanged) wraps.ForEach((w) => w.originalSpace = original.transform);

        if (billboard)
        {
          if (transform.hasChanged || billboardingTarget.transform.hasChanged) Billboard();
        }

        if (transform.hasChanged)
        {
          AfterTransformChange();
        }
      }
    }

    public void LateUpdate()
    {
      if (isOriginal && transform.hasChanged) transform.hasChanged = false;
    }

    void OnDestroy()
    {
      wraps.ForEach((w) =>
      {
        if (w != null) Destroy(w.gameObject);
      });
    }

    public void SyncDelayedOriginal()
    {
      delayedOriginalTransform.position = original.transform.position;
      delayedOriginalTransform.rotation = original.transform.rotation;
      delayedOriginalTransform.localScale = original.transform.localScale;
    }

    void Billboard()
    {
      var vec = billboardingTarget.transform.position - transform.position;
      transform.forward = new Vector3(
        -vec.x,
        0,
        -vec.z
      );
    }

    public void SetEnabled(bool enabled)
    {
      isEnabled = enabled;
      wraps.ForEach((wrap) => wrap.SetEnabled(enabled));
      ChangeSprite(enabled ? Status.enabled : Status.disabled);
    }

    public void SetHandActive(bool active)
    {
      wraps.ForEach((wrap) => wrap.gameObject.SetActive(active));
    }

    public void SetIsActive(bool active)
    {
      SetEnabled(active);
      gameObject.SetActive(active);
      SetHandActive(active);
    }

    public void SetHandsVisible(bool visible)
    {
      wraps.ForEach((wrap) => wrap.SetVisible(visible));
    }

    public enum Status
    {
      enabled,
      disabled,
      global
    }
    public void ChangeSprite(Status status)
    {
      switch (status)
      {
        case Status.enabled:
          image.sprite = enabledSprite;
          break;
        case Status.disabled:
          image.sprite = disabledSprite;
          break;
        case Status.global:
          image.sprite = globalSprite;
          break;
        default:
          image.sprite = disabledSprite;
          break;
      }
    }
  }

}