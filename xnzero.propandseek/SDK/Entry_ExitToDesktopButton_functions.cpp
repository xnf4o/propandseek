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
//		Name   -> Function Entry_ExitToDesktopButton.Entry_ExitToDesktopButton_C.BndEvt__WB_Button02_Framed_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UEntry_ExitToDesktopButton_C::BndEvt__WB_Button02_Framed_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Entry_ExitToDesktopButton.Entry_ExitToDesktopButton_C.BndEvt__WB_Button02_Framed_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");

	UEntry_ExitToDesktopButton_C_BndEvt__WB_Button02_Framed_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Entry_ExitToDesktopButton.Entry_ExitToDesktopButton_C.ExecuteUbergraph_Entry_ExitToDesktopButton
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UEntry_ExitToDesktopButton_C::ExecuteUbergraph_Entry_ExitToDesktopButton(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Entry_ExitToDesktopButton.Entry_ExitToDesktopButton_C.ExecuteUbergraph_Entry_ExitToDesktopButton");

	UEntry_ExitToDesktopButton_C_ExecuteUbergraph_Entry_ExitToDesktopButton_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
