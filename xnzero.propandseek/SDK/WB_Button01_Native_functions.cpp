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
//		Name   -> Function WB_Button01_Native.WB_Button01_Native_C.GetButtonJustification
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<EJustification_EJustification>         EJustification                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button01_Native_C::GetButtonJustification(TEnumAsByte<EJustification_EJustification>* EJustification)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button01_Native.WB_Button01_Native_C.GetButtonJustification");

	UWB_Button01_Native_C_GetButtonJustification_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (EJustification != nullptr)
		*EJustification = params.EJustification;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button01_Native.WB_Button01_Native_C.GetUserFocus
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APlayerController*                           Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               HasFocus                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_Button01_Native_C::GetUserFocus(class APlayerController* Player, bool* HasFocus)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button01_Native.WB_Button01_Native_C.GetUserFocus");

	UWB_Button01_Native_C_GetUserFocus_Params params {};
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HasFocus != nullptr)
		*HasFocus = params.HasFocus;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button01_Native.WB_Button01_Native_C.GetButtonFontInfo_Disabled
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UFont*                                       Font                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UFontFace*                                   Typeface                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                FontSize                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                Color                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button01_Native_C::GetButtonFontInfo_Disabled(class UFont** Font, class UFontFace** Typeface, int* FontSize, struct FLinearColor* Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button01_Native.WB_Button01_Native_C.GetButtonFontInfo_Disabled");

	UWB_Button01_Native_C_GetButtonFontInfo_Disabled_Params params {};

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
//		Name   -> Function WB_Button01_Native.WB_Button01_Native_C.GetButtonFontInfo_Clicked
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UFont*                                       Font                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UFontFace*                                   Typeface                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Integer                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                Color                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button01_Native_C::GetButtonFontInfo_Clicked(class UFont** Font, class UFontFace** Typeface, int* Integer, struct FLinearColor* Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button01_Native.WB_Button01_Native_C.GetButtonFontInfo_Clicked");

	UWB_Button01_Native_C_GetButtonFontInfo_Clicked_Params params {};

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
//		Name   -> Function WB_Button01_Native.WB_Button01_Native_C.GetButtonFontInfo_Hovered
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UFont*                                       Font                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UFontFace*                                   Typeface                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                FontSize                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                Color                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button01_Native_C::GetButtonFontInfo_Hovered(class UFont** Font, class UFontFace** Typeface, int* FontSize, struct FLinearColor* Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button01_Native.WB_Button01_Native_C.GetButtonFontInfo_Hovered");

	UWB_Button01_Native_C_GetButtonFontInfo_Hovered_Params params {};

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
//		Name   -> Function WB_Button01_Native.WB_Button01_Native_C.GetButtonFontInfo_Normal
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UFont*                                       Font                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UFontFace*                                   Typeface                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                FontSize                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                Color                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button01_Native_C::GetButtonFontInfo_Normal(class UFont** Font, class UFontFace** Typeface, int* FontSize, struct FLinearColor* Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button01_Native.WB_Button01_Native_C.GetButtonFontInfo_Normal");

	UWB_Button01_Native_C_GetButtonFontInfo_Normal_Params params {};

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
//		Name   -> Function WB_Button01_Native.WB_Button01_Native_C.GetButtonText
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       ButtonText                                                 (Parm, OutParm)
void UWB_Button01_Native_C::GetButtonText(struct FText* ButtonText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button01_Native.WB_Button01_Native_C.GetButtonText");

	UWB_Button01_Native_C_GetButtonText_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ButtonText != nullptr)
		*ButtonText = params.ButtonText;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button01_Native.WB_Button01_Native_C.GetButtonEnabled
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               BIsEnabled                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_Button01_Native_C::GetButtonEnabled(bool* BIsEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button01_Native.WB_Button01_Native_C.GetButtonEnabled");

	UWB_Button01_Native_C_GetButtonEnabled_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BIsEnabled != nullptr)
		*BIsEnabled = params.BIsEnabled;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button01_Native.WB_Button01_Native_C.UpdateIsEnabled
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               BIsEnabled                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_Button01_Native_C::UpdateIsEnabled(bool BIsEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button01_Native.WB_Button01_Native_C.UpdateIsEnabled");

	UWB_Button01_Native_C_UpdateIsEnabled_Params params {};
	params.BIsEnabled = BIsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button01_Native.WB_Button01_Native_C.SetFontInfo_OnDisabled
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWB_Button01_Native_C::SetFontInfo_OnDisabled()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button01_Native.WB_Button01_Native_C.SetFontInfo_OnDisabled");

	UWB_Button01_Native_C_SetFontInfo_OnDisabled_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button01_Native.WB_Button01_Native_C.Update_ClickFX_Color
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                ClickFXColor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button01_Native_C::Update_ClickFX_Color(const struct FLinearColor& ClickFXColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button01_Native.WB_Button01_Native_C.Update_ClickFX_Color");

	UWB_Button01_Native_C_Update_ClickFX_Color_Params params {};
	params.ClickFXColor = ClickFXColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button01_Native.WB_Button01_Native_C.SetFontInfo_FX_OnClicked
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWB_Button01_Native_C::SetFontInfo_FX_OnClicked()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button01_Native.WB_Button01_Native_C.SetFontInfo_FX_OnClicked");

	UWB_Button01_Native_C_SetFontInfo_FX_OnClicked_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button01_Native.WB_Button01_Native_C.SetFX_BaselineHeight
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button01_Native_C::SetFX_BaselineHeight(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button01_Native.WB_Button01_Native_C.SetFX_BaselineHeight");

	UWB_Button01_Native_C_SetFX_BaselineHeight_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button01_Native.WB_Button01_Native_C.SetNativeButtonClickAreaHeight
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector2D                                   Size                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button01_Native_C::SetNativeButtonClickAreaHeight(const struct FVector2D& Size)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button01_Native.WB_Button01_Native_C.SetNativeButtonClickAreaHeight");

	UWB_Button01_Native_C_SetNativeButtonClickAreaHeight_Params params {};
	params.Size = Size;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button01_Native.WB_Button01_Native_C.SetResponsiveHoveringToNativeButton
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWB_Button01_Native_C::SetResponsiveHoveringToNativeButton()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button01_Native.WB_Button01_Native_C.SetResponsiveHoveringToNativeButton");

	UWB_Button01_Native_C_SetResponsiveHoveringToNativeButton_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button01_Native.WB_Button01_Native_C.UnhoverAllNativeButtons
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWB_Button01_Native_C::UnhoverAllNativeButtons()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button01_Native.WB_Button01_Native_C.UnhoverAllNativeButtons");

	UWB_Button01_Native_C_UnhoverAllNativeButtons_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button01_Native.WB_Button01_Native_C.SetButtonSounds
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class USoundBase*                                  OnClicked_Sound                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class USoundBase*                                  OnHovered_Sound                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button01_Native_C::SetButtonSounds(class USoundBase* OnClicked_Sound, class USoundBase* OnHovered_Sound)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button01_Native.WB_Button01_Native_C.SetButtonSounds");

	UWB_Button01_Native_C_SetButtonSounds_Params params {};
	params.OnClicked_Sound = OnClicked_Sound;
	params.OnHovered_Sound = OnHovered_Sound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button01_Native.WB_Button01_Native_C.UpdateBaseButtonJustification
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<EJustification_EJustification>         Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button01_Native_C::UpdateBaseButtonJustification(TEnumAsByte<EJustification_EJustification> Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button01_Native.WB_Button01_Native_C.UpdateBaseButtonJustification");

	UWB_Button01_Native_C_UpdateBaseButtonJustification_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button01_Native.WB_Button01_Native_C.Update_FX02_Color
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                FX02_Color                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button01_Native_C::Update_FX02_Color(const struct FLinearColor& FX02_Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button01_Native.WB_Button01_Native_C.Update_FX02_Color");

	UWB_Button01_Native_C_Update_FX02_Color_Params params {};
	params.FX02_Color = FX02_Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button01_Native.WB_Button01_Native_C.Update_FX01_Color
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                FX01_Color                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button01_Native_C::Update_FX01_Color(const struct FLinearColor& FX01_Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button01_Native.WB_Button01_Native_C.Update_FX01_Color");

	UWB_Button01_Native_C_Update_FX01_Color_Params params {};
	params.FX01_Color = FX01_Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button01_Native.WB_Button01_Native_C.UpdateButtonJustification
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<EJustification_EJustification>         EJustification                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button01_Native_C::UpdateButtonJustification(TEnumAsByte<EJustification_EJustification> EJustification)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button01_Native.WB_Button01_Native_C.UpdateButtonJustification");

	UWB_Button01_Native_C_UpdateButtonJustification_Params params {};
	params.EJustification = EJustification;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button01_Native.WB_Button01_Native_C.AddHintIcon
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UClass*                                      Widget20x20                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button01_Native_C::AddHintIcon(class UClass* Widget20x20)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button01_Native.WB_Button01_Native_C.AddHintIcon");

	UWB_Button01_Native_C_AddHintIcon_Params params {};
	params.Widget20x20 = Widget20x20;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button01_Native.WB_Button01_Native_C.GetButton
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UButton*                                     Base_Button                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button01_Native_C::GetButton(class UButton** Base_Button)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button01_Native.WB_Button01_Native_C.GetButton");

	UWB_Button01_Native_C_GetButton_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Base_Button != nullptr)
		*Base_Button = params.Base_Button;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button01_Native.WB_Button01_Native_C.SetFontInfo_OnClicked
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWB_Button01_Native_C::SetFontInfo_OnClicked()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button01_Native.WB_Button01_Native_C.SetFontInfo_OnClicked");

	UWB_Button01_Native_C_SetFontInfo_OnClicked_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button01_Native.WB_Button01_Native_C.SetFontInfo_OnNormal
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWB_Button01_Native_C::SetFontInfo_OnNormal()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button01_Native.WB_Button01_Native_C.SetFontInfo_OnNormal");

	UWB_Button01_Native_C_SetFontInfo_OnNormal_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button01_Native.WB_Button01_Native_C.SetFontInfo_OnHovered
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWB_Button01_Native_C::SetFontInfo_OnHovered()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button01_Native.WB_Button01_Native_C.SetFontInfo_OnHovered");

	UWB_Button01_Native_C_SetFontInfo_OnHovered_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button01_Native.WB_Button01_Native_C.SetButtonText
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       ButtonText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
void UWB_Button01_Native_C::SetButtonText(const struct FText& ButtonText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button01_Native.WB_Button01_Native_C.SetButtonText");

	UWB_Button01_Native_C_SetButtonText_Params params {};
	params.ButtonText = ButtonText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button01_Native.WB_Button01_Native_C.SetButtonFontInfo_Current
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UFont*                                       Font                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UFontFace*                                   Typeface                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                FontSize                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button01_Native_C::SetButtonFontInfo_Current(class UFont* Font, class UFontFace* Typeface, int FontSize, const struct FLinearColor& Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button01_Native.WB_Button01_Native_C.SetButtonFontInfo_Current");

	UWB_Button01_Native_C_SetButtonFontInfo_Current_Params params {};
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
//		Name   -> Function WB_Button01_Native.WB_Button01_Native_C.SetButtonEnabled
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               BIsEnabled                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_Button01_Native_C::SetButtonEnabled(bool BIsEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button01_Native.WB_Button01_Native_C.SetButtonEnabled");

	UWB_Button01_Native_C_SetButtonEnabled_Params params {};
	params.BIsEnabled = BIsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button01_Native.WB_Button01_Native_C.SetButtonFontInfo_Normal
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UFont*                                       Font                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UFontFace*                                   Typeface                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                FontSize                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button01_Native_C::SetButtonFontInfo_Normal(class UFont* Font, class UFontFace* Typeface, int FontSize, const struct FLinearColor& Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button01_Native.WB_Button01_Native_C.SetButtonFontInfo_Normal");

	UWB_Button01_Native_C_SetButtonFontInfo_Normal_Params params {};
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
//		Name   -> Function WB_Button01_Native.WB_Button01_Native_C.SetButtonFontInfo_Hovered
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UFont*                                       Font                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UFontFace*                                   Typeface                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                FontSize                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button01_Native_C::SetButtonFontInfo_Hovered(class UFont* Font, class UFontFace* Typeface, int FontSize, const struct FLinearColor& Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button01_Native.WB_Button01_Native_C.SetButtonFontInfo_Hovered");

	UWB_Button01_Native_C_SetButtonFontInfo_Hovered_Params params {};
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
//		Name   -> Function WB_Button01_Native.WB_Button01_Native_C.SetButtonFontInfo_Clicked
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UFont*                                       Font                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UFontFace*                                   Typeface                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                FontSize                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button01_Native_C::SetButtonFontInfo_Clicked(class UFont* Font, class UFontFace* Typeface, int FontSize, const struct FLinearColor& Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button01_Native.WB_Button01_Native_C.SetButtonFontInfo_Clicked");

	UWB_Button01_Native_C_SetButtonFontInfo_Clicked_Params params {};
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
//		Name   -> Function WB_Button01_Native.WB_Button01_Native_C.SetButtonFontInfo_Disabled
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UFont*                                       Font                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UFontFace*                                   Typeface                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                FontSize                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button01_Native_C::SetButtonFontInfo_Disabled(class UFont* Font, class UFontFace* Typeface, int FontSize, const struct FLinearColor& Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button01_Native.WB_Button01_Native_C.SetButtonFontInfo_Disabled");

	UWB_Button01_Native_C_SetButtonFontInfo_Disabled_Params params {};
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
//		Name   -> Function WB_Button01_Native.WB_Button01_Native_C.SetUser_Focus
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APlayerController*                           Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button01_Native_C::SetUser_Focus(class APlayerController* Player)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button01_Native.WB_Button01_Native_C.SetUser_Focus");

	UWB_Button01_Native_C_SetUser_Focus_Params params {};
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button01_Native.WB_Button01_Native_C.SetHintIcon
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UClass*                                      HintIcon                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button01_Native_C::SetHintIcon(class UClass* HintIcon)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button01_Native.WB_Button01_Native_C.SetHintIcon");

	UWB_Button01_Native_C_SetHintIcon_Params params {};
	params.HintIcon = HintIcon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button01_Native.WB_Button01_Native_C.SetButtonSound_OnClicked
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class USoundBase*                                  ClickedSound                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button01_Native_C::SetButtonSound_OnClicked(class USoundBase* ClickedSound)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button01_Native.WB_Button01_Native_C.SetButtonSound_OnClicked");

	UWB_Button01_Native_C_SetButtonSound_OnClicked_Params params {};
	params.ClickedSound = ClickedSound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button01_Native.WB_Button01_Native_C.SetButtonSound_OnHovered
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class USoundBase*                                  HoveredSound                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button01_Native_C::SetButtonSound_OnHovered(class USoundBase* HoveredSound)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button01_Native.WB_Button01_Native_C.SetButtonSound_OnHovered");

	UWB_Button01_Native_C_SetButtonSound_OnHovered_Params params {};
	params.HoveredSound = HoveredSound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button01_Native.WB_Button01_Native_C.B01_SetColor_HoveredFX_01
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                Color_HoveredFX_01                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button01_Native_C::B01_SetColor_HoveredFX_01(const struct FLinearColor& Color_HoveredFX_01)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button01_Native.WB_Button01_Native_C.B01_SetColor_HoveredFX_01");

	UWB_Button01_Native_C_B01_SetColor_HoveredFX_01_Params params {};
	params.Color_HoveredFX_01 = Color_HoveredFX_01;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button01_Native.WB_Button01_Native_C.B01_SetColor_HoveredFX_02
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                Color_HoveredFX_02                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button01_Native_C::B01_SetColor_HoveredFX_02(const struct FLinearColor& Color_HoveredFX_02)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button01_Native.WB_Button01_Native_C.B01_SetColor_HoveredFX_02");

	UWB_Button01_Native_C_B01_SetColor_HoveredFX_02_Params params {};
	params.Color_HoveredFX_02 = Color_HoveredFX_02;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button01_Native.WB_Button01_Native_C.B01_SetColor_ClickedFX
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                Color_ClickedFX                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button01_Native_C::B01_SetColor_ClickedFX(const struct FLinearColor& Color_ClickedFX)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button01_Native.WB_Button01_Native_C.B01_SetColor_ClickedFX");

	UWB_Button01_Native_C_B01_SetColor_ClickedFX_Params params {};
	params.Color_ClickedFX = Color_ClickedFX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button01_Native.WB_Button01_Native_C.B01_SetColor_ClickedFX_Text
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                Color_ClickedFX_Text                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button01_Native_C::B01_SetColor_ClickedFX_Text(const struct FLinearColor& Color_ClickedFX_Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button01_Native.WB_Button01_Native_C.B01_SetColor_ClickedFX_Text");

	UWB_Button01_Native_C_B01_SetColor_ClickedFX_Text_Params params {};
	params.Color_ClickedFX_Text = Color_ClickedFX_Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button01_Native.WB_Button01_Native_C.SetButtonJustification
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<EJustification_EJustification>         EJustification                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button01_Native_C::SetButtonJustification(TEnumAsByte<EJustification_EJustification> EJustification)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button01_Native.WB_Button01_Native_C.SetButtonJustification");

	UWB_Button01_Native_C_SetButtonJustification_Params params {};
	params.EJustification = EJustification;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button01_Native.WB_Button01_Native_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWB_Button01_Native_C::BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button01_Native.WB_Button01_Native_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature");

	UWB_Button01_Native_C_BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button01_Native.WB_Button01_Native_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWB_Button01_Native_C::BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button01_Native.WB_Button01_Native_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature");

	UWB_Button01_Native_C_BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button01_Native.WB_Button01_Native_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_7_OnUnhovered__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWB_Button01_Native_C::BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_7_OnUnhovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button01_Native.WB_Button01_Native_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_7_OnUnhovered__DelegateSignature");

	UWB_Button01_Native_C_BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_7_OnUnhovered__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button01_Native.WB_Button01_Native_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_8_OnPressed__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWB_Button01_Native_C::BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_8_OnPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button01_Native.WB_Button01_Native_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_8_OnPressed__DelegateSignature");

	UWB_Button01_Native_C_BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_8_OnPressed__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button01_Native.WB_Button01_Native_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_9_OnReleased__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWB_Button01_Native_C::BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_9_OnReleased__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button01_Native.WB_Button01_Native_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_9_OnReleased__DelegateSignature");

	UWB_Button01_Native_C_BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_9_OnReleased__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button01_Native.WB_Button01_Native_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWB_Button01_Native_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button01_Native.WB_Button01_Native_C.Construct");

	UWB_Button01_Native_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button01_Native.WB_Button01_Native_C.CheckHasFocus
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWB_Button01_Native_C::CheckHasFocus()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button01_Native.WB_Button01_Native_C.CheckHasFocus");

	UWB_Button01_Native_C_CheckHasFocus_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button01_Native.WB_Button01_Native_C.OnInputSwitched
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<EInputType_EInputType>                 InputType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button01_Native_C::OnInputSwitched(TEnumAsByte<EInputType_EInputType> InputType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button01_Native.WB_Button01_Native_C.OnInputSwitched");

	UWB_Button01_Native_C_OnInputSwitched_Params params {};
	params.InputType = InputType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button01_Native.WB_Button01_Native_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_0_OnDisabled__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWB_Button01_Native_C::BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_0_OnDisabled__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button01_Native.WB_Button01_Native_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_0_OnDisabled__DelegateSignature");

	UWB_Button01_Native_C_BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_0_OnDisabled__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button01_Native.WB_Button01_Native_C.BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_3_OnFocused__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWB_Button01_Native_C::BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_3_OnFocused__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button01_Native.WB_Button01_Native_C.BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_3_OnFocused__DelegateSignature");

	UWB_Button01_Native_C_BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_3_OnFocused__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button01_Native.WB_Button01_Native_C.BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_4_OnUnfocused__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWB_Button01_Native_C::BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_4_OnUnfocused__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button01_Native.WB_Button01_Native_C.BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_4_OnUnfocused__DelegateSignature");

	UWB_Button01_Native_C_BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_4_OnUnfocused__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button01_Native.WB_Button01_Native_C.OnHoveredCustom
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWB_Button01_Native_C::OnHoveredCustom()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button01_Native.WB_Button01_Native_C.OnHoveredCustom");

	UWB_Button01_Native_C_OnHoveredCustom_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button01_Native.WB_Button01_Native_C.OnUnhoveredCustom
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWB_Button01_Native_C::OnUnhoveredCustom()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button01_Native.WB_Button01_Native_C.OnUnhoveredCustom");

	UWB_Button01_Native_C_OnUnhoveredCustom_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button01_Native.WB_Button01_Native_C.RecheckTextSize
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWB_Button01_Native_C::RecheckTextSize()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button01_Native.WB_Button01_Native_C.RecheckTextSize");

	UWB_Button01_Native_C_RecheckTextSize_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button01_Native.WB_Button01_Native_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_Button01_Native_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button01_Native.WB_Button01_Native_C.PreConstruct");

	UWB_Button01_Native_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button01_Native.WB_Button01_Native_C.ExecuteUbergraph_WB_Button01_Native
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button01_Native_C::ExecuteUbergraph_WB_Button01_Native(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button01_Native.WB_Button01_Native_C.ExecuteUbergraph_WB_Button01_Native");

	UWB_Button01_Native_C_ExecuteUbergraph_WB_Button01_Native_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button01_Native.WB_Button01_Native_C.OnUnfocused__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWB_Button01_Native_C::OnUnfocused__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button01_Native.WB_Button01_Native_C.OnUnfocused__DelegateSignature");

	UWB_Button01_Native_C_OnUnfocused__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button01_Native.WB_Button01_Native_C.OnFocused__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWB_Button01_Native_C::OnFocused__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button01_Native.WB_Button01_Native_C.OnFocused__DelegateSignature");

	UWB_Button01_Native_C_OnFocused__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button01_Native.WB_Button01_Native_C.OnDisabled__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWB_Button01_Native_C::OnDisabled__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button01_Native.WB_Button01_Native_C.OnDisabled__DelegateSignature");

	UWB_Button01_Native_C_OnDisabled__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button01_Native.WB_Button01_Native_C.OnReleased__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWB_Button01_Native_C::OnReleased__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button01_Native.WB_Button01_Native_C.OnReleased__DelegateSignature");

	UWB_Button01_Native_C_OnReleased__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button01_Native.WB_Button01_Native_C.OnPressed__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWB_Button01_Native_C::OnPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button01_Native.WB_Button01_Native_C.OnPressed__DelegateSignature");

	UWB_Button01_Native_C_OnPressed__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button01_Native.WB_Button01_Native_C.OnUnhovered__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWB_Button01_Native_C::OnUnhovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button01_Native.WB_Button01_Native_C.OnUnhovered__DelegateSignature");

	UWB_Button01_Native_C_OnUnhovered__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button01_Native.WB_Button01_Native_C.OnHovered__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWB_Button01_Native_C::OnHovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button01_Native.WB_Button01_Native_C.OnHovered__DelegateSignature");

	UWB_Button01_Native_C_OnHovered__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button01_Native.WB_Button01_Native_C.OnClicked__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWB_Button01_Native_C::OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button01_Native.WB_Button01_Native_C.OnClicked__DelegateSignature");

	UWB_Button01_Native_C_OnClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
