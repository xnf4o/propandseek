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
//		Name   -> Function KillFeed.KillFeed_C.Update
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     Killed                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		bool                                               IsKillerHunter_                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FString                                     Destroyed                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		bool                                               IsDestroyedHunter_                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UKillFeed_C::Update(const struct FString& Killed, bool IsKillerHunter_, const struct FString& Destroyed, bool IsDestroyedHunter_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillFeed.KillFeed_C.Update");

	UKillFeed_C_Update_Params params {};
	params.Killed = Killed;
	params.IsKillerHunter_ = IsKillerHunter_;
	params.Destroyed = Destroyed;
	params.IsDestroyedHunter_ = IsDestroyedHunter_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function KillFeed.KillFeed_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UKillFeed_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillFeed.KillFeed_C.Construct");

	UKillFeed_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function KillFeed.KillFeed_C.KillFeedRemoval
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UKillFeed_C::KillFeedRemoval()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillFeed.KillFeed_C.KillFeedRemoval");

	UKillFeed_C_KillFeedRemoval_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function KillFeed.KillFeed_C.ExecuteUbergraph_KillFeed
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UKillFeed_C::ExecuteUbergraph_KillFeed(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillFeed.KillFeed_C.ExecuteUbergraph_KillFeed");

	UKillFeed_C_ExecuteUbergraph_KillFeed_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
