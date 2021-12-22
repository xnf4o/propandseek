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

// BlueprintGeneratedClass BP_Chest.BP_Chest_C
// 0x0158 (FullSize[0x0488] - InheritedSize[0x0330])
class ABP_Chest_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0330(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                      SkeletalMesh;                                              // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_14_Alpha_1AF94F4A458D2E7562F9E89AFEC662D6;        // 0x0348(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_14__Direction_1AF94F4A458D2E7562F9E89AFEC662D6;   // 0x034C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_PQA3[0x3];                                     // 0x034D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_15;                                               // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_13_Alpha_E31DBF664D0C5303B31976B9E091D3AB;        // 0x0358(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_13__Direction_E31DBF664D0C5303B31976B9E091D3AB;   // 0x035C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_V1G9[0x3];                                     // 0x035D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_14;                                               // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_12_Alpha_68C7E308447B89ADEC40E8BD3C0C75F0;        // 0x0368(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_12__Direction_68C7E308447B89ADEC40E8BD3C0C75F0;   // 0x036C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_W5FB[0x3];                                     // 0x036D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_13;                                               // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_11_Alpha_CB9FDDF5497DA658E37D4DB91EA87105;        // 0x0378(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_11__Direction_CB9FDDF5497DA658E37D4DB91EA87105;   // 0x037C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_0ISF[0x3];                                     // 0x037D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_12;                                               // 0x0380(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_10_Alpha_264633ED4D84A6D7E3ECBA96A074895D;        // 0x0388(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_10__Direction_264633ED4D84A6D7E3ECBA96A074895D;   // 0x038C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_8M6I[0x3];                                     // 0x038D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_11;                                               // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_9_Alpha_A31A94F744DA128E76AF8D8F763F12C6;         // 0x0398(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_9__Direction_A31A94F744DA128E76AF8D8F763F12C6;    // 0x039C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_J5IA[0x3];                                     // 0x039D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_10;                                               // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_5_Alpha_6E13736841D35BC0A124E786B82A6E28;         // 0x03A8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_5__Direction_6E13736841D35BC0A124E786B82A6E28;    // 0x03AC(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_62VP[0x3];                                     // 0x03AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_6;                                                // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_4_Alpha_B779948F4F14DC59240AF7A3A6CDB49E;         // 0x03B8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_4__Direction_B779948F4F14DC59240AF7A3A6CDB49E;    // 0x03BC(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_2P32[0x3];                                     // 0x03BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_5;                                                // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_3_Alpha_011057744F06CA43A91188BA89C56860;         // 0x03C8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_3__Direction_011057744F06CA43A91188BA89C56860;    // 0x03CC(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_Y9B1[0x3];                                     // 0x03CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_4;                                                // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_8_Alpha_671BCFE6482CB6FA11ACA3AAB837CEAE;         // 0x03D8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_8__Direction_671BCFE6482CB6FA11ACA3AAB837CEAE;    // 0x03DC(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_DEIU[0x3];                                     // 0x03DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_9;                                                // 0x03E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_7_Alpha_B5D59ADD4415EC754D91428D0BAD69D0;         // 0x03E8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_7__Direction_B5D59ADD4415EC754D91428D0BAD69D0;    // 0x03EC(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_R4TK[0x3];                                     // 0x03ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_8;                                                // 0x03F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_6_Alpha_804D711D45292F3FB3F4AC9CAD1D9987;         // 0x03F8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_6__Direction_804D711D45292F3FB3F4AC9CAD1D9987;    // 0x03FC(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_F1GG[0x3];                                     // 0x03FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_7;                                                // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_2_Alpha_4C16F507452736A6E98C8D909E8FC1F2;         // 0x0408(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_2__Direction_4C16F507452736A6E98C8D909E8FC1F2;    // 0x040C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_G1C3[0x3];                                     // 0x040D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_3;                                                // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_1_Alpha_6C92821D41F606CB610E72B267998204;         // 0x0418(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_1__Direction_6C92821D41F606CB610E72B267998204;    // 0x041C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_EL0O[0x3];                                     // 0x041D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_2;                                                // 0x0420(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_0_Alpha_FDEE649744E233EA2FA1C685F0FAA890;         // 0x0428(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_0__Direction_FDEE649744E233EA2FA1C685F0FAA890;    // 0x042C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_L8HG[0x3];                                     // 0x042D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_1;                                                // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PullbackItemTimeline_Alpha_8DF2D85943662C0D8FFA408EF41D7328; // 0x0438(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             PullbackItemTimeline__Direction_8DF2D85943662C0D8FFA408EF41D7328; // 0x043C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_8IU6[0x3];                                     // 0x043D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          PullbackItemTimeline;                                      // 0x0440(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ItemAppearTimeline_Alpha_6E1B4CA04C5BD82544D8F08ED47AB22C; // 0x0448(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             ItemAppearTimeline__Direction_6E1B4CA04C5BD82544D8F08ED47AB22C; // 0x044C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_JN5A[0x3];                                     // 0x044D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          ItemAppearTimeline;                                        // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ItemShowTimeline_Alpha_471E25F54DC944020C97ED93E5D41A2A;   // 0x0458(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             ItemShowTimeline__Direction_471E25F54DC944020C97ED93E5D41A2A; // 0x045C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_9RTD[0x3];                                     // 0x045D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          ItemShowTimeline;                                          // 0x0460(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                AnimationID;                                               // 0x0468(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_IQOZ[0x4];                                     // 0x046C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ACustomCard_C*                               Item01REF;                                                 // 0x0470(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACustomCard_C*                               Item02REF;                                                 // 0x0478(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACustomCard_C*                               Item03REF;                                                 // 0x0480(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Chest.BP_Chest_C");
		return ptr;
	}



	void PC(class ALobbyPC2_C** AsLobby_PC2);
	void ItemAppearTimeline__FinishedFunc();
	void ItemAppearTimeline__UpdateFunc();
	void PullbackItemTimeline__FinishedFunc();
	void PullbackItemTimeline__UpdateFunc();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline_1__FinishedFunc();
	void Timeline_1__UpdateFunc();
	void Timeline_2__FinishedFunc();
	void Timeline_2__UpdateFunc();
	void Timeline_6__FinishedFunc();
	void Timeline_6__UpdateFunc();
	void Timeline_7__FinishedFunc();
	void Timeline_7__UpdateFunc();
	void Timeline_8__FinishedFunc();
	void Timeline_8__UpdateFunc();
	void Timeline_3__FinishedFunc();
	void Timeline_3__UpdateFunc();
	void ItemShowTimeline__FinishedFunc();
	void ItemShowTimeline__UpdateFunc();
	void Timeline_4__FinishedFunc();
	void Timeline_4__UpdateFunc();
	void Timeline_5__FinishedFunc();
	void Timeline_5__UpdateFunc();
	void Timeline_9__FinishedFunc();
	void Timeline_9__UpdateFunc();
	void Timeline_10__FinishedFunc();
	void Timeline_10__UpdateFunc();
	void Timeline_11__FinishedFunc();
	void Timeline_11__UpdateFunc();
	void Timeline_12__FinishedFunc();
	void Timeline_12__UpdateFunc();
	void Timeline_13__FinishedFunc();
	void Timeline_13__UpdateFunc();
	void Timeline_14__FinishedFunc();
	void Timeline_14__UpdateFunc();
	void StartLootbox(int AnimationID);
	void CameraShake();
	void SpawnItem02();
	void PullbackLootbox(int AnimationID);
	void SpawnItem03();
	void SpawnItem01();
	void CustomDestroy();
	void ExecuteUbergraph_BP_Chest(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
