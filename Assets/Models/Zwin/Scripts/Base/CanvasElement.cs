using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class CanvasElement : MonoBehaviour, IPointerEnterHandler, IPointerExitHandler, IPointerMoveHandler, IPointerDownHandler, IPointerUpHandler
{
  protected Canvas canvas;
  public virtual void OnPointerDown(PointerEventData eventData)
  {
    // throw new System.NotImplementedException();
  }
  public virtual void OnPointerUp(PointerEventData eventData)
  {
    // throw new System.NotImplementedException();
  }

  public virtual void OnPointerEnter(PointerEventData eventData)
  {
    // throw new System.NotImplementedException();
  }

  public virtual void OnPointerExit(PointerEventData eventData)
  {
    // throw new System.NotImplementedException();
  }

  public virtual void OnPointerMove(PointerEventData eventData)
  {
    // throw new System.NotImplementedException();
  }

  public virtual void BeforePreprocessIfSelected(out SelectedToPreprocessMsg msgToInteractor)
  {
    msgToInteractor = new SelectedToPreprocessMsg();
  }

  protected virtual void Awake()
  {
    canvas = GetComponentInParent<Canvas>();
  }

  // Start is called before the first frame update
  void Start()
  {

  }

  // Update is called once per frame
  void Update()
  {

  }
}
