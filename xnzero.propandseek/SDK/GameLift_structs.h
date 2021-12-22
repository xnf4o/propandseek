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

// Enum GameLift.EAcceptanceType
enum class GameLift_EAcceptanceType : uint8_t
{
	EAcceptanceType__NOT_SET       = 0,
	EAcceptanceType__ACCEPT        = 1,
	EAcceptanceType__REJECT        = 2,
	EAcceptanceType__EAcceptanceType_MAX = 3,

};

// Enum GameLift.EBackfillMode
enum class GameLift_EBackfillMode : uint8_t
{
	EBackfillMode__NOT_SET         = 0,
	EBackfillMode__AUTOMATIC       = 1,
	EBackfillMode__MANUAL          = 2,
	EBackfillMode__EBackfillMode_MAX = 3,

};

// Enum GameLift.EBuildStatus
enum class GameLift_EBuildStatus : uint8_t
{
	EBuildStatus__NOT_SET          = 0,
	EBuildStatus__INITIALIZED      = 1,
	EBuildStatus__READY            = 2,
	EBuildStatus__FAILED           = 3,
	EBuildStatus__EBuildStatus_MAX = 4,

};

// Enum GameLift.ECertificateType
enum class GameLift_ECertificateType : uint8_t
{
	ECertificateType__NOT_SET      = 0,
	ECertificateType__DISABLED     = 1,
	ECertificateType__GENERATED    = 2,
	ECertificateType__ECertificateType_MAX = 3,

};

// Enum GameLift.EComparisonOperatorType
enum class GameLift_EComparisonOperatorType : uint8_t
{
	EComparisonOperatorType__NOT_SET = 0,
	EComparisonOperatorType__GreaterThanOrEqualToThreshold = 1,
	EComparisonOperatorType__GreaterThanThreshold = 2,
	EComparisonOperatorType__LessThanThreshold = 3,
	EComparisonOperatorType__LessThanOrEqualToThreshold = 4,
	EComparisonOperatorType__EComparisonOperatorType_MAX = 5,

};

// Enum GameLift.EEC2InstanceType
enum class GameLift_EEC2InstanceType : uint8_t
{
	EEC2InstanceType__NOT_SET      = 0,
	EEC2InstanceType__t2_micro     = 1,
	EEC2InstanceType__t2_small     = 2,
	EEC2InstanceType__t2_medium    = 3,
	EEC2InstanceType__t2_large     = 4,
	EEC2InstanceType__c3_large     = 5,
	EEC2InstanceType__c3_xlarge    = 6,
	EEC2InstanceType__c3_2xlarge   = 7,
	EEC2InstanceType__c3_4xlarge   = 8,
	EEC2InstanceType__c3_8xlarge   = 9,
	EEC2InstanceType__c4_large     = 10,
	EEC2InstanceType__c4_xlarge    = 11,
	EEC2InstanceType__c4_2xlarge   = 12,
	EEC2InstanceType__c4_4xlarge   = 13,
	EEC2InstanceType__c4_8xlarge   = 14,
	EEC2InstanceType__r3_large     = 15,
	EEC2InstanceType__r3_xlarge    = 16,
	EEC2InstanceType__r3_2xlarge   = 17,
	EEC2InstanceType__r3_4xlarge   = 18,
	EEC2InstanceType__r3_8xlarge   = 19,
	EEC2InstanceType__r4_large     = 20,
	EEC2InstanceType__r4_xlarge    = 21,
	EEC2InstanceType__r4_2xlarge   = 22,
	EEC2InstanceType__r4_4xlarge   = 23,
	EEC2InstanceType__r4_8xlarge   = 24,
	EEC2InstanceType__r4_16xlarge  = 25,
	EEC2InstanceType__m3_medium    = 26,
	EEC2InstanceType__m3_large     = 27,
	EEC2InstanceType__m3_xlarge    = 28,
	EEC2InstanceType__m3_2xlarge   = 29,
	EEC2InstanceType__m4_large     = 30,
	EEC2InstanceType__m4_xlarge    = 31,
	EEC2InstanceType__m4_2xlarge   = 32,
	EEC2InstanceType__m4_4xlarge   = 33,
	EEC2InstanceType__m4_10xlarge  = 34,
	EEC2InstanceType__EEC2InstanceType_MAX = 35,

};

// Enum GameLift.EEventCode
enum class GameLift_EEventCode : uint8_t
{
	EEventCode__NOT_SET            = 0,
	EEventCode__GENERIC_EVENT      = 1,
	EEventCode__FLEET_CREATED      = 2,
	EEventCode__FLEET_DELETED      = 3,
	EEventCode__FLEET_SCALING_EVENT = 4,
	EEventCode__FLEET_STATE_DOWNLOADING = 5,
	EEventCode__FLEET_STATE_VALIDATING = 6,
	EEventCode__FLEET_STATE_BUILDING = 7,
	EEventCode__FLEET_STATE_ACTIVATING = 8,
	EEventCode__FLEET_STATE_ACTIVE = 9,
	EEventCode__FLEET_STATE_ERROR  = 10,
	EEventCode__FLEET_INITIALIZATION_FAILED = 11,
	EEventCode__FLEET_BINARY_DOWNLOAD_FAILED = 12,
	EEventCode__FLEET_VALIDATION_LAUNCH_PATH_NOT_FOUND = 13,
	EEventCode__FLEET_VALIDATION_EXECUTABLE_RUNTIME_FAILURE = 14,
	EEventCode__FLEET_VALIDATION_TIMED_OUT = 15,
	EEventCode__FLEET_ACTIVATION_FAILED = 16,
	EEventCode__FLEET_ACTIVATION_FAILED_NO_INSTANCES = 17,
	EEventCode__FLEET_NEW_GAME_SESSION_PROTECTION_POLICY_UPDATED = 18,
	EEventCode__SERVER_PROCESS_INVALID_PATH = 19,
	EEventCode__SERVER_PROCESS_SDK_INITIALIZATION_TIMEOUT = 20,
	EEventCode__SERVER_PROCESS_PROCESS_READY_TIMEOUT = 21,
	EEventCode__SERVER_PROCESS_CRASHED = 22,
	EEventCode__SERVER_PROCESS_TERMINATED_UNHEALTHY = 23,
	EEventCode__SERVER_PROCESS_FORCE_TERMINATED = 24,
	EEventCode__SERVER_PROCESS_PROCESS_EXIT_TIMEOUT = 25,
	EEventCode__GAME_SESSION_ACTIVATION_TIMEOUT = 26,
	EEventCode__FLEET_CREATION_EXTRACTING_BUILD = 27,
	EEventCode__FLEET_CREATION_RUNNING_INSTALLER = 28,
	EEventCode__FLEET_CREATION_VALIDATING_RUNTIME_CONFIG = 29,
	EEventCode__FLEET_VPC_PEERING_SUCCEEDED = 30,
	EEventCode__FLEET_VPC_PEERING_FAILED = 31,
	EEventCode__FLEET_VPC_PEERING_DELETED = 32,
	EEventCode__INSTANCE_INTERRUPTED = 33,
	EEventCode__EEventCode_MAX     = 34,

};

// Enum GameLift.EFleetAction
enum class GameLift_EFleetAction : uint8_t
{
	EFleetAction__NOT_SET          = 0,
	EFleetAction__AUTO_SCALING     = 1,
	EFleetAction__EFleetAction_MAX = 2,

};

// Enum GameLift.EFleetStatus
enum class GameLift_EFleetStatus : uint8_t
{
	EFleetStatus__NOT_SET          = 0,
	EFleetStatus__NEW_             = 1,
	EFleetStatus__DOWNLOADING      = 2,
	EFleetStatus__VALIDATING       = 3,
	EFleetStatus__BUILDING         = 4,
	EFleetStatus__ACTIVATING       = 5,
	EFleetStatus__ACTIVE           = 6,
	EFleetStatus__DELETING         = 7,
	EFleetStatus__ERROR_           = 8,
	EFleetStatus__TERMINATED       = 9,
	EFleetStatus__EFleetStatus_MAX = 10,

};

