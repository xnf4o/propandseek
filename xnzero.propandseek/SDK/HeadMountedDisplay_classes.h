﻿#pragma once

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

// Class HeadMountedDisplay.HeadMountedDisplayFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UHeadMountedDisplayFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class HeadMountedDisplay.HeadMountedDisplayFunctionLibrary");
		return ptr;
	}



	void STATIC_UpdateExternalTrackingHMDPosition(const struct FTransform& ExternalTrackingTransform);
	void STATIC_SetWorldToMetersScale(class UObject* WorldContext, float NewScale);
	void STATIC_SetTrackingOrigin(TEnumAsByte<HeadMountedDisplay_EHMDTrackingOrigin> Origin);
	void STATIC_SetSpectatorScreenTexture(class UTexture* InTexture);
	void STATIC_SetSpectatorScreenModeTexturePlusEyeLayout(const struct FVector2D& EyeRectMin, const struct FVector2D& EyeRectMax, const struct FVector2D& TextureRectMin, const struct FVector2D& TextureRectMax, bool bDrawEyeFirst, bool bClearBlack, bool bUseAlpha);
	void STATIC_SetSpectatorScreenMode(HeadMountedDisplay_ESpectatorScreenMode Mode);
	void STATIC_SetClippingPlanes(float Near, float Far);
	void STATIC_ResetOrientationAndPosition(float Yaw, TEnumAsByte<HeadMountedDisplay_EOrientPositionSelector> Options);
	bool STATIC_IsSpectatorScreenModeControllable();
	bool STATIC_IsInLowPersistenceMode();
	bool STATIC_IsHeadMountedDisplayEnabled();
	bool STATIC_IsHeadMountedDisplayConnected();
	bool STATIC_IsDeviceTracking(const struct FXRDeviceId& XRDeviceId);
	bool STATIC_HasValidTrackingPosition();
	float STATIC_GetWorldToMetersScale(class UObject* WorldContext);
	void STATIC_GetVRFocusState(bool* bUseFocus, bool* bHasFocus);
	struct FTransform STATIC_GetTrackingToWorldTransform(class UObject* WorldContext);
	void STATIC_GetTrackingSensorParameters(struct FVector* Origin, struct FRotator* Rotation, float* LeftFOV, float* RightFOV, float* TopFOV, float* BottomFOV, float* Distance, float* NearPlane, float* FarPlane, bool* IsActive, int Index);
	TEnumAsByte<HeadMountedDisplay_EHMDTrackingOrigin> STATIC_GetTrackingOrigin();
	float STATIC_GetScreenPercentage();
	void STATIC_GetPositionalTrackingCameraParameters(struct FVector* CameraOrigin, struct FRotator* CameraRotation, float* HFOV, float* VFOV, float* CameraDistance, float* NearPlane, float* FarPlane);
	float STATIC_GetPixelDensity();
	void STATIC_GetOrientationAndPosition(struct FRotator* DeviceRotation, struct FVector* DevicePosition);
	int STATIC_GetNumOfTrackingSensors();
	TEnumAsByte<HeadMountedDisplay_EHMDWornState> STATIC_GetHMDWornState();
	struct FName STATIC_GetHMDDeviceName();
	void STATIC_GetDeviceWorldPose(class UObject* WorldContext, const struct FXRDeviceId& XRDeviceId, bool* bIsTracked, struct FRotator* Orientation, bool* bHasPositionalTracking, struct FVector* Position);
	void STATIC_GetDevicePose(const struct FXRDeviceId& XRDeviceId, bool* bIsTracked, struct FRotator* Orientation, bool* bHasPositionalTracking, struct FVector* Position);
	TArray<struct FXRDeviceId> STATIC_EnumerateTrackedDevices(const struct FName& SystemId, HeadMountedDisplay_EXRTrackedDeviceType DeviceType);
	void STATIC_EnableLowPersistenceMode(bool bEnable);
	bool STATIC_EnableHMD(bool bEnable);
	void STATIC_CalibrateExternalTrackingToHMD(const struct FTransform& ExternalTrackingTransform);
};

// Class HeadMountedDisplay.MotionControllerComponent
// 0x00B8 (FullSize[0x0630] - InheritedSize[0x0578])
class UMotionControllerComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData_5HJ9[0x8];                                     // 0x0578(0x0008) Fix Super Size
	struct FName                                       MotionSource;                                              // 0x0580(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDisableLowLatencyUpdate : 1;                              // 0x0588(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_W0IR[0x3];                                     // 0x0589(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	HeadMountedDisplay_ETrackingStatus                 CurrentTrackingStatus;                                     // 0x058C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDisplayDeviceModel;                                       // 0x058D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8SN1[0x2];                                     // 0x058E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       DisplayModelSource;                                        // 0x0590(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                                 CustomDisplayMesh;                                         // 0x0598(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UMaterialInterface*>                  DisplayMeshMaterialOverrides;                              // 0x05A0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_G7AP[0x60];                                    // 0x05B0(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPrimitiveComponent*                         DisplayComponent;                                          // 0x0610(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_213N[0x18];                                    // 0x0618(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class HeadMountedDisplay.MotionControllerComponent");
		return ptr;
	}



	void SetTrackingSource(InputCore_EControllerHand NewSource);
	void SetTrackingMotionSource(const struct FName& NewSource);
	void SetShowDeviceModel(bool bShowControllerModel);
	void SetDisplayModelSource(const struct FName& NewDisplayModelSource);
	void SetCustomDisplayMesh(class UStaticMesh* NewDisplayMesh);
	void SetAssociatedPlayerIndex(int NewPlayer);
	void OnMotionControllerUpdated();
	bool IsTracked();
	InputCore_EControllerHand GetTrackingSource();
	float GetParameterValue(const struct FName& InName, bool* bValueFound);
};

