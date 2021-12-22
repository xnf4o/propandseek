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

// WidgetBlueprintGeneratedClass KillFeed.KillFeed_C
// 0x0038 (FullSize[0x0268] - InheritedSize[0x0230])
class UKillFeed_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UScrollBox*                                  KillFeedScrollBox;                                         // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKillFeedText_C*                             NewlyAdded;                                                // 0x0240(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UKillFeedText_C*>                     Total;                                                     // 0x0248(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               IsUpdating_;                                               // 0x0258(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_WBRI[0x7];                                     // 0x0259(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                TimerHandler;                                              // 0x0260(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass KillFeed.KillFeed_C");
		return ptr;
	}



	void Update(const struct FString& Killed, bool IsKillerHunter_, const struct FString& Destroyed, bool IsDestroyedHunter_);
	void Construct();
	void KillFeedRemoval();
	void ExecuteUbergraph_KillFeed(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
