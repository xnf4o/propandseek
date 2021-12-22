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
//		Name   -> Function Noti_BurningTime.Noti_BurningTime_C.OnActivate
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UNoti_BurningTime_C::OnActivate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Noti_BurningTime.Noti_BurningTime_C.OnActivate");

	UNoti_BurningTime_C_OnActivate_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Noti_BurningTime.Noti_BurningTime_C.ExecuteUbergraph_Noti_BurningTime
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UNoti_BurningTime_C::ExecuteUbergraph_Noti_BurningTime(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Noti_BurningTime.Noti_BurningTime_C.ExecuteUbergraph_Noti_BurningTime");

	UNoti_BurningTime_C_ExecuteUbergraph_Noti_BurningTime_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
