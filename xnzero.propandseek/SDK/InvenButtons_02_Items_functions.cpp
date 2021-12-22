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
//		Name   -> Function InvenButtons_02_Items.InvenButtons_02_Items_C.UpdateItemAmount
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                OwningAmount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInvenButtons_02_Items_C::UpdateItemAmount(int OwningAmount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InvenButtons_02_Items.InvenButtons_02_Items_C.UpdateItemAmount");

	UInvenButtons_02_Items_C_UpdateItemAmount_Params params {};
	params.OwningAmount = OwningAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function InvenButtons_02_Items.InvenButtons_02_Items_C.BndEvt__InventoryListButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UInvenButtons_02_Items_C::BndEvt__InventoryListButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InvenButtons_02_Items.InvenButtons_02_Items_C.BndEvt__InventoryListButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");

	UInvenButtons_02_Items_C_BndEvt__InventoryListButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function InvenButtons_02_Items.InvenButtons_02_Items_C.BndEvt__InventoryListButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UInvenButtons_02_Items_C::BndEvt__InventoryListButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InvenButtons_02_Items.InvenButtons_02_Items_C.BndEvt__InventoryListButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");

	UInvenButtons_02_Items_C_BndEvt__InventoryListButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function InvenButtons_02_Items.InvenButtons_02_Items_C.BndEvt__InventoryListButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UInvenButtons_02_Items_C::BndEvt__InventoryListButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InvenButtons_02_Items.InvenButtons_02_Items_C.BndEvt__InventoryListButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UInvenButtons_02_Items_C_BndEvt__InventoryListButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function InvenButtons_02_Items.InvenButtons_02_Items_C.ExecuteUbergraph_InvenButtons_02_Items
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInvenButtons_02_Items_C::ExecuteUbergraph_InvenButtons_02_Items(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InvenButtons_02_Items.InvenButtons_02_Items_C.ExecuteUbergraph_InvenButtons_02_Items");

	UInvenButtons_02_Items_C_ExecuteUbergraph_InvenButtons_02_Items_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
