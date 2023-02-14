/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 * All rights reserved.
 *
 * Licensed under the Oculus SDK License Agreement (the "License");
 * you may not use the Oculus SDK except in compliance with the License,
 * which is provided at the time of installation or download, or which
 * otherwise accompanies this software in either electronic or hard copy form.
 *
 * You may obtain a copy of the License at
 *
 * https://developer.oculus.com/licenses/oculussdk/
 *
 * Unless required by applicable law or agreed to in writing, the Oculus SDK
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

using System.Linq;
using UnityEngine;
using UnityEngine.Assertions;
using static OVRSkeleton;

namespace Oculus.Interaction.Input
{
    public class FromOVRHandDataSource : DataSource<HandDataAsset>
    {
        [Header("OVR Data Source")]
        // [SerializeField, Interface(typeof(IOVRCameraRigRef))]
        // private MonoBehaviour _cameraRigRef;
        public MonoBehaviour _cameraRigRef;

        [SerializeField]
        private bool _processLateUpdates = false;

        [Header("Shared Configuration")]
        [SerializeField]
        private Handedness _handedness;

        [SerializeField, Interface(typeof(ITrackingToWorldTransformer))]
        private MonoBehaviour _trackingToWorldTransformer;
        private ITrackingToWorldTransformer TrackingToWorldTransformer;

        [SerializeField, Interface(typeof(IHandSkeletonProvider))]
        private MonoBehaviour _handSkeletonProvider;
        private IHandSkeletonProvider HandSkeletonProvider;

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

        private readonly HandDataAsset _handDataAsset = new HandDataAsset();
        private OVRHand _ovrHand;
        private OVRInput.Controller _ovrController;
        private float _lastHandScale;
        private HandDataSourceConfig _config;

        private IOVRCameraRigRef CameraRigRef;

        protected override HandDataAsset DataAsset => _handDataAsset;

        // Wrist rotations that come from OVR need correcting.
        public static Quaternion WristFixupRotation { get; } =
            new Quaternion(0.0f, 1.0f, 0.0f, 0.0f);

        public Transform originalSpace;
        public Transform thisSpace;
        public bool isUpdating = true;
        public Vector3 defaultPosition = Vector3.zero;
        public bool scaleHandModel;

        protected virtual void Awake()
        {
            TrackingToWorldTransformer = _trackingToWorldTransformer as ITrackingToWorldTransformer;
            CameraRigRef = _cameraRigRef as IOVRCameraRigRef;
            HandSkeletonProvider = _handSkeletonProvider as IHandSkeletonProvider;

            UpdateConfig();

            originalSpace = transform;
            thisSpace = transform;
        }

        protected override void Start()
        {
            this.BeginStart(ref _started, () => base.Start());
            this.AssertField(CameraRigRef, nameof(CameraRigRef));
            this.AssertField(TrackingToWorldTransformer, nameof(TrackingToWorldTransformer));
            this.AssertField(HandSkeletonProvider, nameof(HandSkeletonProvider));
            if (_handedness == Handedness.Left)
            {
                _ovrHand = CameraRigRef.LeftHand;
                _ovrController = OVRInput.Controller.LHand;
            }
            else
            {
                _ovrHand = CameraRigRef.RightHand;
                _ovrController = OVRInput.Controller.RHand;
            }

            UpdateConfig();

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
        }

        private void HandleInputDataDirtied(bool isLateUpdate)
        {
            if (isLateUpdate && !_processLateUpdates)
            {
                return;
            }
            MarkInputDataRequiresUpdate();
        }


