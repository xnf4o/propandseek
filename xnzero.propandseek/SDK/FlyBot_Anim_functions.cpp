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
//		Name   -> Function FlyBot_Anim.FlyBot_Anim_C.TriggerChange
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UFlyBot_Anim_C::TriggerChange()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FlyBot_Anim.FlyBot_Anim_C.TriggerChange");

	UFlyBot_Anim_C_TriggerChange_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FlyBot_Anim.FlyBot_Anim_C.BlueprintInitializeAnimation
//		Flags  -> (Event, Public, BlueprintEvent)
void UFlyBot_Anim_C::BlueprintInitializeAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FlyBot_Anim.FlyBot_Anim_C.BlueprintInitializeAnimation");

	UFlyBot_Anim_C_BlueprintInitializeAnimation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FlyBot_Anim.FlyBot_Anim_C.ExecuteUbergraph_FlyBot_Anim
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFlyBot_Anim_C::ExecuteUbergraph_FlyBot_Anim(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FlyBot_Anim.FlyBot_Anim_C.ExecuteUbergraph_FlyBot_Anim");

	UFlyBot_Anim_C_ExecuteUbergraph_FlyBot_Anim_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
