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

// Enum DynamoDBStreams.EDynamoDBStreamsError
enum class DynamoDBStreams_EDynamoDBStreamsError : uint8_t
{
	EDynamoDBStreamsError__INCOMPLETE_SIGNATURE = 0,
	EDynamoDBStreamsError__INTERNAL_FAILURE = 1,
	EDynamoDBStreamsError__INVALID_ACTION = 2,
	EDynamoDBStreamsError__INVALID_CLIENT_TOKEN_ID = 3,
	EDynamoDBStreamsError__INVALID_PARAMETER_COMBINATION = 4,
	EDynamoDBStreamsError__INVALID_QUERY_PARAMETER = 5,
	EDynamoDBStreamsError__INVALID_PARAMETER_VALUE = 6,
	EDynamoDBStreamsError__MISSING_ACTION = 7,
	EDynamoDBStreamsError__MISSING_AUTHENTICATION_TOKEN = 8,
	EDynamoDBStreamsError__MISSING_PARAMETER = 9,
	EDynamoDBStreamsError__OPT_IN_REQUIRED = 10,
	EDynamoDBStreamsError__REQUEST_EXPIRED = 11,
	EDynamoDBStreamsError__SERVICE_UNAVAILABLE = 12,
	EDynamoDBStreamsError__THROTTLING = 13,
	EDynamoDBStreamsError__VALIDATION = 14,
	EDynamoDBStreamsError__ACCESS_DENIED = 15,
	EDynamoDBStreamsError__RESOURCE_NOT_FOUND = 16,
	EDynamoDBStreamsError__UNRECOGNIZED_CLIENT = 17,
	EDynamoDBStreamsError__MALFORMED_QUERY_STRING = 18,
	EDynamoDBStreamsError__SLOW_DOWN = 19,
	EDynamoDBStreamsError__REQUEST_TIME_TOO_SKEWED = 20,
	EDynamoDBStreamsError__INVALID_SIGNATURE = 21,
	EDynamoDBStreamsError__SIGNATURE_DOES_NOT_MATCH = 22,
	EDynamoDBStreamsError__INVALID_ACCESS_KEY_ID = 23,
	EDynamoDBStreamsError__REQUEST_TIMEOUT = 24,
	EDynamoDBStreamsError__NETWORK_CONNECTION = 25,
	EDynamoDBStreamsError__UNKNOWN = 26,
	EDynamoDBStreamsError__EXPIRED_ITERATOR = 27,
	EDynamoDBStreamsError__LIMIT_EXCEEDED = 28,
	EDynamoDBStreamsError__TRIMMED_DATA_ACCESS = 29,
	EDynamoDBStreamsError__EDynamoDBStreamsError_MAX = 30,

};

// Enum DynamoDBStreams.EAWSDynamoDBStreamsKeyType
enum class DynamoDBStreams_EAWSDynamoDBStreamsKeyType : uint8_t
{
	EAWSDynamoDBStreamsKeyType__NOT_SET = 0,
	EAWSDynamoDBStreamsKeyType__HASH = 1,
	EAWSDynamoDBStreamsKeyType__RANGE = 2,
	EAWSDynamoDBStreamsKeyType__EAWSDynamoDBStreamsKeyType_MAX = 3,

};

// Enum DynamoDBStreams.EAWSDynamoDBStreamsStreamViewType
enum class DynamoDBStreams_EAWSDynamoDBStreamsStreamViewType : uint8_t
{
	EAWSDynamoDBStreamsStreamViewType__NOT_SET = 0,
	EAWSDynamoDBStreamsStreamViewType__NEW_IMAGE = 1,
	EAWSDynamoDBStreamsStreamViewType__OLD_IMAGE = 2,
	EAWSDynamoDBStreamsStreamViewType__NEW_AND_OLD_IMAGES = 3,
	EAWSDynamoDBStreamsStreamViewType__KEYS_ONLY = 4,
	EAWSDynamoDBStreamsStreamViewType__EAWSDynamoDBStreamsStreamViewType_MAX = 5,

};

// Enum DynamoDBStreams.EAWSOperationType
enum class DynamoDBStreams_EAWSOperationType : uint8_t
{
	EAWSOperationType__NOT_SET     = 0,
	EAWSOperationType__INSERT      = 1,
	EAWSOperationType__MODIFY      = 2,
	EAWSOperationType__REMOVE      = 3,
	EAWSOperationType__EAWSOperationType_MAX = 4,

};

// Enum DynamoDBStreams.EAWSShardIteratorType
enum class DynamoDBStreams_EAWSShardIteratorType : uint8_t
{
	EAWSShardIteratorType__NOT_SET = 0,
	EAWSShardIteratorType__TRIM_HORIZON = 1,
	EAWSShardIteratorType__LATEST  = 2,
	EAWSShardIteratorType__AT_SEQUENCE_NUMBER = 3,
	EAWSShardIteratorType__AFTER_SEQUENCE_NUMBER = 4,
	EAWSShardIteratorType__EAWSShardIteratorType_MAX = 5,

};

