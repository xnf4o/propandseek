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

// WidgetBlueprintGeneratedClass WB_KeyRebindingKey.WB_KeyRebindingKey_C
// 0x0158 (FullSize[0x0388] - InheritedSize[0x0230])
class UWB_KeyRebindingKey_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                     B_KeyRebinding_FillColor;                                  // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInputKeySelector*                           Input_KeySelector;                                         // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Button03_Frame_C*                        KeyRebinding_Frame;                                        // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  KeyRebinding_Text;                                         // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                                    SB_Content;                                                // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFont*                                       Font_Normal;                                               // 0x0260(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   FontFaceNormal;                                            // 0x0268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FontSizeNormal;                                            // 0x0270(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                TextColorNormal;                                           // 0x0274(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                FrameColorNormal;                                          // 0x0284(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                FillColorNormal;                                           // 0x0294(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_778Z[0x4];                                     // 0x02A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UFont*                                       FontHovered;                                               // 0x02A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   FontFaceHovered;                                           // 0x02B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FontSizeHovered;                                           // 0x02B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                TextColorHovered;                                          // 0x02BC(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                FrameColorHovered;                                         // 0x02CC(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                FillColorHovered;                                          // 0x02DC(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       KeymappingName;                                            // 0x02EC(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsActionMapping;                                          // 0x02F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bIsAxisMapping;                                            // 0x02F5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bIsSelecting;                                              // 0x02F6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_R3QQ[0x1];                                     // 0x02F7(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnKeySelected;                                             // 0x02F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               bEnabled;                                                  // 0x0308(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bHasKeySelected;                                           // 0x0309(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_0PR7[0x6];                                     // 0x030A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       SelectedKeyText;                                           // 0x0310(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bResponsiveHovering;                                       // 0x0328(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_2PA6[0x7];                                     // 0x0329(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundBase*                                  ClickedSound;                                              // 0x0330(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  HoveredSound;                                              // 0x0338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnKeyEmptied;                                              // 0x0340(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FInputChord                                 LastSelectedKey;                                           // 0x0350(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnHovered;                                                 // 0x0370(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FVector2D                                   LocalSize;                                                 // 0x0380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_KeyRebindingKey.WB_KeyRebindingKey_C");
		return ptr;
	}



	struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void SetButtonSounds(class USoundBase* HoveredSound, class USoundBase* ClickedSound);
	void UnhoverAllKeyButtons();
	struct FText FindKeyboardKey(struct FInputChord* InputChord);
	struct FText TranslateCombKey(const struct FKey& Key, bool IsCombKey, const struct FString& A);
	void TranslateGamepadKeys(const struct FKey& Key, struct FText* Key_Text);
	void GetIsGamepadKey(const struct FKey& Key, bool* bIsGamepadKey);
	void GetIsKeyboardKey(const struct FKey& Key, bool* bIsKeyboardKey);
	void SetCurrentMappingByIndex(int MappingIndex);
	void GetIsAxisMapping(const struct FName& ItemToFind, bool* bIsAxisMapping);
	void GetIsActionMapping(const struct FName& ItemToFind, bool* bIsActionMapping);
	void SetKeymappingName(const struct FText& KeymappingText);
	void SetInfo_Normal();
	void SetInfo_Hovered();
	void SetButtonInfo(class UFont* Font, class UFontFace* FontFace, int FontSize, const struct FLinearColor& TextColor, const struct FLinearColor& FrameColor, const struct FLinearColor& FillColor);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__Input_KeySelector_K2Node_ComponentBoundEvent_289_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey);
	void BndEvt__Input_KeySelector_K2Node_ComponentBoundEvent_290_OnIsSelectingKeyChanged__DelegateSignature();
	void InitConstruct();
	void CheckHovered();
	void SetNoKeySpecifiedText(const struct FText& InNoKeySpecifiedText);
	void SetSelectedKey(const struct FInputChord& InSelectedKey);
	void SetKeyRebindingText(const struct FText& InText);
	void SetKeySelectionText(const struct FText& InKeySelectionText);
	void SetEnabled(bool bEnabled);
	void SetAllowGamepadKeys(bool AllowGamepadKeys);
	void SetAllowModifierKeys(bool bAllowModifierKeys);
	void SetEscapeKeys(TArray<struct FKey> InKeys);
	void UpdateKeyInfo();
	void SetResponsiveHovering(bool bResponsiveHovering);
	void SetLocalSize(const struct FVector2D& LocalSize);
	void ExecuteUbergraph_WB_KeyRebindingKey(int EntryPoint);
	void OnHovered__DelegateSignature();
	void OnKeyEmptied__DelegateSignature(const struct FInputChord& LastSelectedKey);
	void OnKeySelected__DelegateSignature(TEnumAsByte<EMappingType_EMappingType> MappingType, const struct FInputChord& SelectedKey);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
