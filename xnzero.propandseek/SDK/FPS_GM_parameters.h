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

// Function FPS_GM.FPS_GM_C.Report
struct AFPS_GM_C_Report_Params
{
	TEnumAsByte<Ereport_Ereport>                       ReportType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     SteamID;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function FPS_GM.FPS_GM_C.CheckFirstCompetitivePlay
struct AFPS_GM_C_CheckFirstCompetitivePlay_Params
{
	class AFPS_PC_C*                                   Player;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_GM.FPS_GM_C.CheckMetalGateSurvivor
struct AFPS_GM_C_CheckMetalGateSurvivor_Params
{
	class AFPS_PC_C*                                   Player;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_GM.FPS_GM_C.FinishingGoldExp
struct AFPS_GM_C_FinishingGoldExp_Params
{
	class AFPS_PC_C*                                   Player;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_GM.FPS_GM_C.AddStat_DeductVotekickTicket
struct AFPS_GM_C_AddStat_DeductVotekickTicket_Params
{
	struct FString                                     Steam_ID;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                               Success_;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FPS_GM.FPS_GM_C.KillFeeds
struct AFPS_GM_C_KillFeeds_Params
{
	TArray<class AFPS_Character2_C*>                   Killed;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class AFPS_PC_C*>                           Destroyed;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function FPS_GM.FPS_GM_C.DisablePeek
struct AFPS_GM_C_DisablePeek_Params
{
};

// Function FPS_GM.FPS_GM_C.AddStat_PropLastManStanding
struct AFPS_GM_C_AddStat_PropLastManStanding_Params
{
	struct FString                                     Steam_ID;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function FPS_GM.FPS_GM_C.AddStat_Prop15kill
struct AFPS_GM_C_AddStat_Prop15kill_Params
{
	struct FString                                     Steam_ID;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function FPS_GM.FPS_GM_C.AddStat_PropKill
struct AFPS_GM_C_AddStat_PropKill_Params
{
	struct FString                                     Steam_ID;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function FPS_GM.FPS_GM_C.DeliverTauntSound
struct AFPS_GM_C_DeliverTauntSound_Params
{
	int                                                TauntSoundNumber;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AProp_C*                                     Prop;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_GM.FPS_GM_C.AddStat_PermanentBan
struct AFPS_GM_C_AddStat_PermanentBan_Params
{
	struct FString                                     Steam_ID;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function FPS_GM.FPS_GM_C.VoteKick
struct AFPS_GM_C_VoteKick_Params
{
	class AFPS_PC_C*                                   RequestedPlayer;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     VotekickPlayerSteamID;                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     VotekickPlayerUsername;                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function FPS_GM.FPS_GM_C.SyncHunterWaitTime
struct AFPS_GM_C_SyncHunterWaitTime_Params
{
};

// Function FPS_GM.FPS_GM_C.ProcessRequestedGameStateInfo
struct AFPS_GM_C_ProcessRequestedGameStateInfo_Params
{
};

// Function FPS_GM.FPS_GM_C.SearchPlayer
struct AFPS_GM_C_SearchPlayer_Params
{
	struct FString                                     SteamID;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                               Success_;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AFPS_PC_C*                                   Player;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_GM.FPS_GM_C.AddToQueue_StoreStats
struct AFPS_GM_C_AddToQueue_StoreStats_Params
{
	struct FString                                     SteamID;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function FPS_GM.FPS_GM_C.SearchAndRemoveStoreStatsQueue
struct AFPS_GM_C_SearchAndRemoveStoreStatsQueue_Params
{
	struct FString                                     SteamID;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function FPS_GM.FPS_GM_C.EarlyLeaverGoldCoinPenalty
struct AFPS_GM_C_EarlyLeaverGoldCoinPenalty_Params
{
	struct FString                                     Steam_ID;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int                                                DeductionGoldCoinAmount;                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_GM.FPS_GM_C.AddStat_PointsThumbsUp
struct AFPS_GM_C_AddStat_PointsThumbsUp_Params
{
	struct FSCashItemsGameInfo                         BattlePassType;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFPS_PC_C*                                   Player;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_GM.FPS_GM_C.DeleteAllPlayersToEndGame
struct AFPS_GM_C_DeleteAllPlayersToEndGame_Params
{
};

// Function FPS_GM.FPS_GM_C.AddStat_DeductSTokens
struct AFPS_GM_C_AddStat_DeductSTokens_Params
{
	struct FString                                     Steam_ID;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int                                                DeductionSTokensAmount;                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Success_;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FPS_GM.FPS_GM_C.AddStat_DeductGoldCoins
struct AFPS_GM_C_AddStat_DeductGoldCoins_Params
{
	struct FString                                     Steam_ID;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int                                                DeductionGoldCoinAmount;                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Success_;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FPS_GM.FPS_GM_C.Competitive_Score
struct AFPS_GM_C_Competitive_Score_Params
{
	struct FString                                     Steam_ID;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int                                                Score;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_GM.FPS_GM_C.AddStat_ExpPoints_HunterKill
struct AFPS_GM_C_AddStat_ExpPoints_HunterKill_Params
{
	struct FSCashItemsGameInfo                         BattlePassType;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFPS_PC_C*                                   Player;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_GM.FPS_GM_C.AddStat_ExpPoints_PropSurvival
struct AFPS_GM_C_AddStat_ExpPoints_PropSurvival_Params
{
	struct FSCashItemsGameInfo                         BattlePassType;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFPS_PC_C*                                   Player;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_GM.FPS_GM_C.AddStat_ExpPoints_RoundLose
struct AFPS_GM_C_AddStat_ExpPoints_RoundLose_Params
{
	struct FSCashItemsGameInfo                         BattlePassType;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFPS_PC_C*                                   Player;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_GM.FPS_GM_C.AddStat_ExpPoints_RoundWin
struct AFPS_GM_C_AddStat_ExpPoints_RoundWin_Params
{
	struct FSCashItemsGameInfo                         BattlePassType;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFPS_PC_C*                                   Player;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_GM.FPS_GM_C.DeleteExitingPlayerQueue
struct AFPS_GM_C_DeleteExitingPlayerQueue_Params
{
	struct FString                                     SteamID;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function FPS_GM.FPS_GM_C.AddExp
struct AFPS_GM_C_AddExp_Params
{
	class AFPS_PC_C*                                   PC;                                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ExpAmount;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_GM.FPS_GM_C.DestroyAllActorsOfPlayer
struct AFPS_GM_C_DestroyAllActorsOfPlayer_Params
{
	class AFPS_PC_C*                                   PC;                                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_GM.FPS_GM_C.AddStat_AddGoldenThumbs
struct AFPS_GM_C_AddStat_AddGoldenThumbs_Params
{
	struct FString                                     Steam_ID;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function FPS_GM.FPS_GM_C.AddStat_AddThumbs
struct AFPS_GM_C_AddStat_AddThumbs_Params
{
	struct FString                                     Steam_ID;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function FPS_GM.FPS_GM_C.CheckToEndGame
struct AFPS_GM_C_CheckToEndGame_Params
{
	bool                                               EndThisGameNow_;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FPS_GM.FPS_GM_C.CheckHuntersPropsExist
struct AFPS_GM_C_CheckHuntersPropsExist_Params
{
};

// Function FPS_GM.FPS_GM_C.AddStat_RankingInOrOut?
struct AFPS_GM_C_AddStat_RankingInOrOut__Params
{
	struct FString                                     Steam_ID;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                               In_;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FPS_GM.FPS_GM_C.GetLeaderboardRanking
struct AFPS_GM_C_GetLeaderboardRanking_Params
{
	struct FString                                     Content;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int                                                Score;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               SetRankingIn_;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               SetRankingOut_;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                NewRanking;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_GM.FPS_GM_C.SetLeaderboard
struct AFPS_GM_C_SetLeaderboard_Params
{
	struct FString                                     InputSteamID;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     InputLeaderboardID;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int                                                InputScore;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULowEntryHttpRequest*                        RequestHttpObject;                                         // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_GM.FPS_GM_C.Mute_Ambience
struct AFPS_GM_C_Mute_Ambience_Params
{
};

// Function FPS_GM.FPS_GM_C.Mute_OnFireMusic
struct AFPS_GM_C_Mute_OnFireMusic_Params
{
};

// Function FPS_GM.FPS_GM_C.Mute_StartMusic
struct AFPS_GM_C_Mute_StartMusic_Params
{
};

// Function FPS_GM.FPS_GM_C.DebugCheck
struct AFPS_GM_C_DebugCheck_Params
{
};

// Function FPS_GM.FPS_GM_C.InvalidateAllTimers
struct AFPS_GM_C_InvalidateAllTimers_Params
{
};

// Function FPS_GM.FPS_GM_C.SearchPlayer_Finalscore
struct AFPS_GM_C_SearchPlayer_Finalscore_Params
{
	struct FString                                     Steam_ID;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int                                                CompetitiveScoreOfTheMatch;                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_GM.FPS_GM_C.SetInGameScore
struct AFPS_GM_C_SetInGameScore_Params
{
	struct FString                                     Steam_ID;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TEnumAsByte<ESteamStats_ESteamStats>               WhichOne_;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFPS_PC_C*                                   Player;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_GM.FPS_GM_C.Custom_Lose
struct AFPS_GM_C_Custom_Lose_Params
{
	struct FString                                     Steam_ID;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function FPS_GM.FPS_GM_C.Custom_Win
struct AFPS_GM_C_Custom_Win_Params
{
	struct FString                                     Steam_ID;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function FPS_GM.FPS_GM_C.EarlyLeaverPenalty
struct AFPS_GM_C_EarlyLeaverPenalty_Params
{
	struct FString                                     SteamID;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function FPS_GM.FPS_GM_C.SyncPlayerStatHistory
struct AFPS_GM_C_SyncPlayerStatHistory_Params
{
	struct FString                                     SteamID;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     userName;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class AFPS_PC_C*                                   Player;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_GM.FPS_GM_C.AddToQueue_GetStats
struct AFPS_GM_C_AddToQueue_GetStats_Params
{
	struct FString                                     SteamID;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TEnumAsByte<EWhichWorkGame_EWhichWorkGame>         Work;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFPS_PC_C*                                   Player;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_GM.FPS_GM_C.RemovePlayerFromQueue_GetStats
struct AFPS_GM_C_RemovePlayerFromQueue_GetStats_Params
{
	struct FString                                     SteamID;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TEnumAsByte<EWhichWorkGame_EWhichWorkGame>         Work;                                                      // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Success_;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     Output_SteamID;                                            // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class AFPS_PC_C*                                   Output_Player;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_GM.FPS_GM_C.IncrementStat_WhichOne?
struct AFPS_GM_C_IncrementStat_WhichOne__Params
{
	struct FString                                     Steam_ID;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TEnumAsByte<ESteamStats_ESteamStats>               WhichOne_;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_GM.FPS_GM_C.AddStat_HunterDeath
struct AFPS_GM_C_AddStat_HunterDeath_Params
{
	struct FString                                     Steam_ID;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function FPS_GM.FPS_GM_C.AddStat_HunterKill
struct AFPS_GM_C_AddStat_HunterKill_Params
{
	struct FString                                     Steam_ID;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function FPS_GM.FPS_GM_C.AddStat_HunterLose
struct AFPS_GM_C_AddStat_HunterLose_Params
{
	struct FString                                     Steam_ID;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function FPS_GM.FPS_GM_C.AddStat_HunterWin
struct AFPS_GM_C_AddStat_HunterWin_Params
{
	struct FString                                     Steam_ID;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function FPS_GM.FPS_GM_C.AddStat_PropDeath
struct AFPS_GM_C_AddStat_PropDeath_Params
{
	struct FString                                     Steam_ID;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function FPS_GM.FPS_GM_C.AddStat_PropSurvival
struct AFPS_GM_C_AddStat_PropSurvival_Params
{
	struct FString                                     Steam_ID;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function FPS_GM.FPS_GM_C.AddStat_PropLose
struct AFPS_GM_C_AddStat_PropLose_Params
{
	struct FString                                     Steam_ID;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function FPS_GM.FPS_GM_C.AddStat_PropWin
struct AFPS_GM_C_AddStat_PropWin_Params
{
	struct FString                                     Steam_ID;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function FPS_GM.FPS_GM_C.CheckIfPlayersExist
struct AFPS_GM_C_CheckIfPlayersExist_Params
{
};

// Function FPS_GM.FPS_GM_C.GI
struct AFPS_GM_C_GI_Params
{
	class UGI2_C*                                      AsGI2;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_GM.FPS_GM_C.StartBurningTime
struct AFPS_GM_C_StartBurningTime_Params
{
};

// Function FPS_GM.FPS_GM_C.KillFeedSelf
struct AFPS_GM_C_KillFeedSelf_Params
{
	struct FString                                     DestroyedPlayerUsername;                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function FPS_GM.FPS_GM_C.KillFeed
struct AFPS_GM_C_KillFeed_Params
{
	class AFPS_Character2_C*                           Killed;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFPS_PC_C*                                   Destroyed;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_GM.FPS_GM_C.CompetitiveScoreConverter
struct AFPS_GM_C_CompetitiveScoreConverter_Params
{
	int                                                Ranking;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Win_;                                                      // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                Score;                                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_GM.FPS_GM_C.CompetitiveEndingProcess
struct AFPS_GM_C_CompetitiveEndingProcess_Params
{
};

// Function FPS_GM.FPS_GM_C.CompetitiveDeployingRankings
struct AFPS_GM_C_CompetitiveDeployingRankings_Params
{
};

// Function FPS_GM.FPS_GM_C.AllDataScoreConverter
struct AFPS_GM_C_AllDataScoreConverter_Params
{
	int                                                PropWin;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                PropLose;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                PropSurvival;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                PropDeath;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                HunterWin;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                HunterLose;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                HunterKill;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                HunterDeath;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                TotalScore;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_GM.FPS_GM_C.CompetitiveCalculatingFinalScore
struct AFPS_GM_C_CompetitiveCalculatingFinalScore_Params
{
};

// Function FPS_GM.FPS_GM_C.HunterNumber
struct AFPS_GM_C_HunterNumber_Params
{
	int                                                HunterNumber;                                              // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_GM.FPS_GM_C.InitiatePlayers
struct AFPS_GM_C_InitiatePlayers_Params
{
	bool                                               Done_;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FPS_GM.FPS_GM_C.PS
struct AFPS_GM_C_PS_Params
{
	class APlayerController*                           FPS_PC;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFPS_PS_C*                                   AsFPS_PS;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_GM.FPS_GM_C.PropSelection
struct AFPS_GM_C_PropSelection_Params
{
	bool                                               _2nd_;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FPS_GM.FPS_GM_C.SetTwoSpawnAreas
struct AFPS_GM_C_SetTwoSpawnAreas_Params
{
};

// Function FPS_GM.FPS_GM_C.SendFinalResults
struct AFPS_GM_C_SendFinalResults_Params
{
};

// Function FPS_GM.FPS_GM_C.EndGameSession
struct AFPS_GM_C_EndGameSession_Params
{
};

// Function FPS_GM.FPS_GM_C.CheckEndGameHunter
struct AFPS_GM_C_CheckEndGameHunter_Params
{
	bool                                               EndGame_;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FPS_GM.FPS_GM_C.CheckEndGameProp
struct AFPS_GM_C_CheckEndGameProp_Params
{
	bool                                               EndGame_;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FPS_GM.FPS_GM_C.UpdatePlayerState(WinLoseNoti)
struct AFPS_GM_C_UpdatePlayerState_WinLoseNoti__Params
{
	bool                                               PropWin_;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FPS_GM.FPS_GM_C.SendChatToClients
struct AFPS_GM_C_SendChatToClients_Params
{
	struct FString                                     userName;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FText                                       Message;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	TEnumAsByte<EChatMode_EChatMode>                   ChatMode;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFPS_PC_C*                                   Initiater;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                                 TextColor;                                                 // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function FPS_GM.FPS_GM_C.WhichSideWin?
struct AFPS_GM_C_WhichSideWin__Params
{
	bool                                               PropWin_;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FPS_GM.FPS_GM_C.PlayerArray
struct AFPS_GM_C_PlayerArray_Params
{
	TArray<class APlayerState*>                        PlayerArray;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
};

// Function FPS_GM.FPS_GM_C.SetHunters
struct AFPS_GM_C_SetHunters_Params
{
	TArray<class AFPS_PC_C*>                           ChangedPlayers;                                            // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
};

// Function FPS_GM.FPS_GM_C.CountUp_LoopNumber
struct AFPS_GM_C_CountUp_LoopNumber_Params
{
	bool                                               FinishThisGame_;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FPS_GM.FPS_GM_C.CountDown_WaitNextRoundTime
struct AFPS_GM_C_CountDown_WaitNextRoundTime_Params
{
	bool                                               Reached_0_;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FPS_GM.FPS_GM_C.ResetAllTimer
struct AFPS_GM_C_ResetAllTimer_Params
{
};

// Function FPS_GM.FPS_GM_C.UpdatePlayerState(WinLose)
struct AFPS_GM_C_UpdatePlayerState_WinLose__Params
{
};

// Function FPS_GM.FPS_GM_C.UpdatePlayerState(Scoreboard)
struct AFPS_GM_C_UpdatePlayerState_Scoreboard__Params
{
	struct FString                                     GonePlayerSteamID;                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function FPS_GM.FPS_GM_C.CountDown_PlayTime
struct AFPS_GM_C_CountDown_PlayTime_Params
{
};

// Function FPS_GM.FPS_GM_C.CountDown_WaitTime
struct AFPS_GM_C_CountDown_WaitTime_Params
{
	bool                                               Reached_0_;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FPS_GM.FPS_GM_C.GameUpdatePlayers
struct AFPS_GM_C_GameUpdatePlayers_Params
{
	int                                                CurrentPlayers;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_GM.FPS_GM_C.GameUpdateRounds
struct AFPS_GM_C_GameUpdateRounds_Params
{
	int                                                CurrentRound;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_GM.FPS_GM_C.GameUpdateStatus
struct AFPS_GM_C_GameUpdateStatus_Params
{
	struct FString                                     CurrentStatus;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function FPS_GM.FPS_GM_C.UpdateGameSessionData
struct AFPS_GM_C_UpdateGameSessionData_Params
{
};

// Function FPS_GM.FPS_GM_C.GameUpdateDeletion
struct AFPS_GM_C_GameUpdateDeletion_Params
{
};

// Function FPS_GM.FPS_GM_C.RegisterBannedPlayer
struct AFPS_GM_C_RegisterBannedPlayer_Params
{
	struct FString                                     BannePlayerSteamID;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function FPS_GM.FPS_GM_C.ActionByPlaytime_Event
struct AFPS_GM_C_ActionByPlaytime_Event_Params
{
};

// Function FPS_GM.FPS_GM_C.ResetInitHunterWait
struct AFPS_GM_C_ResetInitHunterWait_Params
{
};

// Function FPS_GM.FPS_GM_C.GameInitializationGraph_Start
struct AFPS_GM_C_GameInitializationGraph_Start_Params
{
};

// Function FPS_GM.FPS_GM_C.Beginplay_SteamStats
struct AFPS_GM_C_Beginplay_SteamStats_Params
{
};

// Function FPS_GM.FPS_GM_C.OnRequestUserStats
struct AFPS_GM_C_OnRequestUserStats_Params
{
	bool                                               bSuccessful;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	UWorksCore_EUWorksResult                           Result;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUWorksSteamID                              SteamIDUser;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function FPS_GM.FPS_GM_C.GetStatsLoop
struct AFPS_GM_C_GetStatsLoop_Params
{
};

// Function FPS_GM.FPS_GM_C.ProcessGetStatsQueue
struct AFPS_GM_C_ProcessGetStatsQueue_Params
{
};

// Function FPS_GM.FPS_GM_C.UnpauseGetStats
struct AFPS_GM_C_UnpauseGetStats_Params
{
};

// Function FPS_GM.FPS_GM_C.PauseGetStats
struct AFPS_GM_C_PauseGetStats_Params
{
};

// Function FPS_GM.FPS_GM_C.UpdateLeaderboard
struct AFPS_GM_C_UpdateLeaderboard_Params
{
	struct FString                                     SteamID;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int                                                Score;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<EMatchType_EMatchType>                 matchType;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_GM.FPS_GM_C.OnRequestCompleted_SetLeaderboardScore
struct AFPS_GM_C_OnRequestCompleted_SetLeaderboardScore_Params
{
	class ULowEntryHttpRequestResponse*                Response;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_GM.FPS_GM_C.BeginplaySteamStatsBinding02_RequestGetStats
struct AFPS_GM_C_BeginplaySteamStatsBinding02_RequestGetStats_Params
{
};

// Function FPS_GM.FPS_GM_C.BeginplaySteamStatsBinding03_GetStatsQueueLoop
struct AFPS_GM_C_BeginplaySteamStatsBinding03_GetStatsQueueLoop_Params
{
};

// Function FPS_GM.FPS_GM_C.StoreStatsLoop
struct AFPS_GM_C_StoreStatsLoop_Params
{
};

// Function FPS_GM.FPS_GM_C.BeginplaySteamStatsBinding04_StoreStatsQueueLoop
struct AFPS_GM_C_BeginplaySteamStatsBinding04_StoreStatsQueueLoop_Params
{
};

// Function FPS_GM.FPS_GM_C.BeginplaySteamStatsBinding05_RequestStoreStats
struct AFPS_GM_C_BeginplaySteamStatsBinding05_RequestStoreStats_Params
{
};

// Function FPS_GM.FPS_GM_C.OnStoreStatsRequestCompleleted
struct AFPS_GM_C_OnStoreStatsRequestCompleleted_Params
{
	bool                                               bSuccessful;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	UWorksCore_EUWorksResult                           Result;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUWorksSteamID                              SteamIDUser;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function FPS_GM.FPS_GM_C.ProcessStoreStatsQueue
struct AFPS_GM_C_ProcessStoreStatsQueue_Params
{
};

// Function FPS_GM.FPS_GM_C.K2_PostLogin
struct AFPS_GM_C_K2_PostLogin_Params
{
	class APlayerController*                           NewPlayer;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_GM.FPS_GM_C.K2_OnLogout
struct AFPS_GM_C_K2_OnLogout_Params
{
	class AController*                                 ExitingController;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_GM.FPS_GM_C.ReceiveBeginPlay
struct AFPS_GM_C_ReceiveBeginPlay_Params
{
};

// Function FPS_GM.FPS_GM_C.GameCheck
struct AFPS_GM_C_GameCheck_Params
{
};

// Function FPS_GM.FPS_GM_C.EndGame?
struct AFPS_GM_C_EndGame__Params
{
	bool                                               isHunter_;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FPS_GM.FPS_GM_C.InitiateGame
struct AFPS_GM_C_InitiateGame_Params
{
};

// Function FPS_GM.FPS_GM_C.ResetLoopChecking
struct AFPS_GM_C_ResetLoopChecking_Params
{
};

// Function FPS_GM.FPS_GM_C.AcceptPlayerSessionID
struct AFPS_GM_C_AcceptPlayerSessionID_Params
{
	struct FString                                     playerSessionId;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function FPS_GM.FPS_GM_C.GameinitializationGraph_End
struct AFPS_GM_C_GameinitializationGraph_End_Params
{
};

// Function FPS_GM.FPS_GM_C.RequestGameStateInfo
struct AFPS_GM_C_RequestGameStateInfo_Params
{
	class AFPS_PC_C*                                   Player;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_GM.FPS_GM_C.InitVotekickTimer
struct AFPS_GM_C_InitVotekickTimer_Params
{
	int                                                Time;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFPS_PC_C*                                   ToKickPlayer;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     ToKickSteamID;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     ToKickPlayerUsername;                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function FPS_GM.FPS_GM_C.VotekickCountDown
struct AFPS_GM_C_VotekickCountDown_Params
{
};

// Function FPS_GM.FPS_GM_C.RocketLauncherExplosionEffect
struct AFPS_GM_C_RocketLauncherExplosionEffect_Params
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_GM.FPS_GM_C.GrenadeExplosionEffect
struct AFPS_GM_C_GrenadeExplosionEffect_Params
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_GM.FPS_GM_C.ExecuteUbergraph_FPS_GM
struct AFPS_GM_C_ExecuteUbergraph_FPS_GM_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_GM.FPS_GM_C.RetriveGameSessionInfo__DelegateSignature
struct AFPS_GM_C_RetriveGameSessionInfo__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
