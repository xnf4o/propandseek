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

// BlueprintGeneratedClass EntryGM.EntryGM_C
// 0x0018 (FullSize[0x03E8] - InheritedSize[0x03D0])
class AEntryGM_C : public AGameModeBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPP_C*                                       PP;                                                        // 0x03E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass EntryGM.EntryGM_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void ExecuteUbergraph_EntryGM(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
