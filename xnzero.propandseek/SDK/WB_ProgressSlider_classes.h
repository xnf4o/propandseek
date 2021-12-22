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

// WidgetBlueprintGeneratedClass WB_ProgressSlider.WB_ProgressSlider_C
// 0x01F0 (FullSize[0x0420] - InheritedSize[0x0230])
class UWB_ProgressSlider_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USlider*                                     ProgressSlider;                                            // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  ProgressText;                                              // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_NativeButton_C*                          WB_NativeButton;                                           // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnHovered;                                                 // 0x0250(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               bUseFocus;                                                 // 0x0260(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_539W[0x3];                                     // 0x0261(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ButtonIconSize;                                            // 0x0264(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ResponsiveHovering;                                        // 0x0268(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_J9BX[0x7];                                     // 0x0269(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FName>                               OptionStates;                                              // 0x0270(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                MaxStateCount;                                             // 0x0280(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NewStateCount;                                             // 0x0284(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     Font_Normal;                                               // 0x0288(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   FontFace_Normal;                                           // 0x0290(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FontSize_Normal;                                           // 0x0298(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                FontColor_Normal;                                          // 0x029C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_R3L3[0x4];                                     // 0x02AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UObject*                                     Font_Hovered;                                              // 0x02B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   FontFace_Hovered;                                          // 0x02B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FontSize_Hovered;                                          // 0x02C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                FontColor_Hovered;                                         // 0x02C4(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_NGYA[0x4];                                     // 0x02D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<struct FName, class UObject*>                 NavStateMap;                                               // 0x02D8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FLinearColor                                NavStateColor_Normal_Active;                               // 0x0328(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                NavStateColor_Hovered_Active;                              // 0x0338(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               UseNavOverview;                                            // 0x0348(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_DMD3[0x3];                                     // 0x0349(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              NavOverviewRoom;                                           // 0x034C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                NavStateColor_Normal_Inactive;                             // 0x0350(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                NavStateColor_Hovered_Inactive;                            // 0x0360(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsHovered;                                                // 0x0370(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_PHR6[0x3];                                     // 0x0371(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       NewStateName;                                              // 0x0374(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_1MHB[0x4];                                     // 0x037C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnProgressChanged;                                         // 0x0380(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                              ProgressMinValue;                                          // 0x0390(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ProgressMaxValue;                                          // 0x0394(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     ProgressDefinition;                                        // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	float                                              ProgressGamepadStepSize;                                   // 0x03A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Value;                                                     // 0x03AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnUnhovered;                                               // 0x03B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class USoundBase*                                  ButtonSound_Clicked;                                       // 0x03C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bHasFocus;                                                 // 0x03C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_U48M[0x7];                                     // 0x03C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FKey                                        CurrentKeyDown;                                            // 0x03D0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FKeyEvent                                   CurrentKeyEventDown;                                       // 0x03E8(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_ProgressSlider.WB_ProgressSlider_C");
		return ptr;
	}



	struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void DecreaseSliderValue(float StepSize);
	void IncreaseSliderValue(float StepSize);
	void SetProgressTextValue(float ProgressValue, float MinValue, float MaxValue, const struct FString& Definition);
	void SetProgressFont(class UObject* Font, class UFontFace* FontFace, int FontSize, const struct FLinearColor& Color);
	void SetSliderColor(const struct FLinearColor& Color);
	void SetButtonsEnabled(bool BIsEnabled);
	struct FLinearColor ConvertOpacityToNormal(const struct FLinearColor& InColor);
	void Set_FontInfoHovered();
	void Set_FontInfoNormal();
	bool HasAnyFocus();
	void CheckFocus();
	void Construct();
	void BndEvt__ProgressSlider_K2Node_ComponentBoundEvent_27_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void UpdateSliderText();
	void SliderClickLeft();
	void SliderClickRight();
	void CheckSliderHovered();
	void OnValueChanged(float SliderValue);
	void BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_5_OnFocused__DelegateSignature();
	void BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_6_OnUnfocused__DelegateSignature();
	void BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_44_OnHovered__DelegateSignature();
	void BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_45_OnUnhovered__DelegateSignature();
	void BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_58_OnClicked__DelegateSignature();
	void ExecuteUbergraph_WB_ProgressSlider(int EntryPoint);
	void OnUnhovered__DelegateSignature();
	void OnProgressChanged__DelegateSignature(float Value);
	void OnHovered__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
