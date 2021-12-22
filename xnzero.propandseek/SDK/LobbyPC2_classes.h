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

// BlueprintGeneratedClass LobbyPC2.LobbyPC2_C
// 0x0467 (FullSize[0x0ADF] - InheritedSize[0x0678])
class ALobbyPC2_C : public APlayerController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0678(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              StokenLerpTimeline_Alpha_6F836F0B46BE1343301F4D98C0598FDE; // 0x0680(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             StokenLerpTimeline__Direction_6F836F0B46BE1343301F4D98C0598FDE; // 0x0684(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_M4UP[0x3];                                     // 0x0685(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          StokenLerpTimeline;                                        // 0x0688(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LerpGoldCoinTimeline_Alpha_18ECDBA14BE0E4BF9B7D778606EC4135; // 0x0690(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             LerpGoldCoinTimeline__Direction_18ECDBA14BE0E4BF9B7D778606EC4135; // 0x0694(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_D2P7[0x3];                                     // 0x0695(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          LerpGoldCoinTimeline;                                      // 0x0698(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             ServerSafety__Direction_A8C379BE43628B5B81AB20BFFFD93528;  // 0x06A0(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_H2J6[0x7];                                     // 0x06A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          ServerSafety;                                              // 0x06A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULobbyUMG2_C*                                LobbyUMG;                                                  // 0x06B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UProfileUMG_C*                               ProfileUMG;                                                // 0x06B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameLiftClientObject*                       GameliftObject;                                            // 0x06C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    JoinCustomMatch;                                           // 0x06C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TEnumAsByte<EChatMode_EChatMode>                   ChatMode;                                                  // 0x06D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsChatFocused;                                             // 0x06D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsSearching_;                                              // 0x06DA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_KJMS[0x5];                                     // 0x06DB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    JoinCompetitiveGame;                                       // 0x06E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    JoinQuickGame;                                             // 0x06F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<struct FString>                             Achievements_API_Name;                                     // 0x0700(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FString>                             Achievements_Current_Stat_Name;                            // 0x0710(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        Achievements_Max_Stat_Name;                                // 0x0720(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        Achievements_CurrentValue;                                 // 0x0730(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        Achievements_MaxValue;                                     // 0x0740(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FString>                             Achievements_Header;                                       // 0x0750(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FString>                             Achievements_Description;                                  // 0x0760(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<bool>                                       Achievements_Achieved_;                                    // 0x0770(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UTexture2D*>                          Achievements_Icon_Color;                                   // 0x0780(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<bool>                                       Achievements_bHidden;                                      // 0x0790(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UUWorksRequestWebGetReport*                  UWorks;                                                    // 0x07A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                                   NoActivity;                                                // 0x07A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                               CanSendServer_;                                            // 0x07B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_29R9[0x7];                                     // 0x07B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     AuthSteamID;                                               // 0x07B8(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     playerSessionId;                                           // 0x07C8(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     ServerGameSessionID;                                       // 0x07D8(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FTimerHandle                                SecIncrementTimer;                                         // 0x07E8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPlayerInfoGame                             GamePlayerInfo;                                            // 0x07F0(0x0088) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class UUWorksRequestCoreUploadLeaderboardScore*    UploadLeaderboardScore;                                    // 0x0878(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUWorksSteamLeaderboard                     SteamLeaderboard;                                          // 0x0880(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	int                                                SteamLeaderboardRanking;                                   // 0x0888(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DisplayRssFeeder_;                                         // 0x088C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_P8MZ[0x3];                                     // 0x088D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     RssFeeder_Title;                                           // 0x0890(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     RssFeeder_Link;                                            // 0x08A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     RssFeeder_Date;                                            // 0x08B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     RssFeeder_HrMin;                                           // 0x08C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     RssFeeder_Content;                                         // 0x08D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class ULogSave_C*                                  Log;                                                       // 0x08E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    SearchCustomMatch;                                         // 0x08E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    JoinSearchedCustomMatch;                                   // 0x08F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               DisableBackButton_;                                        // 0x0908(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_Y01V[0x7];                                     // 0x0909(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    CancelMatchmaking;                                         // 0x0910(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class ACharDisplayer_C*                            CharacterDisplayer;                                        // 0x0920(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_Inventory                                InventoryInfo;                                             // 0x0928(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                               StopRotate_;                                               // 0x0978(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsRotating_;                                               // 0x0979(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsClickingLMB_;                                            // 0x097A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_QJPR[0x5];                                     // 0x097B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UTexture2D*>                          Achievements_Icon_NoColor;                                 // 0x0980(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               ChatSwitch;                                                // 0x0990(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TEnumAsByte<TxnType_ETxnType>                      MyCurrentMicrotxnOption;                                   // 0x0991(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_DUNT[0x6];                                     // 0x0992(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UObject*                                     MicrotxnSnapshot;                                          // 0x0998(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSShopInventory>                     Purchased;                                                 // 0x09A0(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, RepNotify)
	struct FString                                     OrderID;                                                   // 0x09B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                               CanRunPurchase_;                                           // 0x09C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               BlockBackButton_;                                          // 0x09C1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_SGX9[0x6];                                     // 0x09C2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<int>                                        DebugString;                                               // 0x09C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                MostToLeast;                                          // 0x09D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                z_to_a;                                               // 0x09DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                z_to_a_1;                                             // 0x09E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                z_to_a_2;                                             // 0x09E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MostToLeast_1;                                        // 0x09E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MostToLeast2;                                         // 0x09EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                z_to_a_22;                                            // 0x09F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                z_to_a_12;                                            // 0x09F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSMySentReports>                     SentReportList;                                            // 0x09F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FCustomGameInfo                             CustomMatchInfo;                                           // 0x0A08(0x0030) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ServerID;                                                  // 0x0A38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_981X[0x4];                                     // 0x0A3C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UInvenListButton_C*>                  PerSecUpdateList;                                          // 0x0A40(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FDateTime                                   Slot03ExpirationDate;                                      // 0x0A50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                                   PropBoosterExpirationDate;                                 // 0x0A58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UPlayerLogSave_C*                            PlayerLogSave;                                             // 0x0A60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<ERetrieveMode_ERetrieveMode>           RetrieveMode;                                              // 0x0A68(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_VG6U[0x3];                                     // 0x0A69(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Item_NameChange_Amount;                                    // 0x0A6C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               PurchaseLimitReached_;                                     // 0x0A70(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_3LO6[0x3];                                     // 0x0A71(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                RefundSlotNumber;                                          // 0x0A74(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Session_number;                                            // 0x0A78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCustomGameInfo                             QuickMatchInfo;                                            // 0x0A7C(0x0030) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ForceKick_;                                                // 0x0AAC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               AuthRequestSuceeded_;                                      // 0x0AAD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ESLO[0x2];                                     // 0x0AAE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                AuthRequestLimit;                                          // 0x0AB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsInQuickQueue_;                                           // 0x0AB4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_R51N[0x3];                                     // 0x0AB5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FSLootboxItemCards>                  RandomLootboxItems;                                        // 0x0AB8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                Item_Lootbox_amount;                                       // 0x0AC8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_B4R8[0x4];                                     // 0x0ACC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ABP_Chest_C*                                 bp_chest_object;                                           // 0x0AD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Item_Votekick_Amount;                                      // 0x0AD8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Event_treasure_Hunter;                                     // 0x0ADC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Event_ToyRingOwner;                                        // 0x0ADD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Event_Enthusiast;                                          // 0x0ADE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass LobbyPC2.LobbyPC2_C");
		return ptr;
	}



	void CheckOwnership(const struct FString& SteamID, const struct FString& DatabaseVariableName, bool* AlreadyHave_);
	void SyncDlcs(const struct FUWorksSteamID& SteamID, struct FSCashItemsGameInfo* Output_Get);
	void SyncVotekickAmount(int Amount);
	void LootboxLegendSynchronizer(TArray<struct FSLootboxItemCards>* LootboxCards);
	void SyncSteamInventory_Spectators(const struct FUWorksSteamID& SteamID, TArray<int>* OwningSpectators);
	void SyncPropBoosterExpirationD(int ExpireDate);
	void SyncSlot3ExpireDate(int ExpireDate);
	void SyncLootboxAmount(int LootboxAmount);
	void AddRandomItems(float* Percentage, int* MaxItemNumber);
	void ParseRandomItems(const struct FSLootboxItem& Item, bool* ItemFound_, struct FString* SteamDatabaseVariableName, bool* SetTo_, int* Amount);
	void LegendPercentage(float* Percentage, int* MaxItemNumber);
	void EpicPercentage(float* Percentage, int* MaxItemNumber);
	void UniquePercentage_unused_(float* Percentage, int* MaxItemNumber);
	void RarePercentage(float* Percentage, int* MaxItemNumber);
	void NormalPercentage(float* Percentage, int* MaxItemNumber);
	void GetRandomItems(TArray<struct FSLootboxItemCards>* RandomBoxResult);
	void UpdateLootboxAmountOnTheFly();
	void SyncNameChangeAmount1(int Amount);
	void SyncSteamStatsForRefreshing(const struct FUWorksSteamID& SteamID, TEnumAsByte<EAfterSync_EAfterSync>* Work);
	void CheckSuggestion();
	void CheckBugReported();
	void SetNewShopSymbol(bool New_);
	void LoadNewShopSymbol(bool* HasNew_);
	void SyncSteamInventory_TauntingSounds(const struct FUWorksSteamID& SteamID, TArray<int>* OwningTauntingSounds);
	void StringDebug(const struct FString& StringTest, struct FString* StringOIutpuit1);
	void CheckIfBanned(bool* Banned_);
	void SetGameSessionDataQuickCompetitive();
	void OnRep_Purchased();
	void RetrieveStoredPurchaseInfos(TArray<struct FSShopInventory>* PurchasedItemList);
	void UpdateGoldCoinRequirements();
	void UpdateCreateJoinCoinVisibility();
	void LoadNewDirectlyPurchasedItem(bool* ToggleNew);
	void NewDirectlyPurchasedItem_(bool Toggle);
	void SyncSteamInventory_Items(const struct FUWorksSteamID& SteamID, TArray<int>* OwningItems);
	void ActivatingSteamVAC(class ULowEntryHttpRequest** HttpObject);
	void Sort_SortByPlayers(bool LeastToMost_, TArray<struct FSDyGameSessions>* LocalGameSessions, TArray<struct FSDyGameSessions>* SortedGameSessions);
	void Sort_SortByStatus(bool LeastToMost_, TArray<struct FSDyGameSessions>* LocalGameSessions, TArray<struct FSDyGameSessions>* SortedGameSessions);
	void Sort_SortByPublic(bool LeastToMost_, TArray<struct FSDyGameSessions>* LocalGameSessions, TArray<struct FSDyGameSessions>* SortedGameSessions);
	void Sort_SortByRound(bool LeastToMost_, TArray<struct FSDyGameSessions>* LocalGameSessions, TArray<struct FSDyGameSessions>* SortedGameSessions);
	void ClearOutSortSettings();
	void Sort_SortByTitle(bool LeastToMost_, TArray<struct FSDyGameSessions>* LocalGameSessions, TArray<struct FSDyGameSessions>* SortedGameSessions);
	void Sort_SortByMap(bool LeastToMost_, TArray<struct FSDyGameSessions>* LocalGameSessions, TArray<struct FSDyGameSessions>* SortedGameSessions);
	void Sort_SortByRegion(bool LeastToMost_, TArray<struct FSDyGameSessions>* LocalGameSessions, TArray<struct FSDyGameSessions>* SortedGameSessions);
	void Sort_SortByNumber(bool LeastToMost_, TArray<struct FSDyGameSessions>* LocalGameSessions, TArray<struct FSDyGameSessions>* SortedGameSessions);
	void SortCheck(TArray<struct FSDyGameSessions>* ToSort, TArray<struct FSDyGameSessions>* SortedGameSessionsFinal);
	void CheckRefundable(const struct FDateTime& PurchaseDate, bool* Refundable_);
	void GetCurrency(const struct FUWorksSteamID& SteamID);
	void OnPressedChat1();
	void SyncSteamInventory_Main(const struct FUWorksSteamID& SteamID, TArray<int>* OwningCharacters, TArray<int>* OwningSpectators, TArray<int>* OwningItems, TArray<int>* OwningAliases, TArray<int>* OwningTauntingSounds);
	void SyncSteamInventory_Aliases(const struct FUWorksSteamID& SteamID, TArray<int>* OwningAliases);
	void SyncSteamInventory_Characters(const struct FUWorksSteamID& SteamID, TArray<int>* OwningCharacters);
	void SpawnCharacterDisplayer(const struct FString& userName, int Alias);
	void RefreshSessionListOnUMG1();
	void AddUsernameToPlayerInfo(const struct FString& userName);
	void SyncSteamStats(const struct FUWorksSteamID& SteamID, TEnumAsByte<EAfterSync_EAfterSync>* Work);
	void OnReadyWidgetUpdates();
	void ResetNoActivity();
	void SecIncrement();
	void EndCheck(const struct FTimespan& EndAfterThisTimeSpan, bool* TimeReached_, struct FString* TimeLeft);
	void RetrieveUserInfo(struct FUWorksSteamID* SteamID, struct FString* Language);
	void GenerateAchievementList();
	void AddAchievementsToArrays(const struct FString& Header, const struct FString& Description, int CurrentValue, int MaxValue, bool Achieved_, class UTexture2D* Icon, bool Hidden_);
	void RetrieveAllAchievementInfo(int Index);
	void SetIsSearching(bool Searching_);
	void OnBackButtonPressed();
	void OnFirstStart();
	void OnSyncSuccess();
	void PS(class ALobbyPS_C** AsLobby_PS);
	void ExitToDesktop();
	void WidgetCreation();
	void GI(class UGI2_C** AsGI2);
	void GM(class ALobbyGM1_C** AsLobby_GM);
	void LerpGoldCoinTimeline__FinishedFunc();
	void LerpGoldCoinTimeline__UpdateFunc();
	void StokenLerpTimeline__FinishedFunc();
	void StokenLerpTimeline__UpdateFunc();
	void ServerSafety__FinishedFunc();
	void ServerSafety__UpdateFunc();
	void InpActEvt_Chat_K2Node_InputActionEvent_8(const struct FKey& Key);
	void InpActEvt_Back_K2Node_InputActionEvent_7(const struct FKey& Key);
	void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void InpActEvt_Weapon1_K2Node_InputActionEvent_6(const struct FKey& Key);
	void InpActEvt_Weapon2_K2Node_InputActionEvent_5(const struct FKey& Key);
	void InpActEvt_Weapon3_K2Node_InputActionEvent_4(const struct FKey& Key);
	void InpActEvt_Weapon4_K2Node_InputActionEvent_3(const struct FKey& Key);
	void Completed_A9AF60DE452D9666AE60509F9D982A80(bool bSuccessful, const struct FString& Content);
	void InpActEvt_Weapon5_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_Weapon6_K2Node_InputActionEvent_1(const struct FKey& Key);
	void OnAuthFinished();
	void OnGetAllLobbies();
	void OnGetAllGames();
	void OnProcessReady();
	void Shop_Lerp_GoldCoins(int Old, int New);
	void Shop_Lerp_STokens(int Old, int New);
	void RequestShopInventoryList();
	void ClaimPurchased_Init(int SlotNumber);
	void RefundSucceeded_(bool Succeeded_);
	void ClaimingDenied();
	void UploadEventTextToServer(const struct FText& EventText);
	void NotifyToClient_Event(bool Success_);
	void SetGoldCoinTo0();
	void AddSlot03ExpirationDate_A(int Days, int Cost, TEnumAsByte<EShopItemCostType_EShopItemCostType> PriceType);
	void AddPropBoosterExpirationDate(int Days, int Cost, TEnumAsByte<EShopItemCostType_EShopItemCostType> PriceType);
	void AddNameChangeAmount(int Cost, TEnumAsByte<EShopItemCostType_EShopItemCostType> PriceType);
	void SyncSlot03ExpirationDate(int ExpirationDate__Slot03_);
	void SyncPropBoosterExpirationDate(int ExpirationDate__PropBooster_);
	void DeductNameChange();
	void UnlockInventory(TEnumAsByte<ItemUnlockType_EItemUnlockType> PriceType, int ItemPrice, const struct FString& DatabaseString);
	void HaveAllDlcsAch();
	void SetAchBugReport();
	void SetAchSuggestion();
	void AddDeductLootBox(bool Add___Or_Deduct_, int LootboxAmount, int StokenDeductionAmount);
	void DeductLoobox();
	void OnLootboxLogicEndServer(TArray<struct FSLootboxItemCards> LootboxItemResult);
	void SyncNameChangeAmount(int NameChangeAmount);
	void SyncGoldCoins(int Amount);
	void SyncLootBoxAmount1(int LootboxAmount);
	void AddEarlyBirdAch();
	void AddVoteKick(int VoteKickAddAmount, int STokensDeductAmount);
	void FSyncVoteKickAmount(int VotekickAmount);
	void AddGameLicense(int Cost);
	void SyncGameLicenseOwnership();
	void AddSecondSlotKey(int Cost);
	void Sync2ndSlotKeyOwnership();
	void AddGoldPassLight(int Cost);
	void SyncGoldPassLight();
	void AddGoldPassStandard(int Cost);
	void SyncGoldPassStandard();
	void AddGoldPassDeluxe(int Cost);
	void SyncGoldPassDeluxe();
	void AddEarlyAccessLicense(int Cost);
	void SyncEarlyAccessLicense();
	void ReceiveBeginPlay();
	void SendErrorMessage(const struct FText& errorMessage);
	void beginplay_Client(int lobbyID);
	void ConnectionStatus(TEnumAsByte<ESwitcher_Entry_ESwitcher_Entry> status, const struct FText& ConnectionMessage);
	void Connect();
	void SendChatToServer(const struct FText& Message, TEnumAsByte<EChatMode_EChatMode> MyChatMode);
	void DisplayChatInLobby(const struct FText& Message, const struct FText& userName, TEnumAsByte<EChatMode_EChatMode> SenderChatMode, bool Myself_);
	void OnQuickGamePressed();
	void OnCompetitiveGamePressed();
	void UpdateAchievements();
	void UpdateAchievementStat(int Index);
	void OnReady();
	void InitServerSendDelay();
	void KickClient(const struct FString& AuthReason);
	void InitiateTxnServer(const struct FString& UserSteamID, const struct FString& UserLanguage, TEnumAsByte<TxnType_ETxnType> ItemToPayFor);
	void TxnAuthResponse(int AppID, const struct FString& OrderID, bool bAuthorized);
	void FinalizeBilling(const struct FString& OrderID, const struct FString& RequestedSteamID, TEnumAsByte<TxnType_ETxnType> WhichOne_);
	void TxnBinding();
	void ExecuteRequest(class ULowEntryHttpRequestResponse* Response);
	void SetPlayerSessionOnServer(const struct FString& playerSessionId, const struct FText& VersionCheck);
	void GetSteamId_Event();
	void SetSteamId_Event(const struct FString& SteamID);
	void BeginAuthProcess_Event();
	void AuthTicketResponse(const struct FUWorksTicketHandle& AuthTicket, UWorksCore_EUWorksResult Result);
	void AuthTicketOnServer_Event(TArray<unsigned char> Ticket);
	void AuthTicketServerResponse(const struct FUWorksSteamID& SteamID, UWorksCore_EUWorksAuthSessionResponse AuthSessionResponse, const struct FUWorksSteamID& OwnerSteamID);
	void Verified();
	void OnRequestUserStatsCompleted(bool bSuccessful, const struct FUWorksGameID& GameID, UWorksCore_EUWorksResult Result, const struct FUWorksSteamID& SteamID);
	void WhenEnteredNewUsername(const struct FString& userName);
	void TransferInfo(const struct FString& userName);
	void Debug_ResetSteamStats();
	void Debug_ResetSteamStatsServer();
	void RunResetSteamStats();
	void RegisterChangedSelection(TEnumAsByte<ItemSection_EItemSection> Category, int ItemNumber);
	void NeverPlayedBefore();
	void InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_1(float AxisValue);
	void WinReviewFeat();
	void StartSessionCreation01_GetNumber();
	void OnMicrotxnFinished(bool Success_);
	void InitiateRefundTxnServer(const struct FString& OrderID);
	void RefundRequestResponse(class ULowEntryHttpRequestResponse* Response);
	void UpdateNewPlayerVersion();
	void InputChat__Custom_();
	void RetrieveLeaderboardID();
	void Delete();
	void StartSessionCreation02_ReceiveNumber(int SessionNumber);
	void CreateGameSessionServer(const struct FString& gameSessionId, const struct FString& gameSessionData, const struct FString& Creator, const struct FString& Title);
	void JoinedQuickQueue_();
	void BlockPurchases();
	void BlockJoinCreateGames();
	void RequestDeletion(const struct FString& gameSessionId);
	void TestServ();
	void ToggleCompensates(bool Compensated_);
	void RunCompensation();
	void Shortcut_Menu(int MenuNumber);
	void ExecuteUbergraph_LobbyPC2(int EntryPoint);
	void CancelMatchmaking__DelegateSignature();
	void JoinSearchedCustomMatch__DelegateSignature();
	void SearchCustomMatch__DelegateSignature();
	void JoinQuickGame__DelegateSignature();
	void JoinCompetitiveGame__DelegateSignature();
	void JoinCustomMatch__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
