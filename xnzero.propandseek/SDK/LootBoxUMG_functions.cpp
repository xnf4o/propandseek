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
//		Name   -> Function LootBoxUMG.LootBoxUMG_C.UpdateLootboxAmountDisplay
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                LootboxAmount_Set_                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULootBoxUMG_C::UpdateLootboxAmountDisplay(int LootboxAmount_Set_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootBoxUMG.LootBoxUMG_C.UpdateLootboxAmountDisplay");

	ULootBoxUMG_C_UpdateLootboxAmountDisplay_Params params {};
	params.LootboxAmount_Set_ = LootboxAmount_Set_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LootBoxUMG.LootBoxUMG_C.PC
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class ALobbyPC2_C*                                 AsLobby_PC2                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULootBoxUMG_C::PC(class ALobbyPC2_C** AsLobby_PC2)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootBoxUMG.LootBoxUMG_C.PC");

	ULootBoxUMG_C_PC_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsLobby_PC2 != nullptr)
		*AsLobby_PC2 = params.AsLobby_PC2;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LootBoxUMG.LootBoxUMG_C.BndEvt__OpenLootboxButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void ULootBoxUMG_C::BndEvt__OpenLootboxButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootBoxUMG.LootBoxUMG_C.BndEvt__OpenLootboxButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	ULootBoxUMG_C_BndEvt__OpenLootboxButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LootBoxUMG.LootBoxUMG_C.StartOpeningLootbox
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ULootBoxUMG_C::StartOpeningLootbox()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootBoxUMG.LootBoxUMG_C.StartOpeningLootbox");

	ULootBoxUMG_C_StartOpeningLootbox_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LootBoxUMG.LootBoxUMG_C.BndEvt__DropRateButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void ULootBoxUMG_C::BndEvt__DropRateButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootBoxUMG.LootBoxUMG_C.BndEvt__DropRateButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	ULootBoxUMG_C_BndEvt__DropRateButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LootBoxUMG.LootBoxUMG_C.ExecuteUbergraph_LootBoxUMG
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULootBoxUMG_C::ExecuteUbergraph_LootBoxUMG(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootBoxUMG.LootBoxUMG_C.ExecuteUbergraph_LootBoxUMG");

	ULootBoxUMG_C_ExecuteUbergraph_LootBoxUMG_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
