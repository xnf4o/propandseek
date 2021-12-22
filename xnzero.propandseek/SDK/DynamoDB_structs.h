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

// Enum DynamoDB.EAWSAttributeAction
enum class DynamoDB_EAWSAttributeAction : uint8_t
{
	EAWSAttributeAction__NOT_SET   = 0,
	EAWSAttributeAction__ADD       = 1,
	EAWSAttributeAction__PUT       = 2,
	EAWSAttributeAction__DELETE    = 3,
	EAWSAttributeAction__EAWSAttributeAction_MAX = 4,

};

// Enum DynamoDB.EAWSBackupStatus
enum class DynamoDB_EAWSBackupStatus : uint8_t
{
	EAWSBackupStatus__NOT_SET      = 0,
	EAWSBackupStatus__CREATING     = 1,
	EAWSBackupStatus__DELETED      = 2,
	EAWSBackupStatus__AVAILABLE    = 3,
	EAWSBackupStatus__EAWSBackupStatus_MAX = 4,

};

// Enum DynamoDB.EAWSBackupType
enum class DynamoDB_EAWSBackupType : uint8_t
{
	EAWSBackupType__NOT_SET        = 0,
	EAWSBackupType__USER           = 1,
	EAWSBackupType__SYSTEM         = 2,
	EAWSBackupType__AWS_BACKUP     = 3,
	EAWSBackupType__EAWSBackupType_MAX = 4,

};

// Enum DynamoDB.EAWSBackupTypeFilter
enum class DynamoDB_EAWSBackupTypeFilter : uint8_t
{
	EAWSBackupTypeFilter__NOT_SET  = 0,
	EAWSBackupTypeFilter__USER     = 1,
	EAWSBackupTypeFilter__SYSTEM   = 2,
	EAWSBackupTypeFilter__AWS_BACKUP = 3,
	EAWSBackupTypeFilter__ALL      = 4,
	EAWSBackupTypeFilter__EAWSBackupTypeFilter_MAX = 5,

};

// Enum DynamoDB.EAWSBillingMode
enum class DynamoDB_EAWSBillingMode : uint8_t
{
	EAWSBillingMode__NOT_SET       = 0,
	EAWSBillingMode__PROVISIONED   = 1,
	EAWSBillingMode__PAY_PER_REQUEST = 2,
	EAWSBillingMode__EAWSBillingMode_MAX = 3,

};

// Enum DynamoDB.EAWSComparisonOperator
enum class DynamoDB_EAWSComparisonOperator : uint8_t
{
	EAWSComparisonOperator__NOT_SET = 0,
	EAWSComparisonOperator__EQ     = 1,
	EAWSComparisonOperator__NE     = 2,
	EAWSComparisonOperator__IN_    = 3,
	EAWSComparisonOperator__LE     = 4,
	EAWSComparisonOperator__LT     = 5,
	EAWSComparisonOperator__GE     = 6,
	EAWSComparisonOperator__GT     = 7,
	EAWSComparisonOperator__BETWEEN = 8,
	EAWSComparisonOperator__NOT_NULL = 9,
	EAWSComparisonOperator__NULL_  = 10,
	EAWSComparisonOperator__CONTAINS = 11,
	EAWSComparisonOperator__NOT_CONTAINS = 12,
	EAWSComparisonOperator__BEGINS_WITH = 13,
	EAWSComparisonOperator__EAWSComparisonOperator_MAX = 14,

};

// Enum DynamoDB.EAWSConditionalOperator
enum class DynamoDB_EAWSConditionalOperator : uint8_t
{
	EAWSConditionalOperator__NOT_SET = 0,
	EAWSConditionalOperator__AND   = 1,
	EAWSConditionalOperator__OR    = 2,
	EAWSConditionalOperator__EAWSConditionalOperator_MAX = 3,

};

// Enum DynamoDB.EAWSContinuousBackupsStatus
enum class DynamoDB_EAWSContinuousBackupsStatus : uint8_t
{
	EAWSContinuousBackupsStatus__NOT_SET = 0,
	EAWSContinuousBackupsStatus__ENABLED = 1,
	EAWSContinuousBackupsStatus__DISABLED = 2,
	EAWSContinuousBackupsStatus__EAWSContinuousBackupsStatus_MAX = 3,

};

// Enum DynamoDB.EDynamoDBError
enum class DynamoDB_EDynamoDBError : uint8_t
{
	EDynamoDBError__INCOMPLETE_SIGNATURE = 0,
	EDynamoDBError__INTERNAL_FAILURE = 1,
	EDynamoDBError__INVALID_ACTION = 2,
	EDynamoDBError__INVALID_CLIENT_TOKEN_ID = 3,
	EDynamoDBError__INVALID_PARAMETER_COMBINATION = 4,
	EDynamoDBError__INVALID_QUERY_PARAMETER = 5,
	EDynamoDBError__INVALID_PARAMETER_VALUE = 6,
	EDynamoDBError__MISSING_ACTION = 7,
	EDynamoDBError__MISSING_AUTHENTICATION_TOKEN = 8,
	EDynamoDBError__MISSING_PARAMETER = 9,
	EDynamoDBError__OPT_IN_REQUIRED = 10,
	EDynamoDBError__REQUEST_EXPIRED = 11,
	EDynamoDBError__SERVICE_UNAVAILABLE = 12,
	EDynamoDBError__THROTTLING     = 13,
	EDynamoDBError__VALIDATION     = 14,
	EDynamoDBError__ACCESS_DENIED  = 15,
	EDynamoDBError__RESOURCE_NOT_FOUND = 16,
	EDynamoDBError__UNRECOGNIZED_CLIENT = 17,
	EDynamoDBError__MALFORMED_QUERY_STRING = 18,
	EDynamoDBError__SLOW_DOWN      = 19,
	EDynamoDBError__REQUEST_TIME_TOO_SKEWED = 20,
	EDynamoDBError__INVALID_SIGNATURE = 21,
	EDynamoDBError__SIGNATURE_DOES_NOT_MATCH = 22,
	EDynamoDBError__INVALID_ACCESS_KEY_ID = 23,
	EDynamoDBError__REQUEST_TIMEOUT = 24,
	EDynamoDBError__NETWORK_CONNECTION = 25,
	EDynamoDBError__UNKNOWN        = 26,
	EDynamoDBError__BACKUP_IN_USE  = 27,
	EDynamoDBError__BACKUP_NOT_FOUND = 28,
	EDynamoDBError__CONDITIONAL_CHECK_FAILED = 29,
	EDynamoDBError__CONTINUOUS_BACKUPS_UNAVAILABLE = 30,
	EDynamoDBError__GLOBAL_TABLE_ALREADY_EXISTS = 31,
	EDynamoDBError__GLOBAL_TABLE_NOT_FOUND = 32,
	EDynamoDBError__IDEMPOTENT_PARAMETER_MISMATCH = 33,
	EDynamoDBError__INDEX_NOT_FOUND = 34,
	EDynamoDBError__INVALID_RESTORE_TIME = 35,
	EDynamoDBError__ITEM_COLLECTION_SIZE_LIMIT_EXCEEDED = 36,
	EDynamoDBError__LIMIT_EXCEEDED = 37,
	EDynamoDBError__POINT_IN_TIME_RECOVERY_UNAVAILABLE = 38,
	EDynamoDBError__PROVISIONED_THROUGHPUT_EXCEEDED = 39,
	EDynamoDBError__REPLICA_ALREADY_EXISTS = 40,
	EDynamoDBError__REPLICA_NOT_FOUND = 41,
	EDynamoDBError__REQUEST_LIMIT_EXCEEDED = 42,
	EDynamoDBError__RESOURCE_IN_USE = 43,
	EDynamoDBError__TABLE_ALREADY_EXISTS = 44,
	EDynamoDBError__TABLE_IN_USE   = 45,
	EDynamoDBError__TABLE_NOT_FOUND = 46,
	EDynamoDBError__TRANSACTION_CANCELED = 47,
	EDynamoDBError__TRANSACTION_CONFLICT = 48,
	EDynamoDBError__TRANSACTION_IN_PROGRESS = 49,
	EDynamoDBError__EDynamoDBError_MAX = 50,

};

