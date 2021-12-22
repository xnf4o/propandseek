﻿// Name: pns, Version: 1

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
//		Name   -> Function BP_PC_InputDetect.BP_PC_InputDetect_C.FindRightInputType
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FKey                                        InputKey                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
//		struct FKey                                        LastPressedKey                                             (Parm, OutParm, HasGetValueTypeHash)
void ABP_PC_InputDetect_C::FindRightInputType(const struct FKey& InputKey, struct FKey* LastPressedKey)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PC_InputDetect.BP_PC_InputDetect_C.FindRightInputType");

	ABP_PC_InputDetect_C_FindRightInputType_Params params {};
	params.InputKey = InputKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LastPressedKey != nullptr)
		*LastPressedKey = params.LastPressedKey;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function BP_PC_InputDetect.BP_PC_InputDetect_C.GetIsMouseMoving
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_PC_InputDetect_C::GetIsMouseMoving()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PC_InputDetect.BP_PC_InputDetect_C.GetIsMouseMoving");

	ABP_PC_InputDetect_C_GetIsMouseMoving_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function BP_PC_InputDetect.BP_PC_InputDetect_C.InpActEvt_AnyKey_K2Node_InputKeyEvent_1
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_PC_InputDetect_C::InpActEvt_AnyKey_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PC_InputDetect.BP_PC_InputDetect_C.InpActEvt_AnyKey_K2Node_InputKeyEvent_1");

	ABP_PC_InputDetect_C_InpActEvt_AnyKey_K2Node_InputKeyEvent_1_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function BP_PC_InputDetect.BP_PC_InputDetect_C.UpdateMouseCursor
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_PC_InputDetect_C::UpdateMouseCursor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PC_InputDetect.BP_PC_InputDetect_C.UpdateMouseCursor");

	ABP_PC_InputDetect_C_UpdateMouseCursor_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function BP_PC_InputDetect.BP_PC_InputDetect_C.ExecuteUbergraph_BP_PC_InputDetect
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PC_InputDetect_C::ExecuteUbergraph_BP_PC_InputDetect(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PC_InputDetect.BP_PC_InputDetect_C.ExecuteUbergraph_BP_PC_InputDetect");

	ABP_PC_InputDetect_C_ExecuteUbergraph_BP_PC_InputDetect_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif