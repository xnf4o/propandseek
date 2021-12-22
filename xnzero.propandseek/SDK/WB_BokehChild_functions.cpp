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
//		Name   -> Function WB_BokehChild.WB_BokehChild_C.OnAnimationFinished
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
//		class UWidgetAnimation*                            Animation                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_BokehChild_C::OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_BokehChild.WB_BokehChild_C.OnAnimationFinished");

	UWB_BokehChild_C_OnAnimationFinished_Params params {};
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_BokehChild.WB_BokehChild_C.CreateRandomMovement
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWB_BokehChild_C::CreateRandomMovement()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_BokehChild.WB_BokehChild_C.CreateRandomMovement");

	UWB_BokehChild_C_CreateRandomMovement_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_BokehChild.WB_BokehChild_C.ExecuteUbergraph_WB_BokehChild
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_BokehChild_C::ExecuteUbergraph_WB_BokehChild(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_BokehChild.WB_BokehChild_C.ExecuteUbergraph_WB_BokehChild");

	UWB_BokehChild_C_ExecuteUbergraph_WB_BokehChild_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
