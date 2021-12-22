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
//		Name   -> Function MaintenanceNoticeBox.MaintenanceNoticeBox_C.Countdown
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UMaintenanceNoticeBox_C::Countdown()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MaintenanceNoticeBox.MaintenanceNoticeBox_C.Countdown");

	UMaintenanceNoticeBox_C_Countdown_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function MaintenanceNoticeBox.MaintenanceNoticeBox_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UMaintenanceNoticeBox_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MaintenanceNoticeBox.MaintenanceNoticeBox_C.Construct");

	UMaintenanceNoticeBox_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function MaintenanceNoticeBox.MaintenanceNoticeBox_C.EventCountDown
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UMaintenanceNoticeBox_C::EventCountDown()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MaintenanceNoticeBox.MaintenanceNoticeBox_C.EventCountDown");

	UMaintenanceNoticeBox_C_EventCountDown_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function MaintenanceNoticeBox.MaintenanceNoticeBox_C.ExecuteUbergraph_MaintenanceNoticeBox
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMaintenanceNoticeBox_C::ExecuteUbergraph_MaintenanceNoticeBox(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MaintenanceNoticeBox.MaintenanceNoticeBox_C.ExecuteUbergraph_MaintenanceNoticeBox");

	UMaintenanceNoticeBox_C_ExecuteUbergraph_MaintenanceNoticeBox_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
