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
//		Name   -> Function TypeEffectBP_NEW.TypeEffectBP_NEW_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTypeEffectBP_NEW_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TypeEffectBP_NEW.TypeEffectBP_NEW_C.Construct");

	UTypeEffectBP_NEW_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function TypeEffectBP_NEW.TypeEffectBP_NEW_C.ExecuteUbergraph_TypeEffectBP_NEW
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTypeEffectBP_NEW_C::ExecuteUbergraph_TypeEffectBP_NEW(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TypeEffectBP_NEW.TypeEffectBP_NEW_C.ExecuteUbergraph_TypeEffectBP_NEW");

	UTypeEffectBP_NEW_C_ExecuteUbergraph_TypeEffectBP_NEW_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
