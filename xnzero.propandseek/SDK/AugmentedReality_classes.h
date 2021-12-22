#pragma once

// Name: pns, Version: 1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class AugmentedReality.ARBlueprintLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UARBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AugmentedReality.ARBlueprintLibrary");
		return ptr;
	}



	void STATIC_UnpinComponent(class USceneComponent* ComponentToUnpin);
	void STATIC_StopARSession();
	void STATIC_StartARSession(class UARSessionConfig* SessionConfig);
	void STATIC_SetAlignmentTransform(const struct FTransform& InAlignmentTransform);
	void STATIC_RemovePin(class UARPin* PinToRemove);
	class UARPin* STATIC_PinComponentToTraceResult(class USceneComponent* ComponentToPin, const struct FARTraceResult& TraceResult, const struct FName& DebugName);
	class UARPin* STATIC_PinComponent(class USceneComponent* ComponentToPin, const struct FTransform& PinToWorldTransform, class UARTrackedGeometry* TrackedGeometry, const struct FName& DebugName);
	void STATIC_PauseARSession();
	TArray<struct FARTraceResult> STATIC_LineTraceTrackedObjects3D(const struct FVector& Start, const struct FVector& End, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon);
	TArray<struct FARTraceResult> STATIC_LineTraceTrackedObjects(const struct FVector2D& ScreenCoord, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon);
	bool STATIC_IsSessionTypeSupported(AugmentedReality_EARSessionType SessionType);
	AugmentedReality_EARWorldMappingState STATIC_GetWorldMappingStatus();
	AugmentedReality_EARTrackingQuality STATIC_GetTrackingQuality();
	TArray<struct FARVideoFormat> STATIC_GetSupportedVideoFormats(AugmentedReality_EARSessionType SessionType);
	class UARSessionConfig* STATIC_GetSessionConfig();
	TArray<struct FVector> STATIC_GetPointCloud();
	class UARLightEstimate* STATIC_GetCurrentLightEstimate();
	class UARTextureCameraImage* STATIC_GetCameraImage();
	class UARTextureCameraDepth* STATIC_GetCameraDepth();
	struct FARSessionStatus STATIC_GetARSessionStatus();
	TArray<class UARTrackedPoint*> STATIC_GetAllTrackedPoints();
	TArray<class UARPlaneGeometry*> STATIC_GetAllTrackedPlanes();
	TArray<class UARTrackedImage*> STATIC_GetAllTrackedImages();
	TArray<class UAREnvironmentCaptureProbe*> STATIC_GetAllTrackedEnvironmentCaptureProbes();
	TArray<class UARPin*> STATIC_GetAllPins();
	TArray<class UARTrackedGeometry*> STATIC_GetAllGeometries();
	void STATIC_DebugDrawTrackedGeometry(class UARTrackedGeometry* TrackedGeometry, class UObject* WorldContextObject, const struct FLinearColor& Color, float OutlineThickness, float PersistForSeconds);
	void STATIC_DebugDrawPin(class UARPin* ARPin, class UObject* WorldContextObject, const struct FLinearColor& Color, float Scale, float PersistForSeconds);
	class UARCandidateImage* STATIC_AddRuntimeCandidateImage(class UARSessionConfig* SessionConfig, class UTexture2D* CandidateTexture, const struct FString& FriendlyName, float PhysicalWidth);
	bool STATIC_AddManualEnvironmentCaptureProbe(const struct FVector& Location, const struct FVector& Extent);
};

// Class AugmentedReality.ARTraceResultLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UARTraceResultLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AugmentedReality.ARTraceResultLibrary");
		return ptr;
	}



	class UARTrackedGeometry* STATIC_GetTrackedGeometry(const struct FARTraceResult& TraceResult);
	AugmentedReality_EARLineTraceChannels STATIC_GetTraceChannel(const struct FARTraceResult& TraceResult);
	struct FTransform STATIC_GetLocalToWorldTransform(const struct FARTraceResult& TraceResult);
	struct FTransform STATIC_GetLocalToTrackingTransform(const struct FARTraceResult& TraceResult);
	float STATIC_GetDistanceFromCamera(const struct FARTraceResult& TraceResult);
};