// Enum GameLift.EFleetType
enum class GameLift_EFleetType : uint8_t
{
	EFleetType__NOT_SET            = 0,
	EFleetType__ON_DEMAND          = 1,
	EFleetType__SPOT               = 2,
	EFleetType__EFleetType_MAX     = 3,

};

// Enum GameLift.EGameLiftError
enum class GameLift_EGameLiftError : uint8_t
{
	EGameLiftError__INCOMPLETE_SIGNATURE = 0,
	EGameLiftError__INTERNAL_FAILURE = 1,
	EGameLiftError__INVALID_ACTION = 2,
	EGameLiftError__INVALID_CLIENT_TOKEN_ID = 3,
	EGameLiftError__INVALID_PARAMETER_COMBINATION = 4,
	EGameLiftError__INVALID_QUERY_PARAMETER = 5,
	EGameLiftError__INVALID_PARAMETER_VALUE = 6,
	EGameLiftError__MISSING_ACTION = 7,
	EGameLiftError__MISSING_AUTHENTICATION_TOKEN = 8,
	EGameLiftError__MISSING_PARAMETER = 9,
	EGameLiftError__OPT_IN_REQUIRED = 10,
	EGameLiftError__REQUEST_EXPIRED = 11,
	EGameLiftError__SERVICE_UNAVAILABLE = 12,
	EGameLiftError__THROTTLING     = 13,
	EGameLiftError__VALIDATION     = 14,
	EGameLiftError__ACCESS_DENIED  = 15,
	EGameLiftError__RESOURCE_NOT_FOUND = 16,
	EGameLiftError__UNRECOGNIZED_CLIENT = 17,
	EGameLiftError__MALFORMED_QUERY_STRING = 18,
	EGameLiftError__SLOW_DOWN      = 19,
	EGameLiftError__REQUEST_TIME_TOO_SKEWED = 20,
	EGameLiftError__INVALID_SIGNATURE = 21,
	EGameLiftError__SIGNATURE_DOES_NOT_MATCH = 22,
	EGameLiftError__INVALID_ACCESS_KEY_ID = 23,
	EGameLiftError__REQUEST_TIMEOUT = 24,
	EGameLiftError__NETWORK_CONNECTION = 25,
	EGameLiftError__UNKNOWN        = 26,
	EGameLiftError__CONFLICT       = 27,
	EGameLiftError__FLEET_CAPACITY_EXCEEDED = 28,
	EGameLiftError__GAME_SESSION_FULL = 29,
	EGameLiftError__IDEMPOTENT_PARAMETER_MISMATCH = 30,
	EGameLiftError__INTERNAL_SERVICE = 31,
	EGameLiftError__INVALID_FLEET_STATUS = 32,
	EGameLiftError__INVALID_GAME_SESSION_STATUS = 33,
	EGameLiftError__INVALID_REQUEST = 34,
	EGameLiftError__LIMIT_EXCEEDED = 35,
	EGameLiftError__NOT_FOUND      = 36,
	EGameLiftError__TERMINAL_ROUTING_STRATEGY = 37,
	EGameLiftError__UNAUTHORIZED   = 38,
	EGameLiftError__UNSUPPORTED_REGION = 39,
	EGameLiftError__EGameLiftError_MAX = 40,

};

// Enum GameLift.EGameLiftARNType
enum class GameLift_EGameLiftARNType : uint8_t
{
	EGameLiftARNType__UNKNOWN      = 0,
	EGameLiftARNType__Fleet_Id     = 1,
	EGameLiftARNType__Alias_Id     = 2,
	EGameLiftARNType__GameSession_Id = 3,
	EGameLiftARNType__EGameLiftARNType_MAX = 4,

};

// Enum GameLift.EGameSessionPlacementState
enum class GameLift_EGameSessionPlacementState : uint8_t
{
	EGameSessionPlacementState__NOT_SET = 0,
	EGameSessionPlacementState__PENDING = 1,
	EGameSessionPlacementState__FULFILLED = 2,
	EGameSessionPlacementState__CANCELLED = 3,
	EGameSessionPlacementState__TIMED_OUT = 4,
	EGameSessionPlacementState__FAILED = 5,
	EGameSessionPlacementState__EGameSessionPlacementState_MAX = 6,

};

// Enum GameLift.EGameSessionStatus
enum class GameLift_EGameSessionStatus : uint8_t
{
	EGameSessionStatus__NOT_SET    = 0,
	EGameSessionStatus__ACTIVE     = 1,
	EGameSessionStatus__ACTIVATING = 2,
	EGameSessionStatus__TERMINATED = 3,
	EGameSessionStatus__TERMINATING = 4,
	EGameSessionStatus__ERROR_     = 5,
	EGameSessionStatus__EGameSessionStatus_MAX = 6,

};

// Enum GameLift.EGameSessionStatusReason
enum class GameLift_EGameSessionStatusReason : uint8_t
{
	EGameSessionStatusReason__NOT_SET = 0,
	EGameSessionStatusReason__INTERRUPTED = 1,
	EGameSessionStatusReason__EGameSessionStatusReason_MAX = 2,

};

// Enum GameLift.EInstanceStatus
enum class GameLift_EInstanceStatus : uint8_t
{
	EInstanceStatus__NOT_SET       = 0,
	EInstanceStatus__PENDING       = 1,
	EInstanceStatus__ACTIVE        = 2,
	EInstanceStatus__TERMINATING   = 3,
	EInstanceStatus__EInstanceStatus_MAX = 4,

};

// Enum GameLift.EIpProtocol
enum class GameLift_EIpProtocol : uint8_t
{
	EIpProtocol__NOT_SET           = 0,
	EIpProtocol__TCP               = 1,
	EIpProtocol__UDP               = 2,
	EIpProtocol__EIpProtocol_MAX   = 3,

};

// Enum GameLift.EMatchmakingConfigurationStatus
enum class GameLift_EMatchmakingConfigurationStatus : uint8_t
{
	EMatchmakingConfigurationStatus__NOT_SET = 0,
	EMatchmakingConfigurationStatus__CANCELLED = 1,
	EMatchmakingConfigurationStatus__COMPLETED = 2,
	EMatchmakingConfigurationStatus__FAILED = 3,
	EMatchmakingConfigurationStatus__PLACING = 4,
	EMatchmakingConfigurationStatus__QUEUED = 5,
	EMatchmakingConfigurationStatus__REQUIRES_ACCEPTANCE = 6,
	EMatchmakingConfigurationStatus__SEARCHING = 7,
	EMatchmakingConfigurationStatus__TIMED_OUT = 8,
	EMatchmakingConfigurationStatus__EMatchmakingConfigurationStatus_MAX = 9,

};

// Enum GameLift.EMetricName
enum class GameLift_EMetricName : uint8_t
{
	EMetricName__NOT_SET           = 0,
	EMetricName__ActivatingGameSessions = 1,
	EMetricName__ActiveGameSessions = 2,
	EMetricName__ActiveInstances   = 3,
	EMetricName__AvailableGameSessions = 4,
	EMetricName__AvailablePlayerSessions = 5,
	EMetricName__CurrentPlayerSessions = 6,
	EMetricName__IdleInstances     = 7,
	EMetricName__PercentAvailableGameSessions = 8,
	EMetricName__PercentIdleInstances = 9,
	EMetricName__QueueDepth        = 10,
	EMetricName__WaitTime          = 11,
	EMetricName__EMetricName_MAX   = 12,

};

// Enum GameLift.EOperatingSystem
enum class GameLift_EOperatingSystem : uint8_t
{
	EOperatingSystem__NOT_SET      = 0,
	EOperatingSystem__WINDOWS      = 1,
	EOperatingSystem__AMAZON_LINUX = 2,
	EOperatingSystem__EOperatingSystem_MAX = 3,

};

// Enum GameLift.EPlayerSessionCreationPolicy
enum class GameLift_EPlayerSessionCreationPolicy : uint8_t
{
	EPlayerSessionCreationPolicy__NOT_SET = 0,
	EPlayerSessionCreationPolicy__ACCEPT_ALL = 1,
	EPlayerSessionCreationPolicy__DENY_ALL = 2,
	EPlayerSessionCreationPolicy__EPlayerSessionCreationPolicy_MAX = 3,

};

