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
//		Name   -> Function WB_NavState.WB_NavState_C.SetColor
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                BrushColor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_NavState_C::SetColor(const struct FLinearColor& BrushColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_NavState.WB_NavState_C.SetColor");

	UWB_NavState_C_SetColor_Params params {};
	params.BrushColor = BrushColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_NavState.WB_NavState_C.ExecuteUbergraph_WB_NavState
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_NavState_C::ExecuteUbergraph_WB_NavState(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_NavState.WB_NavState_C.ExecuteUbergraph_WB_NavState");

	UWB_NavState_C_ExecuteUbergraph_WB_NavState_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
