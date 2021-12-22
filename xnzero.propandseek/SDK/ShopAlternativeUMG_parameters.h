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

// Function ShopAlternativeUMG.ShopAlternativeUMG_C.AllowState
struct UShopAlternativeUMG_C_AllowState_Params
{
	bool                                               Allow_;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ShopAlternativeUMG.ShopAlternativeUMG_C.HideShopItemInfos
struct UShopAlternativeUMG_C_HideShopItemInfos_Params
{
};

// Function ShopAlternativeUMG.ShopAlternativeUMG_C.ShopItemVisibiility
struct UShopAlternativeUMG_C_ShopItemVisibiility_Params
{
	bool                                               Visible;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ShopAlternativeUMG.ShopAlternativeUMG_C.Loading
struct UShopAlternativeUMG_C_Loading_Params
{
	bool                                               Loading;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ShopAlternativeUMG.ShopAlternativeUMG_C.ToggleMoreInfo
struct UShopAlternativeUMG_C_ToggleMoreInfo_Params
{
};

// Function ShopAlternativeUMG.ShopAlternativeUMG_C.UpdateSelectedItem
struct UShopAlternativeUMG_C_UpdateSelectedItem_Params
{
	struct FSShopInventory                             CurrentlySelectedItem;                                     // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function ShopAlternativeUMG.ShopAlternativeUMG_C.Switcher_Pop_Up_Menu
struct UShopAlternativeUMG_C_Switcher_Pop_Up_Menu_Params
{
	TEnumAsByte<EShopMenuSwitcher_EShopMenuSwitcher>   SwitchTo;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ShopAlternativeUMG.ShopAlternativeUMG_C.ShopInventoryVisibility
struct UShopAlternativeUMG_C_ShopInventoryVisibility_Params
{
	bool                                               Visible;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ShopAlternativeUMG.ShopAlternativeUMG_C.STokenMenuVisibility
struct UShopAlternativeUMG_C_STokenMenuVisibility_Params
{
	bool                                               Visible;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ShopAlternativeUMG.ShopAlternativeUMG_C.DefaultMenuVisibility
struct UShopAlternativeUMG_C_DefaultMenuVisibility_Params
{
	bool                                               Visible;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ShopAlternativeUMG.ShopAlternativeUMG_C.Switcher_Shop
struct UShopAlternativeUMG_C_Switcher_Shop_Params
{
	TEnumAsByte<EShopSwitcherFixed1_EShopSwitcherFixed1> SwitchTo;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ShopAlternativeUMG.ShopAlternativeUMG_C.PC
struct UShopAlternativeUMG_C_PC_Params
{
	class ALobbyPC2_C*                                 AsLobby_PC2;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ShopAlternativeUMG.ShopAlternativeUMG_C.BndEvt__ShopListBox_Fixed1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UShopAlternativeUMG_C_BndEvt__ShopListBox_Fixed1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
	TEnumAsByte<EShopSwitcherFixed1_EShopSwitcherFixed1> SwitchTo;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ShopAlternativeUMG.ShopAlternativeUMG_C.BndEvt__Purchase_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UShopAlternativeUMG_C_BndEvt__Purchase_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ShopAlternativeUMG.ShopAlternativeUMG_C.BndEvt__MoreInfoButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UShopAlternativeUMG_C_BndEvt__MoreInfoButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ShopAlternativeUMG.ShopAlternativeUMG_C.BndEvt__ClaimButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
struct UShopAlternativeUMG_C_BndEvt__ClaimButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ShopAlternativeUMG.ShopAlternativeUMG_C.BndEvt__RefundButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
struct UShopAlternativeUMG_C_BndEvt__RefundButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ShopAlternativeUMG.ShopAlternativeUMG_C.ExecuteUbergraph_ShopAlternativeUMG
struct UShopAlternativeUMG_C_ExecuteUbergraph_ShopAlternativeUMG_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
