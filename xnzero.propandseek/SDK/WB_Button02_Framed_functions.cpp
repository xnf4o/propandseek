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
//		Name   -> Function WB_Button02_Framed.WB_Button02_Framed_C.RemoveContentWidget
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWB_Button02_Framed_C::RemoveContentWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_Framed.WB_Button02_Framed_C.RemoveContentWidget");

	UWB_Button02_Framed_C_RemoveContentWidget_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button02_Framed.WB_Button02_Framed_C.CreateContentWidget
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UClass*                                      ContentWidget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button02_Framed_C::CreateContentWidget(class UClass* ContentWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_Framed.WB_Button02_Framed_C.CreateContentWidget");

	UWB_Button02_Framed_C_CreateContentWidget_Params params {};
	params.ContentWidget = ContentWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button02_Framed.WB_Button02_Framed_C.IsContentWidgetValid
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWB_Button02_Framed_C::IsContentWidgetValid()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_Framed.WB_Button02_Framed_C.IsContentWidgetValid");

	UWB_Button02_Framed_C_IsContentWidgetValid_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button02_Framed.WB_Button02_Framed_C.SetLightFX_Scale
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button02_Framed_C::SetLightFX_Scale(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_Framed.WB_Button02_Framed_C.SetLightFX_Scale");

	UWB_Button02_Framed_C_SetLightFX_Scale_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button02_Framed.WB_Button02_Framed_C.SetBokehFX_Scale
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button02_Framed_C::SetBokehFX_Scale(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_Framed.WB_Button02_Framed_C.SetBokehFX_Scale");

	UWB_Button02_Framed_C_SetBokehFX_Scale_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button02_Framed.WB_Button02_Framed_C.SetAllBlurredFrameColors
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                Color_FX01_Hovered                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                Color_FX01_Clicked                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button02_Framed_C::SetAllBlurredFrameColors(const struct FLinearColor& Color_FX01_Hovered, const struct FLinearColor& Color_FX01_Clicked)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_Framed.WB_Button02_Framed_C.SetAllBlurredFrameColors");

	UWB_Button02_Framed_C_SetAllBlurredFrameColors_Params params {};
	params.Color_FX01_Hovered = Color_FX01_Hovered;
	params.Color_FX01_Clicked = Color_FX01_Clicked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button02_Framed.WB_Button02_Framed_C.SetBlurredFrameColor
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button02_Framed_C::SetBlurredFrameColor(const struct FLinearColor& Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_Framed.WB_Button02_Framed_C.SetBlurredFrameColor");

	UWB_Button02_Framed_C_SetBlurredFrameColor_Params params {};
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button02_Framed.WB_Button02_Framed_C.Set_AllFillColors
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                FillColor_Normal                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                FillColor_Hovered                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                FillColor_Clicked                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                FillColor_Disabled                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button02_Framed_C::Set_AllFillColors(const struct FLinearColor& FillColor_Normal, const struct FLinearColor& FillColor_Hovered, const struct FLinearColor& FillColor_Clicked, const struct FLinearColor& FillColor_Disabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_Framed.WB_Button02_Framed_C.Set_AllFillColors");

	UWB_Button02_Framed_C_Set_AllFillColors_Params params {};
	params.FillColor_Normal = FillColor_Normal;
	params.FillColor_Hovered = FillColor_Hovered;
	params.FillColor_Clicked = FillColor_Clicked;
	params.FillColor_Disabled = FillColor_Disabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button02_Framed.WB_Button02_Framed_C.Set_FillColor
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                FillColor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button02_Framed_C::Set_FillColor(const struct FLinearColor& FillColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_Framed.WB_Button02_Framed_C.Set_FillColor");

	UWB_Button02_Framed_C_Set_FillColor_Params params {};
	params.FillColor = FillColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button02_Framed.WB_Button02_Framed_C.Set_AllFrameColours
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                FrameColor_Normal                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                FrameColor_Hovered                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                FrameColor_Clicked                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                FrameColor_Disabled                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button02_Framed_C::Set_AllFrameColours(const struct FLinearColor& FrameColor_Normal, const struct FLinearColor& FrameColor_Hovered, const struct FLinearColor& FrameColor_Clicked, const struct FLinearColor& FrameColor_Disabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_Framed.WB_Button02_Framed_C.Set_AllFrameColours");

	UWB_Button02_Framed_C_Set_AllFrameColours_Params params {};
	params.FrameColor_Normal = FrameColor_Normal;
	params.FrameColor_Hovered = FrameColor_Hovered;
	params.FrameColor_Clicked = FrameColor_Clicked;
	params.FrameColor_Disabled = FrameColor_Disabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button02_Framed.WB_Button02_Framed_C.Set_FrameColor
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                FrameColor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button02_Framed_C::Set_FrameColor(const struct FLinearColor& FrameColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_Framed.WB_Button02_Framed_C.Set_FrameColor");

	UWB_Button02_Framed_C_Set_FrameColor_Params params {};
	params.FrameColor = FrameColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button02_Framed.WB_Button02_Framed_C.Set_FrameDynamicShineColor
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                FrameShineColor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button02_Framed_C::Set_FrameDynamicShineColor(const struct FLinearColor& FrameShineColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_Framed.WB_Button02_Framed_C.Set_FrameDynamicShineColor");

	UWB_Button02_Framed_C_Set_FrameDynamicShineColor_Params params {};
	params.FrameShineColor = FrameShineColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button02_Framed.WB_Button02_Framed_C.Set_UseFrameDynamicShine
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bUseShine                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_Button02_Framed_C::Set_UseFrameDynamicShine(bool bUseShine)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_Framed.WB_Button02_Framed_C.Set_UseFrameDynamicShine");

	UWB_Button02_Framed_C_Set_UseFrameDynamicShine_Params params {};
	params.bUseShine = bUseShine;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button02_Framed.WB_Button02_Framed_C.GetButtonJustification
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<EJustification_EJustification>         EJustification                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button02_Framed_C::GetButtonJustification(TEnumAsByte<EJustification_EJustification>* EJustification)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_Framed.WB_Button02_Framed_C.GetButtonJustification");

	UWB_Button02_Framed_C_GetButtonJustification_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (EJustification != nullptr)
		*EJustification = params.EJustification;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button02_Framed.WB_Button02_Framed_C.GetUserFocus
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APlayerController*                           Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               HasFocus                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_Button02_Framed_C::GetUserFocus(class APlayerController* Player, bool* HasFocus)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_Framed.WB_Button02_Framed_C.GetUserFocus");

	UWB_Button02_Framed_C_GetUserFocus_Params params {};
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HasFocus != nullptr)
		*HasFocus = params.HasFocus;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button02_Framed.WB_Button02_Framed_C.GetButtonFontInfo_Disabled
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UFont*                                       Font                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UFontFace*                                   Typeface                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                FontSize                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                Color                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button02_Framed_C::GetButtonFontInfo_Disabled(class UFont** Font, class UFontFace** Typeface, int* FontSize, struct FLinearColor* Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_Framed.WB_Button02_Framed_C.GetButtonFontInfo_Disabled");

	UWB_Button02_Framed_C_GetButtonFontInfo_Disabled_Params params {};

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
//		Name   -> Function WB_Button02_Framed.WB_Button02_Framed_C.GetButtonFontInfo_Clicked
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UFont*                                       Font                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UFontFace*                                   Typeface                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Integer                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                Color                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button02_Framed_C::GetButtonFontInfo_Clicked(class UFont** Font, class UFontFace** Typeface, int* Integer, struct FLinearColor* Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_Framed.WB_Button02_Framed_C.GetButtonFontInfo_Clicked");

	UWB_Button02_Framed_C_GetButtonFontInfo_Clicked_Params params {};

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
//		Name   -> Function WB_Button02_Framed.WB_Button02_Framed_C.GetButtonFontInfo_Hovered
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UFont*                                       Font                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UFontFace*                                   Typeface                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                FontSize                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                Color                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button02_Framed_C::GetButtonFontInfo_Hovered(class UFont** Font, class UFontFace** Typeface, int* FontSize, struct FLinearColor* Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_Framed.WB_Button02_Framed_C.GetButtonFontInfo_Hovered");

	UWB_Button02_Framed_C_GetButtonFontInfo_Hovered_Params params {};

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
//		Name   -> Function WB_Button02_Framed.WB_Button02_Framed_C.GetButtonFontInfo_Normal
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UFont*                                       Font                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UFontFace*                                   Typeface                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                FontSize                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                Color                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button02_Framed_C::GetButtonFontInfo_Normal(class UFont** Font, class UFontFace** Typeface, int* FontSize, struct FLinearColor* Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_Framed.WB_Button02_Framed_C.GetButtonFontInfo_Normal");

	UWB_Button02_Framed_C_GetButtonFontInfo_Normal_Params params {};

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
//		Name   -> Function WB_Button02_Framed.WB_Button02_Framed_C.GetButtonText
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       ButtonText                                                 (Parm, OutParm)
void UWB_Button02_Framed_C::GetButtonText(struct FText* ButtonText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_Framed.WB_Button02_Framed_C.GetButtonText");

	UWB_Button02_Framed_C_GetButtonText_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ButtonText != nullptr)
		*ButtonText = params.ButtonText;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button02_Framed.WB_Button02_Framed_C.GetButtonEnabled
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               BIsEnabled                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_Button02_Framed_C::GetButtonEnabled(bool* BIsEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_Framed.WB_Button02_Framed_C.GetButtonEnabled");

	UWB_Button02_Framed_C_GetButtonEnabled_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BIsEnabled != nullptr)
		*BIsEnabled = params.BIsEnabled;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button02_Framed.WB_Button02_Framed_C.UpdateIsEnabled
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               BIsEnabled                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_Button02_Framed_C::UpdateIsEnabled(bool BIsEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_Framed.WB_Button02_Framed_C.UpdateIsEnabled");

	UWB_Button02_Framed_C_UpdateIsEnabled_Params params {};
	params.BIsEnabled = BIsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button02_Framed.WB_Button02_Framed_C.SetFontInfo_OnDisabled
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWB_Button02_Framed_C::SetFontInfo_OnDisabled()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_Framed.WB_Button02_Framed_C.SetFontInfo_OnDisabled");

	UWB_Button02_Framed_C_SetFontInfo_OnDisabled_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button02_Framed.WB_Button02_Framed_C.SetButtonSizeScale
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector2D                                   Size                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button02_Framed_C::SetButtonSizeScale(const struct FVector2D& Size)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_Framed.WB_Button02_Framed_C.SetButtonSizeScale");

	UWB_Button02_Framed_C_SetButtonSizeScale_Params params {};
	params.Size = Size;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button02_Framed.WB_Button02_Framed_C.SetResponsiveHoveringToNativeButton
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWB_Button02_Framed_C::SetResponsiveHoveringToNativeButton()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_Framed.WB_Button02_Framed_C.SetResponsiveHoveringToNativeButton");

	UWB_Button02_Framed_C_SetResponsiveHoveringToNativeButton_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button02_Framed.WB_Button02_Framed_C.UnhoverAllNativeButtons
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWB_Button02_Framed_C::UnhoverAllNativeButtons()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_Framed.WB_Button02_Framed_C.UnhoverAllNativeButtons");

	UWB_Button02_Framed_C_UnhoverAllNativeButtons_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button02_Framed.WB_Button02_Framed_C.SetButtonSounds
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class USoundBase*                                  OnClicked_Sound                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class USoundBase*                                  OnHovered_Sound                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button02_Framed_C::SetButtonSounds(class USoundBase* OnClicked_Sound, class USoundBase* OnHovered_Sound)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_Framed.WB_Button02_Framed_C.SetButtonSounds");

	UWB_Button02_Framed_C_SetButtonSounds_Params params {};
	params.OnClicked_Sound = OnClicked_Sound;
	params.OnHovered_Sound = OnHovered_Sound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button02_Framed.WB_Button02_Framed_C.UpdateBaseButtonJustification
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<EJustification_EJustification>         Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button02_Framed_C::UpdateBaseButtonJustification(TEnumAsByte<EJustification_EJustification> Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_Framed.WB_Button02_Framed_C.UpdateBaseButtonJustification");

	UWB_Button02_Framed_C_UpdateBaseButtonJustification_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button02_Framed.WB_Button02_Framed_C.UpdateButtonJustification
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<EJustification_EJustification>         EJustification                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button02_Framed_C::UpdateButtonJustification(TEnumAsByte<EJustification_EJustification> EJustification)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_Framed.WB_Button02_Framed_C.UpdateButtonJustification");

	UWB_Button02_Framed_C_UpdateButtonJustification_Params params {};
	params.EJustification = EJustification;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button02_Framed.WB_Button02_Framed_C.AddHintIcon
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UClass*                                      Widget20x20                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button02_Framed_C::AddHintIcon(class UClass* Widget20x20)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_Framed.WB_Button02_Framed_C.AddHintIcon");

	UWB_Button02_Framed_C_AddHintIcon_Params params {};
	params.Widget20x20 = Widget20x20;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button02_Framed.WB_Button02_Framed_C.GetButton
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UButton*                                     Base_Button                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button02_Framed_C::GetButton(class UButton** Base_Button)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_Framed.WB_Button02_Framed_C.GetButton");

	UWB_Button02_Framed_C_GetButton_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Base_Button != nullptr)
		*Base_Button = params.Base_Button;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button02_Framed.WB_Button02_Framed_C.SetFontInfo_OnClicked
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWB_Button02_Framed_C::SetFontInfo_OnClicked()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_Framed.WB_Button02_Framed_C.SetFontInfo_OnClicked");

	UWB_Button02_Framed_C_SetFontInfo_OnClicked_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button02_Framed.WB_Button02_Framed_C.SetFontInfo_OnNormal
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWB_Button02_Framed_C::SetFontInfo_OnNormal()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_Framed.WB_Button02_Framed_C.SetFontInfo_OnNormal");

	UWB_Button02_Framed_C_SetFontInfo_OnNormal_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button02_Framed.WB_Button02_Framed_C.SetFontInfo_OnHovered
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWB_Button02_Framed_C::SetFontInfo_OnHovered()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_Framed.WB_Button02_Framed_C.SetFontInfo_OnHovered");

	UWB_Button02_Framed_C_SetFontInfo_OnHovered_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button02_Framed.WB_Button02_Framed_C.SetButtonText
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       ButtonText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
void UWB_Button02_Framed_C::SetButtonText(const struct FText& ButtonText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_Framed.WB_Button02_Framed_C.SetButtonText");

	UWB_Button02_Framed_C_SetButtonText_Params params {};
	params.ButtonText = ButtonText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button02_Framed.WB_Button02_Framed_C.SetButtonFontInfo_Current
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UFont*                                       Font                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UFontFace*                                   Typeface                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                FontSize                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button02_Framed_C::SetButtonFontInfo_Current(class UFont* Font, class UFontFace* Typeface, int FontSize, const struct FLinearColor& Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_Framed.WB_Button02_Framed_C.SetButtonFontInfo_Current");

	UWB_Button02_Framed_C_SetButtonFontInfo_Current_Params params {};
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
//		Name   -> Function WB_Button02_Framed.WB_Button02_Framed_C.SetButtonEnabled
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               BIsEnabled                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_Button02_Framed_C::SetButtonEnabled(bool BIsEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_Framed.WB_Button02_Framed_C.SetButtonEnabled");

	UWB_Button02_Framed_C_SetButtonEnabled_Params params {};
	params.BIsEnabled = BIsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button02_Framed.WB_Button02_Framed_C.SetButtonFontInfo_Normal
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UFont*                                       Font                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UFontFace*                                   Typeface                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                FontSize                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button02_Framed_C::SetButtonFontInfo_Normal(class UFont* Font, class UFontFace* Typeface, int FontSize, const struct FLinearColor& Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_Framed.WB_Button02_Framed_C.SetButtonFontInfo_Normal");

	UWB_Button02_Framed_C_SetButtonFontInfo_Normal_Params params {};
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
//		Name   -> Function WB_Button02_Framed.WB_Button02_Framed_C.SetButtonFontInfo_Hovered
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UFont*                                       Font                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UFontFace*                                   Typeface                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                FontSize                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button02_Framed_C::SetButtonFontInfo_Hovered(class UFont* Font, class UFontFace* Typeface, int FontSize, const struct FLinearColor& Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_Framed.WB_Button02_Framed_C.SetButtonFontInfo_Hovered");

	UWB_Button02_Framed_C_SetButtonFontInfo_Hovered_Params params {};
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
//		Name   -> Function WB_Button02_Framed.WB_Button02_Framed_C.SetButtonFontInfo_Clicked
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UFont*                                       Font                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UFontFace*                                   Typeface                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                FontSize                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button02_Framed_C::SetButtonFontInfo_Clicked(class UFont* Font, class UFontFace* Typeface, int FontSize, const struct FLinearColor& Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_Framed.WB_Button02_Framed_C.SetButtonFontInfo_Clicked");

	UWB_Button02_Framed_C_SetButtonFontInfo_Clicked_Params params {};
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
//		Name   -> Function WB_Button02_Framed.WB_Button02_Framed_C.SetButtonFontInfo_Disabled
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UFont*                                       Font                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UFontFace*                                   Typeface                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                FontSize                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button02_Framed_C::SetButtonFontInfo_Disabled(class UFont* Font, class UFontFace* Typeface, int FontSize, const struct FLinearColor& Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_Framed.WB_Button02_Framed_C.SetButtonFontInfo_Disabled");

	UWB_Button02_Framed_C_SetButtonFontInfo_Disabled_Params params {};
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
//		Name   -> Function WB_Button02_Framed.WB_Button02_Framed_C.SetUser_Focus
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APlayerController*                           Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button02_Framed_C::SetUser_Focus(class APlayerController* Player)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_Framed.WB_Button02_Framed_C.SetUser_Focus");

	UWB_Button02_Framed_C_SetUser_Focus_Params params {};
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button02_Framed.WB_Button02_Framed_C.SetHintIcon
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UClass*                                      HintIcon                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button02_Framed_C::SetHintIcon(class UClass* HintIcon)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_Framed.WB_Button02_Framed_C.SetHintIcon");

	UWB_Button02_Framed_C_SetHintIcon_Params params {};
	params.HintIcon = HintIcon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button02_Framed.WB_Button02_Framed_C.SetButtonSound_OnClicked
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class USoundBase*                                  ClickedSound                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button02_Framed_C::SetButtonSound_OnClicked(class USoundBase* ClickedSound)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_Framed.WB_Button02_Framed_C.SetButtonSound_OnClicked");

	UWB_Button02_Framed_C_SetButtonSound_OnClicked_Params params {};
	params.ClickedSound = ClickedSound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button02_Framed.WB_Button02_Framed_C.SetButtonSound_OnHovered
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class USoundBase*                                  HoveredSound                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button02_Framed_C::SetButtonSound_OnHovered(class USoundBase* HoveredSound)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_Framed.WB_Button02_Framed_C.SetButtonSound_OnHovered");

	UWB_Button02_Framed_C_SetButtonSound_OnHovered_Params params {};
	params.HoveredSound = HoveredSound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button02_Framed.WB_Button02_Framed_C.SetButtonJustification
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<EJustification_EJustification>         EJustification                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button02_Framed_C::SetButtonJustification(TEnumAsByte<EJustification_EJustification> EJustification)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_Framed.WB_Button02_Framed_C.SetButtonJustification");

	UWB_Button02_Framed_C_SetButtonJustification_Params params {};
	params.EJustification = EJustification;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button02_Framed.WB_Button02_Framed_C.B02_SetFrameColor_Normal
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                FrameColor_Normal                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button02_Framed_C::B02_SetFrameColor_Normal(const struct FLinearColor& FrameColor_Normal)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_Framed.WB_Button02_Framed_C.B02_SetFrameColor_Normal");

	UWB_Button02_Framed_C_B02_SetFrameColor_Normal_Params params {};
	params.FrameColor_Normal = FrameColor_Normal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button02_Framed.WB_Button02_Framed_C.B02_SetFrameColor_Hovered
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                FrameColor_Hovered                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button02_Framed_C::B02_SetFrameColor_Hovered(const struct FLinearColor& FrameColor_Hovered)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_Framed.WB_Button02_Framed_C.B02_SetFrameColor_Hovered");

	UWB_Button02_Framed_C_B02_SetFrameColor_Hovered_Params params {};
	params.FrameColor_Hovered = FrameColor_Hovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button02_Framed.WB_Button02_Framed_C.B02_SetFrameColor_Clicked
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                FrameColor_Clicked                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button02_Framed_C::B02_SetFrameColor_Clicked(const struct FLinearColor& FrameColor_Clicked)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_Framed.WB_Button02_Framed_C.B02_SetFrameColor_Clicked");

	UWB_Button02_Framed_C_B02_SetFrameColor_Clicked_Params params {};
	params.FrameColor_Clicked = FrameColor_Clicked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button02_Framed.WB_Button02_Framed_C.B02_SetFrameColor_Disabled
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                FrameColor_Disabled                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button02_Framed_C::B02_SetFrameColor_Disabled(const struct FLinearColor& FrameColor_Disabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_Framed.WB_Button02_Framed_C.B02_SetFrameColor_Disabled");

	UWB_Button02_Framed_C_B02_SetFrameColor_Disabled_Params params {};
	params.FrameColor_Disabled = FrameColor_Disabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button02_Framed.WB_Button02_Framed_C.B02_SetFrameColor_Current
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                FrameColor_Current                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button02_Framed_C::B02_SetFrameColor_Current(const struct FLinearColor& FrameColor_Current)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_Framed.WB_Button02_Framed_C.B02_SetFrameColor_Current");

	UWB_Button02_Framed_C_B02_SetFrameColor_Current_Params params {};
	params.FrameColor_Current = FrameColor_Current;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button02_Framed.WB_Button02_Framed_C.B02_SetFillColor_Normal
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                FillColor_Normal                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button02_Framed_C::B02_SetFillColor_Normal(const struct FLinearColor& FillColor_Normal)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_Framed.WB_Button02_Framed_C.B02_SetFillColor_Normal");

	UWB_Button02_Framed_C_B02_SetFillColor_Normal_Params params {};
	params.FillColor_Normal = FillColor_Normal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button02_Framed.WB_Button02_Framed_C.B02_SetFillColor_Hovered
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                FillColor_Hovered                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button02_Framed_C::B02_SetFillColor_Hovered(const struct FLinearColor& FillColor_Hovered)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_Framed.WB_Button02_Framed_C.B02_SetFillColor_Hovered");

	UWB_Button02_Framed_C_B02_SetFillColor_Hovered_Params params {};
	params.FillColor_Hovered = FillColor_Hovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button02_Framed.WB_Button02_Framed_C.B02_SetFillColor_Clicked
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                FillColor_Clicked                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button02_Framed_C::B02_SetFillColor_Clicked(const struct FLinearColor& FillColor_Clicked)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_Framed.WB_Button02_Framed_C.B02_SetFillColor_Clicked");

	UWB_Button02_Framed_C_B02_SetFillColor_Clicked_Params params {};
	params.FillColor_Clicked = FillColor_Clicked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button02_Framed.WB_Button02_Framed_C.B02_SetFillColor_Disabled
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                FillColor_Disabled                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button02_Framed_C::B02_SetFillColor_Disabled(const struct FLinearColor& FillColor_Disabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_Framed.WB_Button02_Framed_C.B02_SetFillColor_Disabled");

	UWB_Button02_Framed_C_B02_SetFillColor_Disabled_Params params {};
	params.FillColor_Disabled = FillColor_Disabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button02_Framed.WB_Button02_Framed_C.B02_SetFillColor_Current
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                FillColor_Current                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button02_Framed_C::B02_SetFillColor_Current(const struct FLinearColor& FillColor_Current)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_Framed.WB_Button02_Framed_C.B02_SetFillColor_Current");

	UWB_Button02_Framed_C_B02_SetFillColor_Current_Params params {};
	params.FillColor_Current = FillColor_Current;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button02_Framed.WB_Button02_Framed_C.B02_SetUseDynamicShine
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bUseDynamicShine                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_Button02_Framed_C::B02_SetUseDynamicShine(bool bUseDynamicShine)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_Framed.WB_Button02_Framed_C.B02_SetUseDynamicShine");

	UWB_Button02_Framed_C_B02_SetUseDynamicShine_Params params {};
	params.bUseDynamicShine = bUseDynamicShine;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button02_Framed.WB_Button02_Framed_C.B02_SetDynamicShineColor
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                InColor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button02_Framed_C::B02_SetDynamicShineColor(const struct FLinearColor& InColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_Framed.WB_Button02_Framed_C.B02_SetDynamicShineColor");

	UWB_Button02_Framed_C_B02_SetDynamicShineColor_Params params {};
	params.InColor = InColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button02_Framed.WB_Button02_Framed_C.B02_SetBlurShineColor_Hovered
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                InColor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button02_Framed_C::B02_SetBlurShineColor_Hovered(const struct FLinearColor& InColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_Framed.WB_Button02_Framed_C.B02_SetBlurShineColor_Hovered");

	UWB_Button02_Framed_C_B02_SetBlurShineColor_Hovered_Params params {};
	params.InColor = InColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button02_Framed.WB_Button02_Framed_C.B02_SetBlurShineColor_Clicked
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                InColor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button02_Framed_C::B02_SetBlurShineColor_Clicked(const struct FLinearColor& InColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_Framed.WB_Button02_Framed_C.B02_SetBlurShineColor_Clicked");

	UWB_Button02_Framed_C_B02_SetBlurShineColor_Clicked_Params params {};
	params.InColor = InColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button02_Framed.WB_Button02_Framed_C.B02_Create_ContentWidget
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UClass*                                      ContentWidget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button02_Framed_C::B02_Create_ContentWidget(class UClass* ContentWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_Framed.WB_Button02_Framed_C.B02_Create_ContentWidget");

	UWB_Button02_Framed_C_B02_Create_ContentWidget_Params params {};
	params.ContentWidget = ContentWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button02_Framed.WB_Button02_Framed_C.B02_RemoveContentWidget
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWB_Button02_Framed_C::B02_RemoveContentWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_Framed.WB_Button02_Framed_C.B02_RemoveContentWidget");

	UWB_Button02_Framed_C_B02_RemoveContentWidget_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button02_Framed.WB_Button02_Framed_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWB_Button02_Framed_C::BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_Framed.WB_Button02_Framed_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature");

	UWB_Button02_Framed_C_BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button02_Framed.WB_Button02_Framed_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWB_Button02_Framed_C::BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_Framed.WB_Button02_Framed_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature");

	UWB_Button02_Framed_C_BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button02_Framed.WB_Button02_Framed_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_7_OnUnhovered__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWB_Button02_Framed_C::BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_7_OnUnhovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_Framed.WB_Button02_Framed_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_7_OnUnhovered__DelegateSignature");

	UWB_Button02_Framed_C_BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_7_OnUnhovered__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button02_Framed.WB_Button02_Framed_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_8_OnPressed__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWB_Button02_Framed_C::BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_8_OnPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_Framed.WB_Button02_Framed_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_8_OnPressed__DelegateSignature");

	UWB_Button02_Framed_C_BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_8_OnPressed__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button02_Framed.WB_Button02_Framed_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_9_OnReleased__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWB_Button02_Framed_C::BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_9_OnReleased__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_Framed.WB_Button02_Framed_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_9_OnReleased__DelegateSignature");

	UWB_Button02_Framed_C_BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_9_OnReleased__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button02_Framed.WB_Button02_Framed_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWB_Button02_Framed_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_Framed.WB_Button02_Framed_C.Construct");

	UWB_Button02_Framed_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button02_Framed.WB_Button02_Framed_C.CheckHasFocus
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWB_Button02_Framed_C::CheckHasFocus()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_Framed.WB_Button02_Framed_C.CheckHasFocus");

	UWB_Button02_Framed_C_CheckHasFocus_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button02_Framed.WB_Button02_Framed_C.OnInputSwitched
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<EInputType_EInputType>                 InputType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button02_Framed_C::OnInputSwitched(TEnumAsByte<EInputType_EInputType> InputType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_Framed.WB_Button02_Framed_C.OnInputSwitched");

	UWB_Button02_Framed_C_OnInputSwitched_Params params {};
	params.InputType = InputType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button02_Framed.WB_Button02_Framed_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_0_OnDisabled__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWB_Button02_Framed_C::BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_0_OnDisabled__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_Framed.WB_Button02_Framed_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_0_OnDisabled__DelegateSignature");

	UWB_Button02_Framed_C_BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_0_OnDisabled__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button02_Framed.WB_Button02_Framed_C.UpdateTextAnim
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bFadeIn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_Button02_Framed_C::UpdateTextAnim(bool bFadeIn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_Framed.WB_Button02_Framed_C.UpdateTextAnim");

	UWB_Button02_Framed_C_UpdateTextAnim_Params params {};
	params.bFadeIn = bFadeIn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button02_Framed.WB_Button02_Framed_C.BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_6_OnUnfocused__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWB_Button02_Framed_C::BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_6_OnUnfocused__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_Framed.WB_Button02_Framed_C.BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_6_OnUnfocused__DelegateSignature");

	UWB_Button02_Framed_C_BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_6_OnUnfocused__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button02_Framed.WB_Button02_Framed_C.BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_5_OnFocused__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWB_Button02_Framed_C::BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_5_OnFocused__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_Framed.WB_Button02_Framed_C.BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_5_OnFocused__DelegateSignature");

	UWB_Button02_Framed_C_BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_5_OnFocused__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button02_Framed.WB_Button02_Framed_C.RecheckTextSize
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWB_Button02_Framed_C::RecheckTextSize()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_Framed.WB_Button02_Framed_C.RecheckTextSize");

	UWB_Button02_Framed_C_RecheckTextSize_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button02_Framed.WB_Button02_Framed_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_Button02_Framed_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_Framed.WB_Button02_Framed_C.PreConstruct");

	UWB_Button02_Framed_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button02_Framed.WB_Button02_Framed_C.ExecuteUbergraph_WB_Button02_Framed
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button02_Framed_C::ExecuteUbergraph_WB_Button02_Framed(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_Framed.WB_Button02_Framed_C.ExecuteUbergraph_WB_Button02_Framed");

	UWB_Button02_Framed_C_ExecuteUbergraph_WB_Button02_Framed_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button02_Framed.WB_Button02_Framed_C.OnUnfocused__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWB_Button02_Framed_C::OnUnfocused__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_Framed.WB_Button02_Framed_C.OnUnfocused__DelegateSignature");

	UWB_Button02_Framed_C_OnUnfocused__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button02_Framed.WB_Button02_Framed_C.OnFocused__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWB_Button02_Framed_C::OnFocused__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_Framed.WB_Button02_Framed_C.OnFocused__DelegateSignature");

	UWB_Button02_Framed_C_OnFocused__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button02_Framed.WB_Button02_Framed_C.OnDisabled__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWB_Button02_Framed_C::OnDisabled__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_Framed.WB_Button02_Framed_C.OnDisabled__DelegateSignature");

	UWB_Button02_Framed_C_OnDisabled__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button02_Framed.WB_Button02_Framed_C.OnReleased__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWB_Button02_Framed_C::OnReleased__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_Framed.WB_Button02_Framed_C.OnReleased__DelegateSignature");

	UWB_Button02_Framed_C_OnReleased__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button02_Framed.WB_Button02_Framed_C.OnPressed__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWB_Button02_Framed_C::OnPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_Framed.WB_Button02_Framed_C.OnPressed__DelegateSignature");

	UWB_Button02_Framed_C_OnPressed__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button02_Framed.WB_Button02_Framed_C.OnUnhovered__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWB_Button02_Framed_C::OnUnhovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_Framed.WB_Button02_Framed_C.OnUnhovered__DelegateSignature");

	UWB_Button02_Framed_C_OnUnhovered__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button02_Framed.WB_Button02_Framed_C.OnHovered__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWB_Button02_Framed_C::OnHovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_Framed.WB_Button02_Framed_C.OnHovered__DelegateSignature");

	UWB_Button02_Framed_C_OnHovered__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button02_Framed.WB_Button02_Framed_C.OnClicked__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWB_Button02_Framed_C::OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_Framed.WB_Button02_Framed_C.OnClicked__DelegateSignature");

	UWB_Button02_Framed_C_OnClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
