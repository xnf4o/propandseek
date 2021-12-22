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

// Function WB_Button01_Native.WB_Button01_Native_C.GetButtonJustification
struct UWB_Button01_Native_C_GetButtonJustification_Params
{
	TEnumAsByte<EJustification_EJustification>         EJustification;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button01_Native.WB_Button01_Native_C.GetUserFocus
struct UWB_Button01_Native_C_GetUserFocus_Params
{
	class APlayerController*                           Player;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               HasFocus;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_Button01_Native.WB_Button01_Native_C.GetButtonFontInfo_Disabled
struct UWB_Button01_Native_C_GetButtonFontInfo_Disabled_Params
{
	class UFont*                                       Font;                                                      // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   Typeface;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FontSize;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                     // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button01_Native.WB_Button01_Native_C.GetButtonFontInfo_Clicked
struct UWB_Button01_Native_C_GetButtonFontInfo_Clicked_Params
{
	class UFont*                                       Font;                                                      // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   Typeface;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Integer;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                     // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button01_Native.WB_Button01_Native_C.GetButtonFontInfo_Hovered
struct UWB_Button01_Native_C_GetButtonFontInfo_Hovered_Params
{
	class UFont*                                       Font;                                                      // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   Typeface;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FontSize;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                     // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button01_Native.WB_Button01_Native_C.GetButtonFontInfo_Normal
struct UWB_Button01_Native_C_GetButtonFontInfo_Normal_Params
{
	class UFont*                                       Font;                                                      // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   Typeface;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FontSize;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                     // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button01_Native.WB_Button01_Native_C.GetButtonText
struct UWB_Button01_Native_C_GetButtonText_Params
{
	struct FText                                       ButtonText;                                                // 0x0000(0x0018)  (Parm, OutParm)
};

// Function WB_Button01_Native.WB_Button01_Native_C.GetButtonEnabled
struct UWB_Button01_Native_C_GetButtonEnabled_Params
{
	bool                                               BIsEnabled;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_Button01_Native.WB_Button01_Native_C.UpdateIsEnabled
struct UWB_Button01_Native_C_UpdateIsEnabled_Params
{
	bool                                               BIsEnabled;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_Button01_Native.WB_Button01_Native_C.SetFontInfo_OnDisabled
struct UWB_Button01_Native_C_SetFontInfo_OnDisabled_Params
{
};

// Function WB_Button01_Native.WB_Button01_Native_C.Update_ClickFX_Color
struct UWB_Button01_Native_C_Update_ClickFX_Color_Params
{
	struct FLinearColor                                ClickFXColor;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button01_Native.WB_Button01_Native_C.SetFontInfo_FX_OnClicked
struct UWB_Button01_Native_C_SetFontInfo_FX_OnClicked_Params
{
};

// Function WB_Button01_Native.WB_Button01_Native_C.SetFX_BaselineHeight
struct UWB_Button01_Native_C_SetFX_BaselineHeight_Params
{
	float                                              Value;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button01_Native.WB_Button01_Native_C.SetNativeButtonClickAreaHeight
struct UWB_Button01_Native_C_SetNativeButtonClickAreaHeight_Params
{
	struct FVector2D                                   Size;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button01_Native.WB_Button01_Native_C.SetResponsiveHoveringToNativeButton
struct UWB_Button01_Native_C_SetResponsiveHoveringToNativeButton_Params
{
};

// Function WB_Button01_Native.WB_Button01_Native_C.UnhoverAllNativeButtons
struct UWB_Button01_Native_C_UnhoverAllNativeButtons_Params
{
};

// Function WB_Button01_Native.WB_Button01_Native_C.SetButtonSounds
struct UWB_Button01_Native_C_SetButtonSounds_Params
{
	class USoundBase*                                  OnClicked_Sound;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  OnHovered_Sound;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button01_Native.WB_Button01_Native_C.UpdateBaseButtonJustification
struct UWB_Button01_Native_C_UpdateBaseButtonJustification_Params
{
	TEnumAsByte<EJustification_EJustification>         Index;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button01_Native.WB_Button01_Native_C.Update_FX02_Color
struct UWB_Button01_Native_C_Update_FX02_Color_Params
{
	struct FLinearColor                                FX02_Color;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button01_Native.WB_Button01_Native_C.Update_FX01_Color
struct UWB_Button01_Native_C_Update_FX01_Color_Params
{
	struct FLinearColor                                FX01_Color;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button01_Native.WB_Button01_Native_C.UpdateButtonJustification
struct UWB_Button01_Native_C_UpdateButtonJustification_Params
{
	TEnumAsByte<EJustification_EJustification>         EJustification;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button01_Native.WB_Button01_Native_C.AddHintIcon
struct UWB_Button01_Native_C_AddHintIcon_Params
{
	class UClass*                                      Widget20x20;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button01_Native.WB_Button01_Native_C.GetButton
struct UWB_Button01_Native_C_GetButton_Params
{
	class UButton*                                     Base_Button;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button01_Native.WB_Button01_Native_C.SetFontInfo_OnClicked
struct UWB_Button01_Native_C_SetFontInfo_OnClicked_Params
{
};

// Function WB_Button01_Native.WB_Button01_Native_C.SetFontInfo_OnNormal
struct UWB_Button01_Native_C_SetFontInfo_OnNormal_Params
{
};

// Function WB_Button01_Native.WB_Button01_Native_C.SetFontInfo_OnHovered
struct UWB_Button01_Native_C_SetFontInfo_OnHovered_Params
{
};

// Function WB_Button01_Native.WB_Button01_Native_C.SetButtonText
struct UWB_Button01_Native_C_SetButtonText_Params
{
	struct FText                                       ButtonText;                                                // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WB_Button01_Native.WB_Button01_Native_C.SetButtonFontInfo_Current
struct UWB_Button01_Native_C_SetButtonFontInfo_Current_Params
{
	class UFont*                                       Font;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   Typeface;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FontSize;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button01_Native.WB_Button01_Native_C.SetButtonEnabled
struct UWB_Button01_Native_C_SetButtonEnabled_Params
{
	bool                                               BIsEnabled;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_Button01_Native.WB_Button01_Native_C.SetButtonFontInfo_Normal
struct UWB_Button01_Native_C_SetButtonFontInfo_Normal_Params
{
	class UFont*                                       Font;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   Typeface;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FontSize;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button01_Native.WB_Button01_Native_C.SetButtonFontInfo_Hovered
struct UWB_Button01_Native_C_SetButtonFontInfo_Hovered_Params
{
	class UFont*                                       Font;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   Typeface;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FontSize;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button01_Native.WB_Button01_Native_C.SetButtonFontInfo_Clicked
struct UWB_Button01_Native_C_SetButtonFontInfo_Clicked_Params
{
	class UFont*                                       Font;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   Typeface;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FontSize;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button01_Native.WB_Button01_Native_C.SetButtonFontInfo_Disabled
struct UWB_Button01_Native_C_SetButtonFontInfo_Disabled_Params
{
	class UFont*                                       Font;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   Typeface;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FontSize;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button01_Native.WB_Button01_Native_C.SetUser_Focus
struct UWB_Button01_Native_C_SetUser_Focus_Params
{
	class APlayerController*                           Player;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button01_Native.WB_Button01_Native_C.SetHintIcon
struct UWB_Button01_Native_C_SetHintIcon_Params
{
	class UClass*                                      HintIcon;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button01_Native.WB_Button01_Native_C.SetButtonSound_OnClicked
struct UWB_Button01_Native_C_SetButtonSound_OnClicked_Params
{
	class USoundBase*                                  ClickedSound;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button01_Native.WB_Button01_Native_C.SetButtonSound_OnHovered
struct UWB_Button01_Native_C_SetButtonSound_OnHovered_Params
{
	class USoundBase*                                  HoveredSound;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button01_Native.WB_Button01_Native_C.B01_SetColor_HoveredFX_01
struct UWB_Button01_Native_C_B01_SetColor_HoveredFX_01_Params
{
	struct FLinearColor                                Color_HoveredFX_01;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button01_Native.WB_Button01_Native_C.B01_SetColor_HoveredFX_02
struct UWB_Button01_Native_C_B01_SetColor_HoveredFX_02_Params
{
	struct FLinearColor                                Color_HoveredFX_02;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button01_Native.WB_Button01_Native_C.B01_SetColor_ClickedFX
struct UWB_Button01_Native_C_B01_SetColor_ClickedFX_Params
{
	struct FLinearColor                                Color_ClickedFX;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button01_Native.WB_Button01_Native_C.B01_SetColor_ClickedFX_Text
struct UWB_Button01_Native_C_B01_SetColor_ClickedFX_Text_Params
{
	struct FLinearColor                                Color_ClickedFX_Text;                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button01_Native.WB_Button01_Native_C.SetButtonJustification
struct UWB_Button01_Native_C_SetButtonJustification_Params
{
	TEnumAsByte<EJustification_EJustification>         EJustification;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button01_Native.WB_Button01_Native_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
struct UWB_Button01_Native_C_BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params
{
};

// Function WB_Button01_Native.WB_Button01_Native_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature
struct UWB_Button01_Native_C_BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature_Params
{
};

// Function WB_Button01_Native.WB_Button01_Native_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_7_OnUnhovered__DelegateSignature
struct UWB_Button01_Native_C_BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_7_OnUnhovered__DelegateSignature_Params
{
};

// Function WB_Button01_Native.WB_Button01_Native_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_8_OnPressed__DelegateSignature
struct UWB_Button01_Native_C_BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_8_OnPressed__DelegateSignature_Params
{
};

// Function WB_Button01_Native.WB_Button01_Native_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_9_OnReleased__DelegateSignature
struct UWB_Button01_Native_C_BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_9_OnReleased__DelegateSignature_Params
{
};

// Function WB_Button01_Native.WB_Button01_Native_C.Construct
struct UWB_Button01_Native_C_Construct_Params
{
};

// Function WB_Button01_Native.WB_Button01_Native_C.CheckHasFocus
struct UWB_Button01_Native_C_CheckHasFocus_Params
{
};

// Function WB_Button01_Native.WB_Button01_Native_C.OnInputSwitched
struct UWB_Button01_Native_C_OnInputSwitched_Params
{
	TEnumAsByte<EInputType_EInputType>                 InputType;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button01_Native.WB_Button01_Native_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_0_OnDisabled__DelegateSignature
struct UWB_Button01_Native_C_BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_0_OnDisabled__DelegateSignature_Params
{
};

// Function WB_Button01_Native.WB_Button01_Native_C.BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_3_OnFocused__DelegateSignature
struct UWB_Button01_Native_C_BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_3_OnFocused__DelegateSignature_Params
{
};

// Function WB_Button01_Native.WB_Button01_Native_C.BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_4_OnUnfocused__DelegateSignature
struct UWB_Button01_Native_C_BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_4_OnUnfocused__DelegateSignature_Params
{
};

// Function WB_Button01_Native.WB_Button01_Native_C.OnHoveredCustom
struct UWB_Button01_Native_C_OnHoveredCustom_Params
{
};

// Function WB_Button01_Native.WB_Button01_Native_C.OnUnhoveredCustom
struct UWB_Button01_Native_C_OnUnhoveredCustom_Params
{
};

// Function WB_Button01_Native.WB_Button01_Native_C.RecheckTextSize
struct UWB_Button01_Native_C_RecheckTextSize_Params
{
};

// Function WB_Button01_Native.WB_Button01_Native_C.PreConstruct
struct UWB_Button01_Native_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_Button01_Native.WB_Button01_Native_C.ExecuteUbergraph_WB_Button01_Native
struct UWB_Button01_Native_C_ExecuteUbergraph_WB_Button01_Native_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button01_Native.WB_Button01_Native_C.OnUnfocused__DelegateSignature
struct UWB_Button01_Native_C_OnUnfocused__DelegateSignature_Params
{
};

// Function WB_Button01_Native.WB_Button01_Native_C.OnFocused__DelegateSignature
struct UWB_Button01_Native_C_OnFocused__DelegateSignature_Params
{
};

// Function WB_Button01_Native.WB_Button01_Native_C.OnDisabled__DelegateSignature
struct UWB_Button01_Native_C_OnDisabled__DelegateSignature_Params
{
};

// Function WB_Button01_Native.WB_Button01_Native_C.OnReleased__DelegateSignature
struct UWB_Button01_Native_C_OnReleased__DelegateSignature_Params
{
};

// Function WB_Button01_Native.WB_Button01_Native_C.OnPressed__DelegateSignature
struct UWB_Button01_Native_C_OnPressed__DelegateSignature_Params
{
};

// Function WB_Button01_Native.WB_Button01_Native_C.OnUnhovered__DelegateSignature
struct UWB_Button01_Native_C_OnUnhovered__DelegateSignature_Params
{
};

// Function WB_Button01_Native.WB_Button01_Native_C.OnHovered__DelegateSignature
struct UWB_Button01_Native_C_OnHovered__DelegateSignature_Params
{
};

// Function WB_Button01_Native.WB_Button01_Native_C.OnClicked__DelegateSignature
struct UWB_Button01_Native_C_OnClicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
