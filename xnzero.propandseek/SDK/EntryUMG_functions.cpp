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
//		Name   -> Function EntryUMG.EntryUMG_C.UpdateRegionToJoin
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<RegionList_ERegionList>                region                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UEntryUMG_C::UpdateRegionToJoin(TEnumAsByte<RegionList_ERegionList> region)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EntryUMG.EntryUMG_C.UpdateRegionToJoin");

	UEntryUMG_C_UpdateRegionToJoin_Params params {};
	params.region = region;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function EntryUMG.EntryUMG_C.UpdateMaintenanceBox
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     MaintenanceLink                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		bool                                               Display_                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FString                                     Input_Date                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     Input_HrMin                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UEntryUMG_C::UpdateMaintenanceBox(const struct FString& MaintenanceLink, bool Display_, const struct FString& Input_Date, const struct FString& Input_HrMin)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EntryUMG.EntryUMG_C.UpdateMaintenanceBox");

	UEntryUMG_C_UpdateMaintenanceBox_Params params {};
	params.MaintenanceLink = MaintenanceLink;
	params.Display_ = Display_;
	params.Input_Date = Input_Date;
	params.Input_HrMin = Input_HrMin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function EntryUMG.EntryUMG_C.UpdateEntryUMG
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UEntryUMG_C::UpdateEntryUMG()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EntryUMG.EntryUMG_C.UpdateEntryUMG");

	UEntryUMG_C_UpdateEntryUMG_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function EntryUMG.EntryUMG_C.OnOptionsButtonPressed
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UEntryUMG_C::OnOptionsButtonPressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EntryUMG.EntryUMG_C.OnOptionsButtonPressed");

	UEntryUMG_C_OnOptionsButtonPressed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function EntryUMG.EntryUMG_C.PC
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class AEntryPC_C*                                  AsEntry_PC                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UEntryUMG_C::PC(class AEntryPC_C** AsEntry_PC)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EntryUMG.EntryUMG_C.PC");

	UEntryUMG_C_PC_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsEntry_PC != nullptr)
		*AsEntry_PC = params.AsEntry_PC;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function EntryUMG.EntryUMG_C.GI
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UGI2_C*                                      AsGI2                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UEntryUMG_C::GI(class UGI2_C** AsGI2)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EntryUMG.EntryUMG_C.GI");

	UEntryUMG_C_GI_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsGI2 != nullptr)
		*AsGI2 = params.AsGI2;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function EntryUMG.EntryUMG_C.Init
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UEntryUMG_C::Init()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EntryUMG.EntryUMG_C.Init");

	UEntryUMG_C_Init_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function EntryUMG.EntryUMG_C.OnPreferencesButtonPressed
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UEntryUMG_C::OnPreferencesButtonPressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EntryUMG.EntryUMG_C.OnPreferencesButtonPressed");

	UEntryUMG_C_OnPreferencesButtonPressed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function EntryUMG.EntryUMG_C.OnRetryButtonPressed
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UEntryUMG_C::OnRetryButtonPressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EntryUMG.EntryUMG_C.OnRetryButtonPressed");

	UEntryUMG_C_OnRetryButtonPressed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function EntryUMG.EntryUMG_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UEntryUMG_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EntryUMG.EntryUMG_C.Construct");

	UEntryUMG_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function EntryUMG.EntryUMG_C.BndEvt__Main_Options_Fix1_K2Node_ComponentBoundEvent_0_OnBackButtonClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UEntryUMG_C::BndEvt__Main_Options_Fix1_K2Node_ComponentBoundEvent_0_OnBackButtonClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EntryUMG.EntryUMG_C.BndEvt__Main_Options_Fix1_K2Node_ComponentBoundEvent_0_OnBackButtonClicked__DelegateSignature");

	UEntryUMG_C_BndEvt__Main_Options_Fix1_K2Node_ComponentBoundEvent_0_OnBackButtonClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function EntryUMG.EntryUMG_C.BndEvt__PreferenceHintButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UEntryUMG_C::BndEvt__PreferenceHintButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EntryUMG.EntryUMG_C.BndEvt__PreferenceHintButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UEntryUMG_C_BndEvt__PreferenceHintButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function EntryUMG.EntryUMG_C.BndEvt__PreferenceHintButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UEntryUMG_C::BndEvt__PreferenceHintButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EntryUMG.EntryUMG_C.BndEvt__PreferenceHintButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UEntryUMG_C_BndEvt__PreferenceHintButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function EntryUMG.EntryUMG_C.BndEvt__PreferenceHintButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UEntryUMG_C::BndEvt__PreferenceHintButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EntryUMG.EntryUMG_C.BndEvt__PreferenceHintButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UEntryUMG_C_BndEvt__PreferenceHintButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function EntryUMG.EntryUMG_C.BndEvt__MaintenanceNoticeButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UEntryUMG_C::BndEvt__MaintenanceNoticeButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EntryUMG.EntryUMG_C.BndEvt__MaintenanceNoticeButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature");

	UEntryUMG_C_BndEvt__MaintenanceNoticeButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function EntryUMG.EntryUMG_C.BndEvt__FAQButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UEntryUMG_C::BndEvt__FAQButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EntryUMG.EntryUMG_C.BndEvt__FAQButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");

	UEntryUMG_C_BndEvt__FAQButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function EntryUMG.EntryUMG_C.BndEvt__FAQButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UEntryUMG_C::BndEvt__FAQButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EntryUMG.EntryUMG_C.BndEvt__FAQButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature");

	UEntryUMG_C_BndEvt__FAQButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function EntryUMG.EntryUMG_C.BndEvt__FAQButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UEntryUMG_C::BndEvt__FAQButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EntryUMG.EntryUMG_C.BndEvt__FAQButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature");

	UEntryUMG_C_BndEvt__FAQButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function EntryUMG.EntryUMG_C.BndEvt__Main_Options_Fix1_K2Node_ComponentBoundEvent_8_OnRegionModified__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UEntryUMG_C::BndEvt__Main_Options_Fix1_K2Node_ComponentBoundEvent_8_OnRegionModified__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EntryUMG.EntryUMG_C.BndEvt__Main_Options_Fix1_K2Node_ComponentBoundEvent_8_OnRegionModified__DelegateSignature");

	UEntryUMG_C_BndEvt__Main_Options_Fix1_K2Node_ComponentBoundEvent_8_OnRegionModified__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function EntryUMG.EntryUMG_C.ExecuteUbergraph_EntryUMG
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UEntryUMG_C::ExecuteUbergraph_EntryUMG(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EntryUMG.EntryUMG_C.ExecuteUbergraph_EntryUMG");

	UEntryUMG_C_ExecuteUbergraph_EntryUMG_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
