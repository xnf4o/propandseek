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

// BlueprintGeneratedClass BloodSplashDecal.BloodSplashDecal_C
// 0x0028 (FullSize[0x0360] - InheritedSize[0x0338])
class ABloodSplashDecal_C : public ADecalActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0338(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_0__Direction_F66869964E7D1940270F97BDF453F731;    // 0x0340(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_LELH[0x7];                                     // 0x0341(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_1;                                                // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                RandomSplatter;                                            // 0x0350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_3ZJT[0x4];                                     // 0x0354(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInterface*                          DecalMaterial;                                             // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BloodSplashDecal.BloodSplashDecal_C");
		return ptr;
	}



	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BloodSplashDecal(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
