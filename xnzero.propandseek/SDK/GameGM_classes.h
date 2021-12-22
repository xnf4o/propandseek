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

// BlueprintGeneratedClass GameGM.GameGM_C
// 0x0030 (FullSize[0x0400] - InheritedSize[0x03D0])
class AGameGM_C : public AGameModeBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPP_C*                                       PP;                                                        // 0x03E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                RandomMap;                                                 // 0x03E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_LCU3[0x4];                                     // 0x03EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     MapFileName;                                               // 0x03F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass GameGM.GameGM_C");
		return ptr;
	}



	void GI(class UGI2_C** AsGI2);
	void ServerTravelMap(const struct FString& gameSessionData);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_GameGM(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
