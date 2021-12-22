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
//		Name   -> Function OptionButtonHint.OptionButtonHint_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UOptionButtonHint_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OptionButtonHint.OptionButtonHint_C.Construct");

	UOptionButtonHint_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function OptionButtonHint.OptionButtonHint_C.ExecuteUbergraph_OptionButtonHint
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UOptionButtonHint_C::ExecuteUbergraph_OptionButtonHint(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OptionButtonHint.OptionButtonHint_C.ExecuteUbergraph_OptionButtonHint");

	UOptionButtonHint_C_ExecuteUbergraph_OptionButtonHint_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
