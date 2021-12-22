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

// WidgetBlueprintGeneratedClass LootBoxUMG.LootBoxUMG_C
// 0x0024 (FullSize[0x0254] - InheritedSize[0x0230])
class ULootBoxUMG_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWB_Button02_Framed_C*                       DropRateButton;                                            // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Button02_Framed_C*                       OpenLootboxButton;                                         // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  Txt_LootboxAmount;                                         // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int                                                LootboxAmount;                                             // 0x0250(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LootBoxUMG.LootBoxUMG_C");
		return ptr;
	}



	void UpdateLootboxAmountDisplay(int LootboxAmount_Set_);
	void PC(class ALobbyPC2_C** AsLobby_PC2);
	void BndEvt__OpenLootboxButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void StartOpeningLootbox();
	void BndEvt__DropRateButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void ExecuteUbergraph_LootBoxUMG(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
