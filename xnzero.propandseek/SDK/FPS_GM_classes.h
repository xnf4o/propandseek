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

// BlueprintGeneratedClass FPS_GM.FPS_GM_C
// 0x0288 (FullSize[0x0658] - InheritedSize[0x03D0])
class AFPS_GM_C : public AGameModeBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<EGameState_EGameState>                 EGameState;                                                // 0x03E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_0MUL[0x3];                                     // 0x03E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                NumberOfCurrentPlayers;                                    // 0x03E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AFPS_PC_C*>                           CurrentPlayers;                                            // 0x03E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	int                                                WaitTime;                                                  // 0x03F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                PlayTime;                                                  // 0x03FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Sec;                                                       // 0x0400(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                HunterWaitTime;                                            // 0x0404(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                WaitTimeDecrement_NoReset_;                                // 0x0408(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NextRoundWaitTime;                                         // 0x040C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NextRoundWaitTimeDecrement;                                // 0x0410(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                PlayTimeDecrement;                                         // 0x0414(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CurrentRound_NoReset_;                                     // 0x0418(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                _1_IsHunterSync;                                           // 0x041C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                PropWin;                                                   // 0x0420(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                HunterWin;                                                 // 0x0424(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    RetriveGameSessionInfo;                                    // 0x0428(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               Started_;                                                  // 0x0438(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_JFAC[0x7];                                     // 0x0439(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FTransform>                          PropStartLocations;                                        // 0x0440(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FTransform>                          HunterStartLocations;                                      // 0x0450(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                AutoTerminator;                                            // 0x0460(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_B75T[0x4];                                     // 0x0464(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                WidgetReadyHandler;                                        // 0x0468(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<struct FPlayerInfoGame>                     FinalPlayerScores;                                         // 0x0470(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               AmazonGameliftReady_;                                      // 0x0480(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_SRPM[0x7];                                     // 0x0481(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<int>                                        PlayerFinalScores;                                         // 0x0488(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FDateTime                                   WaitStartTime;                                             // 0x0498(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int                                                BurningTime;                                               // 0x04A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               BurningTime_;                                              // 0x04A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_8UMI[0x3];                                     // 0x04A5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                _2nd_MorphTime;                                            // 0x04A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                StartedSec;                                                // 0x04AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               PreRoundHasEnded;                                          // 0x04B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               GetStatsInUse_;                                            // 0x04B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_PG2M[0x6];                                     // 0x04B2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UUWorksRequestCoreRequestUserStatsGS*        RequestUserStats;                                          // 0x04B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                                GetStats_Timer;                                            // 0x04C0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                                StoreStats_Timer;                                          // 0x04C8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                                GameTimer;                                                 // 0x04D0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                                CheckPlayerSessionTimer;                                   // 0x04D8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                                CheckPlayerTimer;                                          // 0x04E0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UUWorksRequestWebFindOrCreateLeaderboard*    CreateLeaderboard;                                         // 0x04E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFPS_PC_C*                                   GonePlayers;                                               // 0x04F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     ObserverStorage;                                           // 0x04F8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_VXJQ[0x4];                                     // 0x0504(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FSteamGetStatsQueue>                 RequestGetQueue1;                                          // 0x0508(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class AFPS_PC_C*                                   QueuedController;                                          // 0x0518(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                QueuedPropIndex;                                           // 0x0520(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                QueuedHunterIndex;                                         // 0x0524(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULowEntryExecutionQueue*                     Queue;                                                     // 0x0528(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                QueueIndex;                                                // 0x0530(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_V9MM[0x4];                                     // 0x0534(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class AObserverA_C*>                        QueueObservers;                                            // 0x0538(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	int                                                QueueLength;                                               // 0x0548(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_6I8W[0x4];                                     // 0x054C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class AFPS_PC_C*>                           CopiedCurrentPlayers;                                      // 0x0550(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	int                                                CopiedCurrentPlayersIndex;                                 // 0x0560(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_5UDT[0x4];                                     // 0x0564(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ULowEntryExecutionQueue*                     CopiedCurrentPlayersQueue;                                 // 0x0568(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               StoreStatsInUse_;                                          // 0x0570(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_7LPB[0x7];                                     // 0x0571(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UUWorksRequestCoreStoreUserStats*            StoreUserStats;                                            // 0x0578(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FString>                             StoreStatsQueue;                                           // 0x0580(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class AFPS_PC_C*>                           GameStateToSync;                                           // 0x0590(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               WaitTimerActivated_;                                       // 0x05A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ED0U[0x7];                                     // 0x05A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class AFPS_PC_C*>                           WaitTimeToSync;                                            // 0x05A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               HunterWaitTime_;                                           // 0x05B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_TI4F[0x7];                                     // 0x05B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class AFPS_PC_C*>                           HunterWaitTimeToSync;                                      // 0x05C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AFPS_PC_C*>                           SetPlayers;                                                // 0x05D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               Workaround_FirstPlayer_;                                   // 0x05E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_2SRO[0x3];                                     // 0x05E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                VotekickTimer;                                             // 0x05E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                                VotekickTimerHandle;                                       // 0x05E8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int                                                Votekick_Yes;                                              // 0x05F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Votekick_No;                                               // 0x05F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFPS_PC_C*                                   ToKickPlayer;                                              // 0x05F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSVoteKick>                          VotekickQueue;                                             // 0x0600(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               IsVotekicking;                                             // 0x0610(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_XOPJ[0x7];                                     // 0x0611(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ToKickSteamID;                                             // 0x0618(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     ToKickUsername;                                            // 0x0628(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                               IsFinishing_;                                              // 0x0638(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_EP18[0x7];                                     // 0x0639(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                StaticPropFreezeTimer;                                     // 0x0640(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class AHoldableProp_C*>                     HoldableProps;                                             // 0x0648(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass FPS_GM.FPS_GM_C");
		return ptr;
	}



	void Report(TEnumAsByte<Ereport_Ereport> ReportType, const struct FString& SteamID);
	void CheckFirstCompetitivePlay(class AFPS_PC_C* Player);
	void CheckMetalGateSurvivor(class AFPS_PC_C* Player);
	void FinishingGoldExp(class AFPS_PC_C* Player);
	void AddStat_DeductVotekickTicket(const struct FString& Steam_ID, bool* Success_);
	void KillFeeds(TArray<class AFPS_Character2_C*>* Killed, TArray<class AFPS_PC_C*>* Destroyed);
	void DisablePeek();
	void AddStat_PropLastManStanding(const struct FString& Steam_ID);
	void AddStat_Prop15kill(const struct FString& Steam_ID);
	void AddStat_PropKill(const struct FString& Steam_ID);
	void DeliverTauntSound(int TauntSoundNumber, class AProp_C* Prop);
	void AddStat_PermanentBan(const struct FString& Steam_ID);
	void VoteKick(class AFPS_PC_C* RequestedPlayer, const struct FString& VotekickPlayerSteamID, const struct FString& VotekickPlayerUsername);
	void SyncHunterWaitTime();
	void ProcessRequestedGameStateInfo();
	void SearchPlayer(const struct FString& SteamID, bool* Success_, class AFPS_PC_C** Player);
	void AddToQueue_StoreStats(const struct FString& SteamID);
	void SearchAndRemoveStoreStatsQueue(const struct FString& SteamID);
	void EarlyLeaverGoldCoinPenalty(const struct FString& Steam_ID, int DeductionGoldCoinAmount);
	void AddStat_PointsThumbsUp(const struct FSCashItemsGameInfo& BattlePassType, class AFPS_PC_C* Player);
	void DeleteAllPlayersToEndGame();
	void AddStat_DeductSTokens(const struct FString& Steam_ID, int DeductionSTokensAmount, bool* Success_);
	void AddStat_DeductGoldCoins(const struct FString& Steam_ID, int DeductionGoldCoinAmount, bool* Success_);
	void Competitive_Score(const struct FString& Steam_ID, int Score);
	void AddStat_ExpPoints_HunterKill(const struct FSCashItemsGameInfo& BattlePassType, class AFPS_PC_C* Player);
	void AddStat_ExpPoints_PropSurvival(const struct FSCashItemsGameInfo& BattlePassType, class AFPS_PC_C* Player);
	void AddStat_ExpPoints_RoundLose(const struct FSCashItemsGameInfo& BattlePassType, class AFPS_PC_C* Player);
	void AddStat_ExpPoints_RoundWin(const struct FSCashItemsGameInfo& BattlePassType, class AFPS_PC_C* Player);
	void DeleteExitingPlayerQueue(const struct FString& SteamID);
	void AddExp(class AFPS_PC_C* PC, int ExpAmount);
	void DestroyAllActorsOfPlayer(class AFPS_PC_C* PC);
	void AddStat_AddGoldenThumbs(const struct FString& Steam_ID);
	void AddStat_AddThumbs(const struct FString& Steam_ID);
	void CheckToEndGame(bool* EndThisGameNow_);
	void CheckHuntersPropsExist();
	void AddStat_RankingInOrOut_(const struct FString& Steam_ID, bool In_);
	void GetLeaderboardRanking(const struct FString& Content, int Score, bool* SetRankingIn_, bool* SetRankingOut_, int* NewRanking);
	void SetLeaderboard(const struct FString& InputSteamID, const struct FString& InputLeaderboardID, int InputScore, class ULowEntryHttpRequest** RequestHttpObject);
	void Mute_Ambience();
	void Mute_OnFireMusic();
	void Mute_StartMusic();
	void DebugCheck();
	void InvalidateAllTimers();
	void SearchPlayer_Finalscore(const struct FString& Steam_ID, int* CompetitiveScoreOfTheMatch);
	void SetInGameScore(const struct FString& Steam_ID, TEnumAsByte<ESteamStats_ESteamStats> WhichOne_, class AFPS_PC_C* Player);
	void Custom_Lose(const struct FString& Steam_ID);
	void Custom_Win(const struct FString& Steam_ID);
	void EarlyLeaverPenalty(const struct FString& SteamID);
	void SyncPlayerStatHistory(const struct FString& SteamID, const struct FString& userName, class AFPS_PC_C* Player);
	void AddToQueue_GetStats(const struct FString& SteamID, TEnumAsByte<EWhichWorkGame_EWhichWorkGame> Work, class AFPS_PC_C* Player);
	void RemovePlayerFromQueue_GetStats(const struct FString& SteamID, TEnumAsByte<EWhichWorkGame_EWhichWorkGame>* Work, bool* Success_, struct FString* Output_SteamID, class AFPS_PC_C** Output_Player);
	void IncrementStat_WhichOne_(const struct FString& Steam_ID, TEnumAsByte<ESteamStats_ESteamStats> WhichOne_);
	void AddStat_HunterDeath(const struct FString& Steam_ID);
	void AddStat_HunterKill(const struct FString& Steam_ID);
	void AddStat_HunterLose(const struct FString& Steam_ID);
	void AddStat_HunterWin(const struct FString& Steam_ID);
	void AddStat_PropDeath(const struct FString& Steam_ID);
	void AddStat_PropSurvival(const struct FString& Steam_ID);
	void AddStat_PropLose(const struct FString& Steam_ID);
	void AddStat_PropWin(const struct FString& Steam_ID);
	void CheckIfPlayersExist();
	void GI(class UGI2_C** AsGI2);
	void StartBurningTime();
	void KillFeedSelf(const struct FString& DestroyedPlayerUsername);
	void KillFeed(class AFPS_Character2_C* Killed, class AFPS_PC_C* Destroyed);
	void CompetitiveScoreConverter(int Ranking, bool* Win_, int* Score);
	void CompetitiveEndingProcess();
	void CompetitiveDeployingRankings();
	void AllDataScoreConverter(int PropWin, int PropLose, int PropSurvival, int PropDeath, int HunterWin, int HunterLose, int HunterKill, int HunterDeath, int* TotalScore);
	void CompetitiveCalculatingFinalScore();
	void HunterNumber(int* HunterNumber);
	void InitiatePlayers(bool* Done_);
	void PS(class APlayerController* FPS_PC, class AFPS_PS_C** AsFPS_PS);
	void PropSelection(bool _2nd_);
	void SetTwoSpawnAreas();
	void SendFinalResults();
	void EndGameSession();
	void CheckEndGameHunter(bool* EndGame_);
	void CheckEndGameProp(bool* EndGame_);
	void UpdatePlayerState_WinLoseNoti_(bool PropWin_);
	void SendChatToClients(const struct FString& userName, const struct FText& Message, TEnumAsByte<EChatMode_EChatMode> ChatMode, class AFPS_PC_C* Initiater, const struct FSlateColor& TextColor);
	void WhichSideWin_(bool PropWin_);
	void PlayerArray(TArray<class APlayerState*>* PlayerArray);
	void SetHunters(TArray<class AFPS_PC_C*>* ChangedPlayers);
	void CountUp_LoopNumber(bool* FinishThisGame_);
	void CountDown_WaitNextRoundTime(bool* Reached_0_);
	void ResetAllTimer();
	void UpdatePlayerState_WinLose_();
	void UpdatePlayerState_Scoreboard_(const struct FString& GonePlayerSteamID);
	void CountDown_PlayTime();
	void CountDown_WaitTime(bool* Reached_0_);
	void GameUpdatePlayers(int CurrentPlayers);
	void GameUpdateRounds(int CurrentRound);
	void GameUpdateStatus(const struct FString& CurrentStatus);
	void UpdateGameSessionData();
	void GameUpdateDeletion();
	void RegisterBannedPlayer(const struct FString& BannePlayerSteamID);
	void ActionByPlaytime_Event();
	void ResetInitHunterWait();
	void GameInitializationGraph_Start();
	void Beginplay_SteamStats();
	void OnRequestUserStats(bool bSuccessful, UWorksCore_EUWorksResult Result, const struct FUWorksSteamID& SteamIDUser);
	void GetStatsLoop();
	void ProcessGetStatsQueue();
	void UnpauseGetStats();
	void PauseGetStats();
	void UpdateLeaderboard(const struct FString& SteamID, int Score, TEnumAsByte<EMatchType_EMatchType> matchType);
	void OnRequestCompleted_SetLeaderboardScore(class ULowEntryHttpRequestResponse* Response);
	void BeginplaySteamStatsBinding02_RequestGetStats();
	void BeginplaySteamStatsBinding03_GetStatsQueueLoop();
	void StoreStatsLoop();
	void BeginplaySteamStatsBinding04_StoreStatsQueueLoop();
	void BeginplaySteamStatsBinding05_RequestStoreStats();
	void OnStoreStatsRequestCompleleted(bool bSuccessful, UWorksCore_EUWorksResult Result, const struct FUWorksSteamID& SteamIDUser);
	void ProcessStoreStatsQueue();
	void K2_PostLogin(class APlayerController* NewPlayer);
	void K2_OnLogout(class AController* ExitingController);
	void ReceiveBeginPlay();
	void GameCheck();
	void EndGame_(bool isHunter_);
	void InitiateGame();
	void ResetLoopChecking();
	void AcceptPlayerSessionID(const struct FString& playerSessionId);
	void GameinitializationGraph_End();
	void RequestGameStateInfo(class AFPS_PC_C* Player);
	void InitVotekickTimer(int Time, class AFPS_PC_C* ToKickPlayer, const struct FString& ToKickSteamID, const struct FString& ToKickPlayerUsername);
	void VotekickCountDown();
	void RocketLauncherExplosionEffect(const struct FVector& Location);
	void GrenadeExplosionEffect(const struct FVector& Location);
	void ExecuteUbergraph_FPS_GM(int EntryPoint);
	void RetriveGameSessionInfo__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