// Enum DynamoDB.EAWSDynamoDBKeyType
enum class DynamoDB_EAWSDynamoDBKeyType : uint8_t
{
	EAWSDynamoDBKeyType__NOT_SET   = 0,
	EAWSDynamoDBKeyType__HASH      = 1,
	EAWSDynamoDBKeyType__RANGE     = 2,
	EAWSDynamoDBKeyType__EAWSDynamoDBKeyType_MAX = 3,

};

// Enum DynamoDB.EAWSDynamoDBStreamViewType
enum class DynamoDB_EAWSDynamoDBStreamViewType : uint8_t
{
	EAWSDynamoDBStreamViewType__NOT_SET = 0,
	EAWSDynamoDBStreamViewType__NEW_IMAGE = 1,
	EAWSDynamoDBStreamViewType__OLD_IMAGE = 2,
	EAWSDynamoDBStreamViewType__NEW_AND_OLD_IMAGES = 3,
	EAWSDynamoDBStreamViewType__KEYS_ONLY = 4,
	EAWSDynamoDBStreamViewType__EAWSDynamoDBStreamViewType_MAX = 5,

};

// Enum DynamoDB.EAWSGlobalTableStatus
enum class DynamoDB_EAWSGlobalTableStatus : uint8_t
{
	EAWSGlobalTableStatus__NOT_SET = 0,
	EAWSGlobalTableStatus__CREATING = 1,
	EAWSGlobalTableStatus__ACTIVE  = 2,
	EAWSGlobalTableStatus__DELETING = 3,
	EAWSGlobalTableStatus__UPDATING = 4,
	EAWSGlobalTableStatus__EAWSGlobalTableStatus_MAX = 5,

};

// Enum DynamoDB.EAWSIndexStatus
enum class DynamoDB_EAWSIndexStatus : uint8_t
{
	EAWSIndexStatus__NOT_SET       = 0,
	EAWSIndexStatus__CREATING      = 1,
	EAWSIndexStatus__UPDATING      = 2,
	EAWSIndexStatus__DELETING      = 3,
	EAWSIndexStatus__ACTIVE        = 4,
	EAWSIndexStatus__EAWSIndexStatus_MAX = 5,

};

// Enum DynamoDB.EAWSPointInTimeRecoveryStatus
enum class DynamoDB_EAWSPointInTimeRecoveryStatus : uint8_t
{
	EAWSPointInTimeRecoveryStatus__NOT_SET = 0,
	EAWSPointInTimeRecoveryStatus__ENABLED = 1,
	EAWSPointInTimeRecoveryStatus__DISABLED = 2,
	EAWSPointInTimeRecoveryStatus__EAWSPointInTimeRecoveryStatus_MAX = 3,

};

// Enum DynamoDB.EAWSProjectionType
enum class DynamoDB_EAWSProjectionType : uint8_t
{
	EAWSProjectionType__NOT_SET    = 0,
	EAWSProjectionType__ALL        = 1,
	EAWSProjectionType__KEYS_ONLY  = 2,
	EAWSProjectionType__INCLUDE    = 3,
	EAWSProjectionType__EAWSProjectionType_MAX = 4,

};

// Enum DynamoDB.EAWSReplicaStatus
enum class DynamoDB_EAWSReplicaStatus : uint8_t
{
	EAWSReplicaStatus__NOT_SET     = 0,
	EAWSReplicaStatus__CREATING    = 1,
	EAWSReplicaStatus__UPDATING    = 2,
	EAWSReplicaStatus__DELETING    = 3,
	EAWSReplicaStatus__ACTIVE      = 4,
	EAWSReplicaStatus__EAWSReplicaStatus_MAX = 5,

};

// Enum DynamoDB.EAWSReturnConsumedCapacity
enum class DynamoDB_EAWSReturnConsumedCapacity : uint8_t
{
	EAWSReturnConsumedCapacity__NOT_SET = 0,
	EAWSReturnConsumedCapacity__INDEXES = 1,
	EAWSReturnConsumedCapacity__TOTAL = 2,
	EAWSReturnConsumedCapacity__NONE = 3,
	EAWSReturnConsumedCapacity__EAWSReturnConsumedCapacity_MAX = 4,

};

// Enum DynamoDB.EAWSReturnItemCollectionMetrics
enum class DynamoDB_EAWSReturnItemCollectionMetrics : uint8_t
{
	EAWSReturnItemCollectionMetrics__NOT_SET = 0,
	EAWSReturnItemCollectionMetrics__SIZE = 1,
	EAWSReturnItemCollectionMetrics__NONE = 2,
	EAWSReturnItemCollectionMetrics__EAWSReturnItemCollectionMetrics_MAX = 3,

};

// Enum DynamoDB.EAWSReturnValue
enum class DynamoDB_EAWSReturnValue : uint8_t
{
	EAWSReturnValue__NOT_SET       = 0,
	EAWSReturnValue__NONE          = 1,
	EAWSReturnValue__ALL_OLD       = 2,
	EAWSReturnValue__UPDATED_OLD   = 3,
	EAWSReturnValue__ALL_NEW       = 4,
	EAWSReturnValue__UPDATED_NEW   = 5,
	EAWSReturnValue__EAWSReturnValue_MAX = 6,

};

// Enum DynamoDB.EAWSReturnValuesOnConditionCheckFailure
enum class DynamoDB_EAWSReturnValuesOnConditionCheckFailure : uint8_t
{
	EAWSReturnValuesOnConditionCheckFailure__NOT_SET = 0,
	EAWSReturnValuesOnConditionCheckFailure__ALL_OLD = 1,
	EAWSReturnValuesOnConditionCheckFailure__NONE = 2,
	EAWSReturnValuesOnConditionCheckFailure__EAWSReturnValuesOnConditionCheckFailure_MAX = 3,

};

// Enum DynamoDB.EAWSScalarAttributeType
enum class DynamoDB_EAWSScalarAttributeType : uint8_t
{
	EAWSScalarAttributeType__NOT_SET = 0,
	EAWSScalarAttributeType__S     = 1,
	EAWSScalarAttributeType__N     = 2,
	EAWSScalarAttributeType__B     = 3,
	EAWSScalarAttributeType__EAWSScalarAttributeType_MAX = 4,

};

// Enum DynamoDB.EAWSSelect
enum class DynamoDB_EAWSSelect : uint8_t
{
	EAWSSelect__NOT_SET            = 0,
	EAWSSelect__ALL_ATTRIBUTES     = 1,
	EAWSSelect__ALL_PROJECTED_ATTRIBUTES = 2,
	EAWSSelect__SPECIFIC_ATTRIBUTES = 3,
	EAWSSelect__COUNT              = 4,
	EAWSSelect__EAWSSelect_MAX     = 5,

};

// Enum DynamoDB.EAWSSSEStatus
enum class DynamoDB_EAWSSSEStatus : uint8_t
{
	EAWSSSEStatus__NOT_SET         = 0,
	EAWSSSEStatus__ENABLING        = 1,
	EAWSSSEStatus__ENABLED         = 2,
	EAWSSSEStatus__DISABLING       = 3,
	EAWSSSEStatus__DISABLED        = 4,
	EAWSSSEStatus__UPDATING        = 5,
	EAWSSSEStatus__EAWSSSEStatus_MAX = 6,

};

