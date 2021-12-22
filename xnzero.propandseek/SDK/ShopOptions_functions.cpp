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
//		Name   -> Function ShopOptions.ShopOptions_C.UpdateAllowbox
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Allow_                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UShopOptions_C::UpdateAllowbox(bool Allow_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ShopOptions.ShopOptions_C.UpdateAllowbox");

	UShopOptions_C_UpdateAllowbox_Params params {};
	params.Allow_ = Allow_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ShopOptions.ShopOptions_C.ToggleLoading
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Loading_                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UShopOptions_C::ToggleLoading(bool Loading_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ShopOptions.ShopOptions_C.ToggleLoading");

	UShopOptions_C_ToggleLoading_Params params {};
	params.Loading_ = Loading_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ShopOptions.ShopOptions_C.GI
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UGI2_C*                                      AsGI2                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UShopOptions_C::GI(class UGI2_C** AsGI2)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ShopOptions.ShopOptions_C.GI");

	UShopOptions_C_GI_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsGI2 != nullptr)
		*AsGI2 = params.AsGI2;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ShopOptions.ShopOptions_C.UpdatePriceInfo
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<EShopItemCostType_EShopItemCostType>   PriceType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                ItemPrice                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Days                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UShopOptions_C::UpdatePriceInfo(TEnumAsByte<EShopItemCostType_EShopItemCostType> PriceType, int ItemPrice, int Days)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ShopOptions.ShopOptions_C.UpdatePriceInfo");

	UShopOptions_C_UpdatePriceInfo_Params params {};
	params.PriceType = PriceType;
	params.ItemPrice = ItemPrice;
	params.Days = Days;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ShopOptions.ShopOptions_C.WhichCostType?
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<EShopItemCostType_EShopItemCostType>   PriceType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UShopOptions_C::WhichCostType_(TEnumAsByte<EShopItemCostType_EShopItemCostType> PriceType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ShopOptions.ShopOptions_C.WhichCostType?");

	UShopOptions_C_WhichCostType__Params params {};
	params.PriceType = PriceType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ShopOptions.ShopOptions_C.TimeConverter
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FString                                     CustomDateTime                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FDateTime                                   OfficialDateTime                                           (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
void UShopOptions_C::TimeConverter(const struct FString& CustomDateTime, struct FDateTime* OfficialDateTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ShopOptions.ShopOptions_C.TimeConverter");

	UShopOptions_C_TimeConverter_Params params {};
	params.CustomDateTime = CustomDateTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OfficialDateTime != nullptr)
		*OfficialDateTime = params.OfficialDateTime;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ShopOptions.ShopOptions_C.WhichDisplayPeriod?
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<struct FSShopDateTime>                      DisplayPeriod                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
//		bool                                               Found_                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		int                                                Index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UShopOptions_C::WhichDisplayPeriod_(TArray<struct FSShopDateTime>* DisplayPeriod, bool* Found_, int* Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ShopOptions.ShopOptions_C.WhichDisplayPeriod?");

	UShopOptions_C_WhichDisplayPeriod__Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DisplayPeriod != nullptr)
		*DisplayPeriod = params.DisplayPeriod;
	if (Found_ != nullptr)
		*Found_ = params.Found_;
	if (Index != nullptr)
		*Index = params.Index;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ShopOptions.ShopOptions_C.OnCancelButtonPressed
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UShopOptions_C::OnCancelButtonPressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ShopOptions.ShopOptions_C.OnCancelButtonPressed");

	UShopOptions_C_OnCancelButtonPressed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ShopOptions.ShopOptions_C.PC
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class ALobbyPC2_C*                                 AsLobby_PC2                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UShopOptions_C::PC(class ALobbyPC2_C** AsLobby_PC2)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ShopOptions.ShopOptions_C.PC");

	UShopOptions_C_PC_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsLobby_PC2 != nullptr)
		*AsLobby_PC2 = params.AsLobby_PC2;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ShopOptions.ShopOptions_C.UpdateItemOptionList
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FSShopItems                                 Info                                                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UShopOptions_C::UpdateItemOptionList(const struct FSShopItems& Info)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ShopOptions.ShopOptions_C.UpdateItemOptionList");

	UShopOptions_C_UpdateItemOptionList_Params params {};
	params.Info = Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ShopOptions.ShopOptions_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UShopOptions_C::BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ShopOptions.ShopOptions_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UShopOptions_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ShopOptions.ShopOptions_C.BndEvt__Purchase_Button_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UShopOptions_C::BndEvt__Purchase_Button_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ShopOptions.ShopOptions_C.BndEvt__Purchase_Button_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UShopOptions_C_BndEvt__Purchase_Button_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ShopOptions.ShopOptions_C.BndEvt__VisitButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UShopOptions_C::BndEvt__VisitButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ShopOptions.ShopOptions_C.BndEvt__VisitButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	UShopOptions_C_BndEvt__VisitButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ShopOptions.ShopOptions_C.BndEvt__EffectButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UShopOptions_C::BndEvt__EffectButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ShopOptions.ShopOptions_C.BndEvt__EffectButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	UShopOptions_C_BndEvt__EffectButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ShopOptions.ShopOptions_C.BndEvt__EffectButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UShopOptions_C::BndEvt__EffectButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ShopOptions.ShopOptions_C.BndEvt__EffectButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");

	UShopOptions_C_BndEvt__EffectButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ShopOptions.ShopOptions_C.BndEvt__GoToStokensButton2_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UShopOptions_C::BndEvt__GoToStokensButton2_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ShopOptions.ShopOptions_C.BndEvt__GoToStokensButton2_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature");

	UShopOptions_C_BndEvt__GoToStokensButton2_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ShopOptions.ShopOptions_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UShopOptions_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ShopOptions.ShopOptions_C.Construct");

	UShopOptions_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ShopOptions.ShopOptions_C.ExecuteUbergraph_ShopOptions
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UShopOptions_C::ExecuteUbergraph_ShopOptions(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ShopOptions.ShopOptions_C.ExecuteUbergraph_ShopOptions");

	UShopOptions_C_ExecuteUbergraph_ShopOptions_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
