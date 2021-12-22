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
//		Name   -> Function EventBoxUMG.EventBoxUMG_C.AlreadyDidThisEvent?
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               FoundMatch_                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               AlreadyHave_                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UEventBoxUMG_C::AlreadyDidThisEvent_(bool* FoundMatch_, bool* AlreadyHave_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EventBoxUMG.EventBoxUMG_C.AlreadyDidThisEvent?");

	UEventBoxUMG_C_AlreadyDidThisEvent__Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FoundMatch_ != nullptr)
		*FoundMatch_ = params.FoundMatch_;
	if (AlreadyHave_ != nullptr)
		*AlreadyHave_ = params.AlreadyHave_;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function EventBoxUMG.EventBoxUMG_C.RunNotification
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Success_                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UEventBoxUMG_C::RunNotification(bool Success_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EventBoxUMG.EventBoxUMG_C.RunNotification");

	UEventBoxUMG_C_RunNotification_Params params {};
	params.Success_ = Success_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function EventBoxUMG.EventBoxUMG_C.SetNotiColor
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FSlateColor                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FSlateColor UEventBoxUMG_C::SetNotiColor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EventBoxUMG.EventBoxUMG_C.SetNotiColor");

	UEventBoxUMG_C_SetNotiColor_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function EventBoxUMG.EventBoxUMG_C.SetNotiTxt
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UEventBoxUMG_C::SetNotiTxt()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EventBoxUMG.EventBoxUMG_C.SetNotiTxt");

	UEventBoxUMG_C_SetNotiTxt_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function EventBoxUMG.EventBoxUMG_C.PC
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class ALobbyPC2_C*                                 AsLobby_PC1                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UEventBoxUMG_C::PC(class ALobbyPC2_C** AsLobby_PC1)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EventBoxUMG.EventBoxUMG_C.PC");

	UEventBoxUMG_C_PC_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsLobby_PC1 != nullptr)
		*AsLobby_PC1 = params.AsLobby_PC1;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function EventBoxUMG.EventBoxUMG_C.BndEvt__EditableTextBox_174_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature
//		Flags  -> (HasOutParms, BlueprintEvent)
// Parameters:
//		struct FText                                       Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		TEnumAsByte<SlateCore_ETextCommit>                 CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UEventBoxUMG_C::BndEvt__EditableTextBox_174_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<SlateCore_ETextCommit> CommitMethod)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EventBoxUMG.EventBoxUMG_C.BndEvt__EditableTextBox_174_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature");

	UEventBoxUMG_C_BndEvt__EditableTextBox_174_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params {};
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function EventBoxUMG.EventBoxUMG_C.BndEvt__SendButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UEventBoxUMG_C::BndEvt__SendButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EventBoxUMG.EventBoxUMG_C.BndEvt__SendButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	UEventBoxUMG_C_BndEvt__SendButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function EventBoxUMG.EventBoxUMG_C.ExecuteUbergraph_EventBoxUMG
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UEventBoxUMG_C::ExecuteUbergraph_EventBoxUMG(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EventBoxUMG.EventBoxUMG_C.ExecuteUbergraph_EventBoxUMG");

	UEventBoxUMG_C_ExecuteUbergraph_EventBoxUMG_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
