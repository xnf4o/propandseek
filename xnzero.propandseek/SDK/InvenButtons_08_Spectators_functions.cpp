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
//		Name   -> Function InvenButtons_08_Spectators.InvenButtons_08_Spectators_C.UpdateSpectatorButton
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                OwningSpectatorAmount                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                DefaultSpectator                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInvenButtons_08_Spectators_C::UpdateSpectatorButton(int OwningSpectatorAmount, int DefaultSpectator)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InvenButtons_08_Spectators.InvenButtons_08_Spectators_C.UpdateSpectatorButton");

	UInvenButtons_08_Spectators_C_UpdateSpectatorButton_Params params {};
	params.OwningSpectatorAmount = OwningSpectatorAmount;
	params.DefaultSpectator = DefaultSpectator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function InvenButtons_08_Spectators.InvenButtons_08_Spectators_C.BndEvt__InventoryListButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UInvenButtons_08_Spectators_C::BndEvt__InventoryListButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InvenButtons_08_Spectators.InvenButtons_08_Spectators_C.BndEvt__InventoryListButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");

	UInvenButtons_08_Spectators_C_BndEvt__InventoryListButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function InvenButtons_08_Spectators.InvenButtons_08_Spectators_C.BndEvt__InventoryListButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UInvenButtons_08_Spectators_C::BndEvt__InventoryListButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InvenButtons_08_Spectators.InvenButtons_08_Spectators_C.BndEvt__InventoryListButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");

	UInvenButtons_08_Spectators_C_BndEvt__InventoryListButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function InvenButtons_08_Spectators.InvenButtons_08_Spectators_C.BndEvt__InventoryListButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UInvenButtons_08_Spectators_C::BndEvt__InventoryListButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InvenButtons_08_Spectators.InvenButtons_08_Spectators_C.BndEvt__InventoryListButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UInvenButtons_08_Spectators_C_BndEvt__InventoryListButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function InvenButtons_08_Spectators.InvenButtons_08_Spectators_C.ExecuteUbergraph_InvenButtons_08_Spectators
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInvenButtons_08_Spectators_C::ExecuteUbergraph_InvenButtons_08_Spectators(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InvenButtons_08_Spectators.InvenButtons_08_Spectators_C.ExecuteUbergraph_InvenButtons_08_Spectators");

	UInvenButtons_08_Spectators_C_ExecuteUbergraph_InvenButtons_08_Spectators_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
