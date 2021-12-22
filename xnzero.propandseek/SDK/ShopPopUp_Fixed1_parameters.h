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

// Function ShopPopUp_Fixed1.ShopPopUp_Fixed1_C.UpdateNotice
struct UShopPopUp_Fixed1_C_UpdateNotice_Params
{
	struct FString                                     Header;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Content;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function ShopPopUp_Fixed1.ShopPopUp_Fixed1_C.Refund
struct UShopPopUp_Fixed1_C_Refund_Params
{
};

// Function ShopPopUp_Fixed1.ShopPopUp_Fixed1_C.claim
struct UShopPopUp_Fixed1_C_claim_Params
{
};

// Function ShopPopUp_Fixed1.ShopPopUp_Fixed1_C.UpdatePopUpMenu
struct UShopPopUp_Fixed1_C_UpdatePopUpMenu_Params
{
	struct FSShopInventory                             CurrentInfo;                                               // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TEnumAsByte<EShopPopUp_EShopPopUp>                 WhichMenu_;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ShopPopUp_Fixed1.ShopPopUp_Fixed1_C.PC
struct UShopPopUp_Fixed1_C_PC_Params
{
	class ALobbyPC2_C*                                 AsLobby_PC1;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ShopPopUp_Fixed1.ShopPopUp_Fixed1_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UShopPopUp_Fixed1_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ShopPopUp_Fixed1.ShopPopUp_Fixed1_C.BndEvt__ClaimButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
struct UShopPopUp_Fixed1_C_BndEvt__ClaimButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
{
};

// Function ShopPopUp_Fixed1.ShopPopUp_Fixed1_C.BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
struct UShopPopUp_Fixed1_C_BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params
{
};

// Function ShopPopUp_Fixed1.ShopPopUp_Fixed1_C.ExecuteUbergraph_ShopPopUp_Fixed1
struct UShopPopUp_Fixed1_C_ExecuteUbergraph_ShopPopUp_Fixed1_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
