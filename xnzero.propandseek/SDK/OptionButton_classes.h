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

// WidgetBlueprintGeneratedClass OptionButton.OptionButton_C
// 0x00A8 (FullSize[0x02D8] - InheritedSize[0x0230])
class UOptionButton_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UInputKeySelector*                           InputKeySelector_392;                                      // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FName                                       KeyName;                                                   // 0x0240(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FInputActionKeyMapping                      CurrentActionKeyMapping;                                   // 0x0248(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UInputKeySelector*                           KeySelector;                                               // 0x0270(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputChord                                 Default_Key;                                               // 0x0278(0x0020) (Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	TEnumAsByte<ActionAxis_EActionAxis>                ActionAxis;                                                // 0x0298(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	unsigned char                                      UnknownData_7DDZ[0x7];                                     // 0x0299(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FInputAxisKeyMapping                        CurrentAxisKeyMapping;                                     // 0x02A0(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              AxisScale;                                                 // 0x02C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                               SetToDefault_;                                             // 0x02CC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                               Ready;                                                     // 0x02CD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_E4BR[0x2];                                     // 0x02CE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UInputs_C*                                   InputWidget;                                               // 0x02D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass OptionButton.OptionButton_C");
		return ptr;
	}



	void SetToDefaults();
	void OnKeySelectedAxis(const struct FInputChord& InputChord);
	void InitAxis();
	void OnKeySelectedAction(const struct FInputChord& InputChord);
	void InitAction();
	void Construct();
	void BndEvt__InputKeySelector_391_K2Node_ComponentBoundEvent_3_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey);
	void ExecuteUbergraph_OptionButton(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
