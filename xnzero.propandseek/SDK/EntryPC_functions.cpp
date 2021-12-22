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
//		Name   -> Function EntryPC.EntryPC_C.CheckBanStatusDebugging
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AEntryPC_C::CheckBanStatusDebugging()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EntryPC.EntryPC_C.CheckBanStatusDebugging");

	AEntryPC_C_CheckBanStatusDebugging_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function EntryPC.EntryPC_C.CheckBanStatus
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Found_                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FDateTime                                   BanDatetime                                                (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<Ereport_Ereport>                       Reason                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AEntryPC_C::CheckBanStatus(bool* Found_, struct FDateTime* BanDatetime, TEnumAsByte<Ereport_Ereport>* Reason)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EntryPC.EntryPC_C.CheckBanStatus");

	AEntryPC_C_CheckBanStatus_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Found_ != nullptr)
		*Found_ = params.Found_;
	if (BanDatetime != nullptr)
		*BanDatetime = params.BanDatetime;
	if (Reason != nullptr)
		*Reason = params.Reason;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function EntryPC.EntryPC_C.TerminateTimer
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void AEntryPC_C::TerminateTimer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EntryPC.EntryPC_C.TerminateTimer");

	AEntryPC_C_TerminateTimer_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function EntryPC.EntryPC_C.GM
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class AEntryGM_C*                                  AsEntry_GM                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AEntryPC_C::GM(class AEntryGM_C** AsEntry_GM)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EntryPC.EntryPC_C.GM");

	AEntryPC_C_GM_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsEntry_GM != nullptr)
		*AsEntry_GM = params.AsEntry_GM;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function EntryPC.EntryPC_C.InitWidget
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void AEntryPC_C::InitWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EntryPC.EntryPC_C.InitWidget");

	AEntryPC_C_InitWidget_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function EntryPC.EntryPC_C.GI
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UGI2_C*                                      AsGI2                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AEntryPC_C::GI(class UGI2_C** AsGI2)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EntryPC.EntryPC_C.GI");

	AEntryPC_C_GI_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsGI2 != nullptr)
		*AsGI2 = params.AsGI2;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function EntryPC.EntryPC_C.InpActEvt_Back_K2Node_InputActionEvent_1
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AEntryPC_C::InpActEvt_Back_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EntryPC.EntryPC_C.InpActEvt_Back_K2Node_InputActionEvent_1");

	AEntryPC_C_InpActEvt_Back_K2Node_InputActionEvent_1_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function EntryPC.EntryPC_C.OnProcessReady
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void AEntryPC_C::OnProcessReady()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EntryPC.EntryPC_C.OnProcessReady");

	AEntryPC_C_OnProcessReady_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function EntryPC.EntryPC_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void AEntryPC_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EntryPC.EntryPC_C.ReceiveBeginPlay");

	AEntryPC_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function EntryPC.EntryPC_C.Timeout
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AEntryPC_C::Timeout()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EntryPC.EntryPC_C.Timeout");

	AEntryPC_C_Timeout_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function EntryPC.EntryPC_C.OnGetAllGames
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void AEntryPC_C::OnGetAllGames()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EntryPC.EntryPC_C.OnGetAllGames");

	AEntryPC_C_OnGetAllGames_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function EntryPC.EntryPC_C.OnGetAllLobbies
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void AEntryPC_C::OnGetAllLobbies()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EntryPC.EntryPC_C.OnGetAllLobbies");

	AEntryPC_C_OnGetAllLobbies_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function EntryPC.EntryPC_C.Retry
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AEntryPC_C::Retry()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EntryPC.EntryPC_C.Retry");

	AEntryPC_C_Retry_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function EntryPC.EntryPC_C.ExitToDesktop
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AEntryPC_C::ExitToDesktop()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EntryPC.EntryPC_C.ExitToDesktop");

	AEntryPC_C_ExitToDesktop_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function EntryPC.EntryPC_C.IntroFinished?
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AEntryPC_C::IntroFinished_()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EntryPC.EntryPC_C.IntroFinished?");

	AEntryPC_C_IntroFinished__Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function EntryPC.EntryPC_C.OnRequestCompleted
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bSuccessful                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FUWorksGameID                               GameID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
//		UWorksCore_EUWorksResult                           Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FUWorksSteamID                              SteamID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void AEntryPC_C::OnRequestCompleted(bool bSuccessful, const struct FUWorksGameID& GameID, UWorksCore_EUWorksResult Result, const struct FUWorksSteamID& SteamID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EntryPC.EntryPC_C.OnRequestCompleted");

	AEntryPC_C_OnRequestCompleted_Params params {};
	params.bSuccessful = bSuccessful;
	params.GameID = GameID;
	params.Result = Result;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function EntryPC.EntryPC_C.SetNewSettings
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AEntryPC_C::SetNewSettings()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EntryPC.EntryPC_C.SetNewSettings");

	AEntryPC_C_SetNewSettings_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function EntryPC.EntryPC_C.OnAuthFinished
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void AEntryPC_C::OnAuthFinished()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EntryPC.EntryPC_C.OnAuthFinished");

	AEntryPC_C_OnAuthFinished_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function EntryPC.EntryPC_C.errorMessage
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       Error                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
void AEntryPC_C::errorMessage(const struct FText& Error)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EntryPC.EntryPC_C.errorMessage");

	AEntryPC_C_errorMessage_Params params {};
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function EntryPC.EntryPC_C.ExecuteUbergraph_EntryPC
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AEntryPC_C::ExecuteUbergraph_EntryPC(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EntryPC.EntryPC_C.ExecuteUbergraph_EntryPC");

	AEntryPC_C_ExecuteUbergraph_EntryPC_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function EntryPC.EntryPC_C.JoinLobbyMap__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void AEntryPC_C::JoinLobbyMap__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EntryPC.EntryPC_C.JoinLobbyMap__DelegateSignature");

	AEntryPC_C_JoinLobbyMap__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
