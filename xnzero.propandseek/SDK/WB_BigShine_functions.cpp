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
//		Name   -> Function WB_BigShine.WB_BigShine_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWB_BigShine_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_BigShine.WB_BigShine_C.Construct");

	UWB_BigShine_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_BigShine.WB_BigShine_C.ExecuteUbergraph_WB_BigShine
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_BigShine_C::ExecuteUbergraph_WB_BigShine(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_BigShine.WB_BigShine_C.ExecuteUbergraph_WB_BigShine");

	UWB_BigShine_C_ExecuteUbergraph_WB_BigShine_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
