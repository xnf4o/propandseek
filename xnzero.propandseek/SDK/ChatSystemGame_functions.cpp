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
//		Name   -> Function ChatSystemGame.ChatSystemGame_C.CheckDebuggingCommands
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       Message                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
void UChatSystemGame_C::CheckDebuggingCommands(const struct FText& Message)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChatSystemGame.ChatSystemGame_C.CheckDebuggingCommands");

	UChatSystemGame_C_CheckDebuggingCommands_Params params {};
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ChatSystemGame.ChatSystemGame_C.FadeAway
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               On_                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UChatSystemGame_C::FadeAway(bool On_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChatSystemGame.ChatSystemGame_C.FadeAway");

	UChatSystemGame_C_FadeAway_Params params {};
	params.On_ = On_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ChatSystemGame.ChatSystemGame_C.DisplayChat
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       Message                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FText                                       userName                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
//		TEnumAsByte<EChatMode_EChatMode>                   ChatMode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               IsHunter                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FSlateColor                                 Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
void UChatSystemGame_C::DisplayChat(const struct FText& Message, const struct FText& userName, TEnumAsByte<EChatMode_EChatMode> ChatMode, bool IsHunter, const struct FSlateColor& Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChatSystemGame.ChatSystemGame_C.DisplayChat");

	UChatSystemGame_C_DisplayChat_Params params {};
	params.Message = Message;
	params.userName = userName;
	params.ChatMode = ChatMode;
	params.IsHunter = IsHunter;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ChatSystemGame.ChatSystemGame_C.OnChatUnfocused
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UChatSystemGame_C::OnChatUnfocused()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChatSystemGame.ChatSystemGame_C.OnChatUnfocused");

	UChatSystemGame_C_OnChatUnfocused_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ChatSystemGame.ChatSystemGame_C.GI
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UGI2_C*                                      AsGI2                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChatSystemGame_C::GI(class UGI2_C** AsGI2)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChatSystemGame.ChatSystemGame_C.GI");

	UChatSystemGame_C_GI_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsGI2 != nullptr)
		*AsGI2 = params.AsGI2;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ChatSystemGame.ChatSystemGame_C.UpdateTextColor
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UChatSystemGame_C::UpdateTextColor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChatSystemGame.ChatSystemGame_C.UpdateTextColor");

	UChatSystemGame_C_UpdateTextColor_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ChatSystemGame.ChatSystemGame_C.Get_Username_Text_1
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UChatSystemGame_C::Get_Username_Text_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChatSystemGame.ChatSystemGame_C.Get_Username_Text_1");

	UChatSystemGame_C_Get_Username_Text_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ChatSystemGame.ChatSystemGame_C.OnPreviewKeyDown
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UChatSystemGame_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChatSystemGame.ChatSystemGame_C.OnPreviewKeyDown");

	UChatSystemGame_C_OnPreviewKeyDown_Params params {};
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ChatSystemGame.ChatSystemGame_C.OnChatFocused
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UChatSystemGame_C::OnChatFocused()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChatSystemGame.ChatSystemGame_C.OnChatFocused");

	UChatSystemGame_C_OnChatFocused_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ChatSystemGame.ChatSystemGame_C.PC
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class AFPS_PC_C*                                   AsFPS_PC                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChatSystemGame_C::PC(class AFPS_PC_C** AsFPS_PC)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChatSystemGame.ChatSystemGame_C.PC");

	UChatSystemGame_C_PC_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsFPS_PC != nullptr)
		*AsFPS_PC = params.AsFPS_PC;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ChatSystemGame.ChatSystemGame_C.BndEvt__EditableTextBox_708_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature
//		Flags  -> (HasOutParms, BlueprintEvent)
// Parameters:
//		struct FText                                       Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		TEnumAsByte<SlateCore_ETextCommit>                 CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChatSystemGame_C::BndEvt__EditableTextBox_708_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<SlateCore_ETextCommit> CommitMethod)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChatSystemGame.ChatSystemGame_C.BndEvt__EditableTextBox_708_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature");

	UChatSystemGame_C_BndEvt__EditableTextBox_708_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params {};
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ChatSystemGame.ChatSystemGame_C.ScrollToTheEnd
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UChatSystemGame_C::ScrollToTheEnd()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChatSystemGame.ChatSystemGame_C.ScrollToTheEnd");

	UChatSystemGame_C_ScrollToTheEnd_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ChatSystemGame.ChatSystemGame_C.OnChatUnpressed
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UChatSystemGame_C::OnChatUnpressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChatSystemGame.ChatSystemGame_C.OnChatUnpressed");

	UChatSystemGame_C_OnChatUnpressed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ChatSystemGame.ChatSystemGame_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UChatSystemGame_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChatSystemGame.ChatSystemGame_C.Construct");

	UChatSystemGame_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ChatSystemGame.ChatSystemGame_C.ExecuteUbergraph_ChatSystemGame
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChatSystemGame_C::ExecuteUbergraph_ChatSystemGame(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChatSystemGame.ChatSystemGame_C.ExecuteUbergraph_ChatSystemGame");

	UChatSystemGame_C_ExecuteUbergraph_ChatSystemGame_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
