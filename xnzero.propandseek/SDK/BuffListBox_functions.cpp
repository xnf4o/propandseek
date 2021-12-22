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
//		Name   -> Function BuffListBox.BuffListBox_C.UpdateOwnership_InGame
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FSCashItemsGameInfo                         CashInfo                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBuffListBox_C::UpdateOwnership_InGame(const struct FSCashItemsGameInfo& CashInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BuffListBox.BuffListBox_C.UpdateOwnership_InGame");

	UBuffListBox_C_UpdateOwnership_InGame_Params params {};
	params.CashInfo = CashInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function BuffListBox.BuffListBox_C.UpdateOwnership
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBuffListBox_C::UpdateOwnership()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BuffListBox.BuffListBox_C.UpdateOwnership");

	UBuffListBox_C_UpdateOwnership_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function BuffListBox.BuffListBox_C.GI
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UGI2_C*                                      AsGI2                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBuffListBox_C::GI(class UGI2_C** AsGI2)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BuffListBox.BuffListBox_C.GI");

	UBuffListBox_C_GI_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsGI2 != nullptr)
		*AsGI2 = params.AsGI2;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function BuffListBox.BuffListBox_C.BndEvt__LicenseButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBuffListBox_C::BndEvt__LicenseButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BuffListBox.BuffListBox_C.BndEvt__LicenseButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UBuffListBox_C_BndEvt__LicenseButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function BuffListBox.BuffListBox_C.BndEvt__LicenseButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBuffListBox_C::BndEvt__LicenseButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BuffListBox.BuffListBox_C.BndEvt__LicenseButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UBuffListBox_C_BndEvt__LicenseButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function BuffListBox.BuffListBox_C.BndEvt__2ndSlotButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBuffListBox_C::BndEvt__2ndSlotButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BuffListBox.BuffListBox_C.BndEvt__2ndSlotButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UBuffListBox_C_BndEvt__2ndSlotButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function BuffListBox.BuffListBox_C.BndEvt__2ndSlotButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBuffListBox_C::BndEvt__2ndSlotButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BuffListBox.BuffListBox_C.BndEvt__2ndSlotButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	UBuffListBox_C_BndEvt__2ndSlotButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function BuffListBox.BuffListBox_C.BndEvt__GoldPassLightButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBuffListBox_C::BndEvt__GoldPassLightButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BuffListBox.BuffListBox_C.BndEvt__GoldPassLightButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");

	UBuffListBox_C_BndEvt__GoldPassLightButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function BuffListBox.BuffListBox_C.BndEvt__GoldPassLightButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBuffListBox_C::BndEvt__GoldPassLightButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BuffListBox.BuffListBox_C.BndEvt__GoldPassLightButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");

	UBuffListBox_C_BndEvt__GoldPassLightButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function BuffListBox.BuffListBox_C.BndEvt__GoldPassStandard_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBuffListBox_C::BndEvt__GoldPassStandard_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BuffListBox.BuffListBox_C.BndEvt__GoldPassStandard_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature");

	UBuffListBox_C_BndEvt__GoldPassStandard_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function BuffListBox.BuffListBox_C.BndEvt__GoldPassStandard_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBuffListBox_C::BndEvt__GoldPassStandard_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BuffListBox.BuffListBox_C.BndEvt__GoldPassStandard_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature");

	UBuffListBox_C_BndEvt__GoldPassStandard_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function BuffListBox.BuffListBox_C.BndEvt__GoldPassDeluxe_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBuffListBox_C::BndEvt__GoldPassDeluxe_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BuffListBox.BuffListBox_C.BndEvt__GoldPassDeluxe_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature");

	UBuffListBox_C_BndEvt__GoldPassDeluxe_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function BuffListBox.BuffListBox_C.BndEvt__GoldPassDeluxe_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBuffListBox_C::BndEvt__GoldPassDeluxe_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BuffListBox.BuffListBox_C.BndEvt__GoldPassDeluxe_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature");

	UBuffListBox_C_BndEvt__GoldPassDeluxe_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function BuffListBox.BuffListBox_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBuffListBox_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BuffListBox.BuffListBox_C.Construct");

	UBuffListBox_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function BuffListBox.BuffListBox_C.BndEvt__LicenseButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBuffListBox_C::BndEvt__LicenseButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BuffListBox.BuffListBox_C.BndEvt__LicenseButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature");

	UBuffListBox_C_BndEvt__LicenseButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function BuffListBox.BuffListBox_C.BndEvt__2ndSlotButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBuffListBox_C::BndEvt__2ndSlotButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BuffListBox.BuffListBox_C.BndEvt__2ndSlotButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature");

	UBuffListBox_C_BndEvt__2ndSlotButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function BuffListBox.BuffListBox_C.BndEvt__GoldPassLightButton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBuffListBox_C::BndEvt__GoldPassLightButton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BuffListBox.BuffListBox_C.BndEvt__GoldPassLightButton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature");

	UBuffListBox_C_BndEvt__GoldPassLightButton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function BuffListBox.BuffListBox_C.BndEvt__GoldPassStandard_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBuffListBox_C::BndEvt__GoldPassStandard_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BuffListBox.BuffListBox_C.BndEvt__GoldPassStandard_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature");

	UBuffListBox_C_BndEvt__GoldPassStandard_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function BuffListBox.BuffListBox_C.BndEvt__GoldPassDeluxe_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBuffListBox_C::BndEvt__GoldPassDeluxe_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BuffListBox.BuffListBox_C.BndEvt__GoldPassDeluxe_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature");

	UBuffListBox_C_BndEvt__GoldPassDeluxe_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function BuffListBox.BuffListBox_C.BndEvt__EarlyAccessLicenseButton_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBuffListBox_C::BndEvt__EarlyAccessLicenseButton_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BuffListBox.BuffListBox_C.BndEvt__EarlyAccessLicenseButton_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature");

	UBuffListBox_C_BndEvt__EarlyAccessLicenseButton_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function BuffListBox.BuffListBox_C.BndEvt__EarlyAccessLicenseButton_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBuffListBox_C::BndEvt__EarlyAccessLicenseButton_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BuffListBox.BuffListBox_C.BndEvt__EarlyAccessLicenseButton_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature");

	UBuffListBox_C_BndEvt__EarlyAccessLicenseButton_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function BuffListBox.BuffListBox_C.BndEvt__EarlyAccessLicenseButton_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBuffListBox_C::BndEvt__EarlyAccessLicenseButton_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BuffListBox.BuffListBox_C.BndEvt__EarlyAccessLicenseButton_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature");

	UBuffListBox_C_BndEvt__EarlyAccessLicenseButton_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function BuffListBox.BuffListBox_C.ExecuteUbergraph_BuffListBox
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBuffListBox_C::ExecuteUbergraph_BuffListBox(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BuffListBox.BuffListBox_C.ExecuteUbergraph_BuffListBox");

	UBuffListBox_C_ExecuteUbergraph_BuffListBox_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
