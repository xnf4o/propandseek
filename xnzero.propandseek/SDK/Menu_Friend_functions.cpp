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
//		Name   -> Function Menu_Friend.Menu_Friend_C.PC
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class ALobbyPC2_C*                                 AsLobby_PC                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMenu_Friend_C::PC(class ALobbyPC2_C** AsLobby_PC)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Menu_Friend.Menu_Friend_C.PC");

	UMenu_Friend_C_PC_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsLobby_PC != nullptr)
		*AsLobby_PC = params.AsLobby_PC;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Menu_Friend.Menu_Friend_C.MenuWidgetCreation
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UMenu_Friend_C::MenuWidgetCreation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Menu_Friend.Menu_Friend_C.MenuWidgetCreation");

	UMenu_Friend_C_MenuWidgetCreation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Menu_Friend.Menu_Friend_C.OnPreviewKeyDown
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UMenu_Friend_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Menu_Friend.Menu_Friend_C.OnPreviewKeyDown");

	UMenu_Friend_C_OnPreviewKeyDown_Params params {};
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Menu_Friend.Menu_Friend_C.Get_Subtext_Text_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UMenu_Friend_C::Get_Subtext_Text_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Menu_Friend.Menu_Friend_C.Get_Subtext_Text_1");

	UMenu_Friend_C_Get_Subtext_Text_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Menu_Friend.Menu_Friend_C.Get_Text_Text_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UMenu_Friend_C::Get_Text_Text_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Menu_Friend.Menu_Friend_C.Get_Text_Text_1");

	UMenu_Friend_C_Get_Text_Text_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Menu_Friend.Menu_Friend_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UMenu_Friend_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Menu_Friend.Menu_Friend_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	UMenu_Friend_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Menu_Friend.Menu_Friend_C.BndEvt__UnfriendButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UMenu_Friend_C::BndEvt__UnfriendButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Menu_Friend.Menu_Friend_C.BndEvt__UnfriendButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");

	UMenu_Friend_C_BndEvt__UnfriendButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Menu_Friend.Menu_Friend_C.BndEvt__UnfriendButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UMenu_Friend_C::BndEvt__UnfriendButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Menu_Friend.Menu_Friend_C.BndEvt__UnfriendButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature");

	UMenu_Friend_C_BndEvt__UnfriendButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Menu_Friend.Menu_Friend_C.BndEvt__ViewProfileButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UMenu_Friend_C::BndEvt__ViewProfileButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Menu_Friend.Menu_Friend_C.BndEvt__ViewProfileButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature");

	UMenu_Friend_C_BndEvt__ViewProfileButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Menu_Friend.Menu_Friend_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UMenu_Friend_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Menu_Friend.Menu_Friend_C.Construct");

	UMenu_Friend_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Menu_Friend.Menu_Friend_C.OnFocusLost
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void UMenu_Friend_C::OnFocusLost(const struct FFocusEvent& InFocusEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Menu_Friend.Menu_Friend_C.OnFocusLost");

	UMenu_Friend_C_OnFocusLost_Params params {};
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Menu_Friend.Menu_Friend_C.ExecuteUbergraph_Menu_Friend
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMenu_Friend_C::ExecuteUbergraph_Menu_Friend(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Menu_Friend.Menu_Friend_C.ExecuteUbergraph_Menu_Friend");

	UMenu_Friend_C_ExecuteUbergraph_Menu_Friend_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
