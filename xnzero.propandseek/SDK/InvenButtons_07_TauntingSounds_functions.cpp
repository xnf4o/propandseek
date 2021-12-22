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
//		Name   -> Function InvenButtons_07_TauntingSounds.InvenButtons_07_TauntingSounds_C.UpdateTauntingSoundsButton
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                OwningTauntingSoundsAmount                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                DefaultTauntingSound                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInvenButtons_07_TauntingSounds_C::UpdateTauntingSoundsButton(int OwningTauntingSoundsAmount, int DefaultTauntingSound)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InvenButtons_07_TauntingSounds.InvenButtons_07_TauntingSounds_C.UpdateTauntingSoundsButton");

	UInvenButtons_07_TauntingSounds_C_UpdateTauntingSoundsButton_Params params {};
	params.OwningTauntingSoundsAmount = OwningTauntingSoundsAmount;
	params.DefaultTauntingSound = DefaultTauntingSound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function InvenButtons_07_TauntingSounds.InvenButtons_07_TauntingSounds_C.BndEvt__InventoryListButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UInvenButtons_07_TauntingSounds_C::BndEvt__InventoryListButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InvenButtons_07_TauntingSounds.InvenButtons_07_TauntingSounds_C.BndEvt__InventoryListButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");

	UInvenButtons_07_TauntingSounds_C_BndEvt__InventoryListButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function InvenButtons_07_TauntingSounds.InvenButtons_07_TauntingSounds_C.BndEvt__InventoryListButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UInvenButtons_07_TauntingSounds_C::BndEvt__InventoryListButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InvenButtons_07_TauntingSounds.InvenButtons_07_TauntingSounds_C.BndEvt__InventoryListButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");

	UInvenButtons_07_TauntingSounds_C_BndEvt__InventoryListButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function InvenButtons_07_TauntingSounds.InvenButtons_07_TauntingSounds_C.BndEvt__InventoryListButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UInvenButtons_07_TauntingSounds_C::BndEvt__InventoryListButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InvenButtons_07_TauntingSounds.InvenButtons_07_TauntingSounds_C.BndEvt__InventoryListButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UInvenButtons_07_TauntingSounds_C_BndEvt__InventoryListButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function InvenButtons_07_TauntingSounds.InvenButtons_07_TauntingSounds_C.ExecuteUbergraph_InvenButtons_07_TauntingSounds
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInvenButtons_07_TauntingSounds_C::ExecuteUbergraph_InvenButtons_07_TauntingSounds(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InvenButtons_07_TauntingSounds.InvenButtons_07_TauntingSounds_C.ExecuteUbergraph_InvenButtons_07_TauntingSounds");

	UInvenButtons_07_TauntingSounds_C_ExecuteUbergraph_InvenButtons_07_TauntingSounds_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
