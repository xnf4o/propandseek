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
//		Name   -> Function PropModeNoti.PropModeNoti_C.UpdateNoti
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       Message                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
void UPropModeNoti_C::UpdateNoti(const struct FText& Message)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PropModeNoti.PropModeNoti_C.UpdateNoti");

	UPropModeNoti_C_UpdateNoti_Params params {};
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function PropModeNoti.PropModeNoti_C.ExecuteUbergraph_PropModeNoti
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPropModeNoti_C::ExecuteUbergraph_PropModeNoti(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PropModeNoti.PropModeNoti_C.ExecuteUbergraph_PropModeNoti");

	UPropModeNoti_C_ExecuteUbergraph_PropModeNoti_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
