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
//		Name   -> Function 01_SelfDamage.01_SelfDamage_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void U01_SelfDamage_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function 01_SelfDamage.01_SelfDamage_C.Construct");

	U01_SelfDamage_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function 01_SelfDamage.01_SelfDamage_C.FireEvent
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void U01_SelfDamage_C::FireEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function 01_SelfDamage.01_SelfDamage_C.FireEvent");

	U01_SelfDamage_C_FireEvent_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function 01_SelfDamage.01_SelfDamage_C.ExecuteUbergraph_01_SelfDamage
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void U01_SelfDamage_C::ExecuteUbergraph_01_SelfDamage(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function 01_SelfDamage.01_SelfDamage_C.ExecuteUbergraph_01_SelfDamage");

	U01_SelfDamage_C_ExecuteUbergraph_01_SelfDamage_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
