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
//		Name   -> Function Tier1_Top500.Tier1_Top500_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTier1_Top500_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Tier1_Top500.Tier1_Top500_C.Construct");

	UTier1_Top500_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Tier1_Top500.Tier1_Top500_C.ExecuteUbergraph_Tier1_Top500
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTier1_Top500_C::ExecuteUbergraph_Tier1_Top500(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Tier1_Top500.Tier1_Top500_C.ExecuteUbergraph_Tier1_Top500");

	UTier1_Top500_C_ExecuteUbergraph_Tier1_Top500_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
