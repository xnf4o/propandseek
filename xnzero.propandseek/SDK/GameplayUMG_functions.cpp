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
//		Name   -> Function GameplayUMG.GameplayUMG_C.JetpackFuelbarVisibility
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Visible_                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGameplayUMG_C::JetpackFuelbarVisibility(bool Visible_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayUMG.GameplayUMG_C.JetpackFuelbarVisibility");

	UGameplayUMG_C_JetpackFuelbarVisibility_Params params {};
	params.Visible_ = Visible_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function GameplayUMG.GameplayUMG_C.ToggleShowOtherPlayerWidgetVisibility
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               MakeVisible_                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGameplayUMG_C::ToggleShowOtherPlayerWidgetVisibility(bool MakeVisible_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayUMG.GameplayUMG_C.ToggleShowOtherPlayerWidgetVisibility");

	UGameplayUMG_C_ToggleShowOtherPlayerWidgetVisibility_Params params {};
	params.MakeVisible_ = MakeVisible_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function GameplayUMG.GameplayUMG_C.GI
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UGI2_C*                                      AsGI2                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameplayUMG_C::GI(class UGI2_C** AsGI2)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayUMG.GameplayUMG_C.GI");

	UGameplayUMG_C_GI_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsGI2 != nullptr)
		*AsGI2 = params.AsGI2;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function GameplayUMG.GameplayUMG_C.BndEvt__Main_Options_Fix1_K2Node_ComponentBoundEvent_0_OnBackButtonClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UGameplayUMG_C::BndEvt__Main_Options_Fix1_K2Node_ComponentBoundEvent_0_OnBackButtonClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayUMG.GameplayUMG_C.BndEvt__Main_Options_Fix1_K2Node_ComponentBoundEvent_0_OnBackButtonClicked__DelegateSignature");

	UGameplayUMG_C_BndEvt__Main_Options_Fix1_K2Node_ComponentBoundEvent_0_OnBackButtonClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function GameplayUMG.GameplayUMG_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UGameplayUMG_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayUMG.GameplayUMG_C.Construct");

	UGameplayUMG_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function GameplayUMG.GameplayUMG_C.ExecuteUbergraph_GameplayUMG
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameplayUMG_C::ExecuteUbergraph_GameplayUMG(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayUMG.GameplayUMG_C.ExecuteUbergraph_GameplayUMG");

	UGameplayUMG_C_ExecuteUbergraph_GameplayUMG_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
