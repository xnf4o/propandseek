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

// WidgetBlueprintGeneratedClass WB_Button03_ComboEdition.WB_Button03_ComboEdition_C
// 0x05D7 (FullSize[0x0810] - InheritedSize[0x0239])
class UWB_Button03_ComboEdition_C : public UWB_Button_Base_C
{
public:
	unsigned char                                      UnknownData_724P[0x7];                                     // 0x0239(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
	class UComboBoxString*                             ComboBox;                                                  // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_KeyRebindingKey_C*                       KeybindingKey1;                                            // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_KeyRebindingKey_C*                       KeybindingKey2;                                            // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Button03_Frame_C*                        KeyRebinding_Frame;                                        // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  KeyRebinding_Text;                                         // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Button03_Frame_C*                        MultiState_Frame;                                          // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  MultiState_TextBlock;                                      // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    OV_ContentWidget;                                          // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                                    SB_Content;                                                // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                                    SB_ContentWidget;                                          // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                                    SB_KeyRebinding_Text;                                      // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                                    SB_MultiState_Option;                                      // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                                    SB_MultiState_Text;                                        // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                                    SB_ProgressSlider;                                         // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                                    SB_Slider_Text;                                            // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  Slider_Text;                                               // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Button03_Frame_C*                        SliderFrame;                                               // 0x0310(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Button03_MultiStates_C*                  WB_Button03_MultiStates;                                   // 0x0318(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_ProgressSlider_C*                        WB_ProgressSlider;                                         // 0x0320(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             WS_Content;                                                // 0x0328(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FVector2D                                   ButtonSize;                                                // 0x0330(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<EOptionsType_EOptionsType>             OptionType;                                                // 0x0338(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_CLCB[0x7];                                     // 0x0339(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UFont*                                       MultiState_OptionFont_Normal;                              // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   MultiState_OptionFontFace_Normal;                          // 0x0348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MultiState_OptionFontSize_Normal;                          // 0x0350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                MultiState_TextColor_Normal;                               // 0x0354(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                MultiState_FrameColor_Normal;                              // 0x0364(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                MultiState_FillColor_Normal;                               // 0x0374(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_4Y8X[0x4];                                     // 0x0384(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UFont*                                       MultiState_OptionFont_Hovered;                             // 0x0388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   MultiState_OptionFontFace_Hovered;                         // 0x0390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MultiState_OptionFontSize_Hovered;                         // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                MultiState_TextColor_Hovered;                              // 0x039C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                MultiState_FrameColor_Hovered;                             // 0x03AC(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                MultiState_FillColor_Hovered;                              // 0x03BC(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_V0YR[0x4];                                     // 0x03CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       MultiStateOptionText;                                      // 0x03D0(0x0018) (Edit, BlueprintVisible)
	TEnumAsByte<EOptionsTextJustification_EOptionsTextJustification> MultiState_TextJustification;                              // 0x03E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_R4CD[0x3];                                     // 0x03E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MultiState_TextRoom;                                       // 0x03EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FName>                               MultiState_States;                                         // 0x03F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              MultiState_OptionRoom;                                     // 0x0400(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsEnabled;                                                 // 0x0404(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_4IZW[0x3];                                     // 0x0405(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnStateChanged;                                            // 0x0408(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UFont*                                       MultiState_Font_Normal;                                    // 0x0418(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   MultiState_FontFace_Normal;                                // 0x0420(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MultiState_FontSize_Normal;                                // 0x0428(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                MultiState_FontColor_Normal;                               // 0x042C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_0541[0x4];                                     // 0x043C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UFont*                                       MultiState_Font_Hovered;                                   // 0x0440(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   MultiState_FontFace_Hovered;                               // 0x0448(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MultiState_FontSize_Hovered;                               // 0x0450(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                MultiState_FontColor_Hovered;                              // 0x0454(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bUseGamepadFocus;                                          // 0x0464(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_3UWZ[0x3];                                     // 0x0465(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      ContentWidget;                                             // 0x0468(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bUseNavStateOverview;                                      // 0x0470(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_45ZM[0x3];                                     // 0x0471(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              NavStateOverview_Room;                                     // 0x0474(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                NavStateOverviewColor_Normal;                              // 0x0478(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                NavStateOverviewColor_Hovered;                             // 0x0488(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     MultiState_ButtonIcon;                                     // 0x0498(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                MultiState_ButtonColorNormal;                              // 0x04A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                MultiState_ButtonColorHovered;                             // 0x04B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                MultiState_ButtonColorClicked;                             // 0x04C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  ButtonSound_Hovered;                                       // 0x04D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  ButtonSound_Clicked;                                       // 0x04D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFont*                                       KeyRebinding_OptionFont_Normal;                            // 0x04E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   KeyRebinding_OptionFontFace_Normal;                        // 0x04E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                KeyRebinding_OptionFontSize_Normal;                        // 0x04F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                KeyRebinding_TextColor_Normal;                             // 0x04F4(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                KeyRebinding_FrameColor_Normal;                            // 0x0504(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                KeyRebinding_FillColor_Normal;                             // 0x0514(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_9AP1[0x4];                                     // 0x0524(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UFont*                                       KeyRebinding_OptionFont_Hovered;                           // 0x0528(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   KeyRebinding_OptionFontFace_Hovered;                       // 0x0530(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                KeyRebinding_OptionFontSize_Hovered;                       // 0x0538(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                KeyRebinding_TextColor_Hovered;                            // 0x053C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                KeyRebinding_FrameColor_Hovered;                           // 0x054C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                KeyRebinding_FillColor_Hovered;                            // 0x055C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_35TU[0x4];                                     // 0x056C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       KeymappingName;                                            // 0x0570(0x0018) (Edit, BlueprintVisible)
	struct FText                                       NoKeySpecifiedText;                                        // 0x0588(0x0018) (Edit, BlueprintVisible)
	struct FText                                       KeySelectionText;                                          // 0x05A0(0x0018) (Edit, BlueprintVisible)
	TEnumAsByte<EOptionsTextJustification_EOptionsTextJustification> KeyRebinding_TextJustification;                            // 0x05B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_62UZ[0x3];                                     // 0x05B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Keybinding_TextRoom;                                       // 0x05BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFont*                                       KeybindingButton_Font_Normal;                              // 0x05C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   KeybindingButton_FontFace_Normal;                          // 0x05C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                KeybindingButton_FontSize_Normal;                          // 0x05D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                KeybindingButton_TextColor_Normal;                         // 0x05D4(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                KeybindingButton_FrameColor_Normal;                        // 0x05E4(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                KeybindingButton_FillColor_Normal;                         // 0x05F4(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_CHZH[0x4];                                     // 0x0604(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UFont*                                       KeybindingButton_Font_Hovered;                             // 0x0608(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   KeybindingButton_FontFaceHovered;                          // 0x0610(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                KeybindingButton_FontSizeHovered;                          // 0x0618(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                KeybindingButton_TextColorHovered;                         // 0x061C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                KeybindingButton_FrameColorHovered;                        // 0x062C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                KeybindingButton_FillColorHovered;                         // 0x063C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Key_L_Enabled;                                             // 0x064C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Key_L_AllowGamepadKeys;                                    // 0x064D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Key_R_Enabled;                                             // 0x064E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Key_R_AllowGamepadKeys;                                    // 0x064F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FScriptMulticastDelegate                    On_Selected_Key_Left;                                      // 0x0650(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    On_Selected_Key_Right;                                     // 0x0660(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               Key_L_AllowModifierKeys;                                   // 0x0670(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Key_R_AllowModifierKeys;                                   // 0x0671(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_QLHK[0x6];                                     // 0x0672(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FKey>                                Key_L_EscapeKeys;                                          // 0x0678(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FKey>                                Key_R_EscapeKeys;                                          // 0x0688(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FScriptMulticastDelegate                    On_Key_Emptied_Left;                                       // 0x0698(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    On_Key_Emptied_Right;                                      // 0x06A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                              KeyRebindingButtonWidth;                                   // 0x06B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_BJ30[0x4];                                     // 0x06BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       Slider_OptionText;                                         // 0x06C0(0x0018) (Edit, BlueprintVisible)
	TEnumAsByte<EOptionsTextJustification_EOptionsTextJustification> Slider_OptionTextJustification;                            // 0x06D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_BLSI[0x3];                                     // 0x06D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Slider_ButtonTextRoom;                                     // 0x06DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Slider_OptionRoom;                                         // 0x06E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_BIYK[0x4];                                     // 0x06E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UFont*                                       Slider_OptionFont_Normal;                                  // 0x06E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   Slider_OptionFontFace_Normal;                              // 0x06F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Slider_OptionFontSize_Normal;                              // 0x06F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Slider_TextColor_Normal;                                   // 0x06FC(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Slider_FrameColor_Normal;                                  // 0x070C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Slider_FillColor_Normal;                                   // 0x071C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_4IXZ[0x4];                                     // 0x072C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UFont*                                       Slider_OptionFont_Hovered;                                 // 0x0730(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   Slider_OptionFontFace_Hovered;                             // 0x0738(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Slider_OptionFontSize_Hovered;                             // 0x0740(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Slider_TextColor_Hovered;                                  // 0x0744(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Slider_FrameColor_Hovered;                                 // 0x0754(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Slider_FillColor_Hovered;                                  // 0x0764(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Slider_Value;                                              // 0x0774(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Slider_ClampValue_Min;                                     // 0x0778(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Slider_ClampValue_Max;                                     // 0x077C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFont*                                       SliderValue_Font_Normal;                                   // 0x0780(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   SliderValue_FontFace_Normal;                               // 0x0788(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                SliderValue_FontSize_Normal;                               // 0x0790(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                SliderValue_FontColor_Normal;                              // 0x0794(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_PD88[0x4];                                     // 0x07A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UFont*                                       SliderValue_Font_Hovered;                                  // 0x07A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   SliderValue_FontFace_Hovered;                              // 0x07B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                SliderValue_FontSize_Hovered;                              // 0x07B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                SliderValue_FontColor_Hovered;                             // 0x07BC(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_BC2B[0x4];                                     // 0x07CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ValueLabel;                                                // 0x07D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnSliderChanged;                                           // 0x07E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FString                                     DefaultOption;                                             // 0x07F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnSelectionChanged__ComboBox_;                             // 0x0800(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_Button03_ComboEdition.WB_Button03_ComboEdition_C");
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
	void BndEvt__ComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<SlateCore_ESelectInfo> SelectionType);
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
	void ExecuteUbergraph_WB_Button03_ComboEdition(int EntryPoint);
	void OnSelectionChanged__ComboBox___DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<SlateCore_ESelectInfo> SelectionType);
	void OnSliderChanged__DelegateSignature(float ValueNormalized, float Value);
	void On_Key_Emptied_Right__DelegateSignature(const struct FInputChord& Last_Selected_Key);
	void On_Key_Emptied_Left__DelegateSignature(const struct FInputChord& Last_Selected_Key);
	void On_Selected_Key_Right__DelegateSignature(class UWB_Button03_ComboEdition_C* Button, const struct FInputChord& SelectedKey);
	void On_Selected_Key_Left__DelegateSignature(class UWB_Button03_ComboEdition_C* Button, const struct FInputChord& SelectedKey);
	void OnStateChanged__DelegateSignature(const struct FName& StateName, int StateIndex);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
