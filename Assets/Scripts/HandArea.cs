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
  public bool billboard;
  private HandArea original;

  public float filterRatio = 1; // for low pass filter; 1: no filter, 0: all filter

  public void Init(List<GameObject> handWrapPrefabs, Transform parent, HandArea _original, bool scaleHandModel, bool _billboard)
  {
    var _parent = parent == null ? transform : parent;

    billboard = _billboard;
    original= _original;
    if (!original && billboard) Billboard();

    handWrapPrefabs.ForEach((handWrapPrefab) =>
    {
      var handWrapInstance = GameObject.Instantiate(handWrapPrefab, parent);
      var handWrap = handWrapInstance.GetComponent<HandWrap>();
      wraps.Add(handWrap);
      handWrap.Init(this, isOriginal ? transform : _original.transform, transform, scaleHandModel, filterRatio);
      handWrap.SetEnabled(true);
    });
  }

  public void Update()
  {
    if (isOriginal)
    {
      if (transform.hasChanged)
      {
        wraps.ForEach((w) => 
        {
          w.thisSpace = transform;
          w.originalSpace = transform;
        });
        // doesn't reset haschanged yet; other handareas will refer to it. will be reset in lateupdate
      }
    }
    else
    {
      if (original.transform.hasChanged)
      {
        wraps.ForEach((w) => w.originalSpace = original.transform);
      }

      if (billboard)
      {
        if (transform.hasChanged || original.transform.hasChanged) Billboard();
      }

      if (transform.hasChanged)
      {
        wraps.ForEach((w) => w.thisSpace = transform);
        transform.hasChanged = false;
      }
    }
  }

  public void LateUpdate()
  {
    if (isOriginal && transform.hasChanged) transform.hasChanged = false;
  }

  void Billboard()
  {
    var vec = original.transform.position - transform.position;
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
    ChangeSprite(enabled);
  }

  void ChangeSprite(bool enabled)
  {
    image.sprite = enabled ? enabledSprite : disabledSprite;
  }
}
