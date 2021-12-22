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

// Function InvenListButton.InvenListButton_C.IfHasQuantity
struct UInvenListButton_C_IfHasQuantity_Params
{
	bool                                               HasQuantity_;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<EShopItemList_EShopItemList>           WhichItem_;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DisableUseItemButton_;                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function InvenListButton.InvenListButton_C.AddToUpdateListPerSec
struct UInvenListButton_C_AddToUpdateListPerSec_Params
{
};

// Function InvenListButton.InvenListButton_C.ExpirationPerSec
struct UInvenListButton_C_ExpirationPerSec_Params
{
};

// Function InvenListButton.InvenListButton_C.BeginplayUpdate
struct UInvenListButton_C_BeginplayUpdate_Params
{
	int                                                Default;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InvenListButton.InvenListButton_C.Inventory
struct UInvenListButton_C_Inventory_Params
{
	class UInventoryUMG1_C*                            InventoryUMG1;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InvenListButton.InvenListButton_C.UpdateAmount
struct UInvenListButton_C_UpdateAmount_Params
{
};

// Function InvenListButton.InvenListButton_C.SetMenuEquippedNames
struct UInvenListButton_C_SetMenuEquippedNames_Params
{
};

// Function InvenListButton.InvenListButton_C.SearchOwningItems
struct UInvenListButton_C_SearchOwningItems_Params
{
	bool                                               Success_;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function InvenListButton.InvenListButton_C.PC
struct UInvenListButton_C_PC_Params
{
	class ALobbyPC2_C*                                 AsLobby_PC;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InvenListButton.InvenListButton_C.UpdateInvenListObject
struct UInvenListButton_C_UpdateInvenListObject_Params
{
	bool                                               Upload_1;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               SyncAsDefault_1;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function InvenListButton.InvenListButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
struct UInvenListButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function InvenListButton.InvenListButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UInvenListButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function InvenListButton.InvenListButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
struct UInvenListButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function InvenListButton.InvenListButton_C.ExecuteUbergraph_InvenListButton
struct UInvenListButton_C_ExecuteUbergraph_InvenListButton_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
