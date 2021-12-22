﻿#pragma once

// Name: pns, Version: 1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function WB_Button02_Framed.WB_Button02_Framed_C.RemoveContentWidget
struct UWB_Button02_Framed_C_RemoveContentWidget_Params
{
};

// Function WB_Button02_Framed.WB_Button02_Framed_C.CreateContentWidget
struct UWB_Button02_Framed_C_CreateContentWidget_Params
{
	class UClass*                                      ContentWidget;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button02_Framed.WB_Button02_Framed_C.IsContentWidgetValid
struct UWB_Button02_Framed_C_IsContentWidgetValid_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WB_Button02_Framed.WB_Button02_Framed_C.SetLightFX_Scale
struct UWB_Button02_Framed_C_SetLightFX_Scale_Params
{
	float                                              Value;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button02_Framed.WB_Button02_Framed_C.SetBokehFX_Scale
struct UWB_Button02_Framed_C_SetBokehFX_Scale_Params
{
	float                                              Value;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button02_Framed.WB_Button02_Framed_C.SetAllBlurredFrameColors
struct UWB_Button02_Framed_C_SetAllBlurredFrameColors_Params
{
	struct FLinearColor                                Color_FX01_Hovered;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Color_FX01_Clicked;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button02_Framed.WB_Button02_Framed_C.SetBlurredFrameColor
struct UWB_Button02_Framed_C_SetBlurredFrameColor_Params
{
	struct FLinearColor                                Color;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button02_Framed.WB_Button02_Framed_C.Set_AllFillColors
struct UWB_Button02_Framed_C_Set_AllFillColors_Params
{
	struct FLinearColor                                FillColor_Normal;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                FillColor_Hovered;                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                FillColor_Clicked;                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                FillColor_Disabled;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button02_Framed.WB_Button02_Framed_C.Set_FillColor
struct UWB_Button02_Framed_C_Set_FillColor_Params
{
	struct FLinearColor                                FillColor;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button02_Framed.WB_Button02_Framed_C.Set_AllFrameColours
struct UWB_Button02_Framed_C_Set_AllFrameColours_Params
{
	struct FLinearColor                                FrameColor_Normal;                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                FrameColor_Hovered;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                FrameColor_Clicked;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                FrameColor_Disabled;                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button02_Framed.WB_Button02_Framed_C.Set_FrameColor
struct UWB_Button02_Framed_C_Set_FrameColor_Params
{
	struct FLinearColor                                FrameColor;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button02_Framed.WB_Button02_Framed_C.Set_FrameDynamicShineColor
struct UWB_Button02_Framed_C_Set_FrameDynamicShineColor_Params
{
	struct FLinearColor                                FrameShineColor;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button02_Framed.WB_Button02_Framed_C.Set_UseFrameDynamicShine
struct UWB_Button02_Framed_C_Set_UseFrameDynamicShine_Params
{
	bool                                               bUseShine;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_Button02_Framed.WB_Button02_Framed_C.GetButtonJustification
struct UWB_Button02_Framed_C_GetButtonJustification_Params
{
	TEnumAsByte<EJustification_EJustification>         EJustification;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button02_Framed.WB_Button02_Framed_C.GetUserFocus
struct UWB_Button02_Framed_C_GetUserFocus_Params
{
	class APlayerController*                           Player;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               HasFocus;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_Button02_Framed.WB_Button02_Framed_C.GetButtonFontInfo_Disabled
struct UWB_Button02_Framed_C_GetButtonFontInfo_Disabled_Params
{
	class UFont*                                       Font;                                                      // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   Typeface;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FontSize;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                     // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button02_Framed.WB_Button02_Framed_C.GetButtonFontInfo_Clicked
struct UWB_Button02_Framed_C_GetButtonFontInfo_Clicked_Params
{
	class UFont*                                       Font;                                                      // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   Typeface;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Integer;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                     // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button02_Framed.WB_Button02_Framed_C.GetButtonFontInfo_Hovered
struct UWB_Button02_Framed_C_GetButtonFontInfo_Hovered_Params
{
	class UFont*                                       Font;                                                      // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   Typeface;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FontSize;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                     // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button02_Framed.WB_Button02_Framed_C.GetButtonFontInfo_Normal
struct UWB_Button02_Framed_C_GetButtonFontInfo_Normal_Params
{
	class UFont*                                       Font;                                                      // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   Typeface;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FontSize;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                     // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button02_Framed.WB_Button02_Framed_C.GetButtonText
struct UWB_Button02_Framed_C_GetButtonText_Params
{
	struct FText                                       ButtonText;                                                // 0x0000(0x0018)  (Parm, OutParm)
};

// Function WB_Button02_Framed.WB_Button02_Framed_C.GetButtonEnabled
struct UWB_Button02_Framed_C_GetButtonEnabled_Params
{
	bool                                               BIsEnabled;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_Button02_Framed.WB_Button02_Framed_C.UpdateIsEnabled
struct UWB_Button02_Framed_C_UpdateIsEnabled_Params
{
	bool                                               BIsEnabled;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_Button02_Framed.WB_Button02_Framed_C.SetFontInfo_OnDisabled
struct UWB_Button02_Framed_C_SetFontInfo_OnDisabled_Params
{
};

// Function WB_Button02_Framed.WB_Button02_Framed_C.SetButtonSizeScale
struct UWB_Button02_Framed_C_SetButtonSizeScale_Params
{
	struct FVector2D                                   Size;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button02_Framed.WB_Button02_Framed_C.SetResponsiveHoveringToNativeButton
struct UWB_Button02_Framed_C_SetResponsiveHoveringToNativeButton_Params
{
};

// Function WB_Button02_Framed.WB_Button02_Framed_C.UnhoverAllNativeButtons
struct UWB_Button02_Framed_C_UnhoverAllNativeButtons_Params
{
};

// Function WB_Button02_Framed.WB_Button02_Framed_C.SetButtonSounds
struct UWB_Button02_Framed_C_SetButtonSounds_Params
{
	class USoundBase*                                  OnClicked_Sound;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  OnHovered_Sound;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button02_Framed.WB_Button02_Framed_C.UpdateBaseButtonJustification
struct UWB_Button02_Framed_C_UpdateBaseButtonJustification_Params
{
	TEnumAsByte<EJustification_EJustification>         Index;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button02_Framed.WB_Button02_Framed_C.UpdateButtonJustification
struct UWB_Button02_Framed_C_UpdateButtonJustification_Params
{
	TEnumAsByte<EJustification_EJustification>         EJustification;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button02_Framed.WB_Button02_Framed_C.AddHintIcon
struct UWB_Button02_Framed_C_AddHintIcon_Params
{
	class UClass*                                      Widget20x20;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button02_Framed.WB_Button02_Framed_C.GetButton
struct UWB_Button02_Framed_C_GetButton_Params
{
	class UButton*                                     Base_Button;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button02_Framed.WB_Button02_Framed_C.SetFontInfo_OnClicked
struct UWB_Button02_Framed_C_SetFontInfo_OnClicked_Params
{
};

// Function WB_Button02_Framed.WB_Button02_Framed_C.SetFontInfo_OnNormal
struct UWB_Button02_Framed_C_SetFontInfo_OnNormal_Params
{
};

// Function WB_Button02_Framed.WB_Button02_Framed_C.SetFontInfo_OnHovered
struct UWB_Button02_Framed_C_SetFontInfo_OnHovered_Params
{
};

// Function WB_Button02_Framed.WB_Button02_Framed_C.SetButtonText
struct UWB_Button02_Framed_C_SetButtonText_Params
{
	struct FText                                       ButtonText;                                                // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WB_Button02_Framed.WB_Button02_Framed_C.SetButtonFontInfo_Current
struct UWB_Button02_Framed_C_SetButtonFontInfo_Current_Params
{
	class UFont*                                       Font;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   Typeface;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FontSize;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button02_Framed.WB_Button02_Framed_C.SetButtonEnabled
struct UWB_Button02_Framed_C_SetButtonEnabled_Params
{
	bool                                               BIsEnabled;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_Button02_Framed.WB_Button02_Framed_C.SetButtonFontInfo_Normal
struct UWB_Button02_Framed_C_SetButtonFontInfo_Normal_Params
{
	class UFont*                                       Font;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   Typeface;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FontSize;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button02_Framed.WB_Button02_Framed_C.SetButtonFontInfo_Hovered
struct UWB_Button02_Framed_C_SetButtonFontInfo_Hovered_Params
{
	class UFont*                                       Font;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   Typeface;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FontSize;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button02_Framed.WB_Button02_Framed_C.SetButtonFontInfo_Clicked
struct UWB_Button02_Framed_C_SetButtonFontInfo_Clicked_Params
{
	class UFont*                                       Font;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   Typeface;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FontSize;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button02_Framed.WB_Button02_Framed_C.SetButtonFontInfo_Disabled
struct UWB_Button02_Framed_C_SetButtonFontInfo_Disabled_Params
{
	class UFont*                                       Font;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   Typeface;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FontSize;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button02_Framed.WB_Button02_Framed_C.SetUser_Focus
struct UWB_Button02_Framed_C_SetUser_Focus_Params
{
	class APlayerController*                           Player;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button02_Framed.WB_Button02_Framed_C.SetHintIcon
struct UWB_Button02_Framed_C_SetHintIcon_Params
{
	class UClass*                                      HintIcon;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button02_Framed.WB_Button02_Framed_C.SetButtonSound_OnClicked
struct UWB_Button02_Framed_C_SetButtonSound_OnClicked_Params
{
	class USoundBase*                                  ClickedSound;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button02_Framed.WB_Button02_Framed_C.SetButtonSound_OnHovered
struct UWB_Button02_Framed_C_SetButtonSound_OnHovered_Params
{
	class USoundBase*                                  HoveredSound;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button02_Framed.WB_Button02_Framed_C.SetButtonJustification
struct UWB_Button02_Framed_C_SetButtonJustification_Params
{
	TEnumAsByte<EJustification_EJustification>         EJustification;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button02_Framed.WB_Button02_Framed_C.B02_SetFrameColor_Normal
struct UWB_Button02_Framed_C_B02_SetFrameColor_Normal_Params
{
	struct FLinearColor                                FrameColor_Normal;                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button02_Framed.WB_Button02_Framed_C.B02_SetFrameColor_Hovered
struct UWB_Button02_Framed_C_B02_SetFrameColor_Hovered_Params
{
	struct FLinearColor                                FrameColor_Hovered;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button02_Framed.WB_Button02_Framed_C.B02_SetFrameColor_Clicked
struct UWB_Button02_Framed_C_B02_SetFrameColor_Clicked_Params
{
	struct FLinearColor                                FrameColor_Clicked;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button02_Framed.WB_Button02_Framed_C.B02_SetFrameColor_Disabled
struct UWB_Button02_Framed_C_B02_SetFrameColor_Disabled_Params
{
	struct FLinearColor                                FrameColor_Disabled;                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button02_Framed.WB_Button02_Framed_C.B02_SetFrameColor_Current
struct UWB_Button02_Framed_C_B02_SetFrameColor_Current_Params
{
	struct FLinearColor                                FrameColor_Current;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button02_Framed.WB_Button02_Framed_C.B02_SetFillColor_Normal
struct UWB_Button02_Framed_C_B02_SetFillColor_Normal_Params
{
	struct FLinearColor                                FillColor_Normal;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button02_Framed.WB_Button02_Framed_C.B02_SetFillColor_Hovered
struct UWB_Button02_Framed_C_B02_SetFillColor_Hovered_Params
{
	struct FLinearColor                                FillColor_Hovered;                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button02_Framed.WB_Button02_Framed_C.B02_SetFillColor_Clicked
struct UWB_Button02_Framed_C_B02_SetFillColor_Clicked_Params
{
	struct FLinearColor                                FillColor_Clicked;                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button02_Framed.WB_Button02_Framed_C.B02_SetFillColor_Disabled
struct UWB_Button02_Framed_C_B02_SetFillColor_Disabled_Params
{
	struct FLinearColor                                FillColor_Disabled;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button02_Framed.WB_Button02_Framed_C.B02_SetFillColor_Current
struct UWB_Button02_Framed_C_B02_SetFillColor_Current_Params
{
	struct FLinearColor                                FillColor_Current;                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button02_Framed.WB_Button02_Framed_C.B02_SetUseDynamicShine
struct UWB_Button02_Framed_C_B02_SetUseDynamicShine_Params
{
	bool                                               bUseDynamicShine;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_Button02_Framed.WB_Button02_Framed_C.B02_SetDynamicShineColor
struct UWB_Button02_Framed_C_B02_SetDynamicShineColor_Params
{
	struct FLinearColor                                InColor;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button02_Framed.WB_Button02_Framed_C.B02_SetBlurShineColor_Hovered
struct UWB_Button02_Framed_C_B02_SetBlurShineColor_Hovered_Params
{
	struct FLinearColor                                InColor;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button02_Framed.WB_Button02_Framed_C.B02_SetBlurShineColor_Clicked
struct UWB_Button02_Framed_C_B02_SetBlurShineColor_Clicked_Params
{
	struct FLinearColor                                InColor;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button02_Framed.WB_Button02_Framed_C.B02_Create_ContentWidget
struct UWB_Button02_Framed_C_B02_Create_ContentWidget_Params
{
	class UClass*                                      ContentWidget;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button02_Framed.WB_Button02_Framed_C.B02_RemoveContentWidget
struct UWB_Button02_Framed_C_B02_RemoveContentWidget_Params
{
};

// Function WB_Button02_Framed.WB_Button02_Framed_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
struct UWB_Button02_Framed_C_BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params
{
};

// Function WB_Button02_Framed.WB_Button02_Framed_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature
struct UWB_Button02_Framed_C_BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature_Params
{
};

// Function WB_Button02_Framed.WB_Button02_Framed_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_7_OnUnhovered__DelegateSignature
struct UWB_Button02_Framed_C_BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_7_OnUnhovered__DelegateSignature_Params
{
};

// Function WB_Button02_Framed.WB_Button02_Framed_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_8_OnPressed__DelegateSignature
struct UWB_Button02_Framed_C_BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_8_OnPressed__DelegateSignature_Params
{
};

// Function WB_Button02_Framed.WB_Button02_Framed_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_9_OnReleased__DelegateSignature
struct UWB_Button02_Framed_C_BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_9_OnReleased__DelegateSignature_Params
{
};

// Function WB_Button02_Framed.WB_Button02_Framed_C.Construct
struct UWB_Button02_Framed_C_Construct_Params
{
};

// Function WB_Button02_Framed.WB_Button02_Framed_C.CheckHasFocus
struct UWB_Button02_Framed_C_CheckHasFocus_Params
{
};

// Function WB_Button02_Framed.WB_Button02_Framed_C.OnInputSwitched
struct UWB_Button02_Framed_C_OnInputSwitched_Params
{
	TEnumAsByte<EInputType_EInputType>                 InputType;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button02_Framed.WB_Button02_Framed_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_0_OnDisabled__DelegateSignature
struct UWB_Button02_Framed_C_BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_0_OnDisabled__DelegateSignature_Params
{
};

// Function WB_Button02_Framed.WB_Button02_Framed_C.UpdateTextAnim
struct UWB_Button02_Framed_C_UpdateTextAnim_Params
{
	bool                                               bFadeIn;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_Button02_Framed.WB_Button02_Framed_C.BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_6_OnUnfocused__DelegateSignature
struct UWB_Button02_Framed_C_BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_6_OnUnfocused__DelegateSignature_Params
{
};

// Function WB_Button02_Framed.WB_Button02_Framed_C.BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_5_OnFocused__DelegateSignature
struct UWB_Button02_Framed_C_BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_5_OnFocused__DelegateSignature_Params
{
};

// Function WB_Button02_Framed.WB_Button02_Framed_C.RecheckTextSize
struct UWB_Button02_Framed_C_RecheckTextSize_Params
{
};

// Function WB_Button02_Framed.WB_Button02_Framed_C.PreConstruct
struct UWB_Button02_Framed_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_Button02_Framed.WB_Button02_Framed_C.ExecuteUbergraph_WB_Button02_Framed
struct UWB_Button02_Framed_C_ExecuteUbergraph_WB_Button02_Framed_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button02_Framed.WB_Button02_Framed_C.OnUnfocused__DelegateSignature
struct UWB_Button02_Framed_C_OnUnfocused__DelegateSignature_Params
{
};

// Function WB_Button02_Framed.WB_Button02_Framed_C.OnFocused__DelegateSignature
struct UWB_Button02_Framed_C_OnFocused__DelegateSignature_Params
{
};

// Function WB_Button02_Framed.WB_Button02_Framed_C.OnDisabled__DelegateSignature
struct UWB_Button02_Framed_C_OnDisabled__DelegateSignature_Params
{
};

// Function WB_Button02_Framed.WB_Button02_Framed_C.OnReleased__DelegateSignature
struct UWB_Button02_Framed_C_OnReleased__DelegateSignature_Params
{
};

// Function WB_Button02_Framed.WB_Button02_Framed_C.OnPressed__DelegateSignature
struct UWB_Button02_Framed_C_OnPressed__DelegateSignature_Params
{
};

// Function WB_Button02_Framed.WB_Button02_Framed_C.OnUnhovered__DelegateSignature
struct UWB_Button02_Framed_C_OnUnhovered__DelegateSignature_Params
{
};

// Function WB_Button02_Framed.WB_Button02_Framed_C.OnHovered__DelegateSignature
struct UWB_Button02_Framed_C_OnHovered__DelegateSignature_Params
{
};

// Function WB_Button02_Framed.WB_Button02_Framed_C.OnClicked__DelegateSignature
struct UWB_Button02_Framed_C_OnClicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
