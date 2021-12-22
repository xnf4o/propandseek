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
//		Name   -> Function PropSelectionUMG.PropSelectionUMG_C.RandomSlot
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPropList                                   RandomPropInfo                                             (Parm, OutParm, HasGetValueTypeHash)
void UPropSelectionUMG_C::RandomSlot(struct FPropList* RandomPropInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PropSelectionUMG.PropSelectionUMG_C.RandomSlot");

	UPropSelectionUMG_C_RandomSlot_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RandomPropInfo != nullptr)
		*RandomPropInfo = params.RandomPropInfo;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function PropSelectionUMG.PropSelectionUMG_C.UnlockSlot3
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Unlock_                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UPropSelectionUMG_C::UnlockSlot3(bool Unlock_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PropSelectionUMG.PropSelectionUMG_C.UnlockSlot3");

	UPropSelectionUMG_C_UnlockSlot3_Params params {};
	params.Unlock_ = Unlock_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function PropSelectionUMG.PropSelectionUMG_C.UnlockSlot2
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Unlock_                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UPropSelectionUMG_C::UnlockSlot2(bool Unlock_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PropSelectionUMG.PropSelectionUMG_C.UnlockSlot2");

	UPropSelectionUMG_C_UnlockSlot2_Params params {};
	params.Unlock_ = Unlock_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function PropSelectionUMG.PropSelectionUMG_C.Init
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UPropSelectionUMG_C::Init()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PropSelectionUMG.PropSelectionUMG_C.Init");

	UPropSelectionUMG_C_Init_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function PropSelectionUMG.PropSelectionUMG_C.StartRolling
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UPropSelectionUMG_C::StartRolling()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PropSelectionUMG.PropSelectionUMG_C.StartRolling");

	UPropSelectionUMG_C_StartRolling_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function PropSelectionUMG.PropSelectionUMG_C.BlockSelecting?
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bLock                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UPropSelectionUMG_C::BlockSelecting_(bool bLock)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PropSelectionUMG.PropSelectionUMG_C.BlockSelecting?");

	UPropSelectionUMG_C_BlockSelecting__Params params {};
	params.bLock = bLock;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function PropSelectionUMG.PropSelectionUMG_C.ResetMainVariables
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UPropSelectionUMG_C::ResetMainVariables()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PropSelectionUMG.PropSelectionUMG_C.ResetMainVariables");

	UPropSelectionUMG_C_ResetMainVariables_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function PropSelectionUMG.PropSelectionUMG_C.ResetRollTimerVariables
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UPropSelectionUMG_C::ResetRollTimerVariables()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PropSelectionUMG.PropSelectionUMG_C.ResetRollTimerVariables");

	UPropSelectionUMG_C_ResetRollTimerVariables_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function PropSelectionUMG.PropSelectionUMG_C.ChangeChooseButtonText
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UPropSelectionUMG_C::ChangeChooseButtonText()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PropSelectionUMG.PropSelectionUMG_C.ChangeChooseButtonText");

	UPropSelectionUMG_C_ChangeChooseButtonText_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function PropSelectionUMG.PropSelectionUMG_C.CountDownNumberOutput
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Done_                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		int                                                CountNumber                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPropSelectionUMG_C::CountDownNumberOutput(bool* Done_, int* CountNumber)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PropSelectionUMG.PropSelectionUMG_C.CountDownNumberOutput");

	UPropSelectionUMG_C_CountDownNumberOutput_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Done_ != nullptr)
		*Done_ = params.Done_;
	if (CountNumber != nullptr)
		*CountNumber = params.CountNumber;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function PropSelectionUMG.PropSelectionUMG_C.ClearTimer
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UPropSelectionUMG_C::ClearTimer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PropSelectionUMG.PropSelectionUMG_C.ClearTimer");

	UPropSelectionUMG_C_ClearTimer_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function PropSelectionUMG.PropSelectionUMG_C.GI
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UGI2_C*                                      AsGI2                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPropSelectionUMG_C::GI(class UGI2_C** AsGI2)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PropSelectionUMG.PropSelectionUMG_C.GI");

	UPropSelectionUMG_C_GI_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsGI2 != nullptr)
		*AsGI2 = params.AsGI2;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function PropSelectionUMG.PropSelectionUMG_C.PC
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class AFPS_PC_C*                                   AsFPS_PC                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPropSelectionUMG_C::PC(class AFPS_PC_C** AsFPS_PC)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PropSelectionUMG.PropSelectionUMG_C.PC");

	UPropSelectionUMG_C_PC_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsFPS_PC != nullptr)
		*AsFPS_PC = params.AsFPS_PC;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function PropSelectionUMG.PropSelectionUMG_C.InitializePropSelectionUMG
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UPropSelectionUMG_C::InitializePropSelectionUMG()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PropSelectionUMG.PropSelectionUMG_C.InitializePropSelectionUMG");

	UPropSelectionUMG_C_InitializePropSelectionUMG_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function PropSelectionUMG.PropSelectionUMG_C.Ticking
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UPropSelectionUMG_C::Ticking()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PropSelectionUMG.PropSelectionUMG_C.Ticking");

	UPropSelectionUMG_C_Ticking_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function PropSelectionUMG.PropSelectionUMG_C.BndEvt__Option1Image_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UPropSelectionUMG_C::BndEvt__Option1Image_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PropSelectionUMG.PropSelectionUMG_C.BndEvt__Option1Image_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");

	UPropSelectionUMG_C_BndEvt__Option1Image_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function PropSelectionUMG.PropSelectionUMG_C.BndEvt__Option2Image_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UPropSelectionUMG_C::BndEvt__Option2Image_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PropSelectionUMG.PropSelectionUMG_C.BndEvt__Option2Image_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature");

	UPropSelectionUMG_C_BndEvt__Option2Image_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function PropSelectionUMG.PropSelectionUMG_C.BndEvt__Option3Image_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UPropSelectionUMG_C::BndEvt__Option3Image_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PropSelectionUMG.PropSelectionUMG_C.BndEvt__Option3Image_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature");

	UPropSelectionUMG_C_BndEvt__Option3Image_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function PropSelectionUMG.PropSelectionUMG_C.StartSlotRoll
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UPropSelectionUMG_C::StartSlotRoll()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PropSelectionUMG.PropSelectionUMG_C.StartSlotRoll");

	UPropSelectionUMG_C_StartSlotRoll_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function PropSelectionUMG.PropSelectionUMG_C.RollTimerTick
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UPropSelectionUMG_C::RollTimerTick()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PropSelectionUMG.PropSelectionUMG_C.RollTimerTick");

	UPropSelectionUMG_C_RollTimerTick_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function PropSelectionUMG.PropSelectionUMG_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UPropSelectionUMG_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PropSelectionUMG.PropSelectionUMG_C.Construct");

	UPropSelectionUMG_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function PropSelectionUMG.PropSelectionUMG_C.BndEvt__ChooseButton_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UPropSelectionUMG_C::BndEvt__ChooseButton_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PropSelectionUMG.PropSelectionUMG_C.BndEvt__ChooseButton_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature");

	UPropSelectionUMG_C_BndEvt__ChooseButton_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function PropSelectionUMG.PropSelectionUMG_C.OnCancelSelection
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UPropSelectionUMG_C::OnCancelSelection()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PropSelectionUMG.PropSelectionUMG_C.OnCancelSelection");

	UPropSelectionUMG_C_OnCancelSelection_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function PropSelectionUMG.PropSelectionUMG_C.FinishRolling
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UPropSelectionUMG_C::FinishRolling()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PropSelectionUMG.PropSelectionUMG_C.FinishRolling");

	UPropSelectionUMG_C_FinishRolling_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function PropSelectionUMG.PropSelectionUMG_C.BndEvt__Option1Image_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UPropSelectionUMG_C::BndEvt__Option1Image_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PropSelectionUMG.PropSelectionUMG_C.BndEvt__Option1Image_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature");

	UPropSelectionUMG_C_BndEvt__Option1Image_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function PropSelectionUMG.PropSelectionUMG_C.BndEvt__Option1Image_K2Node_ComponentBoundEvent_1_OnUnhovered__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UPropSelectionUMG_C::BndEvt__Option1Image_K2Node_ComponentBoundEvent_1_OnUnhovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PropSelectionUMG.PropSelectionUMG_C.BndEvt__Option1Image_K2Node_ComponentBoundEvent_1_OnUnhovered__DelegateSignature");

	UPropSelectionUMG_C_BndEvt__Option1Image_K2Node_ComponentBoundEvent_1_OnUnhovered__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function PropSelectionUMG.PropSelectionUMG_C.BndEvt__Option2Image_K2Node_ComponentBoundEvent_2_OnHovered__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UPropSelectionUMG_C::BndEvt__Option2Image_K2Node_ComponentBoundEvent_2_OnHovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PropSelectionUMG.PropSelectionUMG_C.BndEvt__Option2Image_K2Node_ComponentBoundEvent_2_OnHovered__DelegateSignature");

	UPropSelectionUMG_C_BndEvt__Option2Image_K2Node_ComponentBoundEvent_2_OnHovered__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function PropSelectionUMG.PropSelectionUMG_C.BndEvt__Option2Image_K2Node_ComponentBoundEvent_4_OnUnhovered__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UPropSelectionUMG_C::BndEvt__Option2Image_K2Node_ComponentBoundEvent_4_OnUnhovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PropSelectionUMG.PropSelectionUMG_C.BndEvt__Option2Image_K2Node_ComponentBoundEvent_4_OnUnhovered__DelegateSignature");

	UPropSelectionUMG_C_BndEvt__Option2Image_K2Node_ComponentBoundEvent_4_OnUnhovered__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function PropSelectionUMG.PropSelectionUMG_C.BndEvt__Option3Image_K2Node_ComponentBoundEvent_8_OnHovered__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UPropSelectionUMG_C::BndEvt__Option3Image_K2Node_ComponentBoundEvent_8_OnHovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PropSelectionUMG.PropSelectionUMG_C.BndEvt__Option3Image_K2Node_ComponentBoundEvent_8_OnHovered__DelegateSignature");

	UPropSelectionUMG_C_BndEvt__Option3Image_K2Node_ComponentBoundEvent_8_OnHovered__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function PropSelectionUMG.PropSelectionUMG_C.BndEvt__Option3Image_K2Node_ComponentBoundEvent_9_OnUnhovered__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UPropSelectionUMG_C::BndEvt__Option3Image_K2Node_ComponentBoundEvent_9_OnUnhovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PropSelectionUMG.PropSelectionUMG_C.BndEvt__Option3Image_K2Node_ComponentBoundEvent_9_OnUnhovered__DelegateSignature");

	UPropSelectionUMG_C_BndEvt__Option3Image_K2Node_ComponentBoundEvent_9_OnUnhovered__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function PropSelectionUMG.PropSelectionUMG_C.ServerCheckedValidCurrency
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                TrialNumber                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPropSelectionUMG_C::ServerCheckedValidCurrency(int TrialNumber)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PropSelectionUMG.PropSelectionUMG_C.ServerCheckedValidCurrency");

	UPropSelectionUMG_C_ServerCheckedValidCurrency_Params params {};
	params.TrialNumber = TrialNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function PropSelectionUMG.PropSelectionUMG_C.ExecuteUbergraph_PropSelectionUMG
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPropSelectionUMG_C::ExecuteUbergraph_PropSelectionUMG(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PropSelectionUMG.PropSelectionUMG_C.ExecuteUbergraph_PropSelectionUMG");

	UPropSelectionUMG_C_ExecuteUbergraph_PropSelectionUMG_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
