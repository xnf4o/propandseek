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
//		Name   -> Function 06_GetDamaged.06_GetDamaged_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void U06_GetDamaged_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function 06_GetDamaged.06_GetDamaged_C.Construct");

	U06_GetDamaged_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function 06_GetDamaged.06_GetDamaged_C.ExecuteUbergraph_06_GetDamaged
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void U06_GetDamaged_C::ExecuteUbergraph_06_GetDamaged(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function 06_GetDamaged.06_GetDamaged_C.ExecuteUbergraph_06_GetDamaged");

	U06_GetDamaged_C_ExecuteUbergraph_06_GetDamaged_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