// Class AugmentedReality.ARBaseAsyncTaskBlueprintProxy
// 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
class UARBaseAsyncTaskBlueprintProxy : public UBlueprintAsyncActionBase
{
public:
	unsigned char                                      UnknownData_PFSF[0x20];                                    // 0x0030(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AugmentedReality.ARBaseAsyncTaskBlueprintProxy");
		return ptr;
	}



};

// Class AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy
// 0x0030 (FullSize[0x0080] - InheritedSize[0x0050])
class UARSaveWorldAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0050(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailed;                                                  // 0x0060(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CAKR[0x10];                                    // 0x0070(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy");
		return ptr;
	}



	class UARSaveWorldAsyncTaskBlueprintProxy* STATIC_ARSaveWorld(class UObject* WorldContextObject);
};

// Class AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy
// 0x0048 (FullSize[0x0098] - InheritedSize[0x0050])
class UARGetCandidateObjectAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0050(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailed;                                                  // 0x0060(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BY2G[0x28];                                    // 0x0070(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy");
		return ptr;
	}



	class UARGetCandidateObjectAsyncTaskBlueprintProxy* STATIC_ARGetCandidateObject(class UObject* WorldContextObject, const struct FVector& Location, const struct FVector& Extent);
};

// Class AugmentedReality.ARLightEstimate
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UARLightEstimate : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AugmentedReality.ARLightEstimate");
		return ptr;
	}



};

// Class AugmentedReality.ARBasicLightEstimate
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UARBasicLightEstimate : public UARLightEstimate
{
public:
	float                                              AmbientIntensityLumens;                                    // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              AmbientColorTemperatureKelvin;                             // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FLinearColor                                AmbientColor;                                              // 0x0030(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AugmentedReality.ARBasicLightEstimate");
		return ptr;
	}



	float GetAmbientIntensityLumens();
	float GetAmbientColorTemperatureKelvin();
	struct FLinearColor GetAmbientColor();
};

// Class AugmentedReality.ARPin
// 0x00C8 (FullSize[0x00F0] - InheritedSize[0x0028])
class UARPin : public UObject
{
public:
	class UARTrackedGeometry*                          TrackedGeometry;                                           // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USceneComponent*                             PinnedComponent;                                           // 0x0030(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_6GC1[0x8];                                     // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  LocalToTrackingTransform;                                  // 0x0040(0x0030) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	struct FTransform                                  LocalToAlignedTrackingTransform;                           // 0x0070(0x0030) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	AugmentedReality_EARTrackingState                  TrackingState;                                             // 0x00A0(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_4PG1[0x1F];                                    // 0x00A1(0x001F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnARTrackingStateChanged;                                  // 0x00C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    OnARTransformUpdated;                                      // 0x00D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_QA1S[0x10];                                    // 0x00E0(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AugmentedReality.ARPin");
		return ptr;
	}



	AugmentedReality_EARTrackingState GetTrackingState();
	class UARTrackedGeometry* GetTrackedGeometry();
	class USceneComponent* GetPinnedComponent();
	struct FTransform GetLocalToWorldTransform();
	struct FTransform GetLocalToTrackingTransform();
	struct FName GetDebugName();
	void DebugDraw(class UWorld* World, const struct FLinearColor& Color, float Scale, float PersistForSeconds);
};

