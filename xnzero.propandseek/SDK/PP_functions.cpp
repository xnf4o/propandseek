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
//		Name   -> Function PP.PP_C.NotifyProcessTerminate
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UPP_C::NotifyProcessTerminate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PP.PP_C.NotifyProcessTerminate");

	UPP_C_NotifyProcessTerminate_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function PP.PP_C.HealthCheck
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UPP_C::HealthCheck()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PP.PP_C.HealthCheck");

	UPP_C_HealthCheck_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function PP.PP_C.UpdateGameSession
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		struct FUpdateGameSessionServer                    UpdateGameSession                                          (BlueprintVisible, BlueprintReadOnly, Parm)
void UPP_C::UpdateGameSession(const struct FUpdateGameSessionServer& UpdateGameSession)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PP.PP_C.UpdateGameSession");

	UPP_C_UpdateGameSession_Params params {};
	params.UpdateGameSession = UpdateGameSession;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function PP.PP_C.StartGameSession
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		struct FAWSGameSessionServer                       GameSession                                                (BlueprintVisible, BlueprintReadOnly, Parm)
void UPP_C::StartGameSession(const struct FAWSGameSessionServer& GameSession)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PP.PP_C.StartGameSession");

	UPP_C_StartGameSession_Params params {};
	params.GameSession = GameSession;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function PP.PP_C.ProcessTerminate
//		Flags  -> (Event, Public, BlueprintEvent)
void UPP_C::ProcessTerminate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PP.PP_C.ProcessTerminate");

	UPP_C_ProcessTerminate_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function PP.PP_C.ExecuteUbergraph_PP
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPP_C::ExecuteUbergraph_PP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PP.PP_C.ExecuteUbergraph_PP");

	UPP_C_ExecuteUbergraph_PP_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
