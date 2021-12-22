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
//		Name   -> Function TPP_Pistol.TPP_Pistol_C.AnimNotify_Pistol_Fire
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTPP_Pistol_C::AnimNotify_Pistol_Fire()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TPP_Pistol.TPP_Pistol_C.AnimNotify_Pistol_Fire");

	UTPP_Pistol_C_AnimNotify_Pistol_Fire_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function TPP_Pistol.TPP_Pistol_C.AnimNotify_Pistol_Ammo_Fall
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTPP_Pistol_C::AnimNotify_Pistol_Ammo_Fall()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TPP_Pistol.TPP_Pistol_C.AnimNotify_Pistol_Ammo_Fall");

	UTPP_Pistol_C_AnimNotify_Pistol_Ammo_Fall_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function TPP_Pistol.TPP_Pistol_C.ExecuteUbergraph_TPP_Pistol
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTPP_Pistol_C::ExecuteUbergraph_TPP_Pistol(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TPP_Pistol.TPP_Pistol_C.ExecuteUbergraph_TPP_Pistol");

	UTPP_Pistol_C_ExecuteUbergraph_TPP_Pistol_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
