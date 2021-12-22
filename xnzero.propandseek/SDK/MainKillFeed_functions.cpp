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
//		Name   -> Function MainKillFeed.MainKillFeed_C.VoiceLinesByKillCount
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Kills                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMainKillFeed_C::VoiceLinesByKillCount(int Kills)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainKillFeed.MainKillFeed_C.VoiceLinesByKillCount");

	UMainKillFeed_C_VoiceLinesByKillCount_Params params {};
	params.Kills = Kills;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function MainKillFeed.MainKillFeed_C.GetText_2
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UMainKillFeed_C::GetText_2()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainKillFeed.MainKillFeed_C.GetText_2");

	UMainKillFeed_C_GetText_2_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function MainKillFeed.MainKillFeed_C.GetText_1
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UMainKillFeed_C::GetText_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainKillFeed.MainKillFeed_C.GetText_1");

	UMainKillFeed_C_GetText_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function MainKillFeed.MainKillFeed_C.Update
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Kills                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMainKillFeed_C::Update(int Kills)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainKillFeed.MainKillFeed_C.Update");

	UMainKillFeed_C_Update_Params params {};
	params.Kills = Kills;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
