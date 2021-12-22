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
//		Name   -> Function SK_001_Stormbird_Anim.SK_001_Stormbird_Anim_C.ExecuteUbergraph_SK_001_Stormbird_Anim
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USK_001_Stormbird_Anim_C::ExecuteUbergraph_SK_001_Stormbird_Anim(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SK_001_Stormbird_Anim.SK_001_Stormbird_Anim_C.ExecuteUbergraph_SK_001_Stormbird_Anim");

	USK_001_Stormbird_Anim_C_ExecuteUbergraph_SK_001_Stormbird_Anim_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
