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
//		Name   -> Function Notification_WinLose.Notification_WinLose_C.UpdateYouWinLoseNoti
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       YouWinLose                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
void UNotification_WinLose_C::UpdateYouWinLoseNoti(const struct FText& YouWinLose)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Notification_WinLose.Notification_WinLose_C.UpdateYouWinLoseNoti");

	UNotification_WinLose_C_UpdateYouWinLoseNoti_Params params {};
	params.YouWinLose = YouWinLose;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Notification_WinLose.Notification_WinLose_C.UpdatePropHunterWinLoseNoti
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       PropHunterWinLose                                          (BlueprintVisible, BlueprintReadOnly, Parm)
void UNotification_WinLose_C::UpdatePropHunterWinLoseNoti(const struct FText& PropHunterWinLose)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Notification_WinLose.Notification_WinLose_C.UpdatePropHunterWinLoseNoti");

	UNotification_WinLose_C_UpdatePropHunterWinLoseNoti_Params params {};
	params.PropHunterWinLose = PropHunterWinLose;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
