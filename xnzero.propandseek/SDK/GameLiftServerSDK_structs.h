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
// Enums
//---------------------------------------------------------------------------

// Enum GameLiftServerSDK.EAttrType
enum class GameLiftServerSDK_EAttrType : uint8_t
{
	EAttrType__NONE                = 0,
	EAttrType__STRING              = 1,
	EAttrType__FLOAT               = 2,
	EAttrType__STRING_LIST         = 3,
	EAttrType__STRING_FLOAT_MAP    = 4,
	EAttrType__EAttrType_MAX       = 5,

};

// Enum GameLiftServerSDK.EGameSessionStatusServer
enum class GameLiftServerSDK_EGameSessionStatusServer : uint8_t
{
	EGameSessionStatusServer__NOT_SET = 0,
	EGameSessionStatusServer__ACTIVE = 1,
	EGameSessionStatusServer__ACTIVATING = 2,
	EGameSessionStatusServer__TERMINATED = 3,
	EGameSessionStatusServer__TERMINATING = 4,
	EGameSessionStatusServer__EGameSessionStatusServer_MAX = 5,

};

// Enum GameLiftServerSDK.EGameLiftServerError
enum class GameLiftServerSDK_EGameLiftServerError : uint8_t
{
	EGameLiftServerError__ALREADY_INITIALIZED = 0,
	EGameLiftServerError__FLEET_MISMATCH = 1,
	EGameLiftServerError__GAMELIFT_CLIENT_NOT_INITIALIZED = 2,
	EGameLiftServerError__GAMELIFT_SERVER_NOT_INITIALIZED = 3,
	EGameLiftServerError__GAME_SESSION_ENDED_FAILED = 4,
	EGameLiftServerError__GAME_SESSION_NOT_READY = 5,
	EGameLiftServerError__GAME_SESSION_READY_FAILED = 6,
	EGameLiftServerError__INITIALIZATION_MISMATCH = 7,
	EGameLiftServerError__NOT_INITIALIZED = 8,
	EGameLiftServerError__NO_TARGET_ALIASID_SET = 9,
	EGameLiftServerError__NO_TARGET_FLEET_SET = 10,
	EGameLiftServerError__PROCESS_ENDING_FAILED = 11,
	EGameLiftServerError__PROCESS_NOT_ACTIVE = 12,
	EGameLiftServerError__PROCESS_NOT_READY = 13,
	EGameLiftServerError__PROCESS_READY_FAILED = 14,
	EGameLiftServerError__SDK_VERSION_DETECTION_FAILED = 15,
	EGameLiftServerError__SERVICE_CALL_FAILED = 16,
	EGameLiftServerError__STX_CALL_FAILED = 17,
	EGameLiftServerError__STX_INITIALIZATION_FAILED = 18,
	EGameLiftServerError__UNEXPECTED_PLAYER_SESSION = 19,
	EGameLiftServerError__BAD_REQUEST_EXCEPTION = 20,
	EGameLiftServerError__INTERNAL_SERVICE_EXCEPTION = 21,
	EGameLiftServerError__UNKNOWN_ERROR = 22,
	EGameLiftServerError__EGameLiftServerError_MAX = 23,

};

// Enum GameLiftServerSDK.EPlayerSessionCreationPolicyServer
enum class GameLiftServerSDK_EPlayerSessionCreationPolicyServer : uint8_t
{
	EPlayerSessionCreationPolicyServer__NOT_SET = 0,
	EPlayerSessionCreationPolicyServer__ACCEPT_ALL = 1,
	EPlayerSessionCreationPolicyServer__DENY_ALL = 2,
	EPlayerSessionCreationPolicyServer__EPlayerSessionCreationPolicyServer_MAX = 3,

};

// Enum GameLiftServerSDK.EPlayerSessionStatusServer
enum class GameLiftServerSDK_EPlayerSessionStatusServer : uint8_t
{
	EPlayerSessionStatusServer__NOT_SET = 0,
	EPlayerSessionStatusServer__RESERVED = 1,
	EPlayerSessionStatusServer__ACTIVE = 2,
	EPlayerSessionStatusServer__COMPLETED = 3,
	EPlayerSessionStatusServer__TIMEDOUT = 4,
	EPlayerSessionStatusServer__EPlayerSessionStatusServer_MAX = 5,

};

