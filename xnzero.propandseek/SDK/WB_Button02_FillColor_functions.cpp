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
//		Name   -> Function WB_Button02_FillColor.WB_Button02_FillColor_C.SetFillColor
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button02_FillColor_C::SetFillColor(const struct FLinearColor& Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_FillColor.WB_Button02_FillColor_C.SetFillColor");

	UWB_Button02_FillColor_C_SetFillColor_Params params {};
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button02_FillColor.WB_Button02_FillColor_C.AddColorV_Value
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FLinearColor                                InColor                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              ExtraV                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                OutColor                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button02_FillColor_C::AddColorV_Value(const struct FLinearColor& InColor, float ExtraV, struct FLinearColor* OutColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_FillColor.WB_Button02_FillColor_C.AddColorV_Value");

	UWB_Button02_FillColor_C_AddColorV_Value_Params params {};
	params.InColor = InColor;
	params.ExtraV = ExtraV;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutColor != nullptr)
		*OutColor = params.OutColor;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button02_FillColor.WB_Button02_FillColor_C.OnUnhovered
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWB_Button02_FillColor_C::OnUnhovered()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_FillColor.WB_Button02_FillColor_C.OnUnhovered");

	UWB_Button02_FillColor_C_OnUnhovered_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button02_FillColor.WB_Button02_FillColor_C.OnClicked
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWB_Button02_FillColor_C::OnClicked()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_FillColor.WB_Button02_FillColor_C.OnClicked");

	UWB_Button02_FillColor_C_OnClicked_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button02_FillColor.WB_Button02_FillColor_C.OnHovered
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWB_Button02_FillColor_C::OnHovered()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_FillColor.WB_Button02_FillColor_C.OnHovered");

	UWB_Button02_FillColor_C_OnHovered_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button02_FillColor.WB_Button02_FillColor_C.OnDisabled
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWB_Button02_FillColor_C::OnDisabled()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_FillColor.WB_Button02_FillColor_C.OnDisabled");

	UWB_Button02_FillColor_C_OnDisabled_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button02_FillColor.WB_Button02_FillColor_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWB_Button02_FillColor_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_FillColor.WB_Button02_FillColor_C.Construct");

	UWB_Button02_FillColor_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button02_FillColor.WB_Button02_FillColor_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_Button02_FillColor_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_FillColor.WB_Button02_FillColor_C.PreConstruct");

	UWB_Button02_FillColor_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button02_FillColor.WB_Button02_FillColor_C.ExecuteUbergraph_WB_Button02_FillColor
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button02_FillColor_C::ExecuteUbergraph_WB_Button02_FillColor(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_FillColor.WB_Button02_FillColor_C.ExecuteUbergraph_WB_Button02_FillColor");

	UWB_Button02_FillColor_C_ExecuteUbergraph_WB_Button02_FillColor_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
