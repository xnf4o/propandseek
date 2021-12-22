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

// Function ShopInven_fixed1.ShopInven_fixed1_C.PC
struct UShopInven_fixed1_C_PC_Params
{
	class ALobbyPC2_C*                                 AsLobby_PC1;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ShopInven_fixed1.ShopInven_fixed1_C.UpdateDirectlyPurchasedList
struct UShopInven_fixed1_C_UpdateDirectlyPurchasedList_Params
{
	TArray<struct FSShopInventory>                     ShopItemList;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
