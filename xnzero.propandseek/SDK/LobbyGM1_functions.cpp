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
//		Name   -> Function LobbyGM1.LobbyGM1_C.CheckOwningThisVariable
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     LocalSteamID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     DatabaseVariableName                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		bool                                               HasItem_                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ALobbyGM1_C::CheckOwningThisVariable(const struct FString& LocalSteamID, const struct FString& DatabaseVariableName, bool* HasItem_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyGM1.LobbyGM1_C.CheckOwningThisVariable");

	ALobbyGM1_C_CheckOwningThisVariable_Params params {};
	params.LocalSteamID = LocalSteamID;
	params.DatabaseVariableName = DatabaseVariableName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HasItem_ != nullptr)
		*HasItem_ = params.HasItem_;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyGM1.LobbyGM1_C.CheckBadUsername
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ALobbyPC2_C*                                 Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyGM1_C::CheckBadUsername(class ALobbyPC2_C* Player)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyGM1.LobbyGM1_C.CheckBadUsername");

	ALobbyGM1_C_CheckBadUsername_Params params {};
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyGM1.LobbyGM1_C.ResetReports
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ALobbyPC2_C*                                 Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyGM1_C::ResetReports(class ALobbyPC2_C* Player)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyGM1.LobbyGM1_C.ResetReports");

	ALobbyGM1_C_ResetReports_Params params {};
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyGM1.LobbyGM1_C.EventEnthusiast_Work
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ALobbyPC2_C*                                 Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyGM1_C::EventEnthusiast_Work(class ALobbyPC2_C* Player)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyGM1.LobbyGM1_C.EventEnthusiast_Work");

	ALobbyGM1_C_EventEnthusiast_Work_Params params {};
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyGM1.LobbyGM1_C.EventTreasureHunter_Work
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ALobbyPC2_C*                                 Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyGM1_C::EventTreasureHunter_Work(class ALobbyPC2_C* Player)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyGM1.LobbyGM1_C.EventTreasureHunter_Work");

	ALobbyGM1_C_EventTreasureHunter_Work_Params params {};
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyGM1.LobbyGM1_C.CheckCompensation
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ALobbyPC2_C*                                 Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyGM1_C::CheckCompensation(class ALobbyPC2_C* Player)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyGM1.LobbyGM1_C.CheckCompensation");

	ALobbyGM1_C_CheckCompensation_Params params {};
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyGM1.LobbyGM1_C.AddVoteKickTicket
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ALobbyPC2_C*                                 Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyGM1_C::AddVoteKickTicket(class ALobbyPC2_C* Player, int Amount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyGM1.LobbyGM1_C.AddVoteKickTicket");

	ALobbyGM1_C_AddVoteKickTicket_Params params {};
	params.Player = Player;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyGM1.LobbyGM1_C.AddBetaPurchasedAch
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     SteamID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void ALobbyGM1_C::AddBetaPurchasedAch(const struct FString& SteamID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyGM1.LobbyGM1_C.AddBetaPurchasedAch");

	ALobbyGM1_C_AddBetaPurchasedAch_Params params {};
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyGM1.LobbyGM1_C.EquipNewSpectator
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     SteamID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		int                                                Default_Spectator_Index                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyGM1_C::EquipNewSpectator(const struct FString& SteamID, int Default_Spectator_Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyGM1.LobbyGM1_C.EquipNewSpectator");

	ALobbyGM1_C_EquipNewSpectator_Params params {};
	params.SteamID = SteamID;
	params.Default_Spectator_Index = Default_Spectator_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyGM1.LobbyGM1_C.InitiateOpeningLootbox
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ALobbyPC2_C*                                 Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<struct FSLootboxItemCards>                  LootboxesInfo                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void ALobbyGM1_C::InitiateOpeningLootbox(class ALobbyPC2_C* Player, TArray<struct FSLootboxItemCards>* LootboxesInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyGM1.LobbyGM1_C.InitiateOpeningLootbox");

	ALobbyGM1_C_InitiateOpeningLootbox_Params params {};
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LootboxesInfo != nullptr)
		*LootboxesInfo = params.LootboxesInfo;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyGM1.LobbyGM1_C.DeductLootBoxAmount
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ALobbyPC2_C*                                 Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Add___Or_Subtract_                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		int                                                Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyGM1_C::DeductLootBoxAmount(class ALobbyPC2_C* Player, bool Add___Or_Subtract_, int Amount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyGM1.LobbyGM1_C.DeductLootBoxAmount");

	ALobbyGM1_C_DeductLootBoxAmount_Params params {};
	params.Player = Player;
	params.Add___Or_Subtract_ = Add___Or_Subtract_;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyGM1.LobbyGM1_C.AddStatHaveAllDlcs
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     SteamID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void ALobbyGM1_C::AddStatHaveAllDlcs(const struct FString& SteamID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyGM1.LobbyGM1_C.AddStatHaveAllDlcs");

	ALobbyGM1_C_AddStatHaveAllDlcs_Params params {};
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyGM1.LobbyGM1_C.EquipNewTauntingSound
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     SteamID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		int                                                DefaultTauntingSoundIndex                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyGM1_C::EquipNewTauntingSound(const struct FString& SteamID, int DefaultTauntingSoundIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyGM1.LobbyGM1_C.EquipNewTauntingSound");

	ALobbyGM1_C_EquipNewTauntingSound_Params params {};
	params.SteamID = SteamID;
	params.DefaultTauntingSoundIndex = DefaultTauntingSoundIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyGM1.LobbyGM1_C.UnlockInventory
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     SteamID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		TEnumAsByte<ItemUnlockType_EItemUnlockType>        ItemPriceType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                ItemPrice                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FString                                     DatabaseString                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		class ALobbyPC2_C*                                 Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyGM1_C::UnlockInventory(const struct FString& SteamID, TEnumAsByte<ItemUnlockType_EItemUnlockType> ItemPriceType, int ItemPrice, const struct FString& DatabaseString, class ALobbyPC2_C* Player)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyGM1.LobbyGM1_C.UnlockInventory");

	ALobbyGM1_C_UnlockInventory_Params params {};
	params.SteamID = SteamID;
	params.ItemPriceType = ItemPriceType;
	params.ItemPrice = ItemPrice;
	params.DatabaseString = DatabaseString;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyGM1.LobbyGM1_C.ConvertTimeA
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Input_Integer                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FDateTime                                   DateTime                                                   (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
//		struct FString                                     DisplayDate                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void ALobbyGM1_C::ConvertTimeA(int Input_Integer, struct FDateTime* DateTime, struct FString* DisplayDate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyGM1.LobbyGM1_C.ConvertTimeA");

	ALobbyGM1_C_ConvertTimeA_Params params {};
	params.Input_Integer = Input_Integer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DateTime != nullptr)
		*DateTime = params.DateTime;
	if (DisplayDate != nullptr)
		*DisplayDate = params.DisplayDate;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyGM1.LobbyGM1_C.DeleteRefundedSlot
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     SteamID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		int                                                SlotNumber                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Success_                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ALobbyGM1_C::DeleteRefundedSlot(const struct FString& SteamID, int SlotNumber, bool* Success_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyGM1.LobbyGM1_C.DeleteRefundedSlot");

	ALobbyGM1_C_DeleteRefundedSlot_Params params {};
	params.SteamID = SteamID;
	params.SlotNumber = SlotNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success_ != nullptr)
		*Success_ = params.Success_;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyGM1.LobbyGM1_C.VerifyRefund
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     STEAM                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     OrderID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		bool                                               CanRefund_                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		int                                                SlotNumber                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyGM1_C::VerifyRefund(const struct FString& STEAM, const struct FString& OrderID, bool* CanRefund_, int* SlotNumber)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyGM1.LobbyGM1_C.VerifyRefund");

	ALobbyGM1_C_VerifyRefund_Params params {};
	params.STEAM = STEAM;
	params.OrderID = OrderID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CanRefund_ != nullptr)
		*CanRefund_ = params.CanRefund_;
	if (SlotNumber != nullptr)
		*SlotNumber = params.SlotNumber;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyGM1.LobbyGM1_C.RetrievePurchased
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ALobbyPC2_C*                                 Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<struct FSShopInventory>                     PurchasedItemList                                          (Parm, OutParm, ZeroConstructor)
void ALobbyGM1_C::RetrievePurchased(class ALobbyPC2_C* Player, TArray<struct FSShopInventory>* PurchasedItemList)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyGM1.LobbyGM1_C.RetrievePurchased");

	ALobbyGM1_C_RetrievePurchased_Params params {};
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PurchasedItemList != nullptr)
		*PurchasedItemList = params.PurchasedItemList;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyGM1.LobbyGM1_C.ClaimPurchased
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ALobbyPC2_C*                                 Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                SlotNumber                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyGM1_C::ClaimPurchased(class ALobbyPC2_C* Player, int SlotNumber)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyGM1.LobbyGM1_C.ClaimPurchased");

	ALobbyGM1_C_ClaimPurchased_Params params {};
	params.Player = Player;
	params.SlotNumber = SlotNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyGM1.LobbyGM1_C.DeleteAllPurchaseInfo
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     SteamID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void ALobbyGM1_C::DeleteAllPurchaseInfo(const struct FString& SteamID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyGM1.LobbyGM1_C.DeleteAllPurchaseInfo");

	ALobbyGM1_C_DeleteAllPurchaseInfo_Params params {};
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyGM1.LobbyGM1_C.DeletePurchaseInfo
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     SteamID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     OrderID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		TEnumAsByte<TxnType_ETxnType>                      ItemType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Success_                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ALobbyGM1_C::DeletePurchaseInfo(const struct FString& SteamID, const struct FString& OrderID, TEnumAsByte<TxnType_ETxnType> ItemType, bool* Success_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyGM1.LobbyGM1_C.DeletePurchaseInfo");

	ALobbyGM1_C_DeletePurchaseInfo_Params params {};
	params.SteamID = SteamID;
	params.OrderID = OrderID;
	params.ItemType = ItemType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success_ != nullptr)
		*Success_ = params.Success_;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyGM1.LobbyGM1_C.StorePurchaseInfo
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     SteamID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     OrderID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		TEnumAsByte<TxnType_ETxnType>                      ItemType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Success_                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ALobbyGM1_C::StorePurchaseInfo(const struct FString& SteamID, const struct FString& OrderID, TEnumAsByte<TxnType_ETxnType> ItemType, bool* Success_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyGM1.LobbyGM1_C.StorePurchaseInfo");

	ALobbyGM1_C_StorePurchaseInfo_Params params {};
	params.SteamID = SteamID;
	params.OrderID = OrderID;
	params.ItemType = ItemType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success_ != nullptr)
		*Success_ = params.Success_;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyGM1.LobbyGM1_C.DeductNameChange
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ALobbyPC2_C*                                 LobbyPC                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyGM1_C::DeductNameChange(class ALobbyPC2_C* LobbyPC)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyGM1.LobbyGM1_C.DeductNameChange");

	ALobbyGM1_C_DeductNameChange_Params params {};
	params.LobbyPC = LobbyPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyGM1.LobbyGM1_C.AddNameChange
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ALobbyPC2_C*                                 LobbyPC                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyGM1_C::AddNameChange(class ALobbyPC2_C* LobbyPC)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyGM1.LobbyGM1_C.AddNameChange");

	ALobbyGM1_C_AddNameChange_Params params {};
	params.LobbyPC = LobbyPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyGM1.LobbyGM1_C.DeductStokens
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     SteamID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		int                                                Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class ALobbyPC2_C*                                 Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Succeeded_                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ALobbyGM1_C::DeductStokens(const struct FString& SteamID, int Amount, class ALobbyPC2_C* Player, bool* Succeeded_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyGM1.LobbyGM1_C.DeductStokens");

	ALobbyGM1_C_DeductStokens_Params params {};
	params.SteamID = SteamID;
	params.Amount = Amount;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Succeeded_ != nullptr)
		*Succeeded_ = params.Succeeded_;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyGM1.LobbyGM1_C.DeductGoldCoins
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     SteamID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		int                                                Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class ALobbyPC2_C*                                 Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Succeeded_                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ALobbyGM1_C::DeductGoldCoins(const struct FString& SteamID, int Amount, class ALobbyPC2_C* Player, bool* Succeeded_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyGM1.LobbyGM1_C.DeductGoldCoins");

	ALobbyGM1_C_DeductGoldCoins_Params params {};
	params.SteamID = SteamID;
	params.Amount = Amount;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Succeeded_ != nullptr)
		*Succeeded_ = params.Succeeded_;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyGM1.LobbyGM1_C.AddPropBoosterExpirationDate
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ALobbyPC2_C*                                 LobbyPC                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Days                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyGM1_C::AddPropBoosterExpirationDate(class ALobbyPC2_C* LobbyPC, int Days)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyGM1.LobbyGM1_C.AddPropBoosterExpirationDate");

	ALobbyGM1_C_AddPropBoosterExpirationDate_Params params {};
	params.LobbyPC = LobbyPC;
	params.Days = Days;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyGM1.LobbyGM1_C.AddSlot03ExpirationDate
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ALobbyPC2_C*                                 LobbyPC                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Days                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyGM1_C::AddSlot03ExpirationDate(class ALobbyPC2_C* LobbyPC, int Days)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyGM1.LobbyGM1_C.AddSlot03ExpirationDate");

	ALobbyGM1_C_AddSlot03ExpirationDate_Params params {};
	params.LobbyPC = LobbyPC;
	params.Days = Days;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyGM1.LobbyGM1_C.AddToQueue(StoreStatsQueue)
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     SteamID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void ALobbyGM1_C::AddToQueue_StoreStatsQueue_(const struct FString& SteamID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyGM1.LobbyGM1_C.AddToQueue(StoreStatsQueue)");

	ALobbyGM1_C_AddToQueue_StoreStatsQueue__Params params {};
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyGM1.LobbyGM1_C.NewPlayerVersionSteamStats
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     SteamID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void ALobbyGM1_C::NewPlayerVersionSteamStats(const struct FString& SteamID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyGM1.LobbyGM1_C.NewPlayerVersionSteamStats");

	ALobbyGM1_C_NewPlayerVersionSteamStats_Params params {};
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyGM1.LobbyGM1_C.SetGoldCoins
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     SteamID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		int                                                GoldCoinSetTo                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyGM1_C::SetGoldCoins(const struct FString& SteamID, int GoldCoinSetTo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyGM1.LobbyGM1_C.SetGoldCoins");

	ALobbyGM1_C_SetGoldCoins_Params params {};
	params.SteamID = SteamID;
	params.GoldCoinSetTo = GoldCoinSetTo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyGM1.LobbyGM1_C.UpdateNewPlayerVersion
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     SteamID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		class ALobbyPC2_C*                                 Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyGM1_C::UpdateNewPlayerVersion(const struct FString& SteamID, class ALobbyPC2_C* Player)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyGM1.LobbyGM1_C.UpdateNewPlayerVersion");

	ALobbyGM1_C_UpdateNewPlayerVersion_Params params {};
	params.SteamID = SteamID;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyGM1.LobbyGM1_C.RequestRefundMicrotransaction
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     OrderID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		class ULowEntryHttpRequest*                        RequestHttpObject                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyGM1_C::RequestRefundMicrotransaction(const struct FString& OrderID, class ULowEntryHttpRequest** RequestHttpObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyGM1.LobbyGM1_C.RequestRefundMicrotransaction");

	ALobbyGM1_C_RequestRefundMicrotransaction_Params params {};
	params.OrderID = OrderID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RequestHttpObject != nullptr)
		*RequestHttpObject = params.RequestHttpObject;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyGM1.LobbyGM1_C.GetRefundTxnInfo
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     OrderID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FText                                       ContentAsString                                            (Parm, OutParm)
//		struct FText                                       SetUrl                                                     (Parm, OutParm)
void ALobbyGM1_C::GetRefundTxnInfo(const struct FString& OrderID, struct FText* ContentAsString, struct FText* SetUrl)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyGM1.LobbyGM1_C.GetRefundTxnInfo");

	ALobbyGM1_C_GetRefundTxnInfo_Params params {};
	params.OrderID = OrderID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ContentAsString != nullptr)
		*ContentAsString = params.ContentAsString;
	if (SetUrl != nullptr)
		*SetUrl = params.SetUrl;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyGM1.LobbyGM1_C.RemovePlayer
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ALobbyPC2_C*                                 PC                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Success_                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ALobbyGM1_C::RemovePlayer(class ALobbyPC2_C* PC, bool* Success_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyGM1.LobbyGM1_C.RemovePlayer");

	ALobbyGM1_C_RemovePlayer_Params params {};
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success_ != nullptr)
		*Success_ = params.Success_;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyGM1.LobbyGM1_C.SearchOrderID
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     OrderID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		bool                                               Found_                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FString                                     RequestedSteamID                                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     Output_OrderID                                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
//		TEnumAsByte<TxnType_ETxnType>                      WhichOne_                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyGM1_C::SearchOrderID(const struct FString& OrderID, bool* Found_, struct FString* RequestedSteamID, struct FString* Output_OrderID, TEnumAsByte<TxnType_ETxnType>* WhichOne_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyGM1.LobbyGM1_C.SearchOrderID");

	ALobbyGM1_C_SearchOrderID_Params params {};
	params.OrderID = OrderID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Found_ != nullptr)
		*Found_ = params.Found_;
	if (RequestedSteamID != nullptr)
		*RequestedSteamID = params.RequestedSteamID;
	if (Output_OrderID != nullptr)
		*Output_OrderID = params.Output_OrderID;
	if (WhichOne_ != nullptr)
		*WhichOne_ = params.WhichOne_;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyGM1.LobbyGM1_C.EventGandalv_Work
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     SteamID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void ALobbyGM1_C::EventGandalv_Work(const struct FString& SteamID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyGM1.LobbyGM1_C.EventGandalv_Work");

	ALobbyGM1_C_EventGandalv_Work_Params params {};
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyGM1.LobbyGM1_C.LeaveReview_Work
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     SteamID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void ALobbyGM1_C::LeaveReview_Work(const struct FString& SteamID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyGM1.LobbyGM1_C.LeaveReview_Work");

	ALobbyGM1_C_LeaveReview_Work_Params params {};
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyGM1.LobbyGM1_C.Suggestions_Work
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     SteamID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void ALobbyGM1_C::Suggestions_Work(const struct FString& SteamID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyGM1.LobbyGM1_C.Suggestions_Work");

	ALobbyGM1_C_Suggestions_Work_Params params {};
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyGM1.LobbyGM1_C.BugReport_Work
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     SteamID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void ALobbyGM1_C::BugReport_Work(const struct FString& SteamID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyGM1.LobbyGM1_C.BugReport_Work");

	ALobbyGM1_C_BugReport_Work_Params params {};
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyGM1.LobbyGM1_C.JustJoinedLobby
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     SteamID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void ALobbyGM1_C::JustJoinedLobby(const struct FString& SteamID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyGM1.LobbyGM1_C.JustJoinedLobby");

	ALobbyGM1_C_JustJoinedLobby_Params params {};
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyGM1.LobbyGM1_C.NeverPlayedBefore
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     SteamID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void ALobbyGM1_C::NeverPlayedBefore(const struct FString& SteamID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyGM1.LobbyGM1_C.NeverPlayedBefore");

	ALobbyGM1_C_NeverPlayedBefore_Params params {};
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyGM1.LobbyGM1_C.EquipNewAlias
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     SteamID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		int                                                Default_Index                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyGM1_C::EquipNewAlias(const struct FString& SteamID, int Default_Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyGM1.LobbyGM1_C.EquipNewAlias");

	ALobbyGM1_C_EquipNewAlias_Params params {};
	params.SteamID = SteamID;
	params.Default_Index = Default_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyGM1.LobbyGM1_C.EquipNewCharacter
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     SteamID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		int                                                Default_Character_Index                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyGM1_C::EquipNewCharacter(const struct FString& SteamID, int Default_Character_Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyGM1.LobbyGM1_C.EquipNewCharacter");

	ALobbyGM1_C_EquipNewCharacter_Params params {};
	params.SteamID = SteamID;
	params.Default_Character_Index = Default_Character_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyGM1.LobbyGM1_C.SetLeaderboard
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     SteamID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     LeaderboardID                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		int                                                Score                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class ULowEntryHttpRequest*                        RequestHttpObject                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyGM1_C::SetLeaderboard(const struct FString& SteamID, const struct FString& LeaderboardID, int Score, class ULowEntryHttpRequest** RequestHttpObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyGM1.LobbyGM1_C.SetLeaderboard");

	ALobbyGM1_C_SetLeaderboard_Params params {};
	params.SteamID = SteamID;
	params.LeaderboardID = LeaderboardID;
	params.Score = Score;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RequestHttpObject != nullptr)
		*RequestHttpObject = params.RequestHttpObject;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyGM1.LobbyGM1_C.InvalidateAllTimer
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ALobbyGM1_C::InvalidateAllTimer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyGM1.LobbyGM1_C.InvalidateAllTimer");

	ALobbyGM1_C_InvalidateAllTimer_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyGM1.LobbyGM1_C.SetUsername
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<int>                                        userName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
//		struct FString                                     SteamID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void ALobbyGM1_C::SetUsername(TArray<int>* userName, const struct FString& SteamID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyGM1.LobbyGM1_C.SetUsername");

	ALobbyGM1_C_SetUsername_Params params {};
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (userName != nullptr)
		*userName = params.userName;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyGM1.LobbyGM1_C.SearchPlayer
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     SteamID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		bool                                               Success_                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class ALobbyPC2_C*                                 Player                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyGM1_C::SearchPlayer(const struct FString& SteamID, bool* Success_, class ALobbyPC2_C** Player)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyGM1.LobbyGM1_C.SearchPlayer");

	ALobbyGM1_C_SearchPlayer_Params params {};
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
//		Name   -> Function LobbyGM1.LobbyGM1_C.AddToQueue(GetStatsQueue)
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     SteamID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		TEnumAsByte<EWhichWork_EWhichWork>                 Work                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyGM1_C::AddToQueue_GetStatsQueue_(const struct FString& SteamID, TEnumAsByte<EWhichWork_EWhichWork> Work)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyGM1.LobbyGM1_C.AddToQueue(GetStatsQueue)");

	ALobbyGM1_C_AddToQueue_GetStatsQueue__Params params {};
	params.SteamID = SteamID;
	params.Work = Work;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyGM1.LobbyGM1_C.RemovePlayer(GetStatsQueue)
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     SteamID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		TEnumAsByte<EWhichWork_EWhichWork>                 Work                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FString                                     Log                                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void ALobbyGM1_C::RemovePlayer_GetStatsQueue_(const struct FString& SteamID, TEnumAsByte<EWhichWork_EWhichWork>* Work, struct FString* Log)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyGM1.LobbyGM1_C.RemovePlayer(GetStatsQueue)");

	ALobbyGM1_C_RemovePlayer_GetStatsQueue__Params params {};
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Work != nullptr)
		*Work = params.Work;
	if (Log != nullptr)
		*Log = params.Log;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyGM1.LobbyGM1_C.RemovePlayer(StoreStatsQueue)
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     SteamID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     Log                                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void ALobbyGM1_C::RemovePlayer_StoreStatsQueue_(const struct FString& SteamID, struct FString* Log)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyGM1.LobbyGM1_C.RemovePlayer(StoreStatsQueue)");

	ALobbyGM1_C_RemovePlayer_StoreStatsQueue__Params params {};
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Log != nullptr)
		*Log = params.Log;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyGM1.LobbyGM1_C.CheckIfNoPlayersExist
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ALobbyGM1_C::CheckIfNoPlayersExist()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyGM1.LobbyGM1_C.CheckIfNoPlayersExist");

	ALobbyGM1_C_CheckIfNoPlayersExist_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyGM1.LobbyGM1_C.GI
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UGI2_C*                                      AsGI2                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyGM1_C::GI(class UGI2_C** AsGI2)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyGM1.LobbyGM1_C.GI");

	ALobbyGM1_C_GI_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsGI2 != nullptr)
		*AsGI2 = params.AsGI2;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyGM1.LobbyGM1_C.FinalizeMicrotransaction
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     OrderID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		class ULowEntryHttpRequest*                        RequestHttpObject                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyGM1_C::FinalizeMicrotransaction(const struct FString& OrderID, class ULowEntryHttpRequest** RequestHttpObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyGM1.LobbyGM1_C.FinalizeMicrotransaction");

	ALobbyGM1_C_FinalizeMicrotransaction_Params params {};
	params.OrderID = OrderID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RequestHttpObject != nullptr)
		*RequestHttpObject = params.RequestHttpObject;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyGM1.LobbyGM1_C.RequestMicrotransaction
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<TxnType_ETxnType>                      ItemToPayFor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FString                                     SteamID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     UsersLanguage                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		class ULowEntryHttpRequest*                        RequestHttpObject                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyGM1_C::RequestMicrotransaction(TEnumAsByte<TxnType_ETxnType> ItemToPayFor, const struct FString& SteamID, const struct FString& UsersLanguage, class ULowEntryHttpRequest** RequestHttpObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyGM1.LobbyGM1_C.RequestMicrotransaction");

	ALobbyGM1_C_RequestMicrotransaction_Params params {};
	params.ItemToPayFor = ItemToPayFor;
	params.SteamID = SteamID;
	params.UsersLanguage = UsersLanguage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RequestHttpObject != nullptr)
		*RequestHttpObject = params.RequestHttpObject;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyGM1.LobbyGM1_C.GetTxnInfo
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<TxnType_ETxnType>                      ItemToPayFor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FString                                     SteamID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     UsersLanguage                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FText                                       ContentAsString                                            (Parm, OutParm)
//		struct FText                                       SetUrl                                                     (Parm, OutParm)
void ALobbyGM1_C::GetTxnInfo(TEnumAsByte<TxnType_ETxnType> ItemToPayFor, const struct FString& SteamID, const struct FString& UsersLanguage, struct FText* ContentAsString, struct FText* SetUrl)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyGM1.LobbyGM1_C.GetTxnInfo");

	ALobbyGM1_C_GetTxnInfo_Params params {};
	params.ItemToPayFor = ItemToPayFor;
	params.SteamID = SteamID;
	params.UsersLanguage = UsersLanguage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ContentAsString != nullptr)
		*ContentAsString = params.ContentAsString;
	if (SetUrl != nullptr)
		*SetUrl = params.SetUrl;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyGM1.LobbyGM1_C.EndTimer
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FTimespan                                   EndAfterThisTimeSpan                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
//		bool                                               TimeReached_                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FString                                     TimeLeft                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void ALobbyGM1_C::EndTimer(const struct FTimespan& EndAfterThisTimeSpan, bool* TimeReached_, struct FString* TimeLeft)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyGM1.LobbyGM1_C.EndTimer");

	ALobbyGM1_C_EndTimer_Params params {};
	params.EndAfterThisTimeSpan = EndAfterThisTimeSpan;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TimeReached_ != nullptr)
		*TimeReached_ = params.TimeReached_;
	if (TimeLeft != nullptr)
		*TimeLeft = params.TimeLeft;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyGM1.LobbyGM1_C.PlayerState
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		TArray<class APlayerState*>                        PlayerArray                                                (Parm, OutParm, ZeroConstructor)
void ALobbyGM1_C::PlayerState(TArray<class APlayerState*>* PlayerArray)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyGM1.LobbyGM1_C.PlayerState");

	ALobbyGM1_C_PlayerState_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayerArray != nullptr)
		*PlayerArray = params.PlayerArray;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyGM1.LobbyGM1_C.PS
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class ALobbyPC2_C*                                 LobbyPC                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class ALobbyPS_C*                                  AsLobby_PS                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyGM1_C::PS(class ALobbyPC2_C* LobbyPC, class ALobbyPS_C** AsLobby_PS)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyGM1.LobbyGM1_C.PS");

	ALobbyGM1_C_PS_Params params {};
	params.LobbyPC = LobbyPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsLobby_PS != nullptr)
		*AsLobby_PS = params.AsLobby_PS;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyGM1.LobbyGM1_C.SendChatToClients
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       Message                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
//		class ALobbyPC2_C*                                 LobbyPC                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<EChatMode_EChatMode>                   SenderChatMode                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyGM1_C::SendChatToClients(const struct FText& Message, class ALobbyPC2_C* LobbyPC, TEnumAsByte<EChatMode_EChatMode> SenderChatMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyGM1.LobbyGM1_C.SendChatToClients");

	ALobbyGM1_C_SendChatToClients_Params params {};
	params.Message = Message;
	params.LobbyPC = LobbyPC;
	params.SenderChatMode = SenderChatMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyGM1.LobbyGM1_C.SecIncrement
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ALobbyGM1_C::SecIncrement()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyGM1.LobbyGM1_C.SecIncrement");

	ALobbyGM1_C_SecIncrement_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyGM1.LobbyGM1_C.Beginplay_Stats
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ALobbyGM1_C::Beginplay_Stats()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyGM1.LobbyGM1_C.Beginplay_Stats");

	ALobbyGM1_C_Beginplay_Stats_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyGM1.LobbyGM1_C.OnRequestCompleted_RequestUserStats
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bSuccessful                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		UWorksCore_EUWorksResult                           Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FUWorksSteamID                              SteamIDUser                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void ALobbyGM1_C::OnRequestCompleted_RequestUserStats(bool bSuccessful, UWorksCore_EUWorksResult Result, const struct FUWorksSteamID& SteamIDUser)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyGM1.LobbyGM1_C.OnRequestCompleted_RequestUserStats");

	ALobbyGM1_C_OnRequestCompleted_RequestUserStats_Params params {};
	params.bSuccessful = bSuccessful;
	params.Result = Result;
	params.SteamIDUser = SteamIDUser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyGM1.LobbyGM1_C.GetStats_Loop
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ALobbyGM1_C::GetStats_Loop()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyGM1.LobbyGM1_C.GetStats_Loop");

	ALobbyGM1_C_GetStats_Loop_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyGM1.LobbyGM1_C.GetStatsPlayer
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ALobbyGM1_C::GetStatsPlayer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyGM1.LobbyGM1_C.GetStatsPlayer");

	ALobbyGM1_C_GetStatsPlayer_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyGM1.LobbyGM1_C.Unpause_GetStats
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ALobbyGM1_C::Unpause_GetStats()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyGM1.LobbyGM1_C.Unpause_GetStats");

	ALobbyGM1_C_Unpause_GetStats_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyGM1.LobbyGM1_C.Pause_GetStats
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ALobbyGM1_C::Pause_GetStats()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyGM1.LobbyGM1_C.Pause_GetStats");

	ALobbyGM1_C_Pause_GetStats_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyGM1.LobbyGM1_C.SteamStatsBinder02_RequestUserStats
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ALobbyGM1_C::SteamStatsBinder02_RequestUserStats()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyGM1.LobbyGM1_C.SteamStatsBinder02_RequestUserStats");

	ALobbyGM1_C_SteamStatsBinder02_RequestUserStats_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyGM1.LobbyGM1_C.SteamStatsBinder03_GetStats
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ALobbyGM1_C::SteamStatsBinder03_GetStats()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyGM1.LobbyGM1_C.SteamStatsBinder03_GetStats");

	ALobbyGM1_C_SteamStatsBinder03_GetStats_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyGM1.LobbyGM1_C.FinalizeRequestBillingQueue
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     OrderID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     RequestedSteamID                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		TEnumAsByte<TxnType_ETxnType>                      WhichOne_                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyGM1_C::FinalizeRequestBillingQueue(const struct FString& OrderID, const struct FString& RequestedSteamID, TEnumAsByte<TxnType_ETxnType> WhichOne_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyGM1.LobbyGM1_C.FinalizeRequestBillingQueue");

	ALobbyGM1_C_FinalizeRequestBillingQueue_Params params {};
	params.OrderID = OrderID;
	params.RequestedSteamID = RequestedSteamID;
	params.WhichOne_ = WhichOne_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyGM1.LobbyGM1_C.ExecuteRequest2
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ULowEntryHttpRequestResponse*                Response                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyGM1_C::ExecuteRequest2(class ULowEntryHttpRequestResponse* Response)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyGM1.LobbyGM1_C.ExecuteRequest2");

	ALobbyGM1_C_ExecuteRequest2_Params params {};
	params.Response = Response;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyGM1.LobbyGM1_C.SteamStatsBinder05_MicroTxn
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ALobbyGM1_C::SteamStatsBinder05_MicroTxn()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyGM1.LobbyGM1_C.SteamStatsBinder05_MicroTxn");

	ALobbyGM1_C_SteamStatsBinder05_MicroTxn_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyGM1.LobbyGM1_C.BillingLoop
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ALobbyGM1_C::BillingLoop()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyGM1.LobbyGM1_C.BillingLoop");

	ALobbyGM1_C_BillingLoop_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyGM1.LobbyGM1_C.FinalizeBilling
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ALobbyGM1_C::FinalizeBilling()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyGM1.LobbyGM1_C.FinalizeBilling");

	ALobbyGM1_C_FinalizeBilling_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyGM1.LobbyGM1_C.StoreStatsLoop
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ALobbyGM1_C::StoreStatsLoop()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyGM1.LobbyGM1_C.StoreStatsLoop");

	ALobbyGM1_C_StoreStatsLoop_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyGM1.LobbyGM1_C.SteamStatsBinder07_StoreStats
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ALobbyGM1_C::SteamStatsBinder07_StoreStats()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyGM1.LobbyGM1_C.SteamStatsBinder07_StoreStats");

	ALobbyGM1_C_SteamStatsBinder07_StoreStats_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyGM1.LobbyGM1_C.ProcessStoreStats
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ALobbyGM1_C::ProcessStoreStats()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyGM1.LobbyGM1_C.ProcessStoreStats");

	ALobbyGM1_C_ProcessStoreStats_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyGM1.LobbyGM1_C.OnRequestCompleted_StoreUserStats
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bSuccessful                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		UWorksCore_EUWorksResult                           Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FUWorksSteamID                              SteamIDUser                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void ALobbyGM1_C::OnRequestCompleted_StoreUserStats(bool bSuccessful, UWorksCore_EUWorksResult Result, const struct FUWorksSteamID& SteamIDUser)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyGM1.LobbyGM1_C.OnRequestCompleted_StoreUserStats");

	ALobbyGM1_C_OnRequestCompleted_StoreUserStats_Params params {};
	params.bSuccessful = bSuccessful;
	params.Result = Result;
	params.SteamIDUser = SteamIDUser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyGM1.LobbyGM1_C.SteamStatsBinder08_RequestStoreStats
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ALobbyGM1_C::SteamStatsBinder08_RequestStoreStats()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyGM1.LobbyGM1_C.SteamStatsBinder08_RequestStoreStats");

	ALobbyGM1_C_SteamStatsBinder08_RequestStoreStats_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyGM1.LobbyGM1_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ALobbyGM1_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyGM1.LobbyGM1_C.ReceiveBeginPlay");

	ALobbyGM1_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyGM1.LobbyGM1_C.K2_OnLogout
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class AController*                                 ExitingController                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyGM1_C::K2_OnLogout(class AController* ExitingController)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyGM1.LobbyGM1_C.K2_OnLogout");

	ALobbyGM1_C_K2_OnLogout_Params params {};
	params.ExitingController = ExitingController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyGM1.LobbyGM1_C.K2_PostLogin
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class APlayerController*                           NewPlayer                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyGM1_C::K2_PostLogin(class APlayerController* NewPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyGM1.LobbyGM1_C.K2_PostLogin");

	ALobbyGM1_C_K2_PostLogin_Params params {};
	params.NewPlayer = NewPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyGM1.LobbyGM1_C.AcceptPlayerSessionID
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     playerSessionId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void ALobbyGM1_C::AcceptPlayerSessionID(const struct FString& playerSessionId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyGM1.LobbyGM1_C.AcceptPlayerSessionID");

	ALobbyGM1_C_AcceptPlayerSessionID_Params params {};
	params.playerSessionId = playerSessionId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyGM1.LobbyGM1_C.CheckInvalidGameSessionsEvent
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ALobbyGM1_C::CheckInvalidGameSessionsEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyGM1.LobbyGM1_C.CheckInvalidGameSessionsEvent");

	ALobbyGM1_C_CheckInvalidGameSessionsEvent_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyGM1.LobbyGM1_C.StartShutDownCount
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ALobbyGM1_C::StartShutDownCount()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyGM1.LobbyGM1_C.StartShutDownCount");

	ALobbyGM1_C_StartShutDownCount_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyGM1.LobbyGM1_C.StartLobby
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ALobbyGM1_C::StartLobby()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyGM1.LobbyGM1_C.StartLobby");

	ALobbyGM1_C_StartLobby_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyGM1.LobbyGM1_C.ExecuteUbergraph_LobbyGM1
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyGM1_C::ExecuteUbergraph_LobbyGM1(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyGM1.LobbyGM1_C.ExecuteUbergraph_LobbyGM1");

	ALobbyGM1_C_ExecuteUbergraph_LobbyGM1_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
