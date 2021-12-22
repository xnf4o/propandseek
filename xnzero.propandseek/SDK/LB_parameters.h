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
// Parameters
//---------------------------------------------------------------------------

// Function LB.LB_C.AvailableGameSessions
struct ALB_C_AvailableGameSessions_Params
{
};

// Function LB.LB_C.SearchPlayerSessionID_Matchmaking
struct ALB_C_SearchPlayerSessionID_Matchmaking_Params
{
	TArray<struct FMatchedPlayerSession>               Array;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               Success_;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     playerSessionId;                                           // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function LB.LB_C.SearchGameSessions
struct ALB_C_SearchGameSessions_Params
{
	TArray<struct FAWSGameSession>                     AwsGameSessions;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FString                                     gameSessionId;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                               Success_;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FAWSGameSession                             GameSessionInfo;                                           // 0x0000(0x00B8)  (Parm, OutParm)
};

// Function LB.LB_C.PC
struct ALB_C_PC_Params
{
	class ALobbyPC2_C*                                 AsLobby_PC1;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LB.LB_C.GI
struct ALB_C_GI_Params
{
	class UGI2_C*                                      AsGI2;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LB.LB_C.CustomEvent_2
struct ALB_C_CustomEvent_2_Params
{
};

// Function LB.LB_C.ReceiveBeginPlay
struct ALB_C_ReceiveBeginPlay_Params
{
};

// Function LB.LB_C.CreateCustomMatchEvent
struct ALB_C_CreateCustomMatchEvent_Params
{
};

// Function LB.LB_C.JoinCompetitive
struct ALB_C_JoinCompetitive_Params
{
};

// Function LB.LB_C.JoinQuick
struct ALB_C_JoinQuick_Params
{
};

// Function LB.LB_C.JoinQuickGame
struct ALB_C_JoinQuickGame_Params
{
};

// Function LB.LB_C.JoinCompetitiveGame
struct ALB_C_JoinCompetitiveGame_Params
{
};

// Function LB.LB_C.LoopChecking
struct ALB_C_LoopChecking_Params
{
};

// Function LB.LB_C.LoopCheckingQuickMatch
struct ALB_C_LoopCheckingQuickMatch_Params
{
};

// Function LB.LB_C.CreateCustomMatch
struct ALB_C_CreateCustomMatch_Params
{
};

// Function LB.LB_C.SearchCustomMatchEvent
struct ALB_C_SearchCustomMatchEvent_Params
{
};

// Function LB.LB_C.JoinSearchedCustomMatchEvent
struct ALB_C_JoinSearchedCustomMatchEvent_Params
{
};

// Function LB.LB_C.StopMatchmaking
struct ALB_C_StopMatchmaking_Params
{
};

// Function LB.LB_C.CancelMatchmakingEvent
struct ALB_C_CancelMatchmakingEvent_Params
{
};

// Function LB.LB_C.ResetCreateCustomMatch
struct ALB_C_ResetCreateCustomMatch_Params
{
};

// Function LB.LB_C.EventJoinCustom
struct ALB_C_EventJoinCustom_Params
{
};

// Function LB.LB_C.CreatePlayerSession
struct ALB_C_CreatePlayerSession_Params
{
};

// Function LB.LB_C.ExecuteUbergraph_LB
struct ALB_C_ExecuteUbergraph_LB_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
