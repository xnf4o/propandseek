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
//		Name   -> Function LobbyPC2.LobbyPC2_C.CheckOwnership
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     SteamID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     DatabaseVariableName                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		bool                                               AlreadyHave_                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ALobbyPC2_C::CheckOwnership(const struct FString& SteamID, const struct FString& DatabaseVariableName, bool* AlreadyHave_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.CheckOwnership");

	ALobbyPC2_C_CheckOwnership_Params params {};
	params.SteamID = SteamID;
	params.DatabaseVariableName = DatabaseVariableName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AlreadyHave_ != nullptr)
		*AlreadyHave_ = params.AlreadyHave_;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.SyncDlcs
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FUWorksSteamID                              SteamID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
//		struct FSCashItemsGameInfo                         Output_Get                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyPC2_C::SyncDlcs(const struct FUWorksSteamID& SteamID, struct FSCashItemsGameInfo* Output_Get)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.SyncDlcs");

	ALobbyPC2_C_SyncDlcs_Params params {};
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Output_Get != nullptr)
		*Output_Get = params.Output_Get;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.SyncVotekickAmount
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyPC2_C::SyncVotekickAmount(int Amount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.SyncVotekickAmount");

	ALobbyPC2_C_SyncVotekickAmount_Params params {};
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.LootboxLegendSynchronizer
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<struct FSLootboxItemCards>                  LootboxCards                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void ALobbyPC2_C::LootboxLegendSynchronizer(TArray<struct FSLootboxItemCards>* LootboxCards)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.LootboxLegendSynchronizer");

	ALobbyPC2_C_LootboxLegendSynchronizer_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LootboxCards != nullptr)
		*LootboxCards = params.LootboxCards;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.SyncSteamInventory_Spectators
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FUWorksSteamID                              SteamID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
//		TArray<int>                                        OwningSpectators                                           (Parm, OutParm, ZeroConstructor)
void ALobbyPC2_C::SyncSteamInventory_Spectators(const struct FUWorksSteamID& SteamID, TArray<int>* OwningSpectators)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.SyncSteamInventory_Spectators");

	ALobbyPC2_C_SyncSteamInventory_Spectators_Params params {};
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OwningSpectators != nullptr)
		*OwningSpectators = params.OwningSpectators;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.SyncPropBoosterExpirationD
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                ExpireDate                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyPC2_C::SyncPropBoosterExpirationD(int ExpireDate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.SyncPropBoosterExpirationD");

	ALobbyPC2_C_SyncPropBoosterExpirationD_Params params {};
	params.ExpireDate = ExpireDate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.SyncSlot3ExpireDate
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                ExpireDate                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyPC2_C::SyncSlot3ExpireDate(int ExpireDate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.SyncSlot3ExpireDate");

	ALobbyPC2_C_SyncSlot3ExpireDate_Params params {};
	params.ExpireDate = ExpireDate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.SyncLootboxAmount
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                LootboxAmount                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyPC2_C::SyncLootboxAmount(int LootboxAmount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.SyncLootboxAmount");

	ALobbyPC2_C_SyncLootboxAmount_Params params {};
	params.LootboxAmount = LootboxAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.AddRandomItems
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		float                                              Percentage                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                MaxItemNumber                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyPC2_C::AddRandomItems(float* Percentage, int* MaxItemNumber)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.AddRandomItems");

	ALobbyPC2_C_AddRandomItems_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Percentage != nullptr)
		*Percentage = params.Percentage;
	if (MaxItemNumber != nullptr)
		*MaxItemNumber = params.MaxItemNumber;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.ParseRandomItems
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FSLootboxItem                               Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ItemFound_                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FString                                     SteamDatabaseVariableName                                  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
//		bool                                               SetTo_                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		int                                                Amount                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyPC2_C::ParseRandomItems(const struct FSLootboxItem& Item, bool* ItemFound_, struct FString* SteamDatabaseVariableName, bool* SetTo_, int* Amount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.ParseRandomItems");

	ALobbyPC2_C_ParseRandomItems_Params params {};
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ItemFound_ != nullptr)
		*ItemFound_ = params.ItemFound_;
	if (SteamDatabaseVariableName != nullptr)
		*SteamDatabaseVariableName = params.SteamDatabaseVariableName;
	if (SetTo_ != nullptr)
		*SetTo_ = params.SetTo_;
	if (Amount != nullptr)
		*Amount = params.Amount;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.LegendPercentage
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		float                                              Percentage                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                MaxItemNumber                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyPC2_C::LegendPercentage(float* Percentage, int* MaxItemNumber)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.LegendPercentage");

	ALobbyPC2_C_LegendPercentage_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Percentage != nullptr)
		*Percentage = params.Percentage;
	if (MaxItemNumber != nullptr)
		*MaxItemNumber = params.MaxItemNumber;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.EpicPercentage
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		float                                              Percentage                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                MaxItemNumber                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyPC2_C::EpicPercentage(float* Percentage, int* MaxItemNumber)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.EpicPercentage");

	ALobbyPC2_C_EpicPercentage_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Percentage != nullptr)
		*Percentage = params.Percentage;
	if (MaxItemNumber != nullptr)
		*MaxItemNumber = params.MaxItemNumber;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.UniquePercentage(unused)
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		float                                              Percentage                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                MaxItemNumber                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyPC2_C::UniquePercentage_unused_(float* Percentage, int* MaxItemNumber)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.UniquePercentage(unused)");

	ALobbyPC2_C_UniquePercentage_unused__Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Percentage != nullptr)
		*Percentage = params.Percentage;
	if (MaxItemNumber != nullptr)
		*MaxItemNumber = params.MaxItemNumber;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.RarePercentage
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		float                                              Percentage                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                MaxItemNumber                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyPC2_C::RarePercentage(float* Percentage, int* MaxItemNumber)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.RarePercentage");

	ALobbyPC2_C_RarePercentage_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Percentage != nullptr)
		*Percentage = params.Percentage;
	if (MaxItemNumber != nullptr)
		*MaxItemNumber = params.MaxItemNumber;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.NormalPercentage
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		float                                              Percentage                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                MaxItemNumber                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyPC2_C::NormalPercentage(float* Percentage, int* MaxItemNumber)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.NormalPercentage");

	ALobbyPC2_C_NormalPercentage_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Percentage != nullptr)
		*Percentage = params.Percentage;
	if (MaxItemNumber != nullptr)
		*MaxItemNumber = params.MaxItemNumber;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.GetRandomItems
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<struct FSLootboxItemCards>                  RandomBoxResult                                            (Parm, OutParm, ZeroConstructor)
void ALobbyPC2_C::GetRandomItems(TArray<struct FSLootboxItemCards>* RandomBoxResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.GetRandomItems");

	ALobbyPC2_C_GetRandomItems_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RandomBoxResult != nullptr)
		*RandomBoxResult = params.RandomBoxResult;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.UpdateLootboxAmountOnTheFly
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ALobbyPC2_C::UpdateLootboxAmountOnTheFly()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.UpdateLootboxAmountOnTheFly");

	ALobbyPC2_C_UpdateLootboxAmountOnTheFly_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.SyncNameChangeAmount1
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyPC2_C::SyncNameChangeAmount1(int Amount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.SyncNameChangeAmount1");

	ALobbyPC2_C_SyncNameChangeAmount1_Params params {};
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.SyncSteamStatsForRefreshing
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FUWorksSteamID                              SteamID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
//		TEnumAsByte<EAfterSync_EAfterSync>                 Work                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyPC2_C::SyncSteamStatsForRefreshing(const struct FUWorksSteamID& SteamID, TEnumAsByte<EAfterSync_EAfterSync>* Work)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.SyncSteamStatsForRefreshing");

	ALobbyPC2_C_SyncSteamStatsForRefreshing_Params params {};
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Work != nullptr)
		*Work = params.Work;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.CheckSuggestion
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ALobbyPC2_C::CheckSuggestion()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.CheckSuggestion");

	ALobbyPC2_C_CheckSuggestion_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.CheckBugReported
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ALobbyPC2_C::CheckBugReported()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.CheckBugReported");

	ALobbyPC2_C_CheckBugReported_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.SetNewShopSymbol
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               New_                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ALobbyPC2_C::SetNewShopSymbol(bool New_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.SetNewShopSymbol");

	ALobbyPC2_C_SetNewShopSymbol_Params params {};
	params.New_ = New_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.LoadNewShopSymbol
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               HasNew_                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ALobbyPC2_C::LoadNewShopSymbol(bool* HasNew_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.LoadNewShopSymbol");

	ALobbyPC2_C_LoadNewShopSymbol_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HasNew_ != nullptr)
		*HasNew_ = params.HasNew_;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.SyncSteamInventory_TauntingSounds
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FUWorksSteamID                              SteamID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
//		TArray<int>                                        OwningTauntingSounds                                       (Parm, OutParm, ZeroConstructor)
void ALobbyPC2_C::SyncSteamInventory_TauntingSounds(const struct FUWorksSteamID& SteamID, TArray<int>* OwningTauntingSounds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.SyncSteamInventory_TauntingSounds");

	ALobbyPC2_C_SyncSteamInventory_TauntingSounds_Params params {};
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OwningTauntingSounds != nullptr)
		*OwningTauntingSounds = params.OwningTauntingSounds;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.StringDebug
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     StringTest                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     StringOIutpuit1                                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void ALobbyPC2_C::StringDebug(const struct FString& StringTest, struct FString* StringOIutpuit1)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.StringDebug");

	ALobbyPC2_C_StringDebug_Params params {};
	params.StringTest = StringTest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (StringOIutpuit1 != nullptr)
		*StringOIutpuit1 = params.StringOIutpuit1;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.CheckIfBanned
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Banned_                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ALobbyPC2_C::CheckIfBanned(bool* Banned_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.CheckIfBanned");

	ALobbyPC2_C_CheckIfBanned_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Banned_ != nullptr)
		*Banned_ = params.Banned_;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.SetGameSessionDataQuickCompetitive
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ALobbyPC2_C::SetGameSessionDataQuickCompetitive()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.SetGameSessionDataQuickCompetitive");

	ALobbyPC2_C_SetGameSessionDataQuickCompetitive_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.OnRep_Purchased
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ALobbyPC2_C::OnRep_Purchased()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.OnRep_Purchased");

	ALobbyPC2_C_OnRep_Purchased_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.RetrieveStoredPurchaseInfos
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<struct FSShopInventory>                     PurchasedItemList                                          (Parm, OutParm, ZeroConstructor)
void ALobbyPC2_C::RetrieveStoredPurchaseInfos(TArray<struct FSShopInventory>* PurchasedItemList)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.RetrieveStoredPurchaseInfos");

	ALobbyPC2_C_RetrieveStoredPurchaseInfos_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PurchasedItemList != nullptr)
		*PurchasedItemList = params.PurchasedItemList;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.UpdateGoldCoinRequirements
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ALobbyPC2_C::UpdateGoldCoinRequirements()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.UpdateGoldCoinRequirements");

	ALobbyPC2_C_UpdateGoldCoinRequirements_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.UpdateCreateJoinCoinVisibility
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ALobbyPC2_C::UpdateCreateJoinCoinVisibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.UpdateCreateJoinCoinVisibility");

	ALobbyPC2_C_UpdateCreateJoinCoinVisibility_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.LoadNewDirectlyPurchasedItem
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ToggleNew                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ALobbyPC2_C::LoadNewDirectlyPurchasedItem(bool* ToggleNew)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.LoadNewDirectlyPurchasedItem");

	ALobbyPC2_C_LoadNewDirectlyPurchasedItem_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ToggleNew != nullptr)
		*ToggleNew = params.ToggleNew;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.NewDirectlyPurchasedItem?
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Toggle                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ALobbyPC2_C::NewDirectlyPurchasedItem_(bool Toggle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.NewDirectlyPurchasedItem?");

	ALobbyPC2_C_NewDirectlyPurchasedItem__Params params {};
	params.Toggle = Toggle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.SyncSteamInventory_Items
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FUWorksSteamID                              SteamID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
//		TArray<int>                                        OwningItems                                                (Parm, OutParm, ZeroConstructor)
void ALobbyPC2_C::SyncSteamInventory_Items(const struct FUWorksSteamID& SteamID, TArray<int>* OwningItems)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.SyncSteamInventory_Items");

	ALobbyPC2_C_SyncSteamInventory_Items_Params params {};
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OwningItems != nullptr)
		*OwningItems = params.OwningItems;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.ActivatingSteamVAC
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ULowEntryHttpRequest*                        HttpObject                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyPC2_C::ActivatingSteamVAC(class ULowEntryHttpRequest** HttpObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.ActivatingSteamVAC");

	ALobbyPC2_C_ActivatingSteamVAC_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HttpObject != nullptr)
		*HttpObject = params.HttpObject;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.Sort_SortByPlayers
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               LeastToMost_                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		TArray<struct FSDyGameSessions>                    LocalGameSessions                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
//		TArray<struct FSDyGameSessions>                    SortedGameSessions                                         (Parm, OutParm, ZeroConstructor)
void ALobbyPC2_C::Sort_SortByPlayers(bool LeastToMost_, TArray<struct FSDyGameSessions>* LocalGameSessions, TArray<struct FSDyGameSessions>* SortedGameSessions)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.Sort_SortByPlayers");

	ALobbyPC2_C_Sort_SortByPlayers_Params params {};
	params.LeastToMost_ = LeastToMost_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LocalGameSessions != nullptr)
		*LocalGameSessions = params.LocalGameSessions;
	if (SortedGameSessions != nullptr)
		*SortedGameSessions = params.SortedGameSessions;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.Sort_SortByStatus
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               LeastToMost_                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		TArray<struct FSDyGameSessions>                    LocalGameSessions                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
//		TArray<struct FSDyGameSessions>                    SortedGameSessions                                         (Parm, OutParm, ZeroConstructor)
void ALobbyPC2_C::Sort_SortByStatus(bool LeastToMost_, TArray<struct FSDyGameSessions>* LocalGameSessions, TArray<struct FSDyGameSessions>* SortedGameSessions)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.Sort_SortByStatus");

	ALobbyPC2_C_Sort_SortByStatus_Params params {};
	params.LeastToMost_ = LeastToMost_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LocalGameSessions != nullptr)
		*LocalGameSessions = params.LocalGameSessions;
	if (SortedGameSessions != nullptr)
		*SortedGameSessions = params.SortedGameSessions;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.Sort_SortByPublic
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               LeastToMost_                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		TArray<struct FSDyGameSessions>                    LocalGameSessions                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
//		TArray<struct FSDyGameSessions>                    SortedGameSessions                                         (Parm, OutParm, ZeroConstructor)
void ALobbyPC2_C::Sort_SortByPublic(bool LeastToMost_, TArray<struct FSDyGameSessions>* LocalGameSessions, TArray<struct FSDyGameSessions>* SortedGameSessions)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.Sort_SortByPublic");

	ALobbyPC2_C_Sort_SortByPublic_Params params {};
	params.LeastToMost_ = LeastToMost_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LocalGameSessions != nullptr)
		*LocalGameSessions = params.LocalGameSessions;
	if (SortedGameSessions != nullptr)
		*SortedGameSessions = params.SortedGameSessions;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.Sort_SortByRound
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               LeastToMost_                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		TArray<struct FSDyGameSessions>                    LocalGameSessions                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
//		TArray<struct FSDyGameSessions>                    SortedGameSessions                                         (Parm, OutParm, ZeroConstructor)
void ALobbyPC2_C::Sort_SortByRound(bool LeastToMost_, TArray<struct FSDyGameSessions>* LocalGameSessions, TArray<struct FSDyGameSessions>* SortedGameSessions)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.Sort_SortByRound");

	ALobbyPC2_C_Sort_SortByRound_Params params {};
	params.LeastToMost_ = LeastToMost_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LocalGameSessions != nullptr)
		*LocalGameSessions = params.LocalGameSessions;
	if (SortedGameSessions != nullptr)
		*SortedGameSessions = params.SortedGameSessions;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.ClearOutSortSettings
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ALobbyPC2_C::ClearOutSortSettings()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.ClearOutSortSettings");

	ALobbyPC2_C_ClearOutSortSettings_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.Sort_SortByTitle
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               LeastToMost_                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		TArray<struct FSDyGameSessions>                    LocalGameSessions                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
//		TArray<struct FSDyGameSessions>                    SortedGameSessions                                         (Parm, OutParm, ZeroConstructor)
void ALobbyPC2_C::Sort_SortByTitle(bool LeastToMost_, TArray<struct FSDyGameSessions>* LocalGameSessions, TArray<struct FSDyGameSessions>* SortedGameSessions)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.Sort_SortByTitle");

	ALobbyPC2_C_Sort_SortByTitle_Params params {};
	params.LeastToMost_ = LeastToMost_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LocalGameSessions != nullptr)
		*LocalGameSessions = params.LocalGameSessions;
	if (SortedGameSessions != nullptr)
		*SortedGameSessions = params.SortedGameSessions;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.Sort_SortByMap
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               LeastToMost_                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		TArray<struct FSDyGameSessions>                    LocalGameSessions                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
//		TArray<struct FSDyGameSessions>                    SortedGameSessions                                         (Parm, OutParm, ZeroConstructor)
void ALobbyPC2_C::Sort_SortByMap(bool LeastToMost_, TArray<struct FSDyGameSessions>* LocalGameSessions, TArray<struct FSDyGameSessions>* SortedGameSessions)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.Sort_SortByMap");

	ALobbyPC2_C_Sort_SortByMap_Params params {};
	params.LeastToMost_ = LeastToMost_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LocalGameSessions != nullptr)
		*LocalGameSessions = params.LocalGameSessions;
	if (SortedGameSessions != nullptr)
		*SortedGameSessions = params.SortedGameSessions;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.Sort_SortByRegion
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               LeastToMost_                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		TArray<struct FSDyGameSessions>                    LocalGameSessions                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
//		TArray<struct FSDyGameSessions>                    SortedGameSessions                                         (Parm, OutParm, ZeroConstructor)
void ALobbyPC2_C::Sort_SortByRegion(bool LeastToMost_, TArray<struct FSDyGameSessions>* LocalGameSessions, TArray<struct FSDyGameSessions>* SortedGameSessions)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.Sort_SortByRegion");

	ALobbyPC2_C_Sort_SortByRegion_Params params {};
	params.LeastToMost_ = LeastToMost_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LocalGameSessions != nullptr)
		*LocalGameSessions = params.LocalGameSessions;
	if (SortedGameSessions != nullptr)
		*SortedGameSessions = params.SortedGameSessions;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.Sort_SortByNumber
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               LeastToMost_                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		TArray<struct FSDyGameSessions>                    LocalGameSessions                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
//		TArray<struct FSDyGameSessions>                    SortedGameSessions                                         (Parm, OutParm, ZeroConstructor)
void ALobbyPC2_C::Sort_SortByNumber(bool LeastToMost_, TArray<struct FSDyGameSessions>* LocalGameSessions, TArray<struct FSDyGameSessions>* SortedGameSessions)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.Sort_SortByNumber");

	ALobbyPC2_C_Sort_SortByNumber_Params params {};
	params.LeastToMost_ = LeastToMost_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LocalGameSessions != nullptr)
		*LocalGameSessions = params.LocalGameSessions;
	if (SortedGameSessions != nullptr)
		*SortedGameSessions = params.SortedGameSessions;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.SortCheck
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<struct FSDyGameSessions>                    ToSort                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
//		TArray<struct FSDyGameSessions>                    SortedGameSessionsFinal                                    (Parm, OutParm, ZeroConstructor)
void ALobbyPC2_C::SortCheck(TArray<struct FSDyGameSessions>* ToSort, TArray<struct FSDyGameSessions>* SortedGameSessionsFinal)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.SortCheck");

	ALobbyPC2_C_SortCheck_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ToSort != nullptr)
		*ToSort = params.ToSort;
	if (SortedGameSessionsFinal != nullptr)
		*SortedGameSessionsFinal = params.SortedGameSessionsFinal;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.CheckRefundable
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FDateTime                                   PurchaseDate                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
//		bool                                               Refundable_                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ALobbyPC2_C::CheckRefundable(const struct FDateTime& PurchaseDate, bool* Refundable_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.CheckRefundable");

	ALobbyPC2_C_CheckRefundable_Params params {};
	params.PurchaseDate = PurchaseDate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Refundable_ != nullptr)
		*Refundable_ = params.Refundable_;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.GetCurrency
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FUWorksSteamID                              SteamID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void ALobbyPC2_C::GetCurrency(const struct FUWorksSteamID& SteamID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.GetCurrency");

	ALobbyPC2_C_GetCurrency_Params params {};
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.OnPressedChat1
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ALobbyPC2_C::OnPressedChat1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.OnPressedChat1");

	ALobbyPC2_C_OnPressedChat1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.SyncSteamInventory_Main
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FUWorksSteamID                              SteamID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
//		TArray<int>                                        OwningCharacters                                           (Parm, OutParm, ZeroConstructor)
//		TArray<int>                                        OwningSpectators                                           (Parm, OutParm, ZeroConstructor)
//		TArray<int>                                        OwningItems                                                (Parm, OutParm, ZeroConstructor)
//		TArray<int>                                        OwningAliases                                              (Parm, OutParm, ZeroConstructor)
//		TArray<int>                                        OwningTauntingSounds                                       (Parm, OutParm, ZeroConstructor)
void ALobbyPC2_C::SyncSteamInventory_Main(const struct FUWorksSteamID& SteamID, TArray<int>* OwningCharacters, TArray<int>* OwningSpectators, TArray<int>* OwningItems, TArray<int>* OwningAliases, TArray<int>* OwningTauntingSounds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.SyncSteamInventory_Main");

	ALobbyPC2_C_SyncSteamInventory_Main_Params params {};
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OwningCharacters != nullptr)
		*OwningCharacters = params.OwningCharacters;
	if (OwningSpectators != nullptr)
		*OwningSpectators = params.OwningSpectators;
	if (OwningItems != nullptr)
		*OwningItems = params.OwningItems;
	if (OwningAliases != nullptr)
		*OwningAliases = params.OwningAliases;
	if (OwningTauntingSounds != nullptr)
		*OwningTauntingSounds = params.OwningTauntingSounds;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.SyncSteamInventory_Aliases
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FUWorksSteamID                              SteamID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
//		TArray<int>                                        OwningAliases                                              (Parm, OutParm, ZeroConstructor)
void ALobbyPC2_C::SyncSteamInventory_Aliases(const struct FUWorksSteamID& SteamID, TArray<int>* OwningAliases)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.SyncSteamInventory_Aliases");

	ALobbyPC2_C_SyncSteamInventory_Aliases_Params params {};
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OwningAliases != nullptr)
		*OwningAliases = params.OwningAliases;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.SyncSteamInventory_Characters
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FUWorksSteamID                              SteamID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
//		TArray<int>                                        OwningCharacters                                           (Parm, OutParm, ZeroConstructor)
void ALobbyPC2_C::SyncSteamInventory_Characters(const struct FUWorksSteamID& SteamID, TArray<int>* OwningCharacters)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.SyncSteamInventory_Characters");

	ALobbyPC2_C_SyncSteamInventory_Characters_Params params {};
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OwningCharacters != nullptr)
		*OwningCharacters = params.OwningCharacters;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.SpawnCharacterDisplayer
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     userName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		int                                                Alias                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyPC2_C::SpawnCharacterDisplayer(const struct FString& userName, int Alias)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.SpawnCharacterDisplayer");

	ALobbyPC2_C_SpawnCharacterDisplayer_Params params {};
	params.userName = userName;
	params.Alias = Alias;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.RefreshSessionListOnUMG1
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ALobbyPC2_C::RefreshSessionListOnUMG1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.RefreshSessionListOnUMG1");

	ALobbyPC2_C_RefreshSessionListOnUMG1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.AddUsernameToPlayerInfo
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     userName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void ALobbyPC2_C::AddUsernameToPlayerInfo(const struct FString& userName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.AddUsernameToPlayerInfo");

	ALobbyPC2_C_AddUsernameToPlayerInfo_Params params {};
	params.userName = userName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.SyncSteamStats
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FUWorksSteamID                              SteamID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
//		TEnumAsByte<EAfterSync_EAfterSync>                 Work                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyPC2_C::SyncSteamStats(const struct FUWorksSteamID& SteamID, TEnumAsByte<EAfterSync_EAfterSync>* Work)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.SyncSteamStats");

	ALobbyPC2_C_SyncSteamStats_Params params {};
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Work != nullptr)
		*Work = params.Work;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.OnReadyWidgetUpdates
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ALobbyPC2_C::OnReadyWidgetUpdates()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.OnReadyWidgetUpdates");

	ALobbyPC2_C_OnReadyWidgetUpdates_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.ResetNoActivity
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ALobbyPC2_C::ResetNoActivity()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.ResetNoActivity");

	ALobbyPC2_C_ResetNoActivity_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.SecIncrement
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ALobbyPC2_C::SecIncrement()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.SecIncrement");

	ALobbyPC2_C_SecIncrement_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.EndCheck
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTimespan                                   EndAfterThisTimeSpan                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
//		bool                                               TimeReached_                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FString                                     TimeLeft                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void ALobbyPC2_C::EndCheck(const struct FTimespan& EndAfterThisTimeSpan, bool* TimeReached_, struct FString* TimeLeft)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.EndCheck");

	ALobbyPC2_C_EndCheck_Params params {};
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
//		Name   -> Function LobbyPC2.LobbyPC2_C.RetrieveUserInfo
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FUWorksSteamID                              SteamID                                                    (Parm, OutParm, NoDestructor)
//		struct FString                                     Language                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void ALobbyPC2_C::RetrieveUserInfo(struct FUWorksSteamID* SteamID, struct FString* Language)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.RetrieveUserInfo");

	ALobbyPC2_C_RetrieveUserInfo_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SteamID != nullptr)
		*SteamID = params.SteamID;
	if (Language != nullptr)
		*Language = params.Language;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.GenerateAchievementList
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ALobbyPC2_C::GenerateAchievementList()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.GenerateAchievementList");

	ALobbyPC2_C_GenerateAchievementList_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.AddAchievementsToArrays
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     Header                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     Description                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		int                                                CurrentValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                MaxValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Achieved_                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UTexture2D*                                  Icon                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Hidden_                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ALobbyPC2_C::AddAchievementsToArrays(const struct FString& Header, const struct FString& Description, int CurrentValue, int MaxValue, bool Achieved_, class UTexture2D* Icon, bool Hidden_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.AddAchievementsToArrays");

	ALobbyPC2_C_AddAchievementsToArrays_Params params {};
	params.Header = Header;
	params.Description = Description;
	params.CurrentValue = CurrentValue;
	params.MaxValue = MaxValue;
	params.Achieved_ = Achieved_;
	params.Icon = Icon;
	params.Hidden_ = Hidden_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.RetrieveAllAchievementInfo
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyPC2_C::RetrieveAllAchievementInfo(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.RetrieveAllAchievementInfo");

	ALobbyPC2_C_RetrieveAllAchievementInfo_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.SetIsSearching
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Searching_                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ALobbyPC2_C::SetIsSearching(bool Searching_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.SetIsSearching");

	ALobbyPC2_C_SetIsSearching_Params params {};
	params.Searching_ = Searching_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.OnBackButtonPressed
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ALobbyPC2_C::OnBackButtonPressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.OnBackButtonPressed");

	ALobbyPC2_C_OnBackButtonPressed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.OnFirstStart
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ALobbyPC2_C::OnFirstStart()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.OnFirstStart");

	ALobbyPC2_C_OnFirstStart_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.OnSyncSuccess
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ALobbyPC2_C::OnSyncSuccess()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.OnSyncSuccess");

	ALobbyPC2_C_OnSyncSuccess_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.PS
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class ALobbyPS_C*                                  AsLobby_PS                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyPC2_C::PS(class ALobbyPS_C** AsLobby_PS)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.PS");

	ALobbyPC2_C_PS_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsLobby_PS != nullptr)
		*AsLobby_PS = params.AsLobby_PS;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.ExitToDesktop
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ALobbyPC2_C::ExitToDesktop()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.ExitToDesktop");

	ALobbyPC2_C_ExitToDesktop_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.WidgetCreation
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ALobbyPC2_C::WidgetCreation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.WidgetCreation");

	ALobbyPC2_C_WidgetCreation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.GI
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UGI2_C*                                      AsGI2                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyPC2_C::GI(class UGI2_C** AsGI2)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.GI");

	ALobbyPC2_C_GI_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsGI2 != nullptr)
		*AsGI2 = params.AsGI2;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.GM
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class ALobbyGM1_C*                                 AsLobby_GM                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyPC2_C::GM(class ALobbyGM1_C** AsLobby_GM)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.GM");

	ALobbyPC2_C_GM_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsLobby_GM != nullptr)
		*AsLobby_GM = params.AsLobby_GM;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.LerpGoldCoinTimeline__FinishedFunc
