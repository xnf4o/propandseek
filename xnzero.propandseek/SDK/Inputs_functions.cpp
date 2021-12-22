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
//		Name   -> Function Inputs.Inputs_C.CustomUpdateMouseSensitivity
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Sensitivity                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInputs_C::CustomUpdateMouseSensitivity(float Sensitivity)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Inputs.Inputs_C.CustomUpdateMouseSensitivity");

	UInputs_C_CustomUpdateMouseSensitivity_Params params {};
	params.Sensitivity = Sensitivity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Inputs.Inputs_C.Init
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UInputs_C::Init()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Inputs.Inputs_C.Init");

	UInputs_C_Init_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Inputs.Inputs_C.Save
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UInputs_C::Save()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Inputs.Inputs_C.Save");

	UInputs_C_Save_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Inputs.Inputs_C.GI
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UGI2_C*                                      AsGI2                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInputs_C::GI(class UGI2_C** AsGI2)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Inputs.Inputs_C.GI");

	UInputs_C_GI_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsGI2 != nullptr)
		*AsGI2 = params.AsGI2;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Inputs.Inputs_C.Get_MouseSensitivityTxt_Text_1
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UInputs_C::Get_MouseSensitivityTxt_Text_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Inputs.Inputs_C.Get_MouseSensitivityTxt_Text_1");

	UInputs_C_Get_MouseSensitivityTxt_Text_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Inputs.Inputs_C.Get_NotiTxt_Text_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UInputs_C::Get_NotiTxt_Text_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Inputs.Inputs_C.Get_NotiTxt_Text_1");

	UInputs_C_Get_NotiTxt_Text_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Inputs.Inputs_C.ClearAllChildren
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UInputs_C::ClearAllChildren()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Inputs.Inputs_C.ClearAllChildren");

	UInputs_C_ClearAllChildren_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Inputs.Inputs_C.OnUpdate
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Default_                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UInputs_C::OnUpdate(bool Default_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Inputs.Inputs_C.OnUpdate");

	UInputs_C_OnUpdate_Params params {};
	params.Default_ = Default_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Inputs.Inputs_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UInputs_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Inputs.Inputs_C.Construct");

	UInputs_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Inputs.Inputs_C.BndEvt__MouseSensitivityBar_K2Node_ComponentBoundEvent_5_OnSliderChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		float                                              ValueNormalized                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInputs_C::BndEvt__MouseSensitivityBar_K2Node_ComponentBoundEvent_5_OnSliderChanged__DelegateSignature(float ValueNormalized, float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Inputs.Inputs_C.BndEvt__MouseSensitivityBar_K2Node_ComponentBoundEvent_5_OnSliderChanged__DelegateSignature");

	UInputs_C_BndEvt__MouseSensitivityBar_K2Node_ComponentBoundEvent_5_OnSliderChanged__DelegateSignature_Params params {};
	params.ValueNormalized = ValueNormalized;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Inputs.Inputs_C.BndEvt__Menu03_VerticalSync_K2Node_ComponentBoundEvent_7_OnStateChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FName                                       StateName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                StateIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInputs_C::BndEvt__Menu03_VerticalSync_K2Node_ComponentBoundEvent_7_OnStateChanged__DelegateSignature(const struct FName& StateName, int StateIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Inputs.Inputs_C.BndEvt__Menu03_VerticalSync_K2Node_ComponentBoundEvent_7_OnStateChanged__DelegateSignature");

	UInputs_C_BndEvt__Menu03_VerticalSync_K2Node_ComponentBoundEvent_7_OnStateChanged__DelegateSignature_Params params {};
	params.StateName = StateName;
	params.StateIndex = StateIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Inputs.Inputs_C.SetToDefault
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UInputs_C::SetToDefault()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Inputs.Inputs_C.SetToDefault");

	UInputs_C_SetToDefault_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Inputs.Inputs_C.OnModifiedC
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UInputs_C::OnModifiedC()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Inputs.Inputs_C.OnModifiedC");

	UInputs_C_OnModifiedC_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Inputs.Inputs_C.ExecuteUbergraph_Inputs
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInputs_C::ExecuteUbergraph_Inputs(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Inputs.Inputs_C.ExecuteUbergraph_Inputs");

	UInputs_C_ExecuteUbergraph_Inputs_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Inputs.Inputs_C.OnModified__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UInputs_C::OnModified__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Inputs.Inputs_C.OnModified__DelegateSignature");

	UInputs_C_OnModified__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
