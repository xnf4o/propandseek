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
//		Offset -> 0x0123AE80
//		Name   -> Function Landscape.LandscapeProxy.SetLandscapeMaterialVectorParameterValue
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FName                                       ParameterName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLinearColor                                Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ALandscapeProxy::SetLandscapeMaterialVectorParameterValue(const struct FName& ParameterName, const struct FLinearColor& Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.SetLandscapeMaterialVectorParameterValue");

	ALandscapeProxy_SetLandscapeMaterialVectorParameterValue_Params params {};
	params.ParameterName = ParameterName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0123ADC0
//		Name   -> Function Landscape.LandscapeProxy.SetLandscapeMaterialTextureParameterValue
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FName                                       ParameterName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UTexture*                                    Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ALandscapeProxy::SetLandscapeMaterialTextureParameterValue(const struct FName& ParameterName, class UTexture* Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.SetLandscapeMaterialTextureParameterValue");

	ALandscapeProxy_SetLandscapeMaterialTextureParameterValue_Params params {};
	params.ParameterName = ParameterName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0123ACF0
//		Name   -> Function Landscape.LandscapeProxy.SetLandscapeMaterialScalarParameterValue
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FName                                       ParameterName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ALandscapeProxy::SetLandscapeMaterialScalarParameterValue(const struct FName& ParameterName, float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.SetLandscapeMaterialScalarParameterValue");

	ALandscapeProxy_SetLandscapeMaterialScalarParameterValue_Params params {};
	params.ParameterName = ParameterName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0123ABE0
//		Name   -> Function Landscape.LandscapeProxy.EditorSetLandscapeMaterial
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UMaterialInterface*                          NewLandscapeMaterial                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ALandscapeProxy::EditorSetLandscapeMaterial(class UMaterialInterface* NewLandscapeMaterial)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.EditorSetLandscapeMaterial");

	ALandscapeProxy_EditorSetLandscapeMaterial_Params params {};
	params.NewLandscapeMaterial = NewLandscapeMaterial;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0123A8D0
//		Name   -> Function Landscape.LandscapeProxy.EditorApplySpline
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class USplineComponent*                            InSplineComponent                                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              StartWidth                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              EndWidth                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              StartSideFalloff                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              EndSideFalloff                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              StartRoll                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              EndRoll                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                NumSubdivisions                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bRaiseHeights                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bLowerHeights                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ULandscapeLayerInfoObject*                   PaintLayer                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ALandscapeProxy::EditorApplySpline(class USplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, class ULandscapeLayerInfoObject* PaintLayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.EditorApplySpline");

	ALandscapeProxy_EditorApplySpline_Params params {};
	params.InSplineComponent = InSplineComponent;
	params.StartWidth = StartWidth;
	params.EndWidth = EndWidth;
	params.StartSideFalloff = StartSideFalloff;
	params.EndSideFalloff = EndSideFalloff;
	params.StartRoll = StartRoll;
	params.EndRoll = EndRoll;
	params.NumSubdivisions = NumSubdivisions;
	params.bRaiseHeights = bRaiseHeights;
	params.bLowerHeights = bLowerHeights;
	params.PaintLayer = PaintLayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0123A840
//		Name   -> Function Landscape.LandscapeProxy.ChangeUseTessellationComponentScreenSizeFalloff
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               InComponentScreenSizeToUseSubSections                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ALandscapeProxy::ChangeUseTessellationComponentScreenSizeFalloff(bool InComponentScreenSizeToUseSubSections)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.ChangeUseTessellationComponentScreenSizeFalloff");

	ALandscapeProxy_ChangeUseTessellationComponentScreenSizeFalloff_Params params {};
	params.InComponentScreenSizeToUseSubSections = InComponentScreenSizeToUseSubSections;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0123A7C0
//		Name   -> Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSizeFalloff
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		float                                              InUseTessellationComponentScreenSizeFalloff                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ALandscapeProxy::ChangeTessellationComponentScreenSizeFalloff(float InUseTessellationComponentScreenSizeFalloff)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSizeFalloff");

	ALandscapeProxy_ChangeTessellationComponentScreenSizeFalloff_Params params {};
	params.InUseTessellationComponentScreenSizeFalloff = InUseTessellationComponentScreenSizeFalloff;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0123A740
//		Name   -> Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSize
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		float                                              InTessellationComponentScreenSize                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ALandscapeProxy::ChangeTessellationComponentScreenSize(float InTessellationComponentScreenSize)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSize");

	ALandscapeProxy_ChangeTessellationComponentScreenSize_Params params {};
	params.InTessellationComponentScreenSize = InTessellationComponentScreenSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0123A6C0
//		Name   -> Function Landscape.LandscapeProxy.ChangeLODDistanceFactor
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		float                                              InLODDistanceFactor                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ALandscapeProxy::ChangeLODDistanceFactor(float InLODDistanceFactor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.ChangeLODDistanceFactor");

	ALandscapeProxy_ChangeLODDistanceFactor_Params params {};
	params.InLODDistanceFactor = InLODDistanceFactor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0123A640
//		Name   -> Function Landscape.LandscapeProxy.ChangeComponentScreenSizeToUseSubSections
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		float                                              InComponentScreenSizeToUseSubSections                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ALandscapeProxy::ChangeComponentScreenSizeToUseSubSections(float InComponentScreenSizeToUseSubSections)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.ChangeComponentScreenSizeToUseSubSections");

	ALandscapeProxy_ChangeComponentScreenSizeToUseSubSections_Params params {};
	params.InComponentScreenSizeToUseSubSections = InComponentScreenSizeToUseSubSections;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Landscape.LandscapeBlueprintCustomBrush.Render
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               InIsHeightmap                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UTextureRenderTarget2D*                      InCombinedResult                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UTextureRenderTarget2D*                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTextureRenderTarget2D* ALandscapeBlueprintCustomBrush::Render(bool InIsHeightmap, class UTextureRenderTarget2D* InCombinedResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeBlueprintCustomBrush.Render");

	ALandscapeBlueprintCustomBrush_Render_Params params {};
	params.InIsHeightmap = InIsHeightmap;
	params.InCombinedResult = InCombinedResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Landscape.LandscapeBlueprintCustomBrush.Initialize
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
//		struct FIntPoint                                   InLandscapeSize                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FIntPoint                                   InLandscapeRenderTargetSize                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ALandscapeBlueprintCustomBrush::Initialize(const struct FIntPoint& InLandscapeSize, const struct FIntPoint& InLandscapeRenderTargetSize)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeBlueprintCustomBrush.Initialize");

	ALandscapeBlueprintCustomBrush_Initialize_Params params {};
	params.InLandscapeSize = InLandscapeSize;
	params.InLandscapeRenderTargetSize = InLandscapeRenderTargetSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0123AC60
//		Name   -> Function Landscape.LandscapeComponent.GetMaterialInstanceDynamic
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                InIndex                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UMaterialInstanceDynamic*                    ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMaterialInstanceDynamic* ULandscapeComponent::GetMaterialInstanceDynamic(int InIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeComponent.GetMaterialInstanceDynamic");

	ULandscapeComponent_GetMaterialInstanceDynamic_Params params {};
	params.InIndex = InIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0123C760
//		Name   -> Function Landscape.LandscapeSplinesComponent.GetSplineMeshComponents
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TArray<class USplineMeshComponent*>                ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
TArray<class USplineMeshComponent*> ULandscapeSplinesComponent::GetSplineMeshComponents()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeSplinesComponent.GetSplineMeshComponents");

	ULandscapeSplinesComponent_GetSplineMeshComponents_Params params {};

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
