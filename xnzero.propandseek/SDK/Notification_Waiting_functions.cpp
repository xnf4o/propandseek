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
//		Name   -> Function Notification_Waiting.Notification_Waiting_C.PC
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class AFPS_PC_C*                                   AsFPS_PC                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UNotification_Waiting_C::PC(class AFPS_PC_C** AsFPS_PC)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Notification_Waiting.Notification_Waiting_C.PC");

	UNotification_Waiting_C_PC_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsFPS_PC != nullptr)
		*AsFPS_PC = params.AsFPS_PC;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Notification_Waiting.Notification_Waiting_C.VoiceBySec
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Sec                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UNotification_Waiting_C::VoiceBySec(int Sec)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Notification_Waiting.Notification_Waiting_C.VoiceBySec");

	UNotification_Waiting_C_VoiceBySec_Params params {};
	params.Sec = Sec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
