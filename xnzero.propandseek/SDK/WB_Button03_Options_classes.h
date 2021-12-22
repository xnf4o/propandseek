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
// Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WB_Button03_Options.WB_Button03_Options_C
// 0x05AF (FullSize[0x07E8] - InheritedSize[0x0239])
class UWB_Button03_Options_C : public UWB_Button_Base_C
{
public:
	unsigned char                                      UnknownData_NM66[0x7];                                     // 0x0239(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0240(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                     B_KeyRebinding_FillColor;                                  // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                     b_KeyRebindingOption;                                      // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                     B_MultiState_FillColor;                                    // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                     b_MultiStateOption;                                        // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                     B_Slider_FillColor;                                        // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                     b_SliderOption;                                            // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Button_KeyRebinding;                                       // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Button_Multistate;                                         // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Button_Slider;                                             // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_KeyRebindingKey_C*                       KeybindingKey1;                                            // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_KeyRebindingKey_C*                       KeybindingKey2;                                            // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Button03_Frame_C*                        KeyRebinding_Frame;                                        // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  KeyRebinding_Text;                                         // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Button03_Frame_C*                        MultiState_Frame;                                          // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  MultiState_TextBlock;                                      // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    OV_ContentWidget;                                          // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                                    SB_Content;                                                // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                                    SB_ContentWidget;                                          // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                                    SB_KeyRebinding_Text;                                      // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                                    SB_MultiState_Option;                                      // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                                    SB_MultiState_Text;                                        // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                                    SB_ProgressSlider;                                         // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                                    SB_Slider_Text;                                            // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  Slider_Text;                                               // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Button03_Frame_C*                        SliderFrame;                                               // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Button03_MultiStates_C*                  WB_Button03_MultiStates;                                   // 0x0310(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_ProgressSlider_C*                        WB_ProgressSlider;                                         // 0x0318(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             WS_Content;                                                // 0x0320(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FVector2D                                   ButtonSize;                                                // 0x0328(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<EOptionsType_EOptionsType>             OptionType;                                                // 0x0330(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_S8F8[0x7];                                     // 0x0331(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UFont*                                       MultiState_OptionFont_Normal;                              // 0x0338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   MultiState_OptionFontFace_Normal;                          // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MultiState_OptionFontSize_Normal;                          // 0x0348(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                MultiState_TextColor_Normal;                               // 0x034C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                MultiState_FrameColor_Normal;                              // 0x035C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                MultiState_FillColor_Normal;                               // 0x036C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_W1EG[0x4];                                     // 0x037C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UFont*                                       MultiState_OptionFont_Hovered;                             // 0x0380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   MultiState_OptionFontFace_Hovered;                         // 0x0388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MultiState_OptionFontSize_Hovered;                         // 0x0390(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                MultiState_TextColor_Hovered;                              // 0x0394(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                MultiState_FrameColor_Hovered;                             // 0x03A4(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                MultiState_FillColor_Hovered;                              // 0x03B4(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_1X1T[0x4];                                     // 0x03C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       MultiStateOptionText;                                      // 0x03C8(0x0018) (Edit, BlueprintVisible)
	TEnumAsByte<EOptionsTextJustification_EOptionsTextJustification> MultiState_TextJustification;                              // 0x03E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_1HV0[0x3];                                     // 0x03E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MultiState_TextRoom;                                       // 0x03E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FName>                               MultiState_States;                                         // 0x03E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              MultiState_OptionRoom;                                     // 0x03F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsEnabled;                                                 // 0x03FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_FM3J[0x3];                                     // 0x03FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnStateChanged;                                            // 0x0400(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UFont*                                       MultiState_Font_Normal;                                    // 0x0410(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   MultiState_FontFace_Normal;                                // 0x0418(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MultiState_FontSize_Normal;                                // 0x0420(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                MultiState_FontColor_Normal;                               // 0x0424(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_UU2D[0x4];                                     // 0x0434(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UFont*                                       MultiState_Font_Hovered;                                   // 0x0438(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   MultiState_FontFace_Hovered;                               // 0x0440(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MultiState_FontSize_Hovered;                               // 0x0448(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                MultiState_FontColor_Hovered;                              // 0x044C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bUseGamepadFocus;                                          // 0x045C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_HA9F[0x3];                                     // 0x045D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      ContentWidget;                                             // 0x0460(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bUseNavStateOverview;                                      // 0x0468(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_5S2G[0x3];                                     // 0x0469(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              NavStateOverview_Room;                                     // 0x046C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                NavStateOverviewColor_Normal;                              // 0x0470(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                NavStateOverviewColor_Hovered;                             // 0x0480(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     MultiState_ButtonIcon;                                     // 0x0490(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                MultiState_ButtonColorNormal;                              // 0x0498(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                MultiState_ButtonColorHovered;                             // 0x04A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                MultiState_ButtonColorClicked;                             // 0x04B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  ButtonSound_Hovered;                                       // 0x04C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  ButtonSound_Clicked;                                       // 0x04D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFont*                                       KeyRebinding_OptionFont_Normal;                            // 0x04D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   KeyRebinding_OptionFontFace_Normal;                        // 0x04E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                KeyRebinding_OptionFontSize_Normal;                        // 0x04E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                KeyRebinding_TextColor_Normal;                             // 0x04EC(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                KeyRebinding_FrameColor_Normal;                            // 0x04FC(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                KeyRebinding_FillColor_Normal;                             // 0x050C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_NOMH[0x4];                                     // 0x051C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UFont*                                       KeyRebinding_OptionFont_Hovered;                           // 0x0520(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   KeyRebinding_OptionFontFace_Hovered;                       // 0x0528(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                KeyRebinding_OptionFontSize_Hovered;                       // 0x0530(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                KeyRebinding_TextColor_Hovered;                            // 0x0534(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                KeyRebinding_FrameColor_Hovered;                           // 0x0544(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                KeyRebinding_FillColor_Hovered;                            // 0x0554(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_CXSG[0x4];                                     // 0x0564(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       KeymappingName;                                            // 0x0568(0x0018) (Edit, BlueprintVisible)
	struct FText                                       NoKeySpecifiedText;                                        // 0x0580(0x0018) (Edit, BlueprintVisible)
	struct FText                                       KeySelectionText;                                          // 0x0598(0x0018) (Edit, BlueprintVisible)
	TEnumAsByte<EOptionsTextJustification_EOptionsTextJustification> KeyRebinding_TextJustification;                            // 0x05B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_GT89[0x3];                                     // 0x05B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Keybinding_TextRoom;                                       // 0x05B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFont*                                       KeybindingButton_Font_Normal;                              // 0x05B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   KeybindingButton_FontFace_Normal;                          // 0x05C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                KeybindingButton_FontSize_Normal;                          // 0x05C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                KeybindingButton_TextColor_Normal;                         // 0x05CC(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                KeybindingButton_FrameColor_Normal;                        // 0x05DC(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                KeybindingButton_FillColor_Normal;                         // 0x05EC(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_HLE1[0x4];                                     // 0x05FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UFont*                                       KeybindingButton_Font_Hovered;                             // 0x0600(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   KeybindingButton_FontFaceHovered;                          // 0x0608(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                KeybindingButton_FontSizeHovered;                          // 0x0610(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                KeybindingButton_TextColorHovered;                         // 0x0614(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                KeybindingButton_FrameColorHovered;                        // 0x0624(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                KeybindingButton_FillColorHovered;                         // 0x0634(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Key_L_Enabled;                                             // 0x0644(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Key_L_AllowGamepadKeys;                                    // 0x0645(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Key_R_Enabled;                                             // 0x0646(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Key_R_AllowGamepadKeys;                                    // 0x0647(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FScriptMulticastDelegate                    On_Selected_Key_Left;                                      // 0x0648(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    On_Selected_Key_Right;                                     // 0x0658(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               Key_L_AllowModifierKeys;                                   // 0x0668(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Key_R_AllowModifierKeys;                                   // 0x0669(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_3Z9B[0x6];                                     // 0x066A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FKey>                                Key_L_EscapeKeys;                                          // 0x0670(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FKey>                                Key_R_EscapeKeys;                                          // 0x0680(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FScriptMulticastDelegate                    On_Key_Emptied_Left;                                       // 0x0690(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    On_Key_Emptied_Right;                                      // 0x06A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                              KeyRebindingButtonWidth;                                   // 0x06B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_TWL8[0x4];                                     // 0x06B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       Slider_OptionText;                                         // 0x06B8(0x0018) (Edit, BlueprintVisible)
	TEnumAsByte<EOptionsTextJustification_EOptionsTextJustification> Slider_OptionTextJustification;                            // 0x06D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_GC1W[0x3];                                     // 0x06D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Slider_ButtonTextRoom;                                     // 0x06D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Slider_OptionRoom;                                         // 0x06D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_28KJ[0x4];                                     // 0x06DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UFont*                                       Slider_OptionFont_Normal;                                  // 0x06E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   Slider_OptionFontFace_Normal;                              // 0x06E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Slider_OptionFontSize_Normal;                              // 0x06F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Slider_TextColor_Normal;                                   // 0x06F4(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Slider_FrameColor_Normal;                                  // 0x0704(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Slider_FillColor_Normal;                                   // 0x0714(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_5UGM[0x4];                                     // 0x0724(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UFont*                                       Slider_OptionFont_Hovered;                                 // 0x0728(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   Slider_OptionFontFace_Hovered;                             // 0x0730(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Slider_OptionFontSize_Hovered;                             // 0x0738(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Slider_TextColor_Hovered;                                  // 0x073C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Slider_FrameColor_Hovered;                                 // 0x074C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Slider_FillColor_Hovered;                                  // 0x075C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Slider_Value;                                              // 0x076C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Slider_ClampValue_Min;                                     // 0x0770(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Slider_ClampValue_Max;                                     // 0x0774(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFont*                                       SliderValue_Font_Normal;                                   // 0x0778(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   SliderValue_FontFace_Normal;                               // 0x0780(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                SliderValue_FontSize_Normal;                               // 0x0788(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                SliderValue_FontColor_Normal;                              // 0x078C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_4NXR[0x4];                                     // 0x079C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UFont*                                       SliderValue_Font_Hovered;                                  // 0x07A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   SliderValue_FontFace_Hovered;                              // 0x07A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                SliderValue_FontSize_Hovered;                              // 0x07B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                SliderValue_FontColor_Hovered;                             // 0x07B4(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_3XDB[0x4];                                     // 0x07C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ValueLabel;                                                // 0x07C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnSliderChanged;                                           // 0x07D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_Button03_Options.WB_Button03_Options_C");
		return ptr;
	}



	float Slider_ConvertToNormal(float Value);
	void B03_GetSliderValueNormalized(float* ValueNormalized);
	float Slider_ConvertFromNormal(float Value);
	void B03_GetSliderValue(float* Value);
	void SetSlider_OptionFont_Hovered();
	void SetSliderValue_FontInfo(class UFont* MultiState_Font_Normal, class UFontFace* MultiState_FontFace_Normal, int MultiState_FontSize_Normal, const struct FLinearColor& MultiState_FontColor_Normal, class UFont* MultiState_Font_Hovered, class UFontFace* MultiState_FontFace_Hovered, int MultiState_FontSize_Hovered, const struct FLinearColor& MultiState_FontColor_Hovered);
	void SetSliderOptionText(const struct FText& InText);
	void SetSliderJustification(TEnumAsByte<EOptionsTextJustification_EOptionsTextJustification> EOptionsText);
	void SetSlider_OptionFont_Normal();
	void B03_GetKeyEscapeKeys(TEnumAsByte<ESelectedKey_ESelectedKey> Key, TArray<struct FKey>* EscapeKeys);
	void B03_GetAllowModifierKeys(TEnumAsByte<ESelectedKey_ESelectedKey> Key, bool* bAllowModifierKeys);
	void B03_GetAllowGamepadKeys(TEnumAsByte<ESelectedKey_ESelectedKey> Key, bool* bAllowGamepadKeys);
	void B03_GetKeySelectionText(TEnumAsByte<ESelectedKey_ESelectedKey> Key, struct FText* KeySelectionText);
	void B03_GetSelectedKey(TEnumAsByte<ESelectedKey_ESelectedKey> Key, struct FInputChord* SelectedKey);
	void B03_GetKeyEnabled(TEnumAsByte<ESelectedKey_ESelectedKey> Key, bool* bEnabled);
	void B03_GetStateByName(struct FName* State);
	void B03_GetStateByIndex(int* State);
	void GetUserFocus(class APlayerController* Player, bool* HasFocus);
	void GetButtonFontInfo_Hovered(class UFont** Font, class UFontFace** Typeface, int* FontSize, struct FLinearColor* Color);
	void GetButtonFontInfo_Normal(class UFont** Font, class UFontFace** Typeface, int* FontSize, struct FLinearColor* Color);
	void GetButtonText(struct FText* ButtonText);
	void GetButtonEnabled(bool* BIsEnabled);
	void RemoveContentWidget();
	void CreateContentWidget(class UClass* Widget);
	bool IsContentWidgetValid();
	void SetKeyRebindingJustification(TEnumAsByte<EOptionsTextJustification_EOptionsTextJustification> EOptionsText);
	void SetIsSelectingText(const struct FText& InKeySelectionText);
	void HandleIsEnabled(bool IsEnabled);
	class UWB_KeyRebindingKey_C* FindKey(TEnumAsByte<ESelectedKey_ESelectedKey> ESelectedKey);
	void SetNoKeySpecifiedText(const struct FText& InText);
	void SetKeybindingKeysButtonInfo_Hovered();
	void SetKeybindingKeysButtonInfo_Normal();
	void SetKeybindingText(const struct FText& InText);
	void SetKeyRebinding_OptionFont_Hovered();
	void SetKeyRebinding_OptionFont_Normal();
	void SetMultiState_OptionFont_Normal();
	void SetMultiState_OptionFont_Hovered();
	void SetStateButtonInfo(const struct FLinearColor& ButtonIconColor_Normal, const struct FLinearColor& ButtonIconColor_Hovered, const struct FLinearColor& ButtonIconColor_Clicked, class UObject* ButtonIcon);
	void SetMultiState_FontInfo(class UFont* MultiState_Font_Normal, class UFontFace* MultiState_FontFace_Normal, int MultiState_FontSize_Normal, const struct FLinearColor& MultiState_FontColor_Normal, class UFont* MultiState_Font_Hovered, class UFontFace* MultiState_FontFace_Hovered, int MultiState_FontSize_Hovered, const struct FLinearColor& MultiState_FontColor_Hovered);
	void SetMultiStateJustification(TEnumAsByte<EOptionsTextJustification_EOptionsTextJustification> EOptionsText);
	void SetMultiStateText(const struct FText& InText);
	void UnhoverAllOptionsButton();
	void SetupSizes(const struct FVector2D& Size);
	void B03_SetStateByName(const struct FName& State);
	void B03_SetStateByIndex(int State);
	void SetButtonText(const struct FText& ButtonText);
	void SetButtonFontInfo_Current(class UFont* Font, class UFontFace* Typeface, int FontSize, const struct FLinearColor& Color);
	void SetButtonEnabled(bool BIsEnabled);
	void SetButtonFontInfo_Normal(class UFont* Font, class UFontFace* Typeface, int FontSize, const struct FLinearColor& Color);
	void SetButtonFontInfo_Hovered(class UFont* Font, class UFontFace* Typeface, int FontSize, const struct FLinearColor& Color);
	void SetUser_Focus(class APlayerController* Player);
	void SetButtonSound_OnClicked(class USoundBase* ClickedSound);
	void SetButtonSound_OnHovered(class USoundBase* HoveredSound);
	void B03_SetStateButtonIcon(class UObject* Icon);
	void B03_SetStateButtonIconColor_Clicked(const struct FLinearColor& Color);
	void B03_SetStateButtonIconColor_Normal(const struct FLinearColor& Color);
	void B03_SetStateButtonIconColor_Hovered(const struct FLinearColor& Color);
	void B03_SetSelectedKey(TEnumAsByte<ESelectedKey_ESelectedKey> Key, const struct FInputChord& SelectedKey);
	void B03_SetKeyEnabled(TEnumAsByte<ESelectedKey_ESelectedKey> Key, bool bEnabled);
	void B03_SetKeySelectionText(TEnumAsByte<ESelectedKey_ESelectedKey> Key, const struct FText& KeySelectionText);
	void B03_SetAllowGamepadKeys(TEnumAsByte<ESelectedKey_ESelectedKey> Key, bool bAllowGamepadKeys);
	void B03_SetAllowModifierKeys(TEnumAsByte<ESelectedKey_ESelectedKey> Key, bool bAllowModifierKeys);
	void B03_SetKeyEscapeKeys(TEnumAsByte<ESelectedKey_ESelectedKey> Key, TArray<struct FKey> EscapeKeys);
	void B03_RemoveContentWidget();
	void B03_CreateContentWidget(class UClass* ContentWidget);
	void B03_SetSliderValue(float Value);
	void B03_SetSliderValueNormalized(float ValueNormalized);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void BndEvt__WB_Button03_MultiStates_K2Node_ComponentBoundEvent_0_OnStateChanged__DelegateSignature(const struct FName& State_Name, int State_Index);
	void UnhoverMultiStateButton();
	void BndEvt__WB_Button03_MultiStates_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature();
	void Construct_MultiStateOption();
	void PreConstruct_MultiStateOption();
	void BndEvt__Button_Multistate_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Multistate_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void MultiState_CheckUserFocus();
	void ResetHovered();
	void BndEvt__KeybindingKey2_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature();
	void BndEvt__KeybindingKey1_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature();
	void BndEvt__KeybindingKey2_K2Node_ComponentBoundEvent_93_OnKeyEmptied__DelegateSignature(const struct FInputChord& LastSelectedKey);
	void BndEvt__KeybindingKey1_K2Node_ComponentBoundEvent_88_OnKeyEmptied__DelegateSignature(const struct FInputChord& LastSelectedKey);
	void BndEvt__KeybindingKey2_K2Node_ComponentBoundEvent_42_OnKeySelected__DelegateSignature(TEnumAsByte<EMappingType_EMappingType> MappingType, const struct FInputChord& SelectedKey);
	void BndEvt__KeybindingKey1_K2Node_ComponentBoundEvent_23_OnKeySelected__DelegateSignature(TEnumAsByte<EMappingType_EMappingType> MappingType, const struct FInputChord& SelectedKey);
	void UnhoverKeyRebindingButton();
	void BndEvt__Button_KeyRebinding_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_KeyRebinding_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void Construct_KeyRebindingOption();
	void PreConstruct_KeyRebindingOption();
	void BndEvt__WB_ProgressSlider_K2Node_ComponentBoundEvent_48_OnUnhovered__DelegateSignature();
	void BndEvt__WB_ProgressSlider_K2Node_ComponentBoundEvent_609_OnProgressChanged__DelegateSignature(float Value);
	void BndEvt__WB_ProgressSlider_K2Node_ComponentBoundEvent_602_OnHovered__DelegateSignature();
	void BndEvt__Button_Slider_K2Node_ComponentBoundEvent_123_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Slider_K2Node_ComponentBoundEvent_120_OnButtonHoverEvent__DelegateSignature();
	void UnhoverSliderButton();
	void Construct_SliderOption();
	void PreConstruct_SliderOption();
	void Slider_CheckUserFocus();
	void ExecuteUbergraph_WB_Button03_Options(int EntryPoint);
	void OnSliderChanged__DelegateSignature(float ValueNormalized, float Value);
	void On_Key_Emptied_Right__DelegateSignature(const struct FInputChord& Last_Selected_Key);
	void On_Key_Emptied_Left__DelegateSignature(const struct FInputChord& Last_Selected_Key);
	void On_Selected_Key_Right__DelegateSignature(class UWB_Button03_Options_C* Button, const struct FInputChord& SelectedKey);
	void On_Selected_Key_Left__DelegateSignature(class UWB_Button03_Options_C* Button, const struct FInputChord& SelectedKey);
	void OnStateChanged__DelegateSignature(const struct FName& StateName, int StateIndex);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
