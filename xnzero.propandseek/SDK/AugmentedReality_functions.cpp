// Name: pns, Version: 1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x0104EA10
//		Name   -> Function AugmentedReality.ARBlueprintLibrary.UnpinComponent
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class USceneComponent*                             ComponentToUnpin                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARBlueprintLibrary::STATIC_UnpinComponent(class USceneComponent* ComponentToUnpin)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.UnpinComponent");

	UARBlueprintLibrary_UnpinComponent_Params params {};
	params.ComponentToUnpin = ComponentToUnpin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0104E9F0
//		Name   -> Function AugmentedReality.ARBlueprintLibrary.StopARSession
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
void UARBlueprintLibrary::STATIC_StopARSession()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.StopARSession");

	UARBlueprintLibrary_StopARSession_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0104E980
//		Name   -> Function AugmentedReality.ARBlueprintLibrary.StartARSession
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UARSessionConfig*                            SessionConfig                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARBlueprintLibrary::STATIC_StartARSession(class UARSessionConfig* SessionConfig)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.StartARSession");

	UARBlueprintLibrary_StartARSession_Params params {};
	params.SessionConfig = SessionConfig;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0104E060
//		Name   -> Function AugmentedReality.ARBlueprintLibrary.SetAlignmentTransform
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FTransform                                  InAlignmentTransform                                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UARBlueprintLibrary::STATIC_SetAlignmentTransform(const struct FTransform& InAlignmentTransform)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.SetAlignmentTransform");

	UARBlueprintLibrary_SetAlignmentTransform_Params params {};
	params.InAlignmentTransform = InAlignmentTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0104DEA0
//		Name   -> Function AugmentedReality.ARBlueprintLibrary.RemovePin
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UARPin*                                      PinToRemove                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARBlueprintLibrary::STATIC_RemovePin(class UARPin* PinToRemove)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.RemovePin");

	UARBlueprintLibrary_RemovePin_Params params {};
	params.PinToRemove = PinToRemove;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0104DD20
