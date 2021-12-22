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

// WidgetBlueprintGeneratedClass Entry_PreferencesButton.Entry_PreferencesButton_C
// 0x0020 (FullSize[0x0250] - InheritedSize[0x0230])
class UEntry_PreferencesButton_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            OnUnhovered;                                               // 0x0238(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWB_Button02_Framed_C*                       WB_Button02_Framed;                                        // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEntryUMG_C*                                 EntryUMG;                                                  // 0x0248(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Entry_PreferencesButton.Entry_PreferencesButton_C");
		return ptr;
	}



	void BndEvt__WB_Button02_Framed_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
	void ExecuteUbergraph_Entry_PreferencesButton(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