// Enum GameLift.EPlayerSessionStatus
enum class GameLift_EPlayerSessionStatus : uint8_t
{
	EPlayerSessionStatus__NOT_SET  = 0,
	EPlayerSessionStatus__RESERVED = 1,
	EPlayerSessionStatus__ACTIVE   = 2,
	EPlayerSessionStatus__COMPLETED = 3,
	EPlayerSessionStatus__TIMEDOUT = 4,
	EPlayerSessionStatus__EPlayerSessionStatus_MAX = 5,

};

// Enum GameLift.EPolicyType
enum class GameLift_EPolicyType : uint8_t
{
	EPolicyType__NOT_SET           = 0,
	EPolicyType__RuleBased         = 1,
	EPolicyType__TargetBased       = 2,
	EPolicyType__EPolicyType_MAX   = 3,

};

// Enum GameLift.EProtectionPolicy
enum class GameLift_EProtectionPolicy : uint8_t
{
	EProtectionPolicy__NOT_SET     = 0,
	EProtectionPolicy__NoProtection = 1,
	EProtectionPolicy__FullProtection = 2,
	EProtectionPolicy__EProtectionPolicy_MAX = 3,

};

// Enum GameLift.ERoutingStrategyType
enum class GameLift_ERoutingStrategyType : uint8_t
{
	ERoutingStrategyType__NOT_SET  = 0,
	ERoutingStrategyType__SIMPLE   = 1,
	ERoutingStrategyType__TERMINAL = 2,
	ERoutingStrategyType__ERoutingStrategyType_MAX = 3,

};

// Enum GameLift.EScalingAdjustmentType
enum class GameLift_EScalingAdjustmentType : uint8_t
{
	EScalingAdjustmentType__NOT_SET = 0,
	EScalingAdjustmentType__ChangeInCapacity = 1,
	EScalingAdjustmentType__ExactCapacity = 2,
	EScalingAdjustmentType__PercentChangeInCapacity = 3,
	EScalingAdjustmentType__EScalingAdjustmentType_MAX = 4,

};