        private HandDataSourceConfig Config
        {
            get
            {
                if (_config != null)
                {
                    return _config;
                }

                _config = new HandDataSourceConfig()
                {
                    Handedness = _handedness
                };

                return _config;
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
            _handDataAsset.IsConnected =
                (OVRInput.GetConnectedControllers() & _ovrController) > 0;

            if (_ovrHand != null)
            {
                IOVRSkeletonDataProvider skeletonProvider = _ovrHand;
                SkeletonPoseData poseData = skeletonProvider.GetSkeletonPoseData();
                if (poseData.IsDataValid && poseData.RootScale <= 0.0f)
                {
                    if (_lastHandScale <= 0.0f)
                    {
                        poseData.IsDataValid = false;
                    }
                    else
                    {
                        poseData.RootScale = _lastHandScale;
                    }
                }
                else
                {
                    _lastHandScale = poseData.RootScale;
                }

                if (poseData.IsDataValid && _handDataAsset.IsConnected)
                {
                    UpdateDataPoses(poseData);
                    return;
                }
            }

            // revert state fields to their defaults
            _handDataAsset.IsConnected = default;
            _handDataAsset.IsTracked = default;
            _handDataAsset.RootPoseOrigin = default;
            _handDataAsset.PointerPoseOrigin = default;
            _handDataAsset.IsHighConfidence = default;
            for (var fingerIdx = 0; fingerIdx < Constants.NUM_FINGERS; fingerIdx++)
            {
                _handDataAsset.IsFingerPinching[fingerIdx] = default;
                _handDataAsset.IsFingerHighConfidence[fingerIdx] = default;
            }
        }

        private void UpdateDataPoses(SkeletonPoseData poseData)
        {
            // _handDataAsset.HandScale = poseData.RootScale;
            _handDataAsset.HandScale = scaleHandModel ? new float[] {
                thisSpace.lossyScale.x / originalSpace.lossyScale.x,
                thisSpace.lossyScale.y / originalSpace.lossyScale.y,
                thisSpace.lossyScale.z / originalSpace.lossyScale.z
            }.Average() : poseData.RootScale;

            _handDataAsset.IsTracked = _ovrHand.IsTracked;
            _handDataAsset.IsHighConfidence = poseData.IsDataHighConfidence;
            _handDataAsset.IsDominantHand = _ovrHand.IsDominantHand;
            _handDataAsset.RootPoseOrigin = _handDataAsset.IsTracked
                ? PoseOrigin.RawTrackedPose
                : PoseOrigin.None;

            for (var fingerIdx = 0; fingerIdx < Constants.NUM_FINGERS; fingerIdx++)
            {
                var ovrFingerIdx = (OVRHand.HandFinger)fingerIdx;
                bool isPinching = _ovrHand.GetFingerIsPinching(ovrFingerIdx);
                _handDataAsset.IsFingerPinching[fingerIdx] = isPinching;

                bool isHighConfidence =
                    _ovrHand.GetFingerConfidence(ovrFingerIdx) == OVRHand.TrackingConfidence.High;
                _handDataAsset.IsFingerHighConfidence[fingerIdx] = isHighConfidence;

                float fingerPinchStrength = _ovrHand.GetFingerPinchStrength(ovrFingerIdx);
                _handDataAsset.FingerPinchStrength[fingerIdx] = fingerPinchStrength;
            }

            // Read the poses directly from the poseData, so it isn't in conflict with
            // any modifications that the application makes to OVRSkeleton
            // _handDataAsset.Root = new Pose()
            // {
            //     position = poseData.RootPose.Position.FromFlippedZVector3f(),
            //     rotation = poseData.RootPose.Orientation.FromFlippedZQuatf()
            // };
            _handDataAsset.Root = applyOffset(
                poseData.RootPose.Position.FromFlippedZVector3f(),
                poseData.RootPose.Orientation.FromFlippedZQuatf()
            );

            if (_ovrHand.IsPointerPoseValid)
            {
                _handDataAsset.PointerPoseOrigin = PoseOrigin.RawTrackedPose;
                _handDataAsset.PointerPose = new Pose(_ovrHand.PointerPose.localPosition,
                        _ovrHand.PointerPose.localRotation);
            }
            else
            {
                _handDataAsset.PointerPoseOrigin = PoseOrigin.None;
            }

            // Hand joint rotations X axis needs flipping to get to Unity's coordinate system.
            var bones = poseData.BoneRotations;
            for (int i = 0; i < bones.Length; i++)
            {
                // When using Link in the Unity Editor, the first frame of hand data
                // sometimes contains bad joint data.
                _handDataAsset.Joints[i] = float.IsNaN(bones[i].w)
                    ? Config.HandSkeleton.joints[i].pose.rotation
                    : bones[i].FromFlippedXQuatf();
            }

            _handDataAsset.Joints[0] = WristFixupRotation;
        }

        Pose applyOffset(Vector3 anchorPos, Quaternion anchorRot) {
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

            return new Pose(
                resMat.GetColumn(3),
                resMat.rotation
            );
        }

        #region Inject

        public void InjectAllFromOVRHandDataSource(UpdateModeFlags updateMode, IDataSource updateAfter,
            Handedness handedness, ITrackingToWorldTransformer trackingToWorldTransformer,
            IHandSkeletonProvider handSkeletonProvider)
        {
            base.InjectAllDataSource(updateMode, updateAfter);
            InjectHandedness(handedness);
            InjectTrackingToWorldTransformer(trackingToWorldTransformer);
            InjectHandSkeletonProvider(handSkeletonProvider);
        }

        public void InjectHandedness(Handedness handedness)
        {
            _handedness = handedness;
        }

        public void InjectTrackingToWorldTransformer(ITrackingToWorldTransformer trackingToWorldTransformer)
        {
            _trackingToWorldTransformer = trackingToWorldTransformer as MonoBehaviour;
            TrackingToWorldTransformer = trackingToWorldTransformer;
        }

        public void InjectHandSkeletonProvider(IHandSkeletonProvider handSkeletonProvider)
        {
            _handSkeletonProvider = handSkeletonProvider as MonoBehaviour;
            HandSkeletonProvider = handSkeletonProvider;
        }

        #endregion
    }
}
