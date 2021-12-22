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
// Classes
//---------------------------------------------------------------------------

// Class GameLiftServerSDK.GameLiftServerFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UGameLiftServerFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameLiftServerSDK.GameLiftServerFunctionLibrary");
		return ptr;
	}



	void STATIC_UpdatePlayerSessionCreationPolicy(bool* Success, GameLiftServerSDK_EGameLiftServerError* errorType, struct FString* errorMessage, GameLiftServerSDK_EPlayerSessionCreationPolicyServer policy);
	void STATIC_TerminateGameSession(bool* Success, GameLiftServerSDK_EGameLiftServerError* errorType, struct FString* errorMessage);
	void STATIC_StopMatchBackfill(bool* Success, GameLiftServerSDK_EGameLiftServerError* errorType, struct FString* errorMessage, const struct FStopMatchBackfillRequest& StopMatchBackfillRequest);
	struct FStartMatchBackfillResultServer STATIC_StartMatchBackfill(bool* Success, GameLiftServerSDK_EGameLiftServerError* errorType, struct FString* errorMessage, const struct FStartMatchBackfillRequestServer& StartMatchBackfillRequestServer);
	void STATIC_RemovePlayerSession(bool* Success, GameLiftServerSDK_EGameLiftServerError* errorType, struct FString* errorMessage, const struct FString& playerSessionId);
	void STATIC_ProcessReady(bool* Success, GameLiftServerSDK_EGameLiftServerError* errorType, struct FString* errorMessage, class UProcessParameters* ProcessParameters);
	void STATIC_ProcessEnding(bool* Success, GameLiftServerSDK_EGameLiftServerError* errorType, struct FString* errorMessage);
	void STATIC_InitSDK(bool* Success, GameLiftServerSDK_EGameLiftServerError* errorType, struct FString* errorMessage);
	struct FDateTime STATIC_GetTerminationTime(bool* Success, GameLiftServerSDK_EGameLiftServerError* errorType, struct FString* errorMessage);
	struct FString STATIC_GetSdkVersion(bool* Success, GameLiftServerSDK_EGameLiftServerError* errorType, struct FString* errorMessage);
	struct FGetInstanceCertificateResult STATIC_GetInstanceCertificate(bool* Success, GameLiftServerSDK_EGameLiftServerError* errorType, struct FString* errorMessage);
	struct FString STATIC_GetGameSessionId(bool* Success, GameLiftServerSDK_EGameLiftServerError* errorType, struct FString* errorMessage);
	void STATIC_Destroy(bool* Success, GameLiftServerSDK_EGameLiftServerError* errorType, struct FString* errorMessage);
	struct FDescribePlayerSessionsResultServer STATIC_DescribePlayerSessions(bool* Success, GameLiftServerSDK_EGameLiftServerError* errorType, struct FString* errorMessage, const struct FDescribePlayerSessionsRequestServer& DescribePlayerSessionsRequest);
	void STATIC_ActivateGameSession(bool* Success, GameLiftServerSDK_EGameLiftServerError* errorType, struct FString* errorMessage);
	void STATIC_AcceptPlayerSession(bool* Success, GameLiftServerSDK_EGameLiftServerError* errorType, struct FString* errorMessage, const struct FString& playerSessionId);
};

// Class GameLiftServerSDK.ProcessParameters
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UProcessParameters : public UObject
{
public:
	int                                                Port;                                                      // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7O2Q[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FString>                             logPaths;                                                  // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameLiftServerSDK.ProcessParameters");
		return ptr;
	}



	void UpdateGameSession(const struct FUpdateGameSessionServer& UpdateGameSession);
	void StartGameSession(const struct FAWSGameSessionServer& GameSession);
	void ProcessTerminate();
	bool HealthCheck();
};

// Class GameLiftServerSDK.ServerHelper
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UServerHelper : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameLiftServerSDK.ServerHelper");
		return ptr;
	}



	void STATIC_ServerIPAndPort(class UObject* WorldContextObject, struct FString* IP, int* Port);
	void STATIC_QuitServer(bool Force);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
