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
  public List<HandWrap> wraps;
  [HideInInspector]
  public bool isEnabled;

  public float filterRatio = 1; // for low pass filter; 1: no filter, 0: all filter

  public void Init(List<GameObject> handWrapPrefabs, Transform parent, Transform originalSpace, bool scaleHandModel)
  {
    var _parent = parent == null ? transform : parent;

    handWrapPrefabs.ForEach((handWrapPrefab) =>
    {
      var handWrapInstance = GameObject.Instantiate(handWrapPrefab, parent);
      var handWrap = handWrapInstance.GetComponent<HandWrap>();
      wraps.Add(handWrap);
      handWrap.Init(this, originalSpace, transform, scaleHandModel, filterRatio);
      handWrap.SetEnabled(true);
    });
  }

  public void SetEnabled(bool enabled)
  {
    isEnabled = enabled;
    wraps.ForEach((wrap) => wrap.SetEnabled(enabled));
    ChangeSprite(enabled);
  }

  void ChangeSprite(bool enabled)
  {
    image.sprite = enabled ? enabledSprite : disabledSprite;
  }
}
