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
//		Name   -> Function ShopAlternativeUMG.ShopAlternativeUMG_C.AllowState
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Allow_                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UShopAlternativeUMG_C::AllowState(bool Allow_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ShopAlternativeUMG.ShopAlternativeUMG_C.AllowState");

	UShopAlternativeUMG_C_AllowState_Params params {};
	params.Allow_ = Allow_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ShopAlternativeUMG.ShopAlternativeUMG_C.HideShopItemInfos
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UShopAlternativeUMG_C::HideShopItemInfos()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ShopAlternativeUMG.ShopAlternativeUMG_C.HideShopItemInfos");

	UShopAlternativeUMG_C_HideShopItemInfos_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ShopAlternativeUMG.ShopAlternativeUMG_C.ShopItemVisibiility
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UShopAlternativeUMG_C::ShopItemVisibiility(bool Visible)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ShopAlternativeUMG.ShopAlternativeUMG_C.ShopItemVisibiility");

	UShopAlternativeUMG_C_ShopItemVisibiility_Params params {};
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ShopAlternativeUMG.ShopAlternativeUMG_C.Loading
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Loading                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UShopAlternativeUMG_C::Loading(bool Loading)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ShopAlternativeUMG.ShopAlternativeUMG_C.Loading");

	UShopAlternativeUMG_C_Loading_Params params {};
	params.Loading = Loading;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ShopAlternativeUMG.ShopAlternativeUMG_C.ToggleMoreInfo
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UShopAlternativeUMG_C::ToggleMoreInfo()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ShopAlternativeUMG.ShopAlternativeUMG_C.ToggleMoreInfo");

	UShopAlternativeUMG_C_ToggleMoreInfo_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ShopAlternativeUMG.ShopAlternativeUMG_C.UpdateSelectedItem
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FSShopInventory                             CurrentlySelectedItem                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UShopAlternativeUMG_C::UpdateSelectedItem(const struct FSShopInventory& CurrentlySelectedItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ShopAlternativeUMG.ShopAlternativeUMG_C.UpdateSelectedItem");

	UShopAlternativeUMG_C_UpdateSelectedItem_Params params {};
	params.CurrentlySelectedItem = CurrentlySelectedItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ShopAlternativeUMG.ShopAlternativeUMG_C.Switcher_Pop_Up_Menu
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<EShopMenuSwitcher_EShopMenuSwitcher>   SwitchTo                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UShopAlternativeUMG_C::Switcher_Pop_Up_Menu(TEnumAsByte<EShopMenuSwitcher_EShopMenuSwitcher> SwitchTo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ShopAlternativeUMG.ShopAlternativeUMG_C.Switcher_Pop_Up_Menu");

	UShopAlternativeUMG_C_Switcher_Pop_Up_Menu_Params params {};
	params.SwitchTo = SwitchTo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ShopAlternativeUMG.ShopAlternativeUMG_C.ShopInventoryVisibility
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UShopAlternativeUMG_C::ShopInventoryVisibility(bool Visible)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ShopAlternativeUMG.ShopAlternativeUMG_C.ShopInventoryVisibility");

	UShopAlternativeUMG_C_ShopInventoryVisibility_Params params {};
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ShopAlternativeUMG.ShopAlternativeUMG_C.STokenMenuVisibility
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UShopAlternativeUMG_C::STokenMenuVisibility(bool Visible)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ShopAlternativeUMG.ShopAlternativeUMG_C.STokenMenuVisibility");

	UShopAlternativeUMG_C_STokenMenuVisibility_Params params {};
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ShopAlternativeUMG.ShopAlternativeUMG_C.DefaultMenuVisibility
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UShopAlternativeUMG_C::DefaultMenuVisibility(bool Visible)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ShopAlternativeUMG.ShopAlternativeUMG_C.DefaultMenuVisibility");

	UShopAlternativeUMG_C_DefaultMenuVisibility_Params params {};
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ShopAlternativeUMG.ShopAlternativeUMG_C.Switcher_Shop
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<EShopSwitcherFixed1_EShopSwitcherFixed1> SwitchTo                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UShopAlternativeUMG_C::Switcher_Shop(TEnumAsByte<EShopSwitcherFixed1_EShopSwitcherFixed1> SwitchTo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ShopAlternativeUMG.ShopAlternativeUMG_C.Switcher_Shop");

	UShopAlternativeUMG_C_Switcher_Shop_Params params {};
	params.SwitchTo = SwitchTo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ShopAlternativeUMG.ShopAlternativeUMG_C.PC
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class ALobbyPC2_C*                                 AsLobby_PC2                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UShopAlternativeUMG_C::PC(class ALobbyPC2_C** AsLobby_PC2)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ShopAlternativeUMG.ShopAlternativeUMG_C.PC");

	UShopAlternativeUMG_C_PC_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsLobby_PC2 != nullptr)
		*AsLobby_PC2 = params.AsLobby_PC2;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ShopAlternativeUMG.ShopAlternativeUMG_C.BndEvt__ShopListBox_Fixed1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		TEnumAsByte<EShopSwitcherFixed1_EShopSwitcherFixed1> SwitchTo                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UShopAlternativeUMG_C::BndEvt__ShopListBox_Fixed1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(TEnumAsByte<EShopSwitcherFixed1_EShopSwitcherFixed1> SwitchTo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ShopAlternativeUMG.ShopAlternativeUMG_C.BndEvt__ShopListBox_Fixed1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UShopAlternativeUMG_C_BndEvt__ShopListBox_Fixed1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
	params.SwitchTo = SwitchTo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ShopAlternativeUMG.ShopAlternativeUMG_C.BndEvt__Purchase_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UShopAlternativeUMG_C::BndEvt__Purchase_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ShopAlternativeUMG.ShopAlternativeUMG_C.BndEvt__Purchase_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UShopAlternativeUMG_C_BndEvt__Purchase_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ShopAlternativeUMG.ShopAlternativeUMG_C.BndEvt__MoreInfoButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UShopAlternativeUMG_C::BndEvt__MoreInfoButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ShopAlternativeUMG.ShopAlternativeUMG_C.BndEvt__MoreInfoButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UShopAlternativeUMG_C_BndEvt__MoreInfoButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ShopAlternativeUMG.ShopAlternativeUMG_C.BndEvt__ClaimButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UShopAlternativeUMG_C::BndEvt__ClaimButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ShopAlternativeUMG.ShopAlternativeUMG_C.BndEvt__ClaimButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UShopAlternativeUMG_C_BndEvt__ClaimButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ShopAlternativeUMG.ShopAlternativeUMG_C.BndEvt__RefundButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UShopAlternativeUMG_C::BndEvt__RefundButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ShopAlternativeUMG.ShopAlternativeUMG_C.BndEvt__RefundButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UShopAlternativeUMG_C_BndEvt__RefundButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ShopAlternativeUMG.ShopAlternativeUMG_C.ExecuteUbergraph_ShopAlternativeUMG
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UShopAlternativeUMG_C::ExecuteUbergraph_ShopAlternativeUMG(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ShopAlternativeUMG.ShopAlternativeUMG_C.ExecuteUbergraph_ShopAlternativeUMG");

	UShopAlternativeUMG_C_ExecuteUbergraph_ShopAlternativeUMG_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
