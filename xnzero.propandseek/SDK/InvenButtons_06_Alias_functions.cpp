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
//		Name   -> Function InvenButtons_06_Alias.InvenButtons_06_Alias_C.UpdateAliasButton
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                OwningAliasesAmount                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                DefaultAlias                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInvenButtons_06_Alias_C::UpdateAliasButton(int OwningAliasesAmount, int DefaultAlias)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InvenButtons_06_Alias.InvenButtons_06_Alias_C.UpdateAliasButton");

	UInvenButtons_06_Alias_C_UpdateAliasButton_Params params {};
	params.OwningAliasesAmount = OwningAliasesAmount;
	params.DefaultAlias = DefaultAlias;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function InvenButtons_06_Alias.InvenButtons_06_Alias_C.BndEvt__InventoryListButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UInvenButtons_06_Alias_C::BndEvt__InventoryListButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InvenButtons_06_Alias.InvenButtons_06_Alias_C.BndEvt__InventoryListButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");

	UInvenButtons_06_Alias_C_BndEvt__InventoryListButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function InvenButtons_06_Alias.InvenButtons_06_Alias_C.BndEvt__InventoryListButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UInvenButtons_06_Alias_C::BndEvt__InventoryListButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InvenButtons_06_Alias.InvenButtons_06_Alias_C.BndEvt__InventoryListButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");

	UInvenButtons_06_Alias_C_BndEvt__InventoryListButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function InvenButtons_06_Alias.InvenButtons_06_Alias_C.BndEvt__InventoryListButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UInvenButtons_06_Alias_C::BndEvt__InventoryListButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InvenButtons_06_Alias.InvenButtons_06_Alias_C.BndEvt__InventoryListButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UInvenButtons_06_Alias_C_BndEvt__InventoryListButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function InvenButtons_06_Alias.InvenButtons_06_Alias_C.ExecuteUbergraph_InvenButtons_06_Alias
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInvenButtons_06_Alias_C::ExecuteUbergraph_InvenButtons_06_Alias(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InvenButtons_06_Alias.InvenButtons_06_Alias_C.ExecuteUbergraph_InvenButtons_06_Alias");

	UInvenButtons_06_Alias_C_ExecuteUbergraph_InvenButtons_06_Alias_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
