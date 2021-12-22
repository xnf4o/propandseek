#pragma once

// Name: pns, Version: 1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function GameLiftServerSDK.GameLiftServerFunctionLibrary.UpdatePlayerSessionCreationPolicy
struct UGameLiftServerFunctionLibrary_UpdatePlayerSessionCreationPolicy_Params
{
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	GameLiftServerSDK_EGameLiftServerError             errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	GameLiftServerSDK_EPlayerSessionCreationPolicyServer policy;                                                    // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameLiftServerSDK.GameLiftServerFunctionLibrary.TerminateGameSession
struct UGameLiftServerFunctionLibrary_TerminateGameSession_Params
{
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	GameLiftServerSDK_EGameLiftServerError             errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameLiftServerSDK.GameLiftServerFunctionLibrary.StopMatchBackfill
struct UGameLiftServerFunctionLibrary_StopMatchBackfill_Params
{
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	GameLiftServerSDK_EGameLiftServerError             errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FStopMatchBackfillRequest                   StopMatchBackfillRequest;                                  // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function GameLiftServerSDK.GameLiftServerFunctionLibrary.StartMatchBackfill
struct UGameLiftServerFunctionLibrary_StartMatchBackfill_Params
{
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	GameLiftServerSDK_EGameLiftServerError             errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FStartMatchBackfillRequestServer            StartMatchBackfillRequestServer;                           // 0x0000(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FStartMatchBackfillResultServer             ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function GameLiftServerSDK.GameLiftServerFunctionLibrary.RemovePlayerSession
struct UGameLiftServerFunctionLibrary_RemovePlayerSession_Params
{
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	GameLiftServerSDK_EGameLiftServerError             errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     playerSessionId;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameLiftServerSDK.GameLiftServerFunctionLibrary.ProcessReady
struct UGameLiftServerFunctionLibrary_ProcessReady_Params
{
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	GameLiftServerSDK_EGameLiftServerError             errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UProcessParameters*                          ProcessParameters;                                         // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameLiftServerSDK.GameLiftServerFunctionLibrary.ProcessEnding
struct UGameLiftServerFunctionLibrary_ProcessEnding_Params
{
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	GameLiftServerSDK_EGameLiftServerError             errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameLiftServerSDK.GameLiftServerFunctionLibrary.InitSDK
struct UGameLiftServerFunctionLibrary_InitSDK_Params
{
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	GameLiftServerSDK_EGameLiftServerError             errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameLiftServerSDK.GameLiftServerFunctionLibrary.GetTerminationTime
struct UGameLiftServerFunctionLibrary_GetTerminationTime_Params
{
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	GameLiftServerSDK_EGameLiftServerError             errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameLiftServerSDK.GameLiftServerFunctionLibrary.GetSdkVersion
struct UGameLiftServerFunctionLibrary_GetSdkVersion_Params
{
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	GameLiftServerSDK_EGameLiftServerError             errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameLiftServerSDK.GameLiftServerFunctionLibrary.GetInstanceCertificate
struct UGameLiftServerFunctionLibrary_GetInstanceCertificate_Params
{
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	GameLiftServerSDK_EGameLiftServerError             errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGetInstanceCertificateResult               ReturnValue;                                               // 0x0000(0x0050)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function GameLiftServerSDK.GameLiftServerFunctionLibrary.GetGameSessionId
struct UGameLiftServerFunctionLibrary_GetGameSessionId_Params
{
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	GameLiftServerSDK_EGameLiftServerError             errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameLiftServerSDK.GameLiftServerFunctionLibrary.Destroy
struct UGameLiftServerFunctionLibrary_Destroy_Params
{
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	GameLiftServerSDK_EGameLiftServerError             errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameLiftServerSDK.GameLiftServerFunctionLibrary.DescribePlayerSessions
struct UGameLiftServerFunctionLibrary_DescribePlayerSessions_Params
{
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	GameLiftServerSDK_EGameLiftServerError             errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDescribePlayerSessionsRequestServer        DescribePlayerSessionsRequest;                             // 0x0000(0x0058)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FDescribePlayerSessionsResultServer         ReturnValue;                                               // 0x0000(0x0020)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function GameLiftServerSDK.GameLiftServerFunctionLibrary.ActivateGameSession
struct UGameLiftServerFunctionLibrary_ActivateGameSession_Params
{
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	GameLiftServerSDK_EGameLiftServerError             errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameLiftServerSDK.GameLiftServerFunctionLibrary.AcceptPlayerSession
struct UGameLiftServerFunctionLibrary_AcceptPlayerSession_Params
{
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	GameLiftServerSDK_EGameLiftServerError             errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     playerSessionId;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameLiftServerSDK.ProcessParameters.UpdateGameSession
struct UProcessParameters_UpdateGameSession_Params
{
	struct FUpdateGameSessionServer                    UpdateGameSession;                                         // 0x0000(0x00A8)  (Parm, NativeAccessSpecifierPublic)
};

// Function GameLiftServerSDK.ProcessParameters.StartGameSession
struct UProcessParameters_StartGameSession_Params
{
	struct FAWSGameSessionServer                       GameSession;                                               // 0x0000(0x0090)  (Parm, NativeAccessSpecifierPublic)
};

// Function GameLiftServerSDK.ProcessParameters.ProcessTerminate
struct UProcessParameters_ProcessTerminate_Params
{
};

// Function GameLiftServerSDK.ProcessParameters.HealthCheck
struct UProcessParameters_HealthCheck_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameLiftServerSDK.ServerHelper.ServerIPAndPort
struct UServerHelper_ServerIPAndPort_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     IP;                                                        // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Port;                                                      // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameLiftServerSDK.ServerHelper.QuitServer
struct UServerHelper_QuitServer_Params
{
	bool                                               Force;                                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
