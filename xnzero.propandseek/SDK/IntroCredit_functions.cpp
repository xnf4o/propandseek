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
//		Name   -> Function IntroCredit.IntroCredit_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UIntroCredit_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function IntroCredit.IntroCredit_C.Construct");

	UIntroCredit_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function IntroCredit.IntroCredit_C.ExecuteUbergraph_IntroCredit
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIntroCredit_C::ExecuteUbergraph_IntroCredit(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function IntroCredit.IntroCredit_C.ExecuteUbergraph_IntroCredit");

	UIntroCredit_C_ExecuteUbergraph_IntroCredit_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
