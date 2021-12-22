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

// WidgetBlueprintGeneratedClass Graphic.Graphic_C
// 0x0129 (FullSize[0x0359] - InheritedSize[0x0230])
class UGraphic_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            OnDefaultButtonHovered;                                    // 0x0238(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            OnNoti;                                                    // 0x0240(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            OnSaveButtonHovered;                                       // 0x0248(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                                     CinemaOff;                                                 // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     CinemaOn;                                                  // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              DevLine2;                                                  // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Button03_Options_C*                      FieldOfView;                                               // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFullScreenTitle_C*                          FullScreenTitle;                                           // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                GraphicSettingsBox;                                        // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                KeyInputBox;                                               // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Button03_ComboEdition_C*                 Menu01_ScreenMode;                                         // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Button03_ComboEdition_C*                 Menu02_ScreenResolution;                                   // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Button03_Options_C*                      Menu03_VerticalSync;                                       // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Button03_Options_C*                      Menu04_ScreenshotMode;                                     // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Button03_Options_C*                      Menu05_ViewChat;                                           // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                                  ScrollBox_1;                                               // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                               ScreenShotMode;                                            // 0x02B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ZONO[0x7];                                     // 0x02B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UWB_Button03_AutoGenerate_C*>         GraphicOptionLines;                                        // 0x02C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     SaveGameObjectName;                                        // 0x02D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class UGraphicSettingsSave_C*                      GraphicSettingsSave;                                       // 0x02E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       NotiText;                                                  // 0x02E8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FString>                             ResolutionListString;                                      // 0x0300(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               ResolutionOptionSet_;                                      // 0x0310(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_0RKW[0x7];                                     // 0x0311(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<int>                                        DetectedOptionsIndex;                                      // 0x0318(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     DefaultGraphicSettings;                                    // 0x0328(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                               Vsync_;                                                    // 0x0338(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               EnableResolutionCombobox_;                                 // 0x0339(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_YBXZ[0x6];                                     // 0x033A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMain_Options_Fix1_C*                        MainOption;                                                // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnSettingsModified;                                        // 0x0348(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               ActivateChangeResolution_;                                 // 0x0358(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Graphic.Graphic_C");
		return ptr;
	}



	void AdjustPostProcessing();
	void CheckDeveloperMode();
	void InitToDefault();
	void ConvertFrameRateLimit(float FrameRate, int* FrameRateOptionIndex);
	void DetectCurrent(TArray<int>* DetectedOptionsIndex);
	void ToggleCinemaMode(bool On_);
	void UpdateScreenMode();
	void UpdateResolution(const struct FString& Resolution);
	void InitScreenResolution();
	void Save();
	void Init();
	void ToggleScreenshotMode(bool ScreenShotMode);
	void PC(class AFPS_PC_C** AsFPS_PC);
	void UpdateScreenshotMode();
	void GI(class UGI2_C** AsGI2);
	void Construct();
	void BndEvt__CinemaOn_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__CinemaOff_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Menu03_VerticalSync_K2Node_ComponentBoundEvent_12_OnStateChanged__DelegateSignature(const struct FName& StateName, int StateIndex);
	void BndEvt__Menu01_ScreenMode_K2Node_ComponentBoundEvent_14_OnSelectionChanged__ComboBox___DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<SlateCore_ESelectInfo> SelectionType);
	void BndEvt__Menu02_ScreenResolution_K2Node_ComponentBoundEvent_15_OnSelectionChanged__ComboBox___DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<SlateCore_ESelectInfo> SelectionType);
	void BndEvt__Menu04_ScreenshotMode_K2Node_ComponentBoundEvent_16_OnStateChanged__DelegateSignature(const struct FName& StateName, int StateIndex);
	void OnModified();
	void BndEvt__Master_K2Node_ComponentBoundEvent_1_OnSliderChanged__DelegateSignature(float ValueNormalized, float Value);
	void BndEvt__Menu05_ViewChat_K2Node_ComponentBoundEvent_0_OnStateChanged__DelegateSignature(const struct FName& StateName, int StateIndex);
	void ExecuteUbergraph_Graphic(int EntryPoint);
	void OnSettingsModified__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
