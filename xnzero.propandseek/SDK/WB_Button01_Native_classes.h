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

// WidgetBlueprintGeneratedClass WB_Button01_Native.WB_Button01_Native_C
// 0x0228 (FullSize[0x0461] - InheritedSize[0x0239])
class UWB_Button01_Native_C : public UWB_Button_Base_C
{
public:
	unsigned char                                      UnknownData_J2M3[0x7];                                     // 0x0239(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0240(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                     b_StructureRef;                                            // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                                    SB_FX;                                                     // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                                    SB_NativeButton;                                           // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      StructureRef;                                              // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Button01_Content_C*                      WB_Button01_Content;                                       // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Button01_FX_C*                           WB_Button01_FX;                                            // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_NativeButton_C*                          WB_NativeButton;                                           // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnClicked;                                                 // 0x0280(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnHovered;                                                 // 0x0290(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnUnhovered;                                               // 0x02A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnPressed;                                                 // 0x02B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnReleased;                                                // 0x02C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UFont*                                       Font_Normal;                                               // 0x02D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   TypeFace_Normal;                                           // 0x02D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FontSize_Normal;                                           // 0x02E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_OA0O[0x4];                                     // 0x02E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UFont*                                       Font_Hovered;                                              // 0x02E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   TypeFace_Hovered;                                          // 0x02F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FontSize_Hovered;                                          // 0x02F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_3V68[0x4];                                     // 0x02FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UFont*                                       Font_Clicked;                                              // 0x0300(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   TypeFace_Clicked;                                          // 0x0308(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FontSize_Clicked;                                          // 0x0310(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Duration_Clicked;                                          // 0x0314(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       ButtonText;                                                // 0x0318(0x0018) (Edit, BlueprintVisible)
	struct FLinearColor                                FontColor_Clicked;                                         // 0x0330(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                ClickFX_Color;                                             // 0x0340(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                ClickFX_TextColor;                                         // 0x0350(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                FontColor_Normal;                                          // 0x0360(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                FontColor_Hovered;                                         // 0x0370(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                HoveredFX_Color_01;                                        // 0x0380(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                HoveredFX_Color_02;                                        // 0x0390(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsEnabled;                                                 // 0x03A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<EJustification_EJustification>         ButtonJustification;                                       // 0x03A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bUseGamepadFocus;                                          // 0x03A2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TEnumAsByte<EInputType_EInputType>                 InputType;                                                 // 0x03A3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bAuto_detectInput;                                         // 0x03A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_UL9J[0x3];                                     // 0x03A5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      HintIcon;                                                  // 0x03A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFont*                                       Font_Disabled;                                             // 0x03B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   TypeFace_Disabled;                                         // 0x03B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FontSize_Disabled;                                         // 0x03C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                FontColor_Disabled;                                        // 0x03C4(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_4Y94[0x4];                                     // 0x03D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnDisabled;                                                // 0x03D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               ClickableSizeToContent;                                    // 0x03E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_FU2F[0x7];                                     // 0x03E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                Timer_TextSizeCheck;                                       // 0x03F0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  OnClicked_Sound;                                           // 0x03F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  OnHovered_Sound;                                           // 0x0400(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   ClickableArea_Scale;                                       // 0x0408(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsDesignTime;                                              // 0x0410(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_5DEN[0x3];                                     // 0x0411(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Baseline_Height;                                           // 0x0414(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               UsePreview;                                                // 0x0418(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_L8AF[0x3];                                     // 0x0419(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              PreviewTime;                                               // 0x041C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                ClickableAreaPreviewColor;                                 // 0x0420(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                BaselinePreviewColor;                                      // 0x0430(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnFocused;                                                 // 0x0440(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnUnfocused;                                               // 0x0450(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               UseCustomHover_;                                           // 0x0460(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_Button01_Native.WB_Button01_Native_C");
		return ptr;
	}



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
	void Update_ClickFX_Color(const struct FLinearColor& ClickFXColor);
	void SetFontInfo_FX_OnClicked();
	void SetFX_BaselineHeight(float Value);
	void SetNativeButtonClickAreaHeight(const struct FVector2D& Size);
	void SetResponsiveHoveringToNativeButton();
	void UnhoverAllNativeButtons();
	void SetButtonSounds(class USoundBase* OnClicked_Sound, class USoundBase* OnHovered_Sound);
	void UpdateBaseButtonJustification(TEnumAsByte<EJustification_EJustification> Index);
	void Update_FX02_Color(const struct FLinearColor& FX02_Color);
	void Update_FX01_Color(const struct FLinearColor& FX01_Color);
	void UpdateButtonJustification(TEnumAsByte<EJustification_EJustification> EJustification);
	void AddHintIcon(class UClass* Widget20x20);
	void GetButton(class UButton** Base_Button);
	void SetFontInfo_OnClicked();
	void SetFontInfo_OnNormal();
	void SetFontInfo_OnHovered();
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
	void BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature();
	void BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature();
	void BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_7_OnUnhovered__DelegateSignature();
	void BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_8_OnPressed__DelegateSignature();
	void BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_9_OnReleased__DelegateSignature();
	void Construct();
	void CheckHasFocus();
	void OnInputSwitched(TEnumAsByte<EInputType_EInputType> InputType);
	void BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_0_OnDisabled__DelegateSignature();
	void BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_3_OnFocused__DelegateSignature();
	void BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_4_OnUnfocused__DelegateSignature();
	void OnHoveredCustom();
	void OnUnhoveredCustom();
	void RecheckTextSize();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_WB_Button01_Native(int EntryPoint);
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
