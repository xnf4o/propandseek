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

// Enum Lambda.EAWSEventSourcePosition
enum class Lambda_EAWSEventSourcePosition : uint8_t
{
	EAWSEventSourcePosition__NOT_SET = 0,
	EAWSEventSourcePosition__TRIM_HORIZON = 1,
	EAWSEventSourcePosition__LATEST = 2,
	EAWSEventSourcePosition__AT_TIMESTAMP = 3,
	EAWSEventSourcePosition__EAWSEventSourcePosition_MAX = 4,

};

// Enum Lambda.EAWSFunctionVersion
enum class Lambda_EAWSFunctionVersion : uint8_t
{
	EAWSFunctionVersion__NOT_SET   = 0,
	EAWSFunctionVersion__ALL       = 1,
	EAWSFunctionVersion__EAWSFunctionVersion_MAX = 2,

};

// Enum Lambda.EAWSInvocationType
enum class Lambda_EAWSInvocationType : uint8_t
{
	EAWSInvocationType__NOT_SET    = 0,
	EAWSInvocationType__Event      = 1,
	EAWSInvocationType__RequestResponse = 2,
	EAWSInvocationType__DryRun     = 3,
	EAWSInvocationType__EAWSInvocationType_MAX = 4,

};

// Enum Lambda.ELambdaError
enum class Lambda_ELambdaError : uint8_t
{
	ELambdaError__INCOMPLETE_SIGNATURE = 0,
	ELambdaError__INTERNAL_FAILURE = 1,
	ELambdaError__INVALID_ACTION   = 2,
	ELambdaError__INVALID_CLIENT_TOKEN_ID = 3,
	ELambdaError__INVALID_PARAMETER_COMBINATION = 4,
	ELambdaError__INVALID_QUERY_PARAMETER = 5,
	ELambdaError__INVALID_PARAMETER_VALUE = 6,
	ELambdaError__MISSING_ACTION   = 7,
	ELambdaError__MISSING_AUTHENTICATION_TOKEN = 8,
	ELambdaError__MISSING_PARAMETER = 9,
	ELambdaError__OPT_IN_REQUIRED  = 10,
	ELambdaError__REQUEST_EXPIRED  = 11,
	ELambdaError__SERVICE_UNAVAILABLE = 12,
	ELambdaError__THROTTLING       = 13,
	ELambdaError__VALIDATION       = 14,
	ELambdaError__ACCESS_DENIED    = 15,
	ELambdaError__RESOURCE_NOT_FOUND = 16,
	ELambdaError__UNRECOGNIZED_CLIENT = 17,
	ELambdaError__MALFORMED_QUERY_STRING = 18,
	ELambdaError__SLOW_DOWN        = 19,
	ELambdaError__REQUEST_TIME_TOO_SKEWED = 20,
	ELambdaError__INVALID_SIGNATURE = 21,
	ELambdaError__SIGNATURE_DOES_NOT_MATCH = 22,
	ELambdaError__INVALID_ACCESS_KEY_ID = 23,
	ELambdaError__REQUEST_TIMEOUT  = 24,
	ELambdaError__NETWORK_CONNECTION = 25,
	ELambdaError__UNKNOWN          = 26,
	ELambdaError__CODE_STORAGE_EXCEEDED = 27,
	ELambdaError__EC2_ACCESS_DENIED = 28,
	ELambdaError__EC2_THROTTLED    = 29,
	ELambdaError__EC2_UNEXPECTED   = 30,
	ELambdaError__ENI_LIMIT_REACHED = 31,
	ELambdaError__INVALID_REQUEST_CONTENT = 32,
	ELambdaError__INVALID_RUNTIME  = 33,
	ELambdaError__INVALID_SECURITY_GROUP_ID = 34,
	ELambdaError__INVALID_SUBNET_ID = 35,
	ELambdaError__INVALID_ZIP_FILE = 36,
	ELambdaError__KMS_ACCESS_DENIED = 37,
	ELambdaError__KMS_DISABLED     = 38,
	ELambdaError__KMS_INVALID_STATE = 39,
	ELambdaError__KMS_NOT_FOUND    = 40,
	ELambdaError__POLICY_LENGTH_EXCEEDED = 41,
	ELambdaError__PRECONDITION_FAILED = 42,
	ELambdaError__REQUEST_TOO_LARGE = 43,
	ELambdaError__RESOURCE_CONFLICT = 44,
	ELambdaError__RESOURCE_IN_USE  = 45,
	ELambdaError__SERVICE          = 46,
	ELambdaError__SUBNET_IP_ADDRESS_LIMIT_REACHED = 47,
	ELambdaError__TOO_MANY_REQUESTS = 48,
	ELambdaError__UNSUPPORTED_MEDIA_TYPE = 49,
	ELambdaError__ELambdaError_MAX = 50,

};

