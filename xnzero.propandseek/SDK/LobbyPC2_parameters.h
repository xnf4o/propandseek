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

// Function LobbyPC2.LobbyPC2_C.CheckOwnership
struct ALobbyPC2_C_CheckOwnership_Params
{
	struct FString                                     SteamID;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     DatabaseVariableName;                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                               AlreadyHave_;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function LobbyPC2.LobbyPC2_C.SyncDlcs
struct ALobbyPC2_C_SyncDlcs_Params
{
	struct FUWorksSteamID                              SteamID;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FSCashItemsGameInfo                         Output_Get;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyPC2.LobbyPC2_C.SyncVotekickAmount
struct ALobbyPC2_C_SyncVotekickAmount_Params
{
	int                                                Amount;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyPC2.LobbyPC2_C.LootboxLegendSynchronizer
struct ALobbyPC2_C_LootboxLegendSynchronizer_Params
{
	TArray<struct FSLootboxItemCards>                  LootboxCards;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function LobbyPC2.LobbyPC2_C.SyncSteamInventory_Spectators
struct ALobbyPC2_C_SyncSteamInventory_Spectators_Params
{
	struct FUWorksSteamID                              SteamID;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	TArray<int>                                        OwningSpectators;                                          // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
};

// Function LobbyPC2.LobbyPC2_C.SyncPropBoosterExpirationD
struct ALobbyPC2_C_SyncPropBoosterExpirationD_Params
{
	int                                                ExpireDate;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyPC2.LobbyPC2_C.SyncSlot3ExpireDate
struct ALobbyPC2_C_SyncSlot3ExpireDate_Params
{
	int                                                ExpireDate;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyPC2.LobbyPC2_C.SyncLootboxAmount
struct ALobbyPC2_C_SyncLootboxAmount_Params
{
	int                                                LootboxAmount;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyPC2.LobbyPC2_C.AddRandomItems
struct ALobbyPC2_C_AddRandomItems_Params
{
	float                                              Percentage;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxItemNumber;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyPC2.LobbyPC2_C.ParseRandomItems
struct ALobbyPC2_C_ParseRandomItems_Params
{
	struct FSLootboxItem                               Item;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ItemFound_;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     SteamDatabaseVariableName;                                 // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                               SetTo_;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                Amount;                                                    // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyPC2.LobbyPC2_C.LegendPercentage
struct ALobbyPC2_C_LegendPercentage_Params
{
	float                                              Percentage;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxItemNumber;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyPC2.LobbyPC2_C.EpicPercentage
struct ALobbyPC2_C_EpicPercentage_Params
{
	float                                              Percentage;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxItemNumber;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyPC2.LobbyPC2_C.UniquePercentage(unused)
struct ALobbyPC2_C_UniquePercentage_unused__Params
{
	float                                              Percentage;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxItemNumber;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyPC2.LobbyPC2_C.RarePercentage
struct ALobbyPC2_C_RarePercentage_Params
{
	float                                              Percentage;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxItemNumber;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyPC2.LobbyPC2_C.NormalPercentage
struct ALobbyPC2_C_NormalPercentage_Params
{
	float                                              Percentage;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxItemNumber;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyPC2.LobbyPC2_C.GetRandomItems
struct ALobbyPC2_C_GetRandomItems_Params
{
	TArray<struct FSLootboxItemCards>                  RandomBoxResult;                                           // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
};

// Function LobbyPC2.LobbyPC2_C.UpdateLootboxAmountOnTheFly
struct ALobbyPC2_C_UpdateLootboxAmountOnTheFly_Params
{
};

// Function LobbyPC2.LobbyPC2_C.SyncNameChangeAmount1
struct ALobbyPC2_C_SyncNameChangeAmount1_Params
{
	int                                                Amount;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyPC2.LobbyPC2_C.SyncSteamStatsForRefreshing
struct ALobbyPC2_C_SyncSteamStatsForRefreshing_Params
{
	struct FUWorksSteamID                              SteamID;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	TEnumAsByte<EAfterSync_EAfterSync>                 Work;                                                      // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyPC2.LobbyPC2_C.CheckSuggestion
struct ALobbyPC2_C_CheckSuggestion_Params
{
};

// Function LobbyPC2.LobbyPC2_C.CheckBugReported
struct ALobbyPC2_C_CheckBugReported_Params
{
};

// Function LobbyPC2.LobbyPC2_C.SetNewShopSymbol
struct ALobbyPC2_C_SetNewShopSymbol_Params
{
	bool                                               New_;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function LobbyPC2.LobbyPC2_C.LoadNewShopSymbol
struct ALobbyPC2_C_LoadNewShopSymbol_Params
{
	bool                                               HasNew_;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function LobbyPC2.LobbyPC2_C.SyncSteamInventory_TauntingSounds
struct ALobbyPC2_C_SyncSteamInventory_TauntingSounds_Params
{
	struct FUWorksSteamID                              SteamID;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	TArray<int>                                        OwningTauntingSounds;                                      // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
};

// Function LobbyPC2.LobbyPC2_C.StringDebug
struct ALobbyPC2_C_StringDebug_Params
{
	struct FString                                     StringTest;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     StringOIutpuit1;                                           // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function LobbyPC2.LobbyPC2_C.CheckIfBanned
struct ALobbyPC2_C_CheckIfBanned_Params
{
	bool                                               Banned_;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function LobbyPC2.LobbyPC2_C.SetGameSessionDataQuickCompetitive
struct ALobbyPC2_C_SetGameSessionDataQuickCompetitive_Params
{
};

// Function LobbyPC2.LobbyPC2_C.OnRep_Purchased
struct ALobbyPC2_C_OnRep_Purchased_Params
{
};

// Function LobbyPC2.LobbyPC2_C.RetrieveStoredPurchaseInfos
struct ALobbyPC2_C_RetrieveStoredPurchaseInfos_Params
{
	TArray<struct FSShopInventory>                     PurchasedItemList;                                         // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
};

// Function LobbyPC2.LobbyPC2_C.UpdateGoldCoinRequirements
struct ALobbyPC2_C_UpdateGoldCoinRequirements_Params
{
};

// Function LobbyPC2.LobbyPC2_C.UpdateCreateJoinCoinVisibility
struct ALobbyPC2_C_UpdateCreateJoinCoinVisibility_Params
{
};

// Function LobbyPC2.LobbyPC2_C.LoadNewDirectlyPurchasedItem
struct ALobbyPC2_C_LoadNewDirectlyPurchasedItem_Params
{
	bool                                               ToggleNew;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function LobbyPC2.LobbyPC2_C.NewDirectlyPurchasedItem?
struct ALobbyPC2_C_NewDirectlyPurchasedItem__Params
{
	bool                                               Toggle;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function LobbyPC2.LobbyPC2_C.SyncSteamInventory_Items
struct ALobbyPC2_C_SyncSteamInventory_Items_Params
{
	struct FUWorksSteamID                              SteamID;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	TArray<int>                                        OwningItems;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
};

// Function LobbyPC2.LobbyPC2_C.ActivatingSteamVAC
struct ALobbyPC2_C_ActivatingSteamVAC_Params
{
	class ULowEntryHttpRequest*                        HttpObject;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyPC2.LobbyPC2_C.Sort_SortByPlayers
struct ALobbyPC2_C_Sort_SortByPlayers_Params
{
	bool                                               LeastToMost_;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FSDyGameSessions>                    LocalGameSessions;                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FSDyGameSessions>                    SortedGameSessions;                                        // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
};

// Function LobbyPC2.LobbyPC2_C.Sort_SortByStatus
struct ALobbyPC2_C_Sort_SortByStatus_Params
{
	bool                                               LeastToMost_;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FSDyGameSessions>                    LocalGameSessions;                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FSDyGameSessions>                    SortedGameSessions;                                        // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
};

// Function LobbyPC2.LobbyPC2_C.Sort_SortByPublic
struct ALobbyPC2_C_Sort_SortByPublic_Params
{
	bool                                               LeastToMost_;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FSDyGameSessions>                    LocalGameSessions;                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FSDyGameSessions>                    SortedGameSessions;                                        // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
};

// Function LobbyPC2.LobbyPC2_C.Sort_SortByRound
struct ALobbyPC2_C_Sort_SortByRound_Params
{
	bool                                               LeastToMost_;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FSDyGameSessions>                    LocalGameSessions;                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FSDyGameSessions>                    SortedGameSessions;                                        // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
};

// Function LobbyPC2.LobbyPC2_C.ClearOutSortSettings
struct ALobbyPC2_C_ClearOutSortSettings_Params
{
};

// Function LobbyPC2.LobbyPC2_C.Sort_SortByTitle
struct ALobbyPC2_C_Sort_SortByTitle_Params
{
	bool                                               LeastToMost_;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FSDyGameSessions>                    LocalGameSessions;                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FSDyGameSessions>                    SortedGameSessions;                                        // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
};

// Function LobbyPC2.LobbyPC2_C.Sort_SortByMap
struct ALobbyPC2_C_Sort_SortByMap_Params
{
	bool                                               LeastToMost_;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FSDyGameSessions>                    LocalGameSessions;                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FSDyGameSessions>                    SortedGameSessions;                                        // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
};

// Function LobbyPC2.LobbyPC2_C.Sort_SortByRegion
struct ALobbyPC2_C_Sort_SortByRegion_Params
{
	bool                                               LeastToMost_;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FSDyGameSessions>                    LocalGameSessions;                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FSDyGameSessions>                    SortedGameSessions;                                        // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
};

// Function LobbyPC2.LobbyPC2_C.Sort_SortByNumber
struct ALobbyPC2_C_Sort_SortByNumber_Params
{
	bool                                               LeastToMost_;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FSDyGameSessions>                    LocalGameSessions;                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FSDyGameSessions>                    SortedGameSessions;                                        // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
};

// Function LobbyPC2.LobbyPC2_C.SortCheck
struct ALobbyPC2_C_SortCheck_Params
{
	TArray<struct FSDyGameSessions>                    ToSort;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FSDyGameSessions>                    SortedGameSessionsFinal;                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
};

// Function LobbyPC2.LobbyPC2_C.CheckRefundable
struct ALobbyPC2_C_CheckRefundable_Params
{
	struct FDateTime                                   PurchaseDate;                                              // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	bool                                               Refundable_;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function LobbyPC2.LobbyPC2_C.GetCurrency
struct ALobbyPC2_C_GetCurrency_Params
{
	struct FUWorksSteamID                              SteamID;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function LobbyPC2.LobbyPC2_C.OnPressedChat1
struct ALobbyPC2_C_OnPressedChat1_Params
{
};

// Function LobbyPC2.LobbyPC2_C.SyncSteamInventory_Main
struct ALobbyPC2_C_SyncSteamInventory_Main_Params
{
	struct FUWorksSteamID                              SteamID;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	TArray<int>                                        OwningCharacters;                                          // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	TArray<int>                                        OwningSpectators;                                          // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	TArray<int>                                        OwningItems;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	TArray<int>                                        OwningAliases;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	TArray<int>                                        OwningTauntingSounds;                                      // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
};

// Function LobbyPC2.LobbyPC2_C.SyncSteamInventory_Aliases
struct ALobbyPC2_C_SyncSteamInventory_Aliases_Params
{
	struct FUWorksSteamID                              SteamID;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	TArray<int>                                        OwningAliases;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
};

// Function LobbyPC2.LobbyPC2_C.SyncSteamInventory_Characters
struct ALobbyPC2_C_SyncSteamInventory_Characters_Params
{
	struct FUWorksSteamID                              SteamID;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	TArray<int>                                        OwningCharacters;                                          // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
};

// Function LobbyPC2.LobbyPC2_C.SpawnCharacterDisplayer
struct ALobbyPC2_C_SpawnCharacterDisplayer_Params
{
	struct FString                                     userName;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int                                                Alias;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyPC2.LobbyPC2_C.RefreshSessionListOnUMG1
struct ALobbyPC2_C_RefreshSessionListOnUMG1_Params
{
};

// Function LobbyPC2.LobbyPC2_C.AddUsernameToPlayerInfo
struct ALobbyPC2_C_AddUsernameToPlayerInfo_Params
{
	struct FString                                     userName;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function LobbyPC2.LobbyPC2_C.SyncSteamStats
struct ALobbyPC2_C_SyncSteamStats_Params
{
	struct FUWorksSteamID                              SteamID;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	TEnumAsByte<EAfterSync_EAfterSync>                 Work;                                                      // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyPC2.LobbyPC2_C.OnReadyWidgetUpdates
struct ALobbyPC2_C_OnReadyWidgetUpdates_Params
{
};

// Function LobbyPC2.LobbyPC2_C.ResetNoActivity
struct ALobbyPC2_C_ResetNoActivity_Params
{
};

// Function LobbyPC2.LobbyPC2_C.SecIncrement
struct ALobbyPC2_C_SecIncrement_Params
{
};

// Function LobbyPC2.LobbyPC2_C.EndCheck
struct ALobbyPC2_C_EndCheck_Params
{
	struct FTimespan                                   EndAfterThisTimeSpan;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                               TimeReached_;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     TimeLeft;                                                  // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function LobbyPC2.LobbyPC2_C.RetrieveUserInfo
struct ALobbyPC2_C_RetrieveUserInfo_Params
{
	struct FUWorksSteamID                              SteamID;                                                   // 0x0000(0x0008)  (Parm, OutParm, NoDestructor)
	struct FString                                     Language;                                                  // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function LobbyPC2.LobbyPC2_C.GenerateAchievementList
struct ALobbyPC2_C_GenerateAchievementList_Params
{
};

// Function LobbyPC2.LobbyPC2_C.AddAchievementsToArrays
struct ALobbyPC2_C_AddAchievementsToArrays_Params
{
	struct FString                                     Header;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Description;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int                                                CurrentValue;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxValue;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Achieved_;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UTexture2D*                                  Icon;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Hidden_;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function LobbyPC2.LobbyPC2_C.RetrieveAllAchievementInfo
struct ALobbyPC2_C_RetrieveAllAchievementInfo_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyPC2.LobbyPC2_C.SetIsSearching
struct ALobbyPC2_C_SetIsSearching_Params
{
	bool                                               Searching_;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function LobbyPC2.LobbyPC2_C.OnBackButtonPressed
struct ALobbyPC2_C_OnBackButtonPressed_Params
{
};

// Function LobbyPC2.LobbyPC2_C.OnFirstStart
struct ALobbyPC2_C_OnFirstStart_Params
{
};

// Function LobbyPC2.LobbyPC2_C.OnSyncSuccess
struct ALobbyPC2_C_OnSyncSuccess_Params
{
};

// Function LobbyPC2.LobbyPC2_C.PS
struct ALobbyPC2_C_PS_Params
{
	class ALobbyPS_C*                                  AsLobby_PS;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyPC2.LobbyPC2_C.ExitToDesktop
struct ALobbyPC2_C_ExitToDesktop_Params
{
};

// Function LobbyPC2.LobbyPC2_C.WidgetCreation
struct ALobbyPC2_C_WidgetCreation_Params
{
};

// Function LobbyPC2.LobbyPC2_C.GI
struct ALobbyPC2_C_GI_Params
{
	class UGI2_C*                                      AsGI2;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyPC2.LobbyPC2_C.GM
struct ALobbyPC2_C_GM_Params
{
	class ALobbyGM1_C*                                 AsLobby_GM;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyPC2.LobbyPC2_C.LerpGoldCoinTimeline__FinishedFunc
struct ALobbyPC2_C_LerpGoldCoinTimeline__FinishedFunc_Params
{
};

// Function LobbyPC2.LobbyPC2_C.LerpGoldCoinTimeline__UpdateFunc
struct ALobbyPC2_C_LerpGoldCoinTimeline__UpdateFunc_Params
{
};

// Function LobbyPC2.LobbyPC2_C.StokenLerpTimeline__FinishedFunc
struct ALobbyPC2_C_StokenLerpTimeline__FinishedFunc_Params
{
};

// Function LobbyPC2.LobbyPC2_C.StokenLerpTimeline__UpdateFunc
struct ALobbyPC2_C_StokenLerpTimeline__UpdateFunc_Params
{
};

// Function LobbyPC2.LobbyPC2_C.ServerSafety__FinishedFunc
struct ALobbyPC2_C_ServerSafety__FinishedFunc_Params
{
};

// Function LobbyPC2.LobbyPC2_C.ServerSafety__UpdateFunc
struct ALobbyPC2_C_ServerSafety__UpdateFunc_Params
{
};

// Function LobbyPC2.LobbyPC2_C.InpActEvt_Chat_K2Node_InputActionEvent_8
struct ALobbyPC2_C_InpActEvt_Chat_K2Node_InputActionEvent_8_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function LobbyPC2.LobbyPC2_C.InpActEvt_Back_K2Node_InputActionEvent_7
struct ALobbyPC2_C_InpActEvt_Back_K2Node_InputActionEvent_7_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function LobbyPC2.LobbyPC2_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2
struct ALobbyPC2_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function LobbyPC2.LobbyPC2_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1
struct ALobbyPC2_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function LobbyPC2.LobbyPC2_C.InpActEvt_Weapon1_K2Node_InputActionEvent_6
struct ALobbyPC2_C_InpActEvt_Weapon1_K2Node_InputActionEvent_6_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function LobbyPC2.LobbyPC2_C.InpActEvt_Weapon2_K2Node_InputActionEvent_5
struct ALobbyPC2_C_InpActEvt_Weapon2_K2Node_InputActionEvent_5_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function LobbyPC2.LobbyPC2_C.InpActEvt_Weapon3_K2Node_InputActionEvent_4
struct ALobbyPC2_C_InpActEvt_Weapon3_K2Node_InputActionEvent_4_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function LobbyPC2.LobbyPC2_C.InpActEvt_Weapon4_K2Node_InputActionEvent_3
struct ALobbyPC2_C_InpActEvt_Weapon4_K2Node_InputActionEvent_3_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function LobbyPC2.LobbyPC2_C.Completed_A9AF60DE452D9666AE60509F9D982A80
struct ALobbyPC2_C_Completed_A9AF60DE452D9666AE60509F9D982A80_Params
{
	bool                                               bSuccessful;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     Content;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function LobbyPC2.LobbyPC2_C.InpActEvt_Weapon5_K2Node_InputActionEvent_2
struct ALobbyPC2_C_InpActEvt_Weapon5_K2Node_InputActionEvent_2_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function LobbyPC2.LobbyPC2_C.InpActEvt_Weapon6_K2Node_InputActionEvent_1
struct ALobbyPC2_C_InpActEvt_Weapon6_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function LobbyPC2.LobbyPC2_C.OnAuthFinished
struct ALobbyPC2_C_OnAuthFinished_Params
{
};

// Function LobbyPC2.LobbyPC2_C.OnGetAllLobbies
struct ALobbyPC2_C_OnGetAllLobbies_Params
{
};

// Function LobbyPC2.LobbyPC2_C.OnGetAllGames
struct ALobbyPC2_C_OnGetAllGames_Params
{
};

// Function LobbyPC2.LobbyPC2_C.OnProcessReady
struct ALobbyPC2_C_OnProcessReady_Params
{
};

// Function LobbyPC2.LobbyPC2_C.Shop_Lerp_GoldCoins
struct ALobbyPC2_C_Shop_Lerp_GoldCoins_Params
{
	int                                                Old;                                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                New;                                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyPC2.LobbyPC2_C.Shop_Lerp_STokens
struct ALobbyPC2_C_Shop_Lerp_STokens_Params
{
	int                                                Old;                                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                New;                                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyPC2.LobbyPC2_C.RequestShopInventoryList
struct ALobbyPC2_C_RequestShopInventoryList_Params
{
};

// Function LobbyPC2.LobbyPC2_C.ClaimPurchased_Init
struct ALobbyPC2_C_ClaimPurchased_Init_Params
{
	int                                                SlotNumber;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyPC2.LobbyPC2_C.RefundSucceeded?
struct ALobbyPC2_C_RefundSucceeded__Params
{
	bool                                               Succeeded_;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function LobbyPC2.LobbyPC2_C.ClaimingDenied
struct ALobbyPC2_C_ClaimingDenied_Params
{
};

// Function LobbyPC2.LobbyPC2_C.UploadEventTextToServer
struct ALobbyPC2_C_UploadEventTextToServer_Params
{
	struct FText                                       EventText;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function LobbyPC2.LobbyPC2_C.NotifyToClient_Event
struct ALobbyPC2_C_NotifyToClient_Event_Params
{
	bool                                               Success_;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function LobbyPC2.LobbyPC2_C.SetGoldCoinTo0
struct ALobbyPC2_C_SetGoldCoinTo0_Params
{
};

// Function LobbyPC2.LobbyPC2_C.AddSlot03ExpirationDate_A
struct ALobbyPC2_C_AddSlot03ExpirationDate_A_Params
{
	int                                                Days;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Cost;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<EShopItemCostType_EShopItemCostType>   PriceType;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyPC2.LobbyPC2_C.AddPropBoosterExpirationDate
struct ALobbyPC2_C_AddPropBoosterExpirationDate_Params
{
	int                                                Days;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Cost;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<EShopItemCostType_EShopItemCostType>   PriceType;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyPC2.LobbyPC2_C.AddNameChangeAmount
struct ALobbyPC2_C_AddNameChangeAmount_Params
{
	int                                                Cost;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<EShopItemCostType_EShopItemCostType>   PriceType;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyPC2.LobbyPC2_C.SyncSlot03ExpirationDate
struct ALobbyPC2_C_SyncSlot03ExpirationDate_Params
{
	int                                                ExpirationDate__Slot03_;                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyPC2.LobbyPC2_C.SyncPropBoosterExpirationDate
struct ALobbyPC2_C_SyncPropBoosterExpirationDate_Params
{
	int                                                ExpirationDate__PropBooster_;                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyPC2.LobbyPC2_C.DeductNameChange
struct ALobbyPC2_C_DeductNameChange_Params
{
};

// Function LobbyPC2.LobbyPC2_C.UnlockInventory
struct ALobbyPC2_C_UnlockInventory_Params
{
	TEnumAsByte<ItemUnlockType_EItemUnlockType>        PriceType;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ItemPrice;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     DatabaseString;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function LobbyPC2.LobbyPC2_C.HaveAllDlcsAch
struct ALobbyPC2_C_HaveAllDlcsAch_Params
{
};

// Function LobbyPC2.LobbyPC2_C.SetAchBugReport
struct ALobbyPC2_C_SetAchBugReport_Params
{
};

// Function LobbyPC2.LobbyPC2_C.SetAchSuggestion
struct ALobbyPC2_C_SetAchSuggestion_Params
{
};

// Function LobbyPC2.LobbyPC2_C.AddDeductLootBox
struct ALobbyPC2_C_AddDeductLootBox_Params
{
	bool                                               Add___Or_Deduct_;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                LootboxAmount;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                StokenDeductionAmount;                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyPC2.LobbyPC2_C.DeductLoobox
struct ALobbyPC2_C_DeductLoobox_Params
{
};

// Function LobbyPC2.LobbyPC2_C.OnLootboxLogicEndServer
struct ALobbyPC2_C_OnLootboxLogicEndServer_Params
{
	TArray<struct FSLootboxItemCards>                  LootboxItemResult;                                         // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function LobbyPC2.LobbyPC2_C.SyncNameChangeAmount
struct ALobbyPC2_C_SyncNameChangeAmount_Params
{
	int                                                NameChangeAmount;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyPC2.LobbyPC2_C.SyncGoldCoins
struct ALobbyPC2_C_SyncGoldCoins_Params
{
	int                                                Amount;                                                    // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyPC2.LobbyPC2_C.SyncLootBoxAmount1
struct ALobbyPC2_C_SyncLootBoxAmount1_Params
{
	int                                                LootboxAmount;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyPC2.LobbyPC2_C.AddEarlyBirdAch
struct ALobbyPC2_C_AddEarlyBirdAch_Params
{
};

// Function LobbyPC2.LobbyPC2_C.AddVoteKick
struct ALobbyPC2_C_AddVoteKick_Params
{
	int                                                VoteKickAddAmount;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                STokensDeductAmount;                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyPC2.LobbyPC2_C.FSyncVoteKickAmount
struct ALobbyPC2_C_FSyncVoteKickAmount_Params
{
	int                                                VotekickAmount;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyPC2.LobbyPC2_C.AddGameLicense
struct ALobbyPC2_C_AddGameLicense_Params
{
	int                                                Cost;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyPC2.LobbyPC2_C.SyncGameLicenseOwnership
struct ALobbyPC2_C_SyncGameLicenseOwnership_Params
{
};

// Function LobbyPC2.LobbyPC2_C.AddSecondSlotKey
struct ALobbyPC2_C_AddSecondSlotKey_Params
{
	int                                                Cost;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyPC2.LobbyPC2_C.Sync2ndSlotKeyOwnership
struct ALobbyPC2_C_Sync2ndSlotKeyOwnership_Params
{
};

// Function LobbyPC2.LobbyPC2_C.AddGoldPassLight
struct ALobbyPC2_C_AddGoldPassLight_Params
{
	int                                                Cost;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyPC2.LobbyPC2_C.SyncGoldPassLight
struct ALobbyPC2_C_SyncGoldPassLight_Params
{
};

// Function LobbyPC2.LobbyPC2_C.AddGoldPassStandard
struct ALobbyPC2_C_AddGoldPassStandard_Params
{
	int                                                Cost;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyPC2.LobbyPC2_C.SyncGoldPassStandard
struct ALobbyPC2_C_SyncGoldPassStandard_Params
{
};

// Function LobbyPC2.LobbyPC2_C.AddGoldPassDeluxe
struct ALobbyPC2_C_AddGoldPassDeluxe_Params
{
	int                                                Cost;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyPC2.LobbyPC2_C.SyncGoldPassDeluxe
struct ALobbyPC2_C_SyncGoldPassDeluxe_Params
{
};

// Function LobbyPC2.LobbyPC2_C.AddEarlyAccessLicense
struct ALobbyPC2_C_AddEarlyAccessLicense_Params
{
	int                                                Cost;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyPC2.LobbyPC2_C.SyncEarlyAccessLicense
struct ALobbyPC2_C_SyncEarlyAccessLicense_Params
{
};

// Function LobbyPC2.LobbyPC2_C.ReceiveBeginPlay
struct ALobbyPC2_C_ReceiveBeginPlay_Params
{
};

// Function LobbyPC2.LobbyPC2_C.SendErrorMessage
struct ALobbyPC2_C_SendErrorMessage_Params
{
	struct FText                                       errorMessage;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function LobbyPC2.LobbyPC2_C.beginplay_Client
struct ALobbyPC2_C_beginplay_Client_Params
{
	int                                                lobbyID;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyPC2.LobbyPC2_C.ConnectionStatus
struct ALobbyPC2_C_ConnectionStatus_Params
{
	TEnumAsByte<ESwitcher_Entry_ESwitcher_Entry>       status;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       ConnectionMessage;                                         // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function LobbyPC2.LobbyPC2_C.Connect
struct ALobbyPC2_C_Connect_Params
{
};

// Function LobbyPC2.LobbyPC2_C.SendChatToServer
struct ALobbyPC2_C_SendChatToServer_Params
{
	struct FText                                       Message;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	TEnumAsByte<EChatMode_EChatMode>                   MyChatMode;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyPC2.LobbyPC2_C.DisplayChatInLobby
struct ALobbyPC2_C_DisplayChatInLobby_Params
{
	struct FText                                       Message;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       userName;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	TEnumAsByte<EChatMode_EChatMode>                   SenderChatMode;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Myself_;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function LobbyPC2.LobbyPC2_C.OnQuickGamePressed
struct ALobbyPC2_C_OnQuickGamePressed_Params
{
};

// Function LobbyPC2.LobbyPC2_C.OnCompetitiveGamePressed
struct ALobbyPC2_C_OnCompetitiveGamePressed_Params
{
};

// Function LobbyPC2.LobbyPC2_C.UpdateAchievements
struct ALobbyPC2_C_UpdateAchievements_Params
{
};

// Function LobbyPC2.LobbyPC2_C.UpdateAchievementStat
struct ALobbyPC2_C_UpdateAchievementStat_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyPC2.LobbyPC2_C.OnReady
struct ALobbyPC2_C_OnReady_Params
{
};

// Function LobbyPC2.LobbyPC2_C.InitServerSendDelay
struct ALobbyPC2_C_InitServerSendDelay_Params
{
};

// Function LobbyPC2.LobbyPC2_C.KickClient
struct ALobbyPC2_C_KickClient_Params
{
	struct FString                                     AuthReason;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function LobbyPC2.LobbyPC2_C.InitiateTxnServer
struct ALobbyPC2_C_InitiateTxnServer_Params
{
	struct FString                                     UserSteamID;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     UserLanguage;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TEnumAsByte<TxnType_ETxnType>                      ItemToPayFor;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyPC2.LobbyPC2_C.TxnAuthResponse
struct ALobbyPC2_C_TxnAuthResponse_Params
{
	int                                                AppID;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     OrderID;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                               bAuthorized;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function LobbyPC2.LobbyPC2_C.FinalizeBilling
struct ALobbyPC2_C_FinalizeBilling_Params
{
	struct FString                                     OrderID;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     RequestedSteamID;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TEnumAsByte<TxnType_ETxnType>                      WhichOne_;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyPC2.LobbyPC2_C.TxnBinding
struct ALobbyPC2_C_TxnBinding_Params
{
};

// Function LobbyPC2.LobbyPC2_C.ExecuteRequest
struct ALobbyPC2_C_ExecuteRequest_Params
{
	class ULowEntryHttpRequestResponse*                Response;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyPC2.LobbyPC2_C.SetPlayerSessionOnServer
struct ALobbyPC2_C_SetPlayerSessionOnServer_Params
{
	struct FString                                     playerSessionId;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FText                                       VersionCheck;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function LobbyPC2.LobbyPC2_C.GetSteamId_Event
struct ALobbyPC2_C_GetSteamId_Event_Params
{
};

// Function LobbyPC2.LobbyPC2_C.SetSteamId_Event
struct ALobbyPC2_C_SetSteamId_Event_Params
{
	struct FString                                     SteamID;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function LobbyPC2.LobbyPC2_C.BeginAuthProcess_Event
struct ALobbyPC2_C_BeginAuthProcess_Event_Params
{
};

// Function LobbyPC2.LobbyPC2_C.AuthTicketResponse
struct ALobbyPC2_C_AuthTicketResponse_Params
{
	struct FUWorksTicketHandle                         AuthTicket;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	UWorksCore_EUWorksResult                           Result;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyPC2.LobbyPC2_C.AuthTicketOnServer_Event
struct ALobbyPC2_C_AuthTicketOnServer_Event_Params
{
	TArray<unsigned char>                              Ticket;                                                    // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function LobbyPC2.LobbyPC2_C.AuthTicketServerResponse
struct ALobbyPC2_C_AuthTicketServerResponse_Params
{
	struct FUWorksSteamID                              SteamID;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	UWorksCore_EUWorksAuthSessionResponse              AuthSessionResponse;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUWorksSteamID                              OwnerSteamID;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function LobbyPC2.LobbyPC2_C.Verified
struct ALobbyPC2_C_Verified_Params
{
};

// Function LobbyPC2.LobbyPC2_C.OnRequestUserStatsCompleted
struct ALobbyPC2_C_OnRequestUserStatsCompleted_Params
{
	bool                                               bSuccessful;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FUWorksGameID                               GameID;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	UWorksCore_EUWorksResult                           Result;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUWorksSteamID                              SteamID;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function LobbyPC2.LobbyPC2_C.WhenEnteredNewUsername
struct ALobbyPC2_C_WhenEnteredNewUsername_Params
{
	struct FString                                     userName;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function LobbyPC2.LobbyPC2_C.TransferInfo
struct ALobbyPC2_C_TransferInfo_Params
{
	struct FString                                     userName;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function LobbyPC2.LobbyPC2_C.Debug_ResetSteamStats
struct ALobbyPC2_C_Debug_ResetSteamStats_Params
{
};

// Function LobbyPC2.LobbyPC2_C.Debug_ResetSteamStatsServer
struct ALobbyPC2_C_Debug_ResetSteamStatsServer_Params
{
};

// Function LobbyPC2.LobbyPC2_C.RunResetSteamStats
struct ALobbyPC2_C_RunResetSteamStats_Params
{
};

// Function LobbyPC2.LobbyPC2_C.RegisterChangedSelection
struct ALobbyPC2_C_RegisterChangedSelection_Params
{
	TEnumAsByte<ItemSection_EItemSection>              Category;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ItemNumber;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyPC2.LobbyPC2_C.NeverPlayedBefore
struct ALobbyPC2_C_NeverPlayedBefore_Params
{
};

// Function LobbyPC2.LobbyPC2_C.InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_1
struct ALobbyPC2_C_InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_1_Params
{
	float                                              AxisValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyPC2.LobbyPC2_C.WinReviewFeat
struct ALobbyPC2_C_WinReviewFeat_Params
{
};

// Function LobbyPC2.LobbyPC2_C.StartSessionCreation01_GetNumber
struct ALobbyPC2_C_StartSessionCreation01_GetNumber_Params
{
};

// Function LobbyPC2.LobbyPC2_C.OnMicrotxnFinished
struct ALobbyPC2_C_OnMicrotxnFinished_Params
{
	bool                                               Success_;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function LobbyPC2.LobbyPC2_C.InitiateRefundTxnServer
struct ALobbyPC2_C_InitiateRefundTxnServer_Params
{
	struct FString                                     OrderID;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function LobbyPC2.LobbyPC2_C.RefundRequestResponse
struct ALobbyPC2_C_RefundRequestResponse_Params
{
	class ULowEntryHttpRequestResponse*                Response;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyPC2.LobbyPC2_C.UpdateNewPlayerVersion
struct ALobbyPC2_C_UpdateNewPlayerVersion_Params
{
};

// Function LobbyPC2.LobbyPC2_C.InputChat (Custom)
struct ALobbyPC2_C_InputChat__Custom__Params
{
};

// Function LobbyPC2.LobbyPC2_C.RetrieveLeaderboardID
struct ALobbyPC2_C_RetrieveLeaderboardID_Params
{
};

// Function LobbyPC2.LobbyPC2_C.Delete
struct ALobbyPC2_C_Delete_Params
{
};

// Function LobbyPC2.LobbyPC2_C.StartSessionCreation02_ReceiveNumber
struct ALobbyPC2_C_StartSessionCreation02_ReceiveNumber_Params
{
	int                                                SessionNumber;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyPC2.LobbyPC2_C.CreateGameSessionServer
struct ALobbyPC2_C_CreateGameSessionServer_Params
{
	struct FString                                     gameSessionId;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     gameSessionData;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Creator;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Title;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function LobbyPC2.LobbyPC2_C.JoinedQuickQueue?
struct ALobbyPC2_C_JoinedQuickQueue__Params
{
};

// Function LobbyPC2.LobbyPC2_C.BlockPurchases
struct ALobbyPC2_C_BlockPurchases_Params
{
};

// Function LobbyPC2.LobbyPC2_C.BlockJoinCreateGames
struct ALobbyPC2_C_BlockJoinCreateGames_Params
{
};

// Function LobbyPC2.LobbyPC2_C.RequestDeletion
struct ALobbyPC2_C_RequestDeletion_Params
{
	struct FString                                     gameSessionId;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function LobbyPC2.LobbyPC2_C.TestServ
struct ALobbyPC2_C_TestServ_Params
{
};

// Function LobbyPC2.LobbyPC2_C.ToggleCompensates
struct ALobbyPC2_C_ToggleCompensates_Params
{
	bool                                               Compensated_;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function LobbyPC2.LobbyPC2_C.RunCompensation
struct ALobbyPC2_C_RunCompensation_Params
{
};

// Function LobbyPC2.LobbyPC2_C.Shortcut_Menu
struct ALobbyPC2_C_Shortcut_Menu_Params
{
	int                                                MenuNumber;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyPC2.LobbyPC2_C.ExecuteUbergraph_LobbyPC2
struct ALobbyPC2_C_ExecuteUbergraph_LobbyPC2_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyPC2.LobbyPC2_C.CancelMatchmaking__DelegateSignature
struct ALobbyPC2_C_CancelMatchmaking__DelegateSignature_Params
{
};

// Function LobbyPC2.LobbyPC2_C.JoinSearchedCustomMatch__DelegateSignature
struct ALobbyPC2_C_JoinSearchedCustomMatch__DelegateSignature_Params
{
};

// Function LobbyPC2.LobbyPC2_C.SearchCustomMatch__DelegateSignature
struct ALobbyPC2_C_SearchCustomMatch__DelegateSignature_Params
{
};

// Function LobbyPC2.LobbyPC2_C.JoinQuickGame__DelegateSignature
struct ALobbyPC2_C_JoinQuickGame__DelegateSignature_Params
{
};

// Function LobbyPC2.LobbyPC2_C.JoinCompetitiveGame__DelegateSignature
struct ALobbyPC2_C_JoinCompetitiveGame__DelegateSignature_Params
{
};

// Function LobbyPC2.LobbyPC2_C.JoinCustomMatch__DelegateSignature
struct ALobbyPC2_C_JoinCustomMatch__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
