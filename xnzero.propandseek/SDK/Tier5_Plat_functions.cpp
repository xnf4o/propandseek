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
//		Name   -> Function Tier5_Plat.Tier5_Plat_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTier5_Plat_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Tier5_Plat.Tier5_Plat_C.Construct");

	UTier5_Plat_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Tier5_Plat.Tier5_Plat_C.ExecuteUbergraph_Tier5_Plat
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTier5_Plat_C::ExecuteUbergraph_Tier5_Plat(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Tier5_Plat.Tier5_Plat_C.ExecuteUbergraph_Tier5_Plat");

	UTier5_Plat_C_ExecuteUbergraph_Tier5_Plat_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
