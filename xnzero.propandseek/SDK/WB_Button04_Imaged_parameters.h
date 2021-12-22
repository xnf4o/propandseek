#pragma once

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

// Function WB_Button04_Imaged.WB_Button04_Imaged_C.B04_GetScale_Clicked
struct UWB_Button04_Imaged_C_B04_GetScale_Clicked_Params
{
	float                                              Scale;                                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button04_Imaged.WB_Button04_Imaged_C.B04_GetScale_Hovered
struct UWB_Button04_Imaged_C_B04_GetScale_Hovered_Params
{
	float                                              Scale;                                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button04_Imaged.WB_Button04_Imaged_C.B04_GetImage
struct UWB_Button04_Imaged_C_B04_GetImage_Params
{
	class UObject*                                     Image_Brush;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   Image_Translation;                                         // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button04_Imaged.WB_Button04_Imaged_C.AddHintIcon
struct UWB_Button04_Imaged_C_AddHintIcon_Params
{
	class UClass*                                      HintIcon;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button04_Imaged.WB_Button04_Imaged_C.GetCurrentScale
struct UWB_Button04_Imaged_C_GetCurrentScale_Params
{
	struct FVector2D                                   Scale;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button04_Imaged.WB_Button04_Imaged_C.UpdateImageSaturation
struct UWB_Button04_Imaged_C_UpdateImageSaturation_Params
{
};

// Function WB_Button04_Imaged.WB_Button04_Imaged_C.UpdateImageColors
struct UWB_Button04_Imaged_C_UpdateImageColors_Params
{
};

// Function WB_Button04_Imaged.WB_Button04_Imaged_C.RemoveContentWidget
struct UWB_Button04_Imaged_C_RemoveContentWidget_Params
{
};

// Function WB_Button04_Imaged.WB_Button04_Imaged_C.CreateContentWidget
struct UWB_Button04_Imaged_C_CreateContentWidget_Params
{
	class UClass*                                      ContentWidget;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button04_Imaged.WB_Button04_Imaged_C.IsContentWidgetValid
struct UWB_Button04_Imaged_C_IsContentWidgetValid_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WB_Button04_Imaged.WB_Button04_Imaged_C.Set_AllFrameColours
struct UWB_Button04_Imaged_C_Set_AllFrameColours_Params
{
};

// Function WB_Button04_Imaged.WB_Button04_Imaged_C.Set_FrameColor
struct UWB_Button04_Imaged_C_Set_FrameColor_Params
{
	struct FLinearColor                                FrameColor;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button04_Imaged.WB_Button04_Imaged_C.GetButtonJustification
struct UWB_Button04_Imaged_C_GetButtonJustification_Params
{
	TEnumAsByte<EJustification_EJustification>         EJustification;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button04_Imaged.WB_Button04_Imaged_C.GetUserFocus
struct UWB_Button04_Imaged_C_GetUserFocus_Params
{
	class APlayerController*                           Player;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               HasFocus;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_Button04_Imaged.WB_Button04_Imaged_C.GetButtonFontInfo_Disabled
struct UWB_Button04_Imaged_C_GetButtonFontInfo_Disabled_Params
{
	class UFont*                                       Font;                                                      // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   Typeface;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FontSize;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                     // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button04_Imaged.WB_Button04_Imaged_C.GetButtonFontInfo_Clicked
struct UWB_Button04_Imaged_C_GetButtonFontInfo_Clicked_Params
{
	class UFont*                                       Font;                                                      // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   Typeface;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Integer;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                     // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button04_Imaged.WB_Button04_Imaged_C.GetButtonFontInfo_Hovered
struct UWB_Button04_Imaged_C_GetButtonFontInfo_Hovered_Params
{
	class UFont*                                       Font;                                                      // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   Typeface;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FontSize;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                     // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button04_Imaged.WB_Button04_Imaged_C.GetButtonFontInfo_Normal
struct UWB_Button04_Imaged_C_GetButtonFontInfo_Normal_Params
{
	class UFont*                                       Font;                                                      // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   Typeface;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FontSize;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                     // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button04_Imaged.WB_Button04_Imaged_C.GetButtonText
struct UWB_Button04_Imaged_C_GetButtonText_Params
{
	struct FText                                       ButtonText;                                                // 0x0000(0x0018)  (Parm, OutParm)
};

// Function WB_Button04_Imaged.WB_Button04_Imaged_C.GetButtonEnabled
struct UWB_Button04_Imaged_C_GetButtonEnabled_Params
{
	bool                                               BIsEnabled;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_Button04_Imaged.WB_Button04_Imaged_C.UpdateIsEnabled
struct UWB_Button04_Imaged_C_UpdateIsEnabled_Params
{
	bool                                               BIsEnabled;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_Button04_Imaged.WB_Button04_Imaged_C.SetFontInfo_OnDisabled
struct UWB_Button04_Imaged_C_SetFontInfo_OnDisabled_Params
{
};

// Function WB_Button04_Imaged.WB_Button04_Imaged_C.SetButtonSizeScale
struct UWB_Button04_Imaged_C_SetButtonSizeScale_Params
{
	struct FVector2D                                   Size;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button04_Imaged.WB_Button04_Imaged_C.SetResponsiveHoveringToNativeButton
struct UWB_Button04_Imaged_C_SetResponsiveHoveringToNativeButton_Params
{
};

// Function WB_Button04_Imaged.WB_Button04_Imaged_C.UnhoverAllNativeButtons
struct UWB_Button04_Imaged_C_UnhoverAllNativeButtons_Params
{
};

// Function WB_Button04_Imaged.WB_Button04_Imaged_C.SetButtonSounds
struct UWB_Button04_Imaged_C_SetButtonSounds_Params
{
	class USoundBase*                                  OnClicked_Sound;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  OnHovered_Sound;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button04_Imaged.WB_Button04_Imaged_C.UpdateBaseButtonJustification
struct UWB_Button04_Imaged_C_UpdateBaseButtonJustification_Params
{
	TEnumAsByte<EJustification_EJustification>         Index;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button04_Imaged.WB_Button04_Imaged_C.UpdateButtonJustification
struct UWB_Button04_Imaged_C_UpdateButtonJustification_Params
{
	TEnumAsByte<EJustification_EJustification>         EJustification;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button04_Imaged.WB_Button04_Imaged_C.GetButton
struct UWB_Button04_Imaged_C_GetButton_Params
{
	class UButton*                                     Base_Button;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button04_Imaged.WB_Button04_Imaged_C.SetFontInfo_OnClicked
struct UWB_Button04_Imaged_C_SetFontInfo_OnClicked_Params
{
};

// Function WB_Button04_Imaged.WB_Button04_Imaged_C.SetFontInfo_OnNormal
struct UWB_Button04_Imaged_C_SetFontInfo_OnNormal_Params
{
};

// Function WB_Button04_Imaged.WB_Button04_Imaged_C.SetFontInfo_OnHovered
struct UWB_Button04_Imaged_C_SetFontInfo_OnHovered_Params
{
};

// Function WB_Button04_Imaged.WB_Button04_Imaged_C.SetButtonFontInfo_Current
struct UWB_Button04_Imaged_C_SetButtonFontInfo_Current_Params
{
	class UFont*                                       Font;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   Typeface;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FontSize;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button04_Imaged.WB_Button04_Imaged_C.SetButtonEnabled
struct UWB_Button04_Imaged_C_SetButtonEnabled_Params
{
	bool                                               BIsEnabled;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_Button04_Imaged.WB_Button04_Imaged_C.SetButtonFontInfo_Normal
struct UWB_Button04_Imaged_C_SetButtonFontInfo_Normal_Params
{
	class UFont*                                       Font;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   Typeface;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FontSize;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button04_Imaged.WB_Button04_Imaged_C.SetButtonFontInfo_Hovered
struct UWB_Button04_Imaged_C_SetButtonFontInfo_Hovered_Params
{
	class UFont*                                       Font;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   Typeface;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FontSize;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button04_Imaged.WB_Button04_Imaged_C.SetButtonFontInfo_Clicked
struct UWB_Button04_Imaged_C_SetButtonFontInfo_Clicked_Params
{
	class UFont*                                       Font;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   Typeface;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FontSize;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button04_Imaged.WB_Button04_Imaged_C.SetButtonFontInfo_Disabled
struct UWB_Button04_Imaged_C_SetButtonFontInfo_Disabled_Params
{
	class UFont*                                       Font;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   Typeface;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FontSize;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button04_Imaged.WB_Button04_Imaged_C.SetButtonText
struct UWB_Button04_Imaged_C_SetButtonText_Params
{
	struct FText                                       ButtonText;                                                // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WB_Button04_Imaged.WB_Button04_Imaged_C.SetUser_Focus
struct UWB_Button04_Imaged_C_SetUser_Focus_Params
{
	class APlayerController*                           Player;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button04_Imaged.WB_Button04_Imaged_C.SetHintIcon
struct UWB_Button04_Imaged_C_SetHintIcon_Params
{
	class UClass*                                      HintIcon;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button04_Imaged.WB_Button04_Imaged_C.SetButtonSound_OnClicked
struct UWB_Button04_Imaged_C_SetButtonSound_OnClicked_Params
{
	class USoundBase*                                  ClickedSound;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button04_Imaged.WB_Button04_Imaged_C.SetButtonSound_OnHovered
struct UWB_Button04_Imaged_C_SetButtonSound_OnHovered_Params
{
	class USoundBase*                                  HoveredSound;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button04_Imaged.WB_Button04_Imaged_C.SetButtonJustification
struct UWB_Button04_Imaged_C_SetButtonJustification_Params
{
	TEnumAsByte<EJustification_EJustification>         EJustification;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button04_Imaged.WB_Button04_Imaged_C.B04_SetFrameColor_Normal
struct UWB_Button04_Imaged_C_B04_SetFrameColor_Normal_Params
{
	struct FLinearColor                                FrameColor1;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                FrameColor2;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                FrameColor_Shine;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                ShineFxColor_Background;                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                ShineFxColor_Small;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                ShineFxColor_Big;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button04_Imaged.WB_Button04_Imaged_C.B04_SetFrameColor_Hovered
struct UWB_Button04_Imaged_C_B04_SetFrameColor_Hovered_Params
{
	struct FLinearColor                                FrameColor1;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                FrameColor2;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                FrameColor_Shine;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                ShineFxColor_Background;                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                ShineFxColor_Small;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                ShineFxColor_Big;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button04_Imaged.WB_Button04_Imaged_C.B04_SetFrameColor_Clicked
struct UWB_Button04_Imaged_C_B04_SetFrameColor_Clicked_Params
{
	struct FLinearColor                                FrameColor1;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                FrameColor2;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                FrameColor_Shine;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                ShineFxColor_Background;                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                ShineFxColor_Small;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                ShineFxColor_Big;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button04_Imaged.WB_Button04_Imaged_C.B04_SetFrameColor_Disabled
struct UWB_Button04_Imaged_C_B04_SetFrameColor_Disabled_Params
{
	struct FLinearColor                                FrameColor1;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                FrameColor2;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                FrameColor_Shine;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button04_Imaged.WB_Button04_Imaged_C.B04_SetFrameColor_Current
struct UWB_Button04_Imaged_C_B04_SetFrameColor_Current_Params
{
	struct FLinearColor                                FrameColor1;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                FrameColor2;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                FrameColor_Shine;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                ShineFxColor_Background;                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                ShineFxColor_Small;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                ShineFxColor_Big;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button04_Imaged.WB_Button04_Imaged_C.B04_CreateContentWidget
struct UWB_Button04_Imaged_C_B04_CreateContentWidget_Params
{
	class UClass*                                      ContentWidget;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button04_Imaged.WB_Button04_Imaged_C.B04_RemoveContentWidget
struct UWB_Button04_Imaged_C_B04_RemoveContentWidget_Params
{
};

// Function WB_Button04_Imaged.WB_Button04_Imaged_C.B04_SetShineFxEnabled
struct UWB_Button04_Imaged_C_B04_SetShineFxEnabled_Params
{
	bool                                               BIsEnabled;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_Button04_Imaged.WB_Button04_Imaged_C.B04_SetImage
struct UWB_Button04_Imaged_C_B04_SetImage_Params
{
	class UObject*                                     ImageBrush;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   ImageTranslation;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button04_Imaged.WB_Button04_Imaged_C.B04_SetImageColor_Normal
struct UWB_Button04_Imaged_C_B04_SetImageColor_Normal_Params
{
	struct FLinearColor                                ImageColor_Normal;                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Saturation_Normal;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button04_Imaged.WB_Button04_Imaged_C.B04_SetImageColor_Hovered
struct UWB_Button04_Imaged_C_B04_SetImageColor_Hovered_Params
{
	struct FLinearColor                                ImageColor_Hovered;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Saturation_Hovered;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button04_Imaged.WB_Button04_Imaged_C.B04_SetImageColor_Clicked
struct UWB_Button04_Imaged_C_B04_SetImageColor_Clicked_Params
{
	struct FLinearColor                                ImageColor_Clicked;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Saturation_Clicked;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button04_Imaged.WB_Button04_Imaged_C.B04_SetImageColor_Disabled
struct UWB_Button04_Imaged_C_B04_SetImageColor_Disabled_Params
{
	struct FLinearColor                                ImageColor_Disabled;                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Saturation_Disabled;                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button04_Imaged.WB_Button04_Imaged_C.B04_SetVignetteColor
struct UWB_Button04_Imaged_C_B04_SetVignetteColor_Params
{
	struct FLinearColor                                VignetteColor;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button04_Imaged.WB_Button04_Imaged_C.B04_SetScale
struct UWB_Button04_Imaged_C_B04_SetScale_Params
{
	float                                              Scale;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button04_Imaged.WB_Button04_Imaged_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
struct UWB_Button04_Imaged_C_BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params
{
};

// Function WB_Button04_Imaged.WB_Button04_Imaged_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature
struct UWB_Button04_Imaged_C_BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature_Params
{
};

// Function WB_Button04_Imaged.WB_Button04_Imaged_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_7_OnUnhovered__DelegateSignature
struct UWB_Button04_Imaged_C_BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_7_OnUnhovered__DelegateSignature_Params
{
};

// Function WB_Button04_Imaged.WB_Button04_Imaged_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_8_OnPressed__DelegateSignature
struct UWB_Button04_Imaged_C_BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_8_OnPressed__DelegateSignature_Params
{
};

// Function WB_Button04_Imaged.WB_Button04_Imaged_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_9_OnReleased__DelegateSignature
struct UWB_Button04_Imaged_C_BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_9_OnReleased__DelegateSignature_Params
{
};

// Function WB_Button04_Imaged.WB_Button04_Imaged_C.Construct
struct UWB_Button04_Imaged_C_Construct_Params
{
};

// Function WB_Button04_Imaged.WB_Button04_Imaged_C.CheckHasFocus
struct UWB_Button04_Imaged_C_CheckHasFocus_Params
{
};

// Function WB_Button04_Imaged.WB_Button04_Imaged_C.OnInputSwitched
struct UWB_Button04_Imaged_C_OnInputSwitched_Params
{
	TEnumAsByte<EInputType_EInputType>                 InputType;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button04_Imaged.WB_Button04_Imaged_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_0_OnDisabled__DelegateSignature
struct UWB_Button04_Imaged_C_BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_0_OnDisabled__DelegateSignature_Params
{
};

// Function WB_Button04_Imaged.WB_Button04_Imaged_C.CheckScale
struct UWB_Button04_Imaged_C_CheckScale_Params
{
};

// Function WB_Button04_Imaged.WB_Button04_Imaged_C.BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_143_OnUnfocused__DelegateSignature
struct UWB_Button04_Imaged_C_BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_143_OnUnfocused__DelegateSignature_Params
{
};

// Function WB_Button04_Imaged.WB_Button04_Imaged_C.BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_142_OnFocused__DelegateSignature
struct UWB_Button04_Imaged_C_BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_142_OnFocused__DelegateSignature_Params
{
};

// Function WB_Button04_Imaged.WB_Button04_Imaged_C.PreConstruct
struct UWB_Button04_Imaged_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_Button04_Imaged.WB_Button04_Imaged_C.ExecuteUbergraph_WB_Button04_Imaged
struct UWB_Button04_Imaged_C_ExecuteUbergraph_WB_Button04_Imaged_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button04_Imaged.WB_Button04_Imaged_C.OnUnfocused__DelegateSignature
struct UWB_Button04_Imaged_C_OnUnfocused__DelegateSignature_Params
{
};

// Function WB_Button04_Imaged.WB_Button04_Imaged_C.OnFocused__DelegateSignature
struct UWB_Button04_Imaged_C_OnFocused__DelegateSignature_Params
{
};

// Function WB_Button04_Imaged.WB_Button04_Imaged_C.OnDisabled__DelegateSignature
struct UWB_Button04_Imaged_C_OnDisabled__DelegateSignature_Params
{
};

// Function WB_Button04_Imaged.WB_Button04_Imaged_C.OnReleased__DelegateSignature
struct UWB_Button04_Imaged_C_OnReleased__DelegateSignature_Params
{
};

// Function WB_Button04_Imaged.WB_Button04_Imaged_C.OnPressed__DelegateSignature
struct UWB_Button04_Imaged_C_OnPressed__DelegateSignature_Params
{
};

// Function WB_Button04_Imaged.WB_Button04_Imaged_C.OnUnhovered__DelegateSignature
struct UWB_Button04_Imaged_C_OnUnhovered__DelegateSignature_Params
{
};

// Function WB_Button04_Imaged.WB_Button04_Imaged_C.OnHovered__DelegateSignature
struct UWB_Button04_Imaged_C_OnHovered__DelegateSignature_Params
{
};

// Function WB_Button04_Imaged.WB_Button04_Imaged_C.OnClicked__DelegateSignature
struct UWB_Button04_Imaged_C_OnClicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
