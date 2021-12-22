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
//		Name   -> Function LB.LB_C.AvailableGameSessions
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ALB_C::AvailableGameSessions()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LB.LB_C.AvailableGameSessions");

	ALB_C_AvailableGameSessions_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LB.LB_C.SearchPlayerSessionID_Matchmaking
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<struct FMatchedPlayerSession>               Array                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
//		bool                                               Success_                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FString                                     playerSessionId                                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void ALB_C::SearchPlayerSessionID_Matchmaking(TArray<struct FMatchedPlayerSession>* Array, bool* Success_, struct FString* playerSessionId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LB.LB_C.SearchPlayerSessionID_Matchmaking");

	ALB_C_SearchPlayerSessionID_Matchmaking_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
	if (Success_ != nullptr)
		*Success_ = params.Success_;
	if (playerSessionId != nullptr)
		*playerSessionId = params.playerSessionId;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LB.LB_C.SearchGameSessions
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<struct FAWSGameSession>                     AwsGameSessions                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
//		struct FString                                     gameSessionId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		bool                                               Success_                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FAWSGameSession                             GameSessionInfo                                            (Parm, OutParm)
void ALB_C::SearchGameSessions(TArray<struct FAWSGameSession>* AwsGameSessions, const struct FString& gameSessionId, bool* Success_, struct FAWSGameSession* GameSessionInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LB.LB_C.SearchGameSessions");

	ALB_C_SearchGameSessions_Params params {};
	params.gameSessionId = gameSessionId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AwsGameSessions != nullptr)
		*AwsGameSessions = params.AwsGameSessions;
	if (Success_ != nullptr)
		*Success_ = params.Success_;
	if (GameSessionInfo != nullptr)
		*GameSessionInfo = params.GameSessionInfo;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LB.LB_C.PC
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class ALobbyPC2_C*                                 AsLobby_PC1                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALB_C::PC(class ALobbyPC2_C** AsLobby_PC1)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LB.LB_C.PC");

	ALB_C_PC_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsLobby_PC1 != nullptr)
		*AsLobby_PC1 = params.AsLobby_PC1;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LB.LB_C.GI
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UGI2_C*                                      AsGI2                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALB_C::GI(class UGI2_C** AsGI2)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LB.LB_C.GI");

	ALB_C_GI_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsGI2 != nullptr)
		*AsGI2 = params.AsGI2;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LB.LB_C.CustomEvent_2
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ALB_C::CustomEvent_2()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LB.LB_C.CustomEvent_2");

	ALB_C_CustomEvent_2_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LB.LB_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ALB_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LB.LB_C.ReceiveBeginPlay");

	ALB_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LB.LB_C.CreateCustomMatchEvent
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ALB_C::CreateCustomMatchEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LB.LB_C.CreateCustomMatchEvent");

	ALB_C_CreateCustomMatchEvent_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LB.LB_C.JoinCompetitive
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ALB_C::JoinCompetitive()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LB.LB_C.JoinCompetitive");

	ALB_C_JoinCompetitive_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LB.LB_C.JoinQuick
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ALB_C::JoinQuick()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LB.LB_C.JoinQuick");

	ALB_C_JoinQuick_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LB.LB_C.JoinQuickGame
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ALB_C::JoinQuickGame()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LB.LB_C.JoinQuickGame");

	ALB_C_JoinQuickGame_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LB.LB_C.JoinCompetitiveGame
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ALB_C::JoinCompetitiveGame()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LB.LB_C.JoinCompetitiveGame");

	ALB_C_JoinCompetitiveGame_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LB.LB_C.LoopChecking
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ALB_C::LoopChecking()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LB.LB_C.LoopChecking");

	ALB_C_LoopChecking_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LB.LB_C.LoopCheckingQuickMatch
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ALB_C::LoopCheckingQuickMatch()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LB.LB_C.LoopCheckingQuickMatch");

	ALB_C_LoopCheckingQuickMatch_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LB.LB_C.CreateCustomMatch
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ALB_C::CreateCustomMatch()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LB.LB_C.CreateCustomMatch");

	ALB_C_CreateCustomMatch_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LB.LB_C.SearchCustomMatchEvent
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ALB_C::SearchCustomMatchEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LB.LB_C.SearchCustomMatchEvent");

	ALB_C_SearchCustomMatchEvent_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LB.LB_C.JoinSearchedCustomMatchEvent
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ALB_C::JoinSearchedCustomMatchEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LB.LB_C.JoinSearchedCustomMatchEvent");

	ALB_C_JoinSearchedCustomMatchEvent_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LB.LB_C.StopMatchmaking
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ALB_C::StopMatchmaking()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LB.LB_C.StopMatchmaking");

	ALB_C_StopMatchmaking_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LB.LB_C.CancelMatchmakingEvent
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ALB_C::CancelMatchmakingEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LB.LB_C.CancelMatchmakingEvent");

	ALB_C_CancelMatchmakingEvent_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LB.LB_C.ResetCreateCustomMatch
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ALB_C::ResetCreateCustomMatch()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LB.LB_C.ResetCreateCustomMatch");

	ALB_C_ResetCreateCustomMatch_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LB.LB_C.EventJoinCustom
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ALB_C::EventJoinCustom()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LB.LB_C.EventJoinCustom");

	ALB_C_EventJoinCustom_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LB.LB_C.CreatePlayerSession
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ALB_C::CreatePlayerSession()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LB.LB_C.CreatePlayerSession");

	ALB_C_CreatePlayerSession_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LB.LB_C.ExecuteUbergraph_LB
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALB_C::ExecuteUbergraph_LB(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LB.LB_C.ExecuteUbergraph_LB");

	ALB_C_ExecuteUbergraph_LB_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
