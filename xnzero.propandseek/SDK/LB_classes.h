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

// BlueprintGeneratedClass LB.LB_C
// 0x01D0 (FullSize[0x0508] - InheritedSize[0x0338])
class ALB_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0338(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FString                                     CompetitivePlayerUUID;                                     // 0x0340(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     QuckMatchPlayerUUID;                                       // 0x0350(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     CurrentQuickMatchTicket;                                   // 0x0360(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     CurrentMatchmakingTicket;                                  // 0x0370(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                               MatchMakingFound_;                                         // 0x0380(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_CJ3Q[0x3];                                     // 0x0381(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MatchMakingIndex;                                          // 0x0384(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsWaitingForCompetitiveMatch_;                             // 0x0388(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               FoundCompetitiveSession_;                                  // 0x0389(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_IT4V[0x2];                                     // 0x038A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                CompetitiveGameMaxPlayer;                                  // 0x038C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     CompetitiveIP;                                             // 0x0390(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	int                                                CompetitivePort;                                           // 0x03A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                RandomVar;                                                 // 0x03A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                                LoopCheckingHandler;                                       // 0x03A8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                                LoopCheckingHandlerQuickMatch;                             // 0x03B0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int                                                QuickMatchmakingIndex;                                     // 0x03B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               QuickMatchMakingFound_;                                    // 0x03BC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               QM_PlayeridFound_;                                         // 0x03BD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_AORW[0x2];                                     // 0x03BE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     QM_PlayerSessionID;                                        // 0x03C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                               CM_PlayerIdFound_;                                         // 0x03D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_DJXO[0x7];                                     // 0x03D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     CM_PlayerSessionID;                                        // 0x03D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                               FoundSession_;                                             // 0x03E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_0SZ0[0x7];                                     // 0x03E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     gameSessionId;                                             // 0x03F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FAWSGameSession                             GameSession;                                               // 0x0400(0x00B8) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                                Timer2;                                                    // 0x04B8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FString                                     CustomMatchGameSessionID;                                  // 0x04C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     ticketId;                                                  // 0x04D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     CustomMatchNextToken;                                      // 0x04E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                               NextExist_;                                                // 0x04F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_4MA0[0x3];                                     // 0x04F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                limit;                                                     // 0x04F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                JoinTrial;                                                 // 0x04F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_KE9L[0x4];                                     // 0x04FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                JoinTrialTimer;                                            // 0x0500(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass LB.LB_C");
		return ptr;
	}



	void AvailableGameSessions();
	void SearchPlayerSessionID_Matchmaking(TArray<struct FMatchedPlayerSession>* Array, bool* Success_, struct FString* playerSessionId);
	void SearchGameSessions(TArray<struct FAWSGameSession>* AwsGameSessions, const struct FString& gameSessionId, bool* Success_, struct FAWSGameSession* GameSessionInfo);
	void PC(class ALobbyPC2_C** AsLobby_PC1);
	void GI(class UGI2_C** AsGI2);
	void CustomEvent_2();
	void ReceiveBeginPlay();
	void CreateCustomMatchEvent();
	void JoinCompetitive();
	void JoinQuick();
	void JoinQuickGame();
	void JoinCompetitiveGame();
	void LoopChecking();
	void LoopCheckingQuickMatch();
	void CreateCustomMatch();
	void SearchCustomMatchEvent();
	void JoinSearchedCustomMatchEvent();
	void StopMatchmaking();
	void CancelMatchmakingEvent();
	void ResetCreateCustomMatch();
	void EventJoinCustom();
	void CreatePlayerSession();
	void ExecuteUbergraph_LB(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
