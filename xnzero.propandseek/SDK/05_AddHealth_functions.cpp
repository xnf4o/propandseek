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
//		Name   -> Function 05_AddHealth.05_AddHealth_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void U05_AddHealth_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function 05_AddHealth.05_AddHealth_C.Construct");

	U05_AddHealth_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function 05_AddHealth.05_AddHealth_C.ExecuteUbergraph_05_AddHealth
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void U05_AddHealth_C::ExecuteUbergraph_05_AddHealth(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function 05_AddHealth.05_AddHealth_C.ExecuteUbergraph_05_AddHealth");

	U05_AddHealth_C_ExecuteUbergraph_05_AddHealth_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