//		Flags  -> (BlueprintEvent)
void ALobbyPC2_C::LerpGoldCoinTimeline__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.LerpGoldCoinTimeline__FinishedFunc");

	ALobbyPC2_C_LerpGoldCoinTimeline__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.LerpGoldCoinTimeline__UpdateFunc
//		Flags  -> (BlueprintEvent)
void ALobbyPC2_C::LerpGoldCoinTimeline__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.LerpGoldCoinTimeline__UpdateFunc");

	ALobbyPC2_C_LerpGoldCoinTimeline__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.StokenLerpTimeline__FinishedFunc
//		Flags  -> (BlueprintEvent)
void ALobbyPC2_C::StokenLerpTimeline__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.StokenLerpTimeline__FinishedFunc");

	ALobbyPC2_C_StokenLerpTimeline__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.StokenLerpTimeline__UpdateFunc
//		Flags  -> (BlueprintEvent)
void ALobbyPC2_C::StokenLerpTimeline__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.StokenLerpTimeline__UpdateFunc");

	ALobbyPC2_C_StokenLerpTimeline__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.ServerSafety__FinishedFunc
//		Flags  -> (BlueprintEvent)
void ALobbyPC2_C::ServerSafety__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.ServerSafety__FinishedFunc");

	ALobbyPC2_C_ServerSafety__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.ServerSafety__UpdateFunc
