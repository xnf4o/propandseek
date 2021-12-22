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
//		Name   -> Function 03_YouwereEliminatedby.03_YouwereEliminatedby_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void U03_YouwereEliminatedby_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function 03_YouwereEliminatedby.03_YouwereEliminatedby_C.Construct");

	U03_YouwereEliminatedby_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function 03_YouwereEliminatedby.03_YouwereEliminatedby_C.ExecuteUbergraph_03_YouwereEliminatedby
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void U03_YouwereEliminatedby_C::ExecuteUbergraph_03_YouwereEliminatedby(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function 03_YouwereEliminatedby.03_YouwereEliminatedby_C.ExecuteUbergraph_03_YouwereEliminatedby");

	U03_YouwereEliminatedby_C_ExecuteUbergraph_03_YouwereEliminatedby_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
