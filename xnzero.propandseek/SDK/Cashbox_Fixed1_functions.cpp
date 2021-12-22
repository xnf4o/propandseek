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
//		Name   -> Function Cashbox_Fixed1.Cashbox_Fixed1_C.PC
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class ALobbyPC2_C*                                 AsLobby_PC1                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCashbox_Fixed1_C::PC(class ALobbyPC2_C** AsLobby_PC1)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Cashbox_Fixed1.Cashbox_Fixed1_C.PC");

	UCashbox_Fixed1_C_PC_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsLobby_PC1 != nullptr)
		*AsLobby_PC1 = params.AsLobby_PC1;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Cashbox_Fixed1.Cashbox_Fixed1_C.Init
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UCashbox_Fixed1_C::Init()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Cashbox_Fixed1.Cashbox_Fixed1_C.Init");

	UCashbox_Fixed1_C_Init_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Cashbox_Fixed1.Cashbox_Fixed1_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UCashbox_Fixed1_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Cashbox_Fixed1.Cashbox_Fixed1_C.Construct");

	UCashbox_Fixed1_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Cashbox_Fixed1.Cashbox_Fixed1_C.ExecuteUbergraph_Cashbox_Fixed1
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCashbox_Fixed1_C::ExecuteUbergraph_Cashbox_Fixed1(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Cashbox_Fixed1.Cashbox_Fixed1_C.ExecuteUbergraph_Cashbox_Fixed1");

	UCashbox_Fixed1_C_ExecuteUbergraph_Cashbox_Fixed1_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
