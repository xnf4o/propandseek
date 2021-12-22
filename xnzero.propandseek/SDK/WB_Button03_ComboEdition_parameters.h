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

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.Slider_ConvertToNormal
struct UWB_Button03_ComboEdition_C_Slider_ConvertToNormal_Params
{
	float                                              Value;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.B03_GetSliderValueNormalized
struct UWB_Button03_ComboEdition_C_B03_GetSliderValueNormalized_Params
{
	float                                              ValueNormalized;                                           // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.Slider_ConvertFromNormal
struct UWB_Button03_ComboEdition_C_Slider_ConvertFromNormal_Params
{
	float                                              Value;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.B03_GetSliderValue
struct UWB_Button03_ComboEdition_C_B03_GetSliderValue_Params
{
	float                                              Value;                                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.SetSlider_OptionFont_Hovered
struct UWB_Button03_ComboEdition_C_SetSlider_OptionFont_Hovered_Params
{
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.SetSliderValue_FontInfo
struct UWB_Button03_ComboEdition_C_SetSliderValue_FontInfo_Params
{
	class UFont*                                       MultiState_Font_Normal;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   MultiState_FontFace_Normal;                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MultiState_FontSize_Normal;                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                MultiState_FontColor_Normal;                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFont*                                       MultiState_Font_Hovered;                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   MultiState_FontFace_Hovered;                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MultiState_FontSize_Hovered;                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                MultiState_FontColor_Hovered;                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.SetSliderOptionText
struct UWB_Button03_ComboEdition_C_SetSliderOptionText_Params
{
	struct FText                                       InText;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.SetSliderJustification
struct UWB_Button03_ComboEdition_C_SetSliderJustification_Params
{
	TEnumAsByte<EOptionsTextJustification_EOptionsTextJustification> EOptionsText;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.SetSlider_OptionFont_Normal
struct UWB_Button03_ComboEdition_C_SetSlider_OptionFont_Normal_Params
{
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.B03_GetKeyEscapeKeys
struct UWB_Button03_ComboEdition_C_B03_GetKeyEscapeKeys_Params
{
	TEnumAsByte<ESelectedKey_ESelectedKey>             Key;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FKey>                                EscapeKeys;                                                // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.B03_GetAllowModifierKeys
struct UWB_Button03_ComboEdition_C_B03_GetAllowModifierKeys_Params
{
	TEnumAsByte<ESelectedKey_ESelectedKey>             Key;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bAllowModifierKeys;                                        // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.B03_GetAllowGamepadKeys
struct UWB_Button03_ComboEdition_C_B03_GetAllowGamepadKeys_Params
{
	TEnumAsByte<ESelectedKey_ESelectedKey>             Key;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bAllowGamepadKeys;                                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.B03_GetKeySelectionText
struct UWB_Button03_ComboEdition_C_B03_GetKeySelectionText_Params
{
	TEnumAsByte<ESelectedKey_ESelectedKey>             Key;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       KeySelectionText;                                          // 0x0000(0x0018)  (Parm, OutParm)
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.B03_GetSelectedKey
struct UWB_Button03_ComboEdition_C_B03_GetSelectedKey_Params
{
	TEnumAsByte<ESelectedKey_ESelectedKey>             Key;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputChord                                 SelectedKey;                                               // 0x0000(0x0020)  (Parm, OutParm, HasGetValueTypeHash)
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.B03_GetKeyEnabled
struct UWB_Button03_ComboEdition_C_B03_GetKeyEnabled_Params
{
	TEnumAsByte<ESelectedKey_ESelectedKey>             Key;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bEnabled;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.B03_GetStateByName
struct UWB_Button03_ComboEdition_C_B03_GetStateByName_Params
{
	struct FName                                       State;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.B03_GetStateByIndex
struct UWB_Button03_ComboEdition_C_B03_GetStateByIndex_Params
{
	int                                                State;                                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.GetUserFocus
struct UWB_Button03_ComboEdition_C_GetUserFocus_Params
{
	class APlayerController*                           Player;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               HasFocus;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.GetButtonFontInfo_Hovered
struct UWB_Button03_ComboEdition_C_GetButtonFontInfo_Hovered_Params
{
	class UFont*                                       Font;                                                      // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   Typeface;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FontSize;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                     // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.GetButtonFontInfo_Normal
struct UWB_Button03_ComboEdition_C_GetButtonFontInfo_Normal_Params
{
	class UFont*                                       Font;                                                      // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   Typeface;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FontSize;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                     // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.GetButtonText
struct UWB_Button03_ComboEdition_C_GetButtonText_Params
{
	struct FText                                       ButtonText;                                                // 0x0000(0x0018)  (Parm, OutParm)
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.GetButtonEnabled
struct UWB_Button03_ComboEdition_C_GetButtonEnabled_Params
{
	bool                                               BIsEnabled;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.RemoveContentWidget
struct UWB_Button03_ComboEdition_C_RemoveContentWidget_Params
{
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.CreateContentWidget
struct UWB_Button03_ComboEdition_C_CreateContentWidget_Params
{
	class UClass*                                      Widget;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.IsContentWidgetValid
struct UWB_Button03_ComboEdition_C_IsContentWidgetValid_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.SetKeyRebindingJustification
struct UWB_Button03_ComboEdition_C_SetKeyRebindingJustification_Params
{
	TEnumAsByte<EOptionsTextJustification_EOptionsTextJustification> EOptionsText;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.SetIsSelectingText
struct UWB_Button03_ComboEdition_C_SetIsSelectingText_Params
{
	struct FText                                       InKeySelectionText;                                        // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.HandleIsEnabled
struct UWB_Button03_ComboEdition_C_HandleIsEnabled_Params
{
	bool                                               IsEnabled;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.FindKey
struct UWB_Button03_ComboEdition_C_FindKey_Params
{
	TEnumAsByte<ESelectedKey_ESelectedKey>             ESelectedKey;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWB_KeyRebindingKey_C*                       ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.SetNoKeySpecifiedText
struct UWB_Button03_ComboEdition_C_SetNoKeySpecifiedText_Params
{
	struct FText                                       InText;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.SetKeybindingKeysButtonInfo_Hovered
struct UWB_Button03_ComboEdition_C_SetKeybindingKeysButtonInfo_Hovered_Params
{
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.SetKeybindingKeysButtonInfo_Normal
struct UWB_Button03_ComboEdition_C_SetKeybindingKeysButtonInfo_Normal_Params
{
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.SetKeybindingText
struct UWB_Button03_ComboEdition_C_SetKeybindingText_Params
{
	struct FText                                       InText;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.SetKeyRebinding_OptionFont_Hovered
struct UWB_Button03_ComboEdition_C_SetKeyRebinding_OptionFont_Hovered_Params
{
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.SetKeyRebinding_OptionFont_Normal
struct UWB_Button03_ComboEdition_C_SetKeyRebinding_OptionFont_Normal_Params
{
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.SetMultiState_OptionFont_Normal
struct UWB_Button03_ComboEdition_C_SetMultiState_OptionFont_Normal_Params
{
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.SetMultiState_OptionFont_Hovered
struct UWB_Button03_ComboEdition_C_SetMultiState_OptionFont_Hovered_Params
{
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.SetStateButtonInfo
struct UWB_Button03_ComboEdition_C_SetStateButtonInfo_Params
{
	struct FLinearColor                                ButtonIconColor_Normal;                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                ButtonIconColor_Hovered;                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                ButtonIconColor_Clicked;                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     ButtonIcon;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.SetMultiState_FontInfo
struct UWB_Button03_ComboEdition_C_SetMultiState_FontInfo_Params
{
	class UFont*                                       MultiState_Font_Normal;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   MultiState_FontFace_Normal;                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MultiState_FontSize_Normal;                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                MultiState_FontColor_Normal;                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFont*                                       MultiState_Font_Hovered;                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   MultiState_FontFace_Hovered;                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MultiState_FontSize_Hovered;                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                MultiState_FontColor_Hovered;                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.SetMultiStateJustification
struct UWB_Button03_ComboEdition_C_SetMultiStateJustification_Params
{
	TEnumAsByte<EOptionsTextJustification_EOptionsTextJustification> EOptionsText;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.SetMultiStateText
struct UWB_Button03_ComboEdition_C_SetMultiStateText_Params
{
	struct FText                                       InText;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.UnhoverAllOptionsButton
struct UWB_Button03_ComboEdition_C_UnhoverAllOptionsButton_Params
{
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.SetupSizes
struct UWB_Button03_ComboEdition_C_SetupSizes_Params
{
	struct FVector2D                                   Size;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.B03_SetStateByName
struct UWB_Button03_ComboEdition_C_B03_SetStateByName_Params
{
	struct FName                                       State;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.B03_SetStateByIndex
struct UWB_Button03_ComboEdition_C_B03_SetStateByIndex_Params
{
	int                                                State;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.SetButtonText
struct UWB_Button03_ComboEdition_C_SetButtonText_Params
{
	struct FText                                       ButtonText;                                                // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.SetButtonFontInfo_Current
struct UWB_Button03_ComboEdition_C_SetButtonFontInfo_Current_Params
{
	class UFont*                                       Font;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   Typeface;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FontSize;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.SetButtonEnabled
struct UWB_Button03_ComboEdition_C_SetButtonEnabled_Params
{
	bool                                               BIsEnabled;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.SetButtonFontInfo_Normal
struct UWB_Button03_ComboEdition_C_SetButtonFontInfo_Normal_Params
{
	class UFont*                                       Font;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   Typeface;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FontSize;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.SetButtonFontInfo_Hovered
struct UWB_Button03_ComboEdition_C_SetButtonFontInfo_Hovered_Params
{
	class UFont*                                       Font;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   Typeface;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FontSize;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.SetUser_Focus
struct UWB_Button03_ComboEdition_C_SetUser_Focus_Params
{
	class APlayerController*                           Player;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.SetButtonSound_OnClicked
struct UWB_Button03_ComboEdition_C_SetButtonSound_OnClicked_Params
{
	class USoundBase*                                  ClickedSound;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.SetButtonSound_OnHovered
struct UWB_Button03_ComboEdition_C_SetButtonSound_OnHovered_Params
{
	class USoundBase*                                  HoveredSound;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.B03_SetStateButtonIcon
struct UWB_Button03_ComboEdition_C_B03_SetStateButtonIcon_Params
{
	class UObject*                                     Icon;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.B03_SetStateButtonIconColor_Clicked
struct UWB_Button03_ComboEdition_C_B03_SetStateButtonIconColor_Clicked_Params
{
	struct FLinearColor                                Color;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.B03_SetStateButtonIconColor_Normal
struct UWB_Button03_ComboEdition_C_B03_SetStateButtonIconColor_Normal_Params
{
	struct FLinearColor                                Color;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.B03_SetStateButtonIconColor_Hovered
struct UWB_Button03_ComboEdition_C_B03_SetStateButtonIconColor_Hovered_Params
{
	struct FLinearColor                                Color;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.B03_SetSelectedKey
struct UWB_Button03_ComboEdition_C_B03_SetSelectedKey_Params
{
	TEnumAsByte<ESelectedKey_ESelectedKey>             Key;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputChord                                 SelectedKey;                                               // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.B03_SetKeyEnabled
struct UWB_Button03_ComboEdition_C_B03_SetKeyEnabled_Params
{
	TEnumAsByte<ESelectedKey_ESelectedKey>             Key;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bEnabled;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.B03_SetKeySelectionText
struct UWB_Button03_ComboEdition_C_B03_SetKeySelectionText_Params
{
	TEnumAsByte<ESelectedKey_ESelectedKey>             Key;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       KeySelectionText;                                          // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.B03_SetAllowGamepadKeys
struct UWB_Button03_ComboEdition_C_B03_SetAllowGamepadKeys_Params
{
	TEnumAsByte<ESelectedKey_ESelectedKey>             Key;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bAllowGamepadKeys;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.B03_SetAllowModifierKeys
struct UWB_Button03_ComboEdition_C_B03_SetAllowModifierKeys_Params
{
	TEnumAsByte<ESelectedKey_ESelectedKey>             Key;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bAllowModifierKeys;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.B03_SetKeyEscapeKeys
struct UWB_Button03_ComboEdition_C_B03_SetKeyEscapeKeys_Params
{
	TEnumAsByte<ESelectedKey_ESelectedKey>             Key;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FKey>                                EscapeKeys;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.B03_RemoveContentWidget
struct UWB_Button03_ComboEdition_C_B03_RemoveContentWidget_Params
{
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.B03_CreateContentWidget
struct UWB_Button03_ComboEdition_C_B03_CreateContentWidget_Params
{
	class UClass*                                      ContentWidget;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.B03_SetSliderValue
struct UWB_Button03_ComboEdition_C_B03_SetSliderValue_Params
{
	float                                              Value;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.B03_SetSliderValueNormalized
struct UWB_Button03_ComboEdition_C_B03_SetSliderValueNormalized_Params
{
	float                                              ValueNormalized;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.PreConstruct
struct UWB_Button03_ComboEdition_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.Construct
struct UWB_Button03_ComboEdition_C_Construct_Params
{
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.BndEvt__ComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
struct UWB_Button03_ComboEdition_C_BndEvt__ComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TEnumAsByte<SlateCore_ESelectInfo>                 SelectionType;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.BndEvt__WB_Button03_MultiStates_K2Node_ComponentBoundEvent_0_OnStateChanged__DelegateSignature
struct UWB_Button03_ComboEdition_C_BndEvt__WB_Button03_MultiStates_K2Node_ComponentBoundEvent_0_OnStateChanged__DelegateSignature_Params
{
	struct FName                                       State_Name;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                State_Index;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.UnhoverMultiStateButton
struct UWB_Button03_ComboEdition_C_UnhoverMultiStateButton_Params
{
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.BndEvt__WB_Button03_MultiStates_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature
struct UWB_Button03_ComboEdition_C_BndEvt__WB_Button03_MultiStates_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature_Params
{
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.Construct_MultiStateOption
struct UWB_Button03_ComboEdition_C_Construct_MultiStateOption_Params
{
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.PreConstruct_MultiStateOption
struct UWB_Button03_ComboEdition_C_PreConstruct_MultiStateOption_Params
{
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.BndEvt__Button_Multistate_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UWB_Button03_ComboEdition_C_BndEvt__Button_Multistate_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.BndEvt__Button_Multistate_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
struct UWB_Button03_ComboEdition_C_BndEvt__Button_Multistate_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.MultiState_CheckUserFocus
struct UWB_Button03_ComboEdition_C_MultiState_CheckUserFocus_Params
{
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.ResetHovered
struct UWB_Button03_ComboEdition_C_ResetHovered_Params
{
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.BndEvt__KeybindingKey2_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature
struct UWB_Button03_ComboEdition_C_BndEvt__KeybindingKey2_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature_Params
{
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.BndEvt__KeybindingKey1_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature
struct UWB_Button03_ComboEdition_C_BndEvt__KeybindingKey1_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature_Params
{
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.BndEvt__KeybindingKey2_K2Node_ComponentBoundEvent_93_OnKeyEmptied__DelegateSignature
struct UWB_Button03_ComboEdition_C_BndEvt__KeybindingKey2_K2Node_ComponentBoundEvent_93_OnKeyEmptied__DelegateSignature_Params
{
	struct FInputChord                                 LastSelectedKey;                                           // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.BndEvt__KeybindingKey1_K2Node_ComponentBoundEvent_88_OnKeyEmptied__DelegateSignature
struct UWB_Button03_ComboEdition_C_BndEvt__KeybindingKey1_K2Node_ComponentBoundEvent_88_OnKeyEmptied__DelegateSignature_Params
{
	struct FInputChord                                 LastSelectedKey;                                           // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.BndEvt__KeybindingKey2_K2Node_ComponentBoundEvent_42_OnKeySelected__DelegateSignature
struct UWB_Button03_ComboEdition_C_BndEvt__KeybindingKey2_K2Node_ComponentBoundEvent_42_OnKeySelected__DelegateSignature_Params
{
	TEnumAsByte<EMappingType_EMappingType>             MappingType;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputChord                                 SelectedKey;                                               // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.BndEvt__KeybindingKey1_K2Node_ComponentBoundEvent_23_OnKeySelected__DelegateSignature
struct UWB_Button03_ComboEdition_C_BndEvt__KeybindingKey1_K2Node_ComponentBoundEvent_23_OnKeySelected__DelegateSignature_Params
{
	TEnumAsByte<EMappingType_EMappingType>             MappingType;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputChord                                 SelectedKey;                                               // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.UnhoverKeyRebindingButton
struct UWB_Button03_ComboEdition_C_UnhoverKeyRebindingButton_Params
{
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.BndEvt__Button_KeyRebinding_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
struct UWB_Button03_ComboEdition_C_BndEvt__Button_KeyRebinding_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.BndEvt__Button_KeyRebinding_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
struct UWB_Button03_ComboEdition_C_BndEvt__Button_KeyRebinding_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.Construct_KeyRebindingOption
struct UWB_Button03_ComboEdition_C_Construct_KeyRebindingOption_Params
{
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.PreConstruct_KeyRebindingOption
struct UWB_Button03_ComboEdition_C_PreConstruct_KeyRebindingOption_Params
{
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.BndEvt__WB_ProgressSlider_K2Node_ComponentBoundEvent_48_OnUnhovered__DelegateSignature
struct UWB_Button03_ComboEdition_C_BndEvt__WB_ProgressSlider_K2Node_ComponentBoundEvent_48_OnUnhovered__DelegateSignature_Params
{
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.BndEvt__WB_ProgressSlider_K2Node_ComponentBoundEvent_609_OnProgressChanged__DelegateSignature
struct UWB_Button03_ComboEdition_C_BndEvt__WB_ProgressSlider_K2Node_ComponentBoundEvent_609_OnProgressChanged__DelegateSignature_Params
{
	float                                              Value;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.BndEvt__WB_ProgressSlider_K2Node_ComponentBoundEvent_602_OnHovered__DelegateSignature
struct UWB_Button03_ComboEdition_C_BndEvt__WB_ProgressSlider_K2Node_ComponentBoundEvent_602_OnHovered__DelegateSignature_Params
{
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.BndEvt__Button_Slider_K2Node_ComponentBoundEvent_123_OnButtonHoverEvent__DelegateSignature
struct UWB_Button03_ComboEdition_C_BndEvt__Button_Slider_K2Node_ComponentBoundEvent_123_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.BndEvt__Button_Slider_K2Node_ComponentBoundEvent_120_OnButtonHoverEvent__DelegateSignature
struct UWB_Button03_ComboEdition_C_BndEvt__Button_Slider_K2Node_ComponentBoundEvent_120_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.UnhoverSliderButton
struct UWB_Button03_ComboEdition_C_UnhoverSliderButton_Params
{
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.Construct_SliderOption
struct UWB_Button03_ComboEdition_C_Construct_SliderOption_Params
{
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.PreConstruct_SliderOption
struct UWB_Button03_ComboEdition_C_PreConstruct_SliderOption_Params
{
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.Slider_CheckUserFocus
struct UWB_Button03_ComboEdition_C_Slider_CheckUserFocus_Params
{
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.ExecuteUbergraph_WB_Button03_ComboEdition
struct UWB_Button03_ComboEdition_C_ExecuteUbergraph_WB_Button03_ComboEdition_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.OnSelectionChanged (ComboBox)__DelegateSignature
struct UWB_Button03_ComboEdition_C_OnSelectionChanged__ComboBox___DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TEnumAsByte<SlateCore_ESelectInfo>                 SelectionType;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.OnSliderChanged__DelegateSignature
struct UWB_Button03_ComboEdition_C_OnSliderChanged__DelegateSignature_Params
{
	float                                              ValueNormalized;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Value;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.On Key Emptied Right__DelegateSignature
struct UWB_Button03_ComboEdition_C_On_Key_Emptied_Right__DelegateSignature_Params
{
	struct FInputChord                                 Last_Selected_Key;                                         // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.On Key Emptied Left__DelegateSignature
struct UWB_Button03_ComboEdition_C_On_Key_Emptied_Left__DelegateSignature_Params
{
	struct FInputChord                                 Last_Selected_Key;                                         // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.On Selected Key Right__DelegateSignature
struct UWB_Button03_ComboEdition_C_On_Selected_Key_Right__DelegateSignature_Params
{
	class UWB_Button03_ComboEdition_C*                 Button;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputChord                                 SelectedKey;                                               // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.On Selected Key Left__DelegateSignature
struct UWB_Button03_ComboEdition_C_On_Selected_Key_Left__DelegateSignature_Params
{
	class UWB_Button03_ComboEdition_C*                 Button;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputChord                                 SelectedKey;                                               // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function WB_Button03_ComboEdition.WB_Button03_ComboEdition_C.OnStateChanged__DelegateSignature
struct UWB_Button03_ComboEdition_C_OnStateChanged__DelegateSignature_Params
{
	struct FName                                       StateName;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                StateIndex;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
