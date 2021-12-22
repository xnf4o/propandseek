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
//		Name   -> Function ShopItemObject_Ver2.ShopItemObject_Ver2_C.FClicked
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UShopItemObject_Ver2_C::FClicked()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ShopItemObject_Ver2.ShopItemObject_Ver2_C.FClicked");

	UShopItemObject_Ver2_C_FClicked_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ShopItemObject_Ver2.ShopItemObject_Ver2_C.OnShopItemButtonClicked
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UShopItemObject_Ver2_C::OnShopItemButtonClicked()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ShopItemObject_Ver2.ShopItemObject_Ver2_C.OnShopItemButtonClicked");

	UShopItemObject_Ver2_C_OnShopItemButtonClicked_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ShopItemObject_Ver2.ShopItemObject_Ver2_C.PC
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class ALobbyPC2_C*                                 AsLobby_PC2                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UShopItemObject_Ver2_C::PC(class ALobbyPC2_C** AsLobby_PC2)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ShopItemObject_Ver2.ShopItemObject_Ver2_C.PC");

	UShopItemObject_Ver2_C_PC_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsLobby_PC2 != nullptr)
		*AsLobby_PC2 = params.AsLobby_PC2;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ShopItemObject_Ver2.ShopItemObject_Ver2_C.Init2
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UShopItemObject_Ver2_C::Init2()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ShopItemObject_Ver2.ShopItemObject_Ver2_C.Init2");

	UShopItemObject_Ver2_C_Init2_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ShopItemObject_Ver2.ShopItemObject_Ver2_C.TimeConverter
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FString                                     _1CustomDateTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FDateTime                                   OfficialDateTime                                           (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
void UShopItemObject_Ver2_C::TimeConverter(const struct FString& _1CustomDateTime, struct FDateTime* OfficialDateTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ShopItemObject_Ver2.ShopItemObject_Ver2_C.TimeConverter");

	UShopItemObject_Ver2_C_TimeConverter_Params params {};
	params._1CustomDateTime = _1CustomDateTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OfficialDateTime != nullptr)
		*OfficialDateTime = params.OfficialDateTime;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ShopItemObject_Ver2.ShopItemObject_Ver2_C.Init
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UShopItemObject_Ver2_C::Init()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ShopItemObject_Ver2.ShopItemObject_Ver2_C.Init");

	UShopItemObject_Ver2_C_Init_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ShopItemObject_Ver2.ShopItemObject_Ver2_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UShopItemObject_Ver2_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ShopItemObject_Ver2.ShopItemObject_Ver2_C.Construct");

	UShopItemObject_Ver2_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ShopItemObject_Ver2.ShopItemObject_Ver2_C.BndEvt__ShopItemButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UShopItemObject_Ver2_C::BndEvt__ShopItemButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ShopItemObject_Ver2.ShopItemObject_Ver2_C.BndEvt__ShopItemButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UShopItemObject_Ver2_C_BndEvt__ShopItemButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ShopItemObject_Ver2.ShopItemObject_Ver2_C.BndEvt__ShopItemButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UShopItemObject_Ver2_C::BndEvt__ShopItemButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ShopItemObject_Ver2.ShopItemObject_Ver2_C.BndEvt__ShopItemButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UShopItemObject_Ver2_C_BndEvt__ShopItemButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ShopItemObject_Ver2.ShopItemObject_Ver2_C.BndEvt__ShopItemButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UShopItemObject_Ver2_C::BndEvt__ShopItemButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ShopItemObject_Ver2.ShopItemObject_Ver2_C.BndEvt__ShopItemButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UShopItemObject_Ver2_C_BndEvt__ShopItemButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ShopItemObject_Ver2.ShopItemObject_Ver2_C.OnClickedAuto
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UShopItemObject_Ver2_C::OnClickedAuto()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ShopItemObject_Ver2.ShopItemObject_Ver2_C.OnClickedAuto");

	UShopItemObject_Ver2_C_OnClickedAuto_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ShopItemObject_Ver2.ShopItemObject_Ver2_C.ExecuteUbergraph_ShopItemObject_Ver2
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UShopItemObject_Ver2_C::ExecuteUbergraph_ShopItemObject_Ver2(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ShopItemObject_Ver2.ShopItemObject_Ver2_C.ExecuteUbergraph_ShopItemObject_Ver2");

	UShopItemObject_Ver2_C_ExecuteUbergraph_ShopItemObject_Ver2_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
