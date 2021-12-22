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
//		Name   -> Function OptionButton.OptionButton_C.SetToDefaults
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UOptionButton_C::SetToDefaults()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OptionButton.OptionButton_C.SetToDefaults");

	UOptionButton_C_SetToDefaults_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function OptionButton.OptionButton_C.OnKeySelectedAxis
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FInputChord                                 InputChord                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
void UOptionButton_C::OnKeySelectedAxis(const struct FInputChord& InputChord)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OptionButton.OptionButton_C.OnKeySelectedAxis");

	UOptionButton_C_OnKeySelectedAxis_Params params {};
	params.InputChord = InputChord;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function OptionButton.OptionButton_C.InitAxis
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UOptionButton_C::InitAxis()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OptionButton.OptionButton_C.InitAxis");

	UOptionButton_C_InitAxis_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function OptionButton.OptionButton_C.OnKeySelectedAction
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FInputChord                                 InputChord                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
void UOptionButton_C::OnKeySelectedAction(const struct FInputChord& InputChord)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OptionButton.OptionButton_C.OnKeySelectedAction");

	UOptionButton_C_OnKeySelectedAction_Params params {};
	params.InputChord = InputChord;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function OptionButton.OptionButton_C.InitAction
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UOptionButton_C::InitAction()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OptionButton.OptionButton_C.InitAction");

	UOptionButton_C_InitAction_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function OptionButton.OptionButton_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UOptionButton_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OptionButton.OptionButton_C.Construct");

	UOptionButton_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function OptionButton.OptionButton_C.BndEvt__InputKeySelector_391_K2Node_ComponentBoundEvent_3_OnKeySelected__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FInputChord                                 SelectedKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UOptionButton_C::BndEvt__InputKeySelector_391_K2Node_ComponentBoundEvent_3_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OptionButton.OptionButton_C.BndEvt__InputKeySelector_391_K2Node_ComponentBoundEvent_3_OnKeySelected__DelegateSignature");

	UOptionButton_C_BndEvt__InputKeySelector_391_K2Node_ComponentBoundEvent_3_OnKeySelected__DelegateSignature_Params params {};
	params.SelectedKey = SelectedKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function OptionButton.OptionButton_C.ExecuteUbergraph_OptionButton
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UOptionButton_C::ExecuteUbergraph_OptionButton(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OptionButton.OptionButton_C.ExecuteUbergraph_OptionButton");

	UOptionButton_C_ExecuteUbergraph_OptionButton_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
