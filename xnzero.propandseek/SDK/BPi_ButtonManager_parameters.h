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

// Function BPi_ButtonManager.BPi_ButtonManager_C.B03_GetSliderValueNormalized
struct UBPi_ButtonManager_C_B03_GetSliderValueNormalized_Params
{
	float                                              ValueNormalized;                                           // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPi_ButtonManager.BPi_ButtonManager_C.B03_GetSliderValue
struct UBPi_ButtonManager_C_B03_GetSliderValue_Params
{
	float                                              Value;                                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPi_ButtonManager.BPi_ButtonManager_C.B03_SetSliderValueNormalized
struct UBPi_ButtonManager_C_B03_SetSliderValueNormalized_Params
{
	float                                              ValueNormalized;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPi_ButtonManager.BPi_ButtonManager_C.B03_SetSliderValue
struct UBPi_ButtonManager_C_B03_SetSliderValue_Params
{
	float                                              Value;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPi_ButtonManager.BPi_ButtonManager_C.B04_SetScale
struct UBPi_ButtonManager_C_B04_SetScale_Params
{
	float                                              Scale;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPi_ButtonManager.BPi_ButtonManager_C.B04_GetScale_Clicked
struct UBPi_ButtonManager_C_B04_GetScale_Clicked_Params
{
	float                                              Scale;                                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPi_ButtonManager.BPi_ButtonManager_C.B04_GetScale_Hovered
struct UBPi_ButtonManager_C_B04_GetScale_Hovered_Params
{
	float                                              Scale;                                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPi_ButtonManager.BPi_ButtonManager_C.B04_GetImage
struct UBPi_ButtonManager_C_B04_GetImage_Params
{
	class UObject*                                     Image_Brush;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   Image_Translation;                                         // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPi_ButtonManager.BPi_ButtonManager_C.B04_SetVignetteColor
struct UBPi_ButtonManager_C_B04_SetVignetteColor_Params
{
	struct FLinearColor                                VignetteColor;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPi_ButtonManager.BPi_ButtonManager_C.B04_SetImageColor_Disabled
struct UBPi_ButtonManager_C_B04_SetImageColor_Disabled_Params
{
	struct FLinearColor                                ImageColor_Disabled;                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Saturation_Disabled;                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPi_ButtonManager.BPi_ButtonManager_C.B04_SetImageColor_Clicked
struct UBPi_ButtonManager_C_B04_SetImageColor_Clicked_Params
{
	struct FLinearColor                                ImageColor_Clicked;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Saturation_Clicked;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPi_ButtonManager.BPi_ButtonManager_C.B04_SetImageColor_Hovered
struct UBPi_ButtonManager_C_B04_SetImageColor_Hovered_Params
{
	struct FLinearColor                                ImageColor_Hovered;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Saturation_Hovered;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPi_ButtonManager.BPi_ButtonManager_C.B04_SetImageColor_Normal
struct UBPi_ButtonManager_C_B04_SetImageColor_Normal_Params
{
	struct FLinearColor                                ImageColor_Normal;                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Saturation_Normal;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPi_ButtonManager.BPi_ButtonManager_C.B04_SetImage
struct UBPi_ButtonManager_C_B04_SetImage_Params
{
	class UObject*                                     ImageBrush;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   ImageTranslation;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPi_ButtonManager.BPi_ButtonManager_C.B04_RemoveContentWidget
struct UBPi_ButtonManager_C_B04_RemoveContentWidget_Params
{
};

// Function BPi_ButtonManager.BPi_ButtonManager_C.B04_CreateContentWidget
struct UBPi_ButtonManager_C_B04_CreateContentWidget_Params
{
	class UClass*                                      ContentWidget;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPi_ButtonManager.BPi_ButtonManager_C.B04_SetShineFxEnabled
struct UBPi_ButtonManager_C_B04_SetShineFxEnabled_Params
{
	bool                                               BIsEnabled;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPi_ButtonManager.BPi_ButtonManager_C.B04_SetFrameColor_Current
struct UBPi_ButtonManager_C_B04_SetFrameColor_Current_Params
{
	struct FLinearColor                                FrameColor1;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                FrameColor2;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                FrameColor_Shine;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                ShineFxColor_Background;                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                ShineFxColor_Small;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                ShineFxColor_Big;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPi_ButtonManager.BPi_ButtonManager_C.B04_SetFrameColor_Disabled
struct UBPi_ButtonManager_C_B04_SetFrameColor_Disabled_Params
{
	struct FLinearColor                                FrameColor1;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                FrameColor2;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                FrameColor_Shine;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPi_ButtonManager.BPi_ButtonManager_C.B04_SetFrameColor_Clicked
struct UBPi_ButtonManager_C_B04_SetFrameColor_Clicked_Params
{
	struct FLinearColor                                FrameColor1;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                FrameColor2;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                FrameColor_Shine;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                ShineFxColor_Background;                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                ShineFxColor_Small;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                ShineFxColor_Big;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPi_ButtonManager.BPi_ButtonManager_C.B04_SetFrameColor_Hovered
struct UBPi_ButtonManager_C_B04_SetFrameColor_Hovered_Params
{
	struct FLinearColor                                FrameColor1;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                FrameColor2;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                FrameColor_Shine;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                ShineFxColor_Background;                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                ShineFxColor_Small;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                ShineFxColor_Big;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPi_ButtonManager.BPi_ButtonManager_C.B04_SetFrameColor_Normal
struct UBPi_ButtonManager_C_B04_SetFrameColor_Normal_Params
{
	struct FLinearColor                                FrameColor1;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                FrameColor2;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                FrameColor_Shine;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                ShineFxColor_Background;                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                ShineFxColor_Small;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                ShineFxColor_Big;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPi_ButtonManager.BPi_ButtonManager_C.B03_RemoveContentWidget
struct UBPi_ButtonManager_C_B03_RemoveContentWidget_Params
{
};

// Function BPi_ButtonManager.BPi_ButtonManager_C.B03_CreateContentWidget
struct UBPi_ButtonManager_C_B03_CreateContentWidget_Params
{
	class UClass*                                      ContentWidget;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPi_ButtonManager.BPi_ButtonManager_C.B03_SetKeyEscapeKeys
struct UBPi_ButtonManager_C_B03_SetKeyEscapeKeys_Params
{
	TEnumAsByte<ESelectedKey_ESelectedKey>             Key;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FKey>                                EscapeKeys;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BPi_ButtonManager.BPi_ButtonManager_C.B03_GetKeyEscapeKeys
struct UBPi_ButtonManager_C_B03_GetKeyEscapeKeys_Params
{
	TEnumAsByte<ESelectedKey_ESelectedKey>             Key;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FKey>                                EscapeKeys;                                                // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
};

// Function BPi_ButtonManager.BPi_ButtonManager_C.B03_GetAllowModifierKeys
struct UBPi_ButtonManager_C_B03_GetAllowModifierKeys_Params
{
	TEnumAsByte<ESelectedKey_ESelectedKey>             Key;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bAllowModifierKeys;                                        // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPi_ButtonManager.BPi_ButtonManager_C.B03_SetAllowModifierKeys
struct UBPi_ButtonManager_C_B03_SetAllowModifierKeys_Params
{
	TEnumAsByte<ESelectedKey_ESelectedKey>             Key;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bAllowModifierKeys;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPi_ButtonManager.BPi_ButtonManager_C.B03_GetAllowGamepadKeys
struct UBPi_ButtonManager_C_B03_GetAllowGamepadKeys_Params
{
	TEnumAsByte<ESelectedKey_ESelectedKey>             Key;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bAllowGamepadKeys;                                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPi_ButtonManager.BPi_ButtonManager_C.B03_SetAllowGamepadKeys
struct UBPi_ButtonManager_C_B03_SetAllowGamepadKeys_Params
{
	TEnumAsByte<ESelectedKey_ESelectedKey>             Key;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bAllowGamepadKeys;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPi_ButtonManager.BPi_ButtonManager_C.B03_GetKeySelectionText
struct UBPi_ButtonManager_C_B03_GetKeySelectionText_Params
{
	TEnumAsByte<ESelectedKey_ESelectedKey>             Key;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       KeySelectionText;                                          // 0x0000(0x0018)  (Parm, OutParm)
};

// Function BPi_ButtonManager.BPi_ButtonManager_C.B03_SetKeySelectionText
struct UBPi_ButtonManager_C_B03_SetKeySelectionText_Params
{
	TEnumAsByte<ESelectedKey_ESelectedKey>             Key;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       KeySelectionText;                                          // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BPi_ButtonManager.BPi_ButtonManager_C.B03_GetSelectedKey
struct UBPi_ButtonManager_C_B03_GetSelectedKey_Params
{
	TEnumAsByte<ESelectedKey_ESelectedKey>             Key;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputChord                                 SelectedKey;                                               // 0x0000(0x0020)  (Parm, OutParm, HasGetValueTypeHash)
};

// Function BPi_ButtonManager.BPi_ButtonManager_C.B03_GetKeyEnabled
struct UBPi_ButtonManager_C_B03_GetKeyEnabled_Params
{
	TEnumAsByte<ESelectedKey_ESelectedKey>             Key;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bEnabled;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPi_ButtonManager.BPi_ButtonManager_C.B03_SetKeyEnabled
struct UBPi_ButtonManager_C_B03_SetKeyEnabled_Params
{
	TEnumAsByte<ESelectedKey_ESelectedKey>             Key;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bEnabled;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPi_ButtonManager.BPi_ButtonManager_C.B03_SetSelectedKey
struct UBPi_ButtonManager_C_B03_SetSelectedKey_Params
{
	TEnumAsByte<ESelectedKey_ESelectedKey>             Key;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputChord                                 SelectedKey;                                               // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BPi_ButtonManager.BPi_ButtonManager_C.B03_SetStateButtonIconColor_Clicked
struct UBPi_ButtonManager_C_B03_SetStateButtonIconColor_Clicked_Params
{
	struct FLinearColor                                Color;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPi_ButtonManager.BPi_ButtonManager_C.B03_SetStateButtonIconColor_Hovered
struct UBPi_ButtonManager_C_B03_SetStateButtonIconColor_Hovered_Params
{
	struct FLinearColor                                Color;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPi_ButtonManager.BPi_ButtonManager_C.B03_SetStateButtonIconColor_Normal
struct UBPi_ButtonManager_C_B03_SetStateButtonIconColor_Normal_Params
{
	struct FLinearColor                                Color;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPi_ButtonManager.BPi_ButtonManager_C.B03_SetStateButtonIcon
struct UBPi_ButtonManager_C_B03_SetStateButtonIcon_Params
{
	class UObject*                                     Icon;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPi_ButtonManager.BPi_ButtonManager_C.B03_GetStateByIndex
struct UBPi_ButtonManager_C_B03_GetStateByIndex_Params
{
	int                                                State;                                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPi_ButtonManager.BPi_ButtonManager_C.B03_GetStateByName
struct UBPi_ButtonManager_C_B03_GetStateByName_Params
{
	struct FName                                       State;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPi_ButtonManager.BPi_ButtonManager_C.B03_SetStateByIndex
struct UBPi_ButtonManager_C_B03_SetStateByIndex_Params
{
	int                                                State;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPi_ButtonManager.BPi_ButtonManager_C.B03_SetStateByName
struct UBPi_ButtonManager_C_B03_SetStateByName_Params
{
	struct FName                                       State;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPi_ButtonManager.BPi_ButtonManager_C.B02_RemoveContentWidget
struct UBPi_ButtonManager_C_B02_RemoveContentWidget_Params
{
};

// Function BPi_ButtonManager.BPi_ButtonManager_C.B02_Create_ContentWidget
struct UBPi_ButtonManager_C_B02_Create_ContentWidget_Params
{
	class UClass*                                      ContentWidget;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPi_ButtonManager.BPi_ButtonManager_C.B02_SetBlurShineColor_Clicked
struct UBPi_ButtonManager_C_B02_SetBlurShineColor_Clicked_Params
{
	struct FLinearColor                                InColor;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPi_ButtonManager.BPi_ButtonManager_C.B02_SetBlurShineColor_Hovered
struct UBPi_ButtonManager_C_B02_SetBlurShineColor_Hovered_Params
{
	struct FLinearColor                                InColor;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPi_ButtonManager.BPi_ButtonManager_C.B02_SetDynamicShineColor
struct UBPi_ButtonManager_C_B02_SetDynamicShineColor_Params
{
	struct FLinearColor                                InColor;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPi_ButtonManager.BPi_ButtonManager_C.B02_SetUseDynamicShine
struct UBPi_ButtonManager_C_B02_SetUseDynamicShine_Params
{
	bool                                               bUseDynamicShine;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPi_ButtonManager.BPi_ButtonManager_C.B02_SetFillColor_Current
struct UBPi_ButtonManager_C_B02_SetFillColor_Current_Params
{
	struct FLinearColor                                FillColor_Current;                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPi_ButtonManager.BPi_ButtonManager_C.B02_SetFillColor_Disabled
struct UBPi_ButtonManager_C_B02_SetFillColor_Disabled_Params
{
	struct FLinearColor                                FillColor_Disabled;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPi_ButtonManager.BPi_ButtonManager_C.B02_SetFillColor_Clicked
struct UBPi_ButtonManager_C_B02_SetFillColor_Clicked_Params
{
	struct FLinearColor                                FillColor_Clicked;                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPi_ButtonManager.BPi_ButtonManager_C.B02_SetFillColor_Hovered
struct UBPi_ButtonManager_C_B02_SetFillColor_Hovered_Params
{
	struct FLinearColor                                FillColor_Hovered;                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPi_ButtonManager.BPi_ButtonManager_C.B02_SetFillColor_Normal
struct UBPi_ButtonManager_C_B02_SetFillColor_Normal_Params
{
	struct FLinearColor                                FillColor_Normal;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPi_ButtonManager.BPi_ButtonManager_C.B02_SetFrameColor_Current
struct UBPi_ButtonManager_C_B02_SetFrameColor_Current_Params
{
	struct FLinearColor                                FrameColor_Current;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPi_ButtonManager.BPi_ButtonManager_C.B02_SetFrameColor_Disabled
struct UBPi_ButtonManager_C_B02_SetFrameColor_Disabled_Params
{
	struct FLinearColor                                FrameColor_Disabled;                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPi_ButtonManager.BPi_ButtonManager_C.B02_SetFrameColor_Clicked
struct UBPi_ButtonManager_C_B02_SetFrameColor_Clicked_Params
{
	struct FLinearColor                                FrameColor_Clicked;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPi_ButtonManager.BPi_ButtonManager_C.B02_SetFrameColor_Hovered
struct UBPi_ButtonManager_C_B02_SetFrameColor_Hovered_Params
{
	struct FLinearColor                                FrameColor_Hovered;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPi_ButtonManager.BPi_ButtonManager_C.B02_SetFrameColor_Normal
struct UBPi_ButtonManager_C_B02_SetFrameColor_Normal_Params
{
	struct FLinearColor                                FrameColor_Normal;                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPi_ButtonManager.BPi_ButtonManager_C.SetButtonJustification
struct UBPi_ButtonManager_C_SetButtonJustification_Params
{
	TEnumAsByte<EJustification_EJustification>         EJustification;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPi_ButtonManager.BPi_ButtonManager_C.GetButtonJustification
struct UBPi_ButtonManager_C_GetButtonJustification_Params
{
	TEnumAsByte<EJustification_EJustification>         EJustification;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPi_ButtonManager.BPi_ButtonManager_C.B01_SetColor_ClickedFX_Text
struct UBPi_ButtonManager_C_B01_SetColor_ClickedFX_Text_Params
{
	struct FLinearColor                                Color_ClickedFX_Text;                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPi_ButtonManager.BPi_ButtonManager_C.B01_SetColor_ClickedFX
struct UBPi_ButtonManager_C_B01_SetColor_ClickedFX_Params
{
	struct FLinearColor                                Color_ClickedFX;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPi_ButtonManager.BPi_ButtonManager_C.B01_SetColor_HoveredFX_02
struct UBPi_ButtonManager_C_B01_SetColor_HoveredFX_02_Params
{
	struct FLinearColor                                Color_HoveredFX_02;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPi_ButtonManager.BPi_ButtonManager_C.B01_SetColor_HoveredFX_01
struct UBPi_ButtonManager_C_B01_SetColor_HoveredFX_01_Params
{
	struct FLinearColor                                Color_HoveredFX_01;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPi_ButtonManager.BPi_ButtonManager_C.SetButtonSound_OnHovered
struct UBPi_ButtonManager_C_SetButtonSound_OnHovered_Params
{
	class USoundBase*                                  HoveredSound;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPi_ButtonManager.BPi_ButtonManager_C.SetButtonSound_OnClicked
struct UBPi_ButtonManager_C_SetButtonSound_OnClicked_Params
{
	class USoundBase*                                  ClickedSound;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPi_ButtonManager.BPi_ButtonManager_C.SetHintIcon
struct UBPi_ButtonManager_C_SetHintIcon_Params
{
	class UClass*                                      HintIcon;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPi_ButtonManager.BPi_ButtonManager_C.SetUser_Focus
struct UBPi_ButtonManager_C_SetUser_Focus_Params
{
	class APlayerController*                           Player;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPi_ButtonManager.BPi_ButtonManager_C.GetUserFocus
struct UBPi_ButtonManager_C_GetUserFocus_Params
{
	class APlayerController*                           Player;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               HasFocus;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPi_ButtonManager.BPi_ButtonManager_C.SetButtonFontInfo_Disabled
struct UBPi_ButtonManager_C_SetButtonFontInfo_Disabled_Params
{
	class UFont*                                       Font;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   Typeface;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FontSize;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPi_ButtonManager.BPi_ButtonManager_C.SetButtonFontInfo_Clicked
struct UBPi_ButtonManager_C_SetButtonFontInfo_Clicked_Params
{
	class UFont*                                       Font;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   Typeface;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FontSize;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPi_ButtonManager.BPi_ButtonManager_C.SetButtonFontInfo_Hovered
struct UBPi_ButtonManager_C_SetButtonFontInfo_Hovered_Params
{
	class UFont*                                       Font;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   Typeface;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FontSize;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPi_ButtonManager.BPi_ButtonManager_C.SetButtonFontInfo_Normal
struct UBPi_ButtonManager_C_SetButtonFontInfo_Normal_Params
{
	class UFont*                                       Font;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   Typeface;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FontSize;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPi_ButtonManager.BPi_ButtonManager_C.GetButtonFontInfo_Disabled
struct UBPi_ButtonManager_C_GetButtonFontInfo_Disabled_Params
{
	class UFont*                                       Font;                                                      // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   Typeface;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FontSize;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                     // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPi_ButtonManager.BPi_ButtonManager_C.GetButtonFontInfo_Clicked
struct UBPi_ButtonManager_C_GetButtonFontInfo_Clicked_Params
{
	class UFont*                                       Font;                                                      // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   Typeface;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Integer;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                     // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPi_ButtonManager.BPi_ButtonManager_C.GetButtonFontInfo_Hovered
struct UBPi_ButtonManager_C_GetButtonFontInfo_Hovered_Params
{
	class UFont*                                       Font;                                                      // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   Typeface;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FontSize;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                     // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPi_ButtonManager.BPi_ButtonManager_C.GetButtonFontInfo_Normal
struct UBPi_ButtonManager_C_GetButtonFontInfo_Normal_Params
{
	class UFont*                                       Font;                                                      // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   Typeface;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FontSize;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                     // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPi_ButtonManager.BPi_ButtonManager_C.GetButtonText
struct UBPi_ButtonManager_C_GetButtonText_Params
{
	struct FText                                       ButtonText;                                                // 0x0000(0x0018)  (Parm, OutParm)
};

// Function BPi_ButtonManager.BPi_ButtonManager_C.GetButtonEnabled
struct UBPi_ButtonManager_C_GetButtonEnabled_Params
{
	bool                                               BIsEnabled;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPi_ButtonManager.BPi_ButtonManager_C.SetButtonEnabled
struct UBPi_ButtonManager_C_SetButtonEnabled_Params
{
	bool                                               BIsEnabled;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPi_ButtonManager.BPi_ButtonManager_C.SetButtonFontInfo_Current
struct UBPi_ButtonManager_C_SetButtonFontInfo_Current_Params
{
	class UFont*                                       Font;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   Typeface;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FontSize;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPi_ButtonManager.BPi_ButtonManager_C.SetButtonText
struct UBPi_ButtonManager_C_SetButtonText_Params
{
	struct FText                                       ButtonText;                                                // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