// Enum Lambda.EAWSLogType
enum class Lambda_EAWSLogType : uint8_t
{
	EAWSLogType__NOT_SET           = 0,
	EAWSLogType__None              = 1,
	EAWSLogType__Tail              = 2,
	EAWSLogType__EAWSLogType_MAX   = 3,

};

// Enum Lambda.EAWSRuntime
enum class Lambda_EAWSRuntime : uint8_t
{
	EAWSRuntime__NOT_SET           = 0,
	EAWSRuntime__nodejs            = 1,
	EAWSRuntime__nodejs4           = 2,
	EAWSRuntime__nodejs6           = 3,
	EAWSRuntime__nodejs8           = 4,
	EAWSRuntime__nodejs10_x        = 5,
	EAWSRuntime__java8             = 6,
	EAWSRuntime__python2           = 7,
	EAWSRuntime__python3           = 8,
	EAWSRuntime__python301         = 9,
	EAWSRuntime__dotnetcore1       = 10,
	EAWSRuntime__dotnetcore2       = 11,
	EAWSRuntime__dotnetcore201     = 12,
	EAWSRuntime__nodejs4_3_edge    = 13,
	EAWSRuntime__go1_x             = 14,
	EAWSRuntime__ruby2             = 15,
	EAWSRuntime__provided          = 16,
	EAWSRuntime__EAWSRuntime_MAX   = 17,

};

// Enum Lambda.EThrottleReason
enum class Lambda_EThrottleReason : uint8_t
{
	EThrottleReason__NOT_SET       = 0,
	EThrottleReason__ConcurrentInvocationLimitExceeded = 1,
	EThrottleReason__FunctionInvocationRateLimitExceeded = 2,
	EThrottleReason__ReservedFunctionConcurrentInvocationLimitExceeded = 3,
	EThrottleReason__ReservedFunctionInvocationRateLimitExceeded = 4,
	EThrottleReason__CallerRateLimitExceeded = 5,
	EThrottleReason__EThrottleReason_MAX = 6,

};

