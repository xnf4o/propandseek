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
// Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WB_Button_Base.WB_Button_Base_C
// 0x0009 (FullSize[0x0239] - InheritedSize[0x0230])
class UWB_Button_Base_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               bResponsiveHovering;                                       // 0x0238(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_Button_Base.WB_Button_Base_C");
		return ptr;
	}



	void B03_GetSliderValueNormalized(float* ValueNormalized);
	void B03_GetSliderValue(float* Value);
	void B03_GetKeyEscapeKeys(TEnumAsByte<ESelectedKey_ESelectedKey> Key, TArray<struct FKey>* EscapeKeys);
	void B03_GetAllowModifierKeys(TEnumAsByte<ESelectedKey_ESelectedKey> Key, bool* bAllowModifierKeys);
	void B03_GetAllowGamepadKeys(TEnumAsByte<ESelectedKey_ESelectedKey> Key, bool* bAllowGamepadKeys);
	void B03_GetKeySelectionText(TEnumAsByte<ESelectedKey_ESelectedKey> Key, struct FText* KeySelectionText);
	void B03_GetSelectedKey(TEnumAsByte<ESelectedKey_ESelectedKey> Key, struct FInputChord* SelectedKey);
	void B03_GetKeyEnabled(TEnumAsByte<ESelectedKey_ESelectedKey> Key, bool* bEnabled);
	void B03_GetStateByIndex(int* State);
	void B03_GetStateByName(struct FName* State);
	void B04_GetScale_Clicked(float* Scale);
	void B04_GetScale_Hovered(float* Scale);
	void B04_GetImage(class UObject** Image_Brush, struct FVector2D* Image_Translation);
	void GetButtonJustification(TEnumAsByte<EJustification_EJustification>* EJustification);
	void GetUserFocus(class APlayerController* Player, bool* HasFocus);
	void GetButtonFontInfo_Clicked(class UFont** Font, class UFontFace** Typeface, int* Integer, struct FLinearColor* Color);
	void GetButtonFontInfo_Disabled(class UFont** Font, class UFontFace** Typeface, int* FontSize, struct FLinearColor* Color);
	void GetButtonFontInfo_Hovered(class UFont** Font, class UFontFace** Typeface, int* FontSize, struct FLinearColor* Color);
	void GetButtonFontInfo_Normal(class UFont** Font, class UFontFace** Typeface, int* FontSize, struct FLinearColor* Color);
	void GetButtonText(struct FText* ButtonText);
	void GetButtonEnabled(bool* BIsEnabled);
	void SetButtonText(const struct FText& ButtonText);
	void SetButtonFontInfo_Current(class UFont* Font, class UFontFace* Typeface, int FontSize, const struct FLinearColor& Color);
	void SetButtonEnabled(bool BIsEnabled);
	void SetButtonFontInfo_Normal(class UFont* Font, class UFontFace* Typeface, int FontSize, const struct FLinearColor& Color);
	void SetButtonFontInfo_Hovered(class UFont* Font, class UFontFace* Typeface, int FontSize, const struct FLinearColor& Color);
	void SetButtonFontInfo_Clicked(class UFont* Font, class UFontFace* Typeface, int FontSize, const struct FLinearColor& Color);
	void SetButtonFontInfo_Disabled(class UFont* Font, class UFontFace* Typeface, int FontSize, const struct FLinearColor& Color);
	void SetUser_Focus(class APlayerController* Player);
	void SetHintIcon(class UClass* HintIcon);
	void SetButtonSound_OnClicked(class USoundBase* ClickedSound);
	void SetButtonSound_OnHovered(class USoundBase* HoveredSound);
	void B01_SetColor_HoveredFX_01(const struct FLinearColor& Color_HoveredFX_01);
	void B01_SetColor_HoveredFX_02(const struct FLinearColor& Color_HoveredFX_02);
	void B01_SetColor_ClickedFX(const struct FLinearColor& Color_ClickedFX);
	void B01_SetColor_ClickedFX_Text(const struct FLinearColor& Color_ClickedFX_Text);
	void SetButtonJustification(TEnumAsByte<EJustification_EJustification> EJustification);
	void B02_SetFrameColor_Normal(const struct FLinearColor& FrameColor_Normal);
	void B02_SetFrameColor_Hovered(const struct FLinearColor& FrameColor_Hovered);
	void B02_SetFrameColor_Clicked(const struct FLinearColor& FrameColor_Clicked);
	void B02_SetFrameColor_Disabled(const struct FLinearColor& FrameColor_Disabled);
	void B02_SetFrameColor_Current(const struct FLinearColor& FrameColor_Current);
	void B02_SetFillColor_Normal(const struct FLinearColor& FillColor_Normal);
	void B02_SetFillColor_Hovered(const struct FLinearColor& FillColor_Hovered);
	void B02_SetFillColor_Clicked(const struct FLinearColor& FillColor_Clicked);
	void B02_SetFillColor_Disabled(const struct FLinearColor& FillColor_Disabled);
	void B02_SetFillColor_Current(const struct FLinearColor& FillColor_Current);
	void B02_SetUseDynamicShine(bool bUseDynamicShine);
	void B02_SetDynamicShineColor(const struct FLinearColor& InColor);
	void B02_SetBlurShineColor_Hovered(const struct FLinearColor& InColor);
	void B02_SetBlurShineColor_Clicked(const struct FLinearColor& InColor);
	void B02_Create_ContentWidget(class UClass* ContentWidget);
	void B02_RemoveContentWidget();
	void B03_SetStateByName(const struct FName& State);
	void B03_SetStateByIndex(int State);
	void B03_SetStateButtonIcon(class UObject* Icon);
	void B03_SetStateButtonIconColor_Normal(const struct FLinearColor& Color);
	void B03_SetStateButtonIconColor_Hovered(const struct FLinearColor& Color);
	void B03_SetStateButtonIconColor_Clicked(const struct FLinearColor& Color);
	void B03_SetSelectedKey(TEnumAsByte<ESelectedKey_ESelectedKey> Key, const struct FInputChord& SelectedKey);
	void B03_SetKeyEnabled(TEnumAsByte<ESelectedKey_ESelectedKey> Key, bool bEnabled);
	void B03_SetKeySelectionText(TEnumAsByte<ESelectedKey_ESelectedKey> Key, const struct FText& KeySelectionText);
	void B03_SetAllowGamepadKeys(TEnumAsByte<ESelectedKey_ESelectedKey> Key, bool bAllowGamepadKeys);
	void B03_SetAllowModifierKeys(TEnumAsByte<ESelectedKey_ESelectedKey> Key, bool bAllowModifierKeys);
	void B03_SetKeyEscapeKeys(TEnumAsByte<ESelectedKey_ESelectedKey> Key, TArray<struct FKey> EscapeKeys);
	void B03_CreateContentWidget(class UClass* ContentWidget);
	void B03_RemoveContentWidget();
	void B04_SetFrameColor_Normal(const struct FLinearColor& FrameColor1, const struct FLinearColor& FrameColor2, const struct FLinearColor& FrameColor_Shine, const struct FLinearColor& ShineFxColor_Background, const struct FLinearColor& ShineFxColor_Small, const struct FLinearColor& ShineFxColor_Big);
	void B04_SetFrameColor_Hovered(const struct FLinearColor& FrameColor1, const struct FLinearColor& FrameColor2, const struct FLinearColor& FrameColor_Shine, const struct FLinearColor& ShineFxColor_Background, const struct FLinearColor& ShineFxColor_Small, const struct FLinearColor& ShineFxColor_Big);
	void B04_SetFrameColor_Clicked(const struct FLinearColor& FrameColor1, const struct FLinearColor& FrameColor2, const struct FLinearColor& FrameColor_Shine, const struct FLinearColor& ShineFxColor_Background, const struct FLinearColor& ShineFxColor_Small, const struct FLinearColor& ShineFxColor_Big);
	void B04_SetFrameColor_Disabled(const struct FLinearColor& FrameColor1, const struct FLinearColor& FrameColor2, const struct FLinearColor& FrameColor_Shine);
	void B04_SetFrameColor_Current(const struct FLinearColor& FrameColor1, const struct FLinearColor& FrameColor2, const struct FLinearColor& FrameColor_Shine, const struct FLinearColor& ShineFxColor_Background, const struct FLinearColor& ShineFxColor_Small, const struct FLinearColor& ShineFxColor_Big);
	void B04_SetShineFxEnabled(bool BIsEnabled);
	void B04_CreateContentWidget(class UClass* ContentWidget);
	void B04_RemoveContentWidget();
	void B04_SetImage(class UObject* ImageBrush, const struct FVector2D& ImageTranslation);
	void B04_SetImageColor_Normal(const struct FLinearColor& ImageColor_Normal, float Saturation_Normal);
	void B04_SetImageColor_Hovered(const struct FLinearColor& ImageColor_Hovered, float Saturation_Hovered);
	void B04_SetImageColor_Clicked(const struct FLinearColor& ImageColor_Clicked, float Saturation_Clicked);
	void B04_SetImageColor_Disabled(const struct FLinearColor& ImageColor_Disabled, float Saturation_Disabled);
	void B04_SetVignetteColor(const struct FLinearColor& VignetteColor);
	void B04_SetScale(float Scale);
	void B03_SetSliderValue(float Value);
	void B03_SetSliderValueNormalized(float ValueNormalized);
	void ExecuteUbergraph_WB_Button_Base(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
