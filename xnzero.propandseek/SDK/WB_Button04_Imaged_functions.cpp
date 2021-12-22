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
//		Name   -> Function WB_Button04_Imaged.WB_Button04_Imaged_C.B04_GetScale_Clicked
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Scale                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button04_Imaged_C::B04_GetScale_Clicked(float* Scale)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Imaged.WB_Button04_Imaged_C.B04_GetScale_Clicked");

	UWB_Button04_Imaged_C_B04_GetScale_Clicked_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Scale != nullptr)
		*Scale = params.Scale;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_Imaged.WB_Button04_Imaged_C.B04_GetScale_Hovered
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Scale                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button04_Imaged_C::B04_GetScale_Hovered(float* Scale)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Imaged.WB_Button04_Imaged_C.B04_GetScale_Hovered");

	UWB_Button04_Imaged_C_B04_GetScale_Hovered_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Scale != nullptr)
		*Scale = params.Scale;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_Imaged.WB_Button04_Imaged_C.B04_GetImage
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UObject*                                     Image_Brush                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector2D                                   Image_Translation                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button04_Imaged_C::B04_GetImage(class UObject** Image_Brush, struct FVector2D* Image_Translation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Imaged.WB_Button04_Imaged_C.B04_GetImage");

	UWB_Button04_Imaged_C_B04_GetImage_Params params {};

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
//		Name   -> Function WB_Button04_Imaged.WB_Button04_Imaged_C.AddHintIcon
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UClass*                                      HintIcon                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button04_Imaged_C::AddHintIcon(class UClass* HintIcon)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Imaged.WB_Button04_Imaged_C.AddHintIcon");

	UWB_Button04_Imaged_C_AddHintIcon_Params params {};
	params.HintIcon = HintIcon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_Imaged.WB_Button04_Imaged_C.GetCurrentScale
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FVector2D                                   Scale                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button04_Imaged_C::GetCurrentScale(struct FVector2D* Scale)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Imaged.WB_Button04_Imaged_C.GetCurrentScale");

	UWB_Button04_Imaged_C_GetCurrentScale_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Scale != nullptr)
		*Scale = params.Scale;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_Imaged.WB_Button04_Imaged_C.UpdateImageSaturation
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWB_Button04_Imaged_C::UpdateImageSaturation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Imaged.WB_Button04_Imaged_C.UpdateImageSaturation");

	UWB_Button04_Imaged_C_UpdateImageSaturation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_Imaged.WB_Button04_Imaged_C.UpdateImageColors
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWB_Button04_Imaged_C::UpdateImageColors()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Imaged.WB_Button04_Imaged_C.UpdateImageColors");

	UWB_Button04_Imaged_C_UpdateImageColors_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_Imaged.WB_Button04_Imaged_C.RemoveContentWidget
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWB_Button04_Imaged_C::RemoveContentWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Imaged.WB_Button04_Imaged_C.RemoveContentWidget");

	UWB_Button04_Imaged_C_RemoveContentWidget_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_Imaged.WB_Button04_Imaged_C.CreateContentWidget
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UClass*                                      ContentWidget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button04_Imaged_C::CreateContentWidget(class UClass* ContentWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Imaged.WB_Button04_Imaged_C.CreateContentWidget");

	UWB_Button04_Imaged_C_CreateContentWidget_Params params {};
	params.ContentWidget = ContentWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_Imaged.WB_Button04_Imaged_C.IsContentWidgetValid
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWB_Button04_Imaged_C::IsContentWidgetValid()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Imaged.WB_Button04_Imaged_C.IsContentWidgetValid");

	UWB_Button04_Imaged_C_IsContentWidgetValid_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_Imaged.WB_Button04_Imaged_C.Set_AllFrameColours
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWB_Button04_Imaged_C::Set_AllFrameColours()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Imaged.WB_Button04_Imaged_C.Set_AllFrameColours");

	UWB_Button04_Imaged_C_Set_AllFrameColours_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_Imaged.WB_Button04_Imaged_C.Set_FrameColor
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                FrameColor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button04_Imaged_C::Set_FrameColor(const struct FLinearColor& FrameColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Imaged.WB_Button04_Imaged_C.Set_FrameColor");

	UWB_Button04_Imaged_C_Set_FrameColor_Params params {};
	params.FrameColor = FrameColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_Imaged.WB_Button04_Imaged_C.GetButtonJustification
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<EJustification_EJustification>         EJustification                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button04_Imaged_C::GetButtonJustification(TEnumAsByte<EJustification_EJustification>* EJustification)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Imaged.WB_Button04_Imaged_C.GetButtonJustification");

	UWB_Button04_Imaged_C_GetButtonJustification_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (EJustification != nullptr)
		*EJustification = params.EJustification;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_Imaged.WB_Button04_Imaged_C.GetUserFocus
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APlayerController*                           Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               HasFocus                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_Button04_Imaged_C::GetUserFocus(class APlayerController* Player, bool* HasFocus)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Imaged.WB_Button04_Imaged_C.GetUserFocus");

	UWB_Button04_Imaged_C_GetUserFocus_Params params {};
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HasFocus != nullptr)
		*HasFocus = params.HasFocus;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_Imaged.WB_Button04_Imaged_C.GetButtonFontInfo_Disabled
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UFont*                                       Font                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UFontFace*                                   Typeface                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                FontSize                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                Color                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button04_Imaged_C::GetButtonFontInfo_Disabled(class UFont** Font, class UFontFace** Typeface, int* FontSize, struct FLinearColor* Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Imaged.WB_Button04_Imaged_C.GetButtonFontInfo_Disabled");

	UWB_Button04_Imaged_C_GetButtonFontInfo_Disabled_Params params {};

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
//		Name   -> Function WB_Button04_Imaged.WB_Button04_Imaged_C.GetButtonFontInfo_Clicked
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UFont*                                       Font                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UFontFace*                                   Typeface                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Integer                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                Color                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button04_Imaged_C::GetButtonFontInfo_Clicked(class UFont** Font, class UFontFace** Typeface, int* Integer, struct FLinearColor* Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Imaged.WB_Button04_Imaged_C.GetButtonFontInfo_Clicked");

	UWB_Button04_Imaged_C_GetButtonFontInfo_Clicked_Params params {};

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
//		Name   -> Function WB_Button04_Imaged.WB_Button04_Imaged_C.GetButtonFontInfo_Hovered
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UFont*                                       Font                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UFontFace*                                   Typeface                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                FontSize                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                Color                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button04_Imaged_C::GetButtonFontInfo_Hovered(class UFont** Font, class UFontFace** Typeface, int* FontSize, struct FLinearColor* Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Imaged.WB_Button04_Imaged_C.GetButtonFontInfo_Hovered");

	UWB_Button04_Imaged_C_GetButtonFontInfo_Hovered_Params params {};

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
//		Name   -> Function WB_Button04_Imaged.WB_Button04_Imaged_C.GetButtonFontInfo_Normal
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UFont*                                       Font                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UFontFace*                                   Typeface                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                FontSize                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                Color                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button04_Imaged_C::GetButtonFontInfo_Normal(class UFont** Font, class UFontFace** Typeface, int* FontSize, struct FLinearColor* Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Imaged.WB_Button04_Imaged_C.GetButtonFontInfo_Normal");

	UWB_Button04_Imaged_C_GetButtonFontInfo_Normal_Params params {};

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
//		Name   -> Function WB_Button04_Imaged.WB_Button04_Imaged_C.GetButtonText
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       ButtonText                                                 (Parm, OutParm)
void UWB_Button04_Imaged_C::GetButtonText(struct FText* ButtonText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Imaged.WB_Button04_Imaged_C.GetButtonText");

	UWB_Button04_Imaged_C_GetButtonText_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ButtonText != nullptr)
		*ButtonText = params.ButtonText;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_Imaged.WB_Button04_Imaged_C.GetButtonEnabled
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               BIsEnabled                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_Button04_Imaged_C::GetButtonEnabled(bool* BIsEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Imaged.WB_Button04_Imaged_C.GetButtonEnabled");

	UWB_Button04_Imaged_C_GetButtonEnabled_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BIsEnabled != nullptr)
		*BIsEnabled = params.BIsEnabled;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_Imaged.WB_Button04_Imaged_C.UpdateIsEnabled
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               BIsEnabled                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_Button04_Imaged_C::UpdateIsEnabled(bool BIsEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Imaged.WB_Button04_Imaged_C.UpdateIsEnabled");

	UWB_Button04_Imaged_C_UpdateIsEnabled_Params params {};
	params.BIsEnabled = BIsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_Imaged.WB_Button04_Imaged_C.SetFontInfo_OnDisabled
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWB_Button04_Imaged_C::SetFontInfo_OnDisabled()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Imaged.WB_Button04_Imaged_C.SetFontInfo_OnDisabled");

	UWB_Button04_Imaged_C_SetFontInfo_OnDisabled_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_Imaged.WB_Button04_Imaged_C.SetButtonSizeScale
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector2D                                   Size                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button04_Imaged_C::SetButtonSizeScale(const struct FVector2D& Size)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Imaged.WB_Button04_Imaged_C.SetButtonSizeScale");

	UWB_Button04_Imaged_C_SetButtonSizeScale_Params params {};
	params.Size = Size;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_Imaged.WB_Button04_Imaged_C.SetResponsiveHoveringToNativeButton
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWB_Button04_Imaged_C::SetResponsiveHoveringToNativeButton()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Imaged.WB_Button04_Imaged_C.SetResponsiveHoveringToNativeButton");

	UWB_Button04_Imaged_C_SetResponsiveHoveringToNativeButton_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_Imaged.WB_Button04_Imaged_C.UnhoverAllNativeButtons
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWB_Button04_Imaged_C::UnhoverAllNativeButtons()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Imaged.WB_Button04_Imaged_C.UnhoverAllNativeButtons");

	UWB_Button04_Imaged_C_UnhoverAllNativeButtons_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_Imaged.WB_Button04_Imaged_C.SetButtonSounds
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class USoundBase*                                  OnClicked_Sound                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class USoundBase*                                  OnHovered_Sound                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button04_Imaged_C::SetButtonSounds(class USoundBase* OnClicked_Sound, class USoundBase* OnHovered_Sound)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Imaged.WB_Button04_Imaged_C.SetButtonSounds");

	UWB_Button04_Imaged_C_SetButtonSounds_Params params {};
	params.OnClicked_Sound = OnClicked_Sound;
	params.OnHovered_Sound = OnHovered_Sound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_Imaged.WB_Button04_Imaged_C.UpdateBaseButtonJustification
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<EJustification_EJustification>         Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button04_Imaged_C::UpdateBaseButtonJustification(TEnumAsByte<EJustification_EJustification> Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Imaged.WB_Button04_Imaged_C.UpdateBaseButtonJustification");

	UWB_Button04_Imaged_C_UpdateBaseButtonJustification_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_Imaged.WB_Button04_Imaged_C.UpdateButtonJustification
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<EJustification_EJustification>         EJustification                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button04_Imaged_C::UpdateButtonJustification(TEnumAsByte<EJustification_EJustification> EJustification)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Imaged.WB_Button04_Imaged_C.UpdateButtonJustification");

	UWB_Button04_Imaged_C_UpdateButtonJustification_Params params {};
	params.EJustification = EJustification;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_Imaged.WB_Button04_Imaged_C.GetButton
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UButton*                                     Base_Button                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button04_Imaged_C::GetButton(class UButton** Base_Button)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Imaged.WB_Button04_Imaged_C.GetButton");

	UWB_Button04_Imaged_C_GetButton_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Base_Button != nullptr)
		*Base_Button = params.Base_Button;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_Imaged.WB_Button04_Imaged_C.SetFontInfo_OnClicked
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWB_Button04_Imaged_C::SetFontInfo_OnClicked()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Imaged.WB_Button04_Imaged_C.SetFontInfo_OnClicked");

	UWB_Button04_Imaged_C_SetFontInfo_OnClicked_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_Imaged.WB_Button04_Imaged_C.SetFontInfo_OnNormal
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWB_Button04_Imaged_C::SetFontInfo_OnNormal()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Imaged.WB_Button04_Imaged_C.SetFontInfo_OnNormal");

	UWB_Button04_Imaged_C_SetFontInfo_OnNormal_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_Imaged.WB_Button04_Imaged_C.SetFontInfo_OnHovered
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWB_Button04_Imaged_C::SetFontInfo_OnHovered()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Imaged.WB_Button04_Imaged_C.SetFontInfo_OnHovered");

	UWB_Button04_Imaged_C_SetFontInfo_OnHovered_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_Imaged.WB_Button04_Imaged_C.SetButtonFontInfo_Current
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UFont*                                       Font                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UFontFace*                                   Typeface                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                FontSize                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button04_Imaged_C::SetButtonFontInfo_Current(class UFont* Font, class UFontFace* Typeface, int FontSize, const struct FLinearColor& Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Imaged.WB_Button04_Imaged_C.SetButtonFontInfo_Current");

	UWB_Button04_Imaged_C_SetButtonFontInfo_Current_Params params {};
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
//		Name   -> Function WB_Button04_Imaged.WB_Button04_Imaged_C.SetButtonEnabled
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               BIsEnabled                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_Button04_Imaged_C::SetButtonEnabled(bool BIsEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Imaged.WB_Button04_Imaged_C.SetButtonEnabled");

	UWB_Button04_Imaged_C_SetButtonEnabled_Params params {};
	params.BIsEnabled = BIsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_Imaged.WB_Button04_Imaged_C.SetButtonFontInfo_Normal
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UFont*                                       Font                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UFontFace*                                   Typeface                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                FontSize                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button04_Imaged_C::SetButtonFontInfo_Normal(class UFont* Font, class UFontFace* Typeface, int FontSize, const struct FLinearColor& Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Imaged.WB_Button04_Imaged_C.SetButtonFontInfo_Normal");

	UWB_Button04_Imaged_C_SetButtonFontInfo_Normal_Params params {};
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
//		Name   -> Function WB_Button04_Imaged.WB_Button04_Imaged_C.SetButtonFontInfo_Hovered
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UFont*                                       Font                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UFontFace*                                   Typeface                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                FontSize                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button04_Imaged_C::SetButtonFontInfo_Hovered(class UFont* Font, class UFontFace* Typeface, int FontSize, const struct FLinearColor& Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Imaged.WB_Button04_Imaged_C.SetButtonFontInfo_Hovered");

	UWB_Button04_Imaged_C_SetButtonFontInfo_Hovered_Params params {};
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
//		Name   -> Function WB_Button04_Imaged.WB_Button04_Imaged_C.SetButtonFontInfo_Clicked
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UFont*                                       Font                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UFontFace*                                   Typeface                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                FontSize                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button04_Imaged_C::SetButtonFontInfo_Clicked(class UFont* Font, class UFontFace* Typeface, int FontSize, const struct FLinearColor& Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Imaged.WB_Button04_Imaged_C.SetButtonFontInfo_Clicked");

	UWB_Button04_Imaged_C_SetButtonFontInfo_Clicked_Params params {};
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
//		Name   -> Function WB_Button04_Imaged.WB_Button04_Imaged_C.SetButtonFontInfo_Disabled
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UFont*                                       Font                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UFontFace*                                   Typeface                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                FontSize                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button04_Imaged_C::SetButtonFontInfo_Disabled(class UFont* Font, class UFontFace* Typeface, int FontSize, const struct FLinearColor& Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Imaged.WB_Button04_Imaged_C.SetButtonFontInfo_Disabled");

	UWB_Button04_Imaged_C_SetButtonFontInfo_Disabled_Params params {};
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
//		Name   -> Function WB_Button04_Imaged.WB_Button04_Imaged_C.SetButtonText
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       ButtonText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
void UWB_Button04_Imaged_C::SetButtonText(const struct FText& ButtonText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Imaged.WB_Button04_Imaged_C.SetButtonText");

	UWB_Button04_Imaged_C_SetButtonText_Params params {};
	params.ButtonText = ButtonText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_Imaged.WB_Button04_Imaged_C.SetUser_Focus
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APlayerController*                           Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button04_Imaged_C::SetUser_Focus(class APlayerController* Player)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Imaged.WB_Button04_Imaged_C.SetUser_Focus");

	UWB_Button04_Imaged_C_SetUser_Focus_Params params {};
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_Imaged.WB_Button04_Imaged_C.SetHintIcon
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UClass*                                      HintIcon                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button04_Imaged_C::SetHintIcon(class UClass* HintIcon)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Imaged.WB_Button04_Imaged_C.SetHintIcon");

	UWB_Button04_Imaged_C_SetHintIcon_Params params {};
	params.HintIcon = HintIcon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_Imaged.WB_Button04_Imaged_C.SetButtonSound_OnClicked
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class USoundBase*                                  ClickedSound                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button04_Imaged_C::SetButtonSound_OnClicked(class USoundBase* ClickedSound)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Imaged.WB_Button04_Imaged_C.SetButtonSound_OnClicked");

	UWB_Button04_Imaged_C_SetButtonSound_OnClicked_Params params {};
	params.ClickedSound = ClickedSound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_Imaged.WB_Button04_Imaged_C.SetButtonSound_OnHovered
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class USoundBase*                                  HoveredSound                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button04_Imaged_C::SetButtonSound_OnHovered(class USoundBase* HoveredSound)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Imaged.WB_Button04_Imaged_C.SetButtonSound_OnHovered");

	UWB_Button04_Imaged_C_SetButtonSound_OnHovered_Params params {};
	params.HoveredSound = HoveredSound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_Imaged.WB_Button04_Imaged_C.SetButtonJustification
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<EJustification_EJustification>         EJustification                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button04_Imaged_C::SetButtonJustification(TEnumAsByte<EJustification_EJustification> EJustification)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Imaged.WB_Button04_Imaged_C.SetButtonJustification");

	UWB_Button04_Imaged_C_SetButtonJustification_Params params {};
	params.EJustification = EJustification;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_Imaged.WB_Button04_Imaged_C.B04_SetFrameColor_Normal
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                FrameColor1                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                FrameColor2                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                FrameColor_Shine                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                ShineFxColor_Background                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                ShineFxColor_Small                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                ShineFxColor_Big                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button04_Imaged_C::B04_SetFrameColor_Normal(const struct FLinearColor& FrameColor1, const struct FLinearColor& FrameColor2, const struct FLinearColor& FrameColor_Shine, const struct FLinearColor& ShineFxColor_Background, const struct FLinearColor& ShineFxColor_Small, const struct FLinearColor& ShineFxColor_Big)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Imaged.WB_Button04_Imaged_C.B04_SetFrameColor_Normal");

	UWB_Button04_Imaged_C_B04_SetFrameColor_Normal_Params params {};
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
//		Name   -> Function WB_Button04_Imaged.WB_Button04_Imaged_C.B04_SetFrameColor_Hovered
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                FrameColor1                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                FrameColor2                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                FrameColor_Shine                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                ShineFxColor_Background                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                ShineFxColor_Small                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                ShineFxColor_Big                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button04_Imaged_C::B04_SetFrameColor_Hovered(const struct FLinearColor& FrameColor1, const struct FLinearColor& FrameColor2, const struct FLinearColor& FrameColor_Shine, const struct FLinearColor& ShineFxColor_Background, const struct FLinearColor& ShineFxColor_Small, const struct FLinearColor& ShineFxColor_Big)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Imaged.WB_Button04_Imaged_C.B04_SetFrameColor_Hovered");

	UWB_Button04_Imaged_C_B04_SetFrameColor_Hovered_Params params {};
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
//		Name   -> Function WB_Button04_Imaged.WB_Button04_Imaged_C.B04_SetFrameColor_Clicked
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                FrameColor1                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                FrameColor2                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                FrameColor_Shine                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                ShineFxColor_Background                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                ShineFxColor_Small                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                ShineFxColor_Big                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button04_Imaged_C::B04_SetFrameColor_Clicked(const struct FLinearColor& FrameColor1, const struct FLinearColor& FrameColor2, const struct FLinearColor& FrameColor_Shine, const struct FLinearColor& ShineFxColor_Background, const struct FLinearColor& ShineFxColor_Small, const struct FLinearColor& ShineFxColor_Big)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Imaged.WB_Button04_Imaged_C.B04_SetFrameColor_Clicked");

	UWB_Button04_Imaged_C_B04_SetFrameColor_Clicked_Params params {};
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
//		Name   -> Function WB_Button04_Imaged.WB_Button04_Imaged_C.B04_SetFrameColor_Disabled
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                FrameColor1                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                FrameColor2                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                FrameColor_Shine                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button04_Imaged_C::B04_SetFrameColor_Disabled(const struct FLinearColor& FrameColor1, const struct FLinearColor& FrameColor2, const struct FLinearColor& FrameColor_Shine)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Imaged.WB_Button04_Imaged_C.B04_SetFrameColor_Disabled");

	UWB_Button04_Imaged_C_B04_SetFrameColor_Disabled_Params params {};
	params.FrameColor1 = FrameColor1;
	params.FrameColor2 = FrameColor2;
	params.FrameColor_Shine = FrameColor_Shine;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_Imaged.WB_Button04_Imaged_C.B04_SetFrameColor_Current
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                FrameColor1                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                FrameColor2                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                FrameColor_Shine                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                ShineFxColor_Background                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                ShineFxColor_Small                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                ShineFxColor_Big                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button04_Imaged_C::B04_SetFrameColor_Current(const struct FLinearColor& FrameColor1, const struct FLinearColor& FrameColor2, const struct FLinearColor& FrameColor_Shine, const struct FLinearColor& ShineFxColor_Background, const struct FLinearColor& ShineFxColor_Small, const struct FLinearColor& ShineFxColor_Big)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Imaged.WB_Button04_Imaged_C.B04_SetFrameColor_Current");

	UWB_Button04_Imaged_C_B04_SetFrameColor_Current_Params params {};
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
//		Name   -> Function WB_Button04_Imaged.WB_Button04_Imaged_C.B04_CreateContentWidget
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UClass*                                      ContentWidget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button04_Imaged_C::B04_CreateContentWidget(class UClass* ContentWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Imaged.WB_Button04_Imaged_C.B04_CreateContentWidget");

	UWB_Button04_Imaged_C_B04_CreateContentWidget_Params params {};
	params.ContentWidget = ContentWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_Imaged.WB_Button04_Imaged_C.B04_RemoveContentWidget
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWB_Button04_Imaged_C::B04_RemoveContentWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Imaged.WB_Button04_Imaged_C.B04_RemoveContentWidget");

	UWB_Button04_Imaged_C_B04_RemoveContentWidget_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_Imaged.WB_Button04_Imaged_C.B04_SetShineFxEnabled
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               BIsEnabled                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_Button04_Imaged_C::B04_SetShineFxEnabled(bool BIsEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Imaged.WB_Button04_Imaged_C.B04_SetShineFxEnabled");

	UWB_Button04_Imaged_C_B04_SetShineFxEnabled_Params params {};
	params.BIsEnabled = BIsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_Imaged.WB_Button04_Imaged_C.B04_SetImage
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UObject*                                     ImageBrush                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector2D                                   ImageTranslation                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button04_Imaged_C::B04_SetImage(class UObject* ImageBrush, const struct FVector2D& ImageTranslation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Imaged.WB_Button04_Imaged_C.B04_SetImage");

	UWB_Button04_Imaged_C_B04_SetImage_Params params {};
	params.ImageBrush = ImageBrush;
	params.ImageTranslation = ImageTranslation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_Imaged.WB_Button04_Imaged_C.B04_SetImageColor_Normal
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                ImageColor_Normal                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Saturation_Normal                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button04_Imaged_C::B04_SetImageColor_Normal(const struct FLinearColor& ImageColor_Normal, float Saturation_Normal)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Imaged.WB_Button04_Imaged_C.B04_SetImageColor_Normal");

	UWB_Button04_Imaged_C_B04_SetImageColor_Normal_Params params {};
	params.ImageColor_Normal = ImageColor_Normal;
	params.Saturation_Normal = Saturation_Normal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_Imaged.WB_Button04_Imaged_C.B04_SetImageColor_Hovered
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                ImageColor_Hovered                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Saturation_Hovered                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button04_Imaged_C::B04_SetImageColor_Hovered(const struct FLinearColor& ImageColor_Hovered, float Saturation_Hovered)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Imaged.WB_Button04_Imaged_C.B04_SetImageColor_Hovered");

	UWB_Button04_Imaged_C_B04_SetImageColor_Hovered_Params params {};
	params.ImageColor_Hovered = ImageColor_Hovered;
	params.Saturation_Hovered = Saturation_Hovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_Imaged.WB_Button04_Imaged_C.B04_SetImageColor_Clicked
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                ImageColor_Clicked                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Saturation_Clicked                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button04_Imaged_C::B04_SetImageColor_Clicked(const struct FLinearColor& ImageColor_Clicked, float Saturation_Clicked)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Imaged.WB_Button04_Imaged_C.B04_SetImageColor_Clicked");

	UWB_Button04_Imaged_C_B04_SetImageColor_Clicked_Params params {};
	params.ImageColor_Clicked = ImageColor_Clicked;
	params.Saturation_Clicked = Saturation_Clicked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_Imaged.WB_Button04_Imaged_C.B04_SetImageColor_Disabled
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                ImageColor_Disabled                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Saturation_Disabled                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button04_Imaged_C::B04_SetImageColor_Disabled(const struct FLinearColor& ImageColor_Disabled, float Saturation_Disabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Imaged.WB_Button04_Imaged_C.B04_SetImageColor_Disabled");

	UWB_Button04_Imaged_C_B04_SetImageColor_Disabled_Params params {};
	params.ImageColor_Disabled = ImageColor_Disabled;
	params.Saturation_Disabled = Saturation_Disabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_Imaged.WB_Button04_Imaged_C.B04_SetVignetteColor
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                VignetteColor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button04_Imaged_C::B04_SetVignetteColor(const struct FLinearColor& VignetteColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Imaged.WB_Button04_Imaged_C.B04_SetVignetteColor");

	UWB_Button04_Imaged_C_B04_SetVignetteColor_Params params {};
	params.VignetteColor = VignetteColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_Imaged.WB_Button04_Imaged_C.B04_SetScale
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Scale                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button04_Imaged_C::B04_SetScale(float Scale)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Imaged.WB_Button04_Imaged_C.B04_SetScale");

	UWB_Button04_Imaged_C_B04_SetScale_Params params {};
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_Imaged.WB_Button04_Imaged_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWB_Button04_Imaged_C::BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Imaged.WB_Button04_Imaged_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature");

	UWB_Button04_Imaged_C_BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_Imaged.WB_Button04_Imaged_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWB_Button04_Imaged_C::BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Imaged.WB_Button04_Imaged_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature");

	UWB_Button04_Imaged_C_BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_Imaged.WB_Button04_Imaged_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_7_OnUnhovered__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWB_Button04_Imaged_C::BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_7_OnUnhovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Imaged.WB_Button04_Imaged_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_7_OnUnhovered__DelegateSignature");

	UWB_Button04_Imaged_C_BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_7_OnUnhovered__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_Imaged.WB_Button04_Imaged_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_8_OnPressed__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWB_Button04_Imaged_C::BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_8_OnPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Imaged.WB_Button04_Imaged_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_8_OnPressed__DelegateSignature");

	UWB_Button04_Imaged_C_BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_8_OnPressed__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_Imaged.WB_Button04_Imaged_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_9_OnReleased__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWB_Button04_Imaged_C::BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_9_OnReleased__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Imaged.WB_Button04_Imaged_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_9_OnReleased__DelegateSignature");

	UWB_Button04_Imaged_C_BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_9_OnReleased__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_Imaged.WB_Button04_Imaged_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWB_Button04_Imaged_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Imaged.WB_Button04_Imaged_C.Construct");

	UWB_Button04_Imaged_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_Imaged.WB_Button04_Imaged_C.CheckHasFocus
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWB_Button04_Imaged_C::CheckHasFocus()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Imaged.WB_Button04_Imaged_C.CheckHasFocus");

	UWB_Button04_Imaged_C_CheckHasFocus_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_Imaged.WB_Button04_Imaged_C.OnInputSwitched
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<EInputType_EInputType>                 InputType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button04_Imaged_C::OnInputSwitched(TEnumAsByte<EInputType_EInputType> InputType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Imaged.WB_Button04_Imaged_C.OnInputSwitched");

	UWB_Button04_Imaged_C_OnInputSwitched_Params params {};
	params.InputType = InputType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_Imaged.WB_Button04_Imaged_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_0_OnDisabled__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWB_Button04_Imaged_C::BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_0_OnDisabled__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Imaged.WB_Button04_Imaged_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_0_OnDisabled__DelegateSignature");

	UWB_Button04_Imaged_C_BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_0_OnDisabled__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_Imaged.WB_Button04_Imaged_C.CheckScale
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWB_Button04_Imaged_C::CheckScale()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Imaged.WB_Button04_Imaged_C.CheckScale");

	UWB_Button04_Imaged_C_CheckScale_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_Imaged.WB_Button04_Imaged_C.BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_143_OnUnfocused__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWB_Button04_Imaged_C::BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_143_OnUnfocused__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Imaged.WB_Button04_Imaged_C.BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_143_OnUnfocused__DelegateSignature");

	UWB_Button04_Imaged_C_BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_143_OnUnfocused__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_Imaged.WB_Button04_Imaged_C.BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_142_OnFocused__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWB_Button04_Imaged_C::BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_142_OnFocused__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Imaged.WB_Button04_Imaged_C.BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_142_OnFocused__DelegateSignature");

	UWB_Button04_Imaged_C_BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_142_OnFocused__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_Imaged.WB_Button04_Imaged_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_Button04_Imaged_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Imaged.WB_Button04_Imaged_C.PreConstruct");

	UWB_Button04_Imaged_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_Imaged.WB_Button04_Imaged_C.ExecuteUbergraph_WB_Button04_Imaged
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button04_Imaged_C::ExecuteUbergraph_WB_Button04_Imaged(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Imaged.WB_Button04_Imaged_C.ExecuteUbergraph_WB_Button04_Imaged");

	UWB_Button04_Imaged_C_ExecuteUbergraph_WB_Button04_Imaged_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_Imaged.WB_Button04_Imaged_C.OnUnfocused__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWB_Button04_Imaged_C::OnUnfocused__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Imaged.WB_Button04_Imaged_C.OnUnfocused__DelegateSignature");

	UWB_Button04_Imaged_C_OnUnfocused__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_Imaged.WB_Button04_Imaged_C.OnFocused__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWB_Button04_Imaged_C::OnFocused__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Imaged.WB_Button04_Imaged_C.OnFocused__DelegateSignature");

	UWB_Button04_Imaged_C_OnFocused__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_Imaged.WB_Button04_Imaged_C.OnDisabled__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWB_Button04_Imaged_C::OnDisabled__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Imaged.WB_Button04_Imaged_C.OnDisabled__DelegateSignature");

	UWB_Button04_Imaged_C_OnDisabled__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_Imaged.WB_Button04_Imaged_C.OnReleased__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWB_Button04_Imaged_C::OnReleased__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Imaged.WB_Button04_Imaged_C.OnReleased__DelegateSignature");

	UWB_Button04_Imaged_C_OnReleased__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_Imaged.WB_Button04_Imaged_C.OnPressed__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWB_Button04_Imaged_C::OnPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Imaged.WB_Button04_Imaged_C.OnPressed__DelegateSignature");

	UWB_Button04_Imaged_C_OnPressed__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_Imaged.WB_Button04_Imaged_C.OnUnhovered__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWB_Button04_Imaged_C::OnUnhovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Imaged.WB_Button04_Imaged_C.OnUnhovered__DelegateSignature");

	UWB_Button04_Imaged_C_OnUnhovered__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_Imaged.WB_Button04_Imaged_C.OnHovered__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWB_Button04_Imaged_C::OnHovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Imaged.WB_Button04_Imaged_C.OnHovered__DelegateSignature");

	UWB_Button04_Imaged_C_OnHovered__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_Imaged.WB_Button04_Imaged_C.OnClicked__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWB_Button04_Imaged_C::OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Imaged.WB_Button04_Imaged_C.OnClicked__DelegateSignature");

	UWB_Button04_Imaged_C_OnClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
