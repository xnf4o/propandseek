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

// Enum CognitoIdentity.EAmbiguousRoleResolutionType
enum class CognitoIdentity_EAmbiguousRoleResolutionType : uint8_t
{
	EAmbiguousRoleResolutionType__NOT_SET = 0,
	EAmbiguousRoleResolutionType__AuthenticatedRole = 1,
	EAmbiguousRoleResolutionType__Deny = 2,
	EAmbiguousRoleResolutionType__EAmbiguousRoleResolutionType_MAX = 3,

};

// Enum CognitoIdentity.ECognitoIdentityError
enum class CognitoIdentity_ECognitoIdentityError : uint8_t
{
	ECognitoIdentityError__INCOMPLETE_SIGNATURE = 0,
	ECognitoIdentityError__INTERNAL_FAILURE = 1,
	ECognitoIdentityError__INVALID_ACTION = 2,
	ECognitoIdentityError__INVALID_CLIENT_TOKEN_ID = 3,
	ECognitoIdentityError__INVALID_PARAMETER_COMBINATION = 4,
	ECognitoIdentityError__INVALID_QUERY_PARAMETER = 5,
	ECognitoIdentityError__INVALID_PARAMETER_VALUE = 6,
	ECognitoIdentityError__MISSING_ACTION = 7,
	ECognitoIdentityError__MISSING_AUTHENTICATION_TOKEN = 8,
	ECognitoIdentityError__MISSING_PARAMETER = 9,
	ECognitoIdentityError__OPT_IN_REQUIRED = 10,
	ECognitoIdentityError__REQUEST_EXPIRED = 11,
	ECognitoIdentityError__SERVICE_UNAVAILABLE = 12,
	ECognitoIdentityError__THROTTLING = 13,
	ECognitoIdentityError__VALIDATION = 14,
	ECognitoIdentityError__ACCESS_DENIED = 15,
	ECognitoIdentityError__RESOURCE_NOT_FOUND = 16,
	ECognitoIdentityError__UNRECOGNIZED_CLIENT = 17,
	ECognitoIdentityError__MALFORMED_QUERY_STRING = 18,
	ECognitoIdentityError__SLOW_DOWN = 19,
	ECognitoIdentityError__REQUEST_TIME_TOO_SKEWED = 20,
	ECognitoIdentityError__INVALID_SIGNATURE = 21,
	ECognitoIdentityError__SIGNATURE_DOES_NOT_MATCH = 22,
	ECognitoIdentityError__INVALID_ACCESS_KEY_ID = 23,
	ECognitoIdentityError__REQUEST_TIMEOUT = 24,
	ECognitoIdentityError__NETWORK_CONNECTION = 25,
	ECognitoIdentityError__UNKNOWN = 26,
	ECognitoIdentityError__CONCURRENT_MODIFICATION = 27,
	ECognitoIdentityError__DEVELOPER_USER_ALREADY_REGISTERED = 28,
	ECognitoIdentityError__EXTERNAL_SERVICE = 29,
	ECognitoIdentityError__INTERNAL_ERROR = 30,
	ECognitoIdentityError__INVALID_IDENTITY_POOL_CONFIGURATION = 31,
	ECognitoIdentityError__INVALID_PARAMETER = 32,
	ECognitoIdentityError__LIMIT_EXCEEDED = 33,
	ECognitoIdentityError__NOT_AUTHORIZED = 34,
	ECognitoIdentityError__RESOURCE_CONFLICT = 35,
	ECognitoIdentityError__TOO_MANY_REQUESTS = 36,
	ECognitoIdentityError__ECognitoIdentityError_MAX = 37,

};

// Enum CognitoIdentity.EErrorCode
enum class CognitoIdentity_EErrorCode : uint8_t
{
	EErrorCode__NOT_SET            = 0,
	EErrorCode__AccessDenied       = 1,
	EErrorCode__InternalServerError = 2,
	EErrorCode__EErrorCode_MAX     = 3,

};

// Enum CognitoIdentity.EMappingRuleMatchType
enum class CognitoIdentity_EMappingRuleMatchType : uint8_t
{
	EMappingRuleMatchType__NOT_SET = 0,
	EMappingRuleMatchType__Equals  = 1,
	EMappingRuleMatchType__Contains = 2,
	EMappingRuleMatchType__StartsWith = 3,
	EMappingRuleMatchType__NotEqual = 4,
	EMappingRuleMatchType__EMappingRuleMatchType_MAX = 5,

};

