// Name: pns, Version: 1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.Report
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<Ereport_Ereport>                       ReportType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FString                                     SteamID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void AFPS_GM_C::Report(TEnumAsByte<Ereport_Ereport> ReportType, const struct FString& SteamID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.Report");

	AFPS_GM_C_Report_Params params {};
	params.ReportType = ReportType;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.CheckFirstCompetitivePlay
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AFPS_PC_C*                                   Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_GM_C::CheckFirstCompetitivePlay(class AFPS_PC_C* Player)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.CheckFirstCompetitivePlay");

	AFPS_GM_C_CheckFirstCompetitivePlay_Params params {};
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.CheckMetalGateSurvivor
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AFPS_PC_C*                                   Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_GM_C::CheckMetalGateSurvivor(class AFPS_PC_C* Player)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.CheckMetalGateSurvivor");

	AFPS_GM_C_CheckMetalGateSurvivor_Params params {};
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.FinishingGoldExp
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AFPS_PC_C*                                   Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_GM_C::FinishingGoldExp(class AFPS_PC_C* Player)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.FinishingGoldExp");

	AFPS_GM_C_FinishingGoldExp_Params params {};
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.AddStat_DeductVotekickTicket
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     Steam_ID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		bool                                               Success_                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AFPS_GM_C::AddStat_DeductVotekickTicket(const struct FString& Steam_ID, bool* Success_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.AddStat_DeductVotekickTicket");

	AFPS_GM_C_AddStat_DeductVotekickTicket_Params params {};
	params.Steam_ID = Steam_ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success_ != nullptr)
		*Success_ = params.Success_;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.KillFeeds
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<class AFPS_Character2_C*>                   Killed                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
//		TArray<class AFPS_PC_C*>                           Destroyed                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void AFPS_GM_C::KillFeeds(TArray<class AFPS_Character2_C*>* Killed, TArray<class AFPS_PC_C*>* Destroyed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.KillFeeds");

	AFPS_GM_C_KillFeeds_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Killed != nullptr)
		*Killed = params.Killed;
	if (Destroyed != nullptr)
		*Destroyed = params.Destroyed;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.DisablePeek
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void AFPS_GM_C::DisablePeek()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.DisablePeek");

	AFPS_GM_C_DisablePeek_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.AddStat_PropLastManStanding
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     Steam_ID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void AFPS_GM_C::AddStat_PropLastManStanding(const struct FString& Steam_ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.AddStat_PropLastManStanding");

	AFPS_GM_C_AddStat_PropLastManStanding_Params params {};
	params.Steam_ID = Steam_ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.AddStat_Prop15kill
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     Steam_ID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void AFPS_GM_C::AddStat_Prop15kill(const struct FString& Steam_ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.AddStat_Prop15kill");

	AFPS_GM_C_AddStat_Prop15kill_Params params {};
	params.Steam_ID = Steam_ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.AddStat_PropKill
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     Steam_ID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void AFPS_GM_C::AddStat_PropKill(const struct FString& Steam_ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.AddStat_PropKill");

	AFPS_GM_C_AddStat_PropKill_Params params {};
	params.Steam_ID = Steam_ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.DeliverTauntSound
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                TauntSoundNumber                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AProp_C*                                     Prop                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_GM_C::DeliverTauntSound(int TauntSoundNumber, class AProp_C* Prop)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.DeliverTauntSound");

	AFPS_GM_C_DeliverTauntSound_Params params {};
	params.TauntSoundNumber = TauntSoundNumber;
	params.Prop = Prop;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.AddStat_PermanentBan
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     Steam_ID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void AFPS_GM_C::AddStat_PermanentBan(const struct FString& Steam_ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.AddStat_PermanentBan");

	AFPS_GM_C_AddStat_PermanentBan_Params params {};
	params.Steam_ID = Steam_ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.VoteKick
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AFPS_PC_C*                                   RequestedPlayer                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FString                                     VotekickPlayerSteamID                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     VotekickPlayerUsername                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void AFPS_GM_C::VoteKick(class AFPS_PC_C* RequestedPlayer, const struct FString& VotekickPlayerSteamID, const struct FString& VotekickPlayerUsername)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.VoteKick");

	AFPS_GM_C_VoteKick_Params params {};
	params.RequestedPlayer = RequestedPlayer;
	params.VotekickPlayerSteamID = VotekickPlayerSteamID;
	params.VotekickPlayerUsername = VotekickPlayerUsername;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.SyncHunterWaitTime
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void AFPS_GM_C::SyncHunterWaitTime()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.SyncHunterWaitTime");

	AFPS_GM_C_SyncHunterWaitTime_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.ProcessRequestedGameStateInfo
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void AFPS_GM_C::ProcessRequestedGameStateInfo()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.ProcessRequestedGameStateInfo");

	AFPS_GM_C_ProcessRequestedGameStateInfo_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.SearchPlayer
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     SteamID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		bool                                               Success_                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class AFPS_PC_C*                                   Player                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_GM_C::SearchPlayer(const struct FString& SteamID, bool* Success_, class AFPS_PC_C** Player)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.SearchPlayer");

	AFPS_GM_C_SearchPlayer_Params params {};
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success_ != nullptr)
		*Success_ = params.Success_;
	if (Player != nullptr)
		*Player = params.Player;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.AddToQueue_StoreStats
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     SteamID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void AFPS_GM_C::AddToQueue_StoreStats(const struct FString& SteamID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.AddToQueue_StoreStats");

	AFPS_GM_C_AddToQueue_StoreStats_Params params {};
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.SearchAndRemoveStoreStatsQueue
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     SteamID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void AFPS_GM_C::SearchAndRemoveStoreStatsQueue(const struct FString& SteamID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.SearchAndRemoveStoreStatsQueue");

	AFPS_GM_C_SearchAndRemoveStoreStatsQueue_Params params {};
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.EarlyLeaverGoldCoinPenalty
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     Steam_ID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		int                                                DeductionGoldCoinAmount                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_GM_C::EarlyLeaverGoldCoinPenalty(const struct FString& Steam_ID, int DeductionGoldCoinAmount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.EarlyLeaverGoldCoinPenalty");

	AFPS_GM_C_EarlyLeaverGoldCoinPenalty_Params params {};
	params.Steam_ID = Steam_ID;
	params.DeductionGoldCoinAmount = DeductionGoldCoinAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.AddStat_PointsThumbsUp
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FSCashItemsGameInfo                         BattlePassType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AFPS_PC_C*                                   Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_GM_C::AddStat_PointsThumbsUp(const struct FSCashItemsGameInfo& BattlePassType, class AFPS_PC_C* Player)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.AddStat_PointsThumbsUp");

	AFPS_GM_C_AddStat_PointsThumbsUp_Params params {};
	params.BattlePassType = BattlePassType;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.DeleteAllPlayersToEndGame
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void AFPS_GM_C::DeleteAllPlayersToEndGame()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.DeleteAllPlayersToEndGame");

	AFPS_GM_C_DeleteAllPlayersToEndGame_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.AddStat_DeductSTokens
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     Steam_ID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		int                                                DeductionSTokensAmount                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Success_                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AFPS_GM_C::AddStat_DeductSTokens(const struct FString& Steam_ID, int DeductionSTokensAmount, bool* Success_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.AddStat_DeductSTokens");

	AFPS_GM_C_AddStat_DeductSTokens_Params params {};
	params.Steam_ID = Steam_ID;
	params.DeductionSTokensAmount = DeductionSTokensAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success_ != nullptr)
		*Success_ = params.Success_;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.AddStat_DeductGoldCoins
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     Steam_ID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		int                                                DeductionGoldCoinAmount                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Success_                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AFPS_GM_C::AddStat_DeductGoldCoins(const struct FString& Steam_ID, int DeductionGoldCoinAmount, bool* Success_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.AddStat_DeductGoldCoins");

	AFPS_GM_C_AddStat_DeductGoldCoins_Params params {};
	params.Steam_ID = Steam_ID;
	params.DeductionGoldCoinAmount = DeductionGoldCoinAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success_ != nullptr)
		*Success_ = params.Success_;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.Competitive_Score
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     Steam_ID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		int                                                Score                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_GM_C::Competitive_Score(const struct FString& Steam_ID, int Score)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.Competitive_Score");

	AFPS_GM_C_Competitive_Score_Params params {};
	params.Steam_ID = Steam_ID;
	params.Score = Score;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.AddStat_ExpPoints_HunterKill
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FSCashItemsGameInfo                         BattlePassType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AFPS_PC_C*                                   Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_GM_C::AddStat_ExpPoints_HunterKill(const struct FSCashItemsGameInfo& BattlePassType, class AFPS_PC_C* Player)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.AddStat_ExpPoints_HunterKill");

	AFPS_GM_C_AddStat_ExpPoints_HunterKill_Params params {};
	params.BattlePassType = BattlePassType;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.AddStat_ExpPoints_PropSurvival
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FSCashItemsGameInfo                         BattlePassType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AFPS_PC_C*                                   Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_GM_C::AddStat_ExpPoints_PropSurvival(const struct FSCashItemsGameInfo& BattlePassType, class AFPS_PC_C* Player)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.AddStat_ExpPoints_PropSurvival");

	AFPS_GM_C_AddStat_ExpPoints_PropSurvival_Params params {};
	params.BattlePassType = BattlePassType;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.AddStat_ExpPoints_RoundLose
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FSCashItemsGameInfo                         BattlePassType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AFPS_PC_C*                                   Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_GM_C::AddStat_ExpPoints_RoundLose(const struct FSCashItemsGameInfo& BattlePassType, class AFPS_PC_C* Player)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.AddStat_ExpPoints_RoundLose");

	AFPS_GM_C_AddStat_ExpPoints_RoundLose_Params params {};
	params.BattlePassType = BattlePassType;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.AddStat_ExpPoints_RoundWin
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FSCashItemsGameInfo                         BattlePassType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AFPS_PC_C*                                   Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_GM_C::AddStat_ExpPoints_RoundWin(const struct FSCashItemsGameInfo& BattlePassType, class AFPS_PC_C* Player)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.AddStat_ExpPoints_RoundWin");

	AFPS_GM_C_AddStat_ExpPoints_RoundWin_Params params {};
	params.BattlePassType = BattlePassType;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.DeleteExitingPlayerQueue
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     SteamID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void AFPS_GM_C::DeleteExitingPlayerQueue(const struct FString& SteamID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.DeleteExitingPlayerQueue");

	AFPS_GM_C_DeleteExitingPlayerQueue_Params params {};
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.AddExp
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AFPS_PC_C*                                   PC                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                ExpAmount                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_GM_C::AddExp(class AFPS_PC_C* PC, int ExpAmount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.AddExp");

	AFPS_GM_C_AddExp_Params params {};
	params.PC = PC;
	params.ExpAmount = ExpAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.DestroyAllActorsOfPlayer
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AFPS_PC_C*                                   PC                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_GM_C::DestroyAllActorsOfPlayer(class AFPS_PC_C* PC)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.DestroyAllActorsOfPlayer");

	AFPS_GM_C_DestroyAllActorsOfPlayer_Params params {};
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.AddStat_AddGoldenThumbs
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     Steam_ID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void AFPS_GM_C::AddStat_AddGoldenThumbs(const struct FString& Steam_ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.AddStat_AddGoldenThumbs");

	AFPS_GM_C_AddStat_AddGoldenThumbs_Params params {};
	params.Steam_ID = Steam_ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.AddStat_AddThumbs
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     Steam_ID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void AFPS_GM_C::AddStat_AddThumbs(const struct FString& Steam_ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.AddStat_AddThumbs");

	AFPS_GM_C_AddStat_AddThumbs_Params params {};
	params.Steam_ID = Steam_ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.CheckToEndGame
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               EndThisGameNow_                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AFPS_GM_C::CheckToEndGame(bool* EndThisGameNow_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.CheckToEndGame");

	AFPS_GM_C_CheckToEndGame_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (EndThisGameNow_ != nullptr)
		*EndThisGameNow_ = params.EndThisGameNow_;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.CheckHuntersPropsExist
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void AFPS_GM_C::CheckHuntersPropsExist()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.CheckHuntersPropsExist");

	AFPS_GM_C_CheckHuntersPropsExist_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.AddStat_RankingInOrOut?
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     Steam_ID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		bool                                               In_                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AFPS_GM_C::AddStat_RankingInOrOut_(const struct FString& Steam_ID, bool In_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.AddStat_RankingInOrOut?");

	AFPS_GM_C_AddStat_RankingInOrOut__Params params {};
	params.Steam_ID = Steam_ID;
	params.In_ = In_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.GetLeaderboardRanking
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FString                                     Content                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		int                                                Score                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               SetRankingIn_                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               SetRankingOut_                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		int                                                NewRanking                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_GM_C::GetLeaderboardRanking(const struct FString& Content, int Score, bool* SetRankingIn_, bool* SetRankingOut_, int* NewRanking)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.GetLeaderboardRanking");

	AFPS_GM_C_GetLeaderboardRanking_Params params {};
	params.Content = Content;
	params.Score = Score;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SetRankingIn_ != nullptr)
		*SetRankingIn_ = params.SetRankingIn_;
	if (SetRankingOut_ != nullptr)
		*SetRankingOut_ = params.SetRankingOut_;
	if (NewRanking != nullptr)
		*NewRanking = params.NewRanking;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.SetLeaderboard
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     InputSteamID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     InputLeaderboardID                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		int                                                InputScore                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class ULowEntryHttpRequest*                        RequestHttpObject                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_GM_C::SetLeaderboard(const struct FString& InputSteamID, const struct FString& InputLeaderboardID, int InputScore, class ULowEntryHttpRequest** RequestHttpObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.SetLeaderboard");

	AFPS_GM_C_SetLeaderboard_Params params {};
	params.InputSteamID = InputSteamID;
	params.InputLeaderboardID = InputLeaderboardID;
	params.InputScore = InputScore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RequestHttpObject != nullptr)
		*RequestHttpObject = params.RequestHttpObject;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.Mute_Ambience
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void AFPS_GM_C::Mute_Ambience()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.Mute_Ambience");

	AFPS_GM_C_Mute_Ambience_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.Mute_OnFireMusic
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void AFPS_GM_C::Mute_OnFireMusic()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.Mute_OnFireMusic");

	AFPS_GM_C_Mute_OnFireMusic_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.Mute_StartMusic
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void AFPS_GM_C::Mute_StartMusic()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.Mute_StartMusic");

	AFPS_GM_C_Mute_StartMusic_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.DebugCheck
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void AFPS_GM_C::DebugCheck()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.DebugCheck");

	AFPS_GM_C_DebugCheck_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.InvalidateAllTimers
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void AFPS_GM_C::InvalidateAllTimers()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.InvalidateAllTimers");

	AFPS_GM_C_InvalidateAllTimers_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.SearchPlayer_Finalscore
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FString                                     Steam_ID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		int                                                CompetitiveScoreOfTheMatch                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_GM_C::SearchPlayer_Finalscore(const struct FString& Steam_ID, int* CompetitiveScoreOfTheMatch)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.SearchPlayer_Finalscore");

	AFPS_GM_C_SearchPlayer_Finalscore_Params params {};
	params.Steam_ID = Steam_ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CompetitiveScoreOfTheMatch != nullptr)
		*CompetitiveScoreOfTheMatch = params.CompetitiveScoreOfTheMatch;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.SetInGameScore
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     Steam_ID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		TEnumAsByte<ESteamStats_ESteamStats>               WhichOne_                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AFPS_PC_C*                                   Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_GM_C::SetInGameScore(const struct FString& Steam_ID, TEnumAsByte<ESteamStats_ESteamStats> WhichOne_, class AFPS_PC_C* Player)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.SetInGameScore");

	AFPS_GM_C_SetInGameScore_Params params {};
	params.Steam_ID = Steam_ID;
	params.WhichOne_ = WhichOne_;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.Custom_Lose
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     Steam_ID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void AFPS_GM_C::Custom_Lose(const struct FString& Steam_ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.Custom_Lose");

	AFPS_GM_C_Custom_Lose_Params params {};
	params.Steam_ID = Steam_ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.Custom_Win
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     Steam_ID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void AFPS_GM_C::Custom_Win(const struct FString& Steam_ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.Custom_Win");

	AFPS_GM_C_Custom_Win_Params params {};
	params.Steam_ID = Steam_ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.EarlyLeaverPenalty
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     SteamID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void AFPS_GM_C::EarlyLeaverPenalty(const struct FString& SteamID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.EarlyLeaverPenalty");

	AFPS_GM_C_EarlyLeaverPenalty_Params params {};
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.SyncPlayerStatHistory
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     SteamID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     userName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		class AFPS_PC_C*                                   Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_GM_C::SyncPlayerStatHistory(const struct FString& SteamID, const struct FString& userName, class AFPS_PC_C* Player)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.SyncPlayerStatHistory");

	AFPS_GM_C_SyncPlayerStatHistory_Params params {};
	params.SteamID = SteamID;
	params.userName = userName;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.AddToQueue_GetStats
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     SteamID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		TEnumAsByte<EWhichWorkGame_EWhichWorkGame>         Work                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AFPS_PC_C*                                   Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_GM_C::AddToQueue_GetStats(const struct FString& SteamID, TEnumAsByte<EWhichWorkGame_EWhichWorkGame> Work, class AFPS_PC_C* Player)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.AddToQueue_GetStats");

	AFPS_GM_C_AddToQueue_GetStats_Params params {};
	params.SteamID = SteamID;
	params.Work = Work;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.RemovePlayerFromQueue_GetStats
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     SteamID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		TEnumAsByte<EWhichWorkGame_EWhichWorkGame>         Work                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Success_                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FString                                     Output_SteamID                                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
//		class AFPS_PC_C*                                   Output_Player                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_GM_C::RemovePlayerFromQueue_GetStats(const struct FString& SteamID, TEnumAsByte<EWhichWorkGame_EWhichWorkGame>* Work, bool* Success_, struct FString* Output_SteamID, class AFPS_PC_C** Output_Player)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.RemovePlayerFromQueue_GetStats");

	AFPS_GM_C_RemovePlayerFromQueue_GetStats_Params params {};
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Work != nullptr)
		*Work = params.Work;
	if (Success_ != nullptr)
		*Success_ = params.Success_;
	if (Output_SteamID != nullptr)
		*Output_SteamID = params.Output_SteamID;
	if (Output_Player != nullptr)
		*Output_Player = params.Output_Player;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.IncrementStat_WhichOne?
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     Steam_ID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		TEnumAsByte<ESteamStats_ESteamStats>               WhichOne_                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_GM_C::IncrementStat_WhichOne_(const struct FString& Steam_ID, TEnumAsByte<ESteamStats_ESteamStats> WhichOne_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.IncrementStat_WhichOne?");

	AFPS_GM_C_IncrementStat_WhichOne__Params params {};
	params.Steam_ID = Steam_ID;
	params.WhichOne_ = WhichOne_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.AddStat_HunterDeath
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     Steam_ID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void AFPS_GM_C::AddStat_HunterDeath(const struct FString& Steam_ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.AddStat_HunterDeath");

	AFPS_GM_C_AddStat_HunterDeath_Params params {};
	params.Steam_ID = Steam_ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.AddStat_HunterKill
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     Steam_ID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void AFPS_GM_C::AddStat_HunterKill(const struct FString& Steam_ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.AddStat_HunterKill");

	AFPS_GM_C_AddStat_HunterKill_Params params {};
	params.Steam_ID = Steam_ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.AddStat_HunterLose
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     Steam_ID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void AFPS_GM_C::AddStat_HunterLose(const struct FString& Steam_ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.AddStat_HunterLose");

	AFPS_GM_C_AddStat_HunterLose_Params params {};
	params.Steam_ID = Steam_ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.AddStat_HunterWin
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     Steam_ID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void AFPS_GM_C::AddStat_HunterWin(const struct FString& Steam_ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.AddStat_HunterWin");

	AFPS_GM_C_AddStat_HunterWin_Params params {};
	params.Steam_ID = Steam_ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.AddStat_PropDeath
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     Steam_ID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void AFPS_GM_C::AddStat_PropDeath(const struct FString& Steam_ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.AddStat_PropDeath");

	AFPS_GM_C_AddStat_PropDeath_Params params {};
	params.Steam_ID = Steam_ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.AddStat_PropSurvival
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     Steam_ID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void AFPS_GM_C::AddStat_PropSurvival(const struct FString& Steam_ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.AddStat_PropSurvival");

	AFPS_GM_C_AddStat_PropSurvival_Params params {};
	params.Steam_ID = Steam_ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.AddStat_PropLose
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     Steam_ID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void AFPS_GM_C::AddStat_PropLose(const struct FString& Steam_ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.AddStat_PropLose");

	AFPS_GM_C_AddStat_PropLose_Params params {};
	params.Steam_ID = Steam_ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.AddStat_PropWin
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     Steam_ID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void AFPS_GM_C::AddStat_PropWin(const struct FString& Steam_ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.AddStat_PropWin");

	AFPS_GM_C_AddStat_PropWin_Params params {};
	params.Steam_ID = Steam_ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.CheckIfPlayersExist
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void AFPS_GM_C::CheckIfPlayersExist()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.CheckIfPlayersExist");

	AFPS_GM_C_CheckIfPlayersExist_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.GI
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UGI2_C*                                      AsGI2                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_GM_C::GI(class UGI2_C** AsGI2)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.GI");

	AFPS_GM_C_GI_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsGI2 != nullptr)
		*AsGI2 = params.AsGI2;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.StartBurningTime
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void AFPS_GM_C::StartBurningTime()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.StartBurningTime");

	AFPS_GM_C_StartBurningTime_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.KillFeedSelf
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     DestroyedPlayerUsername                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void AFPS_GM_C::KillFeedSelf(const struct FString& DestroyedPlayerUsername)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.KillFeedSelf");

	AFPS_GM_C_KillFeedSelf_Params params {};
	params.DestroyedPlayerUsername = DestroyedPlayerUsername;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.KillFeed
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AFPS_Character2_C*                           Killed                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AFPS_PC_C*                                   Destroyed                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_GM_C::KillFeed(class AFPS_Character2_C* Killed, class AFPS_PC_C* Destroyed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.KillFeed");

	AFPS_GM_C_KillFeed_Params params {};
	params.Killed = Killed;
	params.Destroyed = Destroyed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.CompetitiveScoreConverter
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		int                                                Ranking                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Win_                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		int                                                Score                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_GM_C::CompetitiveScoreConverter(int Ranking, bool* Win_, int* Score)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.CompetitiveScoreConverter");

	AFPS_GM_C_CompetitiveScoreConverter_Params params {};
	params.Ranking = Ranking;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Win_ != nullptr)
		*Win_ = params.Win_;
	if (Score != nullptr)
		*Score = params.Score;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.CompetitiveEndingProcess
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void AFPS_GM_C::CompetitiveEndingProcess()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.CompetitiveEndingProcess");

	AFPS_GM_C_CompetitiveEndingProcess_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.CompetitiveDeployingRankings
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void AFPS_GM_C::CompetitiveDeployingRankings()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.CompetitiveDeployingRankings");

	AFPS_GM_C_CompetitiveDeployingRankings_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.AllDataScoreConverter
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		int                                                PropWin                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                PropLose                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                PropSurvival                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                PropDeath                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                HunterWin                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                HunterLose                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                HunterKill                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                HunterDeath                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                TotalScore                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_GM_C::AllDataScoreConverter(int PropWin, int PropLose, int PropSurvival, int PropDeath, int HunterWin, int HunterLose, int HunterKill, int HunterDeath, int* TotalScore)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.AllDataScoreConverter");

	AFPS_GM_C_AllDataScoreConverter_Params params {};
	params.PropWin = PropWin;
	params.PropLose = PropLose;
	params.PropSurvival = PropSurvival;
	params.PropDeath = PropDeath;
	params.HunterWin = HunterWin;
	params.HunterLose = HunterLose;
	params.HunterKill = HunterKill;
	params.HunterDeath = HunterDeath;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TotalScore != nullptr)
		*TotalScore = params.TotalScore;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.CompetitiveCalculatingFinalScore
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void AFPS_GM_C::CompetitiveCalculatingFinalScore()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.CompetitiveCalculatingFinalScore");

	AFPS_GM_C_CompetitiveCalculatingFinalScore_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.HunterNumber
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		int                                                HunterNumber                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_GM_C::HunterNumber(int* HunterNumber)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.HunterNumber");

	AFPS_GM_C_HunterNumber_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HunterNumber != nullptr)
		*HunterNumber = params.HunterNumber;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.InitiatePlayers
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Done_                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AFPS_GM_C::InitiatePlayers(bool* Done_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.InitiatePlayers");

	AFPS_GM_C_InitiatePlayers_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Done_ != nullptr)
		*Done_ = params.Done_;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.PS
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class APlayerController*                           FPS_PC                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AFPS_PS_C*                                   AsFPS_PS                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_GM_C::PS(class APlayerController* FPS_PC, class AFPS_PS_C** AsFPS_PS)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.PS");

	AFPS_GM_C_PS_Params params {};
	params.FPS_PC = FPS_PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsFPS_PS != nullptr)
		*AsFPS_PS = params.AsFPS_PS;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.PropSelection
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               _2nd_                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AFPS_GM_C::PropSelection(bool _2nd_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.PropSelection");

	AFPS_GM_C_PropSelection_Params params {};
	params._2nd_ = _2nd_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.SetTwoSpawnAreas
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AFPS_GM_C::SetTwoSpawnAreas()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.SetTwoSpawnAreas");

	AFPS_GM_C_SetTwoSpawnAreas_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.SendFinalResults
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void AFPS_GM_C::SendFinalResults()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.SendFinalResults");

	AFPS_GM_C_SendFinalResults_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.EndGameSession
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void AFPS_GM_C::EndGameSession()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.EndGameSession");

	AFPS_GM_C_EndGameSession_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.CheckEndGameHunter
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               EndGame_                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AFPS_GM_C::CheckEndGameHunter(bool* EndGame_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.CheckEndGameHunter");

	AFPS_GM_C_CheckEndGameHunter_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (EndGame_ != nullptr)
		*EndGame_ = params.EndGame_;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.CheckEndGameProp
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               EndGame_                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AFPS_GM_C::CheckEndGameProp(bool* EndGame_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.CheckEndGameProp");

	AFPS_GM_C_CheckEndGameProp_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (EndGame_ != nullptr)
		*EndGame_ = params.EndGame_;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.UpdatePlayerState(WinLoseNoti)
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               PropWin_                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AFPS_GM_C::UpdatePlayerState_WinLoseNoti_(bool PropWin_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.UpdatePlayerState(WinLoseNoti)");

	AFPS_GM_C_UpdatePlayerState_WinLoseNoti__Params params {};
	params.PropWin_ = PropWin_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.SendChatToClients
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     userName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FText                                       Message                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
//		TEnumAsByte<EChatMode_EChatMode>                   ChatMode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AFPS_PC_C*                                   Initiater                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FSlateColor                                 TextColor                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
void AFPS_GM_C::SendChatToClients(const struct FString& userName, const struct FText& Message, TEnumAsByte<EChatMode_EChatMode> ChatMode, class AFPS_PC_C* Initiater, const struct FSlateColor& TextColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.SendChatToClients");

	AFPS_GM_C_SendChatToClients_Params params {};
	params.userName = userName;
	params.Message = Message;
	params.ChatMode = ChatMode;
	params.Initiater = Initiater;
	params.TextColor = TextColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.WhichSideWin?
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               PropWin_                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AFPS_GM_C::WhichSideWin_(bool PropWin_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.WhichSideWin?");

	AFPS_GM_C_WhichSideWin__Params params {};
	params.PropWin_ = PropWin_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.PlayerArray
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		TArray<class APlayerState*>                        PlayerArray                                                (Parm, OutParm, ZeroConstructor)
void AFPS_GM_C::PlayerArray(TArray<class APlayerState*>* PlayerArray)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.PlayerArray");

	AFPS_GM_C_PlayerArray_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayerArray != nullptr)
		*PlayerArray = params.PlayerArray;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.SetHunters
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<class AFPS_PC_C*>                           ChangedPlayers                                             (Parm, OutParm, ZeroConstructor)
void AFPS_GM_C::SetHunters(TArray<class AFPS_PC_C*>* ChangedPlayers)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.SetHunters");

	AFPS_GM_C_SetHunters_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ChangedPlayers != nullptr)
		*ChangedPlayers = params.ChangedPlayers;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.CountUp_LoopNumber
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               FinishThisGame_                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AFPS_GM_C::CountUp_LoopNumber(bool* FinishThisGame_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.CountUp_LoopNumber");

	AFPS_GM_C_CountUp_LoopNumber_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FinishThisGame_ != nullptr)
		*FinishThisGame_ = params.FinishThisGame_;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.CountDown_WaitNextRoundTime
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Reached_0_                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AFPS_GM_C::CountDown_WaitNextRoundTime(bool* Reached_0_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.CountDown_WaitNextRoundTime");

	AFPS_GM_C_CountDown_WaitNextRoundTime_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Reached_0_ != nullptr)
		*Reached_0_ = params.Reached_0_;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.ResetAllTimer
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void AFPS_GM_C::ResetAllTimer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.ResetAllTimer");

	AFPS_GM_C_ResetAllTimer_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.UpdatePlayerState(WinLose)
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void AFPS_GM_C::UpdatePlayerState_WinLose_()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.UpdatePlayerState(WinLose)");

	AFPS_GM_C_UpdatePlayerState_WinLose__Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.UpdatePlayerState(Scoreboard)
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     GonePlayerSteamID                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void AFPS_GM_C::UpdatePlayerState_Scoreboard_(const struct FString& GonePlayerSteamID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.UpdatePlayerState(Scoreboard)");

	AFPS_GM_C_UpdatePlayerState_Scoreboard__Params params {};
	params.GonePlayerSteamID = GonePlayerSteamID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.CountDown_PlayTime
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void AFPS_GM_C::CountDown_PlayTime()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.CountDown_PlayTime");

	AFPS_GM_C_CountDown_PlayTime_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.CountDown_WaitTime
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Reached_0_                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AFPS_GM_C::CountDown_WaitTime(bool* Reached_0_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.CountDown_WaitTime");

	AFPS_GM_C_CountDown_WaitTime_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Reached_0_ != nullptr)
		*Reached_0_ = params.Reached_0_;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.GameUpdatePlayers
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                CurrentPlayers                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_GM_C::GameUpdatePlayers(int CurrentPlayers)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.GameUpdatePlayers");

	AFPS_GM_C_GameUpdatePlayers_Params params {};
	params.CurrentPlayers = CurrentPlayers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.GameUpdateRounds
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                CurrentRound                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_GM_C::GameUpdateRounds(int CurrentRound)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.GameUpdateRounds");

	AFPS_GM_C_GameUpdateRounds_Params params {};
	params.CurrentRound = CurrentRound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.GameUpdateStatus
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     CurrentStatus                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void AFPS_GM_C::GameUpdateStatus(const struct FString& CurrentStatus)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.GameUpdateStatus");

	AFPS_GM_C_GameUpdateStatus_Params params {};
	params.CurrentStatus = CurrentStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.UpdateGameSessionData
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AFPS_GM_C::UpdateGameSessionData()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.UpdateGameSessionData");

	AFPS_GM_C_UpdateGameSessionData_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.GameUpdateDeletion
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AFPS_GM_C::GameUpdateDeletion()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.GameUpdateDeletion");

	AFPS_GM_C_GameUpdateDeletion_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.RegisterBannedPlayer
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     BannePlayerSteamID                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void AFPS_GM_C::RegisterBannedPlayer(const struct FString& BannePlayerSteamID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.RegisterBannedPlayer");

	AFPS_GM_C_RegisterBannedPlayer_Params params {};
	params.BannePlayerSteamID = BannePlayerSteamID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.ActionByPlaytime_Event
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AFPS_GM_C::ActionByPlaytime_Event()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.ActionByPlaytime_Event");

	AFPS_GM_C_ActionByPlaytime_Event_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.ResetInitHunterWait
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AFPS_GM_C::ResetInitHunterWait()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.ResetInitHunterWait");

	AFPS_GM_C_ResetInitHunterWait_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.GameInitializationGraph_Start
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AFPS_GM_C::GameInitializationGraph_Start()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.GameInitializationGraph_Start");

	AFPS_GM_C_GameInitializationGraph_Start_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.Beginplay_SteamStats
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AFPS_GM_C::Beginplay_SteamStats()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.Beginplay_SteamStats");

	AFPS_GM_C_Beginplay_SteamStats_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.OnRequestUserStats
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bSuccessful                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		UWorksCore_EUWorksResult                           Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FUWorksSteamID                              SteamIDUser                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void AFPS_GM_C::OnRequestUserStats(bool bSuccessful, UWorksCore_EUWorksResult Result, const struct FUWorksSteamID& SteamIDUser)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.OnRequestUserStats");

	AFPS_GM_C_OnRequestUserStats_Params params {};
	params.bSuccessful = bSuccessful;
	params.Result = Result;
	params.SteamIDUser = SteamIDUser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.GetStatsLoop
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AFPS_GM_C::GetStatsLoop()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.GetStatsLoop");

	AFPS_GM_C_GetStatsLoop_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.ProcessGetStatsQueue
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AFPS_GM_C::ProcessGetStatsQueue()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.ProcessGetStatsQueue");

	AFPS_GM_C_ProcessGetStatsQueue_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.UnpauseGetStats
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AFPS_GM_C::UnpauseGetStats()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.UnpauseGetStats");

	AFPS_GM_C_UnpauseGetStats_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.PauseGetStats
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AFPS_GM_C::PauseGetStats()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.PauseGetStats");

	AFPS_GM_C_PauseGetStats_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.UpdateLeaderboard
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     SteamID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		int                                                Score                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<EMatchType_EMatchType>                 matchType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_GM_C::UpdateLeaderboard(const struct FString& SteamID, int Score, TEnumAsByte<EMatchType_EMatchType> matchType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.UpdateLeaderboard");

	AFPS_GM_C_UpdateLeaderboard_Params params {};
	params.SteamID = SteamID;
	params.Score = Score;
	params.matchType = matchType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.OnRequestCompleted_SetLeaderboardScore
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ULowEntryHttpRequestResponse*                Response                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_GM_C::OnRequestCompleted_SetLeaderboardScore(class ULowEntryHttpRequestResponse* Response)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.OnRequestCompleted_SetLeaderboardScore");

	AFPS_GM_C_OnRequestCompleted_SetLeaderboardScore_Params params {};
	params.Response = Response;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.BeginplaySteamStatsBinding02_RequestGetStats
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AFPS_GM_C::BeginplaySteamStatsBinding02_RequestGetStats()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.BeginplaySteamStatsBinding02_RequestGetStats");

	AFPS_GM_C_BeginplaySteamStatsBinding02_RequestGetStats_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.BeginplaySteamStatsBinding03_GetStatsQueueLoop
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AFPS_GM_C::BeginplaySteamStatsBinding03_GetStatsQueueLoop()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.BeginplaySteamStatsBinding03_GetStatsQueueLoop");

	AFPS_GM_C_BeginplaySteamStatsBinding03_GetStatsQueueLoop_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.StoreStatsLoop
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AFPS_GM_C::StoreStatsLoop()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.StoreStatsLoop");

	AFPS_GM_C_StoreStatsLoop_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.BeginplaySteamStatsBinding04_StoreStatsQueueLoop
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AFPS_GM_C::BeginplaySteamStatsBinding04_StoreStatsQueueLoop()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.BeginplaySteamStatsBinding04_StoreStatsQueueLoop");

	AFPS_GM_C_BeginplaySteamStatsBinding04_StoreStatsQueueLoop_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.BeginplaySteamStatsBinding05_RequestStoreStats
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AFPS_GM_C::BeginplaySteamStatsBinding05_RequestStoreStats()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.BeginplaySteamStatsBinding05_RequestStoreStats");

	AFPS_GM_C_BeginplaySteamStatsBinding05_RequestStoreStats_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.OnStoreStatsRequestCompleleted
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bSuccessful                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		UWorksCore_EUWorksResult                           Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FUWorksSteamID                              SteamIDUser                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void AFPS_GM_C::OnStoreStatsRequestCompleleted(bool bSuccessful, UWorksCore_EUWorksResult Result, const struct FUWorksSteamID& SteamIDUser)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.OnStoreStatsRequestCompleleted");

	AFPS_GM_C_OnStoreStatsRequestCompleleted_Params params {};
	params.bSuccessful = bSuccessful;
	params.Result = Result;
	params.SteamIDUser = SteamIDUser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.ProcessStoreStatsQueue
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AFPS_GM_C::ProcessStoreStatsQueue()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.ProcessStoreStatsQueue");

	AFPS_GM_C_ProcessStoreStatsQueue_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.K2_PostLogin
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class APlayerController*                           NewPlayer                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_GM_C::K2_PostLogin(class APlayerController* NewPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.K2_PostLogin");

	AFPS_GM_C_K2_PostLogin_Params params {};
	params.NewPlayer = NewPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.K2_OnLogout
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class AController*                                 ExitingController                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_GM_C::K2_OnLogout(class AController* ExitingController)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.K2_OnLogout");

	AFPS_GM_C_K2_OnLogout_Params params {};
	params.ExitingController = ExitingController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void AFPS_GM_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.ReceiveBeginPlay");

	AFPS_GM_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.GameCheck
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AFPS_GM_C::GameCheck()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.GameCheck");

	AFPS_GM_C_GameCheck_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.EndGame?
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               isHunter_                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AFPS_GM_C::EndGame_(bool isHunter_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.EndGame?");

	AFPS_GM_C_EndGame__Params params {};
	params.isHunter_ = isHunter_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.InitiateGame
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AFPS_GM_C::InitiateGame()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.InitiateGame");

	AFPS_GM_C_InitiateGame_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.ResetLoopChecking
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AFPS_GM_C::ResetLoopChecking()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.ResetLoopChecking");

	AFPS_GM_C_ResetLoopChecking_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.AcceptPlayerSessionID
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     playerSessionId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void AFPS_GM_C::AcceptPlayerSessionID(const struct FString& playerSessionId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.AcceptPlayerSessionID");

	AFPS_GM_C_AcceptPlayerSessionID_Params params {};
	params.playerSessionId = playerSessionId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.GameinitializationGraph_End
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AFPS_GM_C::GameinitializationGraph_End()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.GameinitializationGraph_End");

	AFPS_GM_C_GameinitializationGraph_End_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.RequestGameStateInfo
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AFPS_PC_C*                                   Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_GM_C::RequestGameStateInfo(class AFPS_PC_C* Player)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.RequestGameStateInfo");

	AFPS_GM_C_RequestGameStateInfo_Params params {};
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.InitVotekickTimer
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AFPS_PC_C*                                   ToKickPlayer                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FString                                     ToKickSteamID                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     ToKickPlayerUsername                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void AFPS_GM_C::InitVotekickTimer(int Time, class AFPS_PC_C* ToKickPlayer, const struct FString& ToKickSteamID, const struct FString& ToKickPlayerUsername)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.InitVotekickTimer");

	AFPS_GM_C_InitVotekickTimer_Params params {};
	params.Time = Time;
	params.ToKickPlayer = ToKickPlayer;
	params.ToKickSteamID = ToKickSteamID;
	params.ToKickPlayerUsername = ToKickPlayerUsername;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.VotekickCountDown
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AFPS_GM_C::VotekickCountDown()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.VotekickCountDown");

	AFPS_GM_C_VotekickCountDown_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.RocketLauncherExplosionEffect
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_GM_C::RocketLauncherExplosionEffect(const struct FVector& Location)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.RocketLauncherExplosionEffect");

	AFPS_GM_C_RocketLauncherExplosionEffect_Params params {};
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.GrenadeExplosionEffect
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_GM_C::GrenadeExplosionEffect(const struct FVector& Location)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.GrenadeExplosionEffect");

	AFPS_GM_C_GrenadeExplosionEffect_Params params {};
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.ExecuteUbergraph_FPS_GM
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_GM_C::ExecuteUbergraph_FPS_GM(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.ExecuteUbergraph_FPS_GM");

	AFPS_GM_C_ExecuteUbergraph_FPS_GM_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_GM.FPS_GM_C.RetriveGameSessionInfo__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void AFPS_GM_C::RetriveGameSessionInfo__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_GM.FPS_GM_C.RetriveGameSessionInfo__DelegateSignature");

	AFPS_GM_C_RetriveGameSessionInfo__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
