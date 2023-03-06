using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class HandArea : MonoBehaviour
{
  public bool isOriginal;
  public Image image;
  public Sprite enabledSprite;
  public Sprite disabledSprite;
  [HideInInspector]
  public HandWrap wrap;
  [HideInInspector]
  public bool isEnabled;

  public float filterRatio = 1; // for low pass filter; 1: no filter, 0: all filter

  public HandWrap Init(GameObject handWrapPrefab, Transform parent, Transform originalSpace, bool scaleHandModel)
  {
    var _parent = parent == null ? transform : parent;

    var handWrapInstance = GameObject.Instantiate(handWrapPrefab, parent);
    var handWrap = handWrapInstance.GetComponent<HandWrap>();
    wrap = handWrap;
    handWrap.Init(this, originalSpace, transform, scaleHandModel, filterRatio);
    handWrap.SetEnabled(true);

    return handWrap;
  }

  public void SetEnabled(bool enabled)
  {
    isEnabled = enabled;
    wrap.SetEnabled(enabled);
    ChangeSprite(enabled);
  }

  void ChangeSprite(bool enabled)
  {
    image.sprite = enabled ? enabledSprite : disabledSprite;
  }
}
