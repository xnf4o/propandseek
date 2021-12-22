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
//		Name   -> Function Tier3_Master.Tier3_Master_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTier3_Master_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Tier3_Master.Tier3_Master_C.Construct");

	UTier3_Master_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Tier3_Master.Tier3_Master_C.ExecuteUbergraph_Tier3_Master
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTier3_Master_C::ExecuteUbergraph_Tier3_Master(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Tier3_Master.Tier3_Master_C.ExecuteUbergraph_Tier3_Master");

	UTier3_Master_C_ExecuteUbergraph_Tier3_Master_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
