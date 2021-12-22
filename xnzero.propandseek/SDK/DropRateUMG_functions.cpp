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
//		Name   -> Function DropRateUMG.DropRateUMG_C.PC
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class ALobbyPC2_C*                                 AsLobby_PC2                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDropRateUMG_C::PC(class ALobbyPC2_C** AsLobby_PC2)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DropRateUMG.DropRateUMG_C.PC");

	UDropRateUMG_C_PC_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsLobby_PC2 != nullptr)
		*AsLobby_PC2 = params.AsLobby_PC2;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function DropRateUMG.DropRateUMG_C.BndEvt__OpenLootboxButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UDropRateUMG_C::BndEvt__OpenLootboxButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DropRateUMG.DropRateUMG_C.BndEvt__OpenLootboxButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UDropRateUMG_C_BndEvt__OpenLootboxButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function DropRateUMG.DropRateUMG_C.ExecuteUbergraph_DropRateUMG
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDropRateUMG_C::ExecuteUbergraph_DropRateUMG(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DropRateUMG.DropRateUMG_C.ExecuteUbergraph_DropRateUMG");

	UDropRateUMG_C_ExecuteUbergraph_DropRateUMG_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
