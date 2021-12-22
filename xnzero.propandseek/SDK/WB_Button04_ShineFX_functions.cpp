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
//		Name   -> Function WB_Button04_ShineFX.WB_Button04_ShineFX_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWB_Button04_ShineFX_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_ShineFX.WB_Button04_ShineFX_C.Construct");

	UWB_Button04_ShineFX_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_ShineFX.WB_Button04_ShineFX_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_Button04_ShineFX_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_ShineFX.WB_Button04_ShineFX_C.PreConstruct");

	UWB_Button04_ShineFX_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_ShineFX.WB_Button04_ShineFX_C.UpdateShineFX
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bEnable                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_Button04_ShineFX_C::UpdateShineFX(bool bEnable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_ShineFX.WB_Button04_ShineFX_C.UpdateShineFX");

	UWB_Button04_ShineFX_C_UpdateShineFX_Params params {};
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_ShineFX.WB_Button04_ShineFX_C.UpdateShineColor
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                ShineFX_BG_Color                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                ShineFX_ShineColor_Small                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                ShineFX_ShineColor_Big                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button04_ShineFX_C::UpdateShineColor(const struct FLinearColor& ShineFX_BG_Color, const struct FLinearColor& ShineFX_ShineColor_Small, const struct FLinearColor& ShineFX_ShineColor_Big)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_ShineFX.WB_Button04_ShineFX_C.UpdateShineColor");

	UWB_Button04_ShineFX_C_UpdateShineColor_Params params {};
	params.ShineFX_BG_Color = ShineFX_BG_Color;
	params.ShineFX_ShineColor_Small = ShineFX_ShineColor_Small;
	params.ShineFX_ShineColor_Big = ShineFX_ShineColor_Big;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_ShineFX.WB_Button04_ShineFX_C.ExecuteUbergraph_WB_Button04_ShineFX
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button04_ShineFX_C::ExecuteUbergraph_WB_Button04_ShineFX(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_ShineFX.WB_Button04_ShineFX_C.ExecuteUbergraph_WB_Button04_ShineFX");

	UWB_Button04_ShineFX_C_ExecuteUbergraph_WB_Button04_ShineFX_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
