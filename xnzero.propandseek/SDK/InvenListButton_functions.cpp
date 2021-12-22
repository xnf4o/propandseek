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
//		Name   -> Function InvenListButton.InvenListButton_C.IfHasQuantity
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               HasQuantity_                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		TEnumAsByte<EShopItemList_EShopItemList>           WhichItem_                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               DisableUseItemButton_                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UInvenListButton_C::IfHasQuantity(bool HasQuantity_, TEnumAsByte<EShopItemList_EShopItemList> WhichItem_, bool* DisableUseItemButton_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InvenListButton.InvenListButton_C.IfHasQuantity");

	UInvenListButton_C_IfHasQuantity_Params params {};
	params.HasQuantity_ = HasQuantity_;
	params.WhichItem_ = WhichItem_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DisableUseItemButton_ != nullptr)
		*DisableUseItemButton_ = params.DisableUseItemButton_;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function InvenListButton.InvenListButton_C.AddToUpdateListPerSec
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UInvenListButton_C::AddToUpdateListPerSec()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InvenListButton.InvenListButton_C.AddToUpdateListPerSec");

	UInvenListButton_C_AddToUpdateListPerSec_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function InvenListButton.InvenListButton_C.ExpirationPerSec
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UInvenListButton_C::ExpirationPerSec()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InvenListButton.InvenListButton_C.ExpirationPerSec");

	UInvenListButton_C_ExpirationPerSec_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function InvenListButton.InvenListButton_C.BeginplayUpdate
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Default                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInvenListButton_C::BeginplayUpdate(int Default)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InvenListButton.InvenListButton_C.BeginplayUpdate");

	UInvenListButton_C_BeginplayUpdate_Params params {};
	params.Default = Default;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function InvenListButton.InvenListButton_C.Inventory
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UInventoryUMG1_C*                            InventoryUMG1                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInvenListButton_C::Inventory(class UInventoryUMG1_C** InventoryUMG1)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InvenListButton.InvenListButton_C.Inventory");

	UInvenListButton_C_Inventory_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InventoryUMG1 != nullptr)
		*InventoryUMG1 = params.InventoryUMG1;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function InvenListButton.InvenListButton_C.UpdateAmount
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UInvenListButton_C::UpdateAmount()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InvenListButton.InvenListButton_C.UpdateAmount");

	UInvenListButton_C_UpdateAmount_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function InvenListButton.InvenListButton_C.SetMenuEquippedNames
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UInvenListButton_C::SetMenuEquippedNames()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InvenListButton.InvenListButton_C.SetMenuEquippedNames");

	UInvenListButton_C_SetMenuEquippedNames_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function InvenListButton.InvenListButton_C.SearchOwningItems
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Success_                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UInvenListButton_C::SearchOwningItems(bool* Success_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InvenListButton.InvenListButton_C.SearchOwningItems");

	UInvenListButton_C_SearchOwningItems_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success_ != nullptr)
		*Success_ = params.Success_;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function InvenListButton.InvenListButton_C.PC
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class ALobbyPC2_C*                                 AsLobby_PC                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInvenListButton_C::PC(class ALobbyPC2_C** AsLobby_PC)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InvenListButton.InvenListButton_C.PC");

	UInvenListButton_C_PC_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsLobby_PC != nullptr)
		*AsLobby_PC = params.AsLobby_PC;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function InvenListButton.InvenListButton_C.UpdateInvenListObject
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Upload_1                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               SyncAsDefault_1                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UInvenListButton_C::UpdateInvenListObject(bool Upload_1, bool SyncAsDefault_1)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InvenListButton.InvenListButton_C.UpdateInvenListObject");

	UInvenListButton_C_UpdateInvenListObject_Params params {};
	params.Upload_1 = Upload_1;
	params.SyncAsDefault_1 = SyncAsDefault_1;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function InvenListButton.InvenListButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UInvenListButton_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InvenListButton.InvenListButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UInvenListButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function InvenListButton.InvenListButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UInvenListButton_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InvenListButton.InvenListButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UInvenListButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function InvenListButton.InvenListButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UInvenListButton_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InvenListButton.InvenListButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UInvenListButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function InvenListButton.InvenListButton_C.ExecuteUbergraph_InvenListButton
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInvenListButton_C::ExecuteUbergraph_InvenListButton(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InvenListButton.InvenListButton_C.ExecuteUbergraph_InvenListButton");

	UInvenListButton_C_ExecuteUbergraph_InvenListButton_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
