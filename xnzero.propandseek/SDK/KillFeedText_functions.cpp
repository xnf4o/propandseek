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
//		Name   -> Function KillFeedText.KillFeedText_C.InsertAnimation
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UKillFeedText_C::InsertAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillFeedText.KillFeedText_C.InsertAnimation");

	UKillFeedText_C_InsertAnimation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function KillFeedText.KillFeedText_C.ShowText
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UKillFeedText_C::ShowText()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillFeedText.KillFeedText_C.ShowText");

	UKillFeedText_C_ShowText_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function KillFeedText.KillFeedText_C.RemoveAnimation
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UKillFeedText_C::RemoveAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillFeedText.KillFeedText_C.RemoveAnimation");

	UKillFeedText_C_RemoveAnimation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function KillFeedText.KillFeedText_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UKillFeedText_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillFeedText.KillFeedText_C.Construct");

	UKillFeedText_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function KillFeedText.KillFeedText_C.ExecuteUbergraph_KillFeedText
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UKillFeedText_C::ExecuteUbergraph_KillFeedText(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillFeedText.KillFeedText_C.ExecuteUbergraph_KillFeedText");

	UKillFeedText_C_ExecuteUbergraph_KillFeedText_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
