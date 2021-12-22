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

// BlueprintGeneratedClass BP_LootBoxSpawner.BP_LootBoxSpawner_C
// 0x0100 (FullSize[0x0430] - InheritedSize[0x0330])
class ABP_LootBoxSpawner_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0330(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCameraComponent*                            Camera;                                                    // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpringArmComponent*                         SpringArm;                                                 // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_4_Alpha_9141099C4CF41552D5C19CB368FB3A18;         // 0x0350(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_4__Direction_9141099C4CF41552D5C19CB368FB3A18;    // 0x0354(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_DRAM[0x3];                                     // 0x0355(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_5;                                                // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_3_Alpha_060ACA1F4886E1049CE47BBC7FB2CEA9;         // 0x0360(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_3__Direction_060ACA1F4886E1049CE47BBC7FB2CEA9;    // 0x0364(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_6ULH[0x3];                                     // 0x0365(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_4;                                                // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_2_Alpha_67F773B34478AD62B2A5C4B252F9931D;         // 0x0370(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_2__Direction_67F773B34478AD62B2A5C4B252F9931D;    // 0x0374(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_S3CC[0x3];                                     // 0x0375(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_3;                                                // 0x0378(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_1_Alpha_A0673D3F4E0437B6885B64B42052A0BB;         // 0x0380(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_1__Direction_A0673D3F4E0437B6885B64B42052A0BB;    // 0x0384(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_UTLV[0x3];                                     // 0x0385(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_2;                                                // 0x0388(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_03_Alpha_5A6CCC0740379CC79544A6A328499D6B;        // 0x0390(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_03__Direction_5A6CCC0740379CC79544A6A328499D6B;   // 0x0394(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_F3MR[0x3];                                     // 0x0395(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_03;                                               // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_02_Alpha_51E7EED14AFD307F90B71090E46FC406;        // 0x03A0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_02__Direction_51E7EED14AFD307F90B71090E46FC406;   // 0x03A4(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_9QV5[0x3];                                     // 0x03A5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_02;                                               // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_Alpha_1721B67B4F64E6B54D1381BE6EDCFA7E;           // 0x03B0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline__Direction_1721B67B4F64E6B54D1381BE6EDCFA7E;      // 0x03B4(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_BTIW[0x3];                                     // 0x03B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline;                                                  // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_0_Alpha_8543A64148B1F209AABAD0978209B3E6;         // 0x03C0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_0__Direction_8543A64148B1F209AABAD0978209B3E6;    // 0x03C4(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_ERPY[0x3];                                     // 0x03C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_1;                                                // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CameraLookUpTimeline_Alpha_07496D3D4281D1680C8F5A946121E901; // 0x03D0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             CameraLookUpTimeline__Direction_07496D3D4281D1680C8F5A946121E901; // 0x03D4(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_QX75[0x3];                                     // 0x03D5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          CameraLookUpTimeline;                                      // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Chest_C*                                 ChestREF;                                                  // 0x03E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_SciFiCrate_C*                            SciFiCrate_REF;                                            // 0x03E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_MilitaryCrate_C*                         MilitaryCrateREF;                                          // 0x03F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                LootboxID;                                                 // 0x03F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               isSpawning_;                                               // 0x03FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_VIS0[0x3];                                     // 0x03FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                AnimationID;                                               // 0x0400(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     CameraPosLoot01;                                           // 0x0404(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     CameraPosLoot02;                                           // 0x0410(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     CameraPosLoot03;                                           // 0x041C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_Showcase_C*                              ShowcaseWB;                                                // 0x0428(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_LootBoxSpawner.BP_LootBoxSpawner_C");
		return ptr;
	}



	void PC(class ALobbyPC2_C** AsLobby_PC2);
	void CameraLookUpTimeline__FinishedFunc();
	void CameraLookUpTimeline__UpdateFunc();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline__FinishedFunc();
	void Timeline__UpdateFunc();
	void Timeline_02__FinishedFunc();
	void Timeline_02__UpdateFunc();
	void Timeline_03__FinishedFunc();
	void Timeline_03__UpdateFunc();
	void Timeline_1__FinishedFunc();
	void Timeline_1__UpdateFunc();
	void Timeline_2__FinishedFunc();
	void Timeline_2__UpdateFunc();
	void Timeline_3__FinishedFunc();
	void Timeline_3__UpdateFunc();
	void Timeline_4__FinishedFunc();
	void Timeline_4__UpdateFunc();
	void FollowCameraChest();
	void SetCameraPosition(int ID);
	void FollowCameraSciFi();
	void FollowCameraMilitary();
	void LaunchLootbox(int LootboxID, int AnimationID);
	void ExecuteUbergraph_BP_LootBoxSpawner(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
