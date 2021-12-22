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
//		Name   -> Function ShopPopUp_Fixed1.ShopPopUp_Fixed1_C.UpdateNotice
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     Header                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     Content                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UShopPopUp_Fixed1_C::UpdateNotice(const struct FString& Header, const struct FString& Content)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ShopPopUp_Fixed1.ShopPopUp_Fixed1_C.UpdateNotice");

	UShopPopUp_Fixed1_C_UpdateNotice_Params params {};
	params.Header = Header;
	params.Content = Content;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ShopPopUp_Fixed1.ShopPopUp_Fixed1_C.Refund
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UShopPopUp_Fixed1_C::Refund()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ShopPopUp_Fixed1.ShopPopUp_Fixed1_C.Refund");

	UShopPopUp_Fixed1_C_Refund_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ShopPopUp_Fixed1.ShopPopUp_Fixed1_C.claim
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UShopPopUp_Fixed1_C::claim()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ShopPopUp_Fixed1.ShopPopUp_Fixed1_C.claim");

	UShopPopUp_Fixed1_C_claim_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ShopPopUp_Fixed1.ShopPopUp_Fixed1_C.UpdatePopUpMenu
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FSShopInventory                             CurrentInfo                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		TEnumAsByte<EShopPopUp_EShopPopUp>                 WhichMenu_                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UShopPopUp_Fixed1_C::UpdatePopUpMenu(const struct FSShopInventory& CurrentInfo, TEnumAsByte<EShopPopUp_EShopPopUp> WhichMenu_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ShopPopUp_Fixed1.ShopPopUp_Fixed1_C.UpdatePopUpMenu");

	UShopPopUp_Fixed1_C_UpdatePopUpMenu_Params params {};
	params.CurrentInfo = CurrentInfo;
	params.WhichMenu_ = WhichMenu_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ShopPopUp_Fixed1.ShopPopUp_Fixed1_C.PC
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class ALobbyPC2_C*                                 AsLobby_PC1                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UShopPopUp_Fixed1_C::PC(class ALobbyPC2_C** AsLobby_PC1)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ShopPopUp_Fixed1.ShopPopUp_Fixed1_C.PC");

	UShopPopUp_Fixed1_C_PC_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsLobby_PC1 != nullptr)
		*AsLobby_PC1 = params.AsLobby_PC1;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ShopPopUp_Fixed1.ShopPopUp_Fixed1_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UShopPopUp_Fixed1_C::BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ShopPopUp_Fixed1.ShopPopUp_Fixed1_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UShopPopUp_Fixed1_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ShopPopUp_Fixed1.ShopPopUp_Fixed1_C.BndEvt__ClaimButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UShopPopUp_Fixed1_C::BndEvt__ClaimButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ShopPopUp_Fixed1.ShopPopUp_Fixed1_C.BndEvt__ClaimButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	UShopPopUp_Fixed1_C_BndEvt__ClaimButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ShopPopUp_Fixed1.ShopPopUp_Fixed1_C.BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UShopPopUp_Fixed1_C::BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ShopPopUp_Fixed1.ShopPopUp_Fixed1_C.BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");

	UShopPopUp_Fixed1_C_BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ShopPopUp_Fixed1.ShopPopUp_Fixed1_C.ExecuteUbergraph_ShopPopUp_Fixed1
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UShopPopUp_Fixed1_C::ExecuteUbergraph_ShopPopUp_Fixed1(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ShopPopUp_Fixed1.ShopPopUp_Fixed1_C.ExecuteUbergraph_ShopPopUp_Fixed1");

	UShopPopUp_Fixed1_C_ExecuteUbergraph_ShopPopUp_Fixed1_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
