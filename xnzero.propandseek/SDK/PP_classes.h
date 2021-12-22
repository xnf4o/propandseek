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

// BlueprintGeneratedClass PP.PP_C
// 0x00B0 (FullSize[0x00F0] - InheritedSize[0x0040])
class UPP_C : public UProcessParameters
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0040(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              CheckEmptyPlayerSessionLoopTime;                           // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_71DG[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UGI2_C*                                      GI;                                                        // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class AGameModeBase*                               GM;                                                        // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FAWSGameSessionServer                       StoredSessionData;                                         // 0x0060(0x0090) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass PP.PP_C");
		return ptr;
	}



	void NotifyProcessTerminate();
	bool HealthCheck();
	void UpdateGameSession(const struct FUpdateGameSessionServer& UpdateGameSession);
	void StartGameSession(const struct FAWSGameSessionServer& GameSession);
	void ProcessTerminate();
	void ExecuteUbergraph_PP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
