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
//		Name   -> Function FPP_Pistol.FPP_Pistol_C.AnimNotify_Pistol_Fire
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UFPP_Pistol_C::AnimNotify_Pistol_Fire()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPP_Pistol.FPP_Pistol_C.AnimNotify_Pistol_Fire");

	UFPP_Pistol_C_AnimNotify_Pistol_Fire_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPP_Pistol.FPP_Pistol_C.ExecuteUbergraph_FPP_Pistol
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFPP_Pistol_C::ExecuteUbergraph_FPP_Pistol(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPP_Pistol.FPP_Pistol_C.ExecuteUbergraph_FPP_Pistol");

	UFPP_Pistol_C_ExecuteUbergraph_FPP_Pistol_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