//		Flags  -> (BlueprintEvent)
void ALobbyPC2_C::ServerSafety__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.ServerSafety__UpdateFunc");

	ALobbyPC2_C_ServerSafety__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.InpActEvt_Chat_K2Node_InputActionEvent_8
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ALobbyPC2_C::InpActEvt_Chat_K2Node_InputActionEvent_8(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.InpActEvt_Chat_K2Node_InputActionEvent_8");

	ALobbyPC2_C_InpActEvt_Chat_K2Node_InputActionEvent_8_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.InpActEvt_Back_K2Node_InputActionEvent_7
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ALobbyPC2_C::InpActEvt_Back_K2Node_InputActionEvent_7(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.InpActEvt_Back_K2Node_InputActionEvent_7");

	ALobbyPC2_C_InpActEvt_Back_K2Node_InputActionEvent_7_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ALobbyPC2_C::InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2");

	ALobbyPC2_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ALobbyPC2_C::InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1");

	ALobbyPC2_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.InpActEvt_Weapon1_K2Node_InputActionEvent_6
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ALobbyPC2_C::InpActEvt_Weapon1_K2Node_InputActionEvent_6(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.InpActEvt_Weapon1_K2Node_InputActionEvent_6");

	ALobbyPC2_C_InpActEvt_Weapon1_K2Node_InputActionEvent_6_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.InpActEvt_Weapon2_K2Node_InputActionEvent_5
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ALobbyPC2_C::InpActEvt_Weapon2_K2Node_InputActionEvent_5(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.InpActEvt_Weapon2_K2Node_InputActionEvent_5");

	ALobbyPC2_C_InpActEvt_Weapon2_K2Node_InputActionEvent_5_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.InpActEvt_Weapon3_K2Node_InputActionEvent_4
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ALobbyPC2_C::InpActEvt_Weapon3_K2Node_InputActionEvent_4(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.InpActEvt_Weapon3_K2Node_InputActionEvent_4");

	ALobbyPC2_C_InpActEvt_Weapon3_K2Node_InputActionEvent_4_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.InpActEvt_Weapon4_K2Node_InputActionEvent_3
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ALobbyPC2_C::InpActEvt_Weapon4_K2Node_InputActionEvent_3(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.InpActEvt_Weapon4_K2Node_InputActionEvent_3");

	ALobbyPC2_C_InpActEvt_Weapon4_K2Node_InputActionEvent_3_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.Completed_A9AF60DE452D9666AE60509F9D982A80
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bSuccessful                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FString                                     Content                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void ALobbyPC2_C::Completed_A9AF60DE452D9666AE60509F9D982A80(bool bSuccessful, const struct FString& Content)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.Completed_A9AF60DE452D9666AE60509F9D982A80");

	ALobbyPC2_C_Completed_A9AF60DE452D9666AE60509F9D982A80_Params params {};
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.InpActEvt_Weapon5_K2Node_InputActionEvent_2
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ALobbyPC2_C::InpActEvt_Weapon5_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.InpActEvt_Weapon5_K2Node_InputActionEvent_2");

	ALobbyPC2_C_InpActEvt_Weapon5_K2Node_InputActionEvent_2_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.InpActEvt_Weapon6_K2Node_InputActionEvent_1
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ALobbyPC2_C::InpActEvt_Weapon6_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.InpActEvt_Weapon6_K2Node_InputActionEvent_1");

	ALobbyPC2_C_InpActEvt_Weapon6_K2Node_InputActionEvent_1_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.OnAuthFinished
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ALobbyPC2_C::OnAuthFinished()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.OnAuthFinished");

	ALobbyPC2_C_OnAuthFinished_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.OnGetAllLobbies
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ALobbyPC2_C::OnGetAllLobbies()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.OnGetAllLobbies");

	ALobbyPC2_C_OnGetAllLobbies_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.OnGetAllGames
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ALobbyPC2_C::OnGetAllGames()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.OnGetAllGames");

	ALobbyPC2_C_OnGetAllGames_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.OnProcessReady
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ALobbyPC2_C::OnProcessReady()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.OnProcessReady");

	ALobbyPC2_C_OnProcessReady_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.Shop_Lerp_GoldCoins
//		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Old                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                New                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyPC2_C::Shop_Lerp_GoldCoins(int Old, int New)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.Shop_Lerp_GoldCoins");

	ALobbyPC2_C_Shop_Lerp_GoldCoins_Params params {};
	params.Old = Old;
	params.New = New;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.Shop_Lerp_STokens
//		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Old                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                New                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyPC2_C::Shop_Lerp_STokens(int Old, int New)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.Shop_Lerp_STokens");

	ALobbyPC2_C_Shop_Lerp_STokens_Params params {};
	params.Old = Old;
	params.New = New;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.RequestShopInventoryList
//		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void ALobbyPC2_C::RequestShopInventoryList()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.RequestShopInventoryList");

	ALobbyPC2_C_RequestShopInventoryList_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.ClaimPurchased_Init
//		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                SlotNumber                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyPC2_C::ClaimPurchased_Init(int SlotNumber)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.ClaimPurchased_Init");

	ALobbyPC2_C_ClaimPurchased_Init_Params params {};
	params.SlotNumber = SlotNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.RefundSucceeded?
//		Flags  -> (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Succeeded_                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ALobbyPC2_C::RefundSucceeded_(bool Succeeded_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.RefundSucceeded?");

	ALobbyPC2_C_RefundSucceeded__Params params {};
	params.Succeeded_ = Succeeded_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.ClaimingDenied
//		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
void ALobbyPC2_C::ClaimingDenied()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.ClaimingDenied");

	ALobbyPC2_C_ClaimingDenied_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.UploadEventTextToServer
//		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       EventText                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
void ALobbyPC2_C::UploadEventTextToServer(const struct FText& EventText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.UploadEventTextToServer");

	ALobbyPC2_C_UploadEventTextToServer_Params params {};
	params.EventText = EventText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.NotifyToClient_Event
//		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Success_                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ALobbyPC2_C::NotifyToClient_Event(bool Success_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.NotifyToClient_Event");

	ALobbyPC2_C_NotifyToClient_Event_Params params {};
	params.Success_ = Success_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.SetGoldCoinTo0
//		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void ALobbyPC2_C::SetGoldCoinTo0()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.SetGoldCoinTo0");

	ALobbyPC2_C_SetGoldCoinTo0_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.AddSlot03ExpirationDate_A
//		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Days                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Cost                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<EShopItemCostType_EShopItemCostType>   PriceType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyPC2_C::AddSlot03ExpirationDate_A(int Days, int Cost, TEnumAsByte<EShopItemCostType_EShopItemCostType> PriceType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.AddSlot03ExpirationDate_A");

	ALobbyPC2_C_AddSlot03ExpirationDate_A_Params params {};
	params.Days = Days;
	params.Cost = Cost;
	params.PriceType = PriceType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.AddPropBoosterExpirationDate
//		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Days                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Cost                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<EShopItemCostType_EShopItemCostType>   PriceType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyPC2_C::AddPropBoosterExpirationDate(int Days, int Cost, TEnumAsByte<EShopItemCostType_EShopItemCostType> PriceType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.AddPropBoosterExpirationDate");

	ALobbyPC2_C_AddPropBoosterExpirationDate_Params params {};
	params.Days = Days;
	params.Cost = Cost;
	params.PriceType = PriceType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.AddNameChangeAmount
//		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Cost                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<EShopItemCostType_EShopItemCostType>   PriceType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyPC2_C::AddNameChangeAmount(int Cost, TEnumAsByte<EShopItemCostType_EShopItemCostType> PriceType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.AddNameChangeAmount");

	ALobbyPC2_C_AddNameChangeAmount_Params params {};
	params.Cost = Cost;
	params.PriceType = PriceType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.SyncSlot03ExpirationDate
//		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                ExpirationDate__Slot03_                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyPC2_C::SyncSlot03ExpirationDate(int ExpirationDate__Slot03_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.SyncSlot03ExpirationDate");

	ALobbyPC2_C_SyncSlot03ExpirationDate_Params params {};
	params.ExpirationDate__Slot03_ = ExpirationDate__Slot03_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.SyncPropBoosterExpirationDate
//		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                ExpirationDate__PropBooster_                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyPC2_C::SyncPropBoosterExpirationDate(int ExpirationDate__PropBooster_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.SyncPropBoosterExpirationDate");

	ALobbyPC2_C_SyncPropBoosterExpirationDate_Params params {};
	params.ExpirationDate__PropBooster_ = ExpirationDate__PropBooster_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.DeductNameChange
//		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void ALobbyPC2_C::DeductNameChange()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.DeductNameChange");

	ALobbyPC2_C_DeductNameChange_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.UnlockInventory
//		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<ItemUnlockType_EItemUnlockType>        PriceType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                ItemPrice                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FString                                     DatabaseString                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void ALobbyPC2_C::UnlockInventory(TEnumAsByte<ItemUnlockType_EItemUnlockType> PriceType, int ItemPrice, const struct FString& DatabaseString)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.UnlockInventory");

	ALobbyPC2_C_UnlockInventory_Params params {};
	params.PriceType = PriceType;
	params.ItemPrice = ItemPrice;
	params.DatabaseString = DatabaseString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.HaveAllDlcsAch
//		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void ALobbyPC2_C::HaveAllDlcsAch()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.HaveAllDlcsAch");

	ALobbyPC2_C_HaveAllDlcsAch_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.SetAchBugReport
//		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void ALobbyPC2_C::SetAchBugReport()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.SetAchBugReport");

	ALobbyPC2_C_SetAchBugReport_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.SetAchSuggestion
//		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void ALobbyPC2_C::SetAchSuggestion()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.SetAchSuggestion");

	ALobbyPC2_C_SetAchSuggestion_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.AddDeductLootBox
//		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Add___Or_Deduct_                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		int                                                LootboxAmount                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                StokenDeductionAmount                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyPC2_C::AddDeductLootBox(bool Add___Or_Deduct_, int LootboxAmount, int StokenDeductionAmount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.AddDeductLootBox");

	ALobbyPC2_C_AddDeductLootBox_Params params {};
	params.Add___Or_Deduct_ = Add___Or_Deduct_;
	params.LootboxAmount = LootboxAmount;
	params.StokenDeductionAmount = StokenDeductionAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.DeductLoobox
//		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void ALobbyPC2_C::DeductLoobox()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.DeductLoobox");

	ALobbyPC2_C_DeductLoobox_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.OnLootboxLogicEndServer
//		Flags  -> (Net, NetReliable, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<struct FSLootboxItemCards>                  LootboxItemResult                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void ALobbyPC2_C::OnLootboxLogicEndServer(TArray<struct FSLootboxItemCards> LootboxItemResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.OnLootboxLogicEndServer");

	ALobbyPC2_C_OnLootboxLogicEndServer_Params params {};
	params.LootboxItemResult = LootboxItemResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.SyncNameChangeAmount
//		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                NameChangeAmount                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyPC2_C::SyncNameChangeAmount(int NameChangeAmount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.SyncNameChangeAmount");

	ALobbyPC2_C_SyncNameChangeAmount_Params params {};
	params.NameChangeAmount = NameChangeAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.SyncGoldCoins
//		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Amount                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyPC2_C::SyncGoldCoins(int Amount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.SyncGoldCoins");

	ALobbyPC2_C_SyncGoldCoins_Params params {};
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.SyncLootBoxAmount1
//		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                LootboxAmount                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyPC2_C::SyncLootBoxAmount1(int LootboxAmount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.SyncLootBoxAmount1");

	ALobbyPC2_C_SyncLootBoxAmount1_Params params {};
	params.LootboxAmount = LootboxAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.AddEarlyBirdAch
//		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
void ALobbyPC2_C::AddEarlyBirdAch()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.AddEarlyBirdAch");

	ALobbyPC2_C_AddEarlyBirdAch_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.AddVoteKick
//		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                VoteKickAddAmount                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                STokensDeductAmount                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyPC2_C::AddVoteKick(int VoteKickAddAmount, int STokensDeductAmount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.AddVoteKick");

	ALobbyPC2_C_AddVoteKick_Params params {};
	params.VoteKickAddAmount = VoteKickAddAmount;
	params.STokensDeductAmount = STokensDeductAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.FSyncVoteKickAmount
//		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                VotekickAmount                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyPC2_C::FSyncVoteKickAmount(int VotekickAmount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.FSyncVoteKickAmount");

	ALobbyPC2_C_FSyncVoteKickAmount_Params params {};
	params.VotekickAmount = VotekickAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.AddGameLicense
//		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Cost                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyPC2_C::AddGameLicense(int Cost)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.AddGameLicense");

	ALobbyPC2_C_AddGameLicense_Params params {};
	params.Cost = Cost;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.SyncGameLicenseOwnership
//		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
void ALobbyPC2_C::SyncGameLicenseOwnership()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.SyncGameLicenseOwnership");

	ALobbyPC2_C_SyncGameLicenseOwnership_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.AddSecondSlotKey
//		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Cost                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyPC2_C::AddSecondSlotKey(int Cost)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.AddSecondSlotKey");

	ALobbyPC2_C_AddSecondSlotKey_Params params {};
	params.Cost = Cost;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.Sync2ndSlotKeyOwnership
//		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
void ALobbyPC2_C::Sync2ndSlotKeyOwnership()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.Sync2ndSlotKeyOwnership");

	ALobbyPC2_C_Sync2ndSlotKeyOwnership_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.AddGoldPassLight
//		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Cost                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyPC2_C::AddGoldPassLight(int Cost)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.AddGoldPassLight");

	ALobbyPC2_C_AddGoldPassLight_Params params {};
	params.Cost = Cost;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.SyncGoldPassLight
//		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
void ALobbyPC2_C::SyncGoldPassLight()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.SyncGoldPassLight");

	ALobbyPC2_C_SyncGoldPassLight_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.AddGoldPassStandard
//		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Cost                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyPC2_C::AddGoldPassStandard(int Cost)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.AddGoldPassStandard");

	ALobbyPC2_C_AddGoldPassStandard_Params params {};
	params.Cost = Cost;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.SyncGoldPassStandard
//		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
void ALobbyPC2_C::SyncGoldPassStandard()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.SyncGoldPassStandard");

	ALobbyPC2_C_SyncGoldPassStandard_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.AddGoldPassDeluxe
//		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Cost                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyPC2_C::AddGoldPassDeluxe(int Cost)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.AddGoldPassDeluxe");

	ALobbyPC2_C_AddGoldPassDeluxe_Params params {};
	params.Cost = Cost;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.SyncGoldPassDeluxe
//		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
void ALobbyPC2_C::SyncGoldPassDeluxe()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.SyncGoldPassDeluxe");

	ALobbyPC2_C_SyncGoldPassDeluxe_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.AddEarlyAccessLicense
//		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Cost                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyPC2_C::AddEarlyAccessLicense(int Cost)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.AddEarlyAccessLicense");

	ALobbyPC2_C_AddEarlyAccessLicense_Params params {};
	params.Cost = Cost;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.SyncEarlyAccessLicense
//		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
void ALobbyPC2_C::SyncEarlyAccessLicense()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.SyncEarlyAccessLicense");

	ALobbyPC2_C_SyncEarlyAccessLicense_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ALobbyPC2_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.ReceiveBeginPlay");

	ALobbyPC2_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.SendErrorMessage
//		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       errorMessage                                               (BlueprintVisible, BlueprintReadOnly, Parm)
void ALobbyPC2_C::SendErrorMessage(const struct FText& errorMessage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.SendErrorMessage");

	ALobbyPC2_C_SendErrorMessage_Params params {};
	params.errorMessage = errorMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.beginplay_Client
//		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                lobbyID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyPC2_C::beginplay_Client(int lobbyID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.beginplay_Client");

	ALobbyPC2_C_beginplay_Client_Params params {};
	params.lobbyID = lobbyID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.ConnectionStatus
//		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<ESwitcher_Entry_ESwitcher_Entry>       status                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       ConnectionMessage                                          (BlueprintVisible, BlueprintReadOnly, Parm)
void ALobbyPC2_C::ConnectionStatus(TEnumAsByte<ESwitcher_Entry_ESwitcher_Entry> status, const struct FText& ConnectionMessage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.ConnectionStatus");

	ALobbyPC2_C_ConnectionStatus_Params params {};
	params.status = status;
	params.ConnectionMessage = ConnectionMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.Connect
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ALobbyPC2_C::Connect()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.Connect");

	ALobbyPC2_C_Connect_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.SendChatToServer
//		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       Message                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
//		TEnumAsByte<EChatMode_EChatMode>                   MyChatMode                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyPC2_C::SendChatToServer(const struct FText& Message, TEnumAsByte<EChatMode_EChatMode> MyChatMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.SendChatToServer");

	ALobbyPC2_C_SendChatToServer_Params params {};
	params.Message = Message;
	params.MyChatMode = MyChatMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.DisplayChatInLobby
//		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       Message                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FText                                       userName                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
//		TEnumAsByte<EChatMode_EChatMode>                   SenderChatMode                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Myself_                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ALobbyPC2_C::DisplayChatInLobby(const struct FText& Message, const struct FText& userName, TEnumAsByte<EChatMode_EChatMode> SenderChatMode, bool Myself_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.DisplayChatInLobby");

	ALobbyPC2_C_DisplayChatInLobby_Params params {};
	params.Message = Message;
	params.userName = userName;
	params.SenderChatMode = SenderChatMode;
	params.Myself_ = Myself_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.OnQuickGamePressed
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ALobbyPC2_C::OnQuickGamePressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.OnQuickGamePressed");

	ALobbyPC2_C_OnQuickGamePressed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.OnCompetitiveGamePressed
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ALobbyPC2_C::OnCompetitiveGamePressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.OnCompetitiveGamePressed");

	ALobbyPC2_C_OnCompetitiveGamePressed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.UpdateAchievements
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ALobbyPC2_C::UpdateAchievements()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.UpdateAchievements");

	ALobbyPC2_C_UpdateAchievements_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.UpdateAchievementStat
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyPC2_C::UpdateAchievementStat(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.UpdateAchievementStat");

	ALobbyPC2_C_UpdateAchievementStat_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.OnReady
//		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
void ALobbyPC2_C::OnReady()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.OnReady");

	ALobbyPC2_C_OnReady_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.InitServerSendDelay
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ALobbyPC2_C::InitServerSendDelay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.InitServerSendDelay");

	ALobbyPC2_C_InitServerSendDelay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.KickClient
//		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     AuthReason                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void ALobbyPC2_C::KickClient(const struct FString& AuthReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.KickClient");

	ALobbyPC2_C_KickClient_Params params {};
	params.AuthReason = AuthReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.InitiateTxnServer
//		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     UserSteamID                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     UserLanguage                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		TEnumAsByte<TxnType_ETxnType>                      ItemToPayFor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyPC2_C::InitiateTxnServer(const struct FString& UserSteamID, const struct FString& UserLanguage, TEnumAsByte<TxnType_ETxnType> ItemToPayFor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.InitiateTxnServer");

	ALobbyPC2_C_InitiateTxnServer_Params params {};
	params.UserSteamID = UserSteamID;
	params.UserLanguage = UserLanguage;
	params.ItemToPayFor = ItemToPayFor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.TxnAuthResponse
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                AppID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FString                                     OrderID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		bool                                               bAuthorized                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ALobbyPC2_C::TxnAuthResponse(int AppID, const struct FString& OrderID, bool bAuthorized)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.TxnAuthResponse");

	ALobbyPC2_C_TxnAuthResponse_Params params {};
	params.AppID = AppID;
	params.OrderID = OrderID;
	params.bAuthorized = bAuthorized;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.FinalizeBilling
//		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     OrderID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     RequestedSteamID                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		TEnumAsByte<TxnType_ETxnType>                      WhichOne_                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyPC2_C::FinalizeBilling(const struct FString& OrderID, const struct FString& RequestedSteamID, TEnumAsByte<TxnType_ETxnType> WhichOne_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.FinalizeBilling");

	ALobbyPC2_C_FinalizeBilling_Params params {};
	params.OrderID = OrderID;
	params.RequestedSteamID = RequestedSteamID;
	params.WhichOne_ = WhichOne_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.TxnBinding
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ALobbyPC2_C::TxnBinding()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.TxnBinding");

	ALobbyPC2_C_TxnBinding_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.ExecuteRequest
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ULowEntryHttpRequestResponse*                Response                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyPC2_C::ExecuteRequest(class ULowEntryHttpRequestResponse* Response)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.ExecuteRequest");

	ALobbyPC2_C_ExecuteRequest_Params params {};
	params.Response = Response;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.SetPlayerSessionOnServer
//		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     playerSessionId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FText                                       VersionCheck                                               (BlueprintVisible, BlueprintReadOnly, Parm)
void ALobbyPC2_C::SetPlayerSessionOnServer(const struct FString& playerSessionId, const struct FText& VersionCheck)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.SetPlayerSessionOnServer");

	ALobbyPC2_C_SetPlayerSessionOnServer_Params params {};
	params.playerSessionId = playerSessionId;
	params.VersionCheck = VersionCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.GetSteamId_Event
//		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
void ALobbyPC2_C::GetSteamId_Event()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.GetSteamId_Event");

	ALobbyPC2_C_GetSteamId_Event_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.SetSteamId_Event
//		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     SteamID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void ALobbyPC2_C::SetSteamId_Event(const struct FString& SteamID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.SetSteamId_Event");

	ALobbyPC2_C_SetSteamId_Event_Params params {};
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.BeginAuthProcess_Event
//		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
void ALobbyPC2_C::BeginAuthProcess_Event()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.BeginAuthProcess_Event");

	ALobbyPC2_C_BeginAuthProcess_Event_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.AuthTicketResponse
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FUWorksTicketHandle                         AuthTicket                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
//		UWorksCore_EUWorksResult                           Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyPC2_C::AuthTicketResponse(const struct FUWorksTicketHandle& AuthTicket, UWorksCore_EUWorksResult Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.AuthTicketResponse");

	ALobbyPC2_C_AuthTicketResponse_Params params {};
	params.AuthTicket = AuthTicket;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.AuthTicketOnServer_Event
//		Flags  -> (Net, NetReliable, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<unsigned char>                              Ticket                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void ALobbyPC2_C::AuthTicketOnServer_Event(TArray<unsigned char> Ticket)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.AuthTicketOnServer_Event");

	ALobbyPC2_C_AuthTicketOnServer_Event_Params params {};
	params.Ticket = Ticket;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.AuthTicketServerResponse
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FUWorksSteamID                              SteamID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
//		UWorksCore_EUWorksAuthSessionResponse              AuthSessionResponse                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FUWorksSteamID                              OwnerSteamID                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void ALobbyPC2_C::AuthTicketServerResponse(const struct FUWorksSteamID& SteamID, UWorksCore_EUWorksAuthSessionResponse AuthSessionResponse, const struct FUWorksSteamID& OwnerSteamID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.AuthTicketServerResponse");

	ALobbyPC2_C_AuthTicketServerResponse_Params params {};
	params.SteamID = SteamID;
	params.AuthSessionResponse = AuthSessionResponse;
	params.OwnerSteamID = OwnerSteamID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.Verified
//		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
void ALobbyPC2_C::Verified()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.Verified");

	ALobbyPC2_C_Verified_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.OnRequestUserStatsCompleted
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bSuccessful                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FUWorksGameID                               GameID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
//		UWorksCore_EUWorksResult                           Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FUWorksSteamID                              SteamID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void ALobbyPC2_C::OnRequestUserStatsCompleted(bool bSuccessful, const struct FUWorksGameID& GameID, UWorksCore_EUWorksResult Result, const struct FUWorksSteamID& SteamID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.OnRequestUserStatsCompleted");

	ALobbyPC2_C_OnRequestUserStatsCompleted_Params params {};
	params.bSuccessful = bSuccessful;
	params.GameID = GameID;
	params.Result = Result;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.WhenEnteredNewUsername
//		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     userName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void ALobbyPC2_C::WhenEnteredNewUsername(const struct FString& userName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.WhenEnteredNewUsername");

	ALobbyPC2_C_WhenEnteredNewUsername_Params params {};
	params.userName = userName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.TransferInfo
//		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     userName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void ALobbyPC2_C::TransferInfo(const struct FString& userName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.TransferInfo");

	ALobbyPC2_C_TransferInfo_Params params {};
	params.userName = userName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.Debug_ResetSteamStats
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ALobbyPC2_C::Debug_ResetSteamStats()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.Debug_ResetSteamStats");

	ALobbyPC2_C_Debug_ResetSteamStats_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.Debug_ResetSteamStatsServer
//		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void ALobbyPC2_C::Debug_ResetSteamStatsServer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.Debug_ResetSteamStatsServer");

	ALobbyPC2_C_Debug_ResetSteamStatsServer_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.RunResetSteamStats
//		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
void ALobbyPC2_C::RunResetSteamStats()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.RunResetSteamStats");

	ALobbyPC2_C_RunResetSteamStats_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.RegisterChangedSelection
//		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<ItemSection_EItemSection>              Category                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                ItemNumber                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyPC2_C::RegisterChangedSelection(TEnumAsByte<ItemSection_EItemSection> Category, int ItemNumber)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.RegisterChangedSelection");

	ALobbyPC2_C_RegisterChangedSelection_Params params {};
	params.Category = Category;
	params.ItemNumber = ItemNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.NeverPlayedBefore
//		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void ALobbyPC2_C::NeverPlayedBefore()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.NeverPlayedBefore");

	ALobbyPC2_C_NeverPlayedBefore_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_1
//		Flags  -> (BlueprintEvent)
// Parameters:
//		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyPC2_C::InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_1(float AxisValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_1");

	ALobbyPC2_C_InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_1_Params params {};
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.WinReviewFeat
//		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void ALobbyPC2_C::WinReviewFeat()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.WinReviewFeat");

	ALobbyPC2_C_WinReviewFeat_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.StartSessionCreation01_GetNumber
//		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void ALobbyPC2_C::StartSessionCreation01_GetNumber()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.StartSessionCreation01_GetNumber");

	ALobbyPC2_C_StartSessionCreation01_GetNumber_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.OnMicrotxnFinished
//		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Success_                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ALobbyPC2_C::OnMicrotxnFinished(bool Success_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.OnMicrotxnFinished");

	ALobbyPC2_C_OnMicrotxnFinished_Params params {};
	params.Success_ = Success_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.InitiateRefundTxnServer
//		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     OrderID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void ALobbyPC2_C::InitiateRefundTxnServer(const struct FString& OrderID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.InitiateRefundTxnServer");

	ALobbyPC2_C_InitiateRefundTxnServer_Params params {};
	params.OrderID = OrderID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.RefundRequestResponse
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ULowEntryHttpRequestResponse*                Response                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyPC2_C::RefundRequestResponse(class ULowEntryHttpRequestResponse* Response)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.RefundRequestResponse");

	ALobbyPC2_C_RefundRequestResponse_Params params {};
	params.Response = Response;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.UpdateNewPlayerVersion
//		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void ALobbyPC2_C::UpdateNewPlayerVersion()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.UpdateNewPlayerVersion");

	ALobbyPC2_C_UpdateNewPlayerVersion_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.InputChat (Custom)
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ALobbyPC2_C::InputChat__Custom_()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.InputChat (Custom)");

	ALobbyPC2_C_InputChat__Custom__Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.RetrieveLeaderboardID
//		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
void ALobbyPC2_C::RetrieveLeaderboardID()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.RetrieveLeaderboardID");

	ALobbyPC2_C_RetrieveLeaderboardID_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.Delete
//		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
void ALobbyPC2_C::Delete()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.Delete");

	ALobbyPC2_C_Delete_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.StartSessionCreation02_ReceiveNumber
//		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                SessionNumber                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyPC2_C::StartSessionCreation02_ReceiveNumber(int SessionNumber)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.StartSessionCreation02_ReceiveNumber");

	ALobbyPC2_C_StartSessionCreation02_ReceiveNumber_Params params {};
	params.SessionNumber = SessionNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.CreateGameSessionServer
//		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     gameSessionId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     gameSessionData                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     Creator                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     Title                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void ALobbyPC2_C::CreateGameSessionServer(const struct FString& gameSessionId, const struct FString& gameSessionData, const struct FString& Creator, const struct FString& Title)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.CreateGameSessionServer");

	ALobbyPC2_C_CreateGameSessionServer_Params params {};
	params.gameSessionId = gameSessionId;
	params.gameSessionData = gameSessionData;
	params.Creator = Creator;
	params.Title = Title;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.JoinedQuickQueue?
//		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void ALobbyPC2_C::JoinedQuickQueue_()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.JoinedQuickQueue?");

	ALobbyPC2_C_JoinedQuickQueue__Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.BlockPurchases
//		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
void ALobbyPC2_C::BlockPurchases()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.BlockPurchases");

	ALobbyPC2_C_BlockPurchases_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.BlockJoinCreateGames
//		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
void ALobbyPC2_C::BlockJoinCreateGames()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.BlockJoinCreateGames");

	ALobbyPC2_C_BlockJoinCreateGames_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.RequestDeletion
//		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     gameSessionId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void ALobbyPC2_C::RequestDeletion(const struct FString& gameSessionId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.RequestDeletion");

	ALobbyPC2_C_RequestDeletion_Params params {};
	params.gameSessionId = gameSessionId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.TestServ
//		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void ALobbyPC2_C::TestServ()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.TestServ");

	ALobbyPC2_C_TestServ_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.ToggleCompensates
//		Flags  -> (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Compensated_                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ALobbyPC2_C::ToggleCompensates(bool Compensated_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.ToggleCompensates");

	ALobbyPC2_C_ToggleCompensates_Params params {};
	params.Compensated_ = Compensated_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.RunCompensation
//		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
void ALobbyPC2_C::RunCompensation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.RunCompensation");

	ALobbyPC2_C_RunCompensation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.Shortcut_Menu
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                MenuNumber                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyPC2_C::Shortcut_Menu(int MenuNumber)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.Shortcut_Menu");

	ALobbyPC2_C_Shortcut_Menu_Params params {};
	params.MenuNumber = MenuNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.ExecuteUbergraph_LobbyPC2
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyPC2_C::ExecuteUbergraph_LobbyPC2(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.ExecuteUbergraph_LobbyPC2");

	ALobbyPC2_C_ExecuteUbergraph_LobbyPC2_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.CancelMatchmaking__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ALobbyPC2_C::CancelMatchmaking__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.CancelMatchmaking__DelegateSignature");

	ALobbyPC2_C_CancelMatchmaking__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.JoinSearchedCustomMatch__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ALobbyPC2_C::JoinSearchedCustomMatch__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.JoinSearchedCustomMatch__DelegateSignature");

	ALobbyPC2_C_JoinSearchedCustomMatch__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.SearchCustomMatch__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ALobbyPC2_C::SearchCustomMatch__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.SearchCustomMatch__DelegateSignature");

	ALobbyPC2_C_SearchCustomMatch__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.JoinQuickGame__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ALobbyPC2_C::JoinQuickGame__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.JoinQuickGame__DelegateSignature");

	ALobbyPC2_C_JoinQuickGame__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.JoinCompetitiveGame__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ALobbyPC2_C::JoinCompetitiveGame__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.JoinCompetitiveGame__DelegateSignature");

	ALobbyPC2_C_JoinCompetitiveGame__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyPC2.LobbyPC2_C.JoinCustomMatch__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ALobbyPC2_C::JoinCustomMatch__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPC2.LobbyPC2_C.JoinCustomMatch__DelegateSignature");

	ALobbyPC2_C_JoinCustomMatch__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
