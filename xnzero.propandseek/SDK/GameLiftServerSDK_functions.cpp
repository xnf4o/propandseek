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
//		Offset -> 0x00507990
//		Name   -> Function GameLiftServerSDK.GameLiftServerFunctionLibrary.UpdatePlayerSessionCreationPolicy
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		GameLiftServerSDK_EGameLiftServerError             errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		GameLiftServerSDK_EPlayerSessionCreationPolicyServer policy                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameLiftServerFunctionLibrary::STATIC_UpdatePlayerSessionCreationPolicy(bool* Success, GameLiftServerSDK_EGameLiftServerError* errorType, struct FString* errorMessage, GameLiftServerSDK_EPlayerSessionCreationPolicyServer policy)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameLiftServerSDK.GameLiftServerFunctionLibrary.UpdatePlayerSessionCreationPolicy");

	UGameLiftServerFunctionLibrary_UpdatePlayerSessionCreationPolicy_Params params {};
	params.policy = policy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x00506580
//		Name   -> Function GameLiftServerSDK.GameLiftServerFunctionLibrary.TerminateGameSession
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		GameLiftServerSDK_EGameLiftServerError             errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameLiftServerFunctionLibrary::STATIC_TerminateGameSession(bool* Success, GameLiftServerSDK_EGameLiftServerError* errorType, struct FString* errorMessage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameLiftServerSDK.GameLiftServerFunctionLibrary.TerminateGameSession");

	UGameLiftServerFunctionLibrary_TerminateGameSession_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x00507670
//		Name   -> Function GameLiftServerSDK.GameLiftServerFunctionLibrary.StopMatchBackfill
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		GameLiftServerSDK_EGameLiftServerError             errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FStopMatchBackfillRequest                   StopMatchBackfillRequest                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UGameLiftServerFunctionLibrary::STATIC_StopMatchBackfill(bool* Success, GameLiftServerSDK_EGameLiftServerError* errorType, struct FString* errorMessage, const struct FStopMatchBackfillRequest& StopMatchBackfillRequest)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameLiftServerSDK.GameLiftServerFunctionLibrary.StopMatchBackfill");

	UGameLiftServerFunctionLibrary_StopMatchBackfill_Params params {};
	params.StopMatchBackfillRequest = StopMatchBackfillRequest;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x00507420
//		Name   -> Function GameLiftServerSDK.GameLiftServerFunctionLibrary.StartMatchBackfill
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		GameLiftServerSDK_EGameLiftServerError             errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FStartMatchBackfillRequestServer            StartMatchBackfillRequestServer                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FStartMatchBackfillResultServer             ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FStartMatchBackfillResultServer UGameLiftServerFunctionLibrary::STATIC_StartMatchBackfill(bool* Success, GameLiftServerSDK_EGameLiftServerError* errorType, struct FString* errorMessage, const struct FStartMatchBackfillRequestServer& StartMatchBackfillRequestServer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameLiftServerSDK.GameLiftServerFunctionLibrary.StartMatchBackfill");

	UGameLiftServerFunctionLibrary_StartMatchBackfill_Params params {};
	params.StartMatchBackfillRequestServer = StartMatchBackfillRequestServer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x005063E0
//		Name   -> Function GameLiftServerSDK.GameLiftServerFunctionLibrary.RemovePlayerSession
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		GameLiftServerSDK_EGameLiftServerError             errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     playerSessionId                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameLiftServerFunctionLibrary::STATIC_RemovePlayerSession(bool* Success, GameLiftServerSDK_EGameLiftServerError* errorType, struct FString* errorMessage, const struct FString& playerSessionId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameLiftServerSDK.GameLiftServerFunctionLibrary.RemovePlayerSession");

	UGameLiftServerFunctionLibrary_RemovePlayerSession_Params params {};
	params.playerSessionId = playerSessionId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x00506F30
//		Name   -> Function GameLiftServerSDK.GameLiftServerFunctionLibrary.ProcessReady
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		GameLiftServerSDK_EGameLiftServerError             errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UProcessParameters*                          ProcessParameters                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameLiftServerFunctionLibrary::STATIC_ProcessReady(bool* Success, GameLiftServerSDK_EGameLiftServerError* errorType, struct FString* errorMessage, class UProcessParameters* ProcessParameters)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameLiftServerSDK.GameLiftServerFunctionLibrary.ProcessReady");

	UGameLiftServerFunctionLibrary_ProcessReady_Params params {};
	params.ProcessParameters = ProcessParameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x00506580
//		Name   -> Function GameLiftServerSDK.GameLiftServerFunctionLibrary.ProcessEnding
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		GameLiftServerSDK_EGameLiftServerError             errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameLiftServerFunctionLibrary::STATIC_ProcessEnding(bool* Success, GameLiftServerSDK_EGameLiftServerError* errorType, struct FString* errorMessage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameLiftServerSDK.GameLiftServerFunctionLibrary.ProcessEnding");

	UGameLiftServerFunctionLibrary_ProcessEnding_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x00506580
//		Name   -> Function GameLiftServerSDK.GameLiftServerFunctionLibrary.InitSDK
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		GameLiftServerSDK_EGameLiftServerError             errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameLiftServerFunctionLibrary::STATIC_InitSDK(bool* Success, GameLiftServerSDK_EGameLiftServerError* errorType, struct FString* errorMessage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameLiftServerSDK.GameLiftServerFunctionLibrary.InitSDK");

	UGameLiftServerFunctionLibrary_InitSDK_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x00506DA0
//		Name   -> Function GameLiftServerSDK.GameLiftServerFunctionLibrary.GetTerminationTime
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		GameLiftServerSDK_EGameLiftServerError             errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FDateTime                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FDateTime UGameLiftServerFunctionLibrary::STATIC_GetTerminationTime(bool* Success, GameLiftServerSDK_EGameLiftServerError* errorType, struct FString* errorMessage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameLiftServerSDK.GameLiftServerFunctionLibrary.GetTerminationTime");

	UGameLiftServerFunctionLibrary_GetTerminationTime_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00506920
//		Name   -> Function GameLiftServerSDK.GameLiftServerFunctionLibrary.GetSdkVersion
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		GameLiftServerSDK_EGameLiftServerError             errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UGameLiftServerFunctionLibrary::STATIC_GetSdkVersion(bool* Success, GameLiftServerSDK_EGameLiftServerError* errorType, struct FString* errorMessage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameLiftServerSDK.GameLiftServerFunctionLibrary.GetSdkVersion");

	UGameLiftServerFunctionLibrary_GetSdkVersion_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00506AD0
//		Name   -> Function GameLiftServerSDK.GameLiftServerFunctionLibrary.GetInstanceCertificate
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		GameLiftServerSDK_EGameLiftServerError             errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FGetInstanceCertificateResult               ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FGetInstanceCertificateResult UGameLiftServerFunctionLibrary::STATIC_GetInstanceCertificate(bool* Success, GameLiftServerSDK_EGameLiftServerError* errorType, struct FString* errorMessage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameLiftServerSDK.GameLiftServerFunctionLibrary.GetInstanceCertificate");

	UGameLiftServerFunctionLibrary_GetInstanceCertificate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00506920
//		Name   -> Function GameLiftServerSDK.GameLiftServerFunctionLibrary.GetGameSessionId
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		GameLiftServerSDK_EGameLiftServerError             errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UGameLiftServerFunctionLibrary::STATIC_GetGameSessionId(bool* Success, GameLiftServerSDK_EGameLiftServerError* errorType, struct FString* errorMessage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameLiftServerSDK.GameLiftServerFunctionLibrary.GetGameSessionId");

	UGameLiftServerFunctionLibrary_GetGameSessionId_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00506580
//		Name   -> Function GameLiftServerSDK.GameLiftServerFunctionLibrary.Destroy
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		GameLiftServerSDK_EGameLiftServerError             errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameLiftServerFunctionLibrary::STATIC_Destroy(bool* Success, GameLiftServerSDK_EGameLiftServerError* errorType, struct FString* errorMessage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameLiftServerSDK.GameLiftServerFunctionLibrary.Destroy");

	UGameLiftServerFunctionLibrary_Destroy_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x005066D0
//		Name   -> Function GameLiftServerSDK.GameLiftServerFunctionLibrary.DescribePlayerSessions
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		GameLiftServerSDK_EGameLiftServerError             errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FDescribePlayerSessionsRequestServer        DescribePlayerSessionsRequest                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FDescribePlayerSessionsResultServer         ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FDescribePlayerSessionsResultServer UGameLiftServerFunctionLibrary::STATIC_DescribePlayerSessions(bool* Success, GameLiftServerSDK_EGameLiftServerError* errorType, struct FString* errorMessage, const struct FDescribePlayerSessionsRequestServer& DescribePlayerSessionsRequest)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameLiftServerSDK.GameLiftServerFunctionLibrary.DescribePlayerSessions");

	UGameLiftServerFunctionLibrary_DescribePlayerSessions_Params params {};
	params.DescribePlayerSessionsRequest = DescribePlayerSessionsRequest;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00506580
//		Name   -> Function GameLiftServerSDK.GameLiftServerFunctionLibrary.ActivateGameSession
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		GameLiftServerSDK_EGameLiftServerError             errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameLiftServerFunctionLibrary::STATIC_ActivateGameSession(bool* Success, GameLiftServerSDK_EGameLiftServerError* errorType, struct FString* errorMessage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameLiftServerSDK.GameLiftServerFunctionLibrary.ActivateGameSession");

	UGameLiftServerFunctionLibrary_ActivateGameSession_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x005063E0
//		Name   -> Function GameLiftServerSDK.GameLiftServerFunctionLibrary.AcceptPlayerSession
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		GameLiftServerSDK_EGameLiftServerError             errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     playerSessionId                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameLiftServerFunctionLibrary::STATIC_AcceptPlayerSession(bool* Success, GameLiftServerSDK_EGameLiftServerError* errorType, struct FString* errorMessage, const struct FString& playerSessionId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameLiftServerSDK.GameLiftServerFunctionLibrary.AcceptPlayerSession");

	UGameLiftServerFunctionLibrary_AcceptPlayerSession_Params params {};
	params.playerSessionId = playerSessionId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x00507850
//		Name   -> Function GameLiftServerSDK.ProcessParameters.UpdateGameSession
//		Flags  -> (Native, Event, Public, BlueprintEvent)
// Parameters:
//		struct FUpdateGameSessionServer                    UpdateGameSession                                          (Parm, NativeAccessSpecifierPublic)
void UProcessParameters::UpdateGameSession(const struct FUpdateGameSessionServer& UpdateGameSession)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameLiftServerSDK.ProcessParameters.UpdateGameSession");

	UProcessParameters_UpdateGameSession_Params params {};
	params.UpdateGameSession = UpdateGameSession;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x005072B0
//		Name   -> Function GameLiftServerSDK.ProcessParameters.StartGameSession
//		Flags  -> (Native, Event, Public, BlueprintEvent)
// Parameters:
//		struct FAWSGameSessionServer                       GameSession                                                (Parm, NativeAccessSpecifierPublic)
void UProcessParameters::StartGameSession(const struct FAWSGameSessionServer& GameSession)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameLiftServerSDK.ProcessParameters.StartGameSession");

	UProcessParameters_StartGameSession_Params params {};
	params.GameSession = GameSession;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x005070D0
//		Name   -> Function GameLiftServerSDK.ProcessParameters.ProcessTerminate
//		Flags  -> (Native, Event, Public, BlueprintEvent)
void UProcessParameters::ProcessTerminate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameLiftServerSDK.ProcessParameters.ProcessTerminate");

	UProcessParameters_ProcessTerminate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00506F00
//		Name   -> Function GameLiftServerSDK.ProcessParameters.HealthCheck
//		Flags  -> (Native, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UProcessParameters::HealthCheck()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameLiftServerSDK.ProcessParameters.HealthCheck");

	UProcessParameters_HealthCheck_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00507170
//		Name   -> Function GameLiftServerSDK.ServerHelper.ServerIPAndPort
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     IP                                                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Port                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UServerHelper::STATIC_ServerIPAndPort(class UObject* WorldContextObject, struct FString* IP, int* Port)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameLiftServerSDK.ServerHelper.ServerIPAndPort");

	UServerHelper_ServerIPAndPort_Params params {};
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IP != nullptr)
		*IP = params.IP;
	if (Port != nullptr)
		*Port = params.Port;

}


// Function:
//		Offset -> 0x005070F0
//		Name   -> Function GameLiftServerSDK.ServerHelper.QuitServer
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		bool                                               Force                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UServerHelper::STATIC_QuitServer(bool Force)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameLiftServerSDK.ServerHelper.QuitServer");

	UServerHelper_QuitServer_Params params {};
	params.Force = Force;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
