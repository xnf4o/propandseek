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
//		Name   -> Function QuitUMG.QuitUMG_C.PC
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class ALobbyPC2_C*                                 AsLobby_PC1                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UQuitUMG_C::PC(class ALobbyPC2_C** AsLobby_PC1)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function QuitUMG.QuitUMG_C.PC");

	UQuitUMG_C_PC_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsLobby_PC1 != nullptr)
		*AsLobby_PC1 = params.AsLobby_PC1;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function QuitUMG.QuitUMG_C.OnPressedExit
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UQuitUMG_C::OnPressedExit()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function QuitUMG.QuitUMG_C.OnPressedExit");

	UQuitUMG_C_OnPressedExit_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function QuitUMG.QuitUMG_C.OnPressedCancel
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UQuitUMG_C::OnPressedCancel()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function QuitUMG.QuitUMG_C.OnPressedCancel");

	UQuitUMG_C_OnPressedCancel_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function QuitUMG.QuitUMG_C.BndEvt__Exit_No_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UQuitUMG_C::BndEvt__Exit_No_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function QuitUMG.QuitUMG_C.BndEvt__Exit_No_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UQuitUMG_C_BndEvt__Exit_No_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function QuitUMG.QuitUMG_C.BndEvt__Exit_Yes_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UQuitUMG_C::BndEvt__Exit_Yes_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function QuitUMG.QuitUMG_C.BndEvt__Exit_Yes_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UQuitUMG_C_BndEvt__Exit_Yes_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function QuitUMG.QuitUMG_C.BndEvt__Exit_Entry_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UQuitUMG_C::BndEvt__Exit_Entry_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function QuitUMG.QuitUMG_C.BndEvt__Exit_Entry_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	UQuitUMG_C_BndEvt__Exit_Entry_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function QuitUMG.QuitUMG_C.ExecuteUbergraph_QuitUMG
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UQuitUMG_C::ExecuteUbergraph_QuitUMG(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function QuitUMG.QuitUMG_C.ExecuteUbergraph_QuitUMG");

	UQuitUMG_C_ExecuteUbergraph_QuitUMG_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
