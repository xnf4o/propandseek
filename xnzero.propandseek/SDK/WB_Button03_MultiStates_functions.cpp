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
//		Name   -> Function WB_Button03_MultiStates.WB_Button03_MultiStates_C.SetButtonsEnabled
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               BIsEnabled                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_Button03_MultiStates_C::SetButtonsEnabled(bool BIsEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_MultiStates.WB_Button03_MultiStates_C.SetButtonsEnabled");

	UWB_Button03_MultiStates_C_SetButtonsEnabled_Params params {};
	params.BIsEnabled = BIsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_MultiStates.WB_Button03_MultiStates_C.SetButtonIcon
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UObject*                                     Icon                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button03_MultiStates_C::SetButtonIcon(class UObject* Icon)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_MultiStates.WB_Button03_MultiStates_C.SetButtonIcon");

	UWB_Button03_MultiStates_C_SetButtonIcon_Params params {};
	params.Icon = Icon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_MultiStates.WB_Button03_MultiStates_C.ConvertOpacityToNormal
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FLinearColor                                InColor                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FLinearColor UWB_Button03_MultiStates_C::ConvertOpacityToNormal(const struct FLinearColor& InColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_MultiStates.WB_Button03_MultiStates_C.ConvertOpacityToNormal");

	UWB_Button03_MultiStates_C_ConvertOpacityToNormal_Params params {};
	params.InColor = InColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_MultiStates.WB_Button03_MultiStates_C.GetNavStateKeys
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		TArray<struct FName>                               Keys                                                       (Parm, OutParm, ZeroConstructor)
void UWB_Button03_MultiStates_C::GetNavStateKeys(TArray<struct FName>* Keys)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_MultiStates.WB_Button03_MultiStates_C.GetNavStateKeys");

	UWB_Button03_MultiStates_C_GetNavStateKeys_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Keys != nullptr)
		*Keys = params.Keys;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_MultiStates.WB_Button03_MultiStates_C.GetNavStateValues
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		TArray<class UWB_NavState_C*>                      Values                                                     (Parm, OutParm, ZeroConstructor)
void UWB_Button03_MultiStates_C::GetNavStateValues(TArray<class UWB_NavState_C*>* Values)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_MultiStates.WB_Button03_MultiStates_C.GetNavStateValues");

	UWB_Button03_MultiStates_C_GetNavStateValues_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Values != nullptr)
		*Values = params.Values;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_MultiStates.WB_Button03_MultiStates_C.Set_FontInfoHovered
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWB_Button03_MultiStates_C::Set_FontInfoHovered()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_MultiStates.WB_Button03_MultiStates_C.Set_FontInfoHovered");

	UWB_Button03_MultiStates_C_Set_FontInfoHovered_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_MultiStates.WB_Button03_MultiStates_C.Set_FontInfoNormal
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWB_Button03_MultiStates_C::Set_FontInfoNormal()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_MultiStates.WB_Button03_MultiStates_C.Set_FontInfoNormal");

	UWB_Button03_MultiStates_C_Set_FontInfoNormal_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_MultiStates.WB_Button03_MultiStates_C.HandleFontInfo
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UObject*                                     Font                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UFontFace*                                   FontFace                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                FontSize                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button03_MultiStates_C::HandleFontInfo(class UObject* Font, class UFontFace* FontFace, int FontSize, const struct FLinearColor& Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_MultiStates.WB_Button03_MultiStates_C.HandleFontInfo");

	UWB_Button03_MultiStates_C_HandleFontInfo_Params params {};
	params.Font = Font;
	params.FontFace = FontFace;
	params.FontSize = FontSize;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_MultiStates.WB_Button03_MultiStates_C.HasAnyFocus
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWB_Button03_MultiStates_C::HasAnyFocus()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_MultiStates.WB_Button03_MultiStates_C.HasAnyFocus");

	UWB_Button03_MultiStates_C_HasAnyFocus_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_MultiStates.WB_Button03_MultiStates_C.OnKeyDown
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWB_Button03_MultiStates_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_MultiStates.WB_Button03_MultiStates_C.OnKeyDown");

	UWB_Button03_MultiStates_C_OnKeyDown_Params params {};
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_MultiStates.WB_Button03_MultiStates_C.GetCurrentStateByName
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FName                                       State                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button03_MultiStates_C::GetCurrentStateByName(struct FName* State)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_MultiStates.WB_Button03_MultiStates_C.GetCurrentStateByName");

	UWB_Button03_MultiStates_C_GetCurrentStateByName_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (State != nullptr)
		*State = params.State;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_MultiStates.WB_Button03_MultiStates_C.GetCurrentStateByIndex
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int UWB_Button03_MultiStates_C::GetCurrentStateByIndex()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_MultiStates.WB_Button03_MultiStates_C.GetCurrentStateByIndex");

	UWB_Button03_MultiStates_C_GetCurrentStateByIndex_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_MultiStates.WB_Button03_MultiStates_C.SetAllButtonIconColor
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button03_MultiStates_C::SetAllButtonIconColor(const struct FLinearColor& Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_MultiStates.WB_Button03_MultiStates_C.SetAllButtonIconColor");

	UWB_Button03_MultiStates_C_SetAllButtonIconColor_Params params {};
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_MultiStates.WB_Button03_MultiStates_C.GetButtonRight
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UButton*                                     Native_Button                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button03_MultiStates_C::GetButtonRight(class UButton** Native_Button)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_MultiStates.WB_Button03_MultiStates_C.GetButtonRight");

	UWB_Button03_MultiStates_C_GetButtonRight_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Native_Button != nullptr)
		*Native_Button = params.Native_Button;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_MultiStates.WB_Button03_MultiStates_C.GetButtonLeft
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UButton*                                     Native_Button                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button03_MultiStates_C::GetButtonLeft(class UButton** Native_Button)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_MultiStates.WB_Button03_MultiStates_C.GetButtonLeft");

	UWB_Button03_MultiStates_C_GetButtonLeft_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Native_Button != nullptr)
		*Native_Button = params.Native_Button;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_MultiStates.WB_Button03_MultiStates_C.CheckFocus
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWB_Button03_MultiStates_C::CheckFocus()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_MultiStates.WB_Button03_MultiStates_C.CheckFocus");

	UWB_Button03_MultiStates_C_CheckFocus_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_MultiStates.WB_Button03_MultiStates_C.BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWB_Button03_MultiStates_C::BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_MultiStates.WB_Button03_MultiStates_C.BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature");

	UWB_Button03_MultiStates_C_BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_MultiStates.WB_Button03_MultiStates_C.BndEvt__ButtonRight_K2Node_ComponentBoundEvent_4_OnHovered__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWB_Button03_MultiStates_C::BndEvt__ButtonRight_K2Node_ComponentBoundEvent_4_OnHovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_MultiStates.WB_Button03_MultiStates_C.BndEvt__ButtonRight_K2Node_ComponentBoundEvent_4_OnHovered__DelegateSignature");

	UWB_Button03_MultiStates_C_BndEvt__ButtonRight_K2Node_ComponentBoundEvent_4_OnHovered__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_MultiStates.WB_Button03_MultiStates_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWB_Button03_MultiStates_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_MultiStates.WB_Button03_MultiStates_C.Construct");

	UWB_Button03_MultiStates_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_MultiStates.WB_Button03_MultiStates_C.BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWB_Button03_MultiStates_C::BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_MultiStates.WB_Button03_MultiStates_C.BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature");

	UWB_Button03_MultiStates_C_BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_MultiStates.WB_Button03_MultiStates_C.BndEvt__ButtonRight_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWB_Button03_MultiStates_C::BndEvt__ButtonRight_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_MultiStates.WB_Button03_MultiStates_C.BndEvt__ButtonRight_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature");

	UWB_Button03_MultiStates_C_BndEvt__ButtonRight_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_MultiStates.WB_Button03_MultiStates_C.InitStates
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<struct FName>                               States                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UWB_Button03_MultiStates_C::InitStates(TArray<struct FName> States)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_MultiStates.WB_Button03_MultiStates_C.InitStates");

	UWB_Button03_MultiStates_C_InitStates_Params params {};
	params.States = States;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_MultiStates.WB_Button03_MultiStates_C.SetNewStateText
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
//		bool                                               bIncrease                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_Button03_MultiStates_C::SetNewStateText(const struct FText& InText, bool bIncrease)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_MultiStates.WB_Button03_MultiStates_C.SetNewStateText");

	UWB_Button03_MultiStates_C_SetNewStateText_Params params {};
	params.InText = InText;
	params.bIncrease = bIncrease;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_MultiStates.WB_Button03_MultiStates_C.SetStateByIndex
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                State_Index                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bExecute                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_Button03_MultiStates_C::SetStateByIndex(int State_Index, bool bExecute)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_MultiStates.WB_Button03_MultiStates_C.SetStateByIndex");

	UWB_Button03_MultiStates_C_SetStateByIndex_Params params {};
	params.State_Index = State_Index;
	params.bExecute = bExecute;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_MultiStates.WB_Button03_MultiStates_C.SetStateByName
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       State_Name                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bExecute                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_Button03_MultiStates_C::SetStateByName(const struct FName& State_Name, bool bExecute)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_MultiStates.WB_Button03_MultiStates_C.SetStateByName");

	UWB_Button03_MultiStates_C_SetStateByName_Params params {};
	params.State_Name = State_Name;
	params.bExecute = bExecute;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_MultiStates.WB_Button03_MultiStates_C.ClickLeft
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWB_Button03_MultiStates_C::ClickLeft()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_MultiStates.WB_Button03_MultiStates_C.ClickLeft");

	UWB_Button03_MultiStates_C_ClickLeft_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_MultiStates.WB_Button03_MultiStates_C.ClickRight
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWB_Button03_MultiStates_C::ClickRight()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_MultiStates.WB_Button03_MultiStates_C.ClickRight");

	UWB_Button03_MultiStates_C_ClickRight_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_MultiStates.WB_Button03_MultiStates_C.HandleNavigationOverview
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bUseNavOverview                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              NavOverviewRoom                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                NavStateColor_Normal_Active                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                NavStateColor_Hovered_Active                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button03_MultiStates_C::HandleNavigationOverview(bool bUseNavOverview, float NavOverviewRoom, const struct FLinearColor& NavStateColor_Normal_Active, const struct FLinearColor& NavStateColor_Hovered_Active)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_MultiStates.WB_Button03_MultiStates_C.HandleNavigationOverview");

	UWB_Button03_MultiStates_C_HandleNavigationOverview_Params params {};
	params.bUseNavOverview = bUseNavOverview;
	params.NavOverviewRoom = NavOverviewRoom;
	params.NavStateColor_Normal_Active = NavStateColor_Normal_Active;
	params.NavStateColor_Hovered_Active = NavStateColor_Hovered_Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_MultiStates.WB_Button03_MultiStates_C.CheckNavStateColor
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWB_Button03_MultiStates_C::CheckNavStateColor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_MultiStates.WB_Button03_MultiStates_C.CheckNavStateColor");

	UWB_Button03_MultiStates_C_CheckNavStateColor_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_MultiStates.WB_Button03_MultiStates_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_Button03_MultiStates_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_MultiStates.WB_Button03_MultiStates_C.PreConstruct");

	UWB_Button03_MultiStates_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_MultiStates.WB_Button03_MultiStates_C.ExecuteUbergraph_WB_Button03_MultiStates
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button03_MultiStates_C::ExecuteUbergraph_WB_Button03_MultiStates(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_MultiStates.WB_Button03_MultiStates_C.ExecuteUbergraph_WB_Button03_MultiStates");

	UWB_Button03_MultiStates_C_ExecuteUbergraph_WB_Button03_MultiStates_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_MultiStates.WB_Button03_MultiStates_C.OnStateChanged__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       State_Name                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                State_Index                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button03_MultiStates_C::OnStateChanged__DelegateSignature(const struct FName& State_Name, int State_Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_MultiStates.WB_Button03_MultiStates_C.OnStateChanged__DelegateSignature");

	UWB_Button03_MultiStates_C_OnStateChanged__DelegateSignature_Params params {};
	params.State_Name = State_Name;
	params.State_Index = State_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_MultiStates.WB_Button03_MultiStates_C.OnHovered__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWB_Button03_MultiStates_C::OnHovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_MultiStates.WB_Button03_MultiStates_C.OnHovered__DelegateSignature");

	UWB_Button03_MultiStates_C_OnHovered__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
