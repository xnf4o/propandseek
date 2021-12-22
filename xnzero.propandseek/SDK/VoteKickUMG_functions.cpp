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
//		Name   -> Function VoteKickUMG.VoteKickUMG_C.PC
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class AFPS_PC_C*                                   AsFPS_PC                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UVoteKickUMG_C::PC(class AFPS_PC_C** AsFPS_PC)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VoteKickUMG.VoteKickUMG_C.PC");

	UVoteKickUMG_C_PC_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsFPS_PC != nullptr)
		*AsFPS_PC = params.AsFPS_PC;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function VoteKickUMG.VoteKickUMG_C.InitVoteKick
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                TimeGiven                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FString                                     userName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     SteamID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UVoteKickUMG_C::InitVoteKick(int TimeGiven, const struct FString& userName, const struct FString& SteamID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VoteKickUMG.VoteKickUMG_C.InitVoteKick");

	UVoteKickUMG_C_InitVoteKick_Params params {};
	params.TimeGiven = TimeGiven;
	params.userName = userName;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function VoteKickUMG.VoteKickUMG_C.Countdown
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UVoteKickUMG_C::Countdown()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VoteKickUMG.VoteKickUMG_C.Countdown");

	UVoteKickUMG_C_Countdown_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function VoteKickUMG.VoteKickUMG_C.Reset
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UVoteKickUMG_C::Reset()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VoteKickUMG.VoteKickUMG_C.Reset");

	UVoteKickUMG_C_Reset_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function VoteKickUMG.VoteKickUMG_C.ExecuteUbergraph_VoteKickUMG
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UVoteKickUMG_C::ExecuteUbergraph_VoteKickUMG(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VoteKickUMG.VoteKickUMG_C.ExecuteUbergraph_VoteKickUMG");

	UVoteKickUMG_C_ExecuteUbergraph_VoteKickUMG_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
