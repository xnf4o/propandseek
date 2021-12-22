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
//		Name   -> Function ChatSystemLobby.ChatSystemLobby_C.FadeAway
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               On_                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UChatSystemLobby_C::FadeAway(bool On_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChatSystemLobby.ChatSystemLobby_C.FadeAway");

	UChatSystemLobby_C_FadeAway_Params params {};
	params.On_ = On_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ChatSystemLobby.ChatSystemLobby_C.Get_Username_Text_1
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UChatSystemLobby_C::Get_Username_Text_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChatSystemLobby.ChatSystemLobby_C.Get_Username_Text_1");

	UChatSystemLobby_C_Get_Username_Text_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ChatSystemLobby.ChatSystemLobby_C.GI
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UGI2_C*                                      AsGI2                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChatSystemLobby_C::GI(class UGI2_C** AsGI2)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChatSystemLobby.ChatSystemLobby_C.GI");

	UChatSystemLobby_C_GI_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsGI2 != nullptr)
		*AsGI2 = params.AsGI2;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ChatSystemLobby.ChatSystemLobby_C.UpdateTextColor
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UChatSystemLobby_C::UpdateTextColor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChatSystemLobby.ChatSystemLobby_C.UpdateTextColor");

	UChatSystemLobby_C_UpdateTextColor_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ChatSystemLobby.ChatSystemLobby_C.OnPreviewKeyDown
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UChatSystemLobby_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChatSystemLobby.ChatSystemLobby_C.OnPreviewKeyDown");

	UChatSystemLobby_C_OnPreviewKeyDown_Params params {};
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ChatSystemLobby.ChatSystemLobby_C.DisplayChat
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       Message                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FText                                       userName                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
//		TEnumAsByte<EChatMode_EChatMode>                   ChatMode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Myself_                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UChatSystemLobby_C::DisplayChat(const struct FText& Message, const struct FText& userName, TEnumAsByte<EChatMode_EChatMode> ChatMode, bool Myself_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChatSystemLobby.ChatSystemLobby_C.DisplayChat");

	UChatSystemLobby_C_DisplayChat_Params params {};
	params.Message = Message;
	params.userName = userName;
	params.ChatMode = ChatMode;
	params.Myself_ = Myself_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ChatSystemLobby.ChatSystemLobby_C.OnChatFocused
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UChatSystemLobby_C::OnChatFocused()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChatSystemLobby.ChatSystemLobby_C.OnChatFocused");

	UChatSystemLobby_C_OnChatFocused_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ChatSystemLobby.ChatSystemLobby_C.OnChatUnfocused
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UChatSystemLobby_C::OnChatUnfocused()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChatSystemLobby.ChatSystemLobby_C.OnChatUnfocused");

	UChatSystemLobby_C_OnChatUnfocused_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ChatSystemLobby.ChatSystemLobby_C.PC
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class ALobbyPC2_C*                                 AsLobby_PC                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChatSystemLobby_C::PC(class ALobbyPC2_C** AsLobby_PC)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChatSystemLobby.ChatSystemLobby_C.PC");

	UChatSystemLobby_C_PC_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsLobby_PC != nullptr)
		*AsLobby_PC = params.AsLobby_PC;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ChatSystemLobby.ChatSystemLobby_C.BndEvt__EditableTextBox_708_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature
//		Flags  -> (HasOutParms, BlueprintEvent)
// Parameters:
//		struct FText                                       Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		TEnumAsByte<SlateCore_ETextCommit>                 CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChatSystemLobby_C::BndEvt__EditableTextBox_708_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<SlateCore_ETextCommit> CommitMethod)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChatSystemLobby.ChatSystemLobby_C.BndEvt__EditableTextBox_708_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature");

	UChatSystemLobby_C_BndEvt__EditableTextBox_708_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params {};
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ChatSystemLobby.ChatSystemLobby_C.DisplayChat_Main
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       Message                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FText                                       userName                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
//		TEnumAsByte<EChatMode_EChatMode>                   ChatMode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Myself_                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UChatSystemLobby_C::DisplayChat_Main(const struct FText& Message, const struct FText& userName, TEnumAsByte<EChatMode_EChatMode> ChatMode, bool Myself_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChatSystemLobby.ChatSystemLobby_C.DisplayChat_Main");

	UChatSystemLobby_C_DisplayChat_Main_Params params {};
	params.Message = Message;
	params.userName = userName;
	params.ChatMode = ChatMode;
	params.Myself_ = Myself_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ChatSystemLobby.ChatSystemLobby_C.OnUnpressedChat
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UChatSystemLobby_C::OnUnpressedChat()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChatSystemLobby.ChatSystemLobby_C.OnUnpressedChat");

	UChatSystemLobby_C_OnUnpressedChat_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ChatSystemLobby.ChatSystemLobby_C.BndEvt__PressEnterButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UChatSystemLobby_C::BndEvt__PressEnterButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChatSystemLobby.ChatSystemLobby_C.BndEvt__PressEnterButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UChatSystemLobby_C_BndEvt__PressEnterButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ChatSystemLobby.ChatSystemLobby_C.ShrinkChatbox_Event
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Shrink_                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UChatSystemLobby_C::ShrinkChatbox_Event(bool Shrink_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChatSystemLobby.ChatSystemLobby_C.ShrinkChatbox_Event");

	UChatSystemLobby_C_ShrinkChatbox_Event_Params params {};
	params.Shrink_ = Shrink_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ChatSystemLobby.ChatSystemLobby_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UChatSystemLobby_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChatSystemLobby.ChatSystemLobby_C.Construct");

	UChatSystemLobby_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ChatSystemLobby.ChatSystemLobby_C.ExecuteUbergraph_ChatSystemLobby
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChatSystemLobby_C::ExecuteUbergraph_ChatSystemLobby(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChatSystemLobby.ChatSystemLobby_C.ExecuteUbergraph_ChatSystemLobby");

	UChatSystemLobby_C_ExecuteUbergraph_ChatSystemLobby_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