// Class AugmentedReality.ARSessionConfig
// 0x0068 (FullSize[0x0098] - InheritedSize[0x0030])
class UARSessionConfig : public UDataAsset
{
public:
	AugmentedReality_EARWorldAlignment                 WorldAlignment;                                            // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	AugmentedReality_EARSessionType                    SessionType;                                               // 0x0031(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	AugmentedReality_EARPlaneDetectionMode             PlaneDetectionMode;                                        // 0x0032(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bHorizontalPlaneDetection;                                 // 0x0033(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bVerticalPlaneDetection;                                   // 0x0034(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bEnableAutoFocus;                                          // 0x0035(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	AugmentedReality_EARLightEstimationMode            LightEstimationMode;                                       // 0x0036(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	AugmentedReality_EARFrameSyncMode                  FrameSyncMode;                                             // 0x0037(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bEnableAutomaticCameraOverlay;                             // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bEnableAutomaticCameraTracking;                            // 0x0039(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bResetCameraTracking;                                      // 0x003A(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bResetTrackedObjects;                                      // 0x003B(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ETWM[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UARCandidateImage*>                   CandidateImages;                                           // 0x0040(0x0010) (Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	int                                                MaxNumSimultaneousImagesTracked;                           // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	AugmentedReality_EAREnvironmentCaptureProbeType    EnvironmentCaptureProbeType;                               // 0x0054(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_LF00[0x3];                                     // 0x0055(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<unsigned char>                              WorldMapData;                                              // 0x0058(0x0010) (Edit, ZeroConstructor, EditConst, Protected, NativeAccessSpecifierProtected)
	TArray<class UARCandidateObject*>                  CandidateObjects;                                          // 0x0068(0x0010) (Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	struct FARVideoFormat                              DesiredVideoFormat;                                        // 0x0078(0x000C) (Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	AugmentedReality_EARFaceTrackingDirection          FaceTrackingDirection;                                     // 0x0084(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	AugmentedReality_EARFaceTrackingUpdate             FaceTrackingUpdate;                                        // 0x0085(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_POWR[0x2];                                     // 0x0086(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<unsigned char>                              SerializedARCandidateImageDatabase;                        // 0x0088(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AugmentedReality.ARSessionConfig");
		return ptr;
	}



	bool ShouldResetTrackedObjects();
	bool ShouldResetCameraTracking();
	bool ShouldRenderCameraOverlay();
	bool ShouldEnableCameraTracking();
	bool ShouldEnableAutoFocus();
	void SetWorldMapData(TArray<unsigned char> WorldMapData);
	void SetResetTrackedObjects(bool bNewValue);
	void SetResetCameraTracking(bool bNewValue);
	void SetFaceTrackingUpdate(AugmentedReality_EARFaceTrackingUpdate InUpdate);
	void SetFaceTrackingDirection(AugmentedReality_EARFaceTrackingDirection InDirection);
	void SetEnableAutoFocus(bool bNewValue);
	void SetDesiredVideoFormat(const struct FARVideoFormat& NewFormat);
	void SetCandidateObjectList(TArray<class UARCandidateObject*> InCandidateObjects);
	TArray<unsigned char> GetWorldMapData();
	AugmentedReality_EARWorldAlignment GetWorldAlignment();
	AugmentedReality_EARSessionType GetSessionType();
	AugmentedReality_EARPlaneDetectionMode GetPlaneDetectionMode();
	int GetMaxNumSimultaneousImagesTracked();
	AugmentedReality_EARLightEstimationMode GetLightEstimationMode();
	AugmentedReality_EARFrameSyncMode GetFrameSyncMode();
	AugmentedReality_EARFaceTrackingUpdate GetFaceTrackingUpdate();
	AugmentedReality_EARFaceTrackingDirection GetFaceTrackingDirection();
	AugmentedReality_EAREnvironmentCaptureProbeType GetEnvironmentCaptureProbeType();
	struct FARVideoFormat GetDesiredVideoFormat();
	TArray<class UARCandidateObject*> GetCandidateObjectList();
	TArray<class UARCandidateImage*> GetCandidateImageList();
	void AddCandidateObject(class UARCandidateObject* CandidateObject);
	void AddCandidateImage(class UARCandidateImage* NewCandidateImage);
};