// Enum DynamoDB.EAWSSSEType
enum class DynamoDB_EAWSSSEType : uint8_t
{
	EAWSSSEType__NOT_SET           = 0,
	EAWSSSEType__AES256            = 1,
	EAWSSSEType__KMS               = 2,
	EAWSSSEType__EAWSSSEType_MAX   = 3,

};

// Enum DynamoDB.EAWSTableStatus
enum class DynamoDB_EAWSTableStatus : uint8_t
{
	EAWSTableStatus__NOT_SET       = 0,
	EAWSTableStatus__CREATING      = 1,
	EAWSTableStatus__UPDATING      = 2,
	EAWSTableStatus__DELETING      = 3,
	EAWSTableStatus__ACTIVE        = 4,
	EAWSTableStatus__EAWSTableStatus_MAX = 5,

};

// Enum DynamoDB.EAWSTimeToLiveStatus
enum class DynamoDB_EAWSTimeToLiveStatus : uint8_t
{
	EAWSTimeToLiveStatus__NOT_SET  = 0,
	EAWSTimeToLiveStatus__ENABLING = 1,
	EAWSTimeToLiveStatus__DISABLING = 2,
	EAWSTimeToLiveStatus__ENABLED  = 3,
	EAWSTimeToLiveStatus__DISABLED = 4,
	EAWSTimeToLiveStatus__EAWSTimeToLiveStatus_MAX = 5,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct DynamoDB.TimeToLiveSpecification
// 0x0018
struct FTimeToLiveSpecification
{
	bool                                               Enabled;                                                   // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OAOH[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     attributeName;                                             // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.AttributeDefinition
// 0x0018
struct FAttributeDefinition
{
	struct FString                                     attributeName;                                             // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DynamoDB_EAWSScalarAttributeType                   AttributeType;                                             // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SYA8[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct DynamoDB.ProvisionedThroughput
// 0x0008
struct FProvisionedThroughput
{
	int                                                readCapacityUnits;                                         // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                writeCapacityUnits;                                        // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.DynamoDBKeySchemaElement
// 0x0018
struct FDynamoDBKeySchemaElement
{
	struct FString                                     attributeName;                                             // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DynamoDB_EAWSDynamoDBKeyType                       keyType;                                                   // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YLVS[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct DynamoDB.Projection
// 0x0018
struct FProjection
{
	DynamoDB_EAWSProjectionType                        projectionType;                                            // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IOEO[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FString>                             nonKeyAttributes;                                          // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.DeleteGlobalSecondaryIndexAction
// 0x0010
struct FDeleteGlobalSecondaryIndexAction
{
	struct FString                                     indexName;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.StreamSpecification
// 0x0002
struct FStreamSpecification
{
	bool                                               streamEnabled;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DynamoDB_EAWSDynamoDBStreamViewType                streamViewType;                                            // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.SSESpecification
// 0x0018
struct FSSESpecification
{
	bool                                               Enabled;                                                   // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DynamoDB_EAWSSSEType                               SSEType;                                                   // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_O33O[0x6];                                     // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     KMSMasterKeyId;                                            // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.SSEDescription
// 0x0018
struct FSSEDescription
{
	DynamoDB_EAWSSSEStatus                             status;                                                    // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DynamoDB_EAWSSSEType                               SSEType;                                                   // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0Z78[0x6];                                     // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     KMSMasterKeyArn;                                           // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.DynamoDBAttributeValue
// 0x0010
struct FDynamoDBAttributeValue
{
	struct FString                                     Json;                                                      // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.Capacity
// 0x000C
struct FCapacity
{
	float                                              readCapacityUnits;                                         // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              writeCapacityUnits;                                        // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              capacityUnits;                                             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.AutoScalingTargetTrackingScalingPolicyConfigurationUpdate
// 0x0010
struct FAutoScalingTargetTrackingScalingPolicyConfigurationUpdate
{
	bool                                               disableScaleIn;                                            // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_L21X[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                scaleInCooldown;                                           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                scaleOutCooldown;                                          // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              targetValue;                                               // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.AutoScalingTargetTrackingScalingPolicyConfigurationDescription
// 0x0010
struct FAutoScalingTargetTrackingScalingPolicyConfigurationDescription
{
	bool                                               disableScaleIn;                                            // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QABS[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                scaleInCooldown;                                           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                scaleOutCooldown;                                          // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              targetValue;                                               // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.CreateReplicaAction
// 0x0010
struct FCreateReplicaAction
{
	struct FString                                     regionName;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.DeleteReplicaAction
// 0x0010
struct FDeleteReplicaAction
{
	struct FString                                     regionName;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.ReplicaDescription
// 0x0010
struct FReplicaDescription
{
	struct FString                                     regionName;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.PointInTimeRecoverySpecification
// 0x0001
struct FPointInTimeRecoverySpecification
{
	bool                                               pointInTimeRecoveryEnabled;                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.DynamoDBUntagResourceRequest
// 0x0020
struct FDynamoDBUntagResourceRequest
{
	struct FString                                     resourceArn;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             tagKeys;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.Tag
// 0x0020
struct FTag
{
	struct FString                                     Key;                                                       // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Value;                                                     // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.RestoreTableFromBackupRequest
// 0x0020
struct FRestoreTableFromBackupRequest
{
	struct FString                                     targetTableName;                                           // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     backupArn;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.ListTagsOfResourceRequest
// 0x0020
struct FListTagsOfResourceRequest
{
	struct FString                                     resourceArn;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     nextToken;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.ListTablesRequest
// 0x0018
struct FListTablesRequest
{
	struct FString                                     exclusiveStartTableName;                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                limit;                                                     // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_C1U9[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct DynamoDB.ListTablesResult
// 0x0020
struct FListTablesResult
{
	TArray<struct FString>                             tableNames;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     lastEvaluatedTableName;                                    // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.ListGlobalTablesRequest
// 0x0028
struct FListGlobalTablesRequest
{
	struct FString                                     exclusiveStartGlobalTableName;                             // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                limit;                                                     // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_E8AN[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     regionName;                                                // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.Replica
// 0x0010
struct FReplica
{
	struct FString                                     regionName;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.BackupSummary
// 0x0068
struct FBackupSummary
{
	struct FString                                     tableName;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     tableId;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     tableArn;                                                  // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     backupArn;                                                 // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     backupName;                                                // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   backupCreationDateTime;                                    // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   backupExpiryDateTime;                                      // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DynamoDB_EAWSBackupStatus                          backupStatus;                                              // 0x0060(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DynamoDB_EAWSBackupType                            backupType;                                                // 0x0061(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_R1EW[0x2];                                     // 0x0062(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                backupSizeBytes;                                           // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.DescribeTimeToLiveRequest
// 0x0010
struct FDescribeTimeToLiveRequest
{
	struct FString                                     tableName;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.TimeToLiveDescription
// 0x0018
struct FTimeToLiveDescription
{
	DynamoDB_EAWSTimeToLiveStatus                      timeToLiveStatus;                                          // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BO1O[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     attributeName;                                             // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.DescribeTableRequest
// 0x0010
struct FDescribeTableRequest
{
	struct FString                                     tableName;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.DescribeLimitsRequest
// 0x0001
struct FDescribeLimitsRequest
{
	unsigned char                                      UnknownData_LDBH[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct DynamoDB.DescribeLimitsResult
// 0x0010
struct FDescribeLimitsResult
{
	int                                                accountMaxReadCapacityUnits;                               // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                accountMaxWriteCapacityUnits;                              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                tableMaxReadCapacityUnits;                                 // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                tableMaxWriteCapacityUnits;                                // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.DescribeGlobalTableSettingsRequest
// 0x0010
struct FDescribeGlobalTableSettingsRequest
{
	struct FString                                     globalTableName;                                           // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.DescribeGlobalTableRequest
// 0x0010
struct FDescribeGlobalTableRequest
{
	struct FString                                     globalTableName;                                           // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.DescribeEndpointsRequest
// 0x0001
struct FDescribeEndpointsRequest
{
	unsigned char                                      UnknownData_M220[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct DynamoDB.Endpoint
// 0x0018
struct FEndpoint
{
	struct FString                                     address;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                cachePeriodInMinutes;                                      // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TUN2[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct DynamoDB.DescribeContinuousBackupsRequest
// 0x0010
struct FDescribeContinuousBackupsRequest
{
	struct FString                                     tableName;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.DescribeBackupRequest
// 0x0010
struct FDescribeBackupRequest
{
	struct FString                                     backupArn;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.DeleteTableRequest
// 0x0010
struct FDeleteTableRequest
{
	struct FString                                     tableName;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.DeleteBackupRequest
// 0x0010
struct FDeleteBackupRequest
{
	struct FString                                     backupArn;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.CreateBackupRequest
// 0x0020
struct FCreateBackupRequest
{
	struct FString                                     tableName;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     backupName;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.BatchWriteItemRequest
// 0x0018
struct FBatchWriteItemRequest
{
	struct FString                                     requestItems;                                              // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DynamoDB_EAWSReturnConsumedCapacity                returnConsumedCapacity;                                    // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DynamoDB_EAWSReturnItemCollectionMetrics           returnItemCollectionMetrics;                               // 0x0011(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_E38A[0x6];                                     // 0x0012(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct DynamoDB.KeysAndAttributes
// 0x0078
struct FKeysAndAttributes
{
	TArray<struct FString>                             Keys;                                                      // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               consistentRead;                                            // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FHT5[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     projectionExpression;                                      // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FString, struct FString>               expressionAttributeNames;                                  // 0x0028(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.UpdateTimeToLiveResult
// 0x0018
struct FUpdateTimeToLiveResult
{
	struct FTimeToLiveSpecification                    TimeToLiveSpecification;                                   // 0x0000(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.ConsumedCapacity
// 0x00C8
struct FConsumedCapacity
{
	struct FString                                     tableName;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              capacityUnits;                                             // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              readCapacityUnits;                                         // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              writeCapacityUnits;                                        // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCapacity                                   Table;                                                     // 0x001C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TMap<struct FString, struct FCapacity>             localSecondaryIndexes;                                     // 0x0028(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<struct FString, struct FCapacity>             globalSecondaryIndexes;                                    // 0x0078(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.PointInTimeRecoveryDescription
// 0x0018
struct FPointInTimeRecoveryDescription
{
	DynamoDB_EAWSPointInTimeRecoveryStatus             pointInTimeRecoveryStatus;                                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NXV4[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDateTime                                   earliestRestorableDateTime;                                // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   latestRestorableDateTime;                                  // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.ContinuousBackupsDescription
// 0x0020
struct FContinuousBackupsDescription
{
	DynamoDB_EAWSContinuousBackupsStatus               continuousBackupsStatus;                                   // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_J6YG[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointInTimeRecoveryDescription             PointInTimeRecoveryDescription;                            // 0x0008(0x0018) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.UpdateContinuousBackupsResult
// 0x0020
struct FUpdateContinuousBackupsResult
{
	struct FContinuousBackupsDescription               ContinuousBackupsDescription;                              // 0x0000(0x0020) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.ProvisionedThroughputDescription
// 0x0020
struct FProvisionedThroughputDescription
{
	struct FDateTime                                   lastIncreaseDateTime;                                      // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   lastDecreaseDateTime;                                      // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                numberOfDecreasesToday;                                    // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                readCapacityUnits;                                         // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                writeCapacityUnits;                                        // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3WXL[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct DynamoDB.BillingModeSummary
// 0x0010
struct FBillingModeSummary
{
	DynamoDB_EAWSBillingMode                           billingMode;                                               // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_42F6[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDateTime                                   lastUpdateToPayPerRequestDateTime;                         // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.LocalSecondaryIndexDescription
// 0x0050
struct FLocalSecondaryIndexDescription
{
	struct FString                                     indexName;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FDynamoDBKeySchemaElement>           keySchema;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FProjection                                 Projection;                                                // 0x0020(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	int                                                indexSizeBytes;                                            // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                itemCount;                                                 // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     indexArn;                                                  // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.GlobalSecondaryIndexDescription
// 0x0078
struct FGlobalSecondaryIndexDescription
{
	struct FString                                     indexName;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FDynamoDBKeySchemaElement>           keySchema;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FProjection                                 Projection;                                                // 0x0020(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	DynamoDB_EAWSIndexStatus                           indexStatus;                                               // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               backfilling;                                               // 0x0039(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KZL9[0x6];                                     // 0x003A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FProvisionedThroughputDescription           ProvisionedThroughput;                                     // 0x0040(0x0020) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	int                                                indexSizeBytes;                                            // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                itemCount;                                                 // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     indexArn;                                                  // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.RestoreSummary
// 0x0030
struct FRestoreSummary
{
	struct FString                                     sourceBackupArn;                                           // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     sourceTableArn;                                            // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   restoreDateTime;                                           // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               restoreInProgress;                                         // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7V0L[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct DynamoDB.TableDescription
// 0x0128
struct FTableDescription
{
	TArray<struct FAttributeDefinition>                attributeDefinitions;                                      // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     tableName;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FDynamoDBKeySchemaElement>           keySchema;                                                 // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	DynamoDB_EAWSTableStatus                           tableStatus;                                               // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JMDH[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDateTime                                   creationDateTime;                                          // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FProvisionedThroughputDescription           ProvisionedThroughput;                                     // 0x0040(0x0020) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	int                                                tableSizeBytes;                                            // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                itemCount;                                                 // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     tableArn;                                                  // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     tableId;                                                   // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBillingModeSummary                         BillingModeSummary;                                        // 0x0088(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FLocalSecondaryIndexDescription>     localSecondaryIndexes;                                     // 0x0098(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FGlobalSecondaryIndexDescription>    globalSecondaryIndexes;                                    // 0x00A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FStreamSpecification                        StreamSpecification;                                       // 0x00B8(0x0002) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_C03M[0x6];                                     // 0x00BA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     latestStreamLabel;                                         // 0x00C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     latestStreamArn;                                           // 0x00D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRestoreSummary                             RestoreSummary;                                            // 0x00E0(0x0030) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSSEDescription                             SSEDescription;                                            // 0x0110(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.RestoreTableToPointInTimeResult
// 0x0128
struct FRestoreTableToPointInTimeResult
{
	struct FTableDescription                           TableDescription;                                          // 0x0000(0x0128) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.RestoreTableFromBackupResult
// 0x0128
struct FRestoreTableFromBackupResult
{
	struct FTableDescription                           TableDescription;                                          // 0x0000(0x0128) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.DescribeTableResult
// 0x0128
struct FDescribeTableResult
{
	struct FTableDescription                           Table;                                                     // 0x0000(0x0128) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.UpdateGlobalSecondaryIndexAction
// 0x0018
struct FUpdateGlobalSecondaryIndexAction
{
	struct FString                                     indexName;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FProvisionedThroughput                      ProvisionedThroughput;                                     // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.CreateGlobalSecondaryIndexAction
// 0x0040
struct FCreateGlobalSecondaryIndexAction
{
	struct FString                                     indexName;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FDynamoDBKeySchemaElement>           keySchema;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FProjection                                 Projection;                                                // 0x0020(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FProvisionedThroughput                      ProvisionedThroughput;                                     // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.GlobalSecondaryIndex
// 0x0040
struct FGlobalSecondaryIndex
{
	struct FString                                     indexName;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FDynamoDBKeySchemaElement>           keySchema;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FProjection                                 Projection;                                                // 0x0020(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FProvisionedThroughput                      ProvisionedThroughput;                                     // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.UpdateTimeToLiveRequest
// 0x0028
struct FUpdateTimeToLiveRequest
{
	struct FString                                     tableName;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTimeToLiveSpecification                    TimeToLiveSpecification;                                   // 0x0010(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.GlobalSecondaryIndexUpdate
// 0x0068
struct FGlobalSecondaryIndexUpdate
{
	struct FUpdateGlobalSecondaryIndexAction           UpdateGlobalSecondaryIndexAction;                          // 0x0000(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FCreateGlobalSecondaryIndexAction           CreateGlobalSecondaryIndexAction;                          // 0x0018(0x0040) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FDeleteGlobalSecondaryIndexAction           DeleteGlobalSecondaryIndexAction;                          // 0x0058(0x0010) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.UpdateTableRequest
// 0x0060
struct FUpdateTableRequest
{
	TArray<struct FAttributeDefinition>                attributeDefinitions;                                      // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     tableName;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DynamoDB_EAWSBillingMode                           billingMode;                                               // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_V04C[0x3];                                     // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FProvisionedThroughput                      ProvisionedThroughput;                                     // 0x0024(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HIVD[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FGlobalSecondaryIndexUpdate>         globalSecondaryIndexUpdates;                               // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FStreamSpecification                        StreamSpecification;                                       // 0x0040(0x0002) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KWRN[0x6];                                     // 0x0042(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSSESpecification                           SSESpecification;                                          // 0x0048(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.ItemCollectionMetrics
// 0x0060
struct FItemCollectionMetrics
{
	TMap<struct FString, struct FDynamoDBAttributeValue> itemCollectionKey;                                         // 0x0000(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                      sizeEstimateRangeGB;                                       // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.UpdateItemResult
// 0x0178
struct FUpdateItemResult
{
	TMap<struct FString, struct FDynamoDBAttributeValue> attributes;                                                // 0x0000(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FConsumedCapacity                           ConsumedCapacity;                                          // 0x0050(0x00C8) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FItemCollectionMetrics                      ItemCollectionMetrics;                                     // 0x0118(0x0060) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.AutoScalingPolicyUpdate
// 0x0020
struct FAutoScalingPolicyUpdate
{
	struct FString                                     policyName;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAutoScalingTargetTrackingScalingPolicyConfigurationUpdate targetTrackingScalingPolicyConfiguration;                  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.AutoScalingSettingsUpdate
// 0x0040
struct FAutoScalingSettingsUpdate
{
	int                                                minimumUnits;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                maximumUnits;                                              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               autoScalingDisabled;                                       // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8ZVS[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     autoScalingRoleArn;                                        // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAutoScalingPolicyUpdate                    scalingPolicyUpdate;                                       // 0x0020(0x0020) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.GlobalTableGlobalSecondaryIndexSettingsUpdate
// 0x0058
struct FGlobalTableGlobalSecondaryIndexSettingsUpdate
{
	struct FString                                     indexName;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                provisionedWriteCapacityUnits;                             // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NA56[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAutoScalingSettingsUpdate                  provisionedWriteCapacityAutoScalingSettingsUpdate;         // 0x0018(0x0040) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.ReplicaGlobalSecondaryIndexSettingsUpdate
// 0x0058
struct FReplicaGlobalSecondaryIndexSettingsUpdate
{
	struct FString                                     indexName;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                provisionedReadCapacityUnits;                              // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3IXZ[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAutoScalingSettingsUpdate                  provisionedReadCapacityAutoScalingSettingsUpdate;          // 0x0018(0x0040) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.ReplicaSettingsUpdate
// 0x0068
struct FReplicaSettingsUpdate
{
	struct FString                                     regionName;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                replicaProvisionedReadCapacityUnits;                       // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LXZN[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAutoScalingSettingsUpdate                  replicaProvisionedReadCapacityAutoScalingSettingsUpdate;   // 0x0018(0x0040) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FReplicaGlobalSecondaryIndexSettingsUpdate> ReplicaGlobalSecondaryIndexSettingsUpdate;                 // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.UpdateGlobalTableSettingsRequest
// 0x0078
struct FUpdateGlobalTableSettingsRequest
{
	struct FString                                     globalTableName;                                           // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DynamoDB_EAWSBillingMode                           globalTableBillingMode;                                    // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SJDM[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                globalTableProvisionedWriteCapacityUnits;                  // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAutoScalingSettingsUpdate                  globalTableProvisionedWriteCapacityAutoScalingSettingsUpdate; // 0x0018(0x0040) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FGlobalTableGlobalSecondaryIndexSettingsUpdate> GlobalTableGlobalSecondaryIndexSettingsUpdate;             // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FReplicaSettingsUpdate>              ReplicaSettingsUpdate;                                     // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.Put
// 0x0118
struct FPut
{
	TMap<struct FString, struct FDynamoDBAttributeValue> Item;                                                      // 0x0000(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     tableName;                                                 // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     conditionExpression;                                       // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FString, struct FString>               expressionAttributeNames;                                  // 0x0070(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<struct FString, struct FDynamoDBAttributeValue> expressionAttributeValues;                                 // 0x00C0(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	DynamoDB_EAWSReturnValuesOnConditionCheckFailure   returnValuesOnConditionCheckFailure;                       // 0x0110(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZPNW[0x7];                                     // 0x0111(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct DynamoDB.ConditionCheck
// 0x0118
struct FConditionCheck
{
	TMap<struct FString, struct FDynamoDBAttributeValue> Key;                                                       // 0x0000(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     tableName;                                                 // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     conditionExpression;                                       // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FString, struct FString>               expressionAttributeNames;                                  // 0x0070(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<struct FString, struct FDynamoDBAttributeValue> expressionAttributeValues;                                 // 0x00C0(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	DynamoDB_EAWSReturnValuesOnConditionCheckFailure   returnValuesOnConditionCheckFailure;                       // 0x0110(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_N364[0x7];                                     // 0x0111(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct DynamoDB.DynamoDBDelete
// 0x0118
struct FDynamoDBDelete
{
	TMap<struct FString, struct FDynamoDBAttributeValue> Key;                                                       // 0x0000(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     tableName;                                                 // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     conditionExpression;                                       // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FString, struct FString>               expressionAttributeNames;                                  // 0x0070(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<struct FString, struct FDynamoDBAttributeValue> expressionAttributeValues;                                 // 0x00C0(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	DynamoDB_EAWSReturnValuesOnConditionCheckFailure   returnValuesOnConditionCheckFailure;                       // 0x0110(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_31C8[0x7];                                     // 0x0111(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct DynamoDB.TransactWriteItem
// 0x0470
struct FTransactWriteItem
{
	struct FConditionCheck                             ConditionCheck;                                            // 0x0000(0x0118) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FPut                                        PutItem;                                                   // 0x0118(0x0118) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FDynamoDBDelete                             DeleteItem;                                                // 0x0230(0x0118) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	//struct FDynamoDB_FUpdate                           UpdateItem;                                                // 0x0348(0x0128) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.TransactWriteItemsRequest
// 0x0028
struct FTransactWriteItemsRequest
{
	TArray<struct FTransactWriteItem>                  transactItems;                                             // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	DynamoDB_EAWSReturnConsumedCapacity                returnConsumedCapacity;                                    // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DynamoDB_EAWSReturnItemCollectionMetrics           returnItemCollectionMetrics;                               // 0x0011(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HZ21[0x6];                                     // 0x0012(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     clientRequestToken;                                        // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.DescribeTimeToLiveResult
// 0x0018
struct FDescribeTimeToLiveResult
{
	struct FTimeToLiveDescription                      TimeToLiveDescription;                                     // 0x0000(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.AutoScalingPolicyDescription
// 0x0020
struct FAutoScalingPolicyDescription
{
	struct FString                                     policyName;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAutoScalingTargetTrackingScalingPolicyConfigurationDescription targetTrackingScalingPolicyConfiguration;                  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.AutoScalingSettingsDescription
// 0x0030
struct FAutoScalingSettingsDescription
{
	int                                                minimumUnits;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                maximumUnits;                                              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               autoScalingDisabled;                                       // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UVHQ[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     autoScalingRoleArn;                                        // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAutoScalingPolicyDescription>       scalingPolicies;                                           // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.PutItemResult
// 0x0178
struct FPutItemResult
{
	TMap<struct FString, struct FDynamoDBAttributeValue> attributes;                                                // 0x0000(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FConsumedCapacity                           ConsumedCapacity;                                          // 0x0050(0x00C8) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FItemCollectionMetrics                      ItemCollectionMetrics;                                     // 0x0118(0x0060) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.LocalSecondaryIndex
// 0x0038
struct FLocalSecondaryIndex
{
	struct FString                                     indexName;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FDynamoDBKeySchemaElement>           keySchema;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FProjection                                 Projection;                                                // 0x0020(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.CreateTableRequest
// 0x0088
struct FCreateTableRequest
{
	TArray<struct FAttributeDefinition>                attributeDefinitions;                                      // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     tableName;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FDynamoDBKeySchemaElement>           keySchema;                                                 // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FLocalSecondaryIndex>                localSecondaryIndexes;                                     // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FGlobalSecondaryIndex>               globalSecondaryIndexes;                                    // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	DynamoDB_EAWSBillingMode                           billingMode;                                               // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8JDC[0x3];                                     // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FProvisionedThroughput                      ProvisionedThroughput;                                     // 0x0054(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FStreamSpecification                        StreamSpecification;                                       // 0x005C(0x0002) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PVGA[0x2];                                     // 0x005E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSSESpecification                           SSESpecification;                                          // 0x0060(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FTag>                                Tags;                                                      // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.TransactWriteItemsResult
// 0x0060
struct FTransactWriteItemsResult
{
	TArray<struct FConsumedCapacity>                   ConsumedCapacity;                                          // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<struct FString, struct FString>               ItemCollectionMetrics;                                     // 0x0010(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.ScanRequest
// 0x0150
struct FScanRequest
{
	struct FString                                     tableName;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     indexName;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                limit;                                                     // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DynamoDB_EAWSSelect                                select;                                                    // 0x0024(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NLXO[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<struct FString, struct FDynamoDBAttributeValue> exclusiveStartKey;                                         // 0x0028(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	DynamoDB_EAWSReturnConsumedCapacity                returnConsumedCapacity;                                    // 0x0078(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ORQ8[0x3];                                     // 0x0079(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                totalSegments;                                             // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                segment;                                                   // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GG4U[0x4];                                     // 0x0084(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     projectionExpression;                                      // 0x0088(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     filterExpression;                                          // 0x0098(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FString, struct FString>               expressionAttributeNames;                                  // 0x00A8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<struct FString, struct FDynamoDBAttributeValue> expressionAttributeValues;                                 // 0x00F8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               consistentRead;                                            // 0x0148(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3DP6[0x7];                                     // 0x0149(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct DynamoDB.RestoreTableToPointInTimeRequest
// 0x0030
struct FRestoreTableToPointInTimeRequest
{
	struct FString                                     sourceTableName;                                           // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     targetTableName;                                           // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               useLatestRestorableTime;                                   // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4VGT[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDateTime                                   restoreDateTime;                                           // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.QueryRequest
// 0x0158
struct FQueryRequest
{
	struct FString                                     tableName;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     indexName;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DynamoDB_EAWSSelect                                select;                                                    // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_L6Y8[0x3];                                     // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                limit;                                                     // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               consistentRead;                                            // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               scanIndexForward;                                          // 0x0029(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IPX4[0x6];                                     // 0x002A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<struct FString, struct FDynamoDBAttributeValue> exclusiveStartKey;                                         // 0x0030(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	DynamoDB_EAWSReturnConsumedCapacity                returnConsumedCapacity;                                    // 0x0080(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BV2L[0x7];                                     // 0x0081(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     projectionExpression;                                      // 0x0088(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     filterExpression;                                          // 0x0098(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     keyConditionExpression;                                    // 0x00A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FString, struct FString>               expressionAttributeNames;                                  // 0x00B8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<struct FString, struct FDynamoDBAttributeValue> expressionAttributeValues;                                 // 0x0108(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.GlobalTable
// 0x0020
struct FGlobalTable
{
	struct FString                                     globalTableName;                                           // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FReplica>                            replicationGroup;                                          // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.ListGlobalTablesResult
// 0x0020
struct FListGlobalTablesResult
{
	TArray<struct FGlobalTable>                        globalTables;                                              // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     lastEvaluatedGlobalTableName;                              // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.DescribeContinuousBackupsResult
// 0x0020
struct FDescribeContinuousBackupsResult
{
	struct FContinuousBackupsDescription               ContinuousBackupsDescription;                              // 0x0000(0x0020) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.DeleteItemRequest
// 0x0118
struct FDeleteItemRequest
{
	struct FString                                     tableName;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FString, struct FDynamoDBAttributeValue> Key;                                                       // 0x0010(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	DynamoDB_EAWSReturnValue                           returnValues;                                              // 0x0060(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DynamoDB_EAWSReturnConsumedCapacity                returnConsumedCapacity;                                    // 0x0061(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DynamoDB_EAWSReturnItemCollectionMetrics           returnItemCollectionMetrics;                               // 0x0062(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ANXN[0x5];                                     // 0x0063(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     conditionExpression;                                       // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FString, struct FString>               expressionAttributeNames;                                  // 0x0078(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<struct FString, struct FDynamoDBAttributeValue> expressionAttributeValues;                                 // 0x00C8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.BackupDetails
// 0x0038
struct FBackupDetails
{
	struct FString                                     backupArn;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     backupName;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                backupSizeBytes;                                           // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DynamoDB_EAWSBackupStatus                          backupStatus;                                              // 0x0024(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DynamoDB_EAWSBackupType                            backupType;                                                // 0x0025(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SJG4[0x2];                                     // 0x0026(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDateTime                                   backupCreationDateTime;                                    // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   backupExpiryDateTime;                                      // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.SourceTableDetails
// 0x0060
struct FSourceTableDetails
{
	struct FString                                     tableName;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     tableId;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     tableArn;                                                  // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                tableSizeBytes;                                            // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_F0FM[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FDynamoDBKeySchemaElement>           keySchema;                                                 // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FDateTime                                   tableCreationDateTime;                                     // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FProvisionedThroughput                      ProvisionedThroughput;                                     // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	int                                                itemCount;                                                 // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DynamoDB_EAWSBillingMode                           billingMode;                                               // 0x005C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CUZO[0x3];                                     // 0x005D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct DynamoDB.LocalSecondaryIndexInfo
// 0x0038
struct FLocalSecondaryIndexInfo
{
	struct FString                                     indexName;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FDynamoDBKeySchemaElement>           keySchema;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FProjection                                 Projection;                                                // 0x0020(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.GlobalSecondaryIndexInfo
// 0x0040
struct FGlobalSecondaryIndexInfo
{
	struct FString                                     indexName;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FDynamoDBKeySchemaElement>           keySchema;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FProjection                                 Projection;                                                // 0x0020(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FProvisionedThroughput                      ProvisionedThroughput;                                     // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.SourceTableFeatureDetails
// 0x0058
struct FSourceTableFeatureDetails
{
	TArray<struct FLocalSecondaryIndexInfo>            localSecondaryIndexes;                                     // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FGlobalSecondaryIndexInfo>           globalSecondaryIndexes;                                    // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FStreamSpecification                        StreamDescription;                                         // 0x0020(0x0002) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5JA4[0x6];                                     // 0x0022(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimeToLiveDescription                      TimeToLiveDescription;                                     // 0x0028(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSSEDescription                             SSEDescription;                                            // 0x0040(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.BackupDescription
// 0x00F0
struct FBackupDescription
{
	struct FBackupDetails                              BackupDetails;                                             // 0x0000(0x0038) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSourceTableDetails                         SourceTableDetails;                                        // 0x0038(0x0060) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSourceTableFeatureDetails                  SourceTableFeatureDetails;                                 // 0x0098(0x0058) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.DeleteBackupResult
// 0x00F0
struct FDeleteBackupResult
{
	struct FBackupDescription                          BackupDescription;                                         // 0x0000(0x00F0) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.UpdateItemRequest
// 0x0128
struct FUpdateItemRequest
{
	struct FString                                     tableName;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FString, struct FDynamoDBAttributeValue> Key;                                                       // 0x0010(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	DynamoDB_EAWSReturnValue                           returnValues;                                              // 0x0060(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DynamoDB_EAWSReturnConsumedCapacity                returnConsumedCapacity;                                    // 0x0061(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DynamoDB_EAWSReturnItemCollectionMetrics           returnItemCollectionMetrics;                               // 0x0062(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1THK[0x5];                                     // 0x0063(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     updateExpression;                                          // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     conditionExpression;                                       // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FString, struct FString>               expressionAttributeNames;                                  // 0x0088(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<struct FString, struct FDynamoDBAttributeValue> expressionAttributeValues;                                 // 0x00D8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.UpdateTableResult
// 0x0128
struct FUpdateTableResult
{
	struct FTableDescription                           TableDescription;                                          // 0x0000(0x0128) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.ReplicaGlobalSecondaryIndexSettingsDescription
// 0x0080
struct FReplicaGlobalSecondaryIndexSettingsDescription
{
	struct FString                                     indexName;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DynamoDB_EAWSIndexStatus                           indexStatus;                                               // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_204M[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                provisionedReadCapacityUnits;                              // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAutoScalingSettingsDescription             provisionedReadCapacityAutoScalingSettings;                // 0x0018(0x0030) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	int                                                provisionedWriteCapacityUnits;                             // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_56FP[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAutoScalingSettingsDescription             provisionedWriteCapacityAutoScalingSettings;               // 0x0050(0x0030) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.ReplicaSettingsDescription
// 0x00A8
struct FReplicaSettingsDescription
{
	struct FString                                     regionName;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DynamoDB_EAWSReplicaStatus                         replicaStatus;                                             // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6Y9T[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBillingModeSummary                         replicaBillingModeSummary;                                 // 0x0018(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	int                                                replicaProvisionedReadCapacityUnits;                       // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_H962[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAutoScalingSettingsDescription             replicaProvisionedReadCapacityAutoScalingSettings;         // 0x0030(0x0030) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	int                                                replicaProvisionedWriteCapacityUnits;                      // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CNM1[0x4];                                     // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAutoScalingSettingsDescription             replicaProvisionedWriteCapacityAutoScalingSettings;        // 0x0068(0x0030) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FReplicaGlobalSecondaryIndexSettingsDescription> replicaGlobalSecondaryIndexSettings;                       // 0x0098(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.UpdateGlobalTableSettingsResult
// 0x0020
struct FUpdateGlobalTableSettingsResult
{
	struct FString                                     globalTableName;                                           // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FReplicaSettingsDescription>         replicaSettings;                                           // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.ReplicaUpdate
// 0x0020
struct FReplicaUpdate
{
	struct FCreateReplicaAction                        Create;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FDeleteReplicaAction                        DeleteReplicaAction;                                       // 0x0010(0x0010) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.UpdateGlobalTableRequest
// 0x0020
struct FUpdateGlobalTableRequest
{
	struct FString                                     globalTableName;                                           // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FReplicaUpdate>                      replicaUpdates;                                            // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.GlobalTableDescription
// 0x0040
struct FGlobalTableDescription
{
	TArray<struct FReplicaDescription>                 replicationGroup;                                          // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     globalTableArn;                                            // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   creationDateTime;                                          // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DynamoDB_EAWSGlobalTableStatus                     globalTableStatus;                                         // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YMIP[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     globalTableName;                                           // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.DynamoDBTagResourceRequest
// 0x0020
struct FDynamoDBTagResourceRequest
{
	struct FString                                     resourceArn;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FTag>                                Tags;                                                      // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.ListBackupsRequest
// 0x0040
struct FListBackupsRequest
{
	struct FString                                     tableName;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                limit;                                                     // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QNBV[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDateTime                                   timeRangeLowerBound;                                       // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   timeRangeUpperBound;                                       // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     exclusiveStartBackupArn;                                   // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DynamoDB_EAWSBackupTypeFilter                      backupType;                                                // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_S1U6[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct DynamoDB.UpdateGlobalTableResult
// 0x0040
struct FUpdateGlobalTableResult
{
	struct FGlobalTableDescription                     GlobalTableDescription;                                    // 0x0000(0x0040) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.UpdateContinuousBackupsRequest
// 0x0018
struct FUpdateContinuousBackupsRequest
{
	struct FString                                     tableName;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPointInTimeRecoverySpecification           PointInTimeRecoverySpecification;                          // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JLTT[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct DynamoDB.ListBackupsResult
// 0x0020
struct FListBackupsResult
{
	TArray<struct FBackupSummary>                      backupSummaries;                                           // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     lastEvaluatedBackupArn;                                    // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.GetItemRequest
// 0x00C8
struct FGetItemRequest
{
	struct FString                                     tableName;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FString, struct FDynamoDBAttributeValue> Key;                                                       // 0x0010(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               consistentRead;                                            // 0x0060(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DynamoDB_EAWSReturnConsumedCapacity                returnConsumedCapacity;                                    // 0x0061(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AE6W[0x6];                                     // 0x0062(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     projectionExpression;                                      // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FString, struct FString>               expressionAttributeNames;                                  // 0x0078(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.DescribeGlobalTableSettingsResult
// 0x0020
struct FDescribeGlobalTableSettingsResult
{
	struct FString                                     globalTableName;                                           // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FReplicaSettingsDescription>         replicaSettings;                                           // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.DescribeGlobalTableResult
// 0x0040
struct FDescribeGlobalTableResult
{
	struct FGlobalTableDescription                     GlobalTableDescription;                                    // 0x0000(0x0040) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.DescribeEndpointsResult
// 0x0010
struct FDescribeEndpointsResult
{
	TArray<struct FEndpoint>                           endpoints;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.GetItemResult
// 0x0118
struct FGetItemResult
{
	TMap<struct FString, struct FDynamoDBAttributeValue> Item;                                                      // 0x0000(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FConsumedCapacity                           ConsumedCapacity;                                          // 0x0050(0x00C8) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.Update
// 0x0128
struct FDynamoDB_FUpdate
{
	TMap<struct FString, struct FDynamoDBAttributeValue> Key;                                                       // 0x0000(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     updateExpression;                                          // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     tableName;                                                 // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     conditionExpression;                                       // 0x0070(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FString, struct FString>               expressionAttributeNames;                                  // 0x0080(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<struct FString, struct FDynamoDBAttributeValue> expressionAttributeValues;                                 // 0x00D0(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	DynamoDB_EAWSReturnValuesOnConditionCheckFailure   returnValuesOnConditionCheckFailure;                       // 0x0120(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HGRC[0x7];                                     // 0x0121(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct DynamoDB.DynamoDBGet
// 0x00C0
struct FDynamoDBGet
{
	TMap<struct FString, struct FDynamoDBAttributeValue> Key;                                                       // 0x0000(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     tableName;                                                 // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     projectionExpression;                                      // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FString, struct FString>               expressionAttributeNames;                                  // 0x0070(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.TransactGetItem
// 0x00C0
struct FTransactGetItem
{
	struct FDynamoDBGet                                Get;                                                       // 0x0000(0x00C0) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.TransactGetItemsRequest
// 0x0018
struct FTransactGetItemsRequest
{
	TArray<struct FTransactGetItem>                    transactItems;                                             // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	DynamoDB_EAWSReturnConsumedCapacity                returnConsumedCapacity;                                    // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_L3GQ[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct DynamoDB.ItemResponse
// 0x0050
struct FItemResponse
{
	TMap<struct FString, struct FDynamoDBAttributeValue> Item;                                                      // 0x0000(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.TransactGetItemsResult
// 0x0020
struct FTransactGetItemsResult
{
	TArray<struct FConsumedCapacity>                   ConsumedCapacity;                                          // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FItemResponse>                       responses;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.DescribeBackupResult
// 0x00F0
struct FDescribeBackupResult
{
	struct FBackupDescription                          BackupDescription;                                         // 0x0000(0x00F0) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.ScanResult
// 0x0130
struct FScanResult
{
	TArray<struct FString>                             items;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                Count;                                                     // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                scannedCount;                                              // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FString, struct FDynamoDBAttributeValue> lastEvaluatedKey;                                          // 0x0018(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FConsumedCapacity                           ConsumedCapacity;                                          // 0x0068(0x00C8) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.QueryResult
// 0x0130
struct FQueryResult
{
	TArray<struct FString>                             items;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                Count;                                                     // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                scannedCount;                                              // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FString, struct FDynamoDBAttributeValue> lastEvaluatedKey;                                          // 0x0018(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FConsumedCapacity                           ConsumedCapacity;                                          // 0x0068(0x00C8) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.PutItemRequest
// 0x0118
struct FPutItemRequest
{
	struct FString                                     tableName;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FString, struct FDynamoDBAttributeValue> Item;                                                      // 0x0010(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	DynamoDB_EAWSReturnValue                           returnValues;                                              // 0x0060(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DynamoDB_EAWSReturnConsumedCapacity                returnConsumedCapacity;                                    // 0x0061(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DynamoDB_EAWSReturnItemCollectionMetrics           returnItemCollectionMetrics;                               // 0x0062(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_T35P[0x5];                                     // 0x0063(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     conditionExpression;                                       // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FString, struct FString>               expressionAttributeNames;                                  // 0x0078(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<struct FString, struct FDynamoDBAttributeValue> expressionAttributeValues;                                 // 0x00C8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.ListTagsOfResourceResult
// 0x0020
struct FListTagsOfResourceResult
{
	TArray<struct FTag>                                Tags;                                                      // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     nextToken;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.DeleteTableResult
// 0x0128
struct FDeleteTableResult
{
	struct FTableDescription                           TableDescription;                                          // 0x0000(0x0128) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.DeleteItemResult
// 0x0178
struct FDeleteItemResult
{
	TMap<struct FString, struct FDynamoDBAttributeValue> attributes;                                                // 0x0000(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FConsumedCapacity                           ConsumedCapacity;                                          // 0x0050(0x00C8) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FItemCollectionMetrics                      ItemCollectionMetrics;                                     // 0x0118(0x0060) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.CreateTableResult
// 0x0128
struct FCreateTableResult
{
	struct FTableDescription                           TableDescription;                                          // 0x0000(0x0128) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.CreateGlobalTableRequest
// 0x0020
struct FCreateGlobalTableRequest
{
	struct FString                                     globalTableName;                                           // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FReplica>                            replicationGroup;                                          // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.CreateGlobalTableResult
// 0x0040
struct FCreateGlobalTableResult
{
	struct FGlobalTableDescription                     GlobalTableDescription;                                    // 0x0000(0x0040) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.BatchGetItemResult
// 0x0070
struct FBatchGetItemResult
{
	struct FString                                     responses;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FString, struct FKeysAndAttributes>    unprocessedKeys;                                           // 0x0010(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FConsumedCapacity>                   ConsumedCapacity;                                          // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.AttributeValueUpdate
// 0x0018
struct FAttributeValueUpdate
{
	struct FDynamoDBAttributeValue                     Value;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	DynamoDB_EAWSAttributeAction                       action;                                                    // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NKZC[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct DynamoDB.CancellationReason
// 0x0070
struct FCancellationReason
{
	TMap<struct FString, struct FDynamoDBAttributeValue> Item;                                                      // 0x0000(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     code;                                                      // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Message;                                                   // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.Condition
// 0x0018
struct FCondition
{
	TArray<struct FDynamoDBAttributeValue>             attributeValueList;                                        // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	DynamoDB_EAWSComparisonOperator                    comparisonOperator;                                        // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Y3H8[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct DynamoDB.DeleteRequest
// 0x0050
struct FDeleteRequest
{
	TMap<struct FString, struct FDynamoDBAttributeValue> Key;                                                       // 0x0000(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.ExpectedAttributeValue
// 0x0028
struct FExpectedAttributeValue
{
	struct FDynamoDBAttributeValue                     Value;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                               exists;                                                    // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DynamoDB_EAWSComparisonOperator                    comparisonOperator;                                        // 0x0011(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DVSP[0x6];                                     // 0x0012(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FDynamoDBAttributeValue>             attributeValueList;                                        // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.PutRequest
// 0x0050
struct FPutRequest
{
	TMap<struct FString, struct FDynamoDBAttributeValue> Item;                                                      // 0x0000(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.WriteRequest
// 0x00A0
struct FWriteRequest
{
	struct FPutRequest                                 PutRequest;                                                // 0x0000(0x0050) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FDeleteRequest                              DeleteRequest;                                             // 0x0050(0x0050) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.CreateBackupResult
// 0x0038
struct FCreateBackupResult
{
	struct FBackupDetails                              BackupDetails;                                             // 0x0000(0x0038) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.BatchWriteItemResult
// 0x0030
struct FBatchWriteItemResult
{
	struct FString                                     unprocessedItems;                                          // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ItemCollectionMetrics;                                     // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FConsumedCapacity>                   ConsumedCapacity;                                          // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDB.BatchGetItemRequest
// 0x0058
struct FBatchGetItemRequest
{
	TMap<struct FString, struct FKeysAndAttributes>    requestItems;                                              // 0x0000(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	DynamoDB_EAWSReturnConsumedCapacity                returnConsumedCapacity;                                    // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RC97[0x7];                                     // 0x0051(0x0007) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
