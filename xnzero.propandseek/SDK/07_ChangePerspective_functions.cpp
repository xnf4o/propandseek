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
//		Name   -> Function 07_ChangePerspective.07_ChangePerspective_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void U07_ChangePerspective_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function 07_ChangePerspective.07_ChangePerspective_C.Construct");

	U07_ChangePerspective_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function 07_ChangePerspective.07_ChangePerspective_C.ExecuteUbergraph_07_ChangePerspective
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void U07_ChangePerspective_C::ExecuteUbergraph_07_ChangePerspective(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function 07_ChangePerspective.07_ChangePerspective_C.ExecuteUbergraph_07_ChangePerspective");

	U07_ChangePerspective_C_ExecuteUbergraph_07_ChangePerspective_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
