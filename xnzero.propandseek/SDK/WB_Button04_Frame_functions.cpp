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
//		Name   -> Function WB_Button04_Frame.WB_Button04_Frame_C.UpdateShineFX
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bEnable                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_Button04_Frame_C::UpdateShineFX(bool bEnable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Frame.WB_Button04_Frame_C.UpdateShineFX");

	UWB_Button04_Frame_C_UpdateShineFX_Params params {};
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_Frame.WB_Button04_Frame_C.UpdateShineFX_State
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                InColor1                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                InColor2                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                InColor3                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button04_Frame_C::UpdateShineFX_State(const struct FLinearColor& InColor1, const struct FLinearColor& InColor2, const struct FLinearColor& InColor3)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Frame.WB_Button04_Frame_C.UpdateShineFX_State");

	UWB_Button04_Frame_C_UpdateShineFX_State_Params params {};
	params.InColor1 = InColor1;
	params.InColor2 = InColor2;
	params.InColor3 = InColor3;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_Frame.WB_Button04_Frame_C.HasColor
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FLinearColor                                InColor                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWB_Button04_Frame_C::HasColor(const struct FLinearColor& InColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Frame.WB_Button04_Frame_C.HasColor");

	UWB_Button04_Frame_C_HasColor_Params params {};
	params.InColor = InColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_Frame.WB_Button04_Frame_C.UpdateShineFX_Color
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                ShineFX_ColorBG                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                ShineFX_ColorSmall                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                ShineFX_ColorBig                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button04_Frame_C::UpdateShineFX_Color(const struct FLinearColor& ShineFX_ColorBG, const struct FLinearColor& ShineFX_ColorSmall, const struct FLinearColor& ShineFX_ColorBig)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Frame.WB_Button04_Frame_C.UpdateShineFX_Color");

	UWB_Button04_Frame_C_UpdateShineFX_Color_Params params {};
	params.ShineFX_ColorBG = ShineFX_ColorBG;
	params.ShineFX_ColorSmall = ShineFX_ColorSmall;
	params.ShineFX_ColorBig = ShineFX_ColorBig;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_Frame.WB_Button04_Frame_C.UpdateShineFX_Method
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<EShineFXMethod_EShineFXMethod>         EShineFXMethod                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button04_Frame_C::UpdateShineFX_Method(TEnumAsByte<EShineFXMethod_EShineFXMethod> EShineFXMethod)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Frame.WB_Button04_Frame_C.UpdateShineFX_Method");

	UWB_Button04_Frame_C_UpdateShineFX_Method_Params params {};
	params.EShineFXMethod = EShineFXMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_Frame.WB_Button04_Frame_C.Set_ShineColor
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                FrameColor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button04_Frame_C::Set_ShineColor(const struct FLinearColor& FrameColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Frame.WB_Button04_Frame_C.Set_ShineColor");

	UWB_Button04_Frame_C_Set_ShineColor_Params params {};
	params.FrameColor = FrameColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_Frame.WB_Button04_Frame_C.Set_DynamicFrameColor
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                FrameColor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button04_Frame_C::Set_DynamicFrameColor(const struct FLinearColor& FrameColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Frame.WB_Button04_Frame_C.Set_DynamicFrameColor");

	UWB_Button04_Frame_C_Set_DynamicFrameColor_Params params {};
	params.FrameColor = FrameColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_Frame.WB_Button04_Frame_C.Set_FrameColor
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                FrameColor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button04_Frame_C::Set_FrameColor(const struct FLinearColor& FrameColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Frame.WB_Button04_Frame_C.Set_FrameColor");

	UWB_Button04_Frame_C_Set_FrameColor_Params params {};
	params.FrameColor = FrameColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_Frame.WB_Button04_Frame_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_Button04_Frame_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Frame.WB_Button04_Frame_C.PreConstruct");

	UWB_Button04_Frame_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_Frame.WB_Button04_Frame_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWB_Button04_Frame_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Frame.WB_Button04_Frame_C.Construct");

	UWB_Button04_Frame_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_Frame.WB_Button04_Frame_C.OnHovered
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWB_Button04_Frame_C::OnHovered()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Frame.WB_Button04_Frame_C.OnHovered");

	UWB_Button04_Frame_C_OnHovered_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_Frame.WB_Button04_Frame_C.OnClicked
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWB_Button04_Frame_C::OnClicked()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Frame.WB_Button04_Frame_C.OnClicked");

	UWB_Button04_Frame_C_OnClicked_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_Frame.WB_Button04_Frame_C.OnUnhovered
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWB_Button04_Frame_C::OnUnhovered()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Frame.WB_Button04_Frame_C.OnUnhovered");

	UWB_Button04_Frame_C_OnUnhovered_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_Frame.WB_Button04_Frame_C.OnDisabled
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWB_Button04_Frame_C::OnDisabled()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Frame.WB_Button04_Frame_C.OnDisabled");

	UWB_Button04_Frame_C_OnDisabled_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_Frame.WB_Button04_Frame_C.UpdateFrameThickness
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              FrameThickness                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button04_Frame_C::UpdateFrameThickness(float FrameThickness)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Frame.WB_Button04_Frame_C.UpdateFrameThickness");

	UWB_Button04_Frame_C_UpdateFrameThickness_Params params {};
	params.FrameThickness = FrameThickness;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_Frame.WB_Button04_Frame_C.ExecuteUbergraph_WB_Button04_Frame
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button04_Frame_C::ExecuteUbergraph_WB_Button04_Frame(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Frame.WB_Button04_Frame_C.ExecuteUbergraph_WB_Button04_Frame");

	UWB_Button04_Frame_C_ExecuteUbergraph_WB_Button04_Frame_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
