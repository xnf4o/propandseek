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

// BlueprintGeneratedClass Ammo_Pistol.Ammo_Pistol_C
// 0x0024 (FullSize[0x0354] - InheritedSize[0x0330])
class AAmmo_Pistol_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0330(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        StaticMesh;                                                // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             OwnerSeeTiming__Direction_70F6EFDA43B1979EFD525599E38F8C4F; // 0x0340(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_MXV6[0x7];                                     // 0x0341(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          OwnerSeeTiming;                                            // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LifeSpan;                                                  // 0x0350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Ammo_Pistol.Ammo_Pistol_C");
		return ptr;
	}



	void OwnerSeeTiming__FinishedFunc();
	void OwnerSeeTiming__UpdateFunc();
	void ReceiveBeginPlay();
	void DestroyThisActor();
	void ExecuteUbergraph_Ammo_Pistol(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
