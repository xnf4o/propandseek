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

// Function LobbyUMG2.LobbyUMG2_C.Sub_Switcher_Lootbox
struct ULobbyUMG2_C_Sub_Switcher_Lootbox_Params
{
	TEnumAsByte<ESwitcherLootbox_ESwitcherLootbox>     SubStatusTo;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyUMG2.LobbyUMG2_C.UpdateLootboxAmountDisplay
struct ULobbyUMG2_C_UpdateLootboxAmountDisplay_Params
{
	int                                                LootboxAmount;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyUMG2.LobbyUMG2_C.LootboxVisibility
struct ULobbyUMG2_C_LootboxVisibility_Params
{
	bool                                               Visibility;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function LobbyUMG2.LobbyUMG2_C.OnLootboxButtonPressed
struct ULobbyUMG2_C_OnLootboxButtonPressed_Params
{
};

// Function LobbyUMG2.LobbyUMG2_C.UpdateRegion
struct ULobbyUMG2_C_UpdateRegion_Params
{
	TEnumAsByte<RegionList_ERegionList>                region;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyUMG2.LobbyUMG2_C.AIO_UpdateCurrencies
struct ULobbyUMG2_C_AIO_UpdateCurrencies_Params
{
	int                                                GoldCoin;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Stoken;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyUMG2.LobbyUMG2_C.Main_UpdateInventory
struct ULobbyUMG2_C_Main_UpdateInventory_Params
{
	int                                                GoldCoins;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                S_Tokens;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                DefaultCharacter;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                DefaultAlias;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                DefaultTauntSound;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                DefaultSpectator;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyUMG2.LobbyUMG2_C.SubSub_Sessions
struct ULobbyUMG2_C_SubSub_Sessions_Params
{
	TEnumAsByte<EPasswordUMG_EPasswordUMG>             SubStatusTo;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyUMG2.LobbyUMG2_C.Sub_Switcher_GameBrowser
struct ULobbyUMG2_C_Sub_Switcher_GameBrowser_Params
{
	TEnumAsByte<eGameBrowser_EeGameBrowser>            SubStatusTo;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyUMG2.LobbyUMG2_C.PC
struct ULobbyUMG2_C_PC_Params
{
	class ALobbyPC2_C*                                 AsLobby_PC1;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyUMG2.LobbyUMG2_C.GI
struct ULobbyUMG2_C_GI_Params
{
	class UGI2_C*                                      AsGI2;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyUMG2.LobbyUMG2_C.OptionsVisibility
struct ULobbyUMG2_C_OptionsVisibility_Params
{
	bool                                               Visibility;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function LobbyUMG2.LobbyUMG2_C.OnOptionsButtonPressed
struct ULobbyUMG2_C_OnOptionsButtonPressed_Params
{
};

// Function LobbyUMG2.LobbyUMG2_C.Sub_Switcher_Inventory
struct ULobbyUMG2_C_Sub_Switcher_Inventory_Params
{
	TEnumAsByte<EInvenMenu_EInvenMenu>                 InvenMenuTo;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyUMG2.LobbyUMG2_C.Sub_Switcher_Play
struct ULobbyUMG2_C_Sub_Switcher_Play_Params
{
	bool                                               HideAll_;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ShowDefault_;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<ePlayUMG_EePlayUMG>                    SubStatusTo;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyUMG2.LobbyUMG2_C.Sub_Switcher_Home
struct ULobbyUMG2_C_Sub_Switcher_Home_Params
{
	TEnumAsByte<ESwitcher_Home_ESwitcher_Home>         SubStatusTo;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyUMG2.LobbyUMG2_C.Sub_Switcher_Entry
struct ULobbyUMG2_C_Sub_Switcher_Entry_Params
{
	bool                                               HideAll_;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<ESwitcher_Entry_ESwitcher_Entry>       SubStatusTo;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       TxtConnection;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       TxtError;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function LobbyUMG2.LobbyUMG2_C.InventoryVisibility
struct ULobbyUMG2_C_InventoryVisibility_Params
{
	bool                                               Visibility;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function LobbyUMG2.LobbyUMG2_C.ShopVisibility
struct ULobbyUMG2_C_ShopVisibility_Params
{
	bool                                               Visibility;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function LobbyUMG2.LobbyUMG2_C.EntryVisibility
struct ULobbyUMG2_C_EntryVisibility_Params
{
	bool                                               Visibility;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function LobbyUMG2.LobbyUMG2_C.PlayUMGVisibility
struct ULobbyUMG2_C_PlayUMGVisibility_Params
{
	bool                                               Visibility;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function LobbyUMG2.LobbyUMG2_C.QuitVisibility
struct ULobbyUMG2_C_QuitVisibility_Params
{
	bool                                               Visibility;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function LobbyUMG2.LobbyUMG2_C.ProfileVisibility
struct ULobbyUMG2_C_ProfileVisibility_Params
{
	bool                                               Visibility;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function LobbyUMG2.LobbyUMG2_C.HomeVisibility
struct ULobbyUMG2_C_HomeVisibility_Params
{
	bool                                               Visibility;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function LobbyUMG2.LobbyUMG2_C.OnHomeButtonPressed
struct ULobbyUMG2_C_OnHomeButtonPressed_Params
{
};

// Function LobbyUMG2.LobbyUMG2_C.OnQuitButtonPressed
struct ULobbyUMG2_C_OnQuitButtonPressed_Params
{
};

// Function LobbyUMG2.LobbyUMG2_C.OnProfileButtonPressed
struct ULobbyUMG2_C_OnProfileButtonPressed_Params
{
};

// Function LobbyUMG2.LobbyUMG2_C.OnShopButtonPressed
struct ULobbyUMG2_C_OnShopButtonPressed_Params
{
};

// Function LobbyUMG2.LobbyUMG2_C.OnInventoryButtonPressed
struct ULobbyUMG2_C_OnInventoryButtonPressed_Params
{
};

// Function LobbyUMG2.LobbyUMG2_C.OnPlayButtonPressed
struct ULobbyUMG2_C_OnPlayButtonPressed_Params
{
};

// Function LobbyUMG2.LobbyUMG2_C.InitRef
struct ULobbyUMG2_C_InitRef_Params
{
};

// Function LobbyUMG2.LobbyUMG2_C.Switcher
struct ULobbyUMG2_C_Switcher_Params
{
	TEnumAsByte<ELobbyMode_ELobbyMode>                 ChangeTo;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyUMG2.LobbyUMG2_C.BndEvt__Main_Options_Fix1_K2Node_ComponentBoundEvent_6_OnBackButtonClicked__DelegateSignature
struct ULobbyUMG2_C_BndEvt__Main_Options_Fix1_K2Node_ComponentBoundEvent_6_OnBackButtonClicked__DelegateSignature_Params
{
};

// Function LobbyUMG2.LobbyUMG2_C.BndEvt__BackButton_Fix1_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
struct ULobbyUMG2_C_BndEvt__BackButton_Fix1_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params
{
};

// Function LobbyUMG2.LobbyUMG2_C.BndEvt__Main_ProfileButton_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
struct ULobbyUMG2_C_BndEvt__Main_ProfileButton_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature_Params
{
};

// Function LobbyUMG2.LobbyUMG2_C.BndEvt__Main_InventoryButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature
struct ULobbyUMG2_C_BndEvt__Main_InventoryButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature_Params
{
};

// Function LobbyUMG2.LobbyUMG2_C.BndEvt__Main_ShopButton_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature
struct ULobbyUMG2_C_BndEvt__Main_ShopButton_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature_Params
{
};

// Function LobbyUMG2.LobbyUMG2_C.BndEvt__Main_Options_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature
struct ULobbyUMG2_C_BndEvt__Main_Options_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature_Params
{
};

// Function LobbyUMG2.LobbyUMG2_C.BndEvt__Main_Quit_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature
struct ULobbyUMG2_C_BndEvt__Main_Quit_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature_Params
{
};

// Function LobbyUMG2.LobbyUMG2_C.BndEvt__WB_B01_Native_Preset04_C_6_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature
struct ULobbyUMG2_C_BndEvt__WB_B01_Native_Preset04_C_6_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature_Params
{
};

// Function LobbyUMG2.LobbyUMG2_C.BndEvt__DiscordButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
struct ULobbyUMG2_C_BndEvt__DiscordButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function LobbyUMG2.LobbyUMG2_C.BndEvt__TitleButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
struct ULobbyUMG2_C_BndEvt__TitleButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function LobbyUMG2.LobbyUMG2_C.BndEvt__DiscordButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
struct ULobbyUMG2_C_BndEvt__DiscordButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function LobbyUMG2.LobbyUMG2_C.BndEvt__DiscordButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
struct ULobbyUMG2_C_BndEvt__DiscordButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function LobbyUMG2.LobbyUMG2_C.BndEvt__TitleButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct ULobbyUMG2_C_BndEvt__TitleButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function LobbyUMG2.LobbyUMG2_C.BndEvt__TitleButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
struct ULobbyUMG2_C_BndEvt__TitleButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function LobbyUMG2.LobbyUMG2_C.Construct
struct ULobbyUMG2_C_Construct_Params
{
};

// Function LobbyUMG2.LobbyUMG2_C.BndEvt__PlayButton_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature
struct ULobbyUMG2_C_BndEvt__PlayButton_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function LobbyUMG2.LobbyUMG2_C.BndEvt__Main_Play_K2Node_ComponentBoundEvent_40_OnHovered__DelegateSignature
struct ULobbyUMG2_C_BndEvt__Main_Play_K2Node_ComponentBoundEvent_40_OnHovered__DelegateSignature_Params
{
};

// Function LobbyUMG2.LobbyUMG2_C.BndEvt__Main_Play_K2Node_ComponentBoundEvent_41_OnUnhovered__DelegateSignature
struct ULobbyUMG2_C_BndEvt__Main_Play_K2Node_ComponentBoundEvent_41_OnUnhovered__DelegateSignature_Params
{
};

// Function LobbyUMG2.LobbyUMG2_C.BndEvt__Main_ProfileButton_K2Node_ComponentBoundEvent_42_OnHovered__DelegateSignature
struct ULobbyUMG2_C_BndEvt__Main_ProfileButton_K2Node_ComponentBoundEvent_42_OnHovered__DelegateSignature_Params
{
};

// Function LobbyUMG2.LobbyUMG2_C.BndEvt__Main_ProfileButton_K2Node_ComponentBoundEvent_43_OnUnhovered__DelegateSignature
struct ULobbyUMG2_C_BndEvt__Main_ProfileButton_K2Node_ComponentBoundEvent_43_OnUnhovered__DelegateSignature_Params
{
};

// Function LobbyUMG2.LobbyUMG2_C.BndEvt__Main_InventoryButton_K2Node_ComponentBoundEvent_44_OnHovered__DelegateSignature
struct ULobbyUMG2_C_BndEvt__Main_InventoryButton_K2Node_ComponentBoundEvent_44_OnHovered__DelegateSignature_Params
{
};

// Function LobbyUMG2.LobbyUMG2_C.BndEvt__Main_InventoryButton_K2Node_ComponentBoundEvent_45_OnUnhovered__DelegateSignature
struct ULobbyUMG2_C_BndEvt__Main_InventoryButton_K2Node_ComponentBoundEvent_45_OnUnhovered__DelegateSignature_Params
{
};

// Function LobbyUMG2.LobbyUMG2_C.BndEvt__Main_ShopButton_K2Node_ComponentBoundEvent_46_OnHovered__DelegateSignature
struct ULobbyUMG2_C_BndEvt__Main_ShopButton_K2Node_ComponentBoundEvent_46_OnHovered__DelegateSignature_Params
{
};

// Function LobbyUMG2.LobbyUMG2_C.BndEvt__Main_ShopButton_K2Node_ComponentBoundEvent_48_OnUnhovered__DelegateSignature
struct ULobbyUMG2_C_BndEvt__Main_ShopButton_K2Node_ComponentBoundEvent_48_OnUnhovered__DelegateSignature_Params
{
};

// Function LobbyUMG2.LobbyUMG2_C.BndEvt__Main_Options_K2Node_ComponentBoundEvent_49_OnHovered__DelegateSignature
struct ULobbyUMG2_C_BndEvt__Main_Options_K2Node_ComponentBoundEvent_49_OnHovered__DelegateSignature_Params
{
};

// Function LobbyUMG2.LobbyUMG2_C.BndEvt__Main_Options_K2Node_ComponentBoundEvent_50_OnUnhovered__DelegateSignature
struct ULobbyUMG2_C_BndEvt__Main_Options_K2Node_ComponentBoundEvent_50_OnUnhovered__DelegateSignature_Params
{
};

// Function LobbyUMG2.LobbyUMG2_C.BndEvt__Main_Quit_K2Node_ComponentBoundEvent_51_OnHovered__DelegateSignature
struct ULobbyUMG2_C_BndEvt__Main_Quit_K2Node_ComponentBoundEvent_51_OnHovered__DelegateSignature_Params
{
};

// Function LobbyUMG2.LobbyUMG2_C.BndEvt__Main_Quit_K2Node_ComponentBoundEvent_52_OnUnhovered__DelegateSignature
struct ULobbyUMG2_C_BndEvt__Main_Quit_K2Node_ComponentBoundEvent_52_OnUnhovered__DelegateSignature_Params
{
};

// Function LobbyUMG2.LobbyUMG2_C.BndEvt__EditableTextBox_98_K2Node_ComponentBoundEvent_14_OnEditableTextBoxChangedEvent__DelegateSignature
struct ULobbyUMG2_C_BndEvt__EditableTextBox_98_K2Node_ComponentBoundEvent_14_OnEditableTextBoxChangedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function LobbyUMG2.LobbyUMG2_C.BndEvt__PurchaseLinkButton_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
struct ULobbyUMG2_C_BndEvt__PurchaseLinkButton_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function LobbyUMG2.LobbyUMG2_C.BndEvt__Main_Lootbox_K2Node_ComponentBoundEvent_18_OnClicked__DelegateSignature
struct ULobbyUMG2_C_BndEvt__Main_Lootbox_K2Node_ComponentBoundEvent_18_OnClicked__DelegateSignature_Params
{
};

// Function LobbyUMG2.LobbyUMG2_C.BndEvt__Facebook_button_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature
struct ULobbyUMG2_C_BndEvt__Facebook_button_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function LobbyUMG2.LobbyUMG2_C.BndEvt__Facebook_button_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature
struct ULobbyUMG2_C_BndEvt__Facebook_button_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function LobbyUMG2.LobbyUMG2_C.BndEvt__Facebook_button_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature
struct ULobbyUMG2_C_BndEvt__Facebook_button_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function LobbyUMG2.LobbyUMG2_C.BndEvt__Twitter_Button_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature
struct ULobbyUMG2_C_BndEvt__Twitter_Button_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function LobbyUMG2.LobbyUMG2_C.BndEvt__Twitter_Button_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature
struct ULobbyUMG2_C_BndEvt__Twitter_Button_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function LobbyUMG2.LobbyUMG2_C.BndEvt__Twitter_Button_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature
struct ULobbyUMG2_C_BndEvt__Twitter_Button_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function LobbyUMG2.LobbyUMG2_C.BndEvt__Youtube_Button_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature
struct ULobbyUMG2_C_BndEvt__Youtube_Button_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function LobbyUMG2.LobbyUMG2_C.BndEvt__Youtube_Button_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature
struct ULobbyUMG2_C_BndEvt__Youtube_Button_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function LobbyUMG2.LobbyUMG2_C.BndEvt__Youtube_Button_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature
struct ULobbyUMG2_C_BndEvt__Youtube_Button_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function LobbyUMG2.LobbyUMG2_C.BndEvt__Company_Button_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature
struct ULobbyUMG2_C_BndEvt__Company_Button_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function LobbyUMG2.LobbyUMG2_C.BndEvt__Company_Button_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature
struct ULobbyUMG2_C_BndEvt__Company_Button_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function LobbyUMG2.LobbyUMG2_C.BndEvt__Company_Button_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature
struct ULobbyUMG2_C_BndEvt__Company_Button_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function LobbyUMG2.LobbyUMG2_C.ExecuteUbergraph_LobbyUMG2
struct ULobbyUMG2_C_ExecuteUbergraph_LobbyUMG2_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
