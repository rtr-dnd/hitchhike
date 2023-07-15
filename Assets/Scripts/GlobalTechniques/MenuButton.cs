using System.Collections;
using System.Collections.Generic;
using Hitchhike;
using Oculus.Interaction;
using Oculus.Interaction.HandGrab;
using UnityEngine;

public class MenuButton : UIElement
{
  Grabbable grabbable;
  HandGrabInteractable hgi;
  [SerializeField]
  OneGrabTranslateTransformer ogt;
  GameObject gizmo;
  HandArea area;
  ConstantRatio cr;
  public float size;

  // Start is called before the first frame update
  protected override void Start()
  {
    base.Start();
    grabbable = transform.GetComponent<Grabbable>();
    hgi = transform.GetComponent<HandGrabInteractable>();
    area = transform.GetComponentInParent<HandArea>();
    cr = transform.GetComponent<ConstantRatio>();
  }

  private void Update()
  {
    if (!isActive) meshRenderer.enabled = area.isEnabled;
    cr.size = Mathf.Max(
      area.transform.lossyScale.x,
      area.transform.lossyScale.y,
      area.transform.lossyScale.z
    ) * size;
  }

  public override void OnHover()
  {
    base.OnHover();
  }

  public override void OnHoverEnd()
  {
    base.OnHoverEnd();
  }

  public override void OnSelect()
  {
    isActive = true;
    gizmo = GameObject.Instantiate(gameObject, transform.parent);
    gizmo.transform.position = transform.position;
    gizmo.transform.rotation = transform.rotation;
    gizmo.GetComponent<Grabbable>().enabled = false;
    gizmo.GetComponent<HandGrabInteractable>().enabled = false;
    gizmo.GetComponent<Collider>().enabled = false;
    gizmo.GetComponent<MeshRenderer>().material = activeMaterial;
    gameObject.GetComponent<MeshRenderer>().enabled = false;
    int activeHandIndex = HitchhikeManager.Instance.GetActiveHandArea().wraps.FindIndex(w =>
      (w as InteractionHandWrap).GetCurrentInteractable() == hgi);
    HitchhikeManager.Instance.globalTechnique.ActivateGlobal(activeHandIndex == -1 ? 0 : activeHandIndex, GlobalTechnique.Mode.Move);
  }

  public override void OnSelectEnd()
  {
    isActive = false;
    gameObject.GetComponent<MeshRenderer>().enabled = true;
    transform.position = gizmo.transform.position;
    transform.rotation = gizmo.transform.rotation;
    Destroy(gizmo);
    HitchhikeManager.Instance.globalTechnique.DeactivateGlobal();
  }
}
