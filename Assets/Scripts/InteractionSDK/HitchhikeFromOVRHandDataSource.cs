// Extension of FromOVRHandDataSource.
using System;
using System.Linq;
using Meta.XR.Util;
using UnityEngine;
using UnityEngine.Assertions;

using Oculus.Interaction;
using Oculus.Interaction.OVR;
using Oculus.Interaction.Input;

namespace Hitchhike
{
  public class HitchhikeFromOVRHandDataSource : DataSource<HandDataAsset>
  {
    [Header("OVR Data Source")]
    [SerializeField, Interface(typeof(IOVRCameraRigRef))]
    public UnityEngine.Object _cameraRigRef;

    [SerializeField]
    private bool _processLateUpdates;

    [Header("Shared Configuration")]
    [SerializeField]
    private Oculus.Interaction.Input.Handedness _handedness;

    [SerializeField]
    private OVRHand _ovrHand;

    [SerializeField, Interface(typeof(ITrackingToWorldTransformer))]
    private UnityEngine.Object _trackingToWorldTransformer;

    private ITrackingToWorldTransformer TrackingToWorldTransformer;

    [SerializeField, Interface(typeof(IHandSkeletonProvider))]
    private UnityEngine.Object _handSkeletonProvider;

    private IHandSkeletonProvider HandSkeletonProvider;

    private readonly HandDataAsset _handDataAsset = new HandDataAsset();

    private float _lastHandScale;

    private HandDataSourceConfig _config;

    private IOVRCameraRigRef CameraRigRef;

    public bool ProcessLateUpdates
    {
      get
      {
        return _processLateUpdates;
      }
      set
      {
        _processLateUpdates = value;
      }
    }

    protected override HandDataAsset DataAsset => _handDataAsset;

    public static Quaternion WristFixupRotation { get; } = new Quaternion(0f, 1f, 0f, 0f);

    private HandDataSourceConfig Config
    {
      get
      {
        if (_config != null)
        {
          return _config;
        }

        _config = new HandDataSourceConfig
        {
          Handedness = _handedness
        };
        return _config;
      }
    }

    public Transform originalSpace;
    public Transform thisSpace;
    public bool isUpdating = true;
    public Vector3 defaultPosition = Vector3.zero;
    public bool scaleHandModel;
    public float filterRatio = 1f;
    public Pose rawHandPose { get; private set; }
    private Vector3 filteredPosition;
    private Quaternion filteredRotation;

    protected virtual void Awake()
    {
      TrackingToWorldTransformer = _trackingToWorldTransformer as ITrackingToWorldTransformer;
      CameraRigRef = _cameraRigRef as IOVRCameraRigRef;
      HandSkeletonProvider = _handSkeletonProvider as IHandSkeletonProvider;
      UpdateConfig();

      originalSpace = transform;
      thisSpace = transform;
      filteredPosition = defaultPosition;
      filteredRotation = Quaternion.identity;
    }

    protected override void Start()
    {
      this.BeginStart(ref _started, delegate
      {
        base.Start();
      });
      this.AssertField(CameraRigRef, "CameraRigRef");
      this.AssertField(TrackingToWorldTransformer, "TrackingToWorldTransformer");
      this.AssertField(HandSkeletonProvider, "HandSkeletonProvider");
      if (_ovrHand == null)
      {
        _ovrHand = (_handedness == Oculus.Interaction.Input.Handedness.Left) ? CameraRigRef.LeftHand : CameraRigRef.RightHand;
      }

      this.AssertField(_ovrHand, "_ovrHand");
      UpdateConfig();
      Assert.AreEqual(OVRRuntimeSettings.GetRuntimeSettings().HandSkeletonVersion, OVRHandSkeletonVersion.OpenXR, $"Hand Skeleton Version in OVRManager must be set to {OVRHandSkeletonVersion.OpenXR}.");
      this.EndStart(ref _started);
    }

    protected override void OnEnable()
    {
      base.OnEnable();
      if (_started)
      {
        CameraRigRef.WhenInputDataDirtied += HandleInputDataDirtied;
      }
    }

    protected override void OnDisable()
    {
      if (_started)
      {
        CameraRigRef.WhenInputDataDirtied -= HandleInputDataDirtied;
      }

      base.OnDisable();
      MarkInputDataRequiresUpdate();
    }

    private void HandleInputDataDirtied(bool isLateUpdate)
    {
      if (!isLateUpdate || _processLateUpdates)
      {
        MarkInputDataRequiresUpdate();
      }
    }

