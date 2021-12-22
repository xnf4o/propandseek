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
//		Name   -> Function ShopInven_fixed1.ShopInven_fixed1_C.PC
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class ALobbyPC2_C*                                 AsLobby_PC1                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UShopInven_fixed1_C::PC(class ALobbyPC2_C** AsLobby_PC1)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ShopInven_fixed1.ShopInven_fixed1_C.PC");

	UShopInven_fixed1_C_PC_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsLobby_PC1 != nullptr)
		*AsLobby_PC1 = params.AsLobby_PC1;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ShopInven_fixed1.ShopInven_fixed1_C.UpdateDirectlyPurchasedList
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<struct FSShopInventory>                     ShopItemList                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UShopInven_fixed1_C::UpdateDirectlyPurchasedList(TArray<struct FSShopInventory>* ShopItemList)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ShopInven_fixed1.ShopInven_fixed1_C.UpdateDirectlyPurchasedList");

	UShopInven_fixed1_C_UpdateDirectlyPurchasedList_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ShopItemList != nullptr)
		*ShopItemList = params.ShopItemList;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
