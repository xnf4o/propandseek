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
//		Name   -> Function BackButton_Fix1.BackButton_Fix1_C.BndEvt__WB_Button02_Framed_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBackButton_Fix1_C::BndEvt__WB_Button02_Framed_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BackButton_Fix1.BackButton_Fix1_C.BndEvt__WB_Button02_Framed_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UBackButton_Fix1_C_BndEvt__WB_Button02_Framed_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function BackButton_Fix1.BackButton_Fix1_C.ExecuteUbergraph_BackButton_Fix1
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBackButton_Fix1_C::ExecuteUbergraph_BackButton_Fix1(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BackButton_Fix1.BackButton_Fix1_C.ExecuteUbergraph_BackButton_Fix1");

	UBackButton_Fix1_C_ExecuteUbergraph_BackButton_Fix1_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function BackButton_Fix1.BackButton_Fix1_C.OnClicked__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UBackButton_Fix1_C::OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BackButton_Fix1.BackButton_Fix1_C.OnClicked__DelegateSignature");

	UBackButton_Fix1_C_OnClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
