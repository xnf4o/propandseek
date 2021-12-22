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

// WidgetBlueprintGeneratedClass PlayUMG.PlayUMG_C
// 0x0056 (FullSize[0x0286] - InheritedSize[0x0230])
class UPlayUMG_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            OnShowPlayUMG;                                             // 0x0238(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWB_B04_Imaged_Preset04_C*                   BrowserCard;                                               // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_B04_Imaged_Preset04_C*                   CompetitiveCard;                                           // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_3;                                                   // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_85;                                                  // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    NoCompetitiveBox;                                          // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    NoQuickBox;                                                // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_B04_Imaged_Preset04_C*                   QuickCard;                                                 // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULobbyUMG2_C*                                LobbyUMG;                                                  // 0x0278(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                LevelRestriction;                                          // 0x0280(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               NotReadyYetForCompetitive;                                 // 0x0284(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               NotReadyYetForQuick;                                       // 0x0285(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PlayUMG.PlayUMG_C");
		return ptr;
	}



	void GI(class UGI2_C** AsGI2);
	void OnReadyCheck1();
	void PC(class ALobbyPC2_C** AsLobby_PC);
	void OnGameBrowserButtonPressed();
	void OnQuickButtonPressed();
	void OnCompetitiveButtonPressed();
	void BndEvt__CompetitiveCard_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
	void BndEvt__QuickCard_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature();
	void BndEvt__BrowserCard_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature();
	void ExecuteUbergraph_PlayUMG(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
