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

// Function LobbyGM1.LobbyGM1_C.CheckOwningThisVariable
struct ALobbyGM1_C_CheckOwningThisVariable_Params
{
	struct FString                                     LocalSteamID;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     DatabaseVariableName;                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                               HasItem_;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function LobbyGM1.LobbyGM1_C.CheckBadUsername
struct ALobbyGM1_C_CheckBadUsername_Params
{
	class ALobbyPC2_C*                                 Player;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyGM1.LobbyGM1_C.ResetReports
struct ALobbyGM1_C_ResetReports_Params
{
	class ALobbyPC2_C*                                 Player;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyGM1.LobbyGM1_C.EventEnthusiast_Work
struct ALobbyGM1_C_EventEnthusiast_Work_Params
{
	class ALobbyPC2_C*                                 Player;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyGM1.LobbyGM1_C.EventTreasureHunter_Work
struct ALobbyGM1_C_EventTreasureHunter_Work_Params
{
	class ALobbyPC2_C*                                 Player;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyGM1.LobbyGM1_C.CheckCompensation
struct ALobbyGM1_C_CheckCompensation_Params
{
	class ALobbyPC2_C*                                 Player;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyGM1.LobbyGM1_C.AddVoteKickTicket
struct ALobbyGM1_C_AddVoteKickTicket_Params
{
	class ALobbyPC2_C*                                 Player;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Amount;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyGM1.LobbyGM1_C.AddBetaPurchasedAch
struct ALobbyGM1_C_AddBetaPurchasedAch_Params
{
	struct FString                                     SteamID;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function LobbyGM1.LobbyGM1_C.EquipNewSpectator
struct ALobbyGM1_C_EquipNewSpectator_Params
{
	struct FString                                     SteamID;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int                                                Default_Spectator_Index;                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyGM1.LobbyGM1_C.InitiateOpeningLootbox
struct ALobbyGM1_C_InitiateOpeningLootbox_Params
{
	class ALobbyPC2_C*                                 Player;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSLootboxItemCards>                  LootboxesInfo;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function LobbyGM1.LobbyGM1_C.DeductLootBoxAmount
struct ALobbyGM1_C_DeductLootBoxAmount_Params
{
	class ALobbyPC2_C*                                 Player;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Add___Or_Subtract_;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                Amount;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyGM1.LobbyGM1_C.AddStatHaveAllDlcs
struct ALobbyGM1_C_AddStatHaveAllDlcs_Params
{
	struct FString                                     SteamID;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function LobbyGM1.LobbyGM1_C.EquipNewTauntingSound
struct ALobbyGM1_C_EquipNewTauntingSound_Params
{
	struct FString                                     SteamID;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int                                                DefaultTauntingSoundIndex;                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyGM1.LobbyGM1_C.UnlockInventory
struct ALobbyGM1_C_UnlockInventory_Params
{
	struct FString                                     SteamID;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TEnumAsByte<ItemUnlockType_EItemUnlockType>        ItemPriceType;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ItemPrice;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     DatabaseString;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class ALobbyPC2_C*                                 Player;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyGM1.LobbyGM1_C.ConvertTimeA
struct ALobbyGM1_C_ConvertTimeA_Params
{
	int                                                Input_Integer;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                                   DateTime;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FString                                     DisplayDate;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function LobbyGM1.LobbyGM1_C.DeleteRefundedSlot
struct ALobbyGM1_C_DeleteRefundedSlot_Params
{
	struct FString                                     SteamID;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int                                                SlotNumber;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Success_;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function LobbyGM1.LobbyGM1_C.VerifyRefund
struct ALobbyGM1_C_VerifyRefund_Params
{
	struct FString                                     STEAM;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     OrderID;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                               CanRefund_;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                SlotNumber;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyGM1.LobbyGM1_C.RetrievePurchased
struct ALobbyGM1_C_RetrievePurchased_Params
{
	class ALobbyPC2_C*                                 Player;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSShopInventory>                     PurchasedItemList;                                         // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
};

// Function LobbyGM1.LobbyGM1_C.ClaimPurchased
struct ALobbyGM1_C_ClaimPurchased_Params
{
	class ALobbyPC2_C*                                 Player;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                SlotNumber;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyGM1.LobbyGM1_C.DeleteAllPurchaseInfo
struct ALobbyGM1_C_DeleteAllPurchaseInfo_Params
{
	struct FString                                     SteamID;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function LobbyGM1.LobbyGM1_C.DeletePurchaseInfo
struct ALobbyGM1_C_DeletePurchaseInfo_Params
{
	struct FString                                     SteamID;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     OrderID;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TEnumAsByte<TxnType_ETxnType>                      ItemType;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Success_;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function LobbyGM1.LobbyGM1_C.StorePurchaseInfo
struct ALobbyGM1_C_StorePurchaseInfo_Params
{
	struct FString                                     SteamID;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     OrderID;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TEnumAsByte<TxnType_ETxnType>                      ItemType;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Success_;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function LobbyGM1.LobbyGM1_C.DeductNameChange
struct ALobbyGM1_C_DeductNameChange_Params
{
	class ALobbyPC2_C*                                 LobbyPC;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyGM1.LobbyGM1_C.AddNameChange
struct ALobbyGM1_C_AddNameChange_Params
{
	class ALobbyPC2_C*                                 LobbyPC;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyGM1.LobbyGM1_C.DeductStokens
struct ALobbyGM1_C_DeductStokens_Params
{
	struct FString                                     SteamID;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int                                                Amount;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ALobbyPC2_C*                                 Player;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Succeeded_;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function LobbyGM1.LobbyGM1_C.DeductGoldCoins
struct ALobbyGM1_C_DeductGoldCoins_Params
{
	struct FString                                     SteamID;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int                                                Amount;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ALobbyPC2_C*                                 Player;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Succeeded_;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function LobbyGM1.LobbyGM1_C.AddPropBoosterExpirationDate
struct ALobbyGM1_C_AddPropBoosterExpirationDate_Params
{
	class ALobbyPC2_C*                                 LobbyPC;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Days;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyGM1.LobbyGM1_C.AddSlot03ExpirationDate
struct ALobbyGM1_C_AddSlot03ExpirationDate_Params
{
	class ALobbyPC2_C*                                 LobbyPC;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Days;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyGM1.LobbyGM1_C.AddToQueue(StoreStatsQueue)
struct ALobbyGM1_C_AddToQueue_StoreStatsQueue__Params
{
	struct FString                                     SteamID;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function LobbyGM1.LobbyGM1_C.NewPlayerVersionSteamStats
struct ALobbyGM1_C_NewPlayerVersionSteamStats_Params
{
	struct FString                                     SteamID;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function LobbyGM1.LobbyGM1_C.SetGoldCoins
struct ALobbyGM1_C_SetGoldCoins_Params
{
	struct FString                                     SteamID;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int                                                GoldCoinSetTo;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyGM1.LobbyGM1_C.UpdateNewPlayerVersion
struct ALobbyGM1_C_UpdateNewPlayerVersion_Params
{
	struct FString                                     SteamID;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class ALobbyPC2_C*                                 Player;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyGM1.LobbyGM1_C.RequestRefundMicrotransaction
struct ALobbyGM1_C_RequestRefundMicrotransaction_Params
{
	struct FString                                     OrderID;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class ULowEntryHttpRequest*                        RequestHttpObject;                                         // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyGM1.LobbyGM1_C.GetRefundTxnInfo
struct ALobbyGM1_C_GetRefundTxnInfo_Params
{
	struct FString                                     OrderID;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FText                                       ContentAsString;                                           // 0x0000(0x0018)  (Parm, OutParm)
	struct FText                                       SetUrl;                                                    // 0x0000(0x0018)  (Parm, OutParm)
};

// Function LobbyGM1.LobbyGM1_C.RemovePlayer
struct ALobbyGM1_C_RemovePlayer_Params
{
	class ALobbyPC2_C*                                 PC;                                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Success_;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function LobbyGM1.LobbyGM1_C.SearchOrderID
struct ALobbyGM1_C_SearchOrderID_Params
{
	struct FString                                     OrderID;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                               Found_;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     RequestedSteamID;                                          // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Output_OrderID;                                            // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	TEnumAsByte<TxnType_ETxnType>                      WhichOne_;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyGM1.LobbyGM1_C.EventGandalv_Work
struct ALobbyGM1_C_EventGandalv_Work_Params
{
	struct FString                                     SteamID;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function LobbyGM1.LobbyGM1_C.LeaveReview_Work
struct ALobbyGM1_C_LeaveReview_Work_Params
{
	struct FString                                     SteamID;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function LobbyGM1.LobbyGM1_C.Suggestions_Work
struct ALobbyGM1_C_Suggestions_Work_Params
{
	struct FString                                     SteamID;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function LobbyGM1.LobbyGM1_C.BugReport_Work
struct ALobbyGM1_C_BugReport_Work_Params
{
	struct FString                                     SteamID;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function LobbyGM1.LobbyGM1_C.JustJoinedLobby
struct ALobbyGM1_C_JustJoinedLobby_Params
{
	struct FString                                     SteamID;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function LobbyGM1.LobbyGM1_C.NeverPlayedBefore
struct ALobbyGM1_C_NeverPlayedBefore_Params
{
	struct FString                                     SteamID;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function LobbyGM1.LobbyGM1_C.EquipNewAlias
struct ALobbyGM1_C_EquipNewAlias_Params
{
	struct FString                                     SteamID;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int                                                Default_Index;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyGM1.LobbyGM1_C.EquipNewCharacter
struct ALobbyGM1_C_EquipNewCharacter_Params
{
	struct FString                                     SteamID;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int                                                Default_Character_Index;                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyGM1.LobbyGM1_C.SetLeaderboard
struct ALobbyGM1_C_SetLeaderboard_Params
{
	struct FString                                     SteamID;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     LeaderboardID;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int                                                Score;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULowEntryHttpRequest*                        RequestHttpObject;                                         // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyGM1.LobbyGM1_C.InvalidateAllTimer
struct ALobbyGM1_C_InvalidateAllTimer_Params
{
};

// Function LobbyGM1.LobbyGM1_C.SetUsername
struct ALobbyGM1_C_SetUsername_Params
{
	TArray<int>                                        userName;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FString                                     SteamID;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function LobbyGM1.LobbyGM1_C.SearchPlayer
struct ALobbyGM1_C_SearchPlayer_Params
{
	struct FString                                     SteamID;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                               Success_;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class ALobbyPC2_C*                                 Player;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyGM1.LobbyGM1_C.AddToQueue(GetStatsQueue)
struct ALobbyGM1_C_AddToQueue_GetStatsQueue__Params
{
	struct FString                                     SteamID;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TEnumAsByte<EWhichWork_EWhichWork>                 Work;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyGM1.LobbyGM1_C.RemovePlayer(GetStatsQueue)
struct ALobbyGM1_C_RemovePlayer_GetStatsQueue__Params
{
	struct FString                                     SteamID;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TEnumAsByte<EWhichWork_EWhichWork>                 Work;                                                      // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     Log;                                                       // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function LobbyGM1.LobbyGM1_C.RemovePlayer(StoreStatsQueue)
struct ALobbyGM1_C_RemovePlayer_StoreStatsQueue__Params
{
	struct FString                                     SteamID;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Log;                                                       // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function LobbyGM1.LobbyGM1_C.CheckIfNoPlayersExist
struct ALobbyGM1_C_CheckIfNoPlayersExist_Params
{
};

// Function LobbyGM1.LobbyGM1_C.GI
struct ALobbyGM1_C_GI_Params
{
	class UGI2_C*                                      AsGI2;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyGM1.LobbyGM1_C.FinalizeMicrotransaction
struct ALobbyGM1_C_FinalizeMicrotransaction_Params
{
	struct FString                                     OrderID;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class ULowEntryHttpRequest*                        RequestHttpObject;                                         // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyGM1.LobbyGM1_C.RequestMicrotransaction
struct ALobbyGM1_C_RequestMicrotransaction_Params
{
	TEnumAsByte<TxnType_ETxnType>                      ItemToPayFor;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     SteamID;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     UsersLanguage;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class ULowEntryHttpRequest*                        RequestHttpObject;                                         // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyGM1.LobbyGM1_C.GetTxnInfo
struct ALobbyGM1_C_GetTxnInfo_Params
{
	TEnumAsByte<TxnType_ETxnType>                      ItemToPayFor;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     SteamID;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     UsersLanguage;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FText                                       ContentAsString;                                           // 0x0000(0x0018)  (Parm, OutParm)
	struct FText                                       SetUrl;                                                    // 0x0000(0x0018)  (Parm, OutParm)
};

// Function LobbyGM1.LobbyGM1_C.EndTimer
struct ALobbyGM1_C_EndTimer_Params
{
	struct FTimespan                                   EndAfterThisTimeSpan;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                               TimeReached_;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     TimeLeft;                                                  // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function LobbyGM1.LobbyGM1_C.PlayerState
struct ALobbyGM1_C_PlayerState_Params
{
	TArray<class APlayerState*>                        PlayerArray;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
};

// Function LobbyGM1.LobbyGM1_C.PS
struct ALobbyGM1_C_PS_Params
{
	class ALobbyPC2_C*                                 LobbyPC;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ALobbyPS_C*                                  AsLobby_PS;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyGM1.LobbyGM1_C.SendChatToClients
struct ALobbyGM1_C_SendChatToClients_Params
{
	struct FText                                       Message;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	class ALobbyPC2_C*                                 LobbyPC;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<EChatMode_EChatMode>                   SenderChatMode;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyGM1.LobbyGM1_C.SecIncrement
struct ALobbyGM1_C_SecIncrement_Params
{
};

// Function LobbyGM1.LobbyGM1_C.Beginplay_Stats
struct ALobbyGM1_C_Beginplay_Stats_Params
{
};

// Function LobbyGM1.LobbyGM1_C.OnRequestCompleted_RequestUserStats
struct ALobbyGM1_C_OnRequestCompleted_RequestUserStats_Params
{
	bool                                               bSuccessful;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	UWorksCore_EUWorksResult                           Result;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUWorksSteamID                              SteamIDUser;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function LobbyGM1.LobbyGM1_C.GetStats_Loop
struct ALobbyGM1_C_GetStats_Loop_Params
{
};

// Function LobbyGM1.LobbyGM1_C.GetStatsPlayer
struct ALobbyGM1_C_GetStatsPlayer_Params
{
};

// Function LobbyGM1.LobbyGM1_C.Unpause_GetStats
struct ALobbyGM1_C_Unpause_GetStats_Params
{
};

// Function LobbyGM1.LobbyGM1_C.Pause_GetStats
struct ALobbyGM1_C_Pause_GetStats_Params
{
};

// Function LobbyGM1.LobbyGM1_C.SteamStatsBinder02_RequestUserStats
struct ALobbyGM1_C_SteamStatsBinder02_RequestUserStats_Params
{
};

// Function LobbyGM1.LobbyGM1_C.SteamStatsBinder03_GetStats
struct ALobbyGM1_C_SteamStatsBinder03_GetStats_Params
{
};

// Function LobbyGM1.LobbyGM1_C.FinalizeRequestBillingQueue
struct ALobbyGM1_C_FinalizeRequestBillingQueue_Params
{
	struct FString                                     OrderID;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     RequestedSteamID;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TEnumAsByte<TxnType_ETxnType>                      WhichOne_;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyGM1.LobbyGM1_C.ExecuteRequest2
struct ALobbyGM1_C_ExecuteRequest2_Params
{
	class ULowEntryHttpRequestResponse*                Response;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyGM1.LobbyGM1_C.SteamStatsBinder05_MicroTxn
struct ALobbyGM1_C_SteamStatsBinder05_MicroTxn_Params
{
};

// Function LobbyGM1.LobbyGM1_C.BillingLoop
struct ALobbyGM1_C_BillingLoop_Params
{
};

// Function LobbyGM1.LobbyGM1_C.FinalizeBilling
struct ALobbyGM1_C_FinalizeBilling_Params
{
};

// Function LobbyGM1.LobbyGM1_C.StoreStatsLoop
struct ALobbyGM1_C_StoreStatsLoop_Params
{
};

// Function LobbyGM1.LobbyGM1_C.SteamStatsBinder07_StoreStats
struct ALobbyGM1_C_SteamStatsBinder07_StoreStats_Params
{
};

// Function LobbyGM1.LobbyGM1_C.ProcessStoreStats
struct ALobbyGM1_C_ProcessStoreStats_Params
{
};

// Function LobbyGM1.LobbyGM1_C.OnRequestCompleted_StoreUserStats
struct ALobbyGM1_C_OnRequestCompleted_StoreUserStats_Params
{
	bool                                               bSuccessful;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	UWorksCore_EUWorksResult                           Result;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUWorksSteamID                              SteamIDUser;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function LobbyGM1.LobbyGM1_C.SteamStatsBinder08_RequestStoreStats
struct ALobbyGM1_C_SteamStatsBinder08_RequestStoreStats_Params
{
};

// Function LobbyGM1.LobbyGM1_C.ReceiveBeginPlay
struct ALobbyGM1_C_ReceiveBeginPlay_Params
{
};

// Function LobbyGM1.LobbyGM1_C.K2_OnLogout
struct ALobbyGM1_C_K2_OnLogout_Params
{
	class AController*                                 ExitingController;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyGM1.LobbyGM1_C.K2_PostLogin
struct ALobbyGM1_C_K2_PostLogin_Params
{
	class APlayerController*                           NewPlayer;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyGM1.LobbyGM1_C.AcceptPlayerSessionID
struct ALobbyGM1_C_AcceptPlayerSessionID_Params
{
	struct FString                                     playerSessionId;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function LobbyGM1.LobbyGM1_C.CheckInvalidGameSessionsEvent
struct ALobbyGM1_C_CheckInvalidGameSessionsEvent_Params
{
};

// Function LobbyGM1.LobbyGM1_C.StartShutDownCount
struct ALobbyGM1_C_StartShutDownCount_Params
{
};

// Function LobbyGM1.LobbyGM1_C.StartLobby
struct ALobbyGM1_C_StartLobby_Params
{
};

// Function LobbyGM1.LobbyGM1_C.ExecuteUbergraph_LobbyGM1
struct ALobbyGM1_C_ExecuteUbergraph_LobbyGM1_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