//		Name   -> Function AugmentedReality.ARBlueprintLibrary.PinComponentToTraceResult
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class USceneComponent*                             ComponentToPin                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FARTraceResult                              TraceResult                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FName                                       DebugName                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UARPin*                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UARPin* UARBlueprintLibrary::STATIC_PinComponentToTraceResult(class USceneComponent* ComponentToPin, const struct FARTraceResult& TraceResult, const struct FName& DebugName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.PinComponentToTraceResult");

	UARBlueprintLibrary_PinComponentToTraceResult_Params params {};
	params.ComponentToPin = ComponentToPin;
	params.TraceResult = TraceResult;
	params.DebugName = DebugName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0104DB80
//		Name   -> Function AugmentedReality.ARBlueprintLibrary.PinComponent
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		class USceneComponent*                             ComponentToPin                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FTransform                                  PinToWorldTransform                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		class UARTrackedGeometry*                          TrackedGeometry                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       DebugName                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UARPin*                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UARPin* UARBlueprintLibrary::STATIC_PinComponent(class USceneComponent* ComponentToPin, const struct FTransform& PinToWorldTransform, class UARTrackedGeometry* TrackedGeometry, const struct FName& DebugName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.PinComponent");

	UARBlueprintLibrary_PinComponent_Params params {};
	params.ComponentToPin = ComponentToPin;
	params.PinToWorldTransform = PinToWorldTransform;
	params.TrackedGeometry = TrackedGeometry;
	params.DebugName = DebugName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0104DB60
//		Name   -> Function AugmentedReality.ARBlueprintLibrary.PauseARSession
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
void UARBlueprintLibrary::STATIC_PauseARSession()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.PauseARSession");

	UARBlueprintLibrary_PauseARSession_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0104D780
//		Name   -> Function AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects3D
//		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FVector                                     Start                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     End                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bTestFeaturePoints                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bTestGroundPlane                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bTestPlaneExtents                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bTestPlaneBoundaryPolygon                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FARTraceResult>                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FARTraceResult> UARBlueprintLibrary::STATIC_LineTraceTrackedObjects3D(const struct FVector& Start, const struct FVector& End, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects3D");

	UARBlueprintLibrary_LineTraceTrackedObjects3D_Params params {};
	params.Start = Start;
	params.End = End;
	params.bTestFeaturePoints = bTestFeaturePoints;
	params.bTestGroundPlane = bTestGroundPlane;
	params.bTestPlaneExtents = bTestPlaneExtents;
	params.bTestPlaneBoundaryPolygon = bTestPlaneBoundaryPolygon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0104D990
//		Name   -> Function AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects
//		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FVector2D                                   ScreenCoord                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bTestFeaturePoints                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bTestGroundPlane                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bTestPlaneExtents                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bTestPlaneBoundaryPolygon                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FARTraceResult>                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FARTraceResult> UARBlueprintLibrary::STATIC_LineTraceTrackedObjects(const struct FVector2D& ScreenCoord, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects");

	UARBlueprintLibrary_LineTraceTrackedObjects_Params params {};
	params.ScreenCoord = ScreenCoord;
	params.bTestFeaturePoints = bTestFeaturePoints;
	params.bTestGroundPlane = bTestGroundPlane;
	params.bTestPlaneExtents = bTestPlaneExtents;
	params.bTestPlaneBoundaryPolygon = bTestPlaneBoundaryPolygon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0104D6D0
//		Name   -> Function AugmentedReality.ARBlueprintLibrary.IsSessionTypeSupported
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		AugmentedReality_EARSessionType                    SessionType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UARBlueprintLibrary::STATIC_IsSessionTypeSupported(AugmentedReality_EARSessionType SessionType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.IsSessionTypeSupported");

	UARBlueprintLibrary_IsSessionTypeSupported_Params params {};
	params.SessionType = SessionType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0104D5F0
//		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetWorldMappingStatus
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		AugmentedReality_EARWorldMappingState              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
AugmentedReality_EARWorldMappingState UARBlueprintLibrary::STATIC_GetWorldMappingStatus()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetWorldMappingStatus");

	UARBlueprintLibrary_GetWorldMappingStatus_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0104D4F0
//		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetTrackingQuality
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		AugmentedReality_EARTrackingQuality                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
AugmentedReality_EARTrackingQuality UARBlueprintLibrary::STATIC_GetTrackingQuality()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetTrackingQuality");

	UARBlueprintLibrary_GetTrackingQuality_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0104D200
//		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetSupportedVideoFormats
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		AugmentedReality_EARSessionType                    SessionType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FARVideoFormat>                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FARVideoFormat> UARBlueprintLibrary::STATIC_GetSupportedVideoFormats(AugmentedReality_EARSessionType SessionType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetSupportedVideoFormats");

	UARBlueprintLibrary_GetSupportedVideoFormats_Params params {};
	params.SessionType = SessionType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0104D180
//		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetSessionConfig
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UARSessionConfig*                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UARSessionConfig* UARBlueprintLibrary::STATIC_GetSessionConfig()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetSessionConfig");

	UARBlueprintLibrary_GetSessionConfig_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0104D100
//		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetPointCloud
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<struct FVector>                             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FVector> UARBlueprintLibrary::STATIC_GetPointCloud()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetPointCloud");

	UARBlueprintLibrary_GetPointCloud_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0104C6F0
//		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetCurrentLightEstimate
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UARLightEstimate*                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UARLightEstimate* UARBlueprintLibrary::STATIC_GetCurrentLightEstimate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetCurrentLightEstimate");

	UARBlueprintLibrary_GetCurrentLightEstimate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0104C520
//		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetCameraImage
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UARTextureCameraImage*                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UARTextureCameraImage* UARBlueprintLibrary::STATIC_GetCameraImage()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetCameraImage");

	UARBlueprintLibrary_GetCameraImage_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0104C4F0
//		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetCameraDepth
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UARTextureCameraDepth*                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UARTextureCameraDepth* UARBlueprintLibrary::STATIC_GetCameraDepth()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetCameraDepth");

	UARBlueprintLibrary_GetCameraDepth_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0104BE00
//		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetARSessionStatus
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FARSessionStatus                            ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FARSessionStatus UARBlueprintLibrary::STATIC_GetARSessionStatus()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetARSessionStatus");

	UARBlueprintLibrary_GetARSessionStatus_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0104C140
//		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPoints
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		TArray<class UARTrackedPoint*>                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<class UARTrackedPoint*> UARBlueprintLibrary::STATIC_GetAllTrackedPoints()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPoints");

	UARBlueprintLibrary_GetAllTrackedPoints_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0104C0C0
//		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPlanes
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		TArray<class UARPlaneGeometry*>                    ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<class UARPlaneGeometry*> UARBlueprintLibrary::STATIC_GetAllTrackedPlanes()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPlanes");

	UARBlueprintLibrary_GetAllTrackedPlanes_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0104C040
//		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedImages
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		TArray<class UARTrackedImage*>                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<class UARTrackedImage*> UARBlueprintLibrary::STATIC_GetAllTrackedImages()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedImages");

	UARBlueprintLibrary_GetAllTrackedImages_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0104BFC0
//		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedEnvironmentCaptureProbes
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		TArray<class UAREnvironmentCaptureProbe*>          ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<class UAREnvironmentCaptureProbe*> UARBlueprintLibrary::STATIC_GetAllTrackedEnvironmentCaptureProbes()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedEnvironmentCaptureProbes");

	UARBlueprintLibrary_GetAllTrackedEnvironmentCaptureProbes_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0104BF40
//		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetAllPins
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		TArray<class UARPin*>                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<class UARPin*> UARBlueprintLibrary::STATIC_GetAllPins()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetAllPins");

	UARBlueprintLibrary_GetAllPins_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0104BEC0
//		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetAllGeometries
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		TArray<class UARTrackedGeometry*>                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<class UARTrackedGeometry*> UARBlueprintLibrary::STATIC_GetAllGeometries()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetAllGeometries");

	UARBlueprintLibrary_GetAllGeometries_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0104BC70
//		Name   -> Function AugmentedReality.ARBlueprintLibrary.DebugDrawTrackedGeometry
//		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		class UARTrackedGeometry*                          TrackedGeometry                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLinearColor                                Color                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              OutlineThickness                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              PersistForSeconds                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARBlueprintLibrary::STATIC_DebugDrawTrackedGeometry(class UARTrackedGeometry* TrackedGeometry, class UObject* WorldContextObject, const struct FLinearColor& Color, float OutlineThickness, float PersistForSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.DebugDrawTrackedGeometry");

	UARBlueprintLibrary_DebugDrawTrackedGeometry_Params params {};
	params.TrackedGeometry = TrackedGeometry;
	params.WorldContextObject = WorldContextObject;
	params.Color = Color;
	params.OutlineThickness = OutlineThickness;
	params.PersistForSeconds = PersistForSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0104BAE0
//		Name   -> Function AugmentedReality.ARBlueprintLibrary.DebugDrawPin
//		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		class UARPin*                                      ARPin                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLinearColor                                Color                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Scale                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              PersistForSeconds                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARBlueprintLibrary::STATIC_DebugDrawPin(class UARPin* ARPin, class UObject* WorldContextObject, const struct FLinearColor& Color, float Scale, float PersistForSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.DebugDrawPin");

	UARBlueprintLibrary_DebugDrawPin_Params params {};
	params.ARPin = ARPin;
	params.WorldContextObject = WorldContextObject;
	params.Color = Color;
	params.Scale = Scale;
	params.PersistForSeconds = PersistForSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0104B510
//		Name   -> Function AugmentedReality.ARBlueprintLibrary.AddRuntimeCandidateImage
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UARSessionConfig*                            SessionConfig                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UTexture2D*                                  CandidateTexture                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     FriendlyName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              PhysicalWidth                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UARCandidateImage*                           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UARCandidateImage* UARBlueprintLibrary::STATIC_AddRuntimeCandidateImage(class UARSessionConfig* SessionConfig, class UTexture2D* CandidateTexture, const struct FString& FriendlyName, float PhysicalWidth)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.AddRuntimeCandidateImage");

	UARBlueprintLibrary_AddRuntimeCandidateImage_Params params {};
	params.SessionConfig = SessionConfig;
	params.CandidateTexture = CandidateTexture;
	params.FriendlyName = FriendlyName;
	params.PhysicalWidth = PhysicalWidth;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0104B430
//		Name   -> Function AugmentedReality.ARBlueprintLibrary.AddManualEnvironmentCaptureProbe
//		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Extent                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UARBlueprintLibrary::STATIC_AddManualEnvironmentCaptureProbe(const struct FVector& Location, const struct FVector& Extent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.AddManualEnvironmentCaptureProbe");

	UARBlueprintLibrary_AddManualEnvironmentCaptureProbe_Params params {};
	params.Location = Location;
	params.Extent = Extent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0104D3F0
//		Name   -> Function AugmentedReality.ARTraceResultLibrary.GetTrackedGeometry
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FARTraceResult                              TraceResult                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		class UARTrackedGeometry*                          ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UARTrackedGeometry* UARTraceResultLibrary::STATIC_GetTrackedGeometry(const struct FARTraceResult& TraceResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTraceResultLibrary.GetTrackedGeometry");

	UARTraceResultLibrary_GetTrackedGeometry_Params params {};
	params.TraceResult = TraceResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0104D2C0
//		Name   -> Function AugmentedReality.ARTraceResultLibrary.GetTraceChannel
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FARTraceResult                              TraceResult                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		AugmentedReality_EARLineTraceChannels              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
AugmentedReality_EARLineTraceChannels UARTraceResultLibrary::STATIC_GetTraceChannel(const struct FARTraceResult& TraceResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTraceResultLibrary.GetTraceChannel");

	UARTraceResultLibrary_GetTraceChannel_Params params {};
	params.TraceResult = TraceResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0104CE90
//		Name   -> Function AugmentedReality.ARTraceResultLibrary.GetLocalToWorldTransform
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FARTraceResult                              TraceResult                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FTransform                                  ReturnValue                                                (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FTransform UARTraceResultLibrary::STATIC_GetLocalToWorldTransform(const struct FARTraceResult& TraceResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTraceResultLibrary.GetLocalToWorldTransform");

	UARTraceResultLibrary_GetLocalToWorldTransform_Params params {};
	params.TraceResult = TraceResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0104CCB0
//		Name   -> Function AugmentedReality.ARTraceResultLibrary.GetLocalToTrackingTransform
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FARTraceResult                              TraceResult                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FTransform                                  ReturnValue                                                (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FTransform UARTraceResultLibrary::STATIC_GetLocalToTrackingTransform(const struct FARTraceResult& TraceResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTraceResultLibrary.GetLocalToTrackingTransform");

	UARTraceResultLibrary_GetLocalToTrackingTransform_Params params {};
	params.TraceResult = TraceResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0104C820
//		Name   -> Function AugmentedReality.ARTraceResultLibrary.GetDistanceFromCamera
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FARTraceResult                              TraceResult                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UARTraceResultLibrary::STATIC_GetDistanceFromCamera(const struct FARTraceResult& TraceResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTraceResultLibrary.GetDistanceFromCamera");

	UARTraceResultLibrary_GetDistanceFromCamera_Params params {};
	params.TraceResult = TraceResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0104B2B0
//		Name   -> Function AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy.ARSaveWorld
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UARSaveWorldAsyncTaskBlueprintProxy*         ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UARSaveWorldAsyncTaskBlueprintProxy* UARSaveWorldAsyncTaskBlueprintProxy::STATIC_ARSaveWorld(class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy.ARSaveWorld");

	UARSaveWorldAsyncTaskBlueprintProxy_ARSaveWorld_Params params {};
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0104B190
//		Name   -> Function AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy.ARGetCandidateObject
//		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Extent                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UARGetCandidateObjectAsyncTaskBlueprintProxy* ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UARGetCandidateObjectAsyncTaskBlueprintProxy* UARGetCandidateObjectAsyncTaskBlueprintProxy::STATIC_ARGetCandidateObject(class UObject* WorldContextObject, const struct FVector& Location, const struct FVector& Extent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy.ARGetCandidateObject");

	UARGetCandidateObjectAsyncTaskBlueprintProxy_ARGetCandidateObject_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.Location = Location;
	params.Extent = Extent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0104C230
//		Name   -> Function AugmentedReality.ARBasicLightEstimate.GetAmbientIntensityLumens
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UARBasicLightEstimate::GetAmbientIntensityLumens()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBasicLightEstimate.GetAmbientIntensityLumens");

	UARBasicLightEstimate_GetAmbientIntensityLumens_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0104C200
//		Name   -> Function AugmentedReality.ARBasicLightEstimate.GetAmbientColorTemperatureKelvin
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UARBasicLightEstimate::GetAmbientColorTemperatureKelvin()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBasicLightEstimate.GetAmbientColorTemperatureKelvin");

	UARBasicLightEstimate_GetAmbientColorTemperatureKelvin_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0104C1C0
//		Name   -> Function AugmentedReality.ARBasicLightEstimate.GetAmbientColor
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FLinearColor                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FLinearColor UARBasicLightEstimate::GetAmbientColor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBasicLightEstimate.GetAmbientColor");

	UARBasicLightEstimate_GetAmbientColor_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0104D520
//		Name   -> Function AugmentedReality.ARPin.GetTrackingState
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		AugmentedReality_EARTrackingState                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
AugmentedReality_EARTrackingState UARPin::GetTrackingState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPin.GetTrackingState");

	UARPin_GetTrackingState_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0104D3C0
//		Name   -> Function AugmentedReality.ARPin.GetTrackedGeometry
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class UARTrackedGeometry*                          ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UARTrackedGeometry* UARPin::GetTrackedGeometry()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPin.GetTrackedGeometry");

	UARPin_GetTrackedGeometry_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0104D0A0
//		Name   -> Function AugmentedReality.ARPin.GetPinnedComponent
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class USceneComponent*                             ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USceneComponent* UARPin::GetPinnedComponent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPin.GetPinnedComponent");

	UARPin_GetPinnedComponent_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0104CE30
//		Name   -> Function AugmentedReality.ARPin.GetLocalToWorldTransform
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FTransform                                  ReturnValue                                                (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FTransform UARPin::GetLocalToWorldTransform()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPin.GetLocalToWorldTransform");

	UARPin_GetLocalToWorldTransform_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0104CC50
//		Name   -> Function AugmentedReality.ARPin.GetLocalToTrackingTransform
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FTransform                                  ReturnValue                                                (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FTransform UARPin::GetLocalToTrackingTransform()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPin.GetLocalToTrackingTransform");

	UARPin_GetLocalToTrackingTransform_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0104C720
//		Name   -> Function AugmentedReality.ARPin.GetDebugName
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FName                                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FName UARPin::GetDebugName()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPin.GetDebugName");

	UARPin_GetDebugName_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0104B990
//		Name   -> Function AugmentedReality.ARPin.DebugDraw
//		Flags  -> (Native, Public, HasOutParms, HasDefaults, Const)
// Parameters:
//		class UWorld*                                      World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLinearColor                                Color                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Scale                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              PersistForSeconds                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARPin::DebugDraw(class UWorld* World, const struct FLinearColor& Color, float Scale, float PersistForSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPin.DebugDraw");

	UARPin_DebugDraw_Params params {};
	params.World = World;
	params.Color = Color;
	params.Scale = Scale;
	params.PersistForSeconds = PersistForSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0104E950
//		Name   -> Function AugmentedReality.ARSessionConfig.ShouldResetTrackedObjects
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UARSessionConfig::ShouldResetTrackedObjects()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.ShouldResetTrackedObjects");

	UARSessionConfig_ShouldResetTrackedObjects_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0104E920
//		Name   -> Function AugmentedReality.ARSessionConfig.ShouldResetCameraTracking
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UARSessionConfig::ShouldResetCameraTracking()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.ShouldResetCameraTracking");

	UARSessionConfig_ShouldResetCameraTracking_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x004A36B0
//		Name   -> Function AugmentedReality.ARSessionConfig.ShouldRenderCameraOverlay
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UARSessionConfig::ShouldRenderCameraOverlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.ShouldRenderCameraOverlay");

	UARSessionConfig_ShouldRenderCameraOverlay_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0104E8F0
//		Name   -> Function AugmentedReality.ARSessionConfig.ShouldEnableCameraTracking
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UARSessionConfig::ShouldEnableCameraTracking()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.ShouldEnableCameraTracking");

	UARSessionConfig_ShouldEnableCameraTracking_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0104E8C0
//		Name   -> Function AugmentedReality.ARSessionConfig.ShouldEnableAutoFocus
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UARSessionConfig::ShouldEnableAutoFocus()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.ShouldEnableAutoFocus");

	UARSessionConfig_ShouldEnableAutoFocus_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0104E7E0
//		Name   -> Function AugmentedReality.ARSessionConfig.SetWorldMapData
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TArray<unsigned char>                              WorldMapData                                               (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
void UARSessionConfig::SetWorldMapData(TArray<unsigned char> WorldMapData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetWorldMapData");

	UARSessionConfig_SetWorldMapData_Params params {};
	params.WorldMapData = WorldMapData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0104E750
//		Name   -> Function AugmentedReality.ARSessionConfig.SetResetTrackedObjects
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bNewValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARSessionConfig::SetResetTrackedObjects(bool bNewValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetResetTrackedObjects");

	UARSessionConfig_SetResetTrackedObjects_Params params {};
	params.bNewValue = bNewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0104E6C0
//		Name   -> Function AugmentedReality.ARSessionConfig.SetResetCameraTracking
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bNewValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARSessionConfig::SetResetCameraTracking(bool bNewValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetResetCameraTracking");

	UARSessionConfig_SetResetCameraTracking_Params params {};
	params.bNewValue = bNewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0104E560
//		Name   -> Function AugmentedReality.ARSessionConfig.SetFaceTrackingUpdate
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		AugmentedReality_EARFaceTrackingUpdate             InUpdate                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARSessionConfig::SetFaceTrackingUpdate(AugmentedReality_EARFaceTrackingUpdate InUpdate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetFaceTrackingUpdate");

	UARSessionConfig_SetFaceTrackingUpdate_Params params {};
	params.InUpdate = InUpdate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0104E4E0
//		Name   -> Function AugmentedReality.ARSessionConfig.SetFaceTrackingDirection
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		AugmentedReality_EARFaceTrackingDirection          InDirection                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARSessionConfig::SetFaceTrackingDirection(AugmentedReality_EARFaceTrackingDirection InDirection)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetFaceTrackingDirection");

	UARSessionConfig_SetFaceTrackingDirection_Params params {};
	params.InDirection = InDirection;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0104E3D0
//		Name   -> Function AugmentedReality.ARSessionConfig.SetEnableAutoFocus
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bNewValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARSessionConfig::SetEnableAutoFocus(bool bNewValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetEnableAutoFocus");

	UARSessionConfig_SetEnableAutoFocus_Params params {};
	params.bNewValue = bNewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0104E330
//		Name   -> Function AugmentedReality.ARSessionConfig.SetDesiredVideoFormat
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FARVideoFormat                              NewFormat                                                  (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UARSessionConfig::SetDesiredVideoFormat(const struct FARVideoFormat& NewFormat)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetDesiredVideoFormat");

	UARSessionConfig_SetDesiredVideoFormat_Params params {};
	params.NewFormat = NewFormat;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0104E280
//		Name   -> Function AugmentedReality.ARSessionConfig.SetCandidateObjectList
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<class UARCandidateObject*>                  InCandidateObjects                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UARSessionConfig::SetCandidateObjectList(TArray<class UARCandidateObject*> InCandidateObjects)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetCandidateObjectList");

	UARSessionConfig_SetCandidateObjectList_Params params {};
	params.InCandidateObjects = InCandidateObjects;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0104D5B0
//		Name   -> Function AugmentedReality.ARSessionConfig.GetWorldMapData
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		TArray<unsigned char>                              ReturnValue                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
TArray<unsigned char> UARSessionConfig::GetWorldMapData()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetWorldMapData");

	UARSessionConfig_GetWorldMapData_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0104D580
//		Name   -> Function AugmentedReality.ARSessionConfig.GetWorldAlignment
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		AugmentedReality_EARWorldAlignment                 ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
AugmentedReality_EARWorldAlignment UARSessionConfig::GetWorldAlignment()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetWorldAlignment");

	UARSessionConfig_GetWorldAlignment_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0104D1B0
//		Name   -> Function AugmentedReality.ARSessionConfig.GetSessionType
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		AugmentedReality_EARSessionType                    ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
AugmentedReality_EARSessionType UARSessionConfig::GetSessionType()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetSessionType");

	UARSessionConfig_GetSessionType_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0104D0D0
//		Name   -> Function AugmentedReality.ARSessionConfig.GetPlaneDetectionMode
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		AugmentedReality_EARPlaneDetectionMode             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
AugmentedReality_EARPlaneDetectionMode UARSessionConfig::GetPlaneDetectionMode()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetPlaneDetectionMode");

	UARSessionConfig_GetPlaneDetectionMode_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0104D010
//		Name   -> Function AugmentedReality.ARSessionConfig.GetMaxNumSimultaneousImagesTracked
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UARSessionConfig::GetMaxNumSimultaneousImagesTracked()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetMaxNumSimultaneousImagesTracked");

	UARSessionConfig_GetMaxNumSimultaneousImagesTracked_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0104CB80
//		Name   -> Function AugmentedReality.ARSessionConfig.GetLightEstimationMode
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		AugmentedReality_EARLightEstimationMode            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
AugmentedReality_EARLightEstimationMode UARSessionConfig::GetLightEstimationMode()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetLightEstimationMode");

	UARSessionConfig_GetLightEstimationMode_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0104CA90
//		Name   -> Function AugmentedReality.ARSessionConfig.GetFrameSyncMode
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		AugmentedReality_EARFrameSyncMode                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
AugmentedReality_EARFrameSyncMode UARSessionConfig::GetFrameSyncMode()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetFrameSyncMode");

	UARSessionConfig_GetFrameSyncMode_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0104CA60
//		Name   -> Function AugmentedReality.ARSessionConfig.GetFaceTrackingUpdate
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		AugmentedReality_EARFaceTrackingUpdate             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
AugmentedReality_EARFaceTrackingUpdate UARSessionConfig::GetFaceTrackingUpdate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetFaceTrackingUpdate");

	UARSessionConfig_GetFaceTrackingUpdate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0104CA30
//		Name   -> Function AugmentedReality.ARSessionConfig.GetFaceTrackingDirection
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		AugmentedReality_EARFaceTrackingDirection          ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
AugmentedReality_EARFaceTrackingDirection UARSessionConfig::GetFaceTrackingDirection()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetFaceTrackingDirection");

	UARSessionConfig_GetFaceTrackingDirection_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0104C920
//		Name   -> Function AugmentedReality.ARSessionConfig.GetEnvironmentCaptureProbeType
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		AugmentedReality_EAREnvironmentCaptureProbeType    ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
AugmentedReality_EAREnvironmentCaptureProbeType UARSessionConfig::GetEnvironmentCaptureProbeType()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetEnvironmentCaptureProbeType");

	UARSessionConfig_GetEnvironmentCaptureProbeType_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0104C7A0
//		Name   -> Function AugmentedReality.ARSessionConfig.GetDesiredVideoFormat
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FARVideoFormat                              ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FARVideoFormat UARSessionConfig::GetDesiredVideoFormat()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetDesiredVideoFormat");

	UARSessionConfig_GetDesiredVideoFormat_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0104C610
//		Name   -> Function AugmentedReality.ARSessionConfig.GetCandidateObjectList
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		TArray<class UARCandidateObject*>                  ReturnValue                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
TArray<class UARCandidateObject*> UARSessionConfig::GetCandidateObjectList()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetCandidateObjectList");

	UARSessionConfig_GetCandidateObjectList_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0104C550
//		Name   -> Function AugmentedReality.ARSessionConfig.GetCandidateImageList
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		TArray<class UARCandidateImage*>                   ReturnValue                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
TArray<class UARCandidateImage*> UARSessionConfig::GetCandidateImageList()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetCandidateImageList");

	UARSessionConfig_GetCandidateImageList_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0104B3B0
//		Name   -> Function AugmentedReality.ARSessionConfig.AddCandidateObject
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UARCandidateObject*                          CandidateObject                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARSessionConfig::AddCandidateObject(class UARCandidateObject* CandidateObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.AddCandidateObject");

	UARSessionConfig_AddCandidateObject_Params params {};
	params.CandidateObject = CandidateObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0104B330
//		Name   -> Function AugmentedReality.ARSessionConfig.AddCandidateImage
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UARCandidateImage*                           NewCandidateImage                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARSessionConfig::AddCandidateImage(class UARCandidateImage* NewCandidateImage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.AddCandidateImage");

	UARSessionConfig_AddCandidateImage_Params params {};
	params.NewCandidateImage = NewCandidateImage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0104E5E0
//		Name   -> Function AugmentedReality.ARSharedWorldGameMode.SetPreviewImageData
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
//		TArray<unsigned char>                              ImageData                                                  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
void AARSharedWorldGameMode::SetPreviewImageData(TArray<unsigned char> ImageData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSharedWorldGameMode.SetPreviewImageData");

	AARSharedWorldGameMode_SetPreviewImageData_Params params {};
	params.ImageData = ImageData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0104E040
//		Name   -> Function AugmentedReality.ARSharedWorldGameMode.SetARWorldSharingIsReady
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
void AARSharedWorldGameMode::SetARWorldSharingIsReady()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSharedWorldGameMode.SetARWorldSharingIsReady");

	AARSharedWorldGameMode_SetARWorldSharingIsReady_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0104DF60
//		Name   -> Function AugmentedReality.ARSharedWorldGameMode.SetARSharedWorldData
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
//		TArray<unsigned char>                              ARWorldData                                                (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
void AARSharedWorldGameMode::SetARSharedWorldData(TArray<unsigned char> ARWorldData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSharedWorldGameMode.SetARSharedWorldData");

	AARSharedWorldGameMode_SetARSharedWorldData_Params params {};
	params.ARWorldData = ARWorldData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0104BE90
//		Name   -> Function AugmentedReality.ARSharedWorldGameMode.GetARSharedWorldGameState
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
//		class AARSharedWorldGameState*                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AARSharedWorldGameState* AARSharedWorldGameMode::GetARSharedWorldGameState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSharedWorldGameMode.GetARSharedWorldGameState");

	AARSharedWorldGameMode_GetARSharedWorldGameState_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function AugmentedReality.ARSharedWorldGameState.K2_OnARWorldMapIsReady
//		Flags  -> (Event, Public, BlueprintEvent)
void AARSharedWorldGameState::K2_OnARWorldMapIsReady()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSharedWorldGameState.K2_OnARWorldMapIsReady");

	AARSharedWorldGameState_K2_OnARWorldMapIsReady_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0104DF10
//		Name   -> Function AugmentedReality.ARSharedWorldPlayerController.ServerMarkReadyForReceiving
//		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
void AARSharedWorldPlayerController::ServerMarkReadyForReceiving()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSharedWorldPlayerController.ServerMarkReadyForReceiving");

	AARSharedWorldPlayerController_ServerMarkReadyForReceiving_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0104B890
//		Name   -> Function AugmentedReality.ARSharedWorldPlayerController.ClientUpdatePreviewImageData
//		Flags  -> (Net, NetReliable, Native, Event, Public, NetClient, NetValidate)
// Parameters:
//		int                                                Offset                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<unsigned char>                              Buffer                                                     (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void AARSharedWorldPlayerController::ClientUpdatePreviewImageData(int Offset, TArray<unsigned char> Buffer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSharedWorldPlayerController.ClientUpdatePreviewImageData");

	AARSharedWorldPlayerController_ClientUpdatePreviewImageData_Params params {};
	params.Offset = Offset;
	params.Buffer = Buffer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0104B790
//		Name   -> Function AugmentedReality.ARSharedWorldPlayerController.ClientUpdateARWorldData
//		Flags  -> (Net, NetReliable, Native, Event, Public, NetClient, NetValidate)
// Parameters:
//		int                                                Offset                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<unsigned char>                              Buffer                                                     (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void AARSharedWorldPlayerController::ClientUpdateARWorldData(int Offset, TArray<unsigned char> Buffer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSharedWorldPlayerController.ClientUpdateARWorldData");

	AARSharedWorldPlayerController_ClientUpdateARWorldData_Params params {};
	params.Offset = Offset;
	params.Buffer = Buffer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0104B690
//		Name   -> Function AugmentedReality.ARSharedWorldPlayerController.ClientInitSharedWorld
//		Flags  -> (Net, NetReliable, Native, Event, Public, NetClient, NetValidate)
// Parameters:
//		int                                                PreviewImageSize                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ARWorldDataSize                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AARSharedWorldPlayerController::ClientInitSharedWorld(int PreviewImageSize, int ARWorldDataSize)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSharedWorldPlayerController.ClientInitSharedWorld");

	AARSharedWorldPlayerController_ClientInitSharedWorld_Params params {};
	params.PreviewImageSize = PreviewImageSize;
	params.ARWorldDataSize = ARWorldDataSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0104E460
//		Name   -> Function AugmentedReality.ARSkyLight.SetEnvironmentCaptureProbe
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UAREnvironmentCaptureProbe*                  InCaptureProbe                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AARSkyLight::SetEnvironmentCaptureProbe(class UAREnvironmentCaptureProbe* InCaptureProbe)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSkyLight.SetEnvironmentCaptureProbe");

	AARSkyLight_SetEnvironmentCaptureProbe_Params params {};
	params.InCaptureProbe = InCaptureProbe;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0104D750
//		Name   -> Function AugmentedReality.ARTrackedGeometry.IsTracked
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UARTrackedGeometry::IsTracked()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.IsTracked");

	UARTrackedGeometry_IsTracked_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0104D550
//		Name   -> Function AugmentedReality.ARTrackedGeometry.GetTrackingState
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		AugmentedReality_EARTrackingState                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
AugmentedReality_EARTrackingState UARTrackedGeometry::GetTrackingState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetTrackingState");

	UARTrackedGeometry_GetTrackingState_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0104CFB0
//		Name   -> Function AugmentedReality.ARTrackedGeometry.GetLocalToWorldTransform
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FTransform                                  ReturnValue                                                (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FTransform UARTrackedGeometry::GetLocalToWorldTransform()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetLocalToWorldTransform");

	UARTrackedGeometry_GetLocalToWorldTransform_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0104CDD0
//		Name   -> Function AugmentedReality.ARTrackedGeometry.GetLocalToTrackingTransform
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FTransform                                  ReturnValue                                                (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FTransform UARTrackedGeometry::GetLocalToTrackingTransform()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetLocalToTrackingTransform");

	UARTrackedGeometry_GetLocalToTrackingTransform_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0104CB50
//		Name   -> Function AugmentedReality.ARTrackedGeometry.GetLastUpdateTimestamp
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UARTrackedGeometry::GetLastUpdateTimestamp()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetLastUpdateTimestamp");

	UARTrackedGeometry_GetLastUpdateTimestamp_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0104CB20
//		Name   -> Function AugmentedReality.ARTrackedGeometry.GetLastUpdateFrameNumber
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UARTrackedGeometry::GetLastUpdateFrameNumber()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetLastUpdateFrameNumber");

	UARTrackedGeometry_GetLastUpdateFrameNumber_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0104C760
//		Name   -> Function AugmentedReality.ARTrackedGeometry.GetDebugName
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FName                                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FName UARTrackedGeometry::GetDebugName()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetDebugName");

	UARTrackedGeometry_GetDebugName_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0104D1E0
//		Name   -> Function AugmentedReality.ARPlaneGeometry.GetSubsumedBy
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class UARPlaneGeometry*                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UARPlaneGeometry* UARPlaneGeometry::GetSubsumedBy()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPlaneGeometry.GetSubsumedBy");

	UARPlaneGeometry_GetSubsumedBy_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0104CA00
//		Name   -> Function AugmentedReality.ARPlaneGeometry.GetExtent
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UARPlaneGeometry::GetExtent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPlaneGeometry.GetExtent");

	UARPlaneGeometry_GetExtent_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0104C6C0
//		Name   -> Function AugmentedReality.ARPlaneGeometry.GetCenter
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UARPlaneGeometry::GetCenter()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPlaneGeometry.GetCenter");

	UARPlaneGeometry_GetCenter_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0104C400
//		Name   -> Function AugmentedReality.ARPlaneGeometry.GetBoundaryPolygonInLocalSpace
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		TArray<struct FVector>                             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FVector> UARPlaneGeometry::GetBoundaryPolygonInLocalSpace()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPlaneGeometry.GetBoundaryPolygonInLocalSpace");

	UARPlaneGeometry_GetBoundaryPolygonInLocalSpace_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0104C980
//		Name   -> Function AugmentedReality.ARTrackedImage.GetEstimateSize
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FVector2D                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector2D UARTrackedImage::GetEstimateSize()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedImage.GetEstimateSize");

	UARTrackedImage_GetEstimateSize_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0104C7E0
//		Name   -> Function AugmentedReality.ARTrackedImage.GetDetectedImage
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class UARCandidateImage*                           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UARCandidateImage* UARTrackedImage::GetDetectedImage()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedImage.GetDetectedImage");

	UARTrackedImage_GetDetectedImage_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0104D620
//		Name   -> Function AugmentedReality.ARFaceGeometry.GetWorldSpaceEyeTransform
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		AugmentedReality_EAREye                            Eye                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FTransform                                  ReturnValue                                                (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FTransform UARFaceGeometry::GetWorldSpaceEyeTransform(AugmentedReality_EAREye Eye)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARFaceGeometry.GetWorldSpaceEyeTransform");

	UARFaceGeometry_GetWorldSpaceEyeTransform_Params params {};
	params.Eye = Eye;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0104CBB0
//		Name   -> Function AugmentedReality.ARFaceGeometry.GetLocalSpaceEyeTransform
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		AugmentedReality_EAREye                            Eye                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FTransform                                  ReturnValue                                                (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FTransform UARFaceGeometry::GetLocalSpaceEyeTransform(AugmentedReality_EAREye Eye)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARFaceGeometry.GetLocalSpaceEyeTransform");

	UARFaceGeometry_GetLocalSpaceEyeTransform_Params params {};
	params.Eye = Eye;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0104C260
//		Name   -> Function AugmentedReality.ARFaceGeometry.GetBlendShapeValue
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		AugmentedReality_EARFaceBlendShape                 BlendShape                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UARFaceGeometry::GetBlendShapeValue(AugmentedReality_EARFaceBlendShape BlendShape)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARFaceGeometry.GetBlendShapeValue");

	UARFaceGeometry_GetBlendShapeValue_Params params {};
	params.BlendShape = BlendShape;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0104C2F0
//		Name   -> Function AugmentedReality.ARFaceGeometry.GetBlendShapes
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		TMap<AugmentedReality_EARFaceBlendShape, float>    ReturnValue                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TMap<AugmentedReality_EARFaceBlendShape, float> UARFaceGeometry::GetBlendShapes()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARFaceGeometry.GetBlendShapes");

	UARFaceGeometry_GetBlendShapes_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0104C9C0
//		Name   -> Function AugmentedReality.AREnvironmentCaptureProbe.GetExtent
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UAREnvironmentCaptureProbe::GetExtent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.AREnvironmentCaptureProbe.GetExtent");

	UAREnvironmentCaptureProbe_GetExtent_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0104C950
//		Name   -> Function AugmentedReality.AREnvironmentCaptureProbe.GetEnvironmentCaptureTexture
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UAREnvironmentCaptureProbeTexture*           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAREnvironmentCaptureProbeTexture* UAREnvironmentCaptureProbe::GetEnvironmentCaptureTexture()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.AREnvironmentCaptureProbe.GetEnvironmentCaptureTexture");

	UAREnvironmentCaptureProbe_GetEnvironmentCaptureTexture_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0104C800
//		Name   -> Function AugmentedReality.ARTrackedObject.GetDetectedObject
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class UARCandidateObject*                          ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UARCandidateObject* UARTrackedObject::GetDetectedObject()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedObject.GetDetectedObject");

	UARTrackedObject_GetDetectedObject_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0104D080
//		Name   -> Function AugmentedReality.ARCandidateImage.GetPhysicalWidth
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UARCandidateImage::GetPhysicalWidth()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateImage.GetPhysicalWidth");

	UARCandidateImage_GetPhysicalWidth_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0104D060
//		Name   -> Function AugmentedReality.ARCandidateImage.GetPhysicalHeight
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UARCandidateImage::GetPhysicalHeight()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateImage.GetPhysicalHeight");

	UARCandidateImage_GetPhysicalHeight_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0104D040
//		Name   -> Function AugmentedReality.ARCandidateImage.GetOrientation
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		AugmentedReality_EARCandidateImageOrientation      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
AugmentedReality_EARCandidateImageOrientation UARCandidateImage::GetOrientation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateImage.GetOrientation");

	UARCandidateImage_GetOrientation_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0104CAC0
//		Name   -> Function AugmentedReality.ARCandidateImage.GetFriendlyName
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UARCandidateImage::GetFriendlyName()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateImage.GetFriendlyName");

	UARCandidateImage_GetFriendlyName_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0104C6A0
//		Name   -> Function AugmentedReality.ARCandidateImage.GetCandidateTexture
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class UTexture2D*                                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTexture2D* UARCandidateImage::GetCandidateTexture()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateImage.GetCandidateTexture");

	UARCandidateImage_GetCandidateTexture_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0104E1D0
//		Name   -> Function AugmentedReality.ARCandidateObject.SetCandidateObjectData
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<unsigned char>                              InCandidateObject                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UARCandidateObject::SetCandidateObjectData(TArray<unsigned char> InCandidateObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateObject.SetCandidateObjectData");

	UARCandidateObject_SetCandidateObjectData_Params params {};
	params.InCandidateObject = InCandidateObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0104E130
//		Name   -> Function AugmentedReality.ARCandidateObject.SetBoundingBox
//		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FBox                                        InBoundingBox                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UARCandidateObject::SetBoundingBox(const struct FBox& InBoundingBox)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateObject.SetBoundingBox");

	UARCandidateObject_SetBoundingBox_Params params {};
	params.InBoundingBox = InBoundingBox;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0104CAF0
//		Name   -> Function AugmentedReality.ARCandidateObject.GetFriendlyName
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UARCandidateObject::GetFriendlyName()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateObject.GetFriendlyName");

	UARCandidateObject_GetFriendlyName_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0104C5E0
//		Name   -> Function AugmentedReality.ARCandidateObject.GetCandidateObjectData
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		TArray<unsigned char>                              ReturnValue                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
TArray<unsigned char> UARCandidateObject::GetCandidateObjectData()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateObject.GetCandidateObjectData");

	UARCandidateObject_GetCandidateObjectData_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0104C4C0
//		Name   -> Function AugmentedReality.ARCandidateObject.GetBoundingBox
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FBox                                        ReturnValue                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FBox UARCandidateObject::GetBoundingBox()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateObject.GetBoundingBox");

	UARCandidateObject_GetBoundingBox_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
