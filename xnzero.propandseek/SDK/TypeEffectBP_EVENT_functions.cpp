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
//		Name   -> Function TypeEffectBP_EVENT.TypeEffectBP_EVENT_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTypeEffectBP_EVENT_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TypeEffectBP_EVENT.TypeEffectBP_EVENT_C.Construct");

	UTypeEffectBP_EVENT_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function TypeEffectBP_EVENT.TypeEffectBP_EVENT_C.ExecuteUbergraph_TypeEffectBP_EVENT
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTypeEffectBP_EVENT_C::ExecuteUbergraph_TypeEffectBP_EVENT(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TypeEffectBP_EVENT.TypeEffectBP_EVENT_C.ExecuteUbergraph_TypeEffectBP_EVENT");

	UTypeEffectBP_EVENT_C_ExecuteUbergraph_TypeEffectBP_EVENT_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
