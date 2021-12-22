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

// BlueprintGeneratedClass DefaultLobbyPawn_Fix1.DefaultLobbyPawn_Fix1_C
// 0x0200 (FullSize[0x0590] - InheritedSize[0x0390])
class ADefaultLobbyPawn_Fix1_C : public APawn
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0390(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCameraComponent*                            Camera;                                                    // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              FromStartToViewSpectators_Value_E8E9908C4CD75C44A63D84BBBE741AD3; // 0x03A8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             FromStartToViewSpectators__Direction_E8E9908C4CD75C44A63D84BBBE741AD3; // 0x03AC(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_XZI2[0x3];                                     // 0x03AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          FromStartToViewSpectators;                                 // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ToLootBox_Value_E5B5F70340EB2C92E1BD64BA61F93B86;          // 0x03B8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             ToLootBox__Direction_E5B5F70340EB2C92E1BD64BA61F93B86;     // 0x03BC(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_B27D[0x3];                                     // 0x03BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          ToLootBox;                                                 // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ToQuitUMG_Value_413980B54A46D679B44EF981142E5923;          // 0x03C8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             ToQuitUMG__Direction_413980B54A46D679B44EF981142E5923;     // 0x03CC(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_97G8[0x3];                                     // 0x03CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          ToQuitUMG;                                                 // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ToGameBrowser_Value_D08C6863462202F5B342F0B1B6839B0E;      // 0x03D8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             ToGameBrowser__Direction_D08C6863462202F5B342F0B1B6839B0E; // 0x03DC(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_XCSS[0x3];                                     // 0x03DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          ToGameBrowser;                                             // 0x03E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ToPlayUMG_Value_F6C2F3EF440F637B7AECBE95EB2B0018;          // 0x03E8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             ToPlayUMG__Direction_F6C2F3EF440F637B7AECBE95EB2B0018;     // 0x03EC(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_9ACW[0x3];                                     // 0x03ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          ToPlayUMG;                                                 // 0x03F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FromStartToViewCharacter_Value_EDE9AB2A41ED5744C6467687052F1C47; // 0x03F8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             FromStartToViewCharacter__Direction_EDE9AB2A41ED5744C6467687052F1C47; // 0x03FC(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_KH27[0x3];                                     // 0x03FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          FromStartToViewCharacter;                                  // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_L0Y2[0x8];                                     // 0x0408(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  StartPoint;                                                // 0x0410(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FTransform                                  ViewCharacter;                                             // 0x0440(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                     CurrentLocation;                                           // 0x0470(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    CurrentRotation;                                           // 0x047C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Reverse;                                                   // 0x0488(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_2PER[0x7];                                     // 0x0489(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  PlayUMG;                                                   // 0x0490(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FTransform                                  GameBrowserUMG;                                            // 0x04C0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FTransform                                  QuitUMG;                                                   // 0x04F0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FTransform                                  LootBoxUMG;                                                // 0x0520(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class ABP_LootBoxSpawner_C*                        LootBoxActor;                                              // 0x0550(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_8QLK[0x8];                                     // 0x0558(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  spectatorumg;                                              // 0x0560(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass DefaultLobbyPawn_Fix1.DefaultLobbyPawn_Fix1_C");
		return ptr;
	}



	void PC(class ALobbyPC2_C** AsLobby_PC1);
	void SetPoints();
	void ToPlayUMG__FinishedFunc();
	void ToPlayUMG__UpdateFunc();
	void ToGameBrowser__FinishedFunc();
	void ToGameBrowser__UpdateFunc();
	void ToQuitUMG__FinishedFunc();
	void ToQuitUMG__UpdateFunc();
	void FromStartToViewCharacter__FinishedFunc();
	void FromStartToViewCharacter__UpdateFunc();
	void ToLootBox__FinishedFunc();
	void ToLootBox__UpdateFunc();
	void FromStartToViewSpectators__FinishedFunc();
	void FromStartToViewSpectators__UpdateFunc();
	void StartPointToPlayUMG(bool Reverse_);
	void PlayUmgToGameBrowser(bool Reverse_);
	void StartPointToQuitUMG(bool Reverse_);
	void StopAll();
	void StartPointToLootBox(bool Reverse_);
	void ReceiveBeginPlay();
	void StartPointToViewCharacter(bool Reverse_);
	void StartPointToViewSpectators(bool Reverse_);
	void ExecuteUbergraph_DefaultLobbyPawn_Fix1(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
