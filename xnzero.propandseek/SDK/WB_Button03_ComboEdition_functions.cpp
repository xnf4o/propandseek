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
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.Slider_ConvertToNormal
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UWB_Button03_ComboEdition_C::Slider_ConvertToNormal(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.Slider_ConvertToNormal");

	UWB_Button03_ComboEdition_C_Slider_ConvertToNormal_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.B03_GetSliderValueNormalized
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              ValueNormalized                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button03_ComboEdition_C::B03_GetSliderValueNormalized(float* ValueNormalized)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.B03_GetSliderValueNormalized");

	UWB_Button03_ComboEdition_C_B03_GetSliderValueNormalized_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ValueNormalized != nullptr)
		*ValueNormalized = params.ValueNormalized;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.Slider_ConvertFromNormal
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UWB_Button03_ComboEdition_C::Slider_ConvertFromNormal(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.Slider_ConvertFromNormal");

	UWB_Button03_ComboEdition_C_Slider_ConvertFromNormal_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.B03_GetSliderValue
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button03_ComboEdition_C::B03_GetSliderValue(float* Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.B03_GetSliderValue");

	UWB_Button03_ComboEdition_C_B03_GetSliderValue_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.SetSlider_OptionFont_Hovered
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UWB_Button03_ComboEdition_C::SetSlider_OptionFont_Hovered()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.SetSlider_OptionFont_Hovered");

	UWB_Button03_ComboEdition_C_SetSlider_OptionFont_Hovered_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.SetSliderValue_FontInfo
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UFont*                                       MultiState_Font_Normal                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UFontFace*                                   MultiState_FontFace_Normal                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                MultiState_FontSize_Normal                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                MultiState_FontColor_Normal                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UFont*                                       MultiState_Font_Hovered                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UFontFace*                                   MultiState_FontFace_Hovered                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                MultiState_FontSize_Hovered                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                MultiState_FontColor_Hovered                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button03_ComboEdition_C::SetSliderValue_FontInfo(class UFont* MultiState_Font_Normal, class UFontFace* MultiState_FontFace_Normal, int MultiState_FontSize_Normal, const struct FLinearColor& MultiState_FontColor_Normal, class UFont* MultiState_Font_Hovered, class UFontFace* MultiState_FontFace_Hovered, int MultiState_FontSize_Hovered, const struct FLinearColor& MultiState_FontColor_Hovered)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.SetSliderValue_FontInfo");

	UWB_Button03_ComboEdition_C_SetSliderValue_FontInfo_Params params {};
	params.MultiState_Font_Normal = MultiState_Font_Normal;
	params.MultiState_FontFace_Normal = MultiState_FontFace_Normal;
	params.MultiState_FontSize_Normal = MultiState_FontSize_Normal;
	params.MultiState_FontColor_Normal = MultiState_FontColor_Normal;
	params.MultiState_Font_Hovered = MultiState_Font_Hovered;
	params.MultiState_FontFace_Hovered = MultiState_FontFace_Hovered;
	params.MultiState_FontSize_Hovered = MultiState_FontSize_Hovered;
	params.MultiState_FontColor_Hovered = MultiState_FontColor_Hovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.SetSliderOptionText
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
void UWB_Button03_ComboEdition_C::SetSliderOptionText(const struct FText& InText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.SetSliderOptionText");

	UWB_Button03_ComboEdition_C_SetSliderOptionText_Params params {};
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.SetSliderJustification
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<EOptionsTextJustification_EOptionsTextJustification> EOptionsText                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button03_ComboEdition_C::SetSliderJustification(TEnumAsByte<EOptionsTextJustification_EOptionsTextJustification> EOptionsText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.SetSliderJustification");

	UWB_Button03_ComboEdition_C_SetSliderJustification_Params params {};
	params.EOptionsText = EOptionsText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.SetSlider_OptionFont_Normal
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UWB_Button03_ComboEdition_C::SetSlider_OptionFont_Normal()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.SetSlider_OptionFont_Normal");

	UWB_Button03_ComboEdition_C_SetSlider_OptionFont_Normal_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.B03_GetKeyEscapeKeys
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<ESelectedKey_ESelectedKey>             Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<struct FKey>                                EscapeKeys                                                 (Parm, OutParm, ZeroConstructor)
void UWB_Button03_ComboEdition_C::B03_GetKeyEscapeKeys(TEnumAsByte<ESelectedKey_ESelectedKey> Key, TArray<struct FKey>* EscapeKeys)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.B03_GetKeyEscapeKeys");

	UWB_Button03_ComboEdition_C_B03_GetKeyEscapeKeys_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (EscapeKeys != nullptr)
		*EscapeKeys = params.EscapeKeys;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.B03_GetAllowModifierKeys
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<ESelectedKey_ESelectedKey>             Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bAllowModifierKeys                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_Button03_ComboEdition_C::B03_GetAllowModifierKeys(TEnumAsByte<ESelectedKey_ESelectedKey> Key, bool* bAllowModifierKeys)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.B03_GetAllowModifierKeys");

	UWB_Button03_ComboEdition_C_B03_GetAllowModifierKeys_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bAllowModifierKeys != nullptr)
		*bAllowModifierKeys = params.bAllowModifierKeys;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.B03_GetAllowGamepadKeys
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<ESelectedKey_ESelectedKey>             Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bAllowGamepadKeys                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_Button03_ComboEdition_C::B03_GetAllowGamepadKeys(TEnumAsByte<ESelectedKey_ESelectedKey> Key, bool* bAllowGamepadKeys)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.B03_GetAllowGamepadKeys");

	UWB_Button03_ComboEdition_C_B03_GetAllowGamepadKeys_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bAllowGamepadKeys != nullptr)
		*bAllowGamepadKeys = params.bAllowGamepadKeys;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.B03_GetKeySelectionText
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<ESelectedKey_ESelectedKey>             Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       KeySelectionText                                           (Parm, OutParm)
void UWB_Button03_ComboEdition_C::B03_GetKeySelectionText(TEnumAsByte<ESelectedKey_ESelectedKey> Key, struct FText* KeySelectionText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.B03_GetKeySelectionText");

	UWB_Button03_ComboEdition_C_B03_GetKeySelectionText_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (KeySelectionText != nullptr)
		*KeySelectionText = params.KeySelectionText;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.B03_GetSelectedKey
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<ESelectedKey_ESelectedKey>             Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FInputChord                                 SelectedKey                                                (Parm, OutParm, HasGetValueTypeHash)
void UWB_Button03_ComboEdition_C::B03_GetSelectedKey(TEnumAsByte<ESelectedKey_ESelectedKey> Key, struct FInputChord* SelectedKey)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.B03_GetSelectedKey");

	UWB_Button03_ComboEdition_C_B03_GetSelectedKey_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SelectedKey != nullptr)
		*SelectedKey = params.SelectedKey;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.B03_GetKeyEnabled
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<ESelectedKey_ESelectedKey>             Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bEnabled                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_Button03_ComboEdition_C::B03_GetKeyEnabled(TEnumAsByte<ESelectedKey_ESelectedKey> Key, bool* bEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.B03_GetKeyEnabled");

	UWB_Button03_ComboEdition_C_B03_GetKeyEnabled_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bEnabled != nullptr)
		*bEnabled = params.bEnabled;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.B03_GetStateByName
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       State                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button03_ComboEdition_C::B03_GetStateByName(struct FName* State)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.B03_GetStateByName");

	UWB_Button03_ComboEdition_C_B03_GetStateByName_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (State != nullptr)
		*State = params.State;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.B03_GetStateByIndex
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                State                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button03_ComboEdition_C::B03_GetStateByIndex(int* State)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.B03_GetStateByIndex");

	UWB_Button03_ComboEdition_C_B03_GetStateByIndex_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (State != nullptr)
		*State = params.State;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.GetUserFocus
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APlayerController*                           Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               HasFocus                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_Button03_ComboEdition_C::GetUserFocus(class APlayerController* Player, bool* HasFocus)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.GetUserFocus");

	UWB_Button03_ComboEdition_C_GetUserFocus_Params params {};
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HasFocus != nullptr)
		*HasFocus = params.HasFocus;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.GetButtonFontInfo_Hovered
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UFont*                                       Font                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UFontFace*                                   Typeface                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                FontSize                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                Color                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button03_ComboEdition_C::GetButtonFontInfo_Hovered(class UFont** Font, class UFontFace** Typeface, int* FontSize, struct FLinearColor* Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.GetButtonFontInfo_Hovered");

	UWB_Button03_ComboEdition_C_GetButtonFontInfo_Hovered_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Font != nullptr)
		*Font = params.Font;
	if (Typeface != nullptr)
		*Typeface = params.Typeface;
	if (FontSize != nullptr)
		*FontSize = params.FontSize;
	if (Color != nullptr)
		*Color = params.Color;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.GetButtonFontInfo_Normal
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UFont*                                       Font                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UFontFace*                                   Typeface                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                FontSize                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                Color                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button03_ComboEdition_C::GetButtonFontInfo_Normal(class UFont** Font, class UFontFace** Typeface, int* FontSize, struct FLinearColor* Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.GetButtonFontInfo_Normal");

	UWB_Button03_ComboEdition_C_GetButtonFontInfo_Normal_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Font != nullptr)
		*Font = params.Font;
	if (Typeface != nullptr)
		*Typeface = params.Typeface;
	if (FontSize != nullptr)
		*FontSize = params.FontSize;
	if (Color != nullptr)
		*Color = params.Color;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.GetButtonText
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       ButtonText                                                 (Parm, OutParm)
void UWB_Button03_ComboEdition_C::GetButtonText(struct FText* ButtonText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.GetButtonText");

	UWB_Button03_ComboEdition_C_GetButtonText_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ButtonText != nullptr)
		*ButtonText = params.ButtonText;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.GetButtonEnabled
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               BIsEnabled                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_Button03_ComboEdition_C::GetButtonEnabled(bool* BIsEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.GetButtonEnabled");

	UWB_Button03_ComboEdition_C_GetButtonEnabled_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BIsEnabled != nullptr)
		*BIsEnabled = params.BIsEnabled;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.RemoveContentWidget
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWB_Button03_ComboEdition_C::RemoveContentWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.RemoveContentWidget");

	UWB_Button03_ComboEdition_C_RemoveContentWidget_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.CreateContentWidget
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UClass*                                      Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button03_ComboEdition_C::CreateContentWidget(class UClass* Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.CreateContentWidget");

	UWB_Button03_ComboEdition_C_CreateContentWidget_Params params {};
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.IsContentWidgetValid
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWB_Button03_ComboEdition_C::IsContentWidgetValid()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.IsContentWidgetValid");

	UWB_Button03_ComboEdition_C_IsContentWidgetValid_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.SetKeyRebindingJustification
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<EOptionsTextJustification_EOptionsTextJustification> EOptionsText                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button03_ComboEdition_C::SetKeyRebindingJustification(TEnumAsByte<EOptionsTextJustification_EOptionsTextJustification> EOptionsText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.SetKeyRebindingJustification");

	UWB_Button03_ComboEdition_C_SetKeyRebindingJustification_Params params {};
	params.EOptionsText = EOptionsText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.SetIsSelectingText
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       InKeySelectionText                                         (BlueprintVisible, BlueprintReadOnly, Parm)
void UWB_Button03_ComboEdition_C::SetIsSelectingText(const struct FText& InKeySelectionText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.SetIsSelectingText");

	UWB_Button03_ComboEdition_C_SetIsSelectingText_Params params {};
	params.InKeySelectionText = InKeySelectionText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.HandleIsEnabled
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsEnabled                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_Button03_ComboEdition_C::HandleIsEnabled(bool IsEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.HandleIsEnabled");

	UWB_Button03_ComboEdition_C_HandleIsEnabled_Params params {};
	params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.FindKey
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		TEnumAsByte<ESelectedKey_ESelectedKey>             ESelectedKey                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UWB_KeyRebindingKey_C*                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWB_KeyRebindingKey_C* UWB_Button03_ComboEdition_C::FindKey(TEnumAsByte<ESelectedKey_ESelectedKey> ESelectedKey)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.FindKey");

	UWB_Button03_ComboEdition_C_FindKey_Params params {};
	params.ESelectedKey = ESelectedKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.SetNoKeySpecifiedText
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
void UWB_Button03_ComboEdition_C::SetNoKeySpecifiedText(const struct FText& InText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.SetNoKeySpecifiedText");

	UWB_Button03_ComboEdition_C_SetNoKeySpecifiedText_Params params {};
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.SetKeybindingKeysButtonInfo_Hovered
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWB_Button03_ComboEdition_C::SetKeybindingKeysButtonInfo_Hovered()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.SetKeybindingKeysButtonInfo_Hovered");

	UWB_Button03_ComboEdition_C_SetKeybindingKeysButtonInfo_Hovered_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.SetKeybindingKeysButtonInfo_Normal
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWB_Button03_ComboEdition_C::SetKeybindingKeysButtonInfo_Normal()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.SetKeybindingKeysButtonInfo_Normal");

	UWB_Button03_ComboEdition_C_SetKeybindingKeysButtonInfo_Normal_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.SetKeybindingText
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
void UWB_Button03_ComboEdition_C::SetKeybindingText(const struct FText& InText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.SetKeybindingText");

	UWB_Button03_ComboEdition_C_SetKeybindingText_Params params {};
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.SetKeyRebinding_OptionFont_Hovered
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UWB_Button03_ComboEdition_C::SetKeyRebinding_OptionFont_Hovered()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.SetKeyRebinding_OptionFont_Hovered");

	UWB_Button03_ComboEdition_C_SetKeyRebinding_OptionFont_Hovered_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.SetKeyRebinding_OptionFont_Normal
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UWB_Button03_ComboEdition_C::SetKeyRebinding_OptionFont_Normal()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.SetKeyRebinding_OptionFont_Normal");

	UWB_Button03_ComboEdition_C_SetKeyRebinding_OptionFont_Normal_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.SetMultiState_OptionFont_Normal
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UWB_Button03_ComboEdition_C::SetMultiState_OptionFont_Normal()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.SetMultiState_OptionFont_Normal");

	UWB_Button03_ComboEdition_C_SetMultiState_OptionFont_Normal_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.SetMultiState_OptionFont_Hovered
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UWB_Button03_ComboEdition_C::SetMultiState_OptionFont_Hovered()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.SetMultiState_OptionFont_Hovered");

	UWB_Button03_ComboEdition_C_SetMultiState_OptionFont_Hovered_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.SetStateButtonInfo
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                ButtonIconColor_Normal                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                ButtonIconColor_Hovered                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                ButtonIconColor_Clicked                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     ButtonIcon                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button03_ComboEdition_C::SetStateButtonInfo(const struct FLinearColor& ButtonIconColor_Normal, const struct FLinearColor& ButtonIconColor_Hovered, const struct FLinearColor& ButtonIconColor_Clicked, class UObject* ButtonIcon)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.SetStateButtonInfo");

	UWB_Button03_ComboEdition_C_SetStateButtonInfo_Params params {};
	params.ButtonIconColor_Normal = ButtonIconColor_Normal;
	params.ButtonIconColor_Hovered = ButtonIconColor_Hovered;
	params.ButtonIconColor_Clicked = ButtonIconColor_Clicked;
	params.ButtonIcon = ButtonIcon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.SetMultiState_FontInfo
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UFont*                                       MultiState_Font_Normal                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UFontFace*                                   MultiState_FontFace_Normal                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                MultiState_FontSize_Normal                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                MultiState_FontColor_Normal                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UFont*                                       MultiState_Font_Hovered                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UFontFace*                                   MultiState_FontFace_Hovered                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                MultiState_FontSize_Hovered                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                MultiState_FontColor_Hovered                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button03_ComboEdition_C::SetMultiState_FontInfo(class UFont* MultiState_Font_Normal, class UFontFace* MultiState_FontFace_Normal, int MultiState_FontSize_Normal, const struct FLinearColor& MultiState_FontColor_Normal, class UFont* MultiState_Font_Hovered, class UFontFace* MultiState_FontFace_Hovered, int MultiState_FontSize_Hovered, const struct FLinearColor& MultiState_FontColor_Hovered)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.SetMultiState_FontInfo");

	UWB_Button03_ComboEdition_C_SetMultiState_FontInfo_Params params {};
	params.MultiState_Font_Normal = MultiState_Font_Normal;
	params.MultiState_FontFace_Normal = MultiState_FontFace_Normal;
	params.MultiState_FontSize_Normal = MultiState_FontSize_Normal;
	params.MultiState_FontColor_Normal = MultiState_FontColor_Normal;
	params.MultiState_Font_Hovered = MultiState_Font_Hovered;
	params.MultiState_FontFace_Hovered = MultiState_FontFace_Hovered;
	params.MultiState_FontSize_Hovered = MultiState_FontSize_Hovered;
	params.MultiState_FontColor_Hovered = MultiState_FontColor_Hovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.SetMultiStateJustification
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<EOptionsTextJustification_EOptionsTextJustification> EOptionsText                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button03_ComboEdition_C::SetMultiStateJustification(TEnumAsByte<EOptionsTextJustification_EOptionsTextJustification> EOptionsText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.SetMultiStateJustification");

	UWB_Button03_ComboEdition_C_SetMultiStateJustification_Params params {};
	params.EOptionsText = EOptionsText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.SetMultiStateText
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
void UWB_Button03_ComboEdition_C::SetMultiStateText(const struct FText& InText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.SetMultiStateText");

	UWB_Button03_ComboEdition_C_SetMultiStateText_Params params {};
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.UnhoverAllOptionsButton
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWB_Button03_ComboEdition_C::UnhoverAllOptionsButton()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.UnhoverAllOptionsButton");

	UWB_Button03_ComboEdition_C_UnhoverAllOptionsButton_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.SetupSizes
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector2D                                   Size                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button03_ComboEdition_C::SetupSizes(const struct FVector2D& Size)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.SetupSizes");

	UWB_Button03_ComboEdition_C_SetupSizes_Params params {};
	params.Size = Size;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.B03_SetStateByName
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button03_ComboEdition_C::B03_SetStateByName(const struct FName& State)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.B03_SetStateByName");

	UWB_Button03_ComboEdition_C_B03_SetStateByName_Params params {};
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.B03_SetStateByIndex
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button03_ComboEdition_C::B03_SetStateByIndex(int State)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.B03_SetStateByIndex");

	UWB_Button03_ComboEdition_C_B03_SetStateByIndex_Params params {};
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.SetButtonText
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       ButtonText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
void UWB_Button03_ComboEdition_C::SetButtonText(const struct FText& ButtonText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.SetButtonText");

	UWB_Button03_ComboEdition_C_SetButtonText_Params params {};
	params.ButtonText = ButtonText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.SetButtonFontInfo_Current
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UFont*                                       Font                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UFontFace*                                   Typeface                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                FontSize                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button03_ComboEdition_C::SetButtonFontInfo_Current(class UFont* Font, class UFontFace* Typeface, int FontSize, const struct FLinearColor& Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.SetButtonFontInfo_Current");

	UWB_Button03_ComboEdition_C_SetButtonFontInfo_Current_Params params {};
	params.Font = Font;
	params.Typeface = Typeface;
	params.FontSize = FontSize;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.SetButtonEnabled
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               BIsEnabled                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_Button03_ComboEdition_C::SetButtonEnabled(bool BIsEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.SetButtonEnabled");

	UWB_Button03_ComboEdition_C_SetButtonEnabled_Params params {};
	params.BIsEnabled = BIsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.SetButtonFontInfo_Normal
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UFont*                                       Font                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UFontFace*                                   Typeface                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                FontSize                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button03_ComboEdition_C::SetButtonFontInfo_Normal(class UFont* Font, class UFontFace* Typeface, int FontSize, const struct FLinearColor& Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.SetButtonFontInfo_Normal");

	UWB_Button03_ComboEdition_C_SetButtonFontInfo_Normal_Params params {};
	params.Font = Font;
	params.Typeface = Typeface;
	params.FontSize = FontSize;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.SetButtonFontInfo_Hovered
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UFont*                                       Font                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UFontFace*                                   Typeface                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                FontSize                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button03_ComboEdition_C::SetButtonFontInfo_Hovered(class UFont* Font, class UFontFace* Typeface, int FontSize, const struct FLinearColor& Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.SetButtonFontInfo_Hovered");

	UWB_Button03_ComboEdition_C_SetButtonFontInfo_Hovered_Params params {};
	params.Font = Font;
	params.Typeface = Typeface;
	params.FontSize = FontSize;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.SetUser_Focus
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APlayerController*                           Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button03_ComboEdition_C::SetUser_Focus(class APlayerController* Player)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.SetUser_Focus");

	UWB_Button03_ComboEdition_C_SetUser_Focus_Params params {};
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.SetButtonSound_OnClicked
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class USoundBase*                                  ClickedSound                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button03_ComboEdition_C::SetButtonSound_OnClicked(class USoundBase* ClickedSound)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.SetButtonSound_OnClicked");

	UWB_Button03_ComboEdition_C_SetButtonSound_OnClicked_Params params {};
	params.ClickedSound = ClickedSound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.SetButtonSound_OnHovered
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class USoundBase*                                  HoveredSound                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button03_ComboEdition_C::SetButtonSound_OnHovered(class USoundBase* HoveredSound)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.SetButtonSound_OnHovered");

	UWB_Button03_ComboEdition_C_SetButtonSound_OnHovered_Params params {};
	params.HoveredSound = HoveredSound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.B03_SetStateButtonIcon
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UObject*                                     Icon                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button03_ComboEdition_C::B03_SetStateButtonIcon(class UObject* Icon)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.B03_SetStateButtonIcon");

	UWB_Button03_ComboEdition_C_B03_SetStateButtonIcon_Params params {};
	params.Icon = Icon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.B03_SetStateButtonIconColor_Clicked
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button03_ComboEdition_C::B03_SetStateButtonIconColor_Clicked(const struct FLinearColor& Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.B03_SetStateButtonIconColor_Clicked");

	UWB_Button03_ComboEdition_C_B03_SetStateButtonIconColor_Clicked_Params params {};
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.B03_SetStateButtonIconColor_Normal
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button03_ComboEdition_C::B03_SetStateButtonIconColor_Normal(const struct FLinearColor& Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.B03_SetStateButtonIconColor_Normal");

	UWB_Button03_ComboEdition_C_B03_SetStateButtonIconColor_Normal_Params params {};
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.B03_SetStateButtonIconColor_Hovered
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button03_ComboEdition_C::B03_SetStateButtonIconColor_Hovered(const struct FLinearColor& Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.B03_SetStateButtonIconColor_Hovered");

	UWB_Button03_ComboEdition_C_B03_SetStateButtonIconColor_Hovered_Params params {};
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.B03_SetSelectedKey
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<ESelectedKey_ESelectedKey>             Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FInputChord                                 SelectedKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UWB_Button03_ComboEdition_C::B03_SetSelectedKey(TEnumAsByte<ESelectedKey_ESelectedKey> Key, const struct FInputChord& SelectedKey)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.B03_SetSelectedKey");

	UWB_Button03_ComboEdition_C_B03_SetSelectedKey_Params params {};
	params.Key = Key;
	params.SelectedKey = SelectedKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.B03_SetKeyEnabled
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<ESelectedKey_ESelectedKey>             Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bEnabled                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_Button03_ComboEdition_C::B03_SetKeyEnabled(TEnumAsByte<ESelectedKey_ESelectedKey> Key, bool bEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.B03_SetKeyEnabled");

	UWB_Button03_ComboEdition_C_B03_SetKeyEnabled_Params params {};
	params.Key = Key;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.B03_SetKeySelectionText
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<ESelectedKey_ESelectedKey>             Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       KeySelectionText                                           (BlueprintVisible, BlueprintReadOnly, Parm)
void UWB_Button03_ComboEdition_C::B03_SetKeySelectionText(TEnumAsByte<ESelectedKey_ESelectedKey> Key, const struct FText& KeySelectionText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.B03_SetKeySelectionText");

	UWB_Button03_ComboEdition_C_B03_SetKeySelectionText_Params params {};
	params.Key = Key;
	params.KeySelectionText = KeySelectionText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.B03_SetAllowGamepadKeys
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<ESelectedKey_ESelectedKey>             Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bAllowGamepadKeys                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_Button03_ComboEdition_C::B03_SetAllowGamepadKeys(TEnumAsByte<ESelectedKey_ESelectedKey> Key, bool bAllowGamepadKeys)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.B03_SetAllowGamepadKeys");

	UWB_Button03_ComboEdition_C_B03_SetAllowGamepadKeys_Params params {};
	params.Key = Key;
	params.bAllowGamepadKeys = bAllowGamepadKeys;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.B03_SetAllowModifierKeys
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<ESelectedKey_ESelectedKey>             Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bAllowModifierKeys                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_Button03_ComboEdition_C::B03_SetAllowModifierKeys(TEnumAsByte<ESelectedKey_ESelectedKey> Key, bool bAllowModifierKeys)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.B03_SetAllowModifierKeys");

	UWB_Button03_ComboEdition_C_B03_SetAllowModifierKeys_Params params {};
	params.Key = Key;
	params.bAllowModifierKeys = bAllowModifierKeys;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.B03_SetKeyEscapeKeys
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<ESelectedKey_ESelectedKey>             Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<struct FKey>                                EscapeKeys                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UWB_Button03_ComboEdition_C::B03_SetKeyEscapeKeys(TEnumAsByte<ESelectedKey_ESelectedKey> Key, TArray<struct FKey> EscapeKeys)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.B03_SetKeyEscapeKeys");

	UWB_Button03_ComboEdition_C_B03_SetKeyEscapeKeys_Params params {};
	params.Key = Key;
	params.EscapeKeys = EscapeKeys;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.B03_RemoveContentWidget
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWB_Button03_ComboEdition_C::B03_RemoveContentWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.B03_RemoveContentWidget");

	UWB_Button03_ComboEdition_C_B03_RemoveContentWidget_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.B03_CreateContentWidget
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UClass*                                      ContentWidget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button03_ComboEdition_C::B03_CreateContentWidget(class UClass* ContentWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.B03_CreateContentWidget");

	UWB_Button03_ComboEdition_C_B03_CreateContentWidget_Params params {};
	params.ContentWidget = ContentWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.B03_SetSliderValue
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button03_ComboEdition_C::B03_SetSliderValue(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.B03_SetSliderValue");

	UWB_Button03_ComboEdition_C_B03_SetSliderValue_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.B03_SetSliderValueNormalized
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              ValueNormalized                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button03_ComboEdition_C::B03_SetSliderValueNormalized(float ValueNormalized)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.B03_SetSliderValueNormalized");

	UWB_Button03_ComboEdition_C_B03_SetSliderValueNormalized_Params params {};
	params.ValueNormalized = ValueNormalized;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_Button03_ComboEdition_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.PreConstruct");

	UWB_Button03_ComboEdition_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWB_Button03_ComboEdition_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.Construct");

	UWB_Button03_ComboEdition_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.BndEvt__ComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FString                                     SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		TEnumAsByte<SlateCore_ESelectInfo>                 SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button03_ComboEdition_C::BndEvt__ComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<SlateCore_ESelectInfo> SelectionType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.BndEvt__ComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature");

	UWB_Button03_ComboEdition_C_BndEvt__ComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature_Params params {};
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.BndEvt__WB_Button03_MultiStates_K2Node_ComponentBoundEvent_0_OnStateChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FName                                       State_Name                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                State_Index                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button03_ComboEdition_C::BndEvt__WB_Button03_MultiStates_K2Node_ComponentBoundEvent_0_OnStateChanged__DelegateSignature(const struct FName& State_Name, int State_Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.BndEvt__WB_Button03_MultiStates_K2Node_ComponentBoundEvent_0_OnStateChanged__DelegateSignature");

	UWB_Button03_ComboEdition_C_BndEvt__WB_Button03_MultiStates_K2Node_ComponentBoundEvent_0_OnStateChanged__DelegateSignature_Params params {};
	params.State_Name = State_Name;
	params.State_Index = State_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.UnhoverMultiStateButton
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWB_Button03_ComboEdition_C::UnhoverMultiStateButton()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.UnhoverMultiStateButton");

	UWB_Button03_ComboEdition_C_UnhoverMultiStateButton_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.BndEvt__WB_Button03_MultiStates_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWB_Button03_ComboEdition_C::BndEvt__WB_Button03_MultiStates_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.BndEvt__WB_Button03_MultiStates_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature");

	UWB_Button03_ComboEdition_C_BndEvt__WB_Button03_MultiStates_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.Construct_MultiStateOption
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWB_Button03_ComboEdition_C::Construct_MultiStateOption()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.Construct_MultiStateOption");

	UWB_Button03_ComboEdition_C_Construct_MultiStateOption_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.PreConstruct_MultiStateOption
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWB_Button03_ComboEdition_C::PreConstruct_MultiStateOption()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.PreConstruct_MultiStateOption");

	UWB_Button03_ComboEdition_C_PreConstruct_MultiStateOption_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.BndEvt__Button_Multistate_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWB_Button03_ComboEdition_C::BndEvt__Button_Multistate_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.BndEvt__Button_Multistate_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UWB_Button03_ComboEdition_C_BndEvt__Button_Multistate_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.BndEvt__Button_Multistate_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWB_Button03_ComboEdition_C::BndEvt__Button_Multistate_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.BndEvt__Button_Multistate_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UWB_Button03_ComboEdition_C_BndEvt__Button_Multistate_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.MultiState_CheckUserFocus
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWB_Button03_ComboEdition_C::MultiState_CheckUserFocus()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.MultiState_CheckUserFocus");

	UWB_Button03_ComboEdition_C_MultiState_CheckUserFocus_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.ResetHovered
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWB_Button03_ComboEdition_C::ResetHovered()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.ResetHovered");

	UWB_Button03_ComboEdition_C_ResetHovered_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.BndEvt__KeybindingKey2_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWB_Button03_ComboEdition_C::BndEvt__KeybindingKey2_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.BndEvt__KeybindingKey2_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature");

	UWB_Button03_ComboEdition_C_BndEvt__KeybindingKey2_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.BndEvt__KeybindingKey1_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWB_Button03_ComboEdition_C::BndEvt__KeybindingKey1_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.BndEvt__KeybindingKey1_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature");

	UWB_Button03_ComboEdition_C_BndEvt__KeybindingKey1_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.BndEvt__KeybindingKey2_K2Node_ComponentBoundEvent_93_OnKeyEmptied__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FInputChord                                 LastSelectedKey                                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UWB_Button03_ComboEdition_C::BndEvt__KeybindingKey2_K2Node_ComponentBoundEvent_93_OnKeyEmptied__DelegateSignature(const struct FInputChord& LastSelectedKey)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.BndEvt__KeybindingKey2_K2Node_ComponentBoundEvent_93_OnKeyEmptied__DelegateSignature");

	UWB_Button03_ComboEdition_C_BndEvt__KeybindingKey2_K2Node_ComponentBoundEvent_93_OnKeyEmptied__DelegateSignature_Params params {};
	params.LastSelectedKey = LastSelectedKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.BndEvt__KeybindingKey1_K2Node_ComponentBoundEvent_88_OnKeyEmptied__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FInputChord                                 LastSelectedKey                                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UWB_Button03_ComboEdition_C::BndEvt__KeybindingKey1_K2Node_ComponentBoundEvent_88_OnKeyEmptied__DelegateSignature(const struct FInputChord& LastSelectedKey)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.BndEvt__KeybindingKey1_K2Node_ComponentBoundEvent_88_OnKeyEmptied__DelegateSignature");

	UWB_Button03_ComboEdition_C_BndEvt__KeybindingKey1_K2Node_ComponentBoundEvent_88_OnKeyEmptied__DelegateSignature_Params params {};
	params.LastSelectedKey = LastSelectedKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.BndEvt__KeybindingKey2_K2Node_ComponentBoundEvent_42_OnKeySelected__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		TEnumAsByte<EMappingType_EMappingType>             MappingType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FInputChord                                 SelectedKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UWB_Button03_ComboEdition_C::BndEvt__KeybindingKey2_K2Node_ComponentBoundEvent_42_OnKeySelected__DelegateSignature(TEnumAsByte<EMappingType_EMappingType> MappingType, const struct FInputChord& SelectedKey)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.BndEvt__KeybindingKey2_K2Node_ComponentBoundEvent_42_OnKeySelected__DelegateSignature");

	UWB_Button03_ComboEdition_C_BndEvt__KeybindingKey2_K2Node_ComponentBoundEvent_42_OnKeySelected__DelegateSignature_Params params {};
	params.MappingType = MappingType;
	params.SelectedKey = SelectedKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.BndEvt__KeybindingKey1_K2Node_ComponentBoundEvent_23_OnKeySelected__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		TEnumAsByte<EMappingType_EMappingType>             MappingType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FInputChord                                 SelectedKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UWB_Button03_ComboEdition_C::BndEvt__KeybindingKey1_K2Node_ComponentBoundEvent_23_OnKeySelected__DelegateSignature(TEnumAsByte<EMappingType_EMappingType> MappingType, const struct FInputChord& SelectedKey)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.BndEvt__KeybindingKey1_K2Node_ComponentBoundEvent_23_OnKeySelected__DelegateSignature");

	UWB_Button03_ComboEdition_C_BndEvt__KeybindingKey1_K2Node_ComponentBoundEvent_23_OnKeySelected__DelegateSignature_Params params {};
	params.MappingType = MappingType;
	params.SelectedKey = SelectedKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.UnhoverKeyRebindingButton
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWB_Button03_ComboEdition_C::UnhoverKeyRebindingButton()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.UnhoverKeyRebindingButton");

	UWB_Button03_ComboEdition_C_UnhoverKeyRebindingButton_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.BndEvt__Button_KeyRebinding_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWB_Button03_ComboEdition_C::BndEvt__Button_KeyRebinding_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.BndEvt__Button_KeyRebinding_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	UWB_Button03_ComboEdition_C_BndEvt__Button_KeyRebinding_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.BndEvt__Button_KeyRebinding_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWB_Button03_ComboEdition_C::BndEvt__Button_KeyRebinding_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.BndEvt__Button_KeyRebinding_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UWB_Button03_ComboEdition_C_BndEvt__Button_KeyRebinding_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.Construct_KeyRebindingOption
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWB_Button03_ComboEdition_C::Construct_KeyRebindingOption()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.Construct_KeyRebindingOption");

	UWB_Button03_ComboEdition_C_Construct_KeyRebindingOption_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.PreConstruct_KeyRebindingOption
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWB_Button03_ComboEdition_C::PreConstruct_KeyRebindingOption()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.PreConstruct_KeyRebindingOption");

	UWB_Button03_ComboEdition_C_PreConstruct_KeyRebindingOption_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.BndEvt__WB_ProgressSlider_K2Node_ComponentBoundEvent_48_OnUnhovered__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWB_Button03_ComboEdition_C::BndEvt__WB_ProgressSlider_K2Node_ComponentBoundEvent_48_OnUnhovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.BndEvt__WB_ProgressSlider_K2Node_ComponentBoundEvent_48_OnUnhovered__DelegateSignature");

	UWB_Button03_ComboEdition_C_BndEvt__WB_ProgressSlider_K2Node_ComponentBoundEvent_48_OnUnhovered__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.BndEvt__WB_ProgressSlider_K2Node_ComponentBoundEvent_609_OnProgressChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button03_ComboEdition_C::BndEvt__WB_ProgressSlider_K2Node_ComponentBoundEvent_609_OnProgressChanged__DelegateSignature(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.BndEvt__WB_ProgressSlider_K2Node_ComponentBoundEvent_609_OnProgressChanged__DelegateSignature");

	UWB_Button03_ComboEdition_C_BndEvt__WB_ProgressSlider_K2Node_ComponentBoundEvent_609_OnProgressChanged__DelegateSignature_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.BndEvt__WB_ProgressSlider_K2Node_ComponentBoundEvent_602_OnHovered__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWB_Button03_ComboEdition_C::BndEvt__WB_ProgressSlider_K2Node_ComponentBoundEvent_602_OnHovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.BndEvt__WB_ProgressSlider_K2Node_ComponentBoundEvent_602_OnHovered__DelegateSignature");

	UWB_Button03_ComboEdition_C_BndEvt__WB_ProgressSlider_K2Node_ComponentBoundEvent_602_OnHovered__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.BndEvt__Button_Slider_K2Node_ComponentBoundEvent_123_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWB_Button03_ComboEdition_C::BndEvt__Button_Slider_K2Node_ComponentBoundEvent_123_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.BndEvt__Button_Slider_K2Node_ComponentBoundEvent_123_OnButtonHoverEvent__DelegateSignature");

	UWB_Button03_ComboEdition_C_BndEvt__Button_Slider_K2Node_ComponentBoundEvent_123_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.BndEvt__Button_Slider_K2Node_ComponentBoundEvent_120_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWB_Button03_ComboEdition_C::BndEvt__Button_Slider_K2Node_ComponentBoundEvent_120_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.BndEvt__Button_Slider_K2Node_ComponentBoundEvent_120_OnButtonHoverEvent__DelegateSignature");

	UWB_Button03_ComboEdition_C_BndEvt__Button_Slider_K2Node_ComponentBoundEvent_120_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.UnhoverSliderButton
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWB_Button03_ComboEdition_C::UnhoverSliderButton()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.UnhoverSliderButton");

	UWB_Button03_ComboEdition_C_UnhoverSliderButton_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.Construct_SliderOption
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWB_Button03_ComboEdition_C::Construct_SliderOption()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.Construct_SliderOption");

	UWB_Button03_ComboEdition_C_Construct_SliderOption_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.PreConstruct_SliderOption
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWB_Button03_ComboEdition_C::PreConstruct_SliderOption()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.PreConstruct_SliderOption");

	UWB_Button03_ComboEdition_C_PreConstruct_SliderOption_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.Slider_CheckUserFocus
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWB_Button03_ComboEdition_C::Slider_CheckUserFocus()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.Slider_CheckUserFocus");

	UWB_Button03_ComboEdition_C_Slider_CheckUserFocus_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.ExecuteUbergraph_WB_Button03_ComboEdition
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button03_ComboEdition_C::ExecuteUbergraph_WB_Button03_ComboEdition(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.ExecuteUbergraph_WB_Button03_ComboEdition");

	UWB_Button03_ComboEdition_C_ExecuteUbergraph_WB_Button03_ComboEdition_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.OnSelectionChanged (ComboBox)__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		TEnumAsByte<SlateCore_ESelectInfo>                 SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button03_ComboEdition_C::OnSelectionChanged__ComboBox___DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<SlateCore_ESelectInfo> SelectionType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.OnSelectionChanged (ComboBox)__DelegateSignature");

	UWB_Button03_ComboEdition_C_OnSelectionChanged__ComboBox___DelegateSignature_Params params {};
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.OnSliderChanged__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              ValueNormalized                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button03_ComboEdition_C::OnSliderChanged__DelegateSignature(float ValueNormalized, float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.OnSliderChanged__DelegateSignature");

	UWB_Button03_ComboEdition_C_OnSliderChanged__DelegateSignature_Params params {};
	params.ValueNormalized = ValueNormalized;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.On Key Emptied Right__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FInputChord                                 Last_Selected_Key                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UWB_Button03_ComboEdition_C::On_Key_Emptied_Right__DelegateSignature(const struct FInputChord& Last_Selected_Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.On Key Emptied Right__DelegateSignature");

	UWB_Button03_ComboEdition_C_On_Key_Emptied_Right__DelegateSignature_Params params {};
	params.Last_Selected_Key = Last_Selected_Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.On Key Emptied Left__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FInputChord                                 Last_Selected_Key                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UWB_Button03_ComboEdition_C::On_Key_Emptied_Left__DelegateSignature(const struct FInputChord& Last_Selected_Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.On Key Emptied Left__DelegateSignature");

	UWB_Button03_ComboEdition_C_On_Key_Emptied_Left__DelegateSignature_Params params {};
	params.Last_Selected_Key = Last_Selected_Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.On Selected Key Right__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWB_Button03_ComboEdition_C*                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FInputChord                                 SelectedKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UWB_Button03_ComboEdition_C::On_Selected_Key_Right__DelegateSignature(class UWB_Button03_ComboEdition_C* Button, const struct FInputChord& SelectedKey)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.On Selected Key Right__DelegateSignature");

	UWB_Button03_ComboEdition_C_On_Selected_Key_Right__DelegateSignature_Params params {};
	params.Button = Button;
	params.SelectedKey = SelectedKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.On Selected Key Left__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWB_Button03_ComboEdition_C*                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FInputChord                                 SelectedKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UWB_Button03_ComboEdition_C::On_Selected_Key_Left__DelegateSignature(class UWB_Button03_ComboEdition_C* Button, const struct FInputChord& SelectedKey)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.On Selected Key Left__DelegateSignature");

	UWB_Button03_ComboEdition_C_On_Selected_Key_Left__DelegateSignature_Params params {};
	params.Button = Button;
	params.SelectedKey = SelectedKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.OnStateChanged__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       StateName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                StateIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button03_ComboEdition_C::OnStateChanged__DelegateSignature(const struct FName& StateName, int StateIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.OnStateChanged__DelegateSignature");

	UWB_Button03_ComboEdition_C_OnStateChanged__DelegateSignature_Params params {};
	params.StateName = StateName;
	params.StateIndex = StateIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
