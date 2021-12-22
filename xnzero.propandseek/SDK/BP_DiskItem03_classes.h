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

// BlueprintGeneratedClass BP_DiskItem03.BP_DiskItem03_C
// 0x0048 (FullSize[0x0378] - InheritedSize[0x0330])
class ABP_DiskItem03_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0330(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Item_Plane;                                                // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        HoloCone;                                                  // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        Disk;                                                      // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              DiskHideTimeline_Alpha_85128DF9441D5BAA8BA9C488D2ADA166;   // 0x0358(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             DiskHideTimeline__Direction_85128DF9441D5BAA8BA9C488D2ADA166; // 0x035C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_B40I[0x3];                                     // 0x035D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          DiskHideTimeline;                                          // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DiskScaleTimeline_Alpha_B5FC15AB42F9D6BA978CE9B6A73515AC;  // 0x0368(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             DiskScaleTimeline__Direction_B5FC15AB42F9D6BA978CE9B6A73515AC; // 0x036C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_7LFI[0x3];                                     // 0x036D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          DiskScaleTimeline;                                         // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_DiskItem03.BP_DiskItem03_C");
		return ptr;
	}



	void DiskScaleTimeline__FinishedFunc();
	void DiskScaleTimeline__UpdateFunc();
	void DiskHideTimeline__FinishedFunc();
	void DiskHideTimeline__UpdateFunc();
	void ReceiveBeginPlay();
	void ShowItem();
	void HideItem();
	void ExecuteUbergraph_BP_DiskItem03(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
