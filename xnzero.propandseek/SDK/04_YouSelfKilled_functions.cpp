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
//		Name   -> Function 04_YouSelfKilled.04_YouSelfKilled_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void U04_YouSelfKilled_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function 04_YouSelfKilled.04_YouSelfKilled_C.Construct");

	U04_YouSelfKilled_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function 04_YouSelfKilled.04_YouSelfKilled_C.ExecuteUbergraph_04_YouSelfKilled
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void U04_YouSelfKilled_C::ExecuteUbergraph_04_YouSelfKilled(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function 04_YouSelfKilled.04_YouSelfKilled_C.ExecuteUbergraph_04_YouSelfKilled");

	U04_YouSelfKilled_C_ExecuteUbergraph_04_YouSelfKilled_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
