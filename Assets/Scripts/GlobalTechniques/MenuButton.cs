using System.Collections;
using System.Collections.Generic;
using Hitchhike;
using Oculus.Interaction;
using Oculus.Interaction.HandGrab;
using UnityEngine;

public class MenuButton : MonoBehaviour
{
  enum State
  {
    inactive,
    hover,
    active
  };

  Grabbable grabbable;
  HandGrabInteractable hgi;
  [SerializeField]
  OneGrabTranslateTransformer ogt;
  bool isHovered;
  bool isActive;
  public Material defaultMaterial;
  public Material hoverMaterial;
  public Material activeMaterial;
  GameObject gizmo;

  // Start is called before the first frame update
  void Start()
  {
    grabbable = transform.GetComponent<Grabbable>();
    hgi = transform.GetComponent<HandGrabInteractable>();
  }

  public void OnHover()
  {
    isHovered = true;
    transform.GetComponent<MeshRenderer>().material = hoverMaterial;
  }

  public void OnHoverEnd()
  {
    isHovered = false;
    transform.GetComponent<MeshRenderer>().material = isActive ? activeMaterial : defaultMaterial;
  }

  public void OnSelect()
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
    HitchhikeManager.Instance.globalTechnique.ActivateGlobalMove(activeHandIndex == -1 ? 0 : activeHandIndex);
  }

  public void OnRelease()
  {
    isActive = false;
    gameObject.GetComponent<MeshRenderer>().enabled = true;
    transform.position = gizmo.transform.position;
    transform.rotation = gizmo.transform.rotation;
    Destroy(gizmo);
    HitchhikeManager.Instance.globalTechnique.DeactivateGlobalMove();
  }
}
