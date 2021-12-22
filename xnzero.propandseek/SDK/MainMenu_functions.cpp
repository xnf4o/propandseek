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
//		Name   -> Function MainMenu.MainMenu_C.GI
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UGI2_C*                                      AsGI2                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMainMenu_C::GI(class UGI2_C** AsGI2)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.GI");

	UMainMenu_C_GI_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsGI2 != nullptr)
		*AsGI2 = params.AsGI2;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function MainMenu.MainMenu_C.ToggleChatboxVisibility
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Hide_                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UMainMenu_C::ToggleChatboxVisibility(bool Hide_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.ToggleChatboxVisibility");

	UMainMenu_C_ToggleChatboxVisibility_Params params {};
	params.Hide_ = Hide_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function MainMenu.MainMenu_C.PC
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class AFPS_PC_C*                                   AsFPS_PC                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMainMenu_C::PC(class AFPS_PC_C** AsFPS_PC)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.PC");

	UMainMenu_C_PC_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsFPS_PC != nullptr)
		*AsFPS_PC = params.AsFPS_PC;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function MainMenu.MainMenu_C.Switcher
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<MenuList_EMenuList>                    To                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMainMenu_C::Switcher(TEnumAsByte<MenuList_EMenuList> To)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.Switcher");

	UMainMenu_C_Switcher_Params params {};
	params.To = To;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function MainMenu.MainMenu_C.CloseWidget
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UMainMenu_C::CloseWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.CloseWidget");

	UMainMenu_C_CloseWidget_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function MainMenu.MainMenu_C.OnExitToDesktopButtonPressed
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UMainMenu_C::OnExitToDesktopButtonPressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.OnExitToDesktopButtonPressed");

	UMainMenu_C_OnExitToDesktopButtonPressed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function MainMenu.MainMenu_C.OnLeaveGameButtonPressed
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UMainMenu_C::OnLeaveGameButtonPressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.OnLeaveGameButtonPressed");

	UMainMenu_C_OnLeaveGameButtonPressed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function MainMenu.MainMenu_C.OnOptionsButtonPressed
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UMainMenu_C::OnOptionsButtonPressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.OnOptionsButtonPressed");

	UMainMenu_C_OnOptionsButtonPressed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function MainMenu.MainMenu_C.BndEvt__OptionButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UMainMenu_C::BndEvt__OptionButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.BndEvt__OptionButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UMainMenu_C_BndEvt__OptionButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function MainMenu.MainMenu_C.BndEvt__LeaveGameButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UMainMenu_C::BndEvt__LeaveGameButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.BndEvt__LeaveGameButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	UMainMenu_C_BndEvt__LeaveGameButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function MainMenu.MainMenu_C.BndEvt__ExitToDesktopButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UMainMenu_C::BndEvt__ExitToDesktopButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.BndEvt__ExitToDesktopButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");

	UMainMenu_C_BndEvt__ExitToDesktopButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function MainMenu.MainMenu_C.BndEvt__PlayersButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UMainMenu_C::BndEvt__PlayersButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.BndEvt__PlayersButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UMainMenu_C_BndEvt__PlayersButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function MainMenu.MainMenu_C.FOnLeave
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UMainMenu_C::FOnLeave()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.FOnLeave");

	UMainMenu_C_FOnLeave_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function MainMenu.MainMenu_C.OnBackButtonPressed
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UMainMenu_C::OnBackButtonPressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.OnBackButtonPressed");

	UMainMenu_C_OnBackButtonPressed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function MainMenu.MainMenu_C.ExecuteUbergraph_MainMenu
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMainMenu_C::ExecuteUbergraph_MainMenu(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.ExecuteUbergraph_MainMenu");

	UMainMenu_C_ExecuteUbergraph_MainMenu_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