// Enum Lambda.EAWSTracingMode
enum class Lambda_EAWSTracingMode : uint8_t
{
	EAWSTracingMode__NOT_SET       = 0,
	EAWSTracingMode__Active        = 1,
	EAWSTracingMode__PassThrough   = 2,
	EAWSTracingMode__EAWSTracingMode_MAX = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Lambda.VpcConfig
// 0x0020
struct FVpcConfig
{
	TArray<struct FString>                             subnetIds;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             securityGroupIds;                                          // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Lambda.Environment
// 0x0050
struct FEnvironment
{
	TMap<struct FString, struct FString>               variables;                                                 // 0x0000(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Lambda.DeadLetterConfig
// 0x0010
struct FDeadLetterConfig
{
	struct FString                                     targetArn;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Lambda.TracingConfig
// 0x0001
struct FTracingConfig
{
	Lambda_EAWSTracingMode                             Mode;                                                      // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Lambda.VpcConfigResponse
// 0x0030
struct FVpcConfigResponse
{
	TArray<struct FString>                             subnetIds;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             securityGroupIds;                                          // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     vpcId;                                                     // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Lambda.EnvironmentError
// 0x0020
struct FEnvironmentError
{
	struct FString                                     ErrorCode;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Message;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Lambda.TracingConfigResponse
// 0x0001
struct FTracingConfigResponse
{
	Lambda_EAWSTracingMode                             Mode;                                                      // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Lambda.AWSLayer
// 0x0018
struct FAWSLayer
{
	struct FString                                     arn;                                                       // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                codeSize;                                                  // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2YVZ[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Lambda.UpdateFunctionCodeRequest
// 0x0068
struct FUpdateFunctionCodeRequest
{
	struct FString                                     FunctionName;                                              // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     zipFile;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     s3Bucket;                                                  // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     S3Key;                                                     // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     S3ObjectVersion;                                           // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               publish;                                                   // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               dryRun;                                                    // 0x0051(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LIGI[0x6];                                     // 0x0052(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     revisionId;                                                // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Lambda.UpdateEventSourceMappingRequest
// 0x0030
struct FUpdateEventSourceMappingRequest
{
	struct FString                                     UUID;                                                      // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     FunctionName;                                              // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Enabled;                                                   // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BVJI[0x3];                                     // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                batchSize;                                                 // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                maximumBatchingWindowInSeconds;                            // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_50OW[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Lambda.AliasRoutingConfiguration
// 0x0050
struct FAliasRoutingConfiguration
{
	TMap<struct FString, float>                        additionalVersionWeights;                                  // 0x0000(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Lambda.LambdaUntagResourceRequest
// 0x0020
struct FLambdaUntagResourceRequest
{
	struct FString                                     resource;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             tagKeys;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Lambda.LambdaTagResourceRequest
// 0x0060
struct FLambdaTagResourceRequest
{
	struct FString                                     resource;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FString, struct FString>               Tags;                                                      // 0x0010(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Lambda.RemovePermissionRequest
// 0x0040
struct FRemovePermissionRequest
{
	struct FString                                     FunctionName;                                              // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     statementId;                                               // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     qualifier;                                                 // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     revisionId;                                                // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Lambda.RemoveLayerVersionPermissionRequest
// 0x0038
struct FRemoveLayerVersionPermissionRequest
{
	struct FString                                     LayerName;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                versionNumber;                                             // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WT47[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     statementId;                                               // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     revisionId;                                                // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Lambda.PutFunctionConcurrencyRequest
// 0x0018
struct FPutFunctionConcurrencyRequest
{
	struct FString                                     FunctionName;                                              // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                reservedConcurrentExecutions;                              // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WAXY[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Lambda.PutFunctionConcurrencyResult
// 0x0004
struct FPutFunctionConcurrencyResult
{
	int                                                reservedConcurrentExecutions;                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Lambda.PublishVersionRequest
// 0x0040
struct FPublishVersionRequest
{
	struct FString                                     FunctionName;                                              // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     codeSha256;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Description;                                               // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     revisionId;                                                // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Lambda.LayerVersionContentInput
// 0x0040
struct FLayerVersionContentInput
{
	struct FString                                     s3Bucket;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     S3Key;                                                     // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     S3ObjectVersion;                                           // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     zipFile;                                                   // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Lambda.LayerVersionContentOutput
// 0x0028
struct FLayerVersionContentOutput
{
	struct FString                                     Location;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     codeSha256;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                codeSize;                                                  // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JNVD[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Lambda.ListVersionsByFunctionRequest
// 0x0028
struct FListVersionsByFunctionRequest
{
	struct FString                                     FunctionName;                                              // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     marker;                                                    // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                maxItems;                                                  // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3HV7[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Lambda.ListTagsRequest
// 0x0010
struct FListTagsRequest
{
	struct FString                                     resource;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Lambda.ListTagsResult
// 0x0050
struct FListTagsResult
{
	TMap<struct FString, struct FString>               Tags;                                                      // 0x0000(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Lambda.ListLayerVersionsRequest
// 0x0030
struct FListLayerVersionsRequest
{
	Lambda_EAWSRuntime                                 compatibleRuntime;                                         // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GXIS[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     LayerName;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     marker;                                                    // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                maxItems;                                                  // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_P4JL[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Lambda.LayerVersionsListItem
// 0x0058
struct FLayerVersionsListItem
{
	struct FString                                     layerVersionArn;                                           // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Version;                                                   // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TYSN[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Description;                                               // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     createdDate;                                               // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<Lambda_EAWSRuntime>                         compatibleRuntimes;                                        // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     licenseInfo;                                               // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Lambda.ListLayersRequest
// 0x0020
struct FListLayersRequest
{
	Lambda_EAWSRuntime                                 compatibleRuntime;                                         // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0S4I[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     marker;                                                    // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                maxItems;                                                  // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ING3[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Lambda.ListFunctionsRequest
// 0x0030
struct FListFunctionsRequest
{
	struct FString                                     masterRegion;                                              // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Lambda_EAWSFunctionVersion                         functionVersion;                                           // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_N9PX[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     marker;                                                    // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                maxItems;                                                  // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WJOU[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Lambda.ListEventSourceMappingsRequest
// 0x0038
struct FListEventSourceMappingsRequest
{
	struct FString                                     eventSourceArn;                                            // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     FunctionName;                                              // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     marker;                                                    // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                maxItems;                                                  // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_X8AL[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Lambda.LambdaListAliasesRequest
// 0x0038
struct FLambdaListAliasesRequest
{
	struct FString                                     FunctionName;                                              // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     functionVersion;                                           // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     marker;                                                    // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                maxItems;                                                  // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7MQE[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Lambda.InvokeRequest
// 0x0058
struct FInvokeRequest
{
	struct FString                                     FunctionName;                                              // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Lambda_EAWSInvocationType                          invocationType;                                            // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Lambda_EAWSLogType                                 logType;                                                   // 0x0011(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PM3F[0x6];                                     // 0x0012(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     clientContext;                                             // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     qualifier;                                                 // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Body;                                                      // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     contentType;                                               // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Lambda.InvokeResult
// 0x0048
struct FInvokeResult
{
	int                                                statusCode;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OX1R[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     functionError;                                             // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     logResult;                                                 // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     payload;                                                   // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     executedVersion;                                           // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Lambda.GetPolicyRequest
// 0x0020
struct FGetPolicyRequest
{
	struct FString                                     FunctionName;                                              // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     qualifier;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Lambda.GetPolicyResult
// 0x0020
struct FGetPolicyResult
{
	struct FString                                     policy;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     revisionId;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Lambda.GetLayerVersionPolicyRequest
// 0x0018
struct FGetLayerVersionPolicyRequest
{
	struct FString                                     LayerName;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                versionNumber;                                             // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CKVG[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Lambda.GetLayerVersionPolicyResult
// 0x0020
struct FGetLayerVersionPolicyResult
{
	struct FString                                     policy;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     revisionId;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Lambda.GetLayerVersionByArnRequest
// 0x0010
struct FGetLayerVersionByArnRequest
{
	struct FString                                     arn;                                                       // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Lambda.GetLayerVersionRequest
// 0x0018
struct FGetLayerVersionRequest
{
	struct FString                                     LayerName;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                versionNumber;                                             // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_I0B4[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Lambda.GetFunctionConfigurationRequest
// 0x0020
struct FGetFunctionConfigurationRequest
{
	struct FString                                     FunctionName;                                              // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     qualifier;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Lambda.GetFunctionRequest
// 0x0020
struct FGetFunctionRequest
{
	struct FString                                     FunctionName;                                              // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     qualifier;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Lambda.FunctionCodeLocation
// 0x0020
struct FFunctionCodeLocation
{
	struct FString                                     repositoryType;                                            // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Location;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Lambda.Concurrency
// 0x0004
struct FConcurrency
{
	int                                                reservedConcurrentExecutions;                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Lambda.GetEventSourceMappingRequest
// 0x0010
struct FGetEventSourceMappingRequest
{
	struct FString                                     UUID;                                                      // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Lambda.GetAliasRequest
// 0x0020
struct FGetAliasRequest
{
	struct FString                                     FunctionName;                                              // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Name;                                                      // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Lambda.GetAccountSettingsRequest
// 0x0001
struct FGetAccountSettingsRequest
{
	unsigned char                                      UnknownData_NWKX[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct Lambda.AccountLimit
// 0x0014
struct FAccountLimit
{
	int                                                totalCodeSize;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                codeSizeUnzipped;                                          // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                codeSizeZipped;                                            // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                concurrentExecutions;                                      // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                unreservedConcurrentExecutions;                            // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Lambda.AccountUsage
// 0x0008
struct FAccountUsage
{
	int                                                totalCodeSize;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                functionCount;                                             // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Lambda.DeleteLayerVersionRequest
// 0x0018
struct FDeleteLayerVersionRequest
{
	struct FString                                     LayerName;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                versionNumber;                                             // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Y4W0[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Lambda.DeleteFunctionConcurrencyRequest
// 0x0010
struct FDeleteFunctionConcurrencyRequest
{
	struct FString                                     FunctionName;                                              // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Lambda.DeleteFunctionRequest
// 0x0020
struct FDeleteFunctionRequest
{
	struct FString                                     FunctionName;                                              // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     qualifier;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Lambda.DeleteEventSourceMappingRequest
// 0x0010
struct FDeleteEventSourceMappingRequest
{
	struct FString                                     UUID;                                                      // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Lambda.LambdaDeleteAliasRequest
// 0x0020
struct FLambdaDeleteAliasRequest
{
	struct FString                                     FunctionName;                                              // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Name;                                                      // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Lambda.FunctionCode
// 0x0040
struct FFunctionCode
{
	struct FString                                     zipFile;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     s3Bucket;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     S3Key;                                                     // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     S3ObjectVersion;                                           // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Lambda.AddPermissionRequest
// 0x0090
struct FAddPermissionRequest
{
	struct FString                                     FunctionName;                                              // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     statementId;                                               // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     action;                                                    // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     principal;                                                 // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     sourceArn;                                                 // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     sourceAccount;                                             // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     eventSourceToken;                                          // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     qualifier;                                                 // 0x0070(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     revisionId;                                                // 0x0080(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Lambda.AddPermissionResult
// 0x0010
struct FAddPermissionResult
{
	struct FString                                     statement;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Lambda.AddLayerVersionPermissionRequest
// 0x0068
struct FAddLayerVersionPermissionRequest
{
	struct FString                                     LayerName;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                versionNumber;                                             // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9GQE[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     statementId;                                               // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     action;                                                    // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     principal;                                                 // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     organizationId;                                            // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     revisionId;                                                // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Lambda.AddLayerVersionPermissionResult
// 0x0020
struct FAddLayerVersionPermissionResult
{
	struct FString                                     statement;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     revisionId;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Lambda.UpdateFunctionConfigurationRequest
// 0x0108
struct FUpdateFunctionConfigurationRequest
{
	struct FString                                     FunctionName;                                              // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Role;                                                      // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     handler;                                                   // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Description;                                               // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Timeout;                                                   // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                memorySize;                                                // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVpcConfig                                  VpcConfig;                                                 // 0x0048(0x0020) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FEnvironment                                Environment;                                               // 0x0068(0x0050) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	Lambda_EAWSRuntime                                 runtime;                                                   // 0x00B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_L8WB[0x7];                                     // 0x00B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDeadLetterConfig                           DeadLetterConfig;                                          // 0x00C0(0x0010) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FString                                     kMSKeyArn;                                                 // 0x00D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTracingConfig                              TracingConfig;                                             // 0x00E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7Y7S[0x7];                                     // 0x00E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     revisionId;                                                // 0x00E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             layers;                                                    // 0x00F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Lambda.EnvironmentResponse
// 0x0070
struct FEnvironmentResponse
{
	TMap<struct FString, struct FString>               variables;                                                 // 0x0000(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FEnvironmentError                           Error;                                                     // 0x0050(0x0020) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct Lambda.UpdateFunctionConfigurationResult
// 0x0190
struct FUpdateFunctionConfigurationResult
{
	struct FString                                     FunctionName;                                              // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     functionArn;                                               // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Lambda_EAWSRuntime                                 runtime;                                                   // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SR8A[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Role;                                                      // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     handler;                                                   // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                codeSize;                                                  // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VBXO[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Description;                                               // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Timeout;                                                   // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                memorySize;                                                // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     lastModified;                                              // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     codeSha256;                                                // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Version;                                                   // 0x0088(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVpcConfigResponse                          VpcConfig;                                                 // 0x0098(0x0030) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FDeadLetterConfig                           DeadLetterConfig;                                          // 0x00C8(0x0010) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FEnvironmentResponse                        Environment;                                               // 0x00D8(0x0070) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FString                                     kMSKeyArn;                                                 // 0x0148(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTracingConfigResponse                      TracingConfig;                                             // 0x0158(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0CFT[0x7];                                     // 0x0159(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     masterArn;                                                 // 0x0160(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     revisionId;                                                // 0x0170(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAWSLayer>                           layers;                                                    // 0x0180(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Lambda.UpdateEventSourceMappingResult
// 0x0070
struct FUpdateEventSourceMappingResult
{
	struct FString                                     UUID;                                                      // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                batchSize;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                maximumBatchingWindowInSeconds;                            // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     eventSourceArn;                                            // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     functionArn;                                               // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   lastModified;                                              // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     lastProcessingResult;                                      // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     State;                                                     // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     stateTransitionReason;                                     // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Lambda.GetAliasResult
// 0x00A0
struct FGetAliasResult
{
	struct FString                                     aliasArn;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Name;                                                      // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     functionVersion;                                           // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Description;                                               // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAliasRoutingConfiguration                  routingConfig;                                             // 0x0040(0x0050) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FString                                     revisionId;                                                // 0x0090(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Lambda.GetAccountSettingsResult
// 0x001C
struct FGetAccountSettingsResult
{
	struct FAccountLimit                               AccountLimit;                                              // 0x0000(0x0014) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FAccountUsage                               AccountUsage;                                              // 0x0014(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Lambda.UpdateFunctionCodeResult
// 0x0190
struct FUpdateFunctionCodeResult
{
	struct FString                                     FunctionName;                                              // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     functionArn;                                               // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Lambda_EAWSRuntime                                 runtime;                                                   // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WSKK[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Role;                                                      // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     handler;                                                   // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                codeSize;                                                  // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BB2S[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Description;                                               // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Timeout;                                                   // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                memorySize;                                                // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     lastModified;                                              // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     codeSha256;                                                // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Version;                                                   // 0x0088(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVpcConfigResponse                          VpcConfig;                                                 // 0x0098(0x0030) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FDeadLetterConfig                           DeadLetterConfig;                                          // 0x00C8(0x0010) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FEnvironmentResponse                        Environment;                                               // 0x00D8(0x0070) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FString                                     kMSKeyArn;                                                 // 0x0148(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTracingConfigResponse                      TracingConfig;                                             // 0x0158(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8H0T[0x7];                                     // 0x0159(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     masterArn;                                                 // 0x0160(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     revisionId;                                                // 0x0170(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAWSLayer>                           layers;                                                    // 0x0180(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Lambda.CreateEventSourceMappingResult
// 0x0070
struct FCreateEventSourceMappingResult
{
	struct FString                                     UUID;                                                      // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                batchSize;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                maximumBatchingWindowInSeconds;                            // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     eventSourceArn;                                            // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     functionArn;                                               // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   lastModified;                                              // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     lastProcessingResult;                                      // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     State;                                                     // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     stateTransitionReason;                                     // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Lambda.LambdaUpdateAliasRequest
// 0x00A0
struct FLambdaUpdateAliasRequest
{
	struct FString                                     FunctionName;                                              // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Name;                                                      // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     functionVersion;                                           // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Description;                                               // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAliasRoutingConfiguration                  routingConfig;                                             // 0x0040(0x0050) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FString                                     revisionId;                                                // 0x0090(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Lambda.LambdaUpdateAliasResult
// 0x00A0
struct FLambdaUpdateAliasResult
{
	struct FString                                     aliasArn;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Name;                                                      // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     functionVersion;                                           // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Description;                                               // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAliasRoutingConfiguration                  routingConfig;                                             // 0x0040(0x0050) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FString                                     revisionId;                                                // 0x0090(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Lambda.PublishLayerVersionRequest
// 0x0080
struct FPublishLayerVersionRequest
{
	struct FString                                     LayerName;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Description;                                               // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLayerVersionContentInput                   Content;                                                   // 0x0020(0x0040) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<Lambda_EAWSRuntime>                         compatibleRuntimes;                                        // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     licenseInfo;                                               // 0x0070(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Lambda.PublishLayerVersionResult
// 0x0090
struct FPublishLayerVersionResult
{
	struct FLayerVersionContentOutput                  Content;                                                   // 0x0000(0x0028) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FString                                     layerArn;                                                  // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     layerVersionArn;                                           // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Description;                                               // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     createdDate;                                               // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Version;                                                   // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OCU3[0x4];                                     // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<Lambda_EAWSRuntime>                         compatibleRuntimes;                                        // 0x0070(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     licenseInfo;                                               // 0x0080(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Lambda.PublishVersionResult
// 0x0190
struct FPublishVersionResult
{
	struct FString                                     FunctionName;                                              // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     functionArn;                                               // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Lambda_EAWSRuntime                                 runtime;                                                   // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1PL9[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Role;                                                      // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     handler;                                                   // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                codeSize;                                                  // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HEO9[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Description;                                               // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Timeout;                                                   // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                memorySize;                                                // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     lastModified;                                              // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     codeSha256;                                                // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Version;                                                   // 0x0088(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVpcConfigResponse                          VpcConfig;                                                 // 0x0098(0x0030) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FDeadLetterConfig                           DeadLetterConfig;                                          // 0x00C8(0x0010) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FEnvironmentResponse                        Environment;                                               // 0x00D8(0x0070) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FString                                     kMSKeyArn;                                                 // 0x0148(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTracingConfigResponse                      TracingConfig;                                             // 0x0158(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PY62[0x7];                                     // 0x0159(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     masterArn;                                                 // 0x0160(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     revisionId;                                                // 0x0170(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAWSLayer>                           layers;                                                    // 0x0180(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Lambda.FunctionConfiguration
// 0x0190
struct FFunctionConfiguration
{
	struct FString                                     FunctionName;                                              // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     functionArn;                                               // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Lambda_EAWSRuntime                                 runtime;                                                   // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HB53[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Role;                                                      // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     handler;                                                   // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                codeSize;                                                  // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_599L[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Description;                                               // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Timeout;                                                   // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                memorySize;                                                // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     lastModified;                                              // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     codeSha256;                                                // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Version;                                                   // 0x0088(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVpcConfigResponse                          VpcConfig;                                                 // 0x0098(0x0030) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FDeadLetterConfig                           DeadLetterConfig;                                          // 0x00C8(0x0010) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FEnvironmentResponse                        Environment;                                               // 0x00D8(0x0070) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FString                                     kMSKeyArn;                                                 // 0x0148(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTracingConfigResponse                      TracingConfig;                                             // 0x0158(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TRR7[0x7];                                     // 0x0159(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     masterArn;                                                 // 0x0160(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     revisionId;                                                // 0x0170(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAWSLayer>                           layers;                                                    // 0x0180(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Lambda.ListVersionsByFunctionResult
// 0x0020
struct FListVersionsByFunctionResult
{
	struct FString                                     nextMarker;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FFunctionConfiguration>              versions;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Lambda.ListLayerVersionsResult
// 0x0020
struct FListLayerVersionsResult
{
	struct FString                                     nextMarker;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FLayerVersionsListItem>              layerVersions;                                             // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Lambda.LayersListItem
// 0x0078
struct FLayersListItem
{
	struct FString                                     LayerName;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     layerArn;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLayerVersionsListItem                      latestMatchingVersion;                                     // 0x0020(0x0058) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct Lambda.ListLayersResult
// 0x0020
struct FListLayersResult
{
	struct FString                                     nextMarker;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FLayersListItem>                     layers;                                                    // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Lambda.ListFunctionsResult
// 0x0020
struct FListFunctionsResult
{
	struct FString                                     nextMarker;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FFunctionConfiguration>              functions;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Lambda.GetLayerVersionByArnResult
// 0x0090
struct FGetLayerVersionByArnResult
{
	struct FLayerVersionContentOutput                  Content;                                                   // 0x0000(0x0028) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FString                                     layerArn;                                                  // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     layerVersionArn;                                           // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Description;                                               // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     createdDate;                                               // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Version;                                                   // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FQ94[0x4];                                     // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<Lambda_EAWSRuntime>                         compatibleRuntimes;                                        // 0x0070(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     licenseInfo;                                               // 0x0080(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Lambda.EventSourceMappingConfiguration
// 0x0070
struct FEventSourceMappingConfiguration
{
	struct FString                                     UUID;                                                      // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                batchSize;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                maximumBatchingWindowInSeconds;                            // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     eventSourceArn;                                            // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     functionArn;                                               // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   lastModified;                                              // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     lastProcessingResult;                                      // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     State;                                                     // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     stateTransitionReason;                                     // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Lambda.ListEventSourceMappingsResult
// 0x0020
struct FListEventSourceMappingsResult
{
	struct FString                                     nextMarker;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FEventSourceMappingConfiguration>    eventSourceMappings;                                       // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Lambda.AliasConfiguration
// 0x00A0
struct FAliasConfiguration
{
	struct FString                                     aliasArn;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Name;                                                      // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     functionVersion;                                           // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Description;                                               // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAliasRoutingConfiguration                  routingConfig;                                             // 0x0040(0x0050) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FString                                     revisionId;                                                // 0x0090(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Lambda.LambdaListAliasesResult
// 0x0020
struct FLambdaListAliasesResult
{
	struct FString                                     nextMarker;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAliasConfiguration>                 aliases;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Lambda.GetLayerVersionResult
// 0x0090
struct FGetLayerVersionResult
{
	struct FLayerVersionContentOutput                  Content;                                                   // 0x0000(0x0028) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FString                                     layerArn;                                                  // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     layerVersionArn;                                           // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Description;                                               // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     createdDate;                                               // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Version;                                                   // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_87V0[0x4];                                     // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<Lambda_EAWSRuntime>                         compatibleRuntimes;                                        // 0x0070(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     licenseInfo;                                               // 0x0080(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Lambda.GetFunctionConfigurationResult
// 0x0190
struct FGetFunctionConfigurationResult
{
	struct FString                                     FunctionName;                                              // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     functionArn;                                               // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Lambda_EAWSRuntime                                 runtime;                                                   // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LGLW[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Role;                                                      // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     handler;                                                   // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                codeSize;                                                  // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_R7K9[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Description;                                               // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Timeout;                                                   // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                memorySize;                                                // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     lastModified;                                              // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     codeSha256;                                                // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Version;                                                   // 0x0088(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVpcConfigResponse                          VpcConfig;                                                 // 0x0098(0x0030) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FDeadLetterConfig                           DeadLetterConfig;                                          // 0x00C8(0x0010) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FEnvironmentResponse                        Environment;                                               // 0x00D8(0x0070) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FString                                     kMSKeyArn;                                                 // 0x0148(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTracingConfigResponse                      TracingConfig;                                             // 0x0158(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_U0DV[0x7];                                     // 0x0159(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     masterArn;                                                 // 0x0160(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     revisionId;                                                // 0x0170(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAWSLayer>                           layers;                                                    // 0x0180(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Lambda.GetEventSourceMappingResult
// 0x0070
struct FGetEventSourceMappingResult
{
	struct FString                                     UUID;                                                      // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                batchSize;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                maximumBatchingWindowInSeconds;                            // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     eventSourceArn;                                            // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     functionArn;                                               // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   lastModified;                                              // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     lastProcessingResult;                                      // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     State;                                                     // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     stateTransitionReason;                                     // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Lambda.GetFunctionResult
// 0x0208
struct FGetFunctionResult
{
	struct FFunctionConfiguration                      configuration;                                             // 0x0000(0x0190) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FFunctionCodeLocation                       code;                                                      // 0x0190(0x0020) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TMap<struct FString, struct FString>               Tags;                                                      // 0x01B0(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FConcurrency                                Concurrency;                                               // 0x0200(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VRLF[0x4];                                     // 0x0204(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Lambda.DeleteEventSourceMappingResult
// 0x0070
struct FDeleteEventSourceMappingResult
{
	struct FString                                     UUID;                                                      // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                batchSize;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                maximumBatchingWindowInSeconds;                            // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     eventSourceArn;                                            // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     functionArn;                                               // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   lastModified;                                              // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     lastProcessingResult;                                      // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     State;                                                     // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     stateTransitionReason;                                     // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Lambda.CreateFunctionRequest
// 0x0190
struct FCreateFunctionRequest
{
	struct FString                                     FunctionName;                                              // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Lambda_EAWSRuntime                                 runtime;                                                   // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QKSR[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Role;                                                      // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     handler;                                                   // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFunctionCode                               code;                                                      // 0x0038(0x0040) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FString                                     Description;                                               // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Timeout;                                                   // 0x0088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                memorySize;                                                // 0x008C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               publish;                                                   // 0x0090(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HWHZ[0x7];                                     // 0x0091(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVpcConfig                                  VpcConfig;                                                 // 0x0098(0x0020) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FDeadLetterConfig                           DeadLetterConfig;                                          // 0x00B8(0x0010) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FEnvironment                                Environment;                                               // 0x00C8(0x0050) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FString                                     kMSKeyArn;                                                 // 0x0118(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTracingConfig                              TracingConfig;                                             // 0x0128(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MS6E[0x7];                                     // 0x0129(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<struct FString, struct FString>               Tags;                                                      // 0x0130(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             layers;                                                    // 0x0180(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Lambda.CreateEventSourceMappingRequest
// 0x0038
struct FCreateEventSourceMappingRequest
{
	struct FString                                     eventSourceArn;                                            // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     FunctionName;                                              // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Enabled;                                                   // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CUJI[0x3];                                     // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                batchSize;                                                 // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                maximumBatchingWindowInSeconds;                            // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Lambda_EAWSEventSourcePosition                     startingPosition;                                          // 0x002C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Y7CL[0x3];                                     // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDateTime                                   startingPositionTimestamp;                                 // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Lambda.LambdaCreateAliasRequest
// 0x0090
struct FLambdaCreateAliasRequest
{
	struct FString                                     FunctionName;                                              // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Name;                                                      // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     functionVersion;                                           // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Description;                                               // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAliasRoutingConfiguration                  routingConfig;                                             // 0x0040(0x0050) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct Lambda.CreateFunctionResult
// 0x0190
struct FCreateFunctionResult
{
	struct FString                                     FunctionName;                                              // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     functionArn;                                               // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Lambda_EAWSRuntime                                 runtime;                                                   // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZQPA[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Role;                                                      // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     handler;                                                   // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                codeSize;                                                  // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LWE1[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Description;                                               // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Timeout;                                                   // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                memorySize;                                                // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     lastModified;                                              // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     codeSha256;                                                // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Version;                                                   // 0x0088(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVpcConfigResponse                          VpcConfig;                                                 // 0x0098(0x0030) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FDeadLetterConfig                           DeadLetterConfig;                                          // 0x00C8(0x0010) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FEnvironmentResponse                        Environment;                                               // 0x00D8(0x0070) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FString                                     kMSKeyArn;                                                 // 0x0148(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTracingConfigResponse                      TracingConfig;                                             // 0x0158(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3VY1[0x7];                                     // 0x0159(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     masterArn;                                                 // 0x0160(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     revisionId;                                                // 0x0170(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAWSLayer>                           layers;                                                    // 0x0180(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Lambda.LambdaCreateAliasResult
// 0x00A0
struct FLambdaCreateAliasResult
{
	struct FString                                     aliasArn;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Name;                                                      // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     functionVersion;                                           // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Description;                                               // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAliasRoutingConfiguration                  routingConfig;                                             // 0x0040(0x0050) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FString                                     revisionId;                                                // 0x0090(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