// Class AugmentedReality.ARSharedWorldGameMode
// 0x0068 (FullSize[0x0480] - InheritedSize[0x0418])
class AARSharedWorldGameMode : public AGameMode
{
public:
	int                                                BufferSizePerChunk;                                        // 0x0418(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4BCR[0x64];                                    // 0x041C(0x0064) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AugmentedReality.ARSharedWorldGameMode");
		return ptr;
	}



	void SetPreviewImageData(TArray<unsigned char> ImageData);
	void SetARWorldSharingIsReady();
	void SetARSharedWorldData(TArray<unsigned char> ARWorldData);
	class AARSharedWorldGameState* GetARSharedWorldGameState();
};

// Class AugmentedReality.ARSharedWorldGameState
// 0x0038 (FullSize[0x03C8] - InheritedSize[0x0390])
class AARSharedWorldGameState : public AGameState
{
public:
	TArray<unsigned char>                              PreviewImageData;                                          // 0x0390(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<unsigned char>                              ARWorldData;                                               // 0x03A0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                PreviewImageBytesTotal;                                    // 0x03B0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ARWorldBytesTotal;                                         // 0x03B4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PreviewImageBytesDelivered;                                // 0x03B8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ARWorldBytesDelivered;                                     // 0x03BC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PVMD[0x8];                                     // 0x03C0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AugmentedReality.ARSharedWorldGameState");
		return ptr;
	}



	void K2_OnARWorldMapIsReady();
};

// Class AugmentedReality.ARSharedWorldPlayerController
// 0x0008 (FullSize[0x0680] - InheritedSize[0x0678])
class AARSharedWorldPlayerController : public APlayerController
{
public:
	unsigned char                                      UnknownData_H3M8[0x8];                                     // 0x0678(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AugmentedReality.ARSharedWorldPlayerController");
		return ptr;
	}



	void ServerMarkReadyForReceiving();
	void ClientUpdatePreviewImageData(int Offset, TArray<unsigned char> Buffer);
	void ClientUpdateARWorldData(int Offset, TArray<unsigned char> Buffer);
	void ClientInitSharedWorld(int PreviewImageSize, int ARWorldDataSize);
};

// Class AugmentedReality.ARSkyLight
// 0x0010 (FullSize[0x0350] - InheritedSize[0x0340])
class AARSkyLight : public ASkyLight
{
public:
	class UAREnvironmentCaptureProbe*                  CaptureProbe;                                              // 0x0340(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_OOMD[0x8];                                     // 0x0348(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AugmentedReality.ARSkyLight");
		return ptr;
	}



	void SetEnvironmentCaptureProbe(class UAREnvironmentCaptureProbe* InCaptureProbe);
};

// Class AugmentedReality.ARTexture
// 0x0020 (FullSize[0x00D8] - InheritedSize[0x00B8])
class UARTexture : public UTexture
{
public:
	AugmentedReality_EARTextureType                    TextureType;                                               // 0x00B8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_K9YB[0x3];                                     // 0x00B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Timestamp;                                                 // 0x00BC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       ExternalTextureGuid;                                       // 0x00C0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   Size;                                                      // 0x00D0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AugmentedReality.ARTexture");
		return ptr;
	}



};

// Class AugmentedReality.ARTextureCameraImage
// 0x0000 (FullSize[0x00D8] - InheritedSize[0x00D8])
class UARTextureCameraImage : public UARTexture
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AugmentedReality.ARTextureCameraImage");
		return ptr;
	}



};

// Class AugmentedReality.ARTextureCameraDepth
// 0x0008 (FullSize[0x00E0] - InheritedSize[0x00D8])
class UARTextureCameraDepth : public UARTexture
{
public:
	AugmentedReality_EARDepthQuality                   DepthQuality;                                              // 0x00D8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AugmentedReality_EARDepthAccuracy                  DepthAccuracy;                                             // 0x00D9(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsTemporallySmoothed;                                     // 0x00DA(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GTST[0x5];                                     // 0x00DB(0x0005) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AugmentedReality.ARTextureCameraDepth");
		return ptr;
	}



};