// Enum GameLift.EScalingStatusType
enum class GameLift_EScalingStatusType : uint8_t
{
	EScalingStatusType__NOT_SET    = 0,
	EScalingStatusType__ACTIVE     = 1,
	EScalingStatusType__UPDATE_REQUESTED = 2,
	EScalingStatusType__UPDATING   = 3,
	EScalingStatusType__DELETE_REQUESTED = 4,
	EScalingStatusType__DELETING   = 5,
	EScalingStatusType__DELETED    = 6,
	EScalingStatusType__ERROR_     = 7,
	EScalingStatusType__EScalingStatusType_MAX = 8,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GameLift.ValidateMatchmakingRuleSetRequest
// 0x0010
struct FValidateMatchmakingRuleSetRequest
{
	struct FString                                     ruleSetBody;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.ValidateMatchmakingRuleSetResult
// 0x0001
struct FValidateMatchmakingRuleSetResult
{
	bool                                               valid;                                                     // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.S3Location
// 0x0040
struct FS3Location
{
	struct FString                                     bucket;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Key;                                                       // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     roleArn;                                                   // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     objectVersion;                                             // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.ServerProcess
// 0x0028
struct FServerProcess
{
	struct FString                                     launchPath;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     parameters;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                concurrentExecutions;                                      // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_126C[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct GameLift.GameProperty
// 0x0020
struct FGameProperty
{
	struct FString                                     Key;                                                       // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Value;                                                     // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.PlayerLatencyPolicy
// 0x0008
struct FPlayerLatencyPolicy
{
	int                                                maximumIndividualPlayerLatencyMilliseconds;                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                policyDurationSeconds;                                     // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.GameSessionQueueDestination
// 0x0010
struct FGameSessionQueueDestination
{
	struct FString                                     destinationArn;                                            // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.UpdateGameSessionRequest
// 0x0030
struct FUpdateGameSessionRequest
{
	struct FString                                     awsResourceName;                                           // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                maximumPlayerSessionCount;                                 // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BKIQ[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Name;                                                      // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	GameLift_EPlayerSessionCreationPolicy              playerSessionCreationPolicy;                               // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	GameLift_EProtectionPolicy                         protectionPolicy;                                          // 0x0029(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8CD3[0x6];                                     // 0x002A(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct GameLift.IpPermission
// 0x0020
struct FIpPermission
{
	int                                                fromPort;                                                  // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                toPort;                                                    // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ipRange;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	GameLift_EIpProtocol                               Protocol;                                                  // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M9KE[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct GameLift.UpdateFleetPortSettingsResult
// 0x0010
struct FUpdateFleetPortSettingsResult
{
	struct FString                                     fleetId;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.UpdateFleetCapacityRequest
// 0x0020
struct FUpdateFleetCapacityRequest
{
	struct FString                                     fleetId;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                desiredInstances;                                          // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                minSize;                                                   // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                maxSize;                                                   // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MTDJ[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct GameLift.UpdateFleetCapacityResult
// 0x0010
struct FUpdateFleetCapacityResult
{
	struct FString                                     fleetId;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.ResourceCreationLimitPolicy
// 0x0008
struct FResourceCreationLimitPolicy
{
	int                                                newGameSessionsPerCreator;                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                policyPeriodInMinutes;                                     // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.UpdateFleetAttributesResult
// 0x0010
struct FUpdateFleetAttributesResult
{
	struct FString                                     fleetId;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.UpdateBuildRequest
// 0x0030
struct FUpdateBuildRequest
{
	struct FString                                     buildId;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Name;                                                      // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Version;                                                   // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.RoutingStrategy
// 0x0028
struct FRoutingStrategy
{
	GameLift_ERoutingStrategyType                      Type;                                                      // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5BSH[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     fleetId;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Message;                                                   // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.StopMatchmakingRequest
// 0x0010
struct FStopMatchmakingRequest
{
	struct FString                                     ticketId;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.StopMatchmakingResult
// 0x0001
struct FStopMatchmakingResult
{
	unsigned char                                      UnknownData_SPP4[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct GameLift.StopGameSessionPlacementRequest
// 0x0010
struct FStopGameSessionPlacementRequest
{
	struct FString                                     placementId;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.PlayerLatency
// 0x0028
struct FPlayerLatency
{
	struct FString                                     playerId;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     regionIdentifier;                                          // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              latencyInMilliseconds;                                     // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MTH4[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct GameLift.PlacedPlayerSession
// 0x0020
struct FPlacedPlayerSession
{
	struct FString                                     playerId;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     playerSessionId;                                           // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.StopFleetActionsRequest
// 0x0020
struct FStopFleetActionsRequest
{
	struct FString                                     fleetId;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<GameLift_EFleetAction>                      actions;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.StopFleetActionsResult
// 0x0001
struct FStopFleetActionsResult
{
	unsigned char                                      UnknownData_O4ID[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct GameLift.GameLiftAttributeValue
// 0x0078
struct FGameLiftAttributeValue
{
	struct FString                                     S;                                                         // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              N;                                                         // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TEST[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FString>                             sL;                                                        // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<struct FString, float>                        sDM;                                                       // 0x0028(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.MatchedPlayerSession
// 0x0020
struct FMatchedPlayerSession
{
	struct FString                                     playerId;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     playerSessionId;                                           // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.DesiredPlayerSession
// 0x0020
struct FDesiredPlayerSession
{
	struct FString                                     playerId;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     playerData;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.StartFleetActionsRequest
// 0x0020
struct FStartFleetActionsRequest
{
	struct FString                                     fleetId;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<GameLift_EFleetAction>                      actions;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.StartFleetActionsResult
// 0x0001
struct FStartFleetActionsResult
{
	unsigned char                                      UnknownData_SLTG[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct GameLift.SearchGameSessionsRequest
// 0x0048
struct FSearchGameSessionsRequest
{
	struct FString                                     awsResourceName;                                           // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     filterExpression;                                          // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     sortExpression;                                            // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                limit;                                                     // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_51VU[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     nextToken;                                                 // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.ResolveAliasRequest
// 0x0010
struct FResolveAliasRequest
{
	struct FString                                     aliasId;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.ResolveAliasResult
// 0x0010
struct FResolveAliasResult
{
	struct FString                                     fleetId;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.RequestUploadCredentialsRequest
// 0x0010
struct FRequestUploadCredentialsRequest
{
	struct FString                                     buildId;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.GameLiftCredentials
// 0x0030
struct FGameLiftCredentials
{
	struct FString                                     accessKeyId;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     secretAccessKey;                                           // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     sessionToken;                                              // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.TargetConfiguration
// 0x0004
struct FTargetConfiguration
{
	float                                              targetValue;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.PutScalingPolicyResult
// 0x0010
struct FPutScalingPolicyResult
{
	struct FString                                     Name;                                                      // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.ListScriptsRequest
// 0x0018
struct FListScriptsRequest
{
	int                                                limit;                                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PCGC[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     nextToken;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.ListFleetsRequest
// 0x0038
struct FListFleetsRequest
{
	struct FString                                     buildId;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     scriptId;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                limit;                                                     // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5T4V[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     nextToken;                                                 // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.ListFleetsResult
// 0x0020
struct FListFleetsResult
{
	TArray<struct FString>                             fleetIds;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     nextToken;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.ListBuildsRequest
// 0x0018
struct FListBuildsRequest
{
	GameLift_EBuildStatus                              status;                                                    // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MKWP[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                limit;                                                     // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     nextToken;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.GameLiftListAliasesRequest
// 0x0030
struct FGameLiftListAliasesRequest
{
	GameLift_ERoutingStrategyType                      routingStrategyType;                                       // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_I5MO[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Name;                                                      // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                limit;                                                     // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UXAM[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     nextToken;                                                 // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.GetInstanceAccessRequest
// 0x0020
struct FGetInstanceAccessRequest
{
	struct FString                                     fleetId;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     InstanceID;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.InstanceCredentials
// 0x0020
struct FInstanceCredentials
{
	struct FString                                     userName;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     secret;                                                    // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.GetGameSessionLogUrlRequest
// 0x0010
struct FGetGameSessionLogUrlRequest
{
	struct FString                                     gameSessionId;                                             // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.GetGameSessionLogUrlResult
// 0x0010
struct FGetGameSessionLogUrlResult
{
	struct FString                                     preSignedUrl;                                              // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.DescribeVpcPeeringConnectionsRequest
// 0x0010
struct FDescribeVpcPeeringConnectionsRequest
{
	struct FString                                     fleetId;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.VpcPeeringConnectionStatus
// 0x0020
struct FVpcPeeringConnectionStatus
{
	struct FString                                     code;                                                      // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Message;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.DescribeVpcPeeringAuthorizationsRequest
// 0x0001
struct FDescribeVpcPeeringAuthorizationsRequest
{
	unsigned char                                      UnknownData_KCHY[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct GameLift.DescribeScriptRequest
// 0x0010
struct FDescribeScriptRequest
{
	struct FString                                     scriptId;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.DescribeScalingPoliciesRequest
// 0x0028
struct FDescribeScalingPoliciesRequest
{
	struct FString                                     fleetId;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	GameLift_EScalingStatusType                        statusFilter;                                              // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6Y50[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                limit;                                                     // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     nextToken;                                                 // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.DescribeRuntimeConfigurationRequest
// 0x0010
struct FDescribeRuntimeConfigurationRequest
{
	struct FString                                     fleetId;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.DescribePlayerSessionsRequest
// 0x0058
struct FDescribePlayerSessionsRequest
{
	struct FString                                     awsResourceName;                                           // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     playerId;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     playerSessionId;                                           // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     playerSessionStatusFilter;                                 // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                limit;                                                     // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_P1CL[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     nextToken;                                                 // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.DescribeMatchmakingRuleSetsRequest
// 0x0028
struct FDescribeMatchmakingRuleSetsRequest
{
	TArray<struct FString>                             names;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                limit;                                                     // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_N5TJ[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     nextToken;                                                 // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.DescribeMatchmakingConfigurationsRequest
// 0x0038
struct FDescribeMatchmakingConfigurationsRequest
{
	TArray<struct FString>                             names;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     ruleSetName;                                               // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                limit;                                                     // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IUB9[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     nextToken;                                                 // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.DescribeMatchmakingRequest
// 0x0010
struct FDescribeMatchmakingRequest
{
	TArray<struct FString>                             ticketIds;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.DescribeInstancesRequest
// 0x0038
struct FDescribeInstancesRequest
{
	struct FString                                     fleetId;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     InstanceID;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                limit;                                                     // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JRO5[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     nextToken;                                                 // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.DescribeGameSessionsRequest
// 0x0038
struct FDescribeGameSessionsRequest
{
	struct FString                                     awsResourceName;                                           // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     statusFilter;                                              // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                limit;                                                     // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4OJR[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     nextToken;                                                 // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.DescribeGameSessionQueuesRequest
// 0x0028
struct FDescribeGameSessionQueuesRequest
{
	TArray<struct FString>                             names;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                limit;                                                     // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_A1H4[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     nextToken;                                                 // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.DescribeGameSessionPlacementRequest
// 0x0010
struct FDescribeGameSessionPlacementRequest
{
	struct FString                                     placementId;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.DescribeGameSessionDetailsRequest
// 0x0038
struct FDescribeGameSessionDetailsRequest
{
	struct FString                                     awsResourceName;                                           // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     statusFilter;                                              // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                limit;                                                     // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KXQ2[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     nextToken;                                                 // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.DescribeFleetUtilizationRequest
// 0x0028
struct FDescribeFleetUtilizationRequest
{
	TArray<struct FString>                             fleetIds;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                limit;                                                     // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HP4B[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     nextToken;                                                 // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.FleetUtilization
// 0x0020
struct FFleetUtilization
{
	struct FString                                     fleetId;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                activeServerProcessCount;                                  // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                activeGameSessionCount;                                    // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                currentPlayerSessionCount;                                 // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                maximumPlayerSessionCount;                                 // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.DescribeFleetPortSettingsRequest
// 0x0010
struct FDescribeFleetPortSettingsRequest
{
	struct FString                                     fleetId;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.DescribeFleetCapacityRequest
// 0x0028
struct FDescribeFleetCapacityRequest
{
	TArray<struct FString>                             fleetIds;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                limit;                                                     // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7IGP[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     nextToken;                                                 // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.EC2InstanceCounts
// 0x001C
struct FEC2InstanceCounts
{
	int                                                DESIRED;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MINIMUM;                                                   // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MAXIMUM;                                                   // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PENDING;                                                   // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ACTIVE;                                                    // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                IDLE;                                                      // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TERMINATING;                                               // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.DescribeFleetAttributesRequest
// 0x0028
struct FDescribeFleetAttributesRequest
{
	TArray<struct FString>                             fleetIds;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                limit;                                                     // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_STVP[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     nextToken;                                                 // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.CertificateConfiguration
// 0x0001
struct FCertificateConfiguration
{
	GameLift_ECertificateType                          certificateType;                                           // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.DescribeEC2InstanceLimitsRequest
// 0x0001
struct FDescribeEC2InstanceLimitsRequest
{
	GameLift_EEC2InstanceType                          eC2InstanceType;                                           // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.EC2InstanceLimit
// 0x000C
struct FEC2InstanceLimit
{
	GameLift_EEC2InstanceType                          eC2InstanceType;                                           // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8KJP[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                currentInstances;                                          // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                instanceLimit;                                             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.DescribeBuildRequest
// 0x0010
struct FDescribeBuildRequest
{
	struct FString                                     buildId;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.DescribeAliasRequest
// 0x0010
struct FDescribeAliasRequest
{
	struct FString                                     aliasId;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.DeleteVpcPeeringConnectionRequest
// 0x0020
struct FDeleteVpcPeeringConnectionRequest
{
	struct FString                                     fleetId;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     vpcPeeringConnectionId;                                    // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.DeleteVpcPeeringConnectionResult
// 0x0001
struct FDeleteVpcPeeringConnectionResult
{
	unsigned char                                      UnknownData_PFNT[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct GameLift.DeleteVpcPeeringAuthorizationRequest
// 0x0020
struct FDeleteVpcPeeringAuthorizationRequest
{
	struct FString                                     gameLiftAwsAccountId;                                      // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     peerVpcId;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.DeleteVpcPeeringAuthorizationResult
// 0x0001
struct FDeleteVpcPeeringAuthorizationResult
{
	unsigned char                                      UnknownData_Y6VC[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct GameLift.DeleteScriptRequest
// 0x0010
struct FDeleteScriptRequest
{
	struct FString                                     scriptId;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.DeleteScalingPolicyRequest
// 0x0020
struct FDeleteScalingPolicyRequest
{
	struct FString                                     Name;                                                      // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     fleetId;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.DeleteMatchmakingRuleSetRequest
// 0x0010
struct FDeleteMatchmakingRuleSetRequest
{
	struct FString                                     Name;                                                      // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.DeleteMatchmakingRuleSetResult
// 0x0001
struct FDeleteMatchmakingRuleSetResult
{
	unsigned char                                      UnknownData_TI5X[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct GameLift.DeleteMatchmakingConfigurationRequest
// 0x0010
struct FDeleteMatchmakingConfigurationRequest
{
	struct FString                                     Name;                                                      // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.DeleteMatchmakingConfigurationResult
// 0x0001
struct FDeleteMatchmakingConfigurationResult
{
	unsigned char                                      UnknownData_EIQP[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct GameLift.DeleteGameSessionQueueRequest
// 0x0010
struct FDeleteGameSessionQueueRequest
{
	struct FString                                     Name;                                                      // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.DeleteGameSessionQueueResult
// 0x0001
struct FDeleteGameSessionQueueResult
{
	unsigned char                                      UnknownData_7G40[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct GameLift.DeleteFleetRequest
// 0x0010
struct FDeleteFleetRequest
{
	struct FString                                     fleetId;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.DeleteBuildRequest
// 0x0010
struct FDeleteBuildRequest
{
	struct FString                                     buildId;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.GameLiftDeleteAliasRequest
// 0x0010
struct FGameLiftDeleteAliasRequest
{
	struct FString                                     aliasId;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.CreateVpcPeeringConnectionRequest
// 0x0030
struct FCreateVpcPeeringConnectionRequest
{
	struct FString                                     fleetId;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     peerVpcAwsAccountId;                                       // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     peerVpcId;                                                 // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.CreateVpcPeeringConnectionResult
// 0x0001
struct FCreateVpcPeeringConnectionResult
{
	unsigned char                                      UnknownData_0LWC[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct GameLift.CreateVpcPeeringAuthorizationRequest
// 0x0020
struct FCreateVpcPeeringAuthorizationRequest
{
	struct FString                                     gameLiftAwsAccountId;                                      // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     peerVpcId;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.CreatePlayerSessionsRequest
// 0x0070
struct FCreatePlayerSessionsRequest
{
	struct FString                                     awsResourceName;                                           // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             playerIds;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<struct FString, struct FString>               playerDataMap;                                             // 0x0020(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.CreatePlayerSessionRequest
// 0x0030
struct FCreatePlayerSessionRequest
{
	struct FString                                     awsResourceName;                                           // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     playerId;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     playerData;                                                // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.CreateMatchmakingRuleSetRequest
// 0x0020
struct FCreateMatchmakingRuleSetRequest
{
	struct FString                                     Name;                                                      // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ruleSetBody;                                               // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.AcceptMatchRequest
// 0x0028
struct FAcceptMatchRequest
{
	struct FString                                     ticketId;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             playerIds;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	GameLift_EAcceptanceType                           acceptanceType;                                            // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SSZG[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct GameLift.AcceptMatchResult
// 0x0001
struct FAcceptMatchResult
{
	unsigned char                                      UnknownData_SDGE[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct GameLift.UpdateScriptRequest
// 0x0080
struct FUpdateScriptRequest
{
	struct FString                                     scriptId;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Name;                                                      // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Version;                                                   // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FS3Location                                 storageLocation;                                           // 0x0030(0x0040) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FString                                     zipFile;                                                   // 0x0070(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.Script
// 0x0080
struct FScript
{
	struct FString                                     scriptId;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Name;                                                      // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Version;                                                   // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                sizeOnDisk;                                                // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QUZC[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDateTime                                   creationTime;                                              // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FS3Location                                 storageLocation;                                           // 0x0040(0x0040) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.UpdateScriptResult
// 0x0080
struct FUpdateScriptResult
{
	struct FScript                                     Script;                                                    // 0x0000(0x0080) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.RuntimeConfiguration
// 0x0018
struct FRuntimeConfiguration
{
	TArray<struct FServerProcess>                      serverProcesses;                                           // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                maxConcurrentGameSessionActivations;                       // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                gameSessionActivationTimeoutSeconds;                       // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.UpdateRuntimeConfigurationResult
// 0x0018
struct FUpdateRuntimeConfigurationResult
{
	struct FRuntimeConfiguration                       RuntimeConfiguration;                                      // 0x0000(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.UpdateMatchmakingConfigurationRequest
// 0x00A0
struct FUpdateMatchmakingConfigurationRequest
{
	struct FString                                     Name;                                                      // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Description;                                               // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             gameSessionQueueArns;                                      // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                requestTimeoutSeconds;                                     // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                acceptanceTimeoutSeconds;                                  // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               acceptanceRequired;                                        // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DWR7[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ruleSetName;                                               // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     notificationTarget;                                        // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                additionalPlayerCount;                                     // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WLE9[0x4];                                     // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     customEventData;                                           // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FGameProperty>                       gameProperties;                                            // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     gameSessionData;                                           // 0x0088(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	GameLift_EBackfillMode                             backfillMode;                                              // 0x0098(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JMD7[0x7];                                     // 0x0099(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct GameLift.AWSGameSession
// 0x00B8
struct FAWSGameSession
{
	struct FString                                     gameSessionId;                                             // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Name;                                                      // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     fleetId;                                                   // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   creationTime;                                              // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   terminationTime;                                           // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                currentPlayerSessionCount;                                 // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                maximumPlayerSessionCount;                                 // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	GameLift_EGameSessionStatus                        status;                                                    // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	GameLift_EGameSessionStatusReason                  statusReason;                                              // 0x0049(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_I2V4[0x6];                                     // 0x004A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FGameProperty>                       gameProperties;                                            // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     ipAddress;                                                 // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     dnsName;                                                   // 0x0070(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Port;                                                      // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	GameLift_EPlayerSessionCreationPolicy              playerSessionCreationPolicy;                               // 0x0084(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WBMF[0x3];                                     // 0x0085(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     creatorId;                                                 // 0x0088(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     gameSessionData;                                           // 0x0098(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     matchmakerData;                                            // 0x00A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.UpdateGameSessionResult
// 0x00B8
struct FUpdateGameSessionResult
{
	struct FAWSGameSession                             GameSession;                                               // 0x0000(0x00B8) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.Alias
// 0x0078
struct FAlias
{
	struct FString                                     aliasId;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Name;                                                      // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     aliasArn;                                                  // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Description;                                               // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRoutingStrategy                            RoutingStrategy;                                           // 0x0040(0x0028) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FDateTime                                   creationTime;                                              // 0x0068(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   lastUpdatedTime;                                           // 0x0070(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.GameLiftListAliasesResult
// 0x0020
struct FGameLiftListAliasesResult
{
	TArray<struct FAlias>                              aliases;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     nextToken;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.UpdateRuntimeConfigurationRequest
// 0x0028
struct FUpdateRuntimeConfigurationRequest
{
	struct FString                                     fleetId;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRuntimeConfiguration                       RuntimeConfiguration;                                      // 0x0010(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.DescribeGameSessionsResult
// 0x0020
struct FDescribeGameSessionsResult
{
	TArray<struct FAWSGameSession>                     gameSessions;                                              // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     nextToken;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.AWSGameSessionDetail
// 0x00C0
struct FAWSGameSessionDetail
{
	struct FAWSGameSession                             GameSession;                                               // 0x0000(0x00B8) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	GameLift_EProtectionPolicy                         protectionPolicy;                                          // 0x00B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_66YX[0x7];                                     // 0x00B9(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct GameLift.DescribeGameSessionDetailsResult
// 0x0020
struct FDescribeGameSessionDetailsResult
{
	TArray<struct FAWSGameSessionDetail>               gameSessionDetails;                                        // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     nextToken;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.UpdateGameSessionQueueRequest
// 0x0038
struct FUpdateGameSessionQueueRequest
{
	struct FString                                     Name;                                                      // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                timeoutInSeconds;                                          // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_R364[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FPlayerLatencyPolicy>                playerLatencyPolicies;                                     // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FGameSessionQueueDestination>        destinations;                                              // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.GameSessionQueue
// 0x0048
struct FGameSessionQueue
{
	struct FString                                     Name;                                                      // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     gameSessionQueueArn;                                       // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                timeoutInSeconds;                                          // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LLEI[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FPlayerLatencyPolicy>                playerLatencyPolicies;                                     // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FGameSessionQueueDestination>        destinations;                                              // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.UpdateGameSessionQueueResult
// 0x0048
struct FUpdateGameSessionQueueResult
{
	struct FGameSessionQueue                           GameSessionQueue;                                          // 0x0000(0x0048) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.Build
// 0x0048
struct FBuild
{
	struct FString                                     buildId;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Name;                                                      // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Version;                                                   // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	GameLift_EBuildStatus                              status;                                                    // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TNFW[0x3];                                     // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                sizeOnDisk;                                                // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	GameLift_EOperatingSystem                          operatingSystem;                                           // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NV92[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDateTime                                   creationTime;                                              // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.DescribeBuildResult
// 0x0048
struct FDescribeBuildResult
{
	struct FBuild                                      Build;                                                     // 0x0000(0x0048) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.MatchmakingRuleSet
// 0x0028
struct FMatchmakingRuleSet
{
	struct FString                                     ruleSetName;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ruleSetBody;                                               // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   creationTime;                                              // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.CreateMatchmakingRuleSetResult
// 0x0028
struct FCreateMatchmakingRuleSetResult
{
	struct FMatchmakingRuleSet                         ruleSet;                                                   // 0x0000(0x0028) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.MatchmakingConfiguration
// 0x00A8
struct FMatchmakingConfiguration
{
	struct FString                                     Name;                                                      // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Description;                                               // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             gameSessionQueueArns;                                      // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                requestTimeoutSeconds;                                     // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                acceptanceTimeoutSeconds;                                  // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               acceptanceRequired;                                        // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HY0Z[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ruleSetName;                                               // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     notificationTarget;                                        // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                additionalPlayerCount;                                     // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5YFJ[0x4];                                     // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     customEventData;                                           // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   creationTime;                                              // 0x0078(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FGameProperty>                       gameProperties;                                            // 0x0080(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     gameSessionData;                                           // 0x0090(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	GameLift_EBackfillMode                             backfillMode;                                              // 0x00A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PX0B[0x7];                                     // 0x00A1(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct GameLift.UpdateMatchmakingConfigurationResult
// 0x00A8
struct FUpdateMatchmakingConfigurationResult
{
	struct FMatchmakingConfiguration                   configuration;                                             // 0x0000(0x00A8) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.UpdateFleetAttributesRequest
// 0x0050
struct FUpdateFleetAttributesRequest
{
	struct FString                                     fleetId;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Name;                                                      // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Description;                                               // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	GameLift_EProtectionPolicy                         newGameSessionProtectionPolicy;                            // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3CUR[0x3];                                     // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FResourceCreationLimitPolicy                ResourceCreationLimitPolicy;                               // 0x0034(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BT03[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FString>                             metricGroups;                                              // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.GameSessionPlacement
// 0x00F8
struct FGameSessionPlacement
{
	struct FString                                     placementId;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     gameSessionQueueName;                                      // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	GameLift_EGameSessionPlacementState                status;                                                    // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_R0Q0[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FGameProperty>                       gameProperties;                                            // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                maximumPlayerSessionCount;                                 // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_O9MH[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     gameSessionName;                                           // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     gameSessionId;                                             // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     gameSessionArn;                                            // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     gameSessionRegion;                                         // 0x0070(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPlayerLatency>                      playerLatencies;                                           // 0x0080(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FDateTime                                   startTime;                                                 // 0x0090(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   endTime;                                                   // 0x0098(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ipAddress;                                                 // 0x00A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     dnsName;                                                   // 0x00B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Port;                                                      // 0x00C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9920[0x4];                                     // 0x00C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FPlacedPlayerSession>                placedPlayerSessions;                                      // 0x00C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     gameSessionData;                                           // 0x00D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     matchmakerData;                                            // 0x00E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.StopGameSessionPlacementResult
// 0x00F8
struct FStopGameSessionPlacementResult
{
	struct FGameSessionPlacement                       GameSessionPlacement;                                      // 0x0000(0x00F8) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.CreateGameSessionRequest
// 0x0078
struct FCreateGameSessionRequest
{
	struct FString                                     awsResourceName;                                           // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                maximumPlayerSessionCount;                                 // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HBW9[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Name;                                                      // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FGameProperty>                       gameProperties;                                            // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     creatorId;                                                 // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     gameSessionId;                                             // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     idempotencyToken;                                          // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     gameSessionData;                                           // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.CreateGameSessionResult
// 0x00B8
struct FCreateGameSessionResult
{
	struct FAWSGameSession                             GameSession;                                               // 0x0000(0x00B8) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.CreateFleetRequest
// 0x0100
struct FCreateFleetRequest
{
	struct FString                                     Name;                                                      // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Description;                                               // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     buildId;                                                   // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     scriptId;                                                  // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     serverLaunchPath;                                          // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     serverLaunchParameters;                                    // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             logPaths;                                                  // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	GameLift_EEC2InstanceType                          eC2InstanceType;                                           // 0x0070(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ST6S[0x7];                                     // 0x0071(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FIpPermission>                       eC2InboundPermissions;                                     // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	GameLift_EProtectionPolicy                         newGameSessionProtectionPolicy;                            // 0x0088(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7MDX[0x7];                                     // 0x0089(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRuntimeConfiguration                       RuntimeConfiguration;                                      // 0x0090(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FResourceCreationLimitPolicy                ResourceCreationLimitPolicy;                               // 0x00A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             metricGroups;                                              // 0x00B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     peerVpcAwsAccountId;                                       // 0x00C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     peerVpcId;                                                 // 0x00D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	GameLift_EFleetType                                fleetType;                                                 // 0x00E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NFXZ[0x7];                                     // 0x00E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     instanceRoleArn;                                           // 0x00E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCertificateConfiguration                   CertificateConfiguration;                                  // 0x00F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NINU[0x7];                                     // 0x00F9(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct GameLift.FleetAttributes
// 0x00F8
struct FFleetAttributes
{
	struct FString                                     fleetId;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     fleetArn;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	GameLift_EFleetType                                fleetType;                                                 // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	GameLift_EEC2InstanceType                          instanceType;                                              // 0x0021(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HCB9[0x6];                                     // 0x0022(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Description;                                               // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Name;                                                      // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   creationTime;                                              // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   terminationTime;                                           // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	GameLift_EFleetStatus                              status;                                                    // 0x0058(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CUBU[0x7];                                     // 0x0059(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     buildId;                                                   // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     scriptId;                                                  // 0x0070(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     serverLaunchPath;                                          // 0x0080(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     serverLaunchParameters;                                    // 0x0090(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             logPaths;                                                  // 0x00A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	GameLift_EProtectionPolicy                         newGameSessionProtectionPolicy;                            // 0x00B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	GameLift_EOperatingSystem                          operatingSystem;                                           // 0x00B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FDMK[0x2];                                     // 0x00B2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FResourceCreationLimitPolicy                ResourceCreationLimitPolicy;                               // 0x00B4(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JA62[0x4];                                     // 0x00BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FString>                             metricGroups;                                              // 0x00C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<GameLift_EFleetAction>                      stoppedActions;                                            // 0x00D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     instanceRoleArn;                                           // 0x00E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCertificateConfiguration                   CertificateConfiguration;                                  // 0x00F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JZ5P[0x7];                                     // 0x00F1(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct GameLift.CreateFleetResult
// 0x00F8
struct FCreateFleetResult
{
	struct FFleetAttributes                            FleetAttributes;                                           // 0x0000(0x00F8) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.UpdateFleetPortSettingsRequest
// 0x0030
struct FUpdateFleetPortSettingsRequest
{
	struct FString                                     fleetId;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FIpPermission>                       inboundPermissionAuthorizations;                           // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FIpPermission>                       inboundPermissionRevocations;                              // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.AWSPlayer
// 0x00C0
struct FAWSPlayer
{
	struct FString                                     playerId;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FString, struct FGameLiftAttributeValue> playerAttributes;                                          // 0x0010(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     Team;                                                      // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FString, int>                          latencyInMs;                                               // 0x0070(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.StartMatchBackfillRequest
// 0x0040
struct FStartMatchBackfillRequest
{
	struct FString                                     ticketId;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     configurationName;                                         // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     gameSessionArn;                                            // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAWSPlayer>                          Players;                                                   // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.AWSGameSessionConnectionInfo
// 0x0048
struct FAWSGameSessionConnectionInfo
{
	struct FString                                     gameSessionArn;                                            // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ipAddress;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     dnsName;                                                   // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Port;                                                      // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZNZG[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FMatchedPlayerSession>               matchedPlayerSessions;                                     // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.MatchmakingTicket
// 0x00B8
struct FMatchmakingTicket
{
	struct FString                                     ticketId;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     configurationName;                                         // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	GameLift_EMatchmakingConfigurationStatus           status;                                                    // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M3EK[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     statusReason;                                              // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     statusMessage;                                             // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   startTime;                                                 // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   endTime;                                                   // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAWSPlayer>                          Players;                                                   // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FAWSGameSessionConnectionInfo               gameSessionConnectionInfo;                                 // 0x0068(0x0048) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	int                                                estimatedWaitTime;                                         // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M2ZP[0x4];                                     // 0x00B4(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct GameLift.StartMatchBackfillResult
// 0x00B8
struct FStartMatchBackfillResult
{
	struct FMatchmakingTicket                          MatchmakingTicket;                                         // 0x0000(0x00B8) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.ListBuildsResult
// 0x0020
struct FListBuildsResult
{
	TArray<struct FBuild>                              builds;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     nextToken;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.UpdateBuildResult
// 0x0048
struct FUpdateBuildResult
{
	struct FBuild                                      Build;                                                     // 0x0000(0x0048) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.DescribeScriptResult
// 0x0080
struct FDescribeScriptResult
{
	struct FScript                                     Script;                                                    // 0x0000(0x0080) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.GameLiftUpdateAliasRequest
// 0x0058
struct FGameLiftUpdateAliasRequest
{
	struct FString                                     aliasId;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Name;                                                      // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Description;                                               // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRoutingStrategy                            RoutingStrategy;                                           // 0x0030(0x0028) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.GameLiftUpdateAliasResult
// 0x0078
struct FGameLiftUpdateAliasResult
{
	struct FAlias                                      Alias;                                                     // 0x0000(0x0078) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.StartMatchmakingRequest
// 0x0030
struct FStartMatchmakingRequest
{
	struct FString                                     ticketId;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     configurationName;                                         // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAWSPlayer>                          Players;                                                   // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.InstanceAccess
// 0x0058
struct FInstanceAccess
{
	struct FString                                     fleetId;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     InstanceID;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ipAddress;                                                 // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	GameLift_EOperatingSystem                          operatingSystem;                                           // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_R5H4[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FInstanceCredentials                        credentials;                                               // 0x0038(0x0020) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.GetInstanceAccessResult
// 0x0058
struct FGetInstanceAccessResult
{
	struct FInstanceAccess                             InstanceAccess;                                            // 0x0000(0x0058) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.StartMatchmakingResult
// 0x00B8
struct FStartMatchmakingResult
{
	struct FMatchmakingTicket                          MatchmakingTicket;                                         // 0x0000(0x00B8) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.StartGameSessionPlacementRequest
// 0x0078
struct FStartGameSessionPlacementRequest
{
	struct FString                                     placementId;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     gameSessionQueueName;                                      // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FGameProperty>                       gameProperties;                                            // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                maximumPlayerSessionCount;                                 // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZA6N[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     gameSessionName;                                           // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPlayerLatency>                      playerLatencies;                                           // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FDesiredPlayerSession>               desiredPlayerSessions;                                     // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     gameSessionData;                                           // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.StartGameSessionPlacementResult
// 0x00F8
struct FStartGameSessionPlacementResult
{
	struct FGameSessionPlacement                       GameSessionPlacement;                                      // 0x0000(0x00F8) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.SearchGameSessionsResult
// 0x0020
struct FSearchGameSessionsResult
{
	TArray<struct FAWSGameSession>                     gameSessions;                                              // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     nextToken;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.AWSPlayerSession
// 0x0090
struct FAWSPlayerSession
{
	struct FString                                     playerSessionId;                                           // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     playerId;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     gameSessionId;                                             // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     fleetId;                                                   // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   creationTime;                                              // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   terminationTime;                                           // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	GameLift_EPlayerSessionStatus                      status;                                                    // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XJWO[0x7];                                     // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ipAddress;                                                 // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     dnsName;                                                   // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Port;                                                      // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZPEE[0x4];                                     // 0x007C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     playerData;                                                // 0x0080(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.DescribePlayerSessionsResult
// 0x0020
struct FDescribePlayerSessionsResult
{
	TArray<struct FAWSPlayerSession>                   playerSessions;                                            // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     nextToken;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.DescribeMatchmakingResult
// 0x0010
struct FDescribeMatchmakingResult
{
	TArray<struct FMatchmakingTicket>                  ticketList;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.VpcPeeringAuthorization
// 0x0040
struct FVpcPeeringAuthorization
{
	struct FString                                     gameLiftAwsAccountId;                                      // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     peerVpcAwsAccountId;                                       // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     peerVpcId;                                                 // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   creationTime;                                              // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   expirationTime;                                            // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.CreateVpcPeeringAuthorizationResult
// 0x0040
struct FCreateVpcPeeringAuthorizationResult
{
	struct FVpcPeeringAuthorization                    VpcPeeringAuthorization;                                   // 0x0000(0x0040) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.CreateScriptRequest
// 0x0070
struct FCreateScriptRequest
{
	struct FString                                     Name;                                                      // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Version;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FS3Location                                 storageLocation;                                           // 0x0020(0x0040) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FString                                     zipFile;                                                   // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.CreateScriptResult
// 0x0080
struct FCreateScriptResult
{
	struct FScript                                     Script;                                                    // 0x0000(0x0080) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.RequestUploadCredentialsResult
// 0x0070
struct FRequestUploadCredentialsResult
{
	struct FGameLiftCredentials                        uploadCredentials;                                         // 0x0000(0x0030) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FS3Location                                 storageLocation;                                           // 0x0030(0x0040) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.GameLiftCreateAliasRequest
// 0x0048
struct FGameLiftCreateAliasRequest
{
	struct FString                                     Name;                                                      // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Description;                                               // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRoutingStrategy                            RoutingStrategy;                                           // 0x0020(0x0028) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.GameLiftCreateAliasResult
// 0x0078
struct FGameLiftCreateAliasResult
{
	struct FAlias                                      Alias;                                                     // 0x0000(0x0078) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.PutScalingPolicyRequest
// 0x0040
struct FPutScalingPolicyRequest
{
	struct FString                                     Name;                                                      // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     fleetId;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                scalingAdjustment;                                         // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	GameLift_EScalingAdjustmentType                    scalingAdjustmentType;                                     // 0x0024(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SR6D[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              threshold;                                                 // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	GameLift_EComparisonOperatorType                   comparisonOperator;                                        // 0x002C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_23F7[0x3];                                     // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                evaluationPeriods;                                         // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	GameLift_EMetricName                               metricName;                                                // 0x0034(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	GameLift_EPolicyType                               policyType;                                                // 0x0035(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HKTS[0x2];                                     // 0x0036(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTargetConfiguration                        TargetConfiguration;                                       // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4VA2[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct GameLift.DescribeGameSessionQueuesResult
// 0x0020
struct FDescribeGameSessionQueuesResult
{
	TArray<struct FGameSessionQueue>                   gameSessionQueues;                                         // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     nextToken;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.DescribeFleetUtilizationResult
// 0x0020
struct FDescribeFleetUtilizationResult
{
	TArray<struct FFleetUtilization>                   FleetUtilization;                                          // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     nextToken;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.DescribeFleetEventsRequest
// 0x0038
struct FDescribeFleetEventsRequest
{
	struct FString                                     fleetId;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   startTime;                                                 // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   endTime;                                                   // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                limit;                                                     // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LB23[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     nextToken;                                                 // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.ListScriptsResult
// 0x0020
struct FListScriptsResult
{
	TArray<struct FScript>                             scripts;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     nextToken;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.DescribeVpcPeeringAuthorizationsResult
// 0x0010
struct FDescribeVpcPeeringAuthorizationsResult
{
	TArray<struct FVpcPeeringAuthorization>            vpcPeeringAuthorizations;                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.ScalingPolicy
// 0x0040
struct FScalingPolicy
{
	struct FString                                     fleetId;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Name;                                                      // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	GameLift_EScalingStatusType                        status;                                                    // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DFJE[0x3];                                     // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                scalingAdjustment;                                         // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	GameLift_EScalingAdjustmentType                    scalingAdjustmentType;                                     // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	GameLift_EComparisonOperatorType                   comparisonOperator;                                        // 0x0029(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OS4X[0x2];                                     // 0x002A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              threshold;                                                 // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                evaluationPeriods;                                         // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	GameLift_EMetricName                               metricName;                                                // 0x0034(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	GameLift_EPolicyType                               policyType;                                                // 0x0035(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SU8Q[0x2];                                     // 0x0036(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTargetConfiguration                        TargetConfiguration;                                       // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QOOI[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct GameLift.DescribeScalingPoliciesResult
// 0x0020
struct FDescribeScalingPoliciesResult
{
	TArray<struct FScalingPolicy>                      scalingPolicies;                                           // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     nextToken;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.VpcPeeringConnection
// 0x0070
struct FVpcPeeringConnection
{
	struct FString                                     fleetId;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ipV4CidrBlock;                                             // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     vpcPeeringConnectionId;                                    // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVpcPeeringConnectionStatus                 status;                                                    // 0x0030(0x0020) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FString                                     peerVpcId;                                                 // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     gameLiftVpcId;                                             // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.DescribeVpcPeeringConnectionsResult
// 0x0010
struct FDescribeVpcPeeringConnectionsResult
{
	TArray<struct FVpcPeeringConnection>               vpcPeeringConnections;                                     // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.FleetCapacity
// 0x0030
struct FFleetCapacity
{
	struct FString                                     fleetId;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	GameLift_EEC2InstanceType                          instanceType;                                              // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_I3Z9[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEC2InstanceCounts                          instanceCounts;                                            // 0x0014(0x001C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.DescribeFleetCapacityResult
// 0x0020
struct FDescribeFleetCapacityResult
{
	TArray<struct FFleetCapacity>                      FleetCapacity;                                             // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     nextToken;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.DescribeRuntimeConfigurationResult
// 0x0018
struct FDescribeRuntimeConfigurationResult
{
	struct FRuntimeConfiguration                       RuntimeConfiguration;                                      // 0x0000(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.DescribeMatchmakingConfigurationsResult
// 0x0020
struct FDescribeMatchmakingConfigurationsResult
{
	TArray<struct FMatchmakingConfiguration>           configurations;                                            // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     nextToken;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.DescribeMatchmakingRuleSetsResult
// 0x0020
struct FDescribeMatchmakingRuleSetsResult
{
	TArray<struct FMatchmakingRuleSet>                 ruleSets;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     nextToken;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.Instance
// 0x0050
struct FInstance
{
	struct FString                                     fleetId;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     InstanceID;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ipAddress;                                                 // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     dnsName;                                                   // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	GameLift_EOperatingSystem                          operatingSystem;                                           // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	GameLift_EEC2InstanceType                          Type;                                                      // 0x0041(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	GameLift_EInstanceStatus                           status;                                                    // 0x0042(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RN0D[0x5];                                     // 0x0043(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDateTime                                   creationTime;                                              // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.DescribeInstancesResult
// 0x0020
struct FDescribeInstancesResult
{
	TArray<struct FInstance>                           Instances;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     nextToken;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.CreateBuildResult
// 0x00B8
struct FCreateBuildResult
{
	struct FBuild                                      Build;                                                     // 0x0000(0x0048) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGameLiftCredentials                        uploadCredentials;                                         // 0x0048(0x0030) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FS3Location                                 storageLocation;                                           // 0x0078(0x0040) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.DescribeGameSessionPlacementResult
// 0x00F8
struct FDescribeGameSessionPlacementResult
{
	struct FGameSessionPlacement                       GameSessionPlacement;                                      // 0x0000(0x00F8) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.DescribeFleetPortSettingsResult
// 0x0010
struct FDescribeFleetPortSettingsResult
{
	TArray<struct FIpPermission>                       inboundPermissions;                                        // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.DescribeEC2InstanceLimitsResult
// 0x0010
struct FDescribeEC2InstanceLimitsResult
{
	TArray<struct FEC2InstanceLimit>                   EC2InstanceLimits;                                         // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.CreatePlayerSessionsResult
// 0x0010
struct FCreatePlayerSessionsResult
{
	TArray<struct FAWSPlayerSession>                   playerSessions;                                            // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.AWSEvent
// 0x0050
struct FAWSEvent
{
	struct FString                                     eventId;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     resourceId;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	GameLift_EEventCode                                eventCode;                                                 // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_G9S5[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Message;                                                   // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   eventTime;                                                 // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     preSignedLogUrl;                                           // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.DescribeFleetEventsResult
// 0x0020
struct FDescribeFleetEventsResult
{
	TArray<struct FAWSEvent>                           events;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     nextToken;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.DescribeFleetAttributesResult
// 0x0020
struct FDescribeFleetAttributesResult
{
	TArray<struct FFleetAttributes>                    FleetAttributes;                                           // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     nextToken;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.DescribeAliasResult
// 0x0078
struct FDescribeAliasResult
{
	struct FAlias                                      Alias;                                                     // 0x0000(0x0078) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.CreatePlayerSessionResult
// 0x0090
struct FCreatePlayerSessionResult
{
	struct FAWSPlayerSession                           playerSession;                                             // 0x0000(0x0090) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.CreateMatchmakingConfigurationRequest
// 0x00A0
struct FCreateMatchmakingConfigurationRequest
{
	struct FString                                     Name;                                                      // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Description;                                               // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             gameSessionQueueArns;                                      // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                requestTimeoutSeconds;                                     // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                acceptanceTimeoutSeconds;                                  // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               acceptanceRequired;                                        // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EZPF[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ruleSetName;                                               // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     notificationTarget;                                        // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                additionalPlayerCount;                                     // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KTHI[0x4];                                     // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     customEventData;                                           // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FGameProperty>                       gameProperties;                                            // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     gameSessionData;                                           // 0x0088(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	GameLift_EBackfillMode                             backfillMode;                                              // 0x0098(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EZSF[0x7];                                     // 0x0099(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct GameLift.CreateMatchmakingConfigurationResult
// 0x00A8
struct FCreateMatchmakingConfigurationResult
{
	struct FMatchmakingConfiguration                   configuration;                                             // 0x0000(0x00A8) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.CreateGameSessionQueueRequest
// 0x0038
struct FCreateGameSessionQueueRequest
{
	struct FString                                     Name;                                                      // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                timeoutInSeconds;                                          // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IFJ7[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FPlayerLatencyPolicy>                playerLatencyPolicies;                                     // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FGameSessionQueueDestination>        destinations;                                              // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.CreateGameSessionQueueResult
// 0x0048
struct FCreateGameSessionQueueResult
{
	struct FGameSessionQueue                           GameSessionQueue;                                          // 0x0000(0x0048) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct GameLift.CreateBuildRequest
// 0x0068
struct FCreateBuildRequest
{
	struct FString                                     Name;                                                      // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Version;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FS3Location                                 storageLocation;                                           // 0x0020(0x0040) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	GameLift_EOperatingSystem                          operatingSystem;                                           // 0x0060(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TQYW[0x7];                                     // 0x0061(0x0007) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