    private void UpdateConfig()
    {
      Config.Handedness = _handedness;
      Config.TrackingToWorldTransformer = TrackingToWorldTransformer;
      Config.HandSkeleton = HandSkeletonProvider[_handedness];
    }

    protected override void UpdateData()
    {
      if (!isUpdating)
      {
        _handDataAsset.Root = new Pose()
        {
          position = defaultPosition,
          rotation = _handDataAsset.Root.rotation
        };
        return;
      }

      _handDataAsset.Config = Config;
      _handDataAsset.IsDataValid = true;
      _handDataAsset.IsConnected = false;
      if (_ovrHand != null && _ovrHand.isActiveAndEnabled && base.isActiveAndEnabled)
      {
        OVRSkeleton.SkeletonPoseData skeletonPoseData = ((OVRSkeleton.IOVRSkeletonDataProvider)_ovrHand).GetSkeletonPoseData();
        _handDataAsset.IsConnected = skeletonPoseData.IsDataValid && skeletonPoseData.RootScale > 0f;
        if (!_handDataAsset.IsConnected)
        {
          if (_lastHandScale <= 0f)
          {
            skeletonPoseData.IsDataValid = false;
          }
          else
          {
            skeletonPoseData.RootScale = _lastHandScale;
          }
        }
        else
        {
          _lastHandScale = skeletonPoseData.RootScale;
        }

        if (skeletonPoseData.IsDataValid && _handDataAsset.IsConnected)
        {
          UpdateDataPoses(skeletonPoseData);
          return;
        }
      }

      _handDataAsset.IsConnected = false;
      _handDataAsset.IsTracked = false;
      _handDataAsset.RootPoseOrigin = PoseOrigin.None;
      _handDataAsset.PointerPoseOrigin = PoseOrigin.None;
      _handDataAsset.IsHighConfidence = false;
      for (int i = 0; i < 5; i++)
      {
        _handDataAsset.IsFingerPinching[i] = false;
        _handDataAsset.IsFingerHighConfidence[i] = false;
      }
    }

    private void UpdateDataPoses(OVRSkeleton.SkeletonPoseData poseData)
    {
      _handDataAsset.HandScale = scaleHandModel ? new float[] {
        thisSpace.lossyScale.x / originalSpace.lossyScale.x,
        thisSpace.lossyScale.y / originalSpace.lossyScale.y,
        thisSpace.lossyScale.z / originalSpace.lossyScale.z
      }.Average() : poseData.RootScale;
      _handDataAsset.IsTracked = _ovrHand.IsTracked;
      _handDataAsset.IsHighConfidence = poseData.IsDataHighConfidence;
      _handDataAsset.IsDominantHand = _ovrHand.IsDominantHand;
      _handDataAsset.RootPoseOrigin = (_handDataAsset.IsTracked ? PoseOrigin.RawTrackedPose : PoseOrigin.None);
      for (int i = 0; i < 5; i++)
      {
        OVRHand.HandFinger finger = (OVRHand.HandFinger)i;
        bool fingerIsPinching = _ovrHand.GetFingerIsPinching(finger);
        _handDataAsset.IsFingerPinching[i] = fingerIsPinching;
        bool flag = _ovrHand.GetFingerConfidence(finger) == OVRHand.TrackingConfidence.High;
        _handDataAsset.IsFingerHighConfidence[i] = flag;
        float fingerPinchStrength = _ovrHand.GetFingerPinchStrength(finger);
        _handDataAsset.FingerPinchStrength[i] = fingerPinchStrength;
      }

      _handDataAsset.Root = applyOffset(
          poseData.RootPose.Position.FromFlippedZVector3f(),
          poseData.RootPose.Orientation.FromFlippedZQuatf()
      );

      if (_ovrHand.IsPointerPoseValid)
      {
        _handDataAsset.PointerPoseOrigin = PoseOrigin.RawTrackedPose;
        _handDataAsset.PointerPose = new Pose(_ovrHand.PointerPose.localPosition, _ovrHand.PointerPose.localRotation);
      }
      else
      {
        _handDataAsset.PointerPoseOrigin = PoseOrigin.None;
      }

      float num = ((_handDataAsset.HandScale > 0f) ? (1f / _handDataAsset.HandScale) : 0f);
      OVRPlugin.Skeleton2 ovrSkeleton = ((_handedness == Oculus.Interaction.Input.Handedness.Left) ? OVRSkeletonData.LeftSkeleton : OVRSkeletonData.RightSkeleton);
      for (int j = 0; j < 26; j++)
      {
        // Get the original joint pose (relative to the original, untransformed root)
        Vector3 localPosition = poseData.BoneTranslations[j].FromFlippedZVector3f();
        Quaternion localRotation = poseData.BoneRotations[j].FromFlippedZQuatf();
        Pose rawJointPose = new Pose(localPosition, localRotation);

        // FIX: Calculate the joint's pose relative to the NEW, MODIFIED Root
        Pose fromRoot = PoseUtils.Delta(_handDataAsset.Root, rawJointPose);

        // Apply scale correction (maintaining original script's behavior)
        fromRoot.position *= num;

        // Store the calculated relative pose
        _handDataAsset.JointPoses[j] = fromRoot;
        _handDataAsset.JointRadii[j] = GetBoneRadius(in ovrSkeleton, j);
      }

      HandJointUtils.WristJointPosesToLocalRotations(_handDataAsset.JointPoses, ref _handDataAsset.Joints);
    }