// Class AugmentedReality.AREnvironmentCaptureProbeTexture
// 0x0020 (FullSize[0x0130] - InheritedSize[0x0110])
class UAREnvironmentCaptureProbeTexture : public UTextureCube
{
public:
	AugmentedReality_EARTextureType                    TextureType;                                               // 0x0110(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HMAI[0x3];                                     // 0x0111(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Timestamp;                                                 // 0x0114(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       ExternalTextureGuid;                                       // 0x0118(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   Size;                                                      // 0x0128(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AugmentedReality.AREnvironmentCaptureProbeTexture");
		return ptr;
	}



};

// Class AugmentedReality.ARTraceResultDummy
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UARTraceResultDummy : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AugmentedReality.ARTraceResultDummy");
		return ptr;
	}



};

// Class AugmentedReality.ARTrackedGeometry
// 0x00A0 (FullSize[0x00C8] - InheritedSize[0x0028])
class UARTrackedGeometry : public UObject
{
public:
	unsigned char                                      UnknownData_RCA0[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  LocalToTrackingTransform;                                  // 0x0030(0x0030) (IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FTransform                                  LocalToAlignedTrackingTransform;                           // 0x0060(0x0030) (IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	AugmentedReality_EARTrackingState                  TrackingState;                                             // 0x0090(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_IJHB[0x37];                                    // 0x0091(0x0037) Fix Super Size


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AugmentedReality.ARTrackedGeometry");
		return ptr;
	}



	bool IsTracked();
	AugmentedReality_EARTrackingState GetTrackingState();
	struct FTransform GetLocalToWorldTransform();
	struct FTransform GetLocalToTrackingTransform();
	float GetLastUpdateTimestamp();
	int GetLastUpdateFrameNumber();
	struct FName GetDebugName();
};

// Class AugmentedReality.ARPlaneGeometry
// 0x0038 (FullSize[0x0100] - InheritedSize[0x00C8])
class UARPlaneGeometry : public UARTrackedGeometry
{
public:
	struct FVector                                     Center;                                                    // 0x00C8(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                                     Extent;                                                    // 0x00D4(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_QJ2P[0x10];                                    // 0x00E0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UARPlaneGeometry*                            SubsumedBy;                                                // 0x00F0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_MZN4[0x8];                                     // 0x00F8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AugmentedReality.ARPlaneGeometry");
		return ptr;
	}



	class UARPlaneGeometry* GetSubsumedBy();
	struct FVector GetExtent();
	struct FVector GetCenter();
	TArray<struct FVector> GetBoundaryPolygonInLocalSpace();
};

// Class AugmentedReality.ARTrackedPoint
// 0x0008 (FullSize[0x00D0] - InheritedSize[0x00C8])
class UARTrackedPoint : public UARTrackedGeometry
{
public:
	unsigned char                                      UnknownData_XKHZ[0x8];                                     // 0x00C8(0x0008) Fix Super Size


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AugmentedReality.ARTrackedPoint");
		return ptr;
	}



};

// Class AugmentedReality.ARTrackedImage
// 0x0018 (FullSize[0x00E0] - InheritedSize[0x00C8])
class UARTrackedImage : public UARTrackedGeometry
{
public:
	unsigned char                                      UnknownData_K5YC[0x8];                                     // 0x00C8(0x0008) Fix Super Size
	class UARCandidateImage*                           DetectedImage;                                             // 0x00D0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector2D                                   EstimatedSize;                                             // 0x00D8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AugmentedReality.ARTrackedImage");
		return ptr;
	}



	struct FVector2D GetEstimateSize();
	class UARCandidateImage* GetDetectedImage();
};