// Enum GameLiftServerSDK.EUpdateReason
enum class GameLiftServerSDK_EUpdateReason : uint8_t
{
	EUpdateReason__MATCHMAKING_DATA_UPDATED = 0,
	EUpdateReason__BACKFILL_FAILED = 1,
	EUpdateReason__BACKFILL_TIMED_OUT = 2,
	EUpdateReason__BACKFILL_CANCELLED = 3,
	EUpdateReason__UNKNOWN         = 4,
	EUpdateReason__EUpdateReason_MAX = 5,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GameLiftServerSDK.StopMatchBackfillRequest
// 0x0030
struct FStopMatchBackfillRequest
{
	struct FString                                     ticketId;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     matchmakingConfigurationArn;                               // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     gameSessionArn;                                            // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLiftServerSDK.KeyAndValue
// 0x0018
struct FKeyAndValue
{
	struct FString                                     Key;                                                       // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Value;                                                     // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IC0T[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct GameLiftServerSDK.RegionAndLatency
// 0x0018
struct FRegionAndLatency
{
	struct FString                                     region;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                latencyMs;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1DY8[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct GameLiftServerSDK.StartMatchBackfillResultServer
// 0x0010
struct FStartMatchBackfillResultServer
{
	struct FString                                     ticketId;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLiftServerSDK.GetInstanceCertificateResult
// 0x0050
struct FGetInstanceCertificateResult
{
	struct FString                                     CertificatePath;                                           // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CertificateChainPath;                                      // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PrivateKeyPath;                                            // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Hostname;                                                  // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     RootCertificatePath;                                       // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLiftServerSDK.DescribePlayerSessionsRequestServer
// 0x0058
struct FDescribePlayerSessionsRequestServer
{
	struct FString                                     gameSessionId;                                             // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     playerId;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     playerSessionId;                                           // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     playerSessionStatusFilter;                                 // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                limit;                                                     // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M2U6[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     nextToken;                                                 // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLiftServerSDK.AWSPlayerSessionServer
// 0x0090
struct FAWSPlayerSessionServer
{
	struct FString                                     playerSessionId;                                           // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     playerId;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     gameSessionId;                                             // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     fleetId;                                                   // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   creationTime;                                              // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   terminationTime;                                           // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	GameLiftServerSDK_EPlayerSessionStatusServer       status;                                                    // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2L0N[0x7];                                     // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ipAddress;                                                 // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Port;                                                      // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OAFO[0x4];                                     // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     playerData;                                                // 0x0070(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     dnsName;                                                   // 0x0080(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLiftServerSDK.DescribePlayerSessionsResultServer
// 0x0020
struct FDescribePlayerSessionsResultServer
{
	TArray<struct FAWSPlayerSessionServer>             playerSessions;                                            // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     nextToken;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLiftServerSDK.AttributeValueServer
// 0x0040
struct FAttributeValueServer
{
	struct FString                                     S;                                                         // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              N;                                                         // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SOUP[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FString>                             sL;                                                        // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FKeyAndValue>                        sDM;                                                       // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	GameLiftServerSDK_EAttrType                        attrType;                                                  // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_11FS[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct GameLiftServerSDK.NamedAttribute
// 0x0050
struct FNamedAttribute
{
	struct FString                                     Name;                                                      // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAttributeValueServer                       Value;                                                     // 0x0010(0x0040) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLiftServerSDK.AWSPlayerServer
// 0x0040
struct FAWSPlayerServer
{
	struct FString                                     playerId;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Team;                                                      // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FNamedAttribute>                     playerAttributes;                                          // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FRegionAndLatency>                   latencyInMs;                                               // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLiftServerSDK.StartMatchBackfillRequestServer
// 0x0040
struct FStartMatchBackfillRequestServer
{
	struct FString                                     ticketId;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     matchmakingConfigurationArn;                               // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     gameSessionArn;                                            // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAWSPlayerServer>                    Players;                                                   // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLiftServerSDK.GamePropertyServer
// 0x0020
struct FGamePropertyServer
{
	struct FString                                     Key;                                                       // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Value;                                                     // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLiftServerSDK.AWSGameSessionServer
// 0x0090
struct FAWSGameSessionServer
{
	struct FString                                     gameSessionId;                                             // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Name;                                                      // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     fleetId;                                                   // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                maximumPlayerSessionCount;                                 // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	GameLiftServerSDK_EGameSessionStatusServer         status;                                                    // 0x0034(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QH9O[0x3];                                     // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FGamePropertyServer>                 gameProperties;                                            // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     ipAddress;                                                 // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Port;                                                      // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5LNP[0x4];                                     // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     gameSessionData;                                           // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     matchmakerData;                                            // 0x0070(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     dnsName;                                                   // 0x0080(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLiftServerSDK.UpdateGameSessionServer
// 0x00A8
struct FUpdateGameSessionServer
{
	struct FString                                     backfillTicketId;                                          // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAWSGameSessionServer                       GameSession;                                               // 0x0010(0x0090) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	GameLiftServerSDK_EUpdateReason                    updateReason;                                              // 0x00A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_K2FB[0x7];                                     // 0x00A1(0x0007) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