// Enum CognitoIdentity.ERoleMappingType
enum class CognitoIdentity_ERoleMappingType : uint8_t
{
	ERoleMappingType__NOT_SET      = 0,
	ERoleMappingType__Token        = 1,
	ERoleMappingType__Rules        = 2,
	ERoleMappingType__ERoleMappingType_MAX = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct CognitoIdentity.CognitoIdentityProvider
// 0x0028
struct FCognitoIdentityProvider
{
	struct FString                                     providerName;                                              // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ClientId;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               serverSideTokenCheck;                                      // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Y6AJ[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct CognitoIdentity.CognitoIdentityUntagResourceRequest
// 0x0020
struct FCognitoIdentityUntagResourceRequest
{
	struct FString                                     resourceArn;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             tagKeys;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdentity.CognitoIdentityUntagResourceResult
// 0x0001
struct FCognitoIdentityUntagResourceResult
{
	unsigned char                                      UnknownData_GRFW[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct CognitoIdentity.UnlinkIdentityRequest
// 0x0070
struct FUnlinkIdentityRequest
{
	struct FString                                     identityId;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FString, struct FString>               logins;                                                    // 0x0010(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             loginsToRemove;                                            // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdentity.UnlinkDeveloperIdentityRequest
// 0x0040
struct FUnlinkDeveloperIdentityRequest
{
	struct FString                                     identityId;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     identityPoolId;                                            // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     developerProviderName;                                     // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     developerUserIdentifier;                                   // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdentity.CognitoIdentityTagResourceRequest
// 0x0060
struct FCognitoIdentityTagResourceRequest
{
	struct FString                                     resourceArn;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FString, struct FString>               Tags;                                                      // 0x0010(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdentity.CognitoIdentityTagResourceResult
// 0x0001
struct FCognitoIdentityTagResourceResult
{
	unsigned char                                      UnknownData_0A1H[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct CognitoIdentity.MappingRule
// 0x0038
struct FMappingRule
{
	struct FString                                     claim;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	CognitoIdentity_EMappingRuleMatchType              matchType;                                                 // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8X3I[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Value;                                                     // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     roleArn;                                                   // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdentity.MergeDeveloperIdentitiesRequest
// 0x0040
struct FMergeDeveloperIdentitiesRequest
{
	struct FString                                     sourceUserIdentifier;                                      // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     destinationUserIdentifier;                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     developerProviderName;                                     // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     identityPoolId;                                            // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdentity.MergeDeveloperIdentitiesResult
// 0x0010
struct FMergeDeveloperIdentitiesResult
{
	struct FString                                     identityId;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdentity.LookupDeveloperIdentityRequest
// 0x0048
struct FLookupDeveloperIdentityRequest
{
	struct FString                                     identityPoolId;                                            // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     identityId;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     developerUserIdentifier;                                   // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                maxResults;                                                // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_V3AR[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     nextToken;                                                 // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdentity.LookupDeveloperIdentityResult
// 0x0030
struct FLookupDeveloperIdentityResult
{
	struct FString                                     identityId;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             developerUserIdentifierList;                               // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     nextToken;                                                 // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdentity.CognitoIdentityListTagsForResourceRequest
// 0x0010
struct FCognitoIdentityListTagsForResourceRequest
{
	struct FString                                     resourceArn;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdentity.CognitoIdentityListTagsForResourceResult
// 0x0050
struct FCognitoIdentityListTagsForResourceResult
{
	TMap<struct FString, struct FString>               Tags;                                                      // 0x0000(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdentity.ListIdentityPoolsRequest
// 0x0018
struct FListIdentityPoolsRequest
{
	int                                                maxResults;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GXKU[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     nextToken;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdentity.IdentityPoolShortDescription
// 0x0020
struct FIdentityPoolShortDescription
{
	struct FString                                     identityPoolId;                                            // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     identityPoolName;                                          // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdentity.ListIdentitiesRequest
// 0x0030
struct FListIdentitiesRequest
{
	struct FString                                     identityPoolId;                                            // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                maxResults;                                                // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IMG8[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     nextToken;                                                 // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               hideDisabled;                                              // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QRDJ[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct CognitoIdentity.GetOpenIdTokenForDeveloperIdentityRequest
// 0x0078
struct FGetOpenIdTokenForDeveloperIdentityRequest
{
	struct FString                                     identityPoolId;                                            // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     identityId;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FString, struct FString>               logins;                                                    // 0x0020(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                tokenDuration;                                             // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UUDC[0x4];                                     // 0x0074(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct CognitoIdentity.GetOpenIdTokenForDeveloperIdentityResult
// 0x0020
struct FGetOpenIdTokenForDeveloperIdentityResult
{
	struct FString                                     identityId;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Token;                                                     // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdentity.GetOpenIdTokenRequest
// 0x0060
struct FGetOpenIdTokenRequest
{
	struct FString                                     identityId;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FString, struct FString>               logins;                                                    // 0x0010(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdentity.GetOpenIdTokenResult
// 0x0020
struct FGetOpenIdTokenResult
{
	struct FString                                     identityId;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Token;                                                     // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdentity.GetIdentityPoolRolesRequest
// 0x0010
struct FGetIdentityPoolRolesRequest
{
	struct FString                                     identityPoolId;                                            // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdentity.GetIdRequest
// 0x0070
struct FGetIdRequest
{
	struct FString                                     accountId;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     identityPoolId;                                            // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FString, struct FString>               logins;                                                    // 0x0020(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdentity.GetIdResult
// 0x0010
struct FGetIdResult
{
	struct FString                                     identityId;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdentity.GetCredentialsForIdentityRequest
// 0x0070
struct FGetCredentialsForIdentityRequest
{
	struct FString                                     identityId;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FString, struct FString>               logins;                                                    // 0x0010(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     customRoleArn;                                             // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdentity.DescribeIdentityPoolRequest
// 0x0010
struct FDescribeIdentityPoolRequest
{
	struct FString                                     identityPoolId;                                            // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdentity.DescribeIdentityRequest
// 0x0010
struct FDescribeIdentityRequest
{
	struct FString                                     identityId;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdentity.DeleteIdentityPoolRequest
// 0x0010
struct FDeleteIdentityPoolRequest
{
	struct FString                                     identityPoolId;                                            // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdentity.DeleteIdentitiesRequest
// 0x0010
struct FDeleteIdentitiesRequest
{
	TArray<struct FString>                             identityIdsToDelete;                                       // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdentity.UnprocessedIdentityId
// 0x0018
struct FUnprocessedIdentityId
{
	struct FString                                     identityId;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	CognitoIdentity_EErrorCode                         ErrorCode;                                                 // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MFV5[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct CognitoIdentity.UpdateIdentityPoolResult
// 0x0108
struct FUpdateIdentityPoolResult
{
	struct FString                                     identityPoolId;                                            // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     identityPoolName;                                          // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               allowUnauthenticatedIdentities;                            // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_09J0[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<struct FString, struct FString>               supportedLoginProviders;                                   // 0x0028(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     developerProviderName;                                     // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             openIdConnectProviderARNs;                                 // 0x0088(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCognitoIdentityProvider>            cognitoIdentityProviders;                                  // 0x0098(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             samlProviderARNs;                                          // 0x00A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<struct FString, struct FString>               identityPoolTags;                                          // 0x00B8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdentity.RulesConfigurationType
// 0x0010
struct FRulesConfigurationType
{
	TArray<struct FMappingRule>                        Rules;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdentity.RoleMapping
// 0x0018
struct FRoleMapping
{
	CognitoIdentity_ERoleMappingType                   Type;                                                      // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	CognitoIdentity_EAmbiguousRoleResolutionType       ambiguousRoleResolution;                                   // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KAF3[0x6];                                     // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRulesConfigurationType                     rulesConfiguration;                                        // 0x0008(0x0010) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdentity.SetIdentityPoolRolesRequest
// 0x00B0
struct FSetIdentityPoolRolesRequest
{
	struct FString                                     identityPoolId;                                            // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FString, struct FString>               roles;                                                     // 0x0010(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<struct FString, struct FRoleMapping>          roleMappings;                                              // 0x0060(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdentity.CognitoCredentials
// 0x0038
struct FCognitoCredentials
{
	struct FString                                     accessKeyId;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     secretKey;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     sessionToken;                                              // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   expiration;                                                // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdentity.GetCredentialsForIdentityResult
// 0x0048
struct FGetCredentialsForIdentityResult
{
	struct FString                                     identityId;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCognitoCredentials                         credentials;                                               // 0x0010(0x0038) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdentity.CreateIdentityPoolResult
// 0x0108
struct FCreateIdentityPoolResult
{
	struct FString                                     identityPoolId;                                            // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     identityPoolName;                                          // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               allowUnauthenticatedIdentities;                            // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1516[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<struct FString, struct FString>               supportedLoginProviders;                                   // 0x0028(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     developerProviderName;                                     // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             openIdConnectProviderARNs;                                 // 0x0088(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCognitoIdentityProvider>            cognitoIdentityProviders;                                  // 0x0098(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             samlProviderARNs;                                          // 0x00A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<struct FString, struct FString>               identityPoolTags;                                          // 0x00B8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdentity.ListIdentityPoolsResult
// 0x0020
struct FListIdentityPoolsResult
{
	TArray<struct FIdentityPoolShortDescription>       identityPools;                                             // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     nextToken;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdentity.DescribeIdentityResult
// 0x0030
struct FDescribeIdentityResult
{
	struct FString                                     identityId;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             logins;                                                    // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FDateTime                                   creationDate;                                              // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   lastModifiedDate;                                          // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdentity.CreateIdentityPoolRequest
// 0x00F8
struct FCreateIdentityPoolRequest
{
	struct FString                                     identityPoolName;                                          // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               allowUnauthenticatedIdentities;                            // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OL3B[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<struct FString, struct FString>               supportedLoginProviders;                                   // 0x0018(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     developerProviderName;                                     // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             openIdConnectProviderARNs;                                 // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCognitoIdentityProvider>            cognitoIdentityProviders;                                  // 0x0088(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             samlProviderARNs;                                          // 0x0098(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<struct FString, struct FString>               identityPoolTags;                                          // 0x00A8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdentity.IdentityDescription
// 0x0030
struct FIdentityDescription
{
	struct FString                                     identityId;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             logins;                                                    // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FDateTime                                   creationDate;                                              // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   lastModifiedDate;                                          // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdentity.ListIdentitiesResult
// 0x0030
struct FListIdentitiesResult
{
	struct FString                                     identityPoolId;                                            // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FIdentityDescription>                identities;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     nextToken;                                                 // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdentity.GetIdentityPoolRolesResult
// 0x00B0
struct FGetIdentityPoolRolesResult
{
	struct FString                                     identityPoolId;                                            // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FString, struct FString>               roles;                                                     // 0x0010(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<struct FString, struct FRoleMapping>          roleMappings;                                              // 0x0060(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdentity.DescribeIdentityPoolResult
// 0x0108
struct FDescribeIdentityPoolResult
{
	struct FString                                     identityPoolId;                                            // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     identityPoolName;                                          // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               allowUnauthenticatedIdentities;                            // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3DTQ[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<struct FString, struct FString>               supportedLoginProviders;                                   // 0x0028(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     developerProviderName;                                     // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             openIdConnectProviderARNs;                                 // 0x0088(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCognitoIdentityProvider>            cognitoIdentityProviders;                                  // 0x0098(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             samlProviderARNs;                                          // 0x00A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<struct FString, struct FString>               identityPoolTags;                                          // 0x00B8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdentity.DeleteIdentitiesResult
// 0x0010
struct FDeleteIdentitiesResult
{
	TArray<struct FUnprocessedIdentityId>              unprocessedIdentityIds;                                    // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdentity.UpdateIdentityPoolRequest
// 0x0108
struct FUpdateIdentityPoolRequest
{
	struct FString                                     identityPoolId;                                            // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     identityPoolName;                                          // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               allowUnauthenticatedIdentities;                            // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DHAC[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<struct FString, struct FString>               supportedLoginProviders;                                   // 0x0028(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     developerProviderName;                                     // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             openIdConnectProviderARNs;                                 // 0x0088(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCognitoIdentityProvider>            cognitoIdentityProviders;                                  // 0x0098(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             samlProviderARNs;                                          // 0x00A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<struct FString, struct FString>               identityPoolTags;                                          // 0x00B8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
