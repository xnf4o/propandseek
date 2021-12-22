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

// BlueprintGeneratedClass EntryPC.EntryPC_C
// 0x0068 (FullSize[0x06E0] - InheritedSize[0x0678])
class AEntryPC_C : public APlayerController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0678(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FScriptMulticastDelegate                    JoinLobbyMap;                                              // 0x0680(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UEntryUMG_C*                                 EntryUMG;                                                  // 0x0690(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                                TimerHandler;                                              // 0x0698(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FUWorksSteamID                              SteamID;                                                   // 0x06A0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class ULogSave_C*                                  Log;                                                       // 0x06A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     debugRegion;                                               // 0x06B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class UAudioComponent*                             EntryMusic;                                                // 0x06C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               MainOptionsOn_;                                            // 0x06C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_B6JC[0x7];                                     // 0x06C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     DebugText;                                                 // 0x06D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass EntryPC.EntryPC_C");
		return ptr;
	}



	void CheckBanStatusDebugging();
	void CheckBanStatus(bool* Found_, struct FDateTime* BanDatetime, TEnumAsByte<Ereport_Ereport>* Reason);
	void TerminateTimer();
	void GM(class AEntryGM_C** AsEntry_GM);
	void InitWidget();
	void GI(class UGI2_C** AsGI2);
	void InpActEvt_Back_K2Node_InputActionEvent_1(const struct FKey& Key);
	void OnProcessReady();
	void ReceiveBeginPlay();
	void Timeout();
	void OnGetAllGames();
	void OnGetAllLobbies();
	void Retry();
	void ExitToDesktop();
	void IntroFinished_();
	void OnRequestCompleted(bool bSuccessful, const struct FUWorksGameID& GameID, UWorksCore_EUWorksResult Result, const struct FUWorksSteamID& SteamID);
	void SetNewSettings();
	void OnAuthFinished();
	void errorMessage(const struct FText& Error);
	void ExecuteUbergraph_EntryPC(int EntryPoint);
	void JoinLobbyMap__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
