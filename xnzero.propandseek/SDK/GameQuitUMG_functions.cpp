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
//		Name   -> Function GameQuitUMG.GameQuitUMG_C.GI
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UGI2_C*                                      AsGI2                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameQuitUMG_C::GI(class UGI2_C** AsGI2)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameQuitUMG.GameQuitUMG_C.GI");

	UGameQuitUMG_C_GI_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsGI2 != nullptr)
		*AsGI2 = params.AsGI2;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function GameQuitUMG.GameQuitUMG_C.UpdateWarningTextAndShowAnim
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Show_                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGameQuitUMG_C::UpdateWarningTextAndShowAnim(bool Show_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameQuitUMG.GameQuitUMG_C.UpdateWarningTextAndShowAnim");

	UGameQuitUMG_C_UpdateWarningTextAndShowAnim_Params params {};
	params.Show_ = Show_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function GameQuitUMG.GameQuitUMG_C.PC
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class AFPS_PC_C*                                   AsFPS_PC                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameQuitUMG_C::PC(class AFPS_PC_C** AsFPS_PC)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameQuitUMG.GameQuitUMG_C.PC");

	UGameQuitUMG_C_PC_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsFPS_PC != nullptr)
		*AsFPS_PC = params.AsFPS_PC;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function GameQuitUMG.GameQuitUMG_C.OnPressedExit
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UGameQuitUMG_C::OnPressedExit()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameQuitUMG.GameQuitUMG_C.OnPressedExit");

	UGameQuitUMG_C_OnPressedExit_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function GameQuitUMG.GameQuitUMG_C.OnPressedCancel
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UGameQuitUMG_C::OnPressedCancel()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameQuitUMG.GameQuitUMG_C.OnPressedCancel");

	UGameQuitUMG_C_OnPressedCancel_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function GameQuitUMG.GameQuitUMG_C.BndEvt__Exit_Yes_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UGameQuitUMG_C::BndEvt__Exit_Yes_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameQuitUMG.GameQuitUMG_C.BndEvt__Exit_Yes_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UGameQuitUMG_C_BndEvt__Exit_Yes_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function GameQuitUMG.GameQuitUMG_C.BndEvt__Exit_No_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UGameQuitUMG_C::BndEvt__Exit_No_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameQuitUMG.GameQuitUMG_C.BndEvt__Exit_No_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UGameQuitUMG_C_BndEvt__Exit_No_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function GameQuitUMG.GameQuitUMG_C.ExecuteUbergraph_GameQuitUMG
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameQuitUMG_C::ExecuteUbergraph_GameQuitUMG(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameQuitUMG.GameQuitUMG_C.ExecuteUbergraph_GameQuitUMG");

	UGameQuitUMG_C_ExecuteUbergraph_GameQuitUMG_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