// Enum DynamoDBStreams.EAWSStreamStatus
enum class DynamoDBStreams_EAWSStreamStatus : uint8_t
{
	EAWSStreamStatus__NOT_SET      = 0,
	EAWSStreamStatus__ENABLING     = 1,
	EAWSStreamStatus__ENABLED      = 2,
	EAWSStreamStatus__DISABLING    = 3,
	EAWSStreamStatus__DISABLED     = 4,
	EAWSStreamStatus__EAWSStreamStatus_MAX = 5,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct DynamoDBStreams.ListStreamsRequest
// 0x0028
struct FListStreamsRequest
{
	struct FString                                     tableName;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                limit;                                                     // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EPCJ[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     exclusiveStartStreamArn;                                   // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDBStreams.Stream
// 0x0030
struct FStream
{
	struct FString                                     streamArn;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     tableName;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     streamLabel;                                               // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDBStreams.GetShardIteratorRequest
// 0x0038
struct FGetShardIteratorRequest
{
	struct FString                                     streamArn;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     shardId;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DynamoDBStreams_EAWSShardIteratorType              shardIteratorType;                                         // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AR9P[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     sequenceNumber;                                            // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDBStreams.GetShardIteratorResult
// 0x0010
struct FGetShardIteratorResult
{
	struct FString                                     shardIterator;                                             // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDBStreams.GetRecordsRequest
// 0x0018
struct FGetRecordsRequest
{
	struct FString                                     shardIterator;                                             // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                limit;                                                     // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SFFL[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct DynamoDBStreams.DynamoDBStreamsAttributeValue
// 0x0010
struct FDynamoDBStreamsAttributeValue
{
	struct FString                                     Json;                                                      // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDBStreams.DescribeStreamRequest
// 0x0028
struct FDescribeStreamRequest
{
	struct FString                                     streamArn;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                limit;                                                     // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0M9N[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     exclusiveStartShardId;                                     // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDBStreams.DynamoDBStreamsKeySchemaElement
// 0x0018
struct FDynamoDBStreamsKeySchemaElement
{
	struct FString                                     attributeName;                                             // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DynamoDBStreams_EAWSDynamoDBStreamsKeyType         keyType;                                                   // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2B4S[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct DynamoDBStreams.SequenceNumberRange
// 0x0020
struct FSequenceNumberRange
{
	struct FString                                     startingSequenceNumber;                                    // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     endingSequenceNumber;                                      // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDBStreams.ListStreamsResult
// 0x0020
struct FListStreamsResult
{
	TArray<struct FStream>                             streams;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     lastEvaluatedStreamArn;                                    // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDBStreams.Shard
// 0x0040
struct FShard
{
	struct FString                                     shardId;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSequenceNumberRange                        SequenceNumberRange;                                       // 0x0010(0x0020) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FString                                     parentShardId;                                             // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDBStreams.StreamDescription
// 0x0070
struct FStreamDescription
{
	struct FString                                     streamArn;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     streamLabel;                                               // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DynamoDBStreams_EAWSStreamStatus                   streamStatus;                                              // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DynamoDBStreams_EAWSDynamoDBStreamsStreamViewType  streamViewType;                                            // 0x0021(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_K9R8[0x6];                                     // 0x0022(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDateTime                                   creationRequestDateTime;                                   // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     tableName;                                                 // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FDynamoDBStreamsKeySchemaElement>    keySchema;                                                 // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FShard>                              shards;                                                    // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     lastEvaluatedShardId;                                      // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDBStreams.DescribeStreamResult
// 0x0070
struct FDescribeStreamResult
{
	struct FStreamDescription                          StreamDescription;                                         // 0x0000(0x0070) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDBStreams.StreamRecord
// 0x0108
struct FStreamRecord
{
	TMap<struct FString, struct FDynamoDBStreamsAttributeValue> Keys;                                                      // 0x0000(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<struct FString, struct FDynamoDBStreamsAttributeValue> newImage;                                                  // 0x0050(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<struct FString, struct FDynamoDBStreamsAttributeValue> oldImage;                                                  // 0x00A0(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     sequenceNumber;                                            // 0x00F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                sizeBytes;                                                 // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DynamoDBStreams_EAWSDynamoDBStreamsStreamViewType  streamViewType;                                            // 0x0104(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ES7R[0x3];                                     // 0x0105(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct DynamoDBStreams.DynamoDBStreamsRecord
// 0x0150
struct FDynamoDBStreamsRecord
{
	struct FString                                     eventId;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DynamoDBStreams_EAWSOperationType                  EventName;                                                 // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4R00[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     eventVersion;                                              // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     eventSource;                                               // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     awsRegion;                                                 // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FStreamRecord                               DynamoDB;                                                  // 0x0048(0x0108) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamoDBStreams.GetRecordsResult
// 0x0020
struct FGetRecordsResult
{
	TArray<struct FDynamoDBStreamsRecord>              records;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     nextShardIterator;                                         // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
