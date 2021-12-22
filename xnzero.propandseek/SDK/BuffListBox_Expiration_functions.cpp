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
//		Name   -> Function BuffListBox_Expiration.BuffListBox_Expiration_C.UpdateOwnership
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FSCashItemsGameInfo                         CashInfo                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBuffListBox_Expiration_C::UpdateOwnership(const struct FSCashItemsGameInfo& CashInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BuffListBox_Expiration.BuffListBox_Expiration_C.UpdateOwnership");

	UBuffListBox_Expiration_C_UpdateOwnership_Params params {};
	params.CashInfo = CashInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function BuffListBox_Expiration.BuffListBox_Expiration_C.GI
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UGI2_C*                                      AsGI2                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBuffListBox_Expiration_C::GI(class UGI2_C** AsGI2)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BuffListBox_Expiration.BuffListBox_Expiration_C.GI");

	UBuffListBox_Expiration_C_GI_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsGI2 != nullptr)
		*AsGI2 = params.AsGI2;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
