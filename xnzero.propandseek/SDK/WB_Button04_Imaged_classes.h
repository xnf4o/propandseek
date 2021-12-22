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

// WidgetBlueprintGeneratedClass WB_Button04_Imaged.WB_Button04_Imaged_C
// 0x048F (FullSize[0x06C8] - InheritedSize[0x0239])
class UWB_Button04_Imaged_C : public UWB_Button_Base_C
{
public:
	unsigned char                                      UnknownData_JZ8Z[0x7];                                     // 0x0239(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0240(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                     b_ContentWidget;                                           // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    OV_Base;                                                   // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    OV_ContentWidget;                                          // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    OV_HintIcon_Content;                                       // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                                    SB_ContentWidget;                                          // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                                    SB_Frame;                                                  // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                                    SB_HintIcon;                                               // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                                    SB_HintIconContent;                                        // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                                    SB_Image;                                                  // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                                    SB_NativeButton;                                           // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                                    SB_Text;                                                   // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Button04_Frame_C*                        WB_Button04_Frame;                                         // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Button04_Image_C*                        WB_Button04_Image;                                         // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Button04_Text_C*                         WB_Button04_Text;                                          // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_NativeButton_C*                          WB_NativeButton;                                           // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnClicked;                                                 // 0x02C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnHovered;                                                 // 0x02D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnUnhovered;                                               // 0x02E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnPressed;                                                 // 0x02F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnReleased;                                                // 0x0300(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UFont*                                       HeadlineFont_Normal;                                       // 0x0310(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   HeadlineTypeFace_Normal;                                   // 0x0318(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                HeadlineFontSize_Normal;                                   // 0x0320(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_TCW3[0x4];                                     // 0x0324(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UFont*                                       HeadlineFont_Hovered;                                      // 0x0328(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   HeadlineTypeFace_Hovered;                                  // 0x0330(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                HeadlineFontSize_Hovered;                                  // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_3YGI[0x4];                                     // 0x033C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UFont*                                       HeadlineFont_Clicked;                                      // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   HeadlineTypeFace_Clicked;                                  // 0x0348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                HeadlineFontSize_Clicked;                                  // 0x0350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Duration_Clicked;                                          // 0x0354(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       ButtonText;                                                // 0x0358(0x0018) (Edit, BlueprintVisible)
	struct FText                                       ButtonDescription;                                         // 0x0370(0x0018) (Edit, BlueprintVisible)
	struct FLinearColor                                HeadlineFontColor_Clicked;                                 // 0x0388(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                HeadlineFontColor_Normal;                                  // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                HeadlineFontColor_Hovered;                                 // 0x03A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsEnabled;                                                 // 0x03B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_FSK0[0x3];                                     // 0x03B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   ButtonSize;                                                // 0x03BC(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<EJustification_EJustification>         ButtonJustification;                                       // 0x03C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bUseGamepadFocus;                                          // 0x03C5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<EInputType_EInputType>                 InputType;                                                 // 0x03C6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bAuto_detectInput;                                         // 0x03C7(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UClass*                                      HintIcon;                                                  // 0x03C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFont*                                       HeadlineFont_Disabled;                                     // 0x03D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   HeadlineTypeFace_Disabled;                                 // 0x03D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                HeadlineFontSize_Disabled;                                 // 0x03E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                HeadlineFontColor_Disabled;                                // 0x03E4(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_858V[0x4];                                     // 0x03F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnDisabled;                                                // 0x03F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FTimerHandle                                Timer_TextSizeCheck;                                       // 0x0408(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      ContentWidget;                                             // 0x0410(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  OnClicked_Sound;                                           // 0x0418(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  OnHovered_Sound;                                           // 0x0420(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsDesignTime;                                              // 0x0428(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_T5BK[0x3];                                     // 0x0429(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLinearColor                                FrameColor1_Normal;                                        // 0x042C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                FrameColor1_Hovered;                                       // 0x043C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                FrameColor1_Clicked;                                       // 0x044C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                FrameColor1_Disabled;                                      // 0x045C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                FrameColor2_Normal;                                        // 0x046C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                FrameShineColor_Normal;                                    // 0x047C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                FrameColor2_Hovered;                                       // 0x048C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                FrameShineColor_Hovered;                                   // 0x049C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                FrameColor2_Clicked;                                       // 0x04AC(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                FrameShineColor_Clicked;                                   // 0x04BC(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                FrameColor2_Disabled;                                      // 0x04CC(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                FrameShineColor_Disabled;                                  // 0x04DC(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<EShineFXMethod_EShineFXMethod>         ShineFX_Method;                                            // 0x04EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_PUPA[0x3];                                     // 0x04ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FrameThickness;                                            // 0x04F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                ShineFX_BG_Color_Normal;                                   // 0x04F4(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                ShineFX_ShineColor_Small_Normal;                           // 0x0504(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                ShineFX_ShineColor_Big_Normal;                             // 0x0514(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                ShineFX_BG_Color_Hovered;                                  // 0x0524(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                ShineFX_ShineColor_Small_Hovered;                          // 0x0534(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                ShineFX_ShineColor_Big_Hovered;                            // 0x0544(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                ShineFX_BG_Color_Clicked;                                  // 0x0554(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                ShineFX_ShineColor_Small_Clicked;                          // 0x0564(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                ShineFX_ShineColor_Big_Clicked;                            // 0x0574(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_ENVL[0x4];                                     // 0x0584(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UObject*                                     Image;                                                     // 0x0588(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   ImageTranslation;                                          // 0x0590(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                ImageColor_Normal;                                         // 0x0598(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                ImageColor_Hovered;                                        // 0x05A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                ImageColor_Clicked;                                        // 0x05B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                ImageColor_Disabled;                                       // 0x05C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ImageSaturation_Normal;                                    // 0x05D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ImageSaturation_Hovered;                                   // 0x05DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ImageSaturation_Clicked;                                   // 0x05E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ImageSaturation_Disabled;                                  // 0x05E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                VignetteColor;                                             // 0x05E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFont*                                       DescriptionFont_Normal;                                    // 0x05F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   DescriptionTypeFace_Normal;                                // 0x0600(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                DescriptionFontSize_Normal;                                // 0x0608(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                DescriptionFontColor_Normal;                               // 0x060C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_UGO2[0x4];                                     // 0x061C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UFont*                                       DescriptionFont_Hovered;                                   // 0x0620(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFont*                                       DescriptionFont_Clicked;                                   // 0x0628(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFont*                                       DescriptionFont_Disabled;                                  // 0x0630(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   DescriptionTypeFace_Hovered;                               // 0x0638(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   DescriptionTypeFace_Clicked;                               // 0x0640(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   DescriptionTypeFace_Disabled;                              // 0x0648(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                DescriptionFontSize_Hovered;                               // 0x0650(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                DescriptionFontSize_Clicked;                               // 0x0654(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                DescriptionFontSize_Disabled;                              // 0x0658(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                DescriptionFontColor_Hovered;                              // 0x065C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                DescriptionFontColor_Clicked;                              // 0x066C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                DescriptionFontColor_Disabled;                             // 0x067C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Scale_Hovered;                                             // 0x068C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Scale_Clicked;                                             // 0x0690(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   NewScaleValue;                                             // 0x0694(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_O9OA[0x4];                                     // 0x069C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnFocused;                                                 // 0x06A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnUnfocused;                                               // 0x06B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UUserWidget*                                 CreatedContentObject;                                      // 0x06C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_Button04_Imaged.WB_Button04_Imaged_C");
		return ptr;
	}



	void B04_GetScale_Clicked(float* Scale);
	void B04_GetScale_Hovered(float* Scale);
	void B04_GetImage(class UObject** Image_Brush, struct FVector2D* Image_Translation);
	void AddHintIcon(class UClass* HintIcon);
	void GetCurrentScale(struct FVector2D* Scale);
	void UpdateImageSaturation();
	void UpdateImageColors();
	void RemoveContentWidget();
	void CreateContentWidget(class UClass* ContentWidget);
	bool IsContentWidgetValid();
	void Set_AllFrameColours();
	void Set_FrameColor(const struct FLinearColor& FrameColor);
	void GetButtonJustification(TEnumAsByte<EJustification_EJustification>* EJustification);
	void GetUserFocus(class APlayerController* Player, bool* HasFocus);
	void GetButtonFontInfo_Disabled(class UFont** Font, class UFontFace** Typeface, int* FontSize, struct FLinearColor* Color);
	void GetButtonFontInfo_Clicked(class UFont** Font, class UFontFace** Typeface, int* Integer, struct FLinearColor* Color);
	void GetButtonFontInfo_Hovered(class UFont** Font, class UFontFace** Typeface, int* FontSize, struct FLinearColor* Color);
	void GetButtonFontInfo_Normal(class UFont** Font, class UFontFace** Typeface, int* FontSize, struct FLinearColor* Color);
	void GetButtonText(struct FText* ButtonText);
	void GetButtonEnabled(bool* BIsEnabled);
	void UpdateIsEnabled(bool BIsEnabled);
	void SetFontInfo_OnDisabled();
	void SetButtonSizeScale(const struct FVector2D& Size);
	void SetResponsiveHoveringToNativeButton();
	void UnhoverAllNativeButtons();
	void SetButtonSounds(class USoundBase* OnClicked_Sound, class USoundBase* OnHovered_Sound);
	void UpdateBaseButtonJustification(TEnumAsByte<EJustification_EJustification> Index);
	void UpdateButtonJustification(TEnumAsByte<EJustification_EJustification> EJustification);
	void GetButton(class UButton** Base_Button);
	void SetFontInfo_OnClicked();
	void SetFontInfo_OnNormal();
	void SetFontInfo_OnHovered();
	void SetButtonFontInfo_Current(class UFont* Font, class UFontFace* Typeface, int FontSize, const struct FLinearColor& Color);
	void SetButtonEnabled(bool BIsEnabled);
	void SetButtonFontInfo_Normal(class UFont* Font, class UFontFace* Typeface, int FontSize, const struct FLinearColor& Color);
	void SetButtonFontInfo_Hovered(class UFont* Font, class UFontFace* Typeface, int FontSize, const struct FLinearColor& Color);
	void SetButtonFontInfo_Clicked(class UFont* Font, class UFontFace* Typeface, int FontSize, const struct FLinearColor& Color);
	void SetButtonFontInfo_Disabled(class UFont* Font, class UFontFace* Typeface, int FontSize, const struct FLinearColor& Color);
	void SetButtonText(const struct FText& ButtonText);
	void SetUser_Focus(class APlayerController* Player);
	void SetHintIcon(class UClass* HintIcon);
	void SetButtonSound_OnClicked(class USoundBase* ClickedSound);
	void SetButtonSound_OnHovered(class USoundBase* HoveredSound);
	void SetButtonJustification(TEnumAsByte<EJustification_EJustification> EJustification);
	void B04_SetFrameColor_Normal(const struct FLinearColor& FrameColor1, const struct FLinearColor& FrameColor2, const struct FLinearColor& FrameColor_Shine, const struct FLinearColor& ShineFxColor_Background, const struct FLinearColor& ShineFxColor_Small, const struct FLinearColor& ShineFxColor_Big);
	void B04_SetFrameColor_Hovered(const struct FLinearColor& FrameColor1, const struct FLinearColor& FrameColor2, const struct FLinearColor& FrameColor_Shine, const struct FLinearColor& ShineFxColor_Background, const struct FLinearColor& ShineFxColor_Small, const struct FLinearColor& ShineFxColor_Big);
	void B04_SetFrameColor_Clicked(const struct FLinearColor& FrameColor1, const struct FLinearColor& FrameColor2, const struct FLinearColor& FrameColor_Shine, const struct FLinearColor& ShineFxColor_Background, const struct FLinearColor& ShineFxColor_Small, const struct FLinearColor& ShineFxColor_Big);
	void B04_SetFrameColor_Disabled(const struct FLinearColor& FrameColor1, const struct FLinearColor& FrameColor2, const struct FLinearColor& FrameColor_Shine);
	void B04_SetFrameColor_Current(const struct FLinearColor& FrameColor1, const struct FLinearColor& FrameColor2, const struct FLinearColor& FrameColor_Shine, const struct FLinearColor& ShineFxColor_Background, const struct FLinearColor& ShineFxColor_Small, const struct FLinearColor& ShineFxColor_Big);
	void B04_CreateContentWidget(class UClass* ContentWidget);
	void B04_RemoveContentWidget();
	void B04_SetShineFxEnabled(bool BIsEnabled);
	void B04_SetImage(class UObject* ImageBrush, const struct FVector2D& ImageTranslation);
	void B04_SetImageColor_Normal(const struct FLinearColor& ImageColor_Normal, float Saturation_Normal);
	void B04_SetImageColor_Hovered(const struct FLinearColor& ImageColor_Hovered, float Saturation_Hovered);
	void B04_SetImageColor_Clicked(const struct FLinearColor& ImageColor_Clicked, float Saturation_Clicked);
	void B04_SetImageColor_Disabled(const struct FLinearColor& ImageColor_Disabled, float Saturation_Disabled);
	void B04_SetVignetteColor(const struct FLinearColor& VignetteColor);
	void B04_SetScale(float Scale);
	void BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature();
	void BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature();
	void BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_7_OnUnhovered__DelegateSignature();
	void BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_8_OnPressed__DelegateSignature();
	void BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_9_OnReleased__DelegateSignature();
	void Construct();
	void CheckHasFocus();
	void OnInputSwitched(TEnumAsByte<EInputType_EInputType> InputType);
	void BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_0_OnDisabled__DelegateSignature();
	void CheckScale();
	void BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_143_OnUnfocused__DelegateSignature();
	void BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_142_OnFocused__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_WB_Button04_Imaged(int EntryPoint);
	void OnUnfocused__DelegateSignature();
	void OnFocused__DelegateSignature();
	void OnDisabled__DelegateSignature();
	void OnReleased__DelegateSignature();
	void OnPressed__DelegateSignature();
	void OnUnhovered__DelegateSignature();
	void OnHovered__DelegateSignature();
	void OnClicked__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
