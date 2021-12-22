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
//		Name   -> Function FPP_Sniper_AB.FPP_Sniper_AB_C.ExecuteUbergraph_FPP_Sniper_AB
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFPP_Sniper_AB_C::ExecuteUbergraph_FPP_Sniper_AB(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPP_Sniper_AB.FPP_Sniper_AB_C.ExecuteUbergraph_FPP_Sniper_AB");

	UFPP_Sniper_AB_C_ExecuteUbergraph_FPP_Sniper_AB_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
