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
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_LightFX.WB_LightFX_C.CreateLightFX
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_LightFX_C::CreateLightFX(const struct FLinearColor& Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_LightFX.WB_LightFX_C.CreateLightFX");

	UWB_LightFX_C_CreateLightFX_Params params {};
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_LightFX.WB_LightFX_C.OnAnimationFinished
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
//		class UWidgetAnimation*                            Animation                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_LightFX_C::OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_LightFX.WB_LightFX_C.OnAnimationFinished");

	UWB_LightFX_C_OnAnimationFinished_Params params {};
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_LightFX.WB_LightFX_C.ResetTimer
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWB_LightFX_C::ResetTimer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_LightFX.WB_LightFX_C.ResetTimer");

	UWB_LightFX_C_ResetTimer_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_LightFX.WB_LightFX_C.UpdateLightMaterial
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWB_LightFX_C::UpdateLightMaterial()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_LightFX.WB_LightFX_C.UpdateLightMaterial");

	UWB_LightFX_C_UpdateLightMaterial_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_LightFX.WB_LightFX_C.ExecuteUbergraph_WB_LightFX
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_LightFX_C::ExecuteUbergraph_WB_LightFX(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_LightFX.WB_LightFX_C.ExecuteUbergraph_WB_LightFX");

	UWB_LightFX_C_ExecuteUbergraph_WB_LightFX_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
