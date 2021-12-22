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
//		Name   -> Function WB_Button_Base.WB_Button_Base_C.B03_GetSliderValueNormalized
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              ValueNormalized                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button_Base_C::B03_GetSliderValueNormalized(float* ValueNormalized)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button_Base.WB_Button_Base_C.B03_GetSliderValueNormalized");

	UWB_Button_Base_C_B03_GetSliderValueNormalized_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ValueNormalized != nullptr)
		*ValueNormalized = params.ValueNormalized;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button_Base.WB_Button_Base_C.B03_GetSliderValue
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button_Base_C::B03_GetSliderValue(float* Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button_Base.WB_Button_Base_C.B03_GetSliderValue");

	UWB_Button_Base_C_B03_GetSliderValue_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button_Base.WB_Button_Base_C.B03_GetKeyEscapeKeys
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<ESelectedKey_ESelectedKey>             Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<struct FKey>                                EscapeKeys                                                 (Parm, OutParm, ZeroConstructor)
void UWB_Button_Base_C::B03_GetKeyEscapeKeys(TEnumAsByte<ESelectedKey_ESelectedKey> Key, TArray<struct FKey>* EscapeKeys)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button_Base.WB_Button_Base_C.B03_GetKeyEscapeKeys");

	UWB_Button_Base_C_B03_GetKeyEscapeKeys_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (EscapeKeys != nullptr)
		*EscapeKeys = params.EscapeKeys;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button_Base.WB_Button_Base_C.B03_GetAllowModifierKeys
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<ESelectedKey_ESelectedKey>             Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bAllowModifierKeys                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_Button_Base_C::B03_GetAllowModifierKeys(TEnumAsByte<ESelectedKey_ESelectedKey> Key, bool* bAllowModifierKeys)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button_Base.WB_Button_Base_C.B03_GetAllowModifierKeys");

	UWB_Button_Base_C_B03_GetAllowModifierKeys_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bAllowModifierKeys != nullptr)
		*bAllowModifierKeys = params.bAllowModifierKeys;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button_Base.WB_Button_Base_C.B03_GetAllowGamepadKeys
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<ESelectedKey_ESelectedKey>             Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bAllowGamepadKeys                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_Button_Base_C::B03_GetAllowGamepadKeys(TEnumAsByte<ESelectedKey_ESelectedKey> Key, bool* bAllowGamepadKeys)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button_Base.WB_Button_Base_C.B03_GetAllowGamepadKeys");

	UWB_Button_Base_C_B03_GetAllowGamepadKeys_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bAllowGamepadKeys != nullptr)
		*bAllowGamepadKeys = params.bAllowGamepadKeys;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button_Base.WB_Button_Base_C.B03_GetKeySelectionText
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<ESelectedKey_ESelectedKey>             Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       KeySelectionText                                           (Parm, OutParm)
void UWB_Button_Base_C::B03_GetKeySelectionText(TEnumAsByte<ESelectedKey_ESelectedKey> Key, struct FText* KeySelectionText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button_Base.WB_Button_Base_C.B03_GetKeySelectionText");

	UWB_Button_Base_C_B03_GetKeySelectionText_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (KeySelectionText != nullptr)
		*KeySelectionText = params.KeySelectionText;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button_Base.WB_Button_Base_C.B03_GetSelectedKey
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<ESelectedKey_ESelectedKey>             Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FInputChord                                 SelectedKey                                                (Parm, OutParm, HasGetValueTypeHash)
void UWB_Button_Base_C::B03_GetSelectedKey(TEnumAsByte<ESelectedKey_ESelectedKey> Key, struct FInputChord* SelectedKey)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button_Base.WB_Button_Base_C.B03_GetSelectedKey");

	UWB_Button_Base_C_B03_GetSelectedKey_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SelectedKey != nullptr)
		*SelectedKey = params.SelectedKey;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button_Base.WB_Button_Base_C.B03_GetKeyEnabled
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<ESelectedKey_ESelectedKey>             Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bEnabled                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_Button_Base_C::B03_GetKeyEnabled(TEnumAsByte<ESelectedKey_ESelectedKey> Key, bool* bEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button_Base.WB_Button_Base_C.B03_GetKeyEnabled");

	UWB_Button_Base_C_B03_GetKeyEnabled_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bEnabled != nullptr)
		*bEnabled = params.bEnabled;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button_Base.WB_Button_Base_C.B03_GetStateByIndex
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                State                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button_Base_C::B03_GetStateByIndex(int* State)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button_Base.WB_Button_Base_C.B03_GetStateByIndex");

	UWB_Button_Base_C_B03_GetStateByIndex_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (State != nullptr)
		*State = params.State;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button_Base.WB_Button_Base_C.B03_GetStateByName
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       State                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button_Base_C::B03_GetStateByName(struct FName* State)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button_Base.WB_Button_Base_C.B03_GetStateByName");

	UWB_Button_Base_C_B03_GetStateByName_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (State != nullptr)
		*State = params.State;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button_Base.WB_Button_Base_C.B04_GetScale_Clicked
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Scale                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button_Base_C::B04_GetScale_Clicked(float* Scale)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button_Base.WB_Button_Base_C.B04_GetScale_Clicked");

	UWB_Button_Base_C_B04_GetScale_Clicked_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Scale != nullptr)
		*Scale = params.Scale;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button_Base.WB_Button_Base_C.B04_GetScale_Hovered
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Scale                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button_Base_C::B04_GetScale_Hovered(float* Scale)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button_Base.WB_Button_Base_C.B04_GetScale_Hovered");

	UWB_Button_Base_C_B04_GetScale_Hovered_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Scale != nullptr)
		*Scale = params.Scale;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button_Base.WB_Button_Base_C.B04_GetImage
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UObject*                                     Image_Brush                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector2D                                   Image_Translation                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button_Base_C::B04_GetImage(class UObject** Image_Brush, struct FVector2D* Image_Translation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button_Base.WB_Button_Base_C.B04_GetImage");

	UWB_Button_Base_C_B04_GetImage_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Image_Brush != nullptr)
		*Image_Brush = params.Image_Brush;
	if (Image_Translation != nullptr)
		*Image_Translation = params.Image_Translation;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button_Base.WB_Button_Base_C.GetButtonJustification
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<EJustification_EJustification>         EJustification                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button_Base_C::GetButtonJustification(TEnumAsByte<EJustification_EJustification>* EJustification)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button_Base.WB_Button_Base_C.GetButtonJustification");

	UWB_Button_Base_C_GetButtonJustification_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (EJustification != nullptr)
		*EJustification = params.EJustification;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button_Base.WB_Button_Base_C.GetUserFocus
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APlayerController*                           Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               HasFocus                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_Button_Base_C::GetUserFocus(class APlayerController* Player, bool* HasFocus)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button_Base.WB_Button_Base_C.GetUserFocus");

	UWB_Button_Base_C_GetUserFocus_Params params {};
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HasFocus != nullptr)
		*HasFocus = params.HasFocus;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button_Base.WB_Button_Base_C.GetButtonFontInfo_Clicked
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UFont*                                       Font                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UFontFace*                                   Typeface                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Integer                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                Color                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button_Base_C::GetButtonFontInfo_Clicked(class UFont** Font, class UFontFace** Typeface, int* Integer, struct FLinearColor* Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button_Base.WB_Button_Base_C.GetButtonFontInfo_Clicked");

	UWB_Button_Base_C_GetButtonFontInfo_Clicked_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Font != nullptr)
		*Font = params.Font;
	if (Typeface != nullptr)
		*Typeface = params.Typeface;
	if (Integer != nullptr)
		*Integer = params.Integer;
	if (Color != nullptr)
		*Color = params.Color;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button_Base.WB_Button_Base_C.GetButtonFontInfo_Disabled
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UFont*                                       Font                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UFontFace*                                   Typeface                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                FontSize                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                Color                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button_Base_C::GetButtonFontInfo_Disabled(class UFont** Font, class UFontFace** Typeface, int* FontSize, struct FLinearColor* Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button_Base.WB_Button_Base_C.GetButtonFontInfo_Disabled");

	UWB_Button_Base_C_GetButtonFontInfo_Disabled_Params params {};

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
//		Name   -> Function WB_Button_Base.WB_Button_Base_C.GetButtonFontInfo_Hovered
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UFont*                                       Font                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UFontFace*                                   Typeface                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                FontSize                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                Color                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button_Base_C::GetButtonFontInfo_Hovered(class UFont** Font, class UFontFace** Typeface, int* FontSize, struct FLinearColor* Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button_Base.WB_Button_Base_C.GetButtonFontInfo_Hovered");

	UWB_Button_Base_C_GetButtonFontInfo_Hovered_Params params {};

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
//		Name   -> Function WB_Button_Base.WB_Button_Base_C.GetButtonFontInfo_Normal
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UFont*                                       Font                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UFontFace*                                   Typeface                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                FontSize                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                Color                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button_Base_C::GetButtonFontInfo_Normal(class UFont** Font, class UFontFace** Typeface, int* FontSize, struct FLinearColor* Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button_Base.WB_Button_Base_C.GetButtonFontInfo_Normal");

	UWB_Button_Base_C_GetButtonFontInfo_Normal_Params params {};

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
//		Name   -> Function WB_Button_Base.WB_Button_Base_C.GetButtonText
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       ButtonText                                                 (Parm, OutParm)
void UWB_Button_Base_C::GetButtonText(struct FText* ButtonText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button_Base.WB_Button_Base_C.GetButtonText");

	UWB_Button_Base_C_GetButtonText_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ButtonText != nullptr)
		*ButtonText = params.ButtonText;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button_Base.WB_Button_Base_C.GetButtonEnabled
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               BIsEnabled                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_Button_Base_C::GetButtonEnabled(bool* BIsEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button_Base.WB_Button_Base_C.GetButtonEnabled");

	UWB_Button_Base_C_GetButtonEnabled_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BIsEnabled != nullptr)
		*BIsEnabled = params.BIsEnabled;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button_Base.WB_Button_Base_C.SetButtonText
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       ButtonText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
void UWB_Button_Base_C::SetButtonText(const struct FText& ButtonText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button_Base.WB_Button_Base_C.SetButtonText");

	UWB_Button_Base_C_SetButtonText_Params params {};
	params.ButtonText = ButtonText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button_Base.WB_Button_Base_C.SetButtonFontInfo_Current
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UFont*                                       Font                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UFontFace*                                   Typeface                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                FontSize                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button_Base_C::SetButtonFontInfo_Current(class UFont* Font, class UFontFace* Typeface, int FontSize, const struct FLinearColor& Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button_Base.WB_Button_Base_C.SetButtonFontInfo_Current");

	UWB_Button_Base_C_SetButtonFontInfo_Current_Params params {};
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
//		Name   -> Function WB_Button_Base.WB_Button_Base_C.SetButtonEnabled
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               BIsEnabled                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_Button_Base_C::SetButtonEnabled(bool BIsEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button_Base.WB_Button_Base_C.SetButtonEnabled");

	UWB_Button_Base_C_SetButtonEnabled_Params params {};
	params.BIsEnabled = BIsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button_Base.WB_Button_Base_C.SetButtonFontInfo_Normal
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UFont*                                       Font                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UFontFace*                                   Typeface                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                FontSize                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button_Base_C::SetButtonFontInfo_Normal(class UFont* Font, class UFontFace* Typeface, int FontSize, const struct FLinearColor& Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button_Base.WB_Button_Base_C.SetButtonFontInfo_Normal");

	UWB_Button_Base_C_SetButtonFontInfo_Normal_Params params {};
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
//		Name   -> Function WB_Button_Base.WB_Button_Base_C.SetButtonFontInfo_Hovered
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UFont*                                       Font                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UFontFace*                                   Typeface                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                FontSize                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button_Base_C::SetButtonFontInfo_Hovered(class UFont* Font, class UFontFace* Typeface, int FontSize, const struct FLinearColor& Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button_Base.WB_Button_Base_C.SetButtonFontInfo_Hovered");

	UWB_Button_Base_C_SetButtonFontInfo_Hovered_Params params {};
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
//		Name   -> Function WB_Button_Base.WB_Button_Base_C.SetButtonFontInfo_Clicked
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UFont*                                       Font                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UFontFace*                                   Typeface                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                FontSize                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button_Base_C::SetButtonFontInfo_Clicked(class UFont* Font, class UFontFace* Typeface, int FontSize, const struct FLinearColor& Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button_Base.WB_Button_Base_C.SetButtonFontInfo_Clicked");

	UWB_Button_Base_C_SetButtonFontInfo_Clicked_Params params {};
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
//		Name   -> Function WB_Button_Base.WB_Button_Base_C.SetButtonFontInfo_Disabled
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UFont*                                       Font                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UFontFace*                                   Typeface                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                FontSize                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button_Base_C::SetButtonFontInfo_Disabled(class UFont* Font, class UFontFace* Typeface, int FontSize, const struct FLinearColor& Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button_Base.WB_Button_Base_C.SetButtonFontInfo_Disabled");

	UWB_Button_Base_C_SetButtonFontInfo_Disabled_Params params {};
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
//		Name   -> Function WB_Button_Base.WB_Button_Base_C.SetUser_Focus
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APlayerController*                           Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button_Base_C::SetUser_Focus(class APlayerController* Player)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button_Base.WB_Button_Base_C.SetUser_Focus");

	UWB_Button_Base_C_SetUser_Focus_Params params {};
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button_Base.WB_Button_Base_C.SetHintIcon
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UClass*                                      HintIcon                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button_Base_C::SetHintIcon(class UClass* HintIcon)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button_Base.WB_Button_Base_C.SetHintIcon");

	UWB_Button_Base_C_SetHintIcon_Params params {};
	params.HintIcon = HintIcon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button_Base.WB_Button_Base_C.SetButtonSound_OnClicked
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class USoundBase*                                  ClickedSound                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button_Base_C::SetButtonSound_OnClicked(class USoundBase* ClickedSound)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button_Base.WB_Button_Base_C.SetButtonSound_OnClicked");

	UWB_Button_Base_C_SetButtonSound_OnClicked_Params params {};
	params.ClickedSound = ClickedSound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button_Base.WB_Button_Base_C.SetButtonSound_OnHovered
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class USoundBase*                                  HoveredSound                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button_Base_C::SetButtonSound_OnHovered(class USoundBase* HoveredSound)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button_Base.WB_Button_Base_C.SetButtonSound_OnHovered");

	UWB_Button_Base_C_SetButtonSound_OnHovered_Params params {};
	params.HoveredSound = HoveredSound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button_Base.WB_Button_Base_C.B01_SetColor_HoveredFX_01
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                Color_HoveredFX_01                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button_Base_C::B01_SetColor_HoveredFX_01(const struct FLinearColor& Color_HoveredFX_01)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button_Base.WB_Button_Base_C.B01_SetColor_HoveredFX_01");

	UWB_Button_Base_C_B01_SetColor_HoveredFX_01_Params params {};
	params.Color_HoveredFX_01 = Color_HoveredFX_01;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button_Base.WB_Button_Base_C.B01_SetColor_HoveredFX_02
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                Color_HoveredFX_02                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button_Base_C::B01_SetColor_HoveredFX_02(const struct FLinearColor& Color_HoveredFX_02)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button_Base.WB_Button_Base_C.B01_SetColor_HoveredFX_02");

	UWB_Button_Base_C_B01_SetColor_HoveredFX_02_Params params {};
	params.Color_HoveredFX_02 = Color_HoveredFX_02;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button_Base.WB_Button_Base_C.B01_SetColor_ClickedFX
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                Color_ClickedFX                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button_Base_C::B01_SetColor_ClickedFX(const struct FLinearColor& Color_ClickedFX)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button_Base.WB_Button_Base_C.B01_SetColor_ClickedFX");

	UWB_Button_Base_C_B01_SetColor_ClickedFX_Params params {};
	params.Color_ClickedFX = Color_ClickedFX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button_Base.WB_Button_Base_C.B01_SetColor_ClickedFX_Text
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                Color_ClickedFX_Text                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button_Base_C::B01_SetColor_ClickedFX_Text(const struct FLinearColor& Color_ClickedFX_Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button_Base.WB_Button_Base_C.B01_SetColor_ClickedFX_Text");

	UWB_Button_Base_C_B01_SetColor_ClickedFX_Text_Params params {};
	params.Color_ClickedFX_Text = Color_ClickedFX_Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button_Base.WB_Button_Base_C.SetButtonJustification
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<EJustification_EJustification>         EJustification                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button_Base_C::SetButtonJustification(TEnumAsByte<EJustification_EJustification> EJustification)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button_Base.WB_Button_Base_C.SetButtonJustification");

	UWB_Button_Base_C_SetButtonJustification_Params params {};
	params.EJustification = EJustification;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button_Base.WB_Button_Base_C.B02_SetFrameColor_Normal
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                FrameColor_Normal                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button_Base_C::B02_SetFrameColor_Normal(const struct FLinearColor& FrameColor_Normal)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button_Base.WB_Button_Base_C.B02_SetFrameColor_Normal");

	UWB_Button_Base_C_B02_SetFrameColor_Normal_Params params {};
	params.FrameColor_Normal = FrameColor_Normal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button_Base.WB_Button_Base_C.B02_SetFrameColor_Hovered
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                FrameColor_Hovered                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button_Base_C::B02_SetFrameColor_Hovered(const struct FLinearColor& FrameColor_Hovered)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button_Base.WB_Button_Base_C.B02_SetFrameColor_Hovered");

	UWB_Button_Base_C_B02_SetFrameColor_Hovered_Params params {};
	params.FrameColor_Hovered = FrameColor_Hovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button_Base.WB_Button_Base_C.B02_SetFrameColor_Clicked
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                FrameColor_Clicked                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button_Base_C::B02_SetFrameColor_Clicked(const struct FLinearColor& FrameColor_Clicked)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button_Base.WB_Button_Base_C.B02_SetFrameColor_Clicked");

	UWB_Button_Base_C_B02_SetFrameColor_Clicked_Params params {};
	params.FrameColor_Clicked = FrameColor_Clicked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button_Base.WB_Button_Base_C.B02_SetFrameColor_Disabled
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                FrameColor_Disabled                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button_Base_C::B02_SetFrameColor_Disabled(const struct FLinearColor& FrameColor_Disabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button_Base.WB_Button_Base_C.B02_SetFrameColor_Disabled");

	UWB_Button_Base_C_B02_SetFrameColor_Disabled_Params params {};
	params.FrameColor_Disabled = FrameColor_Disabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button_Base.WB_Button_Base_C.B02_SetFrameColor_Current
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                FrameColor_Current                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button_Base_C::B02_SetFrameColor_Current(const struct FLinearColor& FrameColor_Current)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button_Base.WB_Button_Base_C.B02_SetFrameColor_Current");

	UWB_Button_Base_C_B02_SetFrameColor_Current_Params params {};
	params.FrameColor_Current = FrameColor_Current;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button_Base.WB_Button_Base_C.B02_SetFillColor_Normal
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                FillColor_Normal                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button_Base_C::B02_SetFillColor_Normal(const struct FLinearColor& FillColor_Normal)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button_Base.WB_Button_Base_C.B02_SetFillColor_Normal");

	UWB_Button_Base_C_B02_SetFillColor_Normal_Params params {};
	params.FillColor_Normal = FillColor_Normal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button_Base.WB_Button_Base_C.B02_SetFillColor_Hovered
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                FillColor_Hovered                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button_Base_C::B02_SetFillColor_Hovered(const struct FLinearColor& FillColor_Hovered)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button_Base.WB_Button_Base_C.B02_SetFillColor_Hovered");

	UWB_Button_Base_C_B02_SetFillColor_Hovered_Params params {};
	params.FillColor_Hovered = FillColor_Hovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button_Base.WB_Button_Base_C.B02_SetFillColor_Clicked
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                FillColor_Clicked                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button_Base_C::B02_SetFillColor_Clicked(const struct FLinearColor& FillColor_Clicked)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button_Base.WB_Button_Base_C.B02_SetFillColor_Clicked");

	UWB_Button_Base_C_B02_SetFillColor_Clicked_Params params {};
	params.FillColor_Clicked = FillColor_Clicked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button_Base.WB_Button_Base_C.B02_SetFillColor_Disabled
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                FillColor_Disabled                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button_Base_C::B02_SetFillColor_Disabled(const struct FLinearColor& FillColor_Disabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button_Base.WB_Button_Base_C.B02_SetFillColor_Disabled");

	UWB_Button_Base_C_B02_SetFillColor_Disabled_Params params {};
	params.FillColor_Disabled = FillColor_Disabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button_Base.WB_Button_Base_C.B02_SetFillColor_Current
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                FillColor_Current                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button_Base_C::B02_SetFillColor_Current(const struct FLinearColor& FillColor_Current)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button_Base.WB_Button_Base_C.B02_SetFillColor_Current");

	UWB_Button_Base_C_B02_SetFillColor_Current_Params params {};
	params.FillColor_Current = FillColor_Current;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button_Base.WB_Button_Base_C.B02_SetUseDynamicShine
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bUseDynamicShine                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_Button_Base_C::B02_SetUseDynamicShine(bool bUseDynamicShine)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button_Base.WB_Button_Base_C.B02_SetUseDynamicShine");

	UWB_Button_Base_C_B02_SetUseDynamicShine_Params params {};
	params.bUseDynamicShine = bUseDynamicShine;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button_Base.WB_Button_Base_C.B02_SetDynamicShineColor
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                InColor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button_Base_C::B02_SetDynamicShineColor(const struct FLinearColor& InColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button_Base.WB_Button_Base_C.B02_SetDynamicShineColor");

	UWB_Button_Base_C_B02_SetDynamicShineColor_Params params {};
	params.InColor = InColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button_Base.WB_Button_Base_C.B02_SetBlurShineColor_Hovered
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                InColor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button_Base_C::B02_SetBlurShineColor_Hovered(const struct FLinearColor& InColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button_Base.WB_Button_Base_C.B02_SetBlurShineColor_Hovered");

	UWB_Button_Base_C_B02_SetBlurShineColor_Hovered_Params params {};
	params.InColor = InColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button_Base.WB_Button_Base_C.B02_SetBlurShineColor_Clicked
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                InColor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button_Base_C::B02_SetBlurShineColor_Clicked(const struct FLinearColor& InColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button_Base.WB_Button_Base_C.B02_SetBlurShineColor_Clicked");

	UWB_Button_Base_C_B02_SetBlurShineColor_Clicked_Params params {};
	params.InColor = InColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button_Base.WB_Button_Base_C.B02_Create_ContentWidget
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UClass*                                      ContentWidget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button_Base_C::B02_Create_ContentWidget(class UClass* ContentWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button_Base.WB_Button_Base_C.B02_Create_ContentWidget");

	UWB_Button_Base_C_B02_Create_ContentWidget_Params params {};
	params.ContentWidget = ContentWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button_Base.WB_Button_Base_C.B02_RemoveContentWidget
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWB_Button_Base_C::B02_RemoveContentWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button_Base.WB_Button_Base_C.B02_RemoveContentWidget");

	UWB_Button_Base_C_B02_RemoveContentWidget_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button_Base.WB_Button_Base_C.B03_SetStateByName
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button_Base_C::B03_SetStateByName(const struct FName& State)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button_Base.WB_Button_Base_C.B03_SetStateByName");

	UWB_Button_Base_C_B03_SetStateByName_Params params {};
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button_Base.WB_Button_Base_C.B03_SetStateByIndex
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button_Base_C::B03_SetStateByIndex(int State)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button_Base.WB_Button_Base_C.B03_SetStateByIndex");

	UWB_Button_Base_C_B03_SetStateByIndex_Params params {};
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button_Base.WB_Button_Base_C.B03_SetStateButtonIcon
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UObject*                                     Icon                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button_Base_C::B03_SetStateButtonIcon(class UObject* Icon)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button_Base.WB_Button_Base_C.B03_SetStateButtonIcon");

	UWB_Button_Base_C_B03_SetStateButtonIcon_Params params {};
	params.Icon = Icon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button_Base.WB_Button_Base_C.B03_SetStateButtonIconColor_Normal
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button_Base_C::B03_SetStateButtonIconColor_Normal(const struct FLinearColor& Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button_Base.WB_Button_Base_C.B03_SetStateButtonIconColor_Normal");

	UWB_Button_Base_C_B03_SetStateButtonIconColor_Normal_Params params {};
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button_Base.WB_Button_Base_C.B03_SetStateButtonIconColor_Hovered
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button_Base_C::B03_SetStateButtonIconColor_Hovered(const struct FLinearColor& Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button_Base.WB_Button_Base_C.B03_SetStateButtonIconColor_Hovered");

	UWB_Button_Base_C_B03_SetStateButtonIconColor_Hovered_Params params {};
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button_Base.WB_Button_Base_C.B03_SetStateButtonIconColor_Clicked
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button_Base_C::B03_SetStateButtonIconColor_Clicked(const struct FLinearColor& Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button_Base.WB_Button_Base_C.B03_SetStateButtonIconColor_Clicked");

	UWB_Button_Base_C_B03_SetStateButtonIconColor_Clicked_Params params {};
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button_Base.WB_Button_Base_C.B03_SetSelectedKey
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<ESelectedKey_ESelectedKey>             Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FInputChord                                 SelectedKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UWB_Button_Base_C::B03_SetSelectedKey(TEnumAsByte<ESelectedKey_ESelectedKey> Key, const struct FInputChord& SelectedKey)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button_Base.WB_Button_Base_C.B03_SetSelectedKey");

	UWB_Button_Base_C_B03_SetSelectedKey_Params params {};
	params.Key = Key;
	params.SelectedKey = SelectedKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button_Base.WB_Button_Base_C.B03_SetKeyEnabled
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<ESelectedKey_ESelectedKey>             Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bEnabled                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_Button_Base_C::B03_SetKeyEnabled(TEnumAsByte<ESelectedKey_ESelectedKey> Key, bool bEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button_Base.WB_Button_Base_C.B03_SetKeyEnabled");

	UWB_Button_Base_C_B03_SetKeyEnabled_Params params {};
	params.Key = Key;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button_Base.WB_Button_Base_C.B03_SetKeySelectionText
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<ESelectedKey_ESelectedKey>             Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       KeySelectionText                                           (BlueprintVisible, BlueprintReadOnly, Parm)
void UWB_Button_Base_C::B03_SetKeySelectionText(TEnumAsByte<ESelectedKey_ESelectedKey> Key, const struct FText& KeySelectionText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button_Base.WB_Button_Base_C.B03_SetKeySelectionText");

	UWB_Button_Base_C_B03_SetKeySelectionText_Params params {};
	params.Key = Key;
	params.KeySelectionText = KeySelectionText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button_Base.WB_Button_Base_C.B03_SetAllowGamepadKeys
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<ESelectedKey_ESelectedKey>             Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bAllowGamepadKeys                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_Button_Base_C::B03_SetAllowGamepadKeys(TEnumAsByte<ESelectedKey_ESelectedKey> Key, bool bAllowGamepadKeys)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button_Base.WB_Button_Base_C.B03_SetAllowGamepadKeys");

	UWB_Button_Base_C_B03_SetAllowGamepadKeys_Params params {};
	params.Key = Key;
	params.bAllowGamepadKeys = bAllowGamepadKeys;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button_Base.WB_Button_Base_C.B03_SetAllowModifierKeys
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<ESelectedKey_ESelectedKey>             Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bAllowModifierKeys                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_Button_Base_C::B03_SetAllowModifierKeys(TEnumAsByte<ESelectedKey_ESelectedKey> Key, bool bAllowModifierKeys)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button_Base.WB_Button_Base_C.B03_SetAllowModifierKeys");

	UWB_Button_Base_C_B03_SetAllowModifierKeys_Params params {};
	params.Key = Key;
	params.bAllowModifierKeys = bAllowModifierKeys;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button_Base.WB_Button_Base_C.B03_SetKeyEscapeKeys
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<ESelectedKey_ESelectedKey>             Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<struct FKey>                                EscapeKeys                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UWB_Button_Base_C::B03_SetKeyEscapeKeys(TEnumAsByte<ESelectedKey_ESelectedKey> Key, TArray<struct FKey> EscapeKeys)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button_Base.WB_Button_Base_C.B03_SetKeyEscapeKeys");

	UWB_Button_Base_C_B03_SetKeyEscapeKeys_Params params {};
	params.Key = Key;
	params.EscapeKeys = EscapeKeys;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button_Base.WB_Button_Base_C.B03_CreateContentWidget
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UClass*                                      ContentWidget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button_Base_C::B03_CreateContentWidget(class UClass* ContentWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button_Base.WB_Button_Base_C.B03_CreateContentWidget");

	UWB_Button_Base_C_B03_CreateContentWidget_Params params {};
	params.ContentWidget = ContentWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button_Base.WB_Button_Base_C.B03_RemoveContentWidget
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWB_Button_Base_C::B03_RemoveContentWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button_Base.WB_Button_Base_C.B03_RemoveContentWidget");

	UWB_Button_Base_C_B03_RemoveContentWidget_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button_Base.WB_Button_Base_C.B04_SetFrameColor_Normal
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                FrameColor1                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                FrameColor2                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                FrameColor_Shine                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                ShineFxColor_Background                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                ShineFxColor_Small                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                ShineFxColor_Big                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button_Base_C::B04_SetFrameColor_Normal(const struct FLinearColor& FrameColor1, const struct FLinearColor& FrameColor2, const struct FLinearColor& FrameColor_Shine, const struct FLinearColor& ShineFxColor_Background, const struct FLinearColor& ShineFxColor_Small, const struct FLinearColor& ShineFxColor_Big)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button_Base.WB_Button_Base_C.B04_SetFrameColor_Normal");

	UWB_Button_Base_C_B04_SetFrameColor_Normal_Params params {};
	params.FrameColor1 = FrameColor1;
	params.FrameColor2 = FrameColor2;
	params.FrameColor_Shine = FrameColor_Shine;
	params.ShineFxColor_Background = ShineFxColor_Background;
	params.ShineFxColor_Small = ShineFxColor_Small;
	params.ShineFxColor_Big = ShineFxColor_Big;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button_Base.WB_Button_Base_C.B04_SetFrameColor_Hovered
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                FrameColor1                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                FrameColor2                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                FrameColor_Shine                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                ShineFxColor_Background                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                ShineFxColor_Small                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                ShineFxColor_Big                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button_Base_C::B04_SetFrameColor_Hovered(const struct FLinearColor& FrameColor1, const struct FLinearColor& FrameColor2, const struct FLinearColor& FrameColor_Shine, const struct FLinearColor& ShineFxColor_Background, const struct FLinearColor& ShineFxColor_Small, const struct FLinearColor& ShineFxColor_Big)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button_Base.WB_Button_Base_C.B04_SetFrameColor_Hovered");

	UWB_Button_Base_C_B04_SetFrameColor_Hovered_Params params {};
	params.FrameColor1 = FrameColor1;
	params.FrameColor2 = FrameColor2;
	params.FrameColor_Shine = FrameColor_Shine;
	params.ShineFxColor_Background = ShineFxColor_Background;
	params.ShineFxColor_Small = ShineFxColor_Small;
	params.ShineFxColor_Big = ShineFxColor_Big;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button_Base.WB_Button_Base_C.B04_SetFrameColor_Clicked
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                FrameColor1                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                FrameColor2                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                FrameColor_Shine                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                ShineFxColor_Background                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                ShineFxColor_Small                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                ShineFxColor_Big                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button_Base_C::B04_SetFrameColor_Clicked(const struct FLinearColor& FrameColor1, const struct FLinearColor& FrameColor2, const struct FLinearColor& FrameColor_Shine, const struct FLinearColor& ShineFxColor_Background, const struct FLinearColor& ShineFxColor_Small, const struct FLinearColor& ShineFxColor_Big)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button_Base.WB_Button_Base_C.B04_SetFrameColor_Clicked");

	UWB_Button_Base_C_B04_SetFrameColor_Clicked_Params params {};
	params.FrameColor1 = FrameColor1;
	params.FrameColor2 = FrameColor2;
	params.FrameColor_Shine = FrameColor_Shine;
	params.ShineFxColor_Background = ShineFxColor_Background;
	params.ShineFxColor_Small = ShineFxColor_Small;
	params.ShineFxColor_Big = ShineFxColor_Big;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button_Base.WB_Button_Base_C.B04_SetFrameColor_Disabled
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                FrameColor1                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                FrameColor2                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                FrameColor_Shine                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button_Base_C::B04_SetFrameColor_Disabled(const struct FLinearColor& FrameColor1, const struct FLinearColor& FrameColor2, const struct FLinearColor& FrameColor_Shine)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button_Base.WB_Button_Base_C.B04_SetFrameColor_Disabled");

	UWB_Button_Base_C_B04_SetFrameColor_Disabled_Params params {};
	params.FrameColor1 = FrameColor1;
	params.FrameColor2 = FrameColor2;
	params.FrameColor_Shine = FrameColor_Shine;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button_Base.WB_Button_Base_C.B04_SetFrameColor_Current
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                FrameColor1                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                FrameColor2                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                FrameColor_Shine                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                ShineFxColor_Background                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                ShineFxColor_Small                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                ShineFxColor_Big                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button_Base_C::B04_SetFrameColor_Current(const struct FLinearColor& FrameColor1, const struct FLinearColor& FrameColor2, const struct FLinearColor& FrameColor_Shine, const struct FLinearColor& ShineFxColor_Background, const struct FLinearColor& ShineFxColor_Small, const struct FLinearColor& ShineFxColor_Big)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button_Base.WB_Button_Base_C.B04_SetFrameColor_Current");

	UWB_Button_Base_C_B04_SetFrameColor_Current_Params params {};
	params.FrameColor1 = FrameColor1;
	params.FrameColor2 = FrameColor2;
	params.FrameColor_Shine = FrameColor_Shine;
	params.ShineFxColor_Background = ShineFxColor_Background;
	params.ShineFxColor_Small = ShineFxColor_Small;
	params.ShineFxColor_Big = ShineFxColor_Big;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button_Base.WB_Button_Base_C.B04_SetShineFxEnabled
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               BIsEnabled                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_Button_Base_C::B04_SetShineFxEnabled(bool BIsEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button_Base.WB_Button_Base_C.B04_SetShineFxEnabled");

	UWB_Button_Base_C_B04_SetShineFxEnabled_Params params {};
	params.BIsEnabled = BIsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button_Base.WB_Button_Base_C.B04_CreateContentWidget
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UClass*                                      ContentWidget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button_Base_C::B04_CreateContentWidget(class UClass* ContentWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button_Base.WB_Button_Base_C.B04_CreateContentWidget");

	UWB_Button_Base_C_B04_CreateContentWidget_Params params {};
	params.ContentWidget = ContentWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button_Base.WB_Button_Base_C.B04_RemoveContentWidget
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWB_Button_Base_C::B04_RemoveContentWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button_Base.WB_Button_Base_C.B04_RemoveContentWidget");

	UWB_Button_Base_C_B04_RemoveContentWidget_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button_Base.WB_Button_Base_C.B04_SetImage
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UObject*                                     ImageBrush                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector2D                                   ImageTranslation                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button_Base_C::B04_SetImage(class UObject* ImageBrush, const struct FVector2D& ImageTranslation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button_Base.WB_Button_Base_C.B04_SetImage");

	UWB_Button_Base_C_B04_SetImage_Params params {};
	params.ImageBrush = ImageBrush;
	params.ImageTranslation = ImageTranslation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button_Base.WB_Button_Base_C.B04_SetImageColor_Normal
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                ImageColor_Normal                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Saturation_Normal                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button_Base_C::B04_SetImageColor_Normal(const struct FLinearColor& ImageColor_Normal, float Saturation_Normal)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button_Base.WB_Button_Base_C.B04_SetImageColor_Normal");

	UWB_Button_Base_C_B04_SetImageColor_Normal_Params params {};
	params.ImageColor_Normal = ImageColor_Normal;
	params.Saturation_Normal = Saturation_Normal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button_Base.WB_Button_Base_C.B04_SetImageColor_Hovered
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                ImageColor_Hovered                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Saturation_Hovered                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button_Base_C::B04_SetImageColor_Hovered(const struct FLinearColor& ImageColor_Hovered, float Saturation_Hovered)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button_Base.WB_Button_Base_C.B04_SetImageColor_Hovered");

	UWB_Button_Base_C_B04_SetImageColor_Hovered_Params params {};
	params.ImageColor_Hovered = ImageColor_Hovered;
	params.Saturation_Hovered = Saturation_Hovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button_Base.WB_Button_Base_C.B04_SetImageColor_Clicked
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                ImageColor_Clicked                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Saturation_Clicked                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button_Base_C::B04_SetImageColor_Clicked(const struct FLinearColor& ImageColor_Clicked, float Saturation_Clicked)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button_Base.WB_Button_Base_C.B04_SetImageColor_Clicked");

	UWB_Button_Base_C_B04_SetImageColor_Clicked_Params params {};
	params.ImageColor_Clicked = ImageColor_Clicked;
	params.Saturation_Clicked = Saturation_Clicked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button_Base.WB_Button_Base_C.B04_SetImageColor_Disabled
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                ImageColor_Disabled                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Saturation_Disabled                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button_Base_C::B04_SetImageColor_Disabled(const struct FLinearColor& ImageColor_Disabled, float Saturation_Disabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button_Base.WB_Button_Base_C.B04_SetImageColor_Disabled");

	UWB_Button_Base_C_B04_SetImageColor_Disabled_Params params {};
	params.ImageColor_Disabled = ImageColor_Disabled;
	params.Saturation_Disabled = Saturation_Disabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button_Base.WB_Button_Base_C.B04_SetVignetteColor
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                VignetteColor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button_Base_C::B04_SetVignetteColor(const struct FLinearColor& VignetteColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button_Base.WB_Button_Base_C.B04_SetVignetteColor");

	UWB_Button_Base_C_B04_SetVignetteColor_Params params {};
	params.VignetteColor = VignetteColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button_Base.WB_Button_Base_C.B04_SetScale
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Scale                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button_Base_C::B04_SetScale(float Scale)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button_Base.WB_Button_Base_C.B04_SetScale");

	UWB_Button_Base_C_B04_SetScale_Params params {};
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button_Base.WB_Button_Base_C.B03_SetSliderValue
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button_Base_C::B03_SetSliderValue(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button_Base.WB_Button_Base_C.B03_SetSliderValue");

	UWB_Button_Base_C_B03_SetSliderValue_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button_Base.WB_Button_Base_C.B03_SetSliderValueNormalized
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              ValueNormalized                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button_Base_C::B03_SetSliderValueNormalized(float ValueNormalized)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button_Base.WB_Button_Base_C.B03_SetSliderValueNormalized");

	UWB_Button_Base_C_B03_SetSliderValueNormalized_Params params {};
	params.ValueNormalized = ValueNormalized;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button_Base.WB_Button_Base_C.ExecuteUbergraph_WB_Button_Base
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button_Base_C::ExecuteUbergraph_WB_Button_Base(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button_Base.WB_Button_Base_C.ExecuteUbergraph_WB_Button_Base");

	UWB_Button_Base_C_ExecuteUbergraph_WB_Button_Base_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
