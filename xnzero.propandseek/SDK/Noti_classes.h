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

// WidgetBlueprintGeneratedClass Noti.Noti_C
// 0x0018 (FullSize[0x0248] - InheritedSize[0x0230])
class UNoti_C : public UUserWidget
{
public:
	class UVerticalBox*                                MotherNoti;                                                // 0x0230(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UObject*>                             Objects;                                                   // 0x0238(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Noti.Noti_C");
		return ptr;
	}



	void Update_07_Perspective(const struct FString& PerspectiveName);
	void Update_06_DamagedBy(const struct FString& PlayerDamagedYou, int DamageInput);
	void Update_05_AddHealth(int AddedHealthAmount);
	void Update_04_SelfKilled(int Score);
	void Update_03_YouwereEliminatedBy(const struct FString& Username_YouWereKilledBy_, int Score);
	void Update_02_YouEliminated(const struct FString& Username_YouKilled_, int Score);
	void Update_01_SelfDamage(int SelfDamageAmount);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
