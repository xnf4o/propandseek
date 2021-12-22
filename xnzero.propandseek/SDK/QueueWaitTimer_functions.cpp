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
//		Name   -> Function QueueWaitTimer.QueueWaitTimer_C.UpdateEstimatedWaitTime
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Sec                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UQueueWaitTimer_C::UpdateEstimatedWaitTime(int Sec)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function QueueWaitTimer.QueueWaitTimer_C.UpdateEstimatedWaitTime");

	UQueueWaitTimer_C_UpdateEstimatedWaitTime_Params params {};
	params.Sec = Sec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function QueueWaitTimer.QueueWaitTimer_C.UpdateStatus
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               FoundGame_                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UQueueWaitTimer_C::UpdateStatus(bool FoundGame_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function QueueWaitTimer.QueueWaitTimer_C.UpdateStatus");

	UQueueWaitTimer_C_UpdateStatus_Params params {};
	params.FoundGame_ = FoundGame_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function QueueWaitTimer.QueueWaitTimer_C.GI
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UGI2_C*                                      AsGI2                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UQueueWaitTimer_C::GI(class UGI2_C** AsGI2)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function QueueWaitTimer.QueueWaitTimer_C.GI");

	UQueueWaitTimer_C_GI_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsGI2 != nullptr)
		*AsGI2 = params.AsGI2;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function QueueWaitTimer.QueueWaitTimer_C.PC
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class ALobbyPC2_C*                                 AsLobby_PC                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UQueueWaitTimer_C::PC(class ALobbyPC2_C** AsLobby_PC)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function QueueWaitTimer.QueueWaitTimer_C.PC");

	UQueueWaitTimer_C_PC_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsLobby_PC != nullptr)
		*AsLobby_PC = params.AsLobby_PC;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function QueueWaitTimer.QueueWaitTimer_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UQueueWaitTimer_C::BndEvt__CancelButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function QueueWaitTimer.QueueWaitTimer_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UQueueWaitTimer_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function QueueWaitTimer.QueueWaitTimer_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UQueueWaitTimer_C::BndEvt__CancelButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function QueueWaitTimer.QueueWaitTimer_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UQueueWaitTimer_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function QueueWaitTimer.QueueWaitTimer_C.Begin
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UQueueWaitTimer_C::Begin()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function QueueWaitTimer.QueueWaitTimer_C.Begin");

	UQueueWaitTimer_C_Begin_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function QueueWaitTimer.QueueWaitTimer_C.AddSec
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UQueueWaitTimer_C::AddSec()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function QueueWaitTimer.QueueWaitTimer_C.AddSec");

	UQueueWaitTimer_C_AddSec_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function QueueWaitTimer.QueueWaitTimer_C.End
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UQueueWaitTimer_C::End()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function QueueWaitTimer.QueueWaitTimer_C.End");

	UQueueWaitTimer_C_End_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function QueueWaitTimer.QueueWaitTimer_C.CallCancel
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UQueueWaitTimer_C::CallCancel()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function QueueWaitTimer.QueueWaitTimer_C.CallCancel");

	UQueueWaitTimer_C_CallCancel_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function QueueWaitTimer.QueueWaitTimer_C.BndEvt__WB_Button02_Framed_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UQueueWaitTimer_C::BndEvt__WB_Button02_Framed_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function QueueWaitTimer.QueueWaitTimer_C.BndEvt__WB_Button02_Framed_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");

	UQueueWaitTimer_C_BndEvt__WB_Button02_Framed_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function QueueWaitTimer.QueueWaitTimer_C.ExecuteUbergraph_QueueWaitTimer
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UQueueWaitTimer_C::ExecuteUbergraph_QueueWaitTimer(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function QueueWaitTimer.QueueWaitTimer_C.ExecuteUbergraph_QueueWaitTimer");

	UQueueWaitTimer_C_ExecuteUbergraph_QueueWaitTimer_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
