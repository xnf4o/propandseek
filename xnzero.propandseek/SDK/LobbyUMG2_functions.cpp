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
//		Name   -> Function LobbyUMG2.LobbyUMG2_C.Sub_Switcher_Lootbox
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<ESwitcherLootbox_ESwitcherLootbox>     SubStatusTo                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULobbyUMG2_C::Sub_Switcher_Lootbox(TEnumAsByte<ESwitcherLootbox_ESwitcherLootbox> SubStatusTo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyUMG2.LobbyUMG2_C.Sub_Switcher_Lootbox");

	ULobbyUMG2_C_Sub_Switcher_Lootbox_Params params {};
	params.SubStatusTo = SubStatusTo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyUMG2.LobbyUMG2_C.UpdateLootboxAmountDisplay
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                LootboxAmount                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULobbyUMG2_C::UpdateLootboxAmountDisplay(int LootboxAmount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyUMG2.LobbyUMG2_C.UpdateLootboxAmountDisplay");

	ULobbyUMG2_C_UpdateLootboxAmountDisplay_Params params {};
	params.LootboxAmount = LootboxAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyUMG2.LobbyUMG2_C.LootboxVisibility
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Visibility                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ULobbyUMG2_C::LootboxVisibility(bool Visibility)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyUMG2.LobbyUMG2_C.LootboxVisibility");

	ULobbyUMG2_C_LootboxVisibility_Params params {};
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyUMG2.LobbyUMG2_C.OnLootboxButtonPressed
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ULobbyUMG2_C::OnLootboxButtonPressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyUMG2.LobbyUMG2_C.OnLootboxButtonPressed");

	ULobbyUMG2_C_OnLootboxButtonPressed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyUMG2.LobbyUMG2_C.UpdateRegion
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<RegionList_ERegionList>                region                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULobbyUMG2_C::UpdateRegion(TEnumAsByte<RegionList_ERegionList> region)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyUMG2.LobbyUMG2_C.UpdateRegion");

	ULobbyUMG2_C_UpdateRegion_Params params {};
	params.region = region;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyUMG2.LobbyUMG2_C.AIO_UpdateCurrencies
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                GoldCoin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Stoken                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULobbyUMG2_C::AIO_UpdateCurrencies(int GoldCoin, int Stoken)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyUMG2.LobbyUMG2_C.AIO_UpdateCurrencies");

	ULobbyUMG2_C_AIO_UpdateCurrencies_Params params {};
	params.GoldCoin = GoldCoin;
	params.Stoken = Stoken;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyUMG2.LobbyUMG2_C.Main_UpdateInventory
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                GoldCoins                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                S_Tokens                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                DefaultCharacter                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                DefaultAlias                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                DefaultTauntSound                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                DefaultSpectator                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULobbyUMG2_C::Main_UpdateInventory(int GoldCoins, int S_Tokens, int DefaultCharacter, int DefaultAlias, int DefaultTauntSound, int DefaultSpectator)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyUMG2.LobbyUMG2_C.Main_UpdateInventory");

	ULobbyUMG2_C_Main_UpdateInventory_Params params {};
	params.GoldCoins = GoldCoins;
	params.S_Tokens = S_Tokens;
	params.DefaultCharacter = DefaultCharacter;
	params.DefaultAlias = DefaultAlias;
	params.DefaultTauntSound = DefaultTauntSound;
	params.DefaultSpectator = DefaultSpectator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyUMG2.LobbyUMG2_C.SubSub_Sessions
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<EPasswordUMG_EPasswordUMG>             SubStatusTo                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULobbyUMG2_C::SubSub_Sessions(TEnumAsByte<EPasswordUMG_EPasswordUMG> SubStatusTo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyUMG2.LobbyUMG2_C.SubSub_Sessions");

	ULobbyUMG2_C_SubSub_Sessions_Params params {};
	params.SubStatusTo = SubStatusTo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyUMG2.LobbyUMG2_C.Sub_Switcher_GameBrowser
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<eGameBrowser_EeGameBrowser>            SubStatusTo                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULobbyUMG2_C::Sub_Switcher_GameBrowser(TEnumAsByte<eGameBrowser_EeGameBrowser> SubStatusTo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyUMG2.LobbyUMG2_C.Sub_Switcher_GameBrowser");

	ULobbyUMG2_C_Sub_Switcher_GameBrowser_Params params {};
	params.SubStatusTo = SubStatusTo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyUMG2.LobbyUMG2_C.PC
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class ALobbyPC2_C*                                 AsLobby_PC1                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULobbyUMG2_C::PC(class ALobbyPC2_C** AsLobby_PC1)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyUMG2.LobbyUMG2_C.PC");

	ULobbyUMG2_C_PC_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsLobby_PC1 != nullptr)
		*AsLobby_PC1 = params.AsLobby_PC1;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyUMG2.LobbyUMG2_C.GI
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UGI2_C*                                      AsGI2                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULobbyUMG2_C::GI(class UGI2_C** AsGI2)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyUMG2.LobbyUMG2_C.GI");

	ULobbyUMG2_C_GI_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsGI2 != nullptr)
		*AsGI2 = params.AsGI2;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyUMG2.LobbyUMG2_C.OptionsVisibility
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Visibility                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ULobbyUMG2_C::OptionsVisibility(bool Visibility)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyUMG2.LobbyUMG2_C.OptionsVisibility");

	ULobbyUMG2_C_OptionsVisibility_Params params {};
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyUMG2.LobbyUMG2_C.OnOptionsButtonPressed
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ULobbyUMG2_C::OnOptionsButtonPressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyUMG2.LobbyUMG2_C.OnOptionsButtonPressed");

	ULobbyUMG2_C_OnOptionsButtonPressed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyUMG2.LobbyUMG2_C.Sub_Switcher_Inventory
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<EInvenMenu_EInvenMenu>                 InvenMenuTo                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULobbyUMG2_C::Sub_Switcher_Inventory(TEnumAsByte<EInvenMenu_EInvenMenu> InvenMenuTo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyUMG2.LobbyUMG2_C.Sub_Switcher_Inventory");

	ULobbyUMG2_C_Sub_Switcher_Inventory_Params params {};
	params.InvenMenuTo = InvenMenuTo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyUMG2.LobbyUMG2_C.Sub_Switcher_Play
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               HideAll_                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               ShowDefault_                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		TEnumAsByte<ePlayUMG_EePlayUMG>                    SubStatusTo                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULobbyUMG2_C::Sub_Switcher_Play(bool HideAll_, bool ShowDefault_, TEnumAsByte<ePlayUMG_EePlayUMG> SubStatusTo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyUMG2.LobbyUMG2_C.Sub_Switcher_Play");

	ULobbyUMG2_C_Sub_Switcher_Play_Params params {};
	params.HideAll_ = HideAll_;
	params.ShowDefault_ = ShowDefault_;
	params.SubStatusTo = SubStatusTo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyUMG2.LobbyUMG2_C.Sub_Switcher_Home
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<ESwitcher_Home_ESwitcher_Home>         SubStatusTo                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULobbyUMG2_C::Sub_Switcher_Home(TEnumAsByte<ESwitcher_Home_ESwitcher_Home> SubStatusTo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyUMG2.LobbyUMG2_C.Sub_Switcher_Home");

	ULobbyUMG2_C_Sub_Switcher_Home_Params params {};
	params.SubStatusTo = SubStatusTo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyUMG2.LobbyUMG2_C.Sub_Switcher_Entry
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               HideAll_                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		TEnumAsByte<ESwitcher_Entry_ESwitcher_Entry>       SubStatusTo                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       TxtConnection                                              (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FText                                       TxtError                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
void ULobbyUMG2_C::Sub_Switcher_Entry(bool HideAll_, TEnumAsByte<ESwitcher_Entry_ESwitcher_Entry> SubStatusTo, const struct FText& TxtConnection, const struct FText& TxtError)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyUMG2.LobbyUMG2_C.Sub_Switcher_Entry");

	ULobbyUMG2_C_Sub_Switcher_Entry_Params params {};
	params.HideAll_ = HideAll_;
	params.SubStatusTo = SubStatusTo;
	params.TxtConnection = TxtConnection;
	params.TxtError = TxtError;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyUMG2.LobbyUMG2_C.InventoryVisibility
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Visibility                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ULobbyUMG2_C::InventoryVisibility(bool Visibility)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyUMG2.LobbyUMG2_C.InventoryVisibility");

	ULobbyUMG2_C_InventoryVisibility_Params params {};
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyUMG2.LobbyUMG2_C.ShopVisibility
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Visibility                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ULobbyUMG2_C::ShopVisibility(bool Visibility)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyUMG2.LobbyUMG2_C.ShopVisibility");

	ULobbyUMG2_C_ShopVisibility_Params params {};
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyUMG2.LobbyUMG2_C.EntryVisibility
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Visibility                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ULobbyUMG2_C::EntryVisibility(bool Visibility)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyUMG2.LobbyUMG2_C.EntryVisibility");

	ULobbyUMG2_C_EntryVisibility_Params params {};
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyUMG2.LobbyUMG2_C.PlayUMGVisibility
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Visibility                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ULobbyUMG2_C::PlayUMGVisibility(bool Visibility)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyUMG2.LobbyUMG2_C.PlayUMGVisibility");

	ULobbyUMG2_C_PlayUMGVisibility_Params params {};
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyUMG2.LobbyUMG2_C.QuitVisibility
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Visibility                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ULobbyUMG2_C::QuitVisibility(bool Visibility)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyUMG2.LobbyUMG2_C.QuitVisibility");

	ULobbyUMG2_C_QuitVisibility_Params params {};
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyUMG2.LobbyUMG2_C.ProfileVisibility
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Visibility                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ULobbyUMG2_C::ProfileVisibility(bool Visibility)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyUMG2.LobbyUMG2_C.ProfileVisibility");

	ULobbyUMG2_C_ProfileVisibility_Params params {};
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyUMG2.LobbyUMG2_C.HomeVisibility
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Visibility                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ULobbyUMG2_C::HomeVisibility(bool Visibility)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyUMG2.LobbyUMG2_C.HomeVisibility");

	ULobbyUMG2_C_HomeVisibility_Params params {};
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyUMG2.LobbyUMG2_C.OnHomeButtonPressed
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ULobbyUMG2_C::OnHomeButtonPressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyUMG2.LobbyUMG2_C.OnHomeButtonPressed");

	ULobbyUMG2_C_OnHomeButtonPressed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyUMG2.LobbyUMG2_C.OnQuitButtonPressed
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ULobbyUMG2_C::OnQuitButtonPressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyUMG2.LobbyUMG2_C.OnQuitButtonPressed");

	ULobbyUMG2_C_OnQuitButtonPressed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyUMG2.LobbyUMG2_C.OnProfileButtonPressed
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ULobbyUMG2_C::OnProfileButtonPressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyUMG2.LobbyUMG2_C.OnProfileButtonPressed");

	ULobbyUMG2_C_OnProfileButtonPressed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyUMG2.LobbyUMG2_C.OnShopButtonPressed
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ULobbyUMG2_C::OnShopButtonPressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyUMG2.LobbyUMG2_C.OnShopButtonPressed");

	ULobbyUMG2_C_OnShopButtonPressed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyUMG2.LobbyUMG2_C.OnInventoryButtonPressed
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ULobbyUMG2_C::OnInventoryButtonPressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyUMG2.LobbyUMG2_C.OnInventoryButtonPressed");

	ULobbyUMG2_C_OnInventoryButtonPressed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyUMG2.LobbyUMG2_C.OnPlayButtonPressed
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ULobbyUMG2_C::OnPlayButtonPressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyUMG2.LobbyUMG2_C.OnPlayButtonPressed");

	ULobbyUMG2_C_OnPlayButtonPressed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyUMG2.LobbyUMG2_C.InitRef
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ULobbyUMG2_C::InitRef()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyUMG2.LobbyUMG2_C.InitRef");

	ULobbyUMG2_C_InitRef_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyUMG2.LobbyUMG2_C.Switcher
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<ELobbyMode_ELobbyMode>                 ChangeTo                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULobbyUMG2_C::Switcher(TEnumAsByte<ELobbyMode_ELobbyMode> ChangeTo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyUMG2.LobbyUMG2_C.Switcher");

	ULobbyUMG2_C_Switcher_Params params {};
	params.ChangeTo = ChangeTo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyUMG2.LobbyUMG2_C.BndEvt__Main_Options_Fix1_K2Node_ComponentBoundEvent_6_OnBackButtonClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void ULobbyUMG2_C::BndEvt__Main_Options_Fix1_K2Node_ComponentBoundEvent_6_OnBackButtonClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyUMG2.LobbyUMG2_C.BndEvt__Main_Options_Fix1_K2Node_ComponentBoundEvent_6_OnBackButtonClicked__DelegateSignature");

	ULobbyUMG2_C_BndEvt__Main_Options_Fix1_K2Node_ComponentBoundEvent_6_OnBackButtonClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyUMG2.LobbyUMG2_C.BndEvt__BackButton_Fix1_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void ULobbyUMG2_C::BndEvt__BackButton_Fix1_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyUMG2.LobbyUMG2_C.BndEvt__BackButton_Fix1_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature");

	ULobbyUMG2_C_BndEvt__BackButton_Fix1_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyUMG2.LobbyUMG2_C.BndEvt__Main_ProfileButton_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void ULobbyUMG2_C::BndEvt__Main_ProfileButton_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyUMG2.LobbyUMG2_C.BndEvt__Main_ProfileButton_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature");

	ULobbyUMG2_C_BndEvt__Main_ProfileButton_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyUMG2.LobbyUMG2_C.BndEvt__Main_InventoryButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void ULobbyUMG2_C::BndEvt__Main_InventoryButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyUMG2.LobbyUMG2_C.BndEvt__Main_InventoryButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature");

	ULobbyUMG2_C_BndEvt__Main_InventoryButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyUMG2.LobbyUMG2_C.BndEvt__Main_ShopButton_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void ULobbyUMG2_C::BndEvt__Main_ShopButton_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyUMG2.LobbyUMG2_C.BndEvt__Main_ShopButton_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature");

	ULobbyUMG2_C_BndEvt__Main_ShopButton_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyUMG2.LobbyUMG2_C.BndEvt__Main_Options_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void ULobbyUMG2_C::BndEvt__Main_Options_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyUMG2.LobbyUMG2_C.BndEvt__Main_Options_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature");

	ULobbyUMG2_C_BndEvt__Main_Options_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyUMG2.LobbyUMG2_C.BndEvt__Main_Quit_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void ULobbyUMG2_C::BndEvt__Main_Quit_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyUMG2.LobbyUMG2_C.BndEvt__Main_Quit_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature");

	ULobbyUMG2_C_BndEvt__Main_Quit_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyUMG2.LobbyUMG2_C.BndEvt__WB_B01_Native_Preset04_C_6_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void ULobbyUMG2_C::BndEvt__WB_B01_Native_Preset04_C_6_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyUMG2.LobbyUMG2_C.BndEvt__WB_B01_Native_Preset04_C_6_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature");

	ULobbyUMG2_C_BndEvt__WB_B01_Native_Preset04_C_6_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyUMG2.LobbyUMG2_C.BndEvt__DiscordButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void ULobbyUMG2_C::BndEvt__DiscordButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyUMG2.LobbyUMG2_C.BndEvt__DiscordButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	ULobbyUMG2_C_BndEvt__DiscordButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyUMG2.LobbyUMG2_C.BndEvt__TitleButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void ULobbyUMG2_C::BndEvt__TitleButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyUMG2.LobbyUMG2_C.BndEvt__TitleButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	ULobbyUMG2_C_BndEvt__TitleButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyUMG2.LobbyUMG2_C.BndEvt__DiscordButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void ULobbyUMG2_C::BndEvt__DiscordButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyUMG2.LobbyUMG2_C.BndEvt__DiscordButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");

	ULobbyUMG2_C_BndEvt__DiscordButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyUMG2.LobbyUMG2_C.BndEvt__DiscordButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void ULobbyUMG2_C::BndEvt__DiscordButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyUMG2.LobbyUMG2_C.BndEvt__DiscordButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	ULobbyUMG2_C_BndEvt__DiscordButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyUMG2.LobbyUMG2_C.BndEvt__TitleButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void ULobbyUMG2_C::BndEvt__TitleButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyUMG2.LobbyUMG2_C.BndEvt__TitleButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	ULobbyUMG2_C_BndEvt__TitleButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyUMG2.LobbyUMG2_C.BndEvt__TitleButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void ULobbyUMG2_C::BndEvt__TitleButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyUMG2.LobbyUMG2_C.BndEvt__TitleButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	ULobbyUMG2_C_BndEvt__TitleButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyUMG2.LobbyUMG2_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void ULobbyUMG2_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyUMG2.LobbyUMG2_C.Construct");

	ULobbyUMG2_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyUMG2.LobbyUMG2_C.BndEvt__PlayButton_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void ULobbyUMG2_C::BndEvt__PlayButton_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyUMG2.LobbyUMG2_C.BndEvt__PlayButton_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature");

	ULobbyUMG2_C_BndEvt__PlayButton_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyUMG2.LobbyUMG2_C.BndEvt__Main_Play_K2Node_ComponentBoundEvent_40_OnHovered__DelegateSignature
//		Flags  -> (BlueprintEvent)
void ULobbyUMG2_C::BndEvt__Main_Play_K2Node_ComponentBoundEvent_40_OnHovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyUMG2.LobbyUMG2_C.BndEvt__Main_Play_K2Node_ComponentBoundEvent_40_OnHovered__DelegateSignature");

	ULobbyUMG2_C_BndEvt__Main_Play_K2Node_ComponentBoundEvent_40_OnHovered__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyUMG2.LobbyUMG2_C.BndEvt__Main_Play_K2Node_ComponentBoundEvent_41_OnUnhovered__DelegateSignature
//		Flags  -> (BlueprintEvent)
void ULobbyUMG2_C::BndEvt__Main_Play_K2Node_ComponentBoundEvent_41_OnUnhovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyUMG2.LobbyUMG2_C.BndEvt__Main_Play_K2Node_ComponentBoundEvent_41_OnUnhovered__DelegateSignature");

	ULobbyUMG2_C_BndEvt__Main_Play_K2Node_ComponentBoundEvent_41_OnUnhovered__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyUMG2.LobbyUMG2_C.BndEvt__Main_ProfileButton_K2Node_ComponentBoundEvent_42_OnHovered__DelegateSignature
//		Flags  -> (BlueprintEvent)
void ULobbyUMG2_C::BndEvt__Main_ProfileButton_K2Node_ComponentBoundEvent_42_OnHovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyUMG2.LobbyUMG2_C.BndEvt__Main_ProfileButton_K2Node_ComponentBoundEvent_42_OnHovered__DelegateSignature");

	ULobbyUMG2_C_BndEvt__Main_ProfileButton_K2Node_ComponentBoundEvent_42_OnHovered__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyUMG2.LobbyUMG2_C.BndEvt__Main_ProfileButton_K2Node_ComponentBoundEvent_43_OnUnhovered__DelegateSignature
//		Flags  -> (BlueprintEvent)
void ULobbyUMG2_C::BndEvt__Main_ProfileButton_K2Node_ComponentBoundEvent_43_OnUnhovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyUMG2.LobbyUMG2_C.BndEvt__Main_ProfileButton_K2Node_ComponentBoundEvent_43_OnUnhovered__DelegateSignature");

	ULobbyUMG2_C_BndEvt__Main_ProfileButton_K2Node_ComponentBoundEvent_43_OnUnhovered__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyUMG2.LobbyUMG2_C.BndEvt__Main_InventoryButton_K2Node_ComponentBoundEvent_44_OnHovered__DelegateSignature
//		Flags  -> (BlueprintEvent)
void ULobbyUMG2_C::BndEvt__Main_InventoryButton_K2Node_ComponentBoundEvent_44_OnHovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyUMG2.LobbyUMG2_C.BndEvt__Main_InventoryButton_K2Node_ComponentBoundEvent_44_OnHovered__DelegateSignature");

	ULobbyUMG2_C_BndEvt__Main_InventoryButton_K2Node_ComponentBoundEvent_44_OnHovered__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyUMG2.LobbyUMG2_C.BndEvt__Main_InventoryButton_K2Node_ComponentBoundEvent_45_OnUnhovered__DelegateSignature
//		Flags  -> (BlueprintEvent)
void ULobbyUMG2_C::BndEvt__Main_InventoryButton_K2Node_ComponentBoundEvent_45_OnUnhovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyUMG2.LobbyUMG2_C.BndEvt__Main_InventoryButton_K2Node_ComponentBoundEvent_45_OnUnhovered__DelegateSignature");

	ULobbyUMG2_C_BndEvt__Main_InventoryButton_K2Node_ComponentBoundEvent_45_OnUnhovered__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyUMG2.LobbyUMG2_C.BndEvt__Main_ShopButton_K2Node_ComponentBoundEvent_46_OnHovered__DelegateSignature
//		Flags  -> (BlueprintEvent)
void ULobbyUMG2_C::BndEvt__Main_ShopButton_K2Node_ComponentBoundEvent_46_OnHovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyUMG2.LobbyUMG2_C.BndEvt__Main_ShopButton_K2Node_ComponentBoundEvent_46_OnHovered__DelegateSignature");

	ULobbyUMG2_C_BndEvt__Main_ShopButton_K2Node_ComponentBoundEvent_46_OnHovered__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyUMG2.LobbyUMG2_C.BndEvt__Main_ShopButton_K2Node_ComponentBoundEvent_48_OnUnhovered__DelegateSignature
//		Flags  -> (BlueprintEvent)
void ULobbyUMG2_C::BndEvt__Main_ShopButton_K2Node_ComponentBoundEvent_48_OnUnhovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyUMG2.LobbyUMG2_C.BndEvt__Main_ShopButton_K2Node_ComponentBoundEvent_48_OnUnhovered__DelegateSignature");

	ULobbyUMG2_C_BndEvt__Main_ShopButton_K2Node_ComponentBoundEvent_48_OnUnhovered__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyUMG2.LobbyUMG2_C.BndEvt__Main_Options_K2Node_ComponentBoundEvent_49_OnHovered__DelegateSignature
//		Flags  -> (BlueprintEvent)
void ULobbyUMG2_C::BndEvt__Main_Options_K2Node_ComponentBoundEvent_49_OnHovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyUMG2.LobbyUMG2_C.BndEvt__Main_Options_K2Node_ComponentBoundEvent_49_OnHovered__DelegateSignature");

	ULobbyUMG2_C_BndEvt__Main_Options_K2Node_ComponentBoundEvent_49_OnHovered__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyUMG2.LobbyUMG2_C.BndEvt__Main_Options_K2Node_ComponentBoundEvent_50_OnUnhovered__DelegateSignature
//		Flags  -> (BlueprintEvent)
void ULobbyUMG2_C::BndEvt__Main_Options_K2Node_ComponentBoundEvent_50_OnUnhovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyUMG2.LobbyUMG2_C.BndEvt__Main_Options_K2Node_ComponentBoundEvent_50_OnUnhovered__DelegateSignature");

	ULobbyUMG2_C_BndEvt__Main_Options_K2Node_ComponentBoundEvent_50_OnUnhovered__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyUMG2.LobbyUMG2_C.BndEvt__Main_Quit_K2Node_ComponentBoundEvent_51_OnHovered__DelegateSignature
//		Flags  -> (BlueprintEvent)
void ULobbyUMG2_C::BndEvt__Main_Quit_K2Node_ComponentBoundEvent_51_OnHovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyUMG2.LobbyUMG2_C.BndEvt__Main_Quit_K2Node_ComponentBoundEvent_51_OnHovered__DelegateSignature");

	ULobbyUMG2_C_BndEvt__Main_Quit_K2Node_ComponentBoundEvent_51_OnHovered__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyUMG2.LobbyUMG2_C.BndEvt__Main_Quit_K2Node_ComponentBoundEvent_52_OnUnhovered__DelegateSignature
//		Flags  -> (BlueprintEvent)
void ULobbyUMG2_C::BndEvt__Main_Quit_K2Node_ComponentBoundEvent_52_OnUnhovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyUMG2.LobbyUMG2_C.BndEvt__Main_Quit_K2Node_ComponentBoundEvent_52_OnUnhovered__DelegateSignature");

	ULobbyUMG2_C_BndEvt__Main_Quit_K2Node_ComponentBoundEvent_52_OnUnhovered__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyUMG2.LobbyUMG2_C.BndEvt__EditableTextBox_98_K2Node_ComponentBoundEvent_14_OnEditableTextBoxChangedEvent__DelegateSignature
//		Flags  -> (HasOutParms, BlueprintEvent)
// Parameters:
//		struct FText                                       Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void ULobbyUMG2_C::BndEvt__EditableTextBox_98_K2Node_ComponentBoundEvent_14_OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyUMG2.LobbyUMG2_C.BndEvt__EditableTextBox_98_K2Node_ComponentBoundEvent_14_OnEditableTextBoxChangedEvent__DelegateSignature");

	ULobbyUMG2_C_BndEvt__EditableTextBox_98_K2Node_ComponentBoundEvent_14_OnEditableTextBoxChangedEvent__DelegateSignature_Params params {};
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyUMG2.LobbyUMG2_C.BndEvt__PurchaseLinkButton_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void ULobbyUMG2_C::BndEvt__PurchaseLinkButton_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyUMG2.LobbyUMG2_C.BndEvt__PurchaseLinkButton_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature");

	ULobbyUMG2_C_BndEvt__PurchaseLinkButton_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyUMG2.LobbyUMG2_C.BndEvt__Main_Lootbox_K2Node_ComponentBoundEvent_18_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void ULobbyUMG2_C::BndEvt__Main_Lootbox_K2Node_ComponentBoundEvent_18_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyUMG2.LobbyUMG2_C.BndEvt__Main_Lootbox_K2Node_ComponentBoundEvent_18_OnClicked__DelegateSignature");

	ULobbyUMG2_C_BndEvt__Main_Lootbox_K2Node_ComponentBoundEvent_18_OnClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyUMG2.LobbyUMG2_C.BndEvt__Facebook_button_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void ULobbyUMG2_C::BndEvt__Facebook_button_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyUMG2.LobbyUMG2_C.BndEvt__Facebook_button_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature");

	ULobbyUMG2_C_BndEvt__Facebook_button_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyUMG2.LobbyUMG2_C.BndEvt__Facebook_button_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void ULobbyUMG2_C::BndEvt__Facebook_button_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyUMG2.LobbyUMG2_C.BndEvt__Facebook_button_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature");

	ULobbyUMG2_C_BndEvt__Facebook_button_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyUMG2.LobbyUMG2_C.BndEvt__Facebook_button_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void ULobbyUMG2_C::BndEvt__Facebook_button_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyUMG2.LobbyUMG2_C.BndEvt__Facebook_button_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature");

	ULobbyUMG2_C_BndEvt__Facebook_button_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyUMG2.LobbyUMG2_C.BndEvt__Twitter_Button_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void ULobbyUMG2_C::BndEvt__Twitter_Button_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyUMG2.LobbyUMG2_C.BndEvt__Twitter_Button_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature");

	ULobbyUMG2_C_BndEvt__Twitter_Button_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyUMG2.LobbyUMG2_C.BndEvt__Twitter_Button_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void ULobbyUMG2_C::BndEvt__Twitter_Button_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyUMG2.LobbyUMG2_C.BndEvt__Twitter_Button_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature");

	ULobbyUMG2_C_BndEvt__Twitter_Button_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyUMG2.LobbyUMG2_C.BndEvt__Twitter_Button_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void ULobbyUMG2_C::BndEvt__Twitter_Button_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyUMG2.LobbyUMG2_C.BndEvt__Twitter_Button_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature");

	ULobbyUMG2_C_BndEvt__Twitter_Button_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyUMG2.LobbyUMG2_C.BndEvt__Youtube_Button_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void ULobbyUMG2_C::BndEvt__Youtube_Button_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyUMG2.LobbyUMG2_C.BndEvt__Youtube_Button_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature");

	ULobbyUMG2_C_BndEvt__Youtube_Button_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyUMG2.LobbyUMG2_C.BndEvt__Youtube_Button_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void ULobbyUMG2_C::BndEvt__Youtube_Button_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyUMG2.LobbyUMG2_C.BndEvt__Youtube_Button_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature");

	ULobbyUMG2_C_BndEvt__Youtube_Button_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyUMG2.LobbyUMG2_C.BndEvt__Youtube_Button_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void ULobbyUMG2_C::BndEvt__Youtube_Button_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyUMG2.LobbyUMG2_C.BndEvt__Youtube_Button_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature");

	ULobbyUMG2_C_BndEvt__Youtube_Button_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyUMG2.LobbyUMG2_C.BndEvt__Company_Button_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void ULobbyUMG2_C::BndEvt__Company_Button_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyUMG2.LobbyUMG2_C.BndEvt__Company_Button_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature");

	ULobbyUMG2_C_BndEvt__Company_Button_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyUMG2.LobbyUMG2_C.BndEvt__Company_Button_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void ULobbyUMG2_C::BndEvt__Company_Button_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyUMG2.LobbyUMG2_C.BndEvt__Company_Button_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature");

	ULobbyUMG2_C_BndEvt__Company_Button_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyUMG2.LobbyUMG2_C.BndEvt__Company_Button_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void ULobbyUMG2_C::BndEvt__Company_Button_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyUMG2.LobbyUMG2_C.BndEvt__Company_Button_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature");

	ULobbyUMG2_C_BndEvt__Company_Button_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LobbyUMG2.LobbyUMG2_C.ExecuteUbergraph_LobbyUMG2
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULobbyUMG2_C::ExecuteUbergraph_LobbyUMG2(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyUMG2.LobbyUMG2_C.ExecuteUbergraph_LobbyUMG2");

	ULobbyUMG2_C_ExecuteUbergraph_LobbyUMG2_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
