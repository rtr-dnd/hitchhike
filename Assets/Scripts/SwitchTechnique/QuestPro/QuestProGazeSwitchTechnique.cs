using System.Collections.Generic;
using UnityEngine;

public class QuestProGazeSwitchTechnique : MonoBehaviour
{
  public Transform head;
  List<OVREyeGaze> eyeGazes;
  int maxRaycastDistance = 100;

  void Start()
  {
    eyeGazes = new List<OVREyeGaze>(GetComponents<OVREyeGaze>());
  }
}