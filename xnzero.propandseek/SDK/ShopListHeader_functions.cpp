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
//		Name   -> Function ShopListHeader.ShopListHeader_C.PC
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class ALobbyPC2_C*                                 AsLobby_PC1                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UShopListHeader_C::PC(class ALobbyPC2_C** AsLobby_PC1)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ShopListHeader.ShopListHeader_C.PC");

	UShopListHeader_C_PC_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsLobby_PC1 != nullptr)
		*AsLobby_PC1 = params.AsLobby_PC1;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
