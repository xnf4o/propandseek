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
//		Name   -> Function Tier2_GrandMaster.Tier2_GrandMaster_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTier2_GrandMaster_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Tier2_GrandMaster.Tier2_GrandMaster_C.Construct");

	UTier2_GrandMaster_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Tier2_GrandMaster.Tier2_GrandMaster_C.ExecuteUbergraph_Tier2_GrandMaster
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTier2_GrandMaster_C::ExecuteUbergraph_Tier2_GrandMaster(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Tier2_GrandMaster.Tier2_GrandMaster_C.ExecuteUbergraph_Tier2_GrandMaster");

	UTier2_GrandMaster_C_ExecuteUbergraph_Tier2_GrandMaster_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
