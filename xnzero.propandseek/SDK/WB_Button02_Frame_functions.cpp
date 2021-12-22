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
//		Name   -> Function WB_Button02_Frame.WB_Button02_Frame_C.Set_UseShine
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bUseShine                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_Button02_Frame_C::Set_UseShine(bool bUseShine)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_Frame.WB_Button02_Frame_C.Set_UseShine");

	UWB_Button02_Frame_C_Set_UseShine_Params params {};
	params.bUseShine = bUseShine;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button02_Frame.WB_Button02_Frame_C.Set_FrameColor
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                FrameColor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button02_Frame_C::Set_FrameColor(const struct FLinearColor& FrameColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_Frame.WB_Button02_Frame_C.Set_FrameColor");

	UWB_Button02_Frame_C_Set_FrameColor_Params params {};
	params.FrameColor = FrameColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button02_Frame.WB_Button02_Frame_C.Set_FrameShineColor
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                FrameShineColor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button02_Frame_C::Set_FrameShineColor(const struct FLinearColor& FrameShineColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_Frame.WB_Button02_Frame_C.Set_FrameShineColor");

	UWB_Button02_Frame_C_Set_FrameShineColor_Params params {};
	params.FrameShineColor = FrameShineColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button02_Frame.WB_Button02_Frame_C.GetImageDynamicMaterial
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UMaterialInstanceDynamic*                    DynamicMaterial                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UImage*                                      Image                                                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button02_Frame_C::GetImageDynamicMaterial(class UMaterialInstanceDynamic** DynamicMaterial, class UImage** Image)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_Frame.WB_Button02_Frame_C.GetImageDynamicMaterial");

	UWB_Button02_Frame_C_GetImageDynamicMaterial_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DynamicMaterial != nullptr)
		*DynamicMaterial = params.DynamicMaterial;
	if (Image != nullptr)
		*Image = params.Image;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button02_Frame.WB_Button02_Frame_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_Button02_Frame_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_Frame.WB_Button02_Frame_C.PreConstruct");

	UWB_Button02_Frame_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button02_Frame.WB_Button02_Frame_C.CreateShine
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWB_Button02_Frame_C::CreateShine()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_Frame.WB_Button02_Frame_C.CreateShine");

	UWB_Button02_Frame_C_CreateShine_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button02_Frame.WB_Button02_Frame_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWB_Button02_Frame_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_Frame.WB_Button02_Frame_C.Construct");

	UWB_Button02_Frame_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button02_Frame.WB_Button02_Frame_C.OnHovered
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWB_Button02_Frame_C::OnHovered()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_Frame.WB_Button02_Frame_C.OnHovered");

	UWB_Button02_Frame_C_OnHovered_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button02_Frame.WB_Button02_Frame_C.OnClicked
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWB_Button02_Frame_C::OnClicked()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_Frame.WB_Button02_Frame_C.OnClicked");

	UWB_Button02_Frame_C_OnClicked_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button02_Frame.WB_Button02_Frame_C.OnUnhovered
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWB_Button02_Frame_C::OnUnhovered()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_Frame.WB_Button02_Frame_C.OnUnhovered");

	UWB_Button02_Frame_C_OnUnhovered_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button02_Frame.WB_Button02_Frame_C.OnDisabled
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWB_Button02_Frame_C::OnDisabled()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_Frame.WB_Button02_Frame_C.OnDisabled");

	UWB_Button02_Frame_C_OnDisabled_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button02_Frame.WB_Button02_Frame_C.UpdateDynamicShine
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWB_Button02_Frame_C::UpdateDynamicShine()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_Frame.WB_Button02_Frame_C.UpdateDynamicShine");

	UWB_Button02_Frame_C_UpdateDynamicShine_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button02_Frame.WB_Button02_Frame_C.ResetTimer
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWB_Button02_Frame_C::ResetTimer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_Frame.WB_Button02_Frame_C.ResetTimer");

	UWB_Button02_Frame_C_ResetTimer_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button02_Frame.WB_Button02_Frame_C.ExecuteUbergraph_WB_Button02_Frame
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button02_Frame_C::ExecuteUbergraph_WB_Button02_Frame(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_Frame.WB_Button02_Frame_C.ExecuteUbergraph_WB_Button02_Frame");

	UWB_Button02_Frame_C_ExecuteUbergraph_WB_Button02_Frame_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