// Class HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMotionTrackedDeviceFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary");
		return ptr;
	}



	void STATIC_SetIsControllerMotionTrackingEnabledByDefault(bool enable);
	bool STATIC_IsMotionTrackingEnabledForSource(int PlayerIndex, const struct FName& SourceName);
	bool STATIC_IsMotionTrackingEnabledForDevice(int PlayerIndex, InputCore_EControllerHand Hand);
	bool STATIC_IsMotionTrackingEnabledForComponent(class UMotionControllerComponent* MotionControllerComponent);
	bool STATIC_IsMotionTrackedDeviceCountManagementNecessary();
	bool STATIC_IsMotionSourceTracking(int PlayerIndex, const struct FName& SourceName);
	int STATIC_GetMotionTrackingEnabledControllerCount();
	int STATIC_GetMaximumMotionTrackedControllerCount();
	struct FName STATIC_GetActiveTrackingSystemName();
	TArray<struct FName> STATIC_EnumerateMotionSources();
	bool STATIC_EnableMotionTrackingOfSource(int PlayerIndex, const struct FName& SourceName);
	bool STATIC_EnableMotionTrackingOfDevice(int PlayerIndex, InputCore_EControllerHand Hand);
	bool STATIC_EnableMotionTrackingForComponent(class UMotionControllerComponent* MotionControllerComponent);
	void STATIC_DisableMotionTrackingOfSource(int PlayerIndex, const struct FName& SourceName);
	void STATIC_DisableMotionTrackingOfDevice(int PlayerIndex, InputCore_EControllerHand Hand);
	void STATIC_DisableMotionTrackingOfControllersForPlayer(int PlayerIndex);
	void STATIC_DisableMotionTrackingOfAllControllers();
	void STATIC_DisableMotionTrackingForComponent(class UMotionControllerComponent* MotionControllerComponent);
};

// Class HeadMountedDisplay.VRNotificationsComponent
// 0x0090 (FullSize[0x0188] - InheritedSize[0x00F8])
class UVRNotificationsComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate;     // 0x00F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    HMDTrackingInitializedDelegate;                            // 0x0108(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    HMDRecenteredDelegate;                                     // 0x0118(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    HMDLostDelegate;                                           // 0x0128(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    HMDReconnectedDelegate;                                    // 0x0138(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    HMDConnectCanceledDelegate;                                // 0x0148(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    HMDPutOnHeadDelegate;                                      // 0x0158(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    HMDRemovedFromHeadDelegate;                                // 0x0168(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    VRControllerRecenteredDelegate;                            // 0x0178(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class HeadMountedDisplay.VRNotificationsComponent");
		return ptr;
	}



};

// Class HeadMountedDisplay.XRAssetFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UXRAssetFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class HeadMountedDisplay.XRAssetFunctionLibrary");
		return ptr;
	}



	class UPrimitiveComponent* STATIC_AddNamedDeviceVisualizationComponentBlocking(class AActor* Target, const struct FName& SystemName, const struct FName& deviceName, bool bManualAttachment, const struct FTransform& RelativeTransform, struct FXRDeviceId* XRDeviceId);
	class UPrimitiveComponent* STATIC_AddDeviceVisualizationComponentBlocking(class AActor* Target, const struct FXRDeviceId& XRDeviceId, bool bManualAttachment, const struct FTransform& RelativeTransform);
};

// Class HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent
// 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
class UAsyncTask_LoadXRDeviceVisComponent : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnModelLoaded;                                             // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnLoadFailure;                                             // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IXEM[0x8];                                     // 0x0050(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPrimitiveComponent*                         SpawnedComponent;                                          // 0x0058(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent");
		return ptr;
	}



	class UAsyncTask_LoadXRDeviceVisComponent* STATIC_AddNamedDeviceVisualizationComponentAsync(class AActor* Target, const struct FName& SystemName, const struct FName& deviceName, bool bManualAttachment, const struct FTransform& RelativeTransform, struct FXRDeviceId* XRDeviceId, class UPrimitiveComponent** NewComponent);
	class UAsyncTask_LoadXRDeviceVisComponent* STATIC_AddDeviceVisualizationComponentAsync(class AActor* Target, const struct FXRDeviceId& XRDeviceId, bool bManualAttachment, const struct FTransform& RelativeTransform, class UPrimitiveComponent** NewComponent);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
