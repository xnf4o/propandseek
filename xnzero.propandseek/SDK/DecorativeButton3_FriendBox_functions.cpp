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
//		Name   -> Function DecorativeButton3_FriendBox.DecorativeButton3_FriendBox_C.PC
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class ALobbyPC2_C*                                 AsLobby_PC                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDecorativeButton3_FriendBox_C::PC(class ALobbyPC2_C** AsLobby_PC)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DecorativeButton3_FriendBox.DecorativeButton3_FriendBox_C.PC");

	UDecorativeButton3_FriendBox_C_PC_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsLobby_PC != nullptr)
		*AsLobby_PC = params.AsLobby_PC;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function DecorativeButton3_FriendBox.DecorativeButton3_FriendBox_C.Init
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UDecorativeButton3_FriendBox_C::Init()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DecorativeButton3_FriendBox.DecorativeButton3_FriendBox_C.Init");

	UDecorativeButton3_FriendBox_C_Init_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function DecorativeButton3_FriendBox.DecorativeButton3_FriendBox_C.OnUnfriendClicked
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FsFriends                                   PlayerToUnfriend                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UDecorativeButton3_FriendBox_C::OnUnfriendClicked(const struct FsFriends& PlayerToUnfriend)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DecorativeButton3_FriendBox.DecorativeButton3_FriendBox_C.OnUnfriendClicked");

	UDecorativeButton3_FriendBox_C_OnUnfriendClicked_Params params {};
	params.PlayerToUnfriend = PlayerToUnfriend;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function DecorativeButton3_FriendBox.DecorativeButton3_FriendBox_C.OnViewProfileClicked
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UDecorativeButton3_FriendBox_C::OnViewProfileClicked()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DecorativeButton3_FriendBox.DecorativeButton3_FriendBox_C.OnViewProfileClicked");

	UDecorativeButton3_FriendBox_C_OnViewProfileClicked_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function DecorativeButton3_FriendBox.DecorativeButton3_FriendBox_C.OnPreviewMouseButtonDown
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UDecorativeButton3_FriendBox_C::OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DecorativeButton3_FriendBox.DecorativeButton3_FriendBox_C.OnPreviewMouseButtonDown");

	UDecorativeButton3_FriendBox_C_OnPreviewMouseButtonDown_Params params {};
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function DecorativeButton3_FriendBox.DecorativeButton3_FriendBox_C.StatusConverter
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		int                                                StatusNumber                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       StatusText                                                 (Parm, OutParm)
void UDecorativeButton3_FriendBox_C::StatusConverter(int StatusNumber, struct FText* StatusText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DecorativeButton3_FriendBox.DecorativeButton3_FriendBox_C.StatusConverter");

	UDecorativeButton3_FriendBox_C_StatusConverter_Params params {};
	params.StatusNumber = StatusNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (StatusText != nullptr)
		*StatusText = params.StatusText;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function DecorativeButton3_FriendBox.DecorativeButton3_FriendBox_C.GetText_2
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UDecorativeButton3_FriendBox_C::GetText_2()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DecorativeButton3_FriendBox.DecorativeButton3_FriendBox_C.GetText_2");

	UDecorativeButton3_FriendBox_C_GetText_2_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function DecorativeButton3_FriendBox.DecorativeButton3_FriendBox_C.GetText_1
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UDecorativeButton3_FriendBox_C::GetText_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DecorativeButton3_FriendBox.DecorativeButton3_FriendBox_C.GetText_1");

	UDecorativeButton3_FriendBox_C_GetText_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function DecorativeButton3_FriendBox.DecorativeButton3_FriendBox_C.MenuWidgetCreation
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UDecorativeButton3_FriendBox_C::MenuWidgetCreation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DecorativeButton3_FriendBox.DecorativeButton3_FriendBox_C.MenuWidgetCreation");

	UDecorativeButton3_FriendBox_C_MenuWidgetCreation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function DecorativeButton3_FriendBox.DecorativeButton3_FriendBox_C.OnPreviewKeyDown
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UDecorativeButton3_FriendBox_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DecorativeButton3_FriendBox.DecorativeButton3_FriendBox_C.OnPreviewKeyDown");

	UDecorativeButton3_FriendBox_C_OnPreviewKeyDown_Params params {};
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function DecorativeButton3_FriendBox.DecorativeButton3_FriendBox_C.BndEvt__FriendButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UDecorativeButton3_FriendBox_C::BndEvt__FriendButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DecorativeButton3_FriendBox.DecorativeButton3_FriendBox_C.BndEvt__FriendButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UDecorativeButton3_FriendBox_C_BndEvt__FriendButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function DecorativeButton3_FriendBox.DecorativeButton3_FriendBox_C.BndEvt__FriendButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UDecorativeButton3_FriendBox_C::BndEvt__FriendButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DecorativeButton3_FriendBox.DecorativeButton3_FriendBox_C.BndEvt__FriendButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	UDecorativeButton3_FriendBox_C_BndEvt__FriendButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function DecorativeButton3_FriendBox.DecorativeButton3_FriendBox_C.BndEvt__UnfriendButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UDecorativeButton3_FriendBox_C::BndEvt__UnfriendButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DecorativeButton3_FriendBox.DecorativeButton3_FriendBox_C.BndEvt__UnfriendButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");

	UDecorativeButton3_FriendBox_C_BndEvt__UnfriendButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function DecorativeButton3_FriendBox.DecorativeButton3_FriendBox_C.BndEvt__UnfriendButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UDecorativeButton3_FriendBox_C::BndEvt__UnfriendButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DecorativeButton3_FriendBox.DecorativeButton3_FriendBox_C.BndEvt__UnfriendButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");

	UDecorativeButton3_FriendBox_C_BndEvt__UnfriendButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function DecorativeButton3_FriendBox.DecorativeButton3_FriendBox_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UDecorativeButton3_FriendBox_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DecorativeButton3_FriendBox.DecorativeButton3_FriendBox_C.Construct");

	UDecorativeButton3_FriendBox_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function DecorativeButton3_FriendBox.DecorativeButton3_FriendBox_C.BndEvt__UnfriendButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UDecorativeButton3_FriendBox_C::BndEvt__UnfriendButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DecorativeButton3_FriendBox.DecorativeButton3_FriendBox_C.BndEvt__UnfriendButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UDecorativeButton3_FriendBox_C_BndEvt__UnfriendButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function DecorativeButton3_FriendBox.DecorativeButton3_FriendBox_C.ExecuteUbergraph_DecorativeButton3_FriendBox
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDecorativeButton3_FriendBox_C::ExecuteUbergraph_DecorativeButton3_FriendBox(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DecorativeButton3_FriendBox.DecorativeButton3_FriendBox_C.ExecuteUbergraph_DecorativeButton3_FriendBox");

	UDecorativeButton3_FriendBox_C_ExecuteUbergraph_DecorativeButton3_FriendBox_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
