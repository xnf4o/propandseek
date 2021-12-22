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
//		Name   -> Function CurrencyBox.CurrencyBox_C.UpdateCurrencies
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                GoldCoin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Stoken                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCurrencyBox_C::UpdateCurrencies(int GoldCoin, int Stoken)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CurrencyBox.CurrencyBox_C.UpdateCurrencies");

	UCurrencyBox_C_UpdateCurrencies_Params params {};
	params.GoldCoin = GoldCoin;
	params.Stoken = Stoken;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function CurrencyBox.CurrencyBox_C.BndEvt__StokenSection_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UCurrencyBox_C::BndEvt__StokenSection_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CurrencyBox.CurrencyBox_C.BndEvt__StokenSection_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UCurrencyBox_C_BndEvt__StokenSection_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function CurrencyBox.CurrencyBox_C.BndEvt__StokenSection_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UCurrencyBox_C::BndEvt__StokenSection_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CurrencyBox.CurrencyBox_C.BndEvt__StokenSection_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UCurrencyBox_C_BndEvt__StokenSection_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function CurrencyBox.CurrencyBox_C.BndEvt__GoldCoinSection_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UCurrencyBox_C::BndEvt__GoldCoinSection_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CurrencyBox.CurrencyBox_C.BndEvt__GoldCoinSection_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UCurrencyBox_C_BndEvt__GoldCoinSection_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function CurrencyBox.CurrencyBox_C.BndEvt__GoldCoinSection_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UCurrencyBox_C::BndEvt__GoldCoinSection_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CurrencyBox.CurrencyBox_C.BndEvt__GoldCoinSection_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	UCurrencyBox_C_BndEvt__GoldCoinSection_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function CurrencyBox.CurrencyBox_C.ExecuteUbergraph_CurrencyBox
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCurrencyBox_C::ExecuteUbergraph_CurrencyBox(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CurrencyBox.CurrencyBox_C.ExecuteUbergraph_CurrencyBox");

	UCurrencyBox_C_ExecuteUbergraph_CurrencyBox_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
