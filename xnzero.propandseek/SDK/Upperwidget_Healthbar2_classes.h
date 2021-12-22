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

// WidgetBlueprintGeneratedClass Upperwidget_Healthbar2.Upperwidget_Healthbar2_C
// 0x0018 (FullSize[0x0248] - InheritedSize[0x0230])
class UUpperwidget_Healthbar2_C : public UUserWidget
{
public:
	class UProgressBar*                                ActualHealth;                                              // 0x0230(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                                BufferHealth;                                              // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int                                                CurrentHealth;                                             // 0x0240(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxHealth;                                                 // 0x0244(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Upperwidget_Healthbar2.Upperwidget_Healthbar2_C");
		return ptr;
	}



	void UpdateInstantHealth(bool _Buffer);
	void UpdateLerpHealth(int CurrentHealth, bool _Buffer);
	void SetHealth(int CurrentHealth, int MaxHealth, bool _Hunter);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
