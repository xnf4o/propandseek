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
//		Name   -> Function CreateUsername2.CreateUsername2_C.UpdateMode
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               UsingNameChangeItem_                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UCreateUsername2_C::UpdateMode(bool UsingNameChangeItem_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CreateUsername2.CreateUsername2_C.UpdateMode");

	UCreateUsername2_C_UpdateMode_Params params {};
	params.UsingNameChangeItem_ = UsingNameChangeItem_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function CreateUsername2.CreateUsername2_C.TextCheck(Space)
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     SearchIn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		bool                                               Valid_                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UCreateUsername2_C::TextCheck_Space_(const struct FString& SearchIn, bool* Valid_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CreateUsername2.CreateUsername2_C.TextCheck(Space)");

	UCreateUsername2_C_TextCheck_Space__Params params {};
	params.SearchIn = SearchIn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Valid_ != nullptr)
		*Valid_ = params.Valid_;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function CreateUsername2.CreateUsername2_C.OnCreateButtonPressed
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UCreateUsername2_C::OnCreateButtonPressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CreateUsername2.CreateUsername2_C.OnCreateButtonPressed");

	UCreateUsername2_C_OnCreateButtonPressed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function CreateUsername2.CreateUsername2_C.Init
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UCreateUsername2_C::Init()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CreateUsername2.CreateUsername2_C.Init");

	UCreateUsername2_C_Init_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function CreateUsername2.CreateUsername2_C.GI
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UGI2_C*                                      AsGI2                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCreateUsername2_C::GI(class UGI2_C** AsGI2)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CreateUsername2.CreateUsername2_C.GI");

	UCreateUsername2_C_GI_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsGI2 != nullptr)
		*AsGI2 = params.AsGI2;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function CreateUsername2.CreateUsername2_C.PC
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class ALobbyPC2_C*                                 AsLobby_PC1                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCreateUsername2_C::PC(class ALobbyPC2_C** AsLobby_PC1)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CreateUsername2.CreateUsername2_C.PC");

	UCreateUsername2_C_PC_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsLobby_PC1 != nullptr)
		*AsLobby_PC1 = params.AsLobby_PC1;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function CreateUsername2.CreateUsername2_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UCreateUsername2_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CreateUsername2.CreateUsername2_C.Construct");

	UCreateUsername2_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function CreateUsername2.CreateUsername2_C.BndEvt__EditableTextBox_123_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature
//		Flags  -> (HasOutParms, BlueprintEvent)
// Parameters:
//		struct FText                                       Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UCreateUsername2_C::BndEvt__EditableTextBox_123_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CreateUsername2.CreateUsername2_C.BndEvt__EditableTextBox_123_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature");

	UCreateUsername2_C_BndEvt__EditableTextBox_123_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature_Params params {};
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function CreateUsername2.CreateUsername2_C.BndEvt__CreateButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UCreateUsername2_C::BndEvt__CreateButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CreateUsername2.CreateUsername2_C.BndEvt__CreateButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UCreateUsername2_C_BndEvt__CreateButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function CreateUsername2.CreateUsername2_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UCreateUsername2_C::BndEvt__CancelButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CreateUsername2.CreateUsername2_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	UCreateUsername2_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function CreateUsername2.CreateUsername2_C.ExecuteUbergraph_CreateUsername2
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCreateUsername2_C::ExecuteUbergraph_CreateUsername2(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CreateUsername2.CreateUsername2_C.ExecuteUbergraph_CreateUsername2");

	UCreateUsername2_C_ExecuteUbergraph_CreateUsername2_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