// Class AugmentedReality.ARFaceGeometry
// 0x00F8 (FullSize[0x01C0] - InheritedSize[0x00C8])
class UARFaceGeometry : public UARTrackedGeometry
{
public:
	struct FVector                                     LookAtTarget;                                              // 0x00C8(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsTracked;                                                // 0x00D4(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1BH2[0x3];                                     // 0x00D5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<AugmentedReality_EARFaceBlendShape, float>    BlendShapes;                                               // 0x00D8(0x0050) (ZeroConstructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_TRVJ[0x98];                                    // 0x0128(0x0098) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AugmentedReality.ARFaceGeometry");
		return ptr;
	}



	struct FTransform GetWorldSpaceEyeTransform(AugmentedReality_EAREye Eye);
	struct FTransform GetLocalSpaceEyeTransform(AugmentedReality_EAREye Eye);
	float GetBlendShapeValue(AugmentedReality_EARFaceBlendShape BlendShape);
	TMap<AugmentedReality_EARFaceBlendShape, float> GetBlendShapes();
};

// Class AugmentedReality.AREnvironmentCaptureProbe
// 0x0018 (FullSize[0x00E0] - InheritedSize[0x00C8])
class UAREnvironmentCaptureProbe : public UARTrackedGeometry
{
public:
	unsigned char                                      UnknownData_DCHN[0x8];                                     // 0x00C8(0x0008) Fix Super Size
	unsigned char                                      UnknownData_0UIQ[0x8];                                     // 0x00D0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAREnvironmentCaptureProbeTexture*           EnvironmentCaptureTexture;                                 // 0x00D8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AugmentedReality.AREnvironmentCaptureProbe");
		return ptr;
	}



	struct FVector GetExtent();
	class UAREnvironmentCaptureProbeTexture* GetEnvironmentCaptureTexture();
};

// Class AugmentedReality.ARTrackedObject
// 0x0008 (FullSize[0x00D0] - InheritedSize[0x00C8])
class UARTrackedObject : public UARTrackedGeometry
{
public:
	class UARCandidateObject*                          DetectedObject;                                            // 0x00C8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AugmentedReality.ARTrackedObject");
		return ptr;
	}



	class UARCandidateObject* GetDetectedObject();
};

// Class AugmentedReality.ARTypesDummyClass
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UARTypesDummyClass : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AugmentedReality.ARTypesDummyClass");
		return ptr;
	}



};

// Class AugmentedReality.ARCandidateImage
// 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
class UARCandidateImage : public UDataAsset
{
public:
	class UTexture2D*                                  CandidateTexture;                                          // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     FriendlyName;                                              // 0x0038(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              Width;                                                     // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              Height;                                                    // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	AugmentedReality_EARCandidateImageOrientation      Orientation;                                               // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_93E1[0x7];                                     // 0x0051(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AugmentedReality.ARCandidateImage");
		return ptr;
	}



	float GetPhysicalWidth();
	float GetPhysicalHeight();
	AugmentedReality_EARCandidateImageOrientation GetOrientation();
	struct FString GetFriendlyName();
	class UTexture2D* GetCandidateTexture();
};

// Class AugmentedReality.ARCandidateObject
// 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
class UARCandidateObject : public UDataAsset
{
public:
	TArray<unsigned char>                              CandidateObjectData;                                       // 0x0030(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	struct FString                                     FriendlyName;                                              // 0x0040(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FBox                                        BoundingBox;                                               // 0x0050(0x001C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_FUGP[0x4];                                     // 0x006C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AugmentedReality.ARCandidateObject");
		return ptr;
	}



	void SetCandidateObjectData(TArray<unsigned char> InCandidateObject);
	void SetBoundingBox(const struct FBox& InBoundingBox);
	struct FString GetFriendlyName();
	TArray<unsigned char> GetCandidateObjectData();
	struct FBox GetBoundingBox();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
