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
//		Name   -> Function SessionCreator2.SessionCreator2_C.EnableLicenseFeatures
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Enable_                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void USessionCreator2_C::EnableLicenseFeatures(bool Enable_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SessionCreator2.SessionCreator2_C.EnableLicenseFeatures");

	USessionCreator2_C_EnableLicenseFeatures_Params params {};
	params.Enable_ = Enable_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function SessionCreator2.SessionCreator2_C.BadWordFilter
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     Input                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		bool                                               Invalid_                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void USessionCreator2_C::BadWordFilter(const struct FString& Input, bool* Invalid_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SessionCreator2.SessionCreator2_C.BadWordFilter");

	USessionCreator2_C_BadWordFilter_Params params {};
	params.Input = Input;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Invalid_ != nullptr)
		*Invalid_ = params.Invalid_;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function SessionCreator2.SessionCreator2_C.GI
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UGI2_C*                                      AsGI2                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USessionCreator2_C::GI(class UGI2_C** AsGI2)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SessionCreator2.SessionCreator2_C.GI");

	USessionCreator2_C_GI_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsGI2 != nullptr)
		*AsGI2 = params.AsGI2;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function SessionCreator2.SessionCreator2_C.PC
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class ALobbyPC2_C*                                 AsLobby_PC1                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USessionCreator2_C::PC(class ALobbyPC2_C** AsLobby_PC1)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SessionCreator2.SessionCreator2_C.PC");

	USessionCreator2_C_PC_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsLobby_PC1 != nullptr)
		*AsLobby_PC1 = params.AsLobby_PC1;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function SessionCreator2.SessionCreator2_C.NumberFromPercentage
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Min                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Max                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Number                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USessionCreator2_C::NumberFromPercentage(int Min, int Max, float Value, int* Number)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SessionCreator2.SessionCreator2_C.NumberFromPercentage");

	USessionCreator2_C_NumberFromPercentage_Params params {};
	params.Min = Min;
	params.Max = Max;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Number != nullptr)
		*Number = params.Number;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function SessionCreator2.SessionCreator2_C.SliderPercentage
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Min                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Max                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Input                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USessionCreator2_C::SliderPercentage(int Min, int Max, int Input, float* Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SessionCreator2.SessionCreator2_C.SliderPercentage");

	USessionCreator2_C_SliderPercentage_Params params {};
	params.Min = Min;
	params.Max = Max;
	params.Input = Input;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function SessionCreator2.SessionCreator2_C.CheckValidity
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       Input_text                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		int                                                Min                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Max                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               IsValid_                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void USessionCreator2_C::CheckValidity(const struct FText& Input_text, int Min, int Max, bool* IsValid_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SessionCreator2.SessionCreator2_C.CheckValidity");

	USessionCreator2_C_CheckValidity_Params params {};
	params.Input_text = Input_text;
	params.Min = Min;
	params.Max = Max;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsValid_ != nullptr)
		*IsValid_ = params.IsValid_;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function SessionCreator2.SessionCreator2_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void USessionCreator2_C::BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SessionCreator2.SessionCreator2_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	USessionCreator2_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function SessionCreator2.SessionCreator2_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void USessionCreator2_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SessionCreator2.SessionCreator2_C.Construct");

	USessionCreator2_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function SessionCreator2.SessionCreator2_C.BndEvt__Password?_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void USessionCreator2_C::BndEvt__Password__K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SessionCreator2.SessionCreator2_C.BndEvt__Password?_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature");

	USessionCreator2_C_BndEvt__Password__K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function SessionCreator2.SessionCreator2_C.BndEvt__Password_Textbox_K2Node_ComponentBoundEvent_6_OnEditableTextBoxCommittedEvent__DelegateSignature
//		Flags  -> (HasOutParms, BlueprintEvent)
// Parameters:
//		struct FText                                       Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		TEnumAsByte<SlateCore_ETextCommit>                 CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USessionCreator2_C::BndEvt__Password_Textbox_K2Node_ComponentBoundEvent_6_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<SlateCore_ETextCommit> CommitMethod)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SessionCreator2.SessionCreator2_C.BndEvt__Password_Textbox_K2Node_ComponentBoundEvent_6_OnEditableTextBoxCommittedEvent__DelegateSignature");

	USessionCreator2_C_BndEvt__Password_Textbox_K2Node_ComponentBoundEvent_6_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params {};
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function SessionCreator2.SessionCreator2_C.BndEvt__ComboBoxString_365_K2Node_ComponentBoundEvent_7_OnSelectionChangedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FString                                     SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		TEnumAsByte<SlateCore_ESelectInfo>                 SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USessionCreator2_C::BndEvt__ComboBoxString_365_K2Node_ComponentBoundEvent_7_OnSelectionChangedEvent__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<SlateCore_ESelectInfo> SelectionType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SessionCreator2.SessionCreator2_C.BndEvt__ComboBoxString_365_K2Node_ComponentBoundEvent_7_OnSelectionChangedEvent__DelegateSignature");

	USessionCreator2_C_BndEvt__ComboBoxString_365_K2Node_ComponentBoundEvent_7_OnSelectionChangedEvent__DelegateSignature_Params params {};
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function SessionCreator2.SessionCreator2_C.RandomTitle
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void USessionCreator2_C::RandomTitle()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SessionCreator2.SessionCreator2_C.RandomTitle");

	USessionCreator2_C_RandomTitle_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function SessionCreator2.SessionCreator2_C.BndEvt__DisableViewCheckbox_K2Node_ComponentBoundEvent_8_OnCheckBoxComponentStateChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void USessionCreator2_C::BndEvt__DisableViewCheckbox_K2Node_ComponentBoundEvent_8_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SessionCreator2.SessionCreator2_C.BndEvt__DisableViewCheckbox_K2Node_ComponentBoundEvent_8_OnCheckBoxComponentStateChanged__DelegateSignature");

	USessionCreator2_C_BndEvt__DisableViewCheckbox_K2Node_ComponentBoundEvent_8_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function SessionCreator2.SessionCreator2_C.BndEvt__Teamchat?_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void USessionCreator2_C::BndEvt__Teamchat__K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SessionCreator2.SessionCreator2_C.BndEvt__Teamchat?_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature");

	USessionCreator2_C_BndEvt__Teamchat__K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function SessionCreator2.SessionCreator2_C.BndEvt__AllowJoin?_K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void USessionCreator2_C::BndEvt__AllowJoin__K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SessionCreator2.SessionCreator2_C.BndEvt__AllowJoin?_K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature");

	USessionCreator2_C_BndEvt__AllowJoin__K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function SessionCreator2.SessionCreator2_C.BndEvt__RoundsSlider_K2Node_ComponentBoundEvent_13_OnFloatValueChangedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USessionCreator2_C::BndEvt__RoundsSlider_K2Node_ComponentBoundEvent_13_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SessionCreator2.SessionCreator2_C.BndEvt__RoundsSlider_K2Node_ComponentBoundEvent_13_OnFloatValueChangedEvent__DelegateSignature");

	USessionCreator2_C_BndEvt__RoundsSlider_K2Node_ComponentBoundEvent_13_OnFloatValueChangedEvent__DelegateSignature_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function SessionCreator2.SessionCreator2_C.BndEvt__MaxPlayerSlider_K2Node_ComponentBoundEvent_14_OnFloatValueChangedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USessionCreator2_C::BndEvt__MaxPlayerSlider_K2Node_ComponentBoundEvent_14_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SessionCreator2.SessionCreator2_C.BndEvt__MaxPlayerSlider_K2Node_ComponentBoundEvent_14_OnFloatValueChangedEvent__DelegateSignature");

	USessionCreator2_C_BndEvt__MaxPlayerSlider_K2Node_ComponentBoundEvent_14_OnFloatValueChangedEvent__DelegateSignature_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function SessionCreator2.SessionCreator2_C.BndEvt__RoundInputText_K2Node_ComponentBoundEvent_15_OnEditableTextBoxCommittedEvent__DelegateSignature
//		Flags  -> (HasOutParms, BlueprintEvent)
// Parameters:
//		struct FText                                       Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		TEnumAsByte<SlateCore_ETextCommit>                 CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USessionCreator2_C::BndEvt__RoundInputText_K2Node_ComponentBoundEvent_15_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<SlateCore_ETextCommit> CommitMethod)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SessionCreator2.SessionCreator2_C.BndEvt__RoundInputText_K2Node_ComponentBoundEvent_15_OnEditableTextBoxCommittedEvent__DelegateSignature");

	USessionCreator2_C_BndEvt__RoundInputText_K2Node_ComponentBoundEvent_15_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params {};
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function SessionCreator2.SessionCreator2_C.BndEvt__MaxPlayerInputText_K2Node_ComponentBoundEvent_16_OnEditableTextBoxCommittedEvent__DelegateSignature
//		Flags  -> (HasOutParms, BlueprintEvent)
// Parameters:
//		struct FText                                       Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		TEnumAsByte<SlateCore_ETextCommit>                 CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USessionCreator2_C::BndEvt__MaxPlayerInputText_K2Node_ComponentBoundEvent_16_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<SlateCore_ETextCommit> CommitMethod)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SessionCreator2.SessionCreator2_C.BndEvt__MaxPlayerInputText_K2Node_ComponentBoundEvent_16_OnEditableTextBoxCommittedEvent__DelegateSignature");

	USessionCreator2_C_BndEvt__MaxPlayerInputText_K2Node_ComponentBoundEvent_16_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params {};
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function SessionCreator2.SessionCreator2_C.BndEvt__CheckBox_2_K2Node_ComponentBoundEvent_17_OnCheckBoxComponentStateChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void USessionCreator2_C::BndEvt__CheckBox_2_K2Node_ComponentBoundEvent_17_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SessionCreator2.SessionCreator2_C.BndEvt__CheckBox_2_K2Node_ComponentBoundEvent_17_OnCheckBoxComponentStateChanged__DelegateSignature");

	USessionCreator2_C_BndEvt__CheckBox_2_K2Node_ComponentBoundEvent_17_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function SessionCreator2.SessionCreator2_C.BndEvt__Password_Textbox_K2Node_ComponentBoundEvent_4_OnEditableTextBoxChangedEvent__DelegateSignature
//		Flags  -> (HasOutParms, BlueprintEvent)
// Parameters:
//		struct FText                                       Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void USessionCreator2_C::BndEvt__Password_Textbox_K2Node_ComponentBoundEvent_4_OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SessionCreator2.SessionCreator2_C.BndEvt__Password_Textbox_K2Node_ComponentBoundEvent_4_OnEditableTextBoxChangedEvent__DelegateSignature");

	USessionCreator2_C_BndEvt__Password_Textbox_K2Node_ComponentBoundEvent_4_OnEditableTextBoxChangedEvent__DelegateSignature_Params params {};
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function SessionCreator2.SessionCreator2_C.RunCheckDisableUntilFull
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void USessionCreator2_C::RunCheckDisableUntilFull()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SessionCreator2.SessionCreator2_C.RunCheckDisableUntilFull");

	USessionCreator2_C_RunCheckDisableUntilFull_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function SessionCreator2.SessionCreator2_C.BndEvt__ViewMoreButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void USessionCreator2_C::BndEvt__ViewMoreButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SessionCreator2.SessionCreator2_C.BndEvt__ViewMoreButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	USessionCreator2_C_BndEvt__ViewMoreButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function SessionCreator2.SessionCreator2_C.BndEvt__TitleTextbox_K2Node_ComponentBoundEvent_11_OnEditableTextBoxChangedEvent__DelegateSignature
//		Flags  -> (HasOutParms, BlueprintEvent)
// Parameters:
//		struct FText                                       Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void USessionCreator2_C::BndEvt__TitleTextbox_K2Node_ComponentBoundEvent_11_OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SessionCreator2.SessionCreator2_C.BndEvt__TitleTextbox_K2Node_ComponentBoundEvent_11_OnEditableTextBoxChangedEvent__DelegateSignature");

	USessionCreator2_C_BndEvt__TitleTextbox_K2Node_ComponentBoundEvent_11_OnEditableTextBoxChangedEvent__DelegateSignature_Params params {};
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function SessionCreator2.SessionCreator2_C.BndEvt__JoinButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void USessionCreator2_C::BndEvt__JoinButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SessionCreator2.SessionCreator2_C.BndEvt__JoinButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	USessionCreator2_C_BndEvt__JoinButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function SessionCreator2.SessionCreator2_C.BndEvt__RegionSelectionCombobox_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FString                                     SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		TEnumAsByte<SlateCore_ESelectInfo>                 SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USessionCreator2_C::BndEvt__RegionSelectionCombobox_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<SlateCore_ESelectInfo> SelectionType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SessionCreator2.SessionCreator2_C.BndEvt__RegionSelectionCombobox_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature");

	USessionCreator2_C_BndEvt__RegionSelectionCombobox_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature_Params params {};
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function SessionCreator2.SessionCreator2_C.BndEvt__DisablePropIndicationHoverB_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void USessionCreator2_C::BndEvt__DisablePropIndicationHoverB_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SessionCreator2.SessionCreator2_C.BndEvt__DisablePropIndicationHoverB_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature");

	USessionCreator2_C_BndEvt__DisablePropIndicationHoverB_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function SessionCreator2.SessionCreator2_C.BndEvt__DisablePropIndicationHoverB_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void USessionCreator2_C::BndEvt__DisablePropIndicationHoverB_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SessionCreator2.SessionCreator2_C.BndEvt__DisablePropIndicationHoverB_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature");

	USessionCreator2_C_BndEvt__DisablePropIndicationHoverB_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function SessionCreator2.SessionCreator2_C.BndEvt__DisableGlobalChatHoverB_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void USessionCreator2_C::BndEvt__DisableGlobalChatHoverB_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SessionCreator2.SessionCreator2_C.BndEvt__DisableGlobalChatHoverB_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature");

	USessionCreator2_C_BndEvt__DisableGlobalChatHoverB_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function SessionCreator2.SessionCreator2_C.BndEvt__DisableGlobalChatHoverB_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void USessionCreator2_C::BndEvt__DisableGlobalChatHoverB_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SessionCreator2.SessionCreator2_C.BndEvt__DisableGlobalChatHoverB_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature");

	USessionCreator2_C_BndEvt__DisableGlobalChatHoverB_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function SessionCreator2.SessionCreator2_C.BndEvt__DisableHunterIndicationHoverB_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void USessionCreator2_C::BndEvt__DisableHunterIndicationHoverB_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SessionCreator2.SessionCreator2_C.BndEvt__DisableHunterIndicationHoverB_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature");

	USessionCreator2_C_BndEvt__DisableHunterIndicationHoverB_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function SessionCreator2.SessionCreator2_C.BndEvt__DisableHunterIndicationHoverB_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void USessionCreator2_C::BndEvt__DisableHunterIndicationHoverB_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SessionCreator2.SessionCreator2_C.BndEvt__DisableHunterIndicationHoverB_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature");

	USessionCreator2_C_BndEvt__DisableHunterIndicationHoverB_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function SessionCreator2.SessionCreator2_C.BndEvt__DisableStartFullHoverB_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void USessionCreator2_C::BndEvt__DisableStartFullHoverB_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SessionCreator2.SessionCreator2_C.BndEvt__DisableStartFullHoverB_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature");

	USessionCreator2_C_BndEvt__DisableStartFullHoverB_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function SessionCreator2.SessionCreator2_C.BndEvt__DisableStartFullHoverB_K2Node_ComponentBoundEvent_24_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void USessionCreator2_C::BndEvt__DisableStartFullHoverB_K2Node_ComponentBoundEvent_24_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SessionCreator2.SessionCreator2_C.BndEvt__DisableStartFullHoverB_K2Node_ComponentBoundEvent_24_OnButtonHoverEvent__DelegateSignature");

	USessionCreator2_C_BndEvt__DisableStartFullHoverB_K2Node_ComponentBoundEvent_24_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function SessionCreator2.SessionCreator2_C.BndEvt__ViewMoreButton_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void USessionCreator2_C::BndEvt__ViewMoreButton_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SessionCreator2.SessionCreator2_C.BndEvt__ViewMoreButton_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature");

	USessionCreator2_C_BndEvt__ViewMoreButton_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function SessionCreator2.SessionCreator2_C.BndEvt__ViewMoreButton_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void USessionCreator2_C::BndEvt__ViewMoreButton_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SessionCreator2.SessionCreator2_C.BndEvt__ViewMoreButton_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature");

	USessionCreator2_C_BndEvt__ViewMoreButton_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function SessionCreator2.SessionCreator2_C.BndEvt__TitleTextbox_K2Node_ComponentBoundEvent_27_OnEditableTextBoxCommittedEvent__DelegateSignature
//		Flags  -> (HasOutParms, BlueprintEvent)
// Parameters:
//		struct FText                                       Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		TEnumAsByte<SlateCore_ETextCommit>                 CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USessionCreator2_C::BndEvt__TitleTextbox_K2Node_ComponentBoundEvent_27_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<SlateCore_ETextCommit> CommitMethod)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SessionCreator2.SessionCreator2_C.BndEvt__TitleTextbox_K2Node_ComponentBoundEvent_27_OnEditableTextBoxCommittedEvent__DelegateSignature");

	USessionCreator2_C_BndEvt__TitleTextbox_K2Node_ComponentBoundEvent_27_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params {};
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function SessionCreator2.SessionCreator2_C.BndEvt__LicenseButton_K2Node_ComponentBoundEvent_30_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void USessionCreator2_C::BndEvt__LicenseButton_K2Node_ComponentBoundEvent_30_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SessionCreator2.SessionCreator2_C.BndEvt__LicenseButton_K2Node_ComponentBoundEvent_30_OnButtonHoverEvent__DelegateSignature");

	USessionCreator2_C_BndEvt__LicenseButton_K2Node_ComponentBoundEvent_30_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function SessionCreator2.SessionCreator2_C.BndEvt__LicenseButton_K2Node_ComponentBoundEvent_31_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void USessionCreator2_C::BndEvt__LicenseButton_K2Node_ComponentBoundEvent_31_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SessionCreator2.SessionCreator2_C.BndEvt__LicenseButton_K2Node_ComponentBoundEvent_31_OnButtonHoverEvent__DelegateSignature");

	USessionCreator2_C_BndEvt__LicenseButton_K2Node_ComponentBoundEvent_31_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function SessionCreator2.SessionCreator2_C.BndEvt__DisableFreecamB_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void USessionCreator2_C::BndEvt__DisableFreecamB_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SessionCreator2.SessionCreator2_C.BndEvt__DisableFreecamB_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature");

	USessionCreator2_C_BndEvt__DisableFreecamB_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function SessionCreator2.SessionCreator2_C.BndEvt__DisableFreecamB_K2Node_ComponentBoundEvent_29_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void USessionCreator2_C::BndEvt__DisableFreecamB_K2Node_ComponentBoundEvent_29_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SessionCreator2.SessionCreator2_C.BndEvt__DisableFreecamB_K2Node_ComponentBoundEvent_29_OnButtonHoverEvent__DelegateSignature");

	USessionCreator2_C_BndEvt__DisableFreecamB_K2Node_ComponentBoundEvent_29_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function SessionCreator2.SessionCreator2_C.BndEvt__DisableFreecamB_K2Node_ComponentBoundEvent_32_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void USessionCreator2_C::BndEvt__DisableFreecamB_K2Node_ComponentBoundEvent_32_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SessionCreator2.SessionCreator2_C.BndEvt__DisableFreecamB_K2Node_ComponentBoundEvent_32_OnButtonClickedEvent__DelegateSignature");

	USessionCreator2_C_BndEvt__DisableFreecamB_K2Node_ComponentBoundEvent_32_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function SessionCreator2.SessionCreator2_C.RandomMapOnStart
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void USessionCreator2_C::RandomMapOnStart()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SessionCreator2.SessionCreator2_C.RandomMapOnStart");

	USessionCreator2_C_RandomMapOnStart_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function SessionCreator2.SessionCreator2_C.BndEvt__LicenseRequired_K2Node_ComponentBoundEvent_38_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void USessionCreator2_C::BndEvt__LicenseRequired_K2Node_ComponentBoundEvent_38_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SessionCreator2.SessionCreator2_C.BndEvt__LicenseRequired_K2Node_ComponentBoundEvent_38_OnButtonHoverEvent__DelegateSignature");

	USessionCreator2_C_BndEvt__LicenseRequired_K2Node_ComponentBoundEvent_38_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function SessionCreator2.SessionCreator2_C.BndEvt__LicenseRequired_K2Node_ComponentBoundEvent_39_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void USessionCreator2_C::BndEvt__LicenseRequired_K2Node_ComponentBoundEvent_39_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SessionCreator2.SessionCreator2_C.BndEvt__LicenseRequired_K2Node_ComponentBoundEvent_39_OnButtonHoverEvent__DelegateSignature");

	USessionCreator2_C_BndEvt__LicenseRequired_K2Node_ComponentBoundEvent_39_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function SessionCreator2.SessionCreator2_C.BndEvt__LicenseRequiredPassword_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void USessionCreator2_C::BndEvt__LicenseRequiredPassword_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SessionCreator2.SessionCreator2_C.BndEvt__LicenseRequiredPassword_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature");

	USessionCreator2_C_BndEvt__LicenseRequiredPassword_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function SessionCreator2.SessionCreator2_C.BndEvt__LicenseRequiredPassword_K2Node_ComponentBoundEvent_29_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void USessionCreator2_C::BndEvt__LicenseRequiredPassword_K2Node_ComponentBoundEvent_29_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SessionCreator2.SessionCreator2_C.BndEvt__LicenseRequiredPassword_K2Node_ComponentBoundEvent_29_OnButtonHoverEvent__DelegateSignature");

	USessionCreator2_C_BndEvt__LicenseRequiredPassword_K2Node_ComponentBoundEvent_29_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function SessionCreator2.SessionCreator2_C.ExecuteUbergraph_SessionCreator2
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USessionCreator2_C::ExecuteUbergraph_SessionCreator2(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SessionCreator2.SessionCreator2_C.ExecuteUbergraph_SessionCreator2");

	USessionCreator2_C_ExecuteUbergraph_SessionCreator2_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
