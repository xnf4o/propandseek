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

// BlueprintGeneratedClass LobbyGM1.LobbyGM1_C
// 0x01C9 (FullSize[0x0599] - InheritedSize[0x03D0])
class ALobbyGM1_C : public AGameModeBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int                                                Sec;                                                       // 0x03E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_MS9Q[0x4];                                     // 0x03E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPP_C*                                       PP;                                                        // 0x03E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameLiftClientObject*                       GameliftObject;                                            // 0x03F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     LatestDataSnapshot;                                        // 0x03F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     gameSessionId;                                             // 0x0400(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     SessionUUID;                                               // 0x0410(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<struct FsLobbySession>                      Sessions1;                                                 // 0x0420(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FsLobbySession>                      PlayingSessions1;                                          // 0x0430(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FDateTime                                   NoPlayers;                                                 // 0x0440(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                               NoPlayers_;                                                // 0x0448(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_GYDR[0x3];                                     // 0x0449(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                StartedSec;                                                // 0x044C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              EmptyPlayerSessionCheckTimer;                              // 0x0450(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              EmptyPlayerArrayCheckTimer;                                // 0x0454(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUWorksRequestCoreStoreUserStats*            StoreUserStats;                                            // 0x0458(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FString>                             StoreStatsQueue;                                           // 0x0460(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               StoreStats_InUse_;                                         // 0x0470(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_4H1E[0x7];                                     // 0x0471(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UUWorksRequestCoreRequestUserStatsGS*        RequestUserStats;                                          // 0x0478(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               GetStats_InUse_;                                           // 0x0480(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_4TNV[0x7];                                     // 0x0481(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                GetStats_Timer;                                            // 0x0488(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                                StoreStats_Timer;                                          // 0x0490(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<struct FString>                             SteamIdQueue;                                              // 0x0498(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     RequestedSteamID;                                          // 0x04A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FTimerHandle                                SecIncrementTimer;                                         // 0x04B8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                                EmptySessionCheckTimer;                                    // 0x04C0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                                EmptyPlayerCheckTimer;                                     // 0x04C8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FString                                     Patch_Version;                                             // 0x04D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     Patch_Content;                                             // 0x04E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                               Patch_Visibility;                                          // 0x04F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_PK7E[0x7];                                     // 0x04F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Patch_Link;                                                // 0x04F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<struct FSteamGetStatsQueue_Lobby>           GetUserStatsQueue_1;                                       // 0x0508(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FSMicrotxnQueue>                     MicroTxnQueue;                                             // 0x0518(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FTimerHandle                                MicroTxnTimer;                                             // 0x0528(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                               Billing_InUse_;                                            // 0x0530(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_L2UV[0x7];                                     // 0x0531(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class ALobbyPC2_C*>                         CurrentPlayers;                                            // 0x0538(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               IsTransactionOngoing_;                                     // 0x0548(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_S4H3[0x7];                                     // 0x0549(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     MicrotxnOrderID;                                           // 0x0550(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     MicrotxnSteamID;                                           // 0x0560(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	TEnumAsByte<TxnType_ETxnType>                      MicrotxnItem;                                              // 0x0570(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               RefundPossible_;                                           // 0x0571(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               AlreadyRefunded_;                                          // 0x0572(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               RefundSuccess_;                                            // 0x0573(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int                                                ServerNumber;                                              // 0x0574(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                TryAgainCount;                                             // 0x0578(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_1JT4[0x4];                                     // 0x057C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FString>                             InvalidGameSessions;                                       // 0x0580(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FTimerHandle                                CheckInvalidGameSessionsTimer;                             // 0x0590(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                               IsShuttingDown_;                                           // 0x0598(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass LobbyGM1.LobbyGM1_C");
		return ptr;
	}



	void CheckOwningThisVariable(const struct FString& LocalSteamID, const struct FString& DatabaseVariableName, bool* HasItem_);
	void CheckBadUsername(class ALobbyPC2_C* Player);
	void ResetReports(class ALobbyPC2_C* Player);
	void EventEnthusiast_Work(class ALobbyPC2_C* Player);
	void EventTreasureHunter_Work(class ALobbyPC2_C* Player);
	void CheckCompensation(class ALobbyPC2_C* Player);
	void AddVoteKickTicket(class ALobbyPC2_C* Player, int Amount);
	void AddBetaPurchasedAch(const struct FString& SteamID);
	void EquipNewSpectator(const struct FString& SteamID, int Default_Spectator_Index);
	void InitiateOpeningLootbox(class ALobbyPC2_C* Player, TArray<struct FSLootboxItemCards>* LootboxesInfo);
	void DeductLootBoxAmount(class ALobbyPC2_C* Player, bool Add___Or_Subtract_, int Amount);
	void AddStatHaveAllDlcs(const struct FString& SteamID);
	void EquipNewTauntingSound(const struct FString& SteamID, int DefaultTauntingSoundIndex);
	void UnlockInventory(const struct FString& SteamID, TEnumAsByte<ItemUnlockType_EItemUnlockType> ItemPriceType, int ItemPrice, const struct FString& DatabaseString, class ALobbyPC2_C* Player);
	void ConvertTimeA(int Input_Integer, struct FDateTime* DateTime, struct FString* DisplayDate);
	void DeleteRefundedSlot(const struct FString& SteamID, int SlotNumber, bool* Success_);
	void VerifyRefund(const struct FString& STEAM, const struct FString& OrderID, bool* CanRefund_, int* SlotNumber);
	void RetrievePurchased(class ALobbyPC2_C* Player, TArray<struct FSShopInventory>* PurchasedItemList);
	void ClaimPurchased(class ALobbyPC2_C* Player, int SlotNumber);
	void DeleteAllPurchaseInfo(const struct FString& SteamID);
	void DeletePurchaseInfo(const struct FString& SteamID, const struct FString& OrderID, TEnumAsByte<TxnType_ETxnType> ItemType, bool* Success_);
	void StorePurchaseInfo(const struct FString& SteamID, const struct FString& OrderID, TEnumAsByte<TxnType_ETxnType> ItemType, bool* Success_);
	void DeductNameChange(class ALobbyPC2_C* LobbyPC);
	void AddNameChange(class ALobbyPC2_C* LobbyPC);
	void DeductStokens(const struct FString& SteamID, int Amount, class ALobbyPC2_C* Player, bool* Succeeded_);
	void DeductGoldCoins(const struct FString& SteamID, int Amount, class ALobbyPC2_C* Player, bool* Succeeded_);
	void AddPropBoosterExpirationDate(class ALobbyPC2_C* LobbyPC, int Days);
	void AddSlot03ExpirationDate(class ALobbyPC2_C* LobbyPC, int Days);
	void AddToQueue_StoreStatsQueue_(const struct FString& SteamID);
	void NewPlayerVersionSteamStats(const struct FString& SteamID);
	void SetGoldCoins(const struct FString& SteamID, int GoldCoinSetTo);
	void UpdateNewPlayerVersion(const struct FString& SteamID, class ALobbyPC2_C* Player);
	void RequestRefundMicrotransaction(const struct FString& OrderID, class ULowEntryHttpRequest** RequestHttpObject);
	void GetRefundTxnInfo(const struct FString& OrderID, struct FText* ContentAsString, struct FText* SetUrl);
	void RemovePlayer(class ALobbyPC2_C* PC, bool* Success_);
	void SearchOrderID(const struct FString& OrderID, bool* Found_, struct FString* RequestedSteamID, struct FString* Output_OrderID, TEnumAsByte<TxnType_ETxnType>* WhichOne_);
	void EventGandalv_Work(const struct FString& SteamID);
	void LeaveReview_Work(const struct FString& SteamID);
	void Suggestions_Work(const struct FString& SteamID);
	void BugReport_Work(const struct FString& SteamID);
	void JustJoinedLobby(const struct FString& SteamID);
	void NeverPlayedBefore(const struct FString& SteamID);
	void EquipNewAlias(const struct FString& SteamID, int Default_Index);
	void EquipNewCharacter(const struct FString& SteamID, int Default_Character_Index);
	void SetLeaderboard(const struct FString& SteamID, const struct FString& LeaderboardID, int Score, class ULowEntryHttpRequest** RequestHttpObject);
	void InvalidateAllTimer();
	void SetUsername(TArray<int>* userName, const struct FString& SteamID);
	void SearchPlayer(const struct FString& SteamID, bool* Success_, class ALobbyPC2_C** Player);
	void AddToQueue_GetStatsQueue_(const struct FString& SteamID, TEnumAsByte<EWhichWork_EWhichWork> Work);
	void RemovePlayer_GetStatsQueue_(const struct FString& SteamID, TEnumAsByte<EWhichWork_EWhichWork>* Work, struct FString* Log);
	void RemovePlayer_StoreStatsQueue_(const struct FString& SteamID, struct FString* Log);
	void CheckIfNoPlayersExist();
	void GI(class UGI2_C** AsGI2);
	void FinalizeMicrotransaction(const struct FString& OrderID, class ULowEntryHttpRequest** RequestHttpObject);
	void RequestMicrotransaction(TEnumAsByte<TxnType_ETxnType> ItemToPayFor, const struct FString& SteamID, const struct FString& UsersLanguage, class ULowEntryHttpRequest** RequestHttpObject);
	void GetTxnInfo(TEnumAsByte<TxnType_ETxnType> ItemToPayFor, const struct FString& SteamID, const struct FString& UsersLanguage, struct FText* ContentAsString, struct FText* SetUrl);
	void EndTimer(const struct FTimespan& EndAfterThisTimeSpan, bool* TimeReached_, struct FString* TimeLeft);
	void PlayerState(TArray<class APlayerState*>* PlayerArray);
	void PS(class ALobbyPC2_C* LobbyPC, class ALobbyPS_C** AsLobby_PS);
	void SendChatToClients(const struct FText& Message, class ALobbyPC2_C* LobbyPC, TEnumAsByte<EChatMode_EChatMode> SenderChatMode);
	void SecIncrement();
	void Beginplay_Stats();
	void OnRequestCompleted_RequestUserStats(bool bSuccessful, UWorksCore_EUWorksResult Result, const struct FUWorksSteamID& SteamIDUser);
	void GetStats_Loop();
	void GetStatsPlayer();
	void Unpause_GetStats();
	void Pause_GetStats();
	void SteamStatsBinder02_RequestUserStats();
	void SteamStatsBinder03_GetStats();
	void FinalizeRequestBillingQueue(const struct FString& OrderID, const struct FString& RequestedSteamID, TEnumAsByte<TxnType_ETxnType> WhichOne_);
	void ExecuteRequest2(class ULowEntryHttpRequestResponse* Response);
	void SteamStatsBinder05_MicroTxn();
	void BillingLoop();
	void FinalizeBilling();
	void StoreStatsLoop();
	void SteamStatsBinder07_StoreStats();
	void ProcessStoreStats();
	void OnRequestCompleted_StoreUserStats(bool bSuccessful, UWorksCore_EUWorksResult Result, const struct FUWorksSteamID& SteamIDUser);
	void SteamStatsBinder08_RequestStoreStats();
	void ReceiveBeginPlay();
	void K2_OnLogout(class AController* ExitingController);
	void K2_PostLogin(class APlayerController* NewPlayer);
	void AcceptPlayerSessionID(const struct FString& playerSessionId);
	void CheckInvalidGameSessionsEvent();
	void StartShutDownCount();
	void StartLobby();
	void ExecuteUbergraph_LobbyGM1(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