    // from HandSkeletonOVR
    internal static float GetBoneRadius(in OVRPlugin.Skeleton2 ovrSkeleton, int boneIndex)
    {
      if (boneIndex == 6)
      {
        boneIndex = 7;
      }
      else if (boneIndex == 11)
      {
        boneIndex = 12;
      }
      else if (boneIndex == 16)
      {
        boneIndex = 17;
      }
      else if (boneIndex == 21)
      {
        boneIndex = 22;
      }

      int num = Array.FindIndex(ovrSkeleton.BoneCapsules, (OVRPlugin.BoneCapsule c) => c.BoneIndex == boneIndex);
      if (num >= 0)
      {
        return ovrSkeleton.BoneCapsules[num].Radius;
      }

      return 0f;
    }

    Pose applyOffset(Vector3 anchorPos, Quaternion anchorRot)
    {
      // update raw hand pose
      rawHandPose = new Pose(anchorPos, anchorRot);

      var originalSpaceOrigin = originalSpace;
      var thisSpaceOrigin = thisSpace;

      var originalToActiveRot = Quaternion.Inverse(thisSpaceOrigin.rotation) * originalSpaceOrigin.rotation;
      var originalToActiveScale = new Vector3(
        thisSpaceOrigin.lossyScale.x / originalSpaceOrigin.lossyScale.x,
        thisSpaceOrigin.lossyScale.y / originalSpaceOrigin.lossyScale.y,
        thisSpaceOrigin.lossyScale.z / originalSpaceOrigin.lossyScale.z
      );

      var oMt = Matrix4x4.TRS(
        anchorPos,
        anchorRot,
        new Vector3(1, 1, 1)
      );

      var resMat =
      Matrix4x4.Translate(thisSpaceOrigin.position - originalSpaceOrigin.position) // orignal to copied translation
      * Matrix4x4.TRS(
          originalSpaceOrigin.position,
          Quaternion.Inverse(originalToActiveRot),
          originalToActiveScale
      ) // translation back to original space and rotation & scale around original space
      * Matrix4x4.Translate(-originalSpaceOrigin.position) // offset translation for next step
      * oMt; // hand anchor

      filteredPosition = filteredPosition * (1 - filterRatio) + resMat.GetPosition() * filterRatio;
      filteredRotation = Quaternion.Lerp(filteredRotation, resMat.rotation, filterRatio);

      return new Pose(
        filteredPosition,
        filteredRotation
      );
    }

    public void InjectAllFromOVRHandDataSource(UpdateModeFlags updateMode, IDataSource updateAfter, Oculus.Interaction.Input.Handedness handedness, ITrackingToWorldTransformer trackingToWorldTransformer, IHandSkeletonProvider handSkeletonProvider)
    {
      InjectAllDataSource(updateMode, updateAfter);
      InjectHandedness(handedness);
      InjectTrackingToWorldTransformer(trackingToWorldTransformer);
      InjectHandSkeletonProvider(handSkeletonProvider);
    }

    public void InjectHandedness(Oculus.Interaction.Input.Handedness handedness)
    {
      _handedness = handedness;
    }

    public void InjectTrackingToWorldTransformer(ITrackingToWorldTransformer trackingToWorldTransformer)
    {
      _trackingToWorldTransformer = trackingToWorldTransformer as UnityEngine.Object;
      TrackingToWorldTransformer = trackingToWorldTransformer;
    }

    public void InjectHandSkeletonProvider(IHandSkeletonProvider handSkeletonProvider)
    {
      _handSkeletonProvider = handSkeletonProvider as UnityEngine.Object;
      HandSkeletonProvider = handSkeletonProvider;
    }

    public void InjectOptionalOVRHand(OVRHand ovrHand)
    {
      _ovrHand = ovrHand;
    }
  }
}