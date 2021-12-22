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

// Enum CognitoIdp.EAccountTakeoverEventActionType
enum class CognitoIdp_EAccountTakeoverEventActionType : uint8_t
{
	EAccountTakeoverEventActionType__NOT_SET = 0,
	EAccountTakeoverEventActionType__BLOCK = 1,
	EAccountTakeoverEventActionType__MFA_IF_CONFIGURED = 2,
	EAccountTakeoverEventActionType__MFA_REQUIRED = 3,
	EAccountTakeoverEventActionType__NO_ACTION = 4,
	EAccountTakeoverEventActionType__EAccountTakeoverEventActionType_MAX = 5,

};

// Enum CognitoIdp.EAdvancedSecurityModeType
enum class CognitoIdp_EAdvancedSecurityModeType : uint8_t
{
	EAdvancedSecurityModeType__NOT_SET = 0,
	EAdvancedSecurityModeType__OFF = 1,
	EAdvancedSecurityModeType__AUDIT = 2,
	EAdvancedSecurityModeType__ENFORCED = 3,
	EAdvancedSecurityModeType__EAdvancedSecurityModeType_MAX = 4,

};

// Enum CognitoIdp.EAliasAttributeType
enum class CognitoIdp_EAliasAttributeType : uint8_t
{
	EAliasAttributeType__NOT_SET   = 0,
	EAliasAttributeType__phone_number = 1,
	EAliasAttributeType__email     = 2,
	EAliasAttributeType__preferred_username = 3,
	EAliasAttributeType__EAliasAttributeType_MAX = 4,

};

// Enum CognitoIdp.EAttributeDataType
enum class CognitoIdp_EAttributeDataType : uint8_t
{
	EAttributeDataType__NOT_SET    = 0,
	EAttributeDataType__String     = 1,
	EAttributeDataType__Number     = 2,
	EAttributeDataType__DateTime   = 3,
	EAttributeDataType__Boolean    = 4,
	EAttributeDataType__EAttributeDataType_MAX = 5,

};

// Enum CognitoIdp.EAuthFlowType
enum class CognitoIdp_EAuthFlowType : uint8_t
{
	EAuthFlowType__NOT_SET         = 0,
	EAuthFlowType__USER_SRP_AUTH   = 1,
	EAuthFlowType__REFRESH_TOKEN_AUTH = 2,
	EAuthFlowType__REFRESH_TOKEN   = 3,
	EAuthFlowType__CUSTOM_AUTH     = 4,
	EAuthFlowType__ADMIN_NO_SRP_AUTH = 5,
	EAuthFlowType__USER_PASSWORD_AUTH = 6,
	EAuthFlowType__EAuthFlowType_MAX = 7,

};

// Enum CognitoIdp.EChallengeName
enum class CognitoIdp_EChallengeName : uint8_t
{
	EChallengeName__NOT_SET        = 0,
	EChallengeName__Password       = 1,
	EChallengeName__Mfa            = 2,
	EChallengeName__EChallengeName_MAX = 3,

};

// Enum CognitoIdp.EChallengeNameType
enum class CognitoIdp_EChallengeNameType : uint8_t
{
	EChallengeNameType__NOT_SET    = 0,
	EChallengeNameType__SMS_MFA    = 1,
	EChallengeNameType__SOFTWARE_TOKEN_MFA = 2,
	EChallengeNameType__SELECT_MFA_TYPE = 3,
	EChallengeNameType__MFA_SETUP  = 4,
	EChallengeNameType__PASSWORD_VERIFIER = 5,
	EChallengeNameType__CUSTOM_CHALLENGE = 6,
	EChallengeNameType__DEVICE_SRP_AUTH = 7,
	EChallengeNameType__DEVICE_PASSWORD_VERIFIER = 8,
	EChallengeNameType__ADMIN_NO_SRP_AUTH = 9,
	EChallengeNameType__NEW_PASSWORD_REQUIRED = 10,
	EChallengeNameType__EChallengeNameType_MAX = 11,

};

// Enum CognitoIdp.EChallengeResponse
enum class CognitoIdp_EChallengeResponse : uint8_t
{
	EChallengeResponse__NOT_SET    = 0,
	EChallengeResponse__Success    = 1,
	EChallengeResponse__Failure    = 2,
	EChallengeResponse__EChallengeResponse_MAX = 3,

};

// Enum CognitoIdp.ECognitoIdpError
enum class CognitoIdp_ECognitoIdpError : uint8_t
{
	ECognitoIdpError__INCOMPLETE_SIGNATURE = 0,
	ECognitoIdpError__INTERNAL_FAILURE = 1,
	ECognitoIdpError__INVALID_ACTION = 2,
	ECognitoIdpError__INVALID_CLIENT_TOKEN_ID = 3,
	ECognitoIdpError__INVALID_PARAMETER_COMBINATION = 4,
	ECognitoIdpError__INVALID_QUERY_PARAMETER = 5,
	ECognitoIdpError__INVALID_PARAMETER_VALUE = 6,
	ECognitoIdpError__MISSING_ACTION = 7,
	ECognitoIdpError__MISSING_AUTHENTICATION_TOKEN = 8,
	ECognitoIdpError__MISSING_PARAMETER = 9,
	ECognitoIdpError__OPT_IN_REQUIRED = 10,
	ECognitoIdpError__REQUEST_EXPIRED = 11,
	ECognitoIdpError__SERVICE_UNAVAILABLE = 12,
	ECognitoIdpError__THROTTLING   = 13,
	ECognitoIdpError__VALIDATION   = 14,
	ECognitoIdpError__ACCESS_DENIED = 15,
	ECognitoIdpError__RESOURCE_NOT_FOUND = 16,
	ECognitoIdpError__UNRECOGNIZED_CLIENT = 17,
	ECognitoIdpError__MALFORMED_QUERY_STRING = 18,
	ECognitoIdpError__SLOW_DOWN    = 19,
	ECognitoIdpError__REQUEST_TIME_TOO_SKEWED = 20,
	ECognitoIdpError__INVALID_SIGNATURE = 21,
	ECognitoIdpError__SIGNATURE_DOES_NOT_MATCH = 22,
	ECognitoIdpError__INVALID_ACCESS_KEY_ID = 23,
	ECognitoIdpError__REQUEST_TIMEOUT = 24,
	ECognitoIdpError__NETWORK_CONNECTION = 25,
	ECognitoIdpError__UNKNOWN      = 26,
	ECognitoIdpError__ALIAS_EXISTS = 27,
	ECognitoIdpError__CODE_DELIVERY_FAILURE = 28,
	ECognitoIdpError__CODE_MISMATCH = 29,
	ECognitoIdpError__CONCURRENT_MODIFICATION = 30,
	ECognitoIdpError__DUPLICATE_PROVIDER = 31,
	ECognitoIdpError__ENABLE_SOFTWARE_TOKEN_MFA = 32,
	ECognitoIdpError__EXPIRED_CODE = 33,
	ECognitoIdpError__GROUP_EXISTS = 34,
	ECognitoIdpError__INTERNAL_ERROR = 35,
	ECognitoIdpError__INVALID_EMAIL_ROLE_ACCESS_POLICY = 36,
	ECognitoIdpError__INVALID_LAMBDA_RESPONSE = 37,
	ECognitoIdpError__INVALID_OAUTH_FLOW = 38,
	ECognitoIdpError__INVALID_PARAMETER = 39,
	ECognitoIdpError__INVALID_PASSWORD = 40,
	ECognitoIdpError__INVALID_SMS_ROLE_ACCESS_POLICY = 41,
	ECognitoIdpError__INVALID_SMS_ROLE_TRUST_RELATIONSHIP = 42,
	ECognitoIdpError__INVALID_USER_POOL_CONFIGURATION = 43,
	ECognitoIdpError__LIMIT_EXCEEDED = 44,
	ECognitoIdpError__MFA_METHOD_NOT_FOUND = 45,
	ECognitoIdpError__NOT_AUTHORIZED = 46,
	ECognitoIdpError__PASSWORD_RESET_REQUIRED = 47,
	ECognitoIdpError__PRECONDITION_NOT_MET = 48,
	ECognitoIdpError__SCOPE_DOES_NOT_EXIST = 49,
	ECognitoIdpError__SOFTWARE_TOKEN_MFA_NOT_FOUND = 50,
	ECognitoIdpError__TOO_MANY_FAILED_ATTEMPTS = 51,
	ECognitoIdpError__TOO_MANY_REQUESTS = 52,
	ECognitoIdpError__UNEXPECTED_LAMBDA = 53,
	ECognitoIdpError__UNSUPPORTED_IDENTITY_PROVIDER = 54,
	ECognitoIdpError__UNSUPPORTED_USER_STATE = 55,
	ECognitoIdpError__USERNAME_EXISTS = 56,
	ECognitoIdpError__USER_IMPORT_IN_PROGRESS = 57,
	ECognitoIdpError__USER_LAMBDA_VALIDATION = 58,
	ECognitoIdpError__USER_NOT_CONFIRMED = 59,
	ECognitoIdpError__USER_NOT_FOUND = 60,
	ECognitoIdpError__USER_POOL_ADDON_NOT_ENABLED = 61,
	ECognitoIdpError__USER_POOL_TAGGING = 62,
	ECognitoIdpError__ECognitoIdpError_MAX = 63,

};

// Enum CognitoIdp.ECompromisedCredentialsEventActionType
enum class CognitoIdp_ECompromisedCredentialsEventActionType : uint8_t
{
	ECompromisedCredentialsEventActionType__NOT_SET = 0,
	ECompromisedCredentialsEventActionType__BLOCK = 1,
	ECompromisedCredentialsEventActionType__NO_ACTION = 2,
	ECompromisedCredentialsEventActionType__ECompromisedCredentialsEventActionType_MAX = 3,

};

// Enum CognitoIdp.EDefaultEmailOptionType
enum class CognitoIdp_EDefaultEmailOptionType : uint8_t
{
	EDefaultEmailOptionType__NOT_SET = 0,
	EDefaultEmailOptionType__CONFIRM_WITH_LINK = 1,
	EDefaultEmailOptionType__CONFIRM_WITH_CODE = 2,
	EDefaultEmailOptionType__EDefaultEmailOptionType_MAX = 3,

};

// Enum CognitoIdp.EDeliveryMediumType
enum class CognitoIdp_EDeliveryMediumType : uint8_t
{
	EDeliveryMediumType__NOT_SET   = 0,
	EDeliveryMediumType__SMS       = 1,
	EDeliveryMediumType__EMAIL     = 2,
	EDeliveryMediumType__EDeliveryMediumType_MAX = 3,

};

// Enum CognitoIdp.EDeviceRememberedStatusType
enum class CognitoIdp_EDeviceRememberedStatusType : uint8_t
{
	EDeviceRememberedStatusType__NOT_SET = 0,
	EDeviceRememberedStatusType__remembered = 1,
	EDeviceRememberedStatusType__not_remembered = 2,
	EDeviceRememberedStatusType__EDeviceRememberedStatusType_MAX = 3,

};

// Enum CognitoIdp.EDomainStatusType
enum class CognitoIdp_EDomainStatusType : uint8_t
{
	EDomainStatusType__NOT_SET     = 0,
	EDomainStatusType__CREATING    = 1,
	EDomainStatusType__DELETING    = 2,
	EDomainStatusType__UPDATING    = 3,
	EDomainStatusType__ACTIVE      = 4,
	EDomainStatusType__FAILED      = 5,
	EDomainStatusType__EDomainStatusType_MAX = 6,

};

// Enum CognitoIdp.EEmailSendingAccountType
enum class CognitoIdp_EEmailSendingAccountType : uint8_t
{
	EEmailSendingAccountType__NOT_SET = 0,
	EEmailSendingAccountType__COGNITO_DEFAULT = 1,
	EEmailSendingAccountType__DEVELOPER = 2,
	EEmailSendingAccountType__EEmailSendingAccountType_MAX = 3,

};

// Enum CognitoIdp.EEventFilterType
enum class CognitoIdp_EEventFilterType : uint8_t
{
	EEventFilterType__NOT_SET      = 0,
	EEventFilterType__SIGN_IN      = 1,
	EEventFilterType__PASSWORD_CHANGE = 2,
	EEventFilterType__SIGN_UP      = 3,
	EEventFilterType__EEventFilterType_MAX = 4,

};

// Enum CognitoIdp.EEventResponseType
enum class CognitoIdp_EEventResponseType : uint8_t
{
	EEventResponseType__NOT_SET    = 0,
	EEventResponseType__Success    = 1,
	EEventResponseType__Failure    = 2,
	EEventResponseType__EEventResponseType_MAX = 3,

};

// Enum CognitoIdp.EEventType
enum class CognitoIdp_EEventType : uint8_t
{
	EEventType__NOT_SET            = 0,
	EEventType__SignIn             = 1,
	EEventType__SignUp             = 2,
	EEventType__ForgotPassword     = 3,
	EEventType__EEventType_MAX     = 4,

};

// Enum CognitoIdp.EExplicitAuthFlowsType
enum class CognitoIdp_EExplicitAuthFlowsType : uint8_t
{
	EExplicitAuthFlowsType__NOT_SET = 0,
	EExplicitAuthFlowsType__ADMIN_NO_SRP_AUTH = 1,
	EExplicitAuthFlowsType__CUSTOM_AUTH_FLOW_ONLY = 2,
	EExplicitAuthFlowsType__USER_PASSWORD_AUTH = 3,
	EExplicitAuthFlowsType__EExplicitAuthFlowsType_MAX = 4,

};

// Enum CognitoIdp.EFeedbackValueType
enum class CognitoIdp_EFeedbackValueType : uint8_t
{
	EFeedbackValueType__NOT_SET    = 0,
	EFeedbackValueType__Valid      = 1,
	EFeedbackValueType__Invalid    = 2,
	EFeedbackValueType__EFeedbackValueType_MAX = 3,

};

// Enum CognitoIdp.EIdentityProviderTypeType
enum class CognitoIdp_EIdentityProviderTypeType : uint8_t
{
	EIdentityProviderTypeType__NOT_SET = 0,
	EIdentityProviderTypeType__SAML = 1,
	EIdentityProviderTypeType__Facebook = 2,
	EIdentityProviderTypeType__Google = 3,
	EIdentityProviderTypeType__LoginWithAmazon = 4,
	EIdentityProviderTypeType__OIDC = 5,
	EIdentityProviderTypeType__EIdentityProviderTypeType_MAX = 6,

};

// Enum CognitoIdp.EMessageActionType
enum class CognitoIdp_EMessageActionType : uint8_t
{
	EMessageActionType__NOT_SET    = 0,
	EMessageActionType__RESEND     = 1,
	EMessageActionType__SUPPRESS   = 2,
	EMessageActionType__EMessageActionType_MAX = 3,

};

// Enum CognitoIdp.EOAuthFlowType
enum class CognitoIdp_EOAuthFlowType : uint8_t
{
	EOAuthFlowType__NOT_SET        = 0,
	EOAuthFlowType__code           = 1,
	EOAuthFlowType__implicit       = 2,
	EOAuthFlowType__client_credentials = 3,
	EOAuthFlowType__EOAuthFlowType_MAX = 4,

};

// Enum CognitoIdp.ERiskDecisionType
enum class CognitoIdp_ERiskDecisionType : uint8_t
{
	ERiskDecisionType__NOT_SET     = 0,
	ERiskDecisionType__NoRisk      = 1,
	ERiskDecisionType__AccountTakeover = 2,
	ERiskDecisionType__Block       = 3,
	ERiskDecisionType__ERiskDecisionType_MAX = 4,

};

// Enum CognitoIdp.ERiskLevelType
enum class CognitoIdp_ERiskLevelType : uint8_t
{
	ERiskLevelType__NOT_SET        = 0,
	ERiskLevelType__Low            = 1,
	ERiskLevelType__Medium         = 2,
	ERiskLevelType__High           = 3,
	ERiskLevelType__ERiskLevelType_MAX = 4,

};

// Enum CognitoIdp.EStatusType
enum class CognitoIdp_EStatusType : uint8_t
{
	EStatusType__NOT_SET           = 0,
	EStatusType__Enabled           = 1,
	EStatusType__Disabled          = 2,
	EStatusType__EStatusType_MAX   = 3,

};

// Enum CognitoIdp.EUserImportJobStatusType
enum class CognitoIdp_EUserImportJobStatusType : uint8_t
{
	EUserImportJobStatusType__NOT_SET = 0,
	EUserImportJobStatusType__Created = 1,
	EUserImportJobStatusType__Pending = 2,
	EUserImportJobStatusType__InProgress = 3,
	EUserImportJobStatusType__Stopping = 4,
	EUserImportJobStatusType__Expired = 5,
	EUserImportJobStatusType__Stopped = 6,
	EUserImportJobStatusType__Failed = 7,
	EUserImportJobStatusType__Succeeded = 8,
	EUserImportJobStatusType__EUserImportJobStatusType_MAX = 9,

};

// Enum CognitoIdp.EUsernameAttributeType
enum class CognitoIdp_EUsernameAttributeType : uint8_t
{
	EUsernameAttributeType__NOT_SET = 0,
	EUsernameAttributeType__phone_number = 1,
	EUsernameAttributeType__email  = 2,
	EUsernameAttributeType__EUsernameAttributeType_MAX = 3,

};

// Enum CognitoIdp.EUserPoolMfaType
enum class CognitoIdp_EUserPoolMfaType : uint8_t
{
	EUserPoolMfaType__NOT_SET      = 0,
	EUserPoolMfaType__OFF          = 1,
	EUserPoolMfaType__ON           = 2,
	EUserPoolMfaType__OPTIONAL     = 3,
	EUserPoolMfaType__EUserPoolMfaType_MAX = 4,

};

// Enum CognitoIdp.EUserStatusType
enum class CognitoIdp_EUserStatusType : uint8_t
{
	EUserStatusType__NOT_SET       = 0,
	EUserStatusType__UNCONFIRMED   = 1,
	EUserStatusType__CONFIRMED     = 2,
	EUserStatusType__ARCHIVED      = 3,
	EUserStatusType__COMPROMISED   = 4,
	EUserStatusType__UNKNOWN       = 5,
	EUserStatusType__RESET_REQUIRED = 6,
	EUserStatusType__FORCE_CHANGE_PASSWORD = 7,
	EUserStatusType__EUserStatusType_MAX = 8,

};

// Enum CognitoIdp.EVerifiedAttributeType
enum class CognitoIdp_EVerifiedAttributeType : uint8_t
{
	EVerifiedAttributeType__NOT_SET = 0,
	EVerifiedAttributeType__phone_number = 1,
	EVerifiedAttributeType__email  = 2,
	EVerifiedAttributeType__EVerifiedAttributeType_MAX = 3,

};

// Enum CognitoIdp.EVerifySoftwareTokenResponseType
enum class CognitoIdp_EVerifySoftwareTokenResponseType : uint8_t
{
	EVerifySoftwareTokenResponseType__NOT_SET = 0,
	EVerifySoftwareTokenResponseType__SUCCESS = 1,
	EVerifySoftwareTokenResponseType__ERROR_ = 2,
	EVerifySoftwareTokenResponseType__EVerifySoftwareTokenResponseType_MAX = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct CognitoIdp.VerifyUserAttributeRequest
// 0x0030
struct FVerifyUserAttributeRequest
{
	struct FString                                     accessToken;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     attributeName;                                             // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     code;                                                      // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.VerifyUserAttributeResult
// 0x0001
struct FVerifyUserAttributeResult
{
	unsigned char                                      UnknownData_YGQG[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct CognitoIdp.VerifySoftwareTokenRequest
// 0x0040
struct FVerifySoftwareTokenRequest
{
	struct FString                                     accessToken;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     session;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     userCode;                                                  // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     friendlyDeviceName;                                        // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.VerifySoftwareTokenResult
// 0x0018
struct FVerifySoftwareTokenResult
{
	CognitoIdp_EVerifySoftwareTokenResponseType        status;                                                    // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9XXS[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     session;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.CustomDomainConfigType
// 0x0010
struct FCustomDomainConfigType
{
	struct FString                                     certificateArn;                                            // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.UpdateUserPoolDomainResult
// 0x0010
struct FUpdateUserPoolDomainResult
{
	struct FString                                     cloudFrontDomain;                                          // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.AnalyticsConfigurationType
// 0x0038
struct FAnalyticsConfigurationType
{
	struct FString                                     applicationId;                                             // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     roleArn;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     externalId;                                                // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               userDataShared;                                            // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AF5U[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct CognitoIdp.PasswordPolicyType
// 0x000C
struct FPasswordPolicyType
{
	int                                                minimumLength;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               requireUppercase;                                          // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               requireLowercase;                                          // 0x0005(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               requireNumbers;                                            // 0x0006(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               requireSymbols;                                            // 0x0007(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                temporaryPasswordValidityDays;                             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.LambdaConfigType
// 0x00A0
struct FLambdaConfigType
{
	struct FString                                     preSignUp;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     customMessage;                                             // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     postConfirmation;                                          // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     preAuthentication;                                         // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     postAuthentication;                                        // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     defineAuthChallenge;                                       // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     createAuthChallenge;                                       // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     verifyAuthChallengeResponse;                               // 0x0070(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     preTokenGeneration;                                        // 0x0080(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     userMigration;                                             // 0x0090(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.VerificationMessageTemplateType
// 0x0058
struct FVerificationMessageTemplateType
{
	struct FString                                     SMSMessage;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     emailMessage;                                              // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     emailSubject;                                              // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     emailMessageByLink;                                        // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     emailSubjectByLink;                                        // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	CognitoIdp_EDefaultEmailOptionType                 defaultEmailOption;                                        // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Z0Q2[0x7];                                     // 0x0051(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct CognitoIdp.DeviceConfigurationType
// 0x0002
struct FDeviceConfigurationType
{
	bool                                               challengeRequiredOnNewDevice;                              // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               deviceOnlyRememberedOnUserPrompt;                          // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.EmailConfigurationType
// 0x0028
struct FEmailConfigurationType
{
	struct FString                                     sourceArn;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     replyToEmailAddress;                                       // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	CognitoIdp_EEmailSendingAccountType                emailSendingAccount;                                       // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KBAM[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct CognitoIdp.SmsConfigurationType
// 0x0020
struct FSmsConfigurationType
{
	struct FString                                     snsCallerArn;                                              // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     externalId;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.MessageTemplateType
// 0x0030
struct FMessageTemplateType
{
	struct FString                                     SMSMessage;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     emailMessage;                                              // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     emailSubject;                                              // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.UserPoolAddOnsType
// 0x0001
struct FUserPoolAddOnsType
{
	CognitoIdp_EAdvancedSecurityModeType               advancedSecurityMode;                                      // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.UpdateUserPoolResult
// 0x0001
struct FUpdateUserPoolResult
{
	unsigned char                                      UnknownData_FWFX[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct CognitoIdp.AttributeType
// 0x0020
struct FAttributeType
{
	struct FString                                     Name;                                                      // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Value;                                                     // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.CodeDeliveryDetailsType
// 0x0028
struct FCodeDeliveryDetailsType
{
	struct FString                                     destination;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	CognitoIdp_EDeliveryMediumType                     deliveryMedium;                                            // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_N5KR[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     attributeName;                                             // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.ResourceServerScopeType
// 0x0020
struct FResourceServerScopeType
{
	struct FString                                     scopeName;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     scopeDescription;                                          // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.UpdateIdentityProviderRequest
// 0x00D0
struct FUpdateIdentityProviderRequest
{
	struct FString                                     userPoolId;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     providerName;                                              // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FString, struct FString>               providerDetails;                                           // 0x0020(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<struct FString, struct FString>               attributeMapping;                                          // 0x0070(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             idpIdentifiers;                                            // 0x00C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.UpdateGroupRequest
// 0x0048
struct FUpdateGroupRequest
{
	struct FString                                     groupName;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     userPoolId;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Description;                                               // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     roleArn;                                                   // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                precedence;                                                // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8T6C[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct CognitoIdp.UpdateDeviceStatusRequest
// 0x0028
struct FUpdateDeviceStatusRequest
{
	struct FString                                     accessToken;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     deviceKey;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	CognitoIdp_EDeviceRememberedStatusType             deviceRememberedStatus;                                    // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2IA2[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct CognitoIdp.UpdateDeviceStatusResult
// 0x0001
struct FUpdateDeviceStatusResult
{
	unsigned char                                      UnknownData_KIHY[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct CognitoIdp.UpdateAuthEventFeedbackRequest
// 0x0048
struct FUpdateAuthEventFeedbackRequest
{
	struct FString                                     userPoolId;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     userName;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     eventId;                                                   // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     feedbackToken;                                             // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	CognitoIdp_EFeedbackValueType                      feedbackValue;                                             // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UICJ[0x7];                                     // 0x0041(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct CognitoIdp.UpdateAuthEventFeedbackResult
// 0x0001
struct FUpdateAuthEventFeedbackResult
{
	unsigned char                                      UnknownData_W691[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct CognitoIdp.CognitoIdpUntagResourceRequest
// 0x0020
struct FCognitoIdpUntagResourceRequest
{
	struct FString                                     resourceArn;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             tagKeys;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.CognitoIdpUntagResourceResult
// 0x0001
struct FCognitoIdpUntagResourceResult
{
	unsigned char                                      UnknownData_GDE1[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct CognitoIdp.CognitoIdpTagResourceRequest
// 0x0060
struct FCognitoIdpTagResourceRequest
{
	struct FString                                     resourceArn;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FString, struct FString>               Tags;                                                      // 0x0010(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.CognitoIdpTagResourceResult
// 0x0001
struct FCognitoIdpTagResourceResult
{
	unsigned char                                      UnknownData_DJG7[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct CognitoIdp.StopUserImportJobRequest
// 0x0020
struct FStopUserImportJobRequest
{
	struct FString                                     userPoolId;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     jobId;                                                     // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.UserImportJobType
// 0x0090
struct FUserImportJobType
{
	struct FString                                     jobName;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     jobId;                                                     // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     userPoolId;                                                // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     preSignedUrl;                                              // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   creationDate;                                              // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   startDate;                                                 // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   completionDate;                                            // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	CognitoIdp_EUserImportJobStatusType                status;                                                    // 0x0058(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DYKW[0x7];                                     // 0x0059(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     cloudWatchLogsRoleArn;                                     // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                importedUsers;                                             // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                skippedUsers;                                              // 0x0074(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                failedUsers;                                               // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M40C[0x4];                                     // 0x007C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     completionMessage;                                         // 0x0080(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.StartUserImportJobRequest
// 0x0020
struct FStartUserImportJobRequest
{
	struct FString                                     userPoolId;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     jobId;                                                     // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.AnalyticsMetadataType
// 0x0010
struct FAnalyticsMetadataType
{
	struct FString                                     analyticsEndpointId;                                       // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.UserContextDataType
// 0x0010
struct FUserContextDataType
{
	struct FString                                     encodedData;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.SignUpRequest
// 0x0080
struct FSignUpRequest
{
	struct FString                                     ClientId;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     secretHash;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     userName;                                                  // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Password;                                                  // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAttributeType>                      userAttributes;                                            // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FAttributeType>                      validationData;                                            // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FAnalyticsMetadataType                      analyticsMetadata;                                         // 0x0060(0x0010) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FUserContextDataType                        userContextData;                                           // 0x0070(0x0010) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.MFAOptionType
// 0x0018
struct FMFAOptionType
{
	CognitoIdp_EDeliveryMediumType                     deliveryMedium;                                            // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MSS4[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     attributeName;                                             // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.SetUserSettingsResult
// 0x0001
struct FSetUserSettingsResult
{
	unsigned char                                      UnknownData_BGS6[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct CognitoIdp.SoftwareTokenMfaConfigType
// 0x0001
struct FSoftwareTokenMfaConfigType
{
	bool                                               Enabled;                                                   // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.SMSMfaSettingsType
// 0x0002
struct FSMSMfaSettingsType
{
	bool                                               Enabled;                                                   // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               preferredMfa;                                              // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.SoftwareTokenMfaSettingsType
// 0x0002
struct FSoftwareTokenMfaSettingsType
{
	bool                                               Enabled;                                                   // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               preferredMfa;                                              // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.SetUserMFAPreferenceResult
// 0x0001
struct FSetUserMFAPreferenceResult
{
	unsigned char                                      UnknownData_3QV4[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct CognitoIdp.SetUICustomizationRequest
// 0x0038
struct FSetUICustomizationRequest
{
	struct FString                                     userPoolId;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ClientId;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CSS;                                                       // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  imageFile;                                                 // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.CompromisedCredentialsActionsType
// 0x0001
struct FCompromisedCredentialsActionsType
{
	CognitoIdp_ECompromisedCredentialsEventActionType  eventAction;                                               // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.NotifyEmailType
// 0x0030
struct FNotifyEmailType
{
	struct FString                                     subject;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     htmlBody;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     textBody;                                                  // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.AccountTakeoverActionType
// 0x0002
struct FAccountTakeoverActionType
{
	bool                                               notify;                                                    // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	CognitoIdp_EAccountTakeoverEventActionType         eventAction;                                               // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.AccountTakeoverActionsType
// 0x0006
struct FAccountTakeoverActionsType
{
	struct FAccountTakeoverActionType                  lowAction;                                                 // 0x0000(0x0002) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FAccountTakeoverActionType                  mediumAction;                                              // 0x0002(0x0002) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FAccountTakeoverActionType                  highAction;                                                // 0x0004(0x0002) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.RiskExceptionConfigurationType
// 0x0020
struct FRiskExceptionConfigurationType
{
	TArray<struct FString>                             blockedIPRangeList;                                        // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             skippedIPRangeList;                                        // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.NewDeviceMetadataType
// 0x0020
struct FNewDeviceMetadataType
{
	struct FString                                     deviceKey;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     deviceGroupKey;                                            // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.ListUsersInGroupRequest
// 0x0038
struct FListUsersInGroupRequest
{
	struct FString                                     userPoolId;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     groupName;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                limit;                                                     // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QQM5[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     nextToken;                                                 // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.ListUsersRequest
// 0x0048
struct FListUsersRequest
{
	struct FString                                     userPoolId;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             attributesToGet;                                           // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                limit;                                                     // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_R91M[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     paginationToken;                                           // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Filter;                                                    // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.ListUserPoolsRequest
// 0x0018
struct FListUserPoolsRequest
{
	struct FString                                     nextToken;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                maxResults;                                                // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FGPU[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct CognitoIdp.ListUserPoolClientsRequest
// 0x0028
struct FListUserPoolClientsRequest
{
	struct FString                                     userPoolId;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                maxResults;                                                // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1JUR[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     nextToken;                                                 // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.UserPoolClientDescription
// 0x0030
struct FUserPoolClientDescription
{
	struct FString                                     ClientId;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     userPoolId;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     clientName;                                                // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.ListUserImportJobsRequest
// 0x0028
struct FListUserImportJobsRequest
{
	struct FString                                     userPoolId;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                maxResults;                                                // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AMW4[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     paginationToken;                                           // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.CognitoIdpListTagsForResourceRequest
// 0x0010
struct FCognitoIdpListTagsForResourceRequest
{
	struct FString                                     resourceArn;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.CognitoIdpListTagsForResourceResult
// 0x0050
struct FCognitoIdpListTagsForResourceResult
{
	TMap<struct FString, struct FString>               Tags;                                                      // 0x0000(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.ListResourceServersRequest
// 0x0028
struct FListResourceServersRequest
{
	struct FString                                     userPoolId;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                maxResults;                                                // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1SG0[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     nextToken;                                                 // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.ResourceServerType
// 0x0040
struct FResourceServerType
{
	struct FString                                     userPoolId;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Identifier;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Name;                                                      // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FResourceServerScopeType>            scopes;                                                    // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.ListResourceServersResult
// 0x0020
struct FListResourceServersResult
{
	TArray<struct FResourceServerType>                 resourceServers;                                           // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     nextToken;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.ListIdentityProvidersRequest
// 0x0028
struct FListIdentityProvidersRequest
{
	struct FString                                     userPoolId;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                maxResults;                                                // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BVBE[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     nextToken;                                                 // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.ProviderDescription
// 0x0028
struct FProviderDescription
{
	struct FString                                     providerName;                                              // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	CognitoIdp_EIdentityProviderTypeType               providerType;                                              // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PIT8[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDateTime                                   lastModifiedDate;                                          // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   creationDate;                                              // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.ListIdentityProvidersResult
// 0x0020
struct FListIdentityProvidersResult
{
	TArray<struct FProviderDescription>                providers;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     nextToken;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.ListGroupsRequest
// 0x0028
struct FListGroupsRequest
{
	struct FString                                     userPoolId;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                limit;                                                     // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SJLI[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     nextToken;                                                 // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.GroupType
// 0x0058
struct FGroupType
{
	struct FString                                     groupName;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     userPoolId;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Description;                                               // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     roleArn;                                                   // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                precedence;                                                // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NIF6[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDateTime                                   lastModifiedDate;                                          // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   creationDate;                                              // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.ListGroupsResult
// 0x0020
struct FListGroupsResult
{
	TArray<struct FGroupType>                          Groups;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     nextToken;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.ListDevicesRequest
// 0x0028
struct FListDevicesRequest
{
	struct FString                                     accessToken;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                limit;                                                     // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_P4YG[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     paginationToken;                                           // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.GlobalSignOutRequest
// 0x0010
struct FGlobalSignOutRequest
{
	struct FString                                     accessToken;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.GlobalSignOutResult
// 0x0001
struct FGlobalSignOutResult
{
	unsigned char                                      UnknownData_H7EM[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct CognitoIdp.GetUserPoolMfaConfigRequest
// 0x0010
struct FGetUserPoolMfaConfigRequest
{
	struct FString                                     userPoolId;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.GetUserAttributeVerificationCodeRequest
// 0x0020
struct FGetUserAttributeVerificationCodeRequest
{
	struct FString                                     accessToken;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     attributeName;                                             // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.GetUserRequest
// 0x0010
struct FGetUserRequest
{
	struct FString                                     accessToken;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.GetUICustomizationRequest
// 0x0020
struct FGetUICustomizationRequest
{
	struct FString                                     userPoolId;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ClientId;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.GetSigningCertificateRequest
// 0x0010
struct FGetSigningCertificateRequest
{
	struct FString                                     userPoolId;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.GetSigningCertificateResult
// 0x0010
struct FGetSigningCertificateResult
{
	struct FString                                     Certificate;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.GetIdentityProviderByIdentifierRequest
// 0x0020
struct FGetIdentityProviderByIdentifierRequest
{
	struct FString                                     userPoolId;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     idpIdentifier;                                             // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.GetGroupRequest
// 0x0020
struct FGetGroupRequest
{
	struct FString                                     groupName;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     userPoolId;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.GetDeviceRequest
// 0x0020
struct FGetDeviceRequest
{
	struct FString                                     deviceKey;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     accessToken;                                               // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.GetCSVHeaderRequest
// 0x0010
struct FGetCSVHeaderRequest
{
	struct FString                                     userPoolId;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.GetCSVHeaderResult
// 0x0020
struct FGetCSVHeaderResult
{
	struct FString                                     userPoolId;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             CSVHeader;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.ForgetDeviceRequest
// 0x0020
struct FForgetDeviceRequest
{
	struct FString                                     accessToken;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     deviceKey;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.DescribeUserPoolDomainRequest
// 0x0010
struct FDescribeUserPoolDomainRequest
{
	struct FString                                     domain;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.DescribeUserPoolClientRequest
// 0x0020
struct FDescribeUserPoolClientRequest
{
	struct FString                                     userPoolId;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ClientId;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.DescribeUserPoolRequest
// 0x0010
struct FDescribeUserPoolRequest
{
	struct FString                                     userPoolId;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.NumberAttributeConstraintsType
// 0x0020
struct FNumberAttributeConstraintsType
{
	struct FString                                     MinValue;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     MaxValue;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.StringAttributeConstraintsType
// 0x0020
struct FStringAttributeConstraintsType
{
	struct FString                                     minLength;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     maxLength;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.DescribeUserImportJobRequest
// 0x0020
struct FDescribeUserImportJobRequest
{
	struct FString                                     userPoolId;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     jobId;                                                     // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.DescribeRiskConfigurationRequest
// 0x0020
struct FDescribeRiskConfigurationRequest
{
	struct FString                                     userPoolId;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ClientId;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.CompromisedCredentialsRiskConfigurationType
// 0x0018
struct FCompromisedCredentialsRiskConfigurationType
{
	TArray<CognitoIdp_EEventFilterType>                eventFilter;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FCompromisedCredentialsActionsType          actions;                                                   // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7XUZ[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct CognitoIdp.NotifyConfigurationType
// 0x00C0
struct FNotifyConfigurationType
{
	struct FString                                     from;                                                      // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     replyTo;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     sourceArn;                                                 // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNotifyEmailType                            blockEmail;                                                // 0x0030(0x0030) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FNotifyEmailType                            noActionEmail;                                             // 0x0060(0x0030) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FNotifyEmailType                            mfaEmail;                                                  // 0x0090(0x0030) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.AccountTakeoverRiskConfigurationType
// 0x00C8
struct FAccountTakeoverRiskConfigurationType
{
	struct FNotifyConfigurationType                    notifyConfiguration;                                       // 0x0000(0x00C0) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FAccountTakeoverActionsType                 actions;                                                   // 0x00C0(0x0006) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TN8Z[0x2];                                     // 0x00C6(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct CognitoIdp.RiskConfigurationType
// 0x0128
struct FRiskConfigurationType
{
	struct FString                                     userPoolId;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ClientId;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCompromisedCredentialsRiskConfigurationType compromisedCredentialsRiskConfiguration;                   // 0x0020(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FAccountTakeoverRiskConfigurationType       accountTakeoverRiskConfiguration;                          // 0x0038(0x00C8) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FRiskExceptionConfigurationType             riskExceptionConfiguration;                                // 0x0100(0x0020) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FDateTime                                   lastModifiedDate;                                          // 0x0120(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.DescribeRiskConfigurationResult
// 0x0128
struct FDescribeRiskConfigurationResult
{
	struct FRiskConfigurationType                      riskConfiguration;                                         // 0x0000(0x0128) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.DescribeResourceServerRequest
// 0x0020
struct FDescribeResourceServerRequest
{
	struct FString                                     userPoolId;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Identifier;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.DescribeIdentityProviderRequest
// 0x0020
struct FDescribeIdentityProviderRequest
{
	struct FString                                     userPoolId;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     providerName;                                              // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.DeleteUserPoolDomainRequest
// 0x0020
struct FDeleteUserPoolDomainRequest
{
	struct FString                                     domain;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     userPoolId;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.DeleteUserPoolDomainResult
// 0x0001
struct FDeleteUserPoolDomainResult
{
	unsigned char                                      UnknownData_4IQ3[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct CognitoIdp.DeleteUserPoolClientRequest
// 0x0020
struct FDeleteUserPoolClientRequest
{
	struct FString                                     userPoolId;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ClientId;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.DeleteUserPoolRequest
// 0x0010
struct FDeleteUserPoolRequest
{
	struct FString                                     userPoolId;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.DeleteUserAttributesRequest
// 0x0020
struct FDeleteUserAttributesRequest
{
	TArray<struct FString>                             userAttributeNames;                                        // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     accessToken;                                               // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.DeleteUserAttributesResult
// 0x0001
struct FDeleteUserAttributesResult
{
	unsigned char                                      UnknownData_8VPQ[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct CognitoIdp.DeleteUserRequest
// 0x0010
struct FDeleteUserRequest
{
	struct FString                                     accessToken;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.DeleteResourceServerRequest
// 0x0020
struct FDeleteResourceServerRequest
{
	struct FString                                     userPoolId;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Identifier;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.DeleteIdentityProviderRequest
// 0x0020
struct FDeleteIdentityProviderRequest
{
	struct FString                                     userPoolId;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     providerName;                                              // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.DeleteGroupRequest
// 0x0020
struct FDeleteGroupRequest
{
	struct FString                                     groupName;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     userPoolId;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.CreateUserPoolDomainRequest
// 0x0030
struct FCreateUserPoolDomainRequest
{
	struct FString                                     domain;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     userPoolId;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCustomDomainConfigType                     customDomainConfig;                                        // 0x0020(0x0010) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.CreateUserPoolDomainResult
// 0x0010
struct FCreateUserPoolDomainResult
{
	struct FString                                     cloudFrontDomain;                                          // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.UserPoolPolicyType
// 0x000C
struct FUserPoolPolicyType
{
	struct FPasswordPolicyType                         passwordPolicy;                                            // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.SchemaAttributeType
// 0x0058
struct FSchemaAttributeType
{
	struct FString                                     Name;                                                      // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	CognitoIdp_EAttributeDataType                      attributeDataType;                                         // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               developerOnlyAttribute;                                    // 0x0011(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsMutable;                                                // 0x0012(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               required;                                                  // 0x0013(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KAW3[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FNumberAttributeConstraintsType             numberAttributeConstraints;                                // 0x0018(0x0020) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FStringAttributeConstraintsType             stringAttributeConstraints;                                // 0x0038(0x0020) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.AdminCreateUserConfigType
// 0x0038
struct FAdminCreateUserConfigType
{
	bool                                               allowAdminCreateUserOnly;                                  // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FSEU[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                unusedAccountValidityDays;                                 // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMessageTemplateType                        inviteMessageTemplate;                                     // 0x0008(0x0030) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.UserPoolType
// 0x02F0
struct FUserPoolType
{
	struct FString                                     ID;                                                        // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Name;                                                      // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUserPoolPolicyType                         policies;                                                  // 0x0020(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_F80F[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLambdaConfigType                           lambdaConfig;                                              // 0x0030(0x00A0) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	CognitoIdp_EStatusType                             status;                                                    // 0x00D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_C40G[0x7];                                     // 0x00D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDateTime                                   lastModifiedDate;                                          // 0x00D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   creationDate;                                              // 0x00E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSchemaAttributeType>                schemaAttributes;                                          // 0x00E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<CognitoIdp_EVerifiedAttributeType>          autoVerifiedAttributes;                                    // 0x00F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<CognitoIdp_EAliasAttributeType>             aliasAttributes;                                           // 0x0108(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<CognitoIdp_EUsernameAttributeType>          usernameAttributes;                                        // 0x0118(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     smsVerificationMessage;                                    // 0x0128(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     emailVerificationMessage;                                  // 0x0138(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     emailVerificationSubject;                                  // 0x0148(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVerificationMessageTemplateType            verificationMessageTemplate;                               // 0x0158(0x0058) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FString                                     smsAuthenticationMessage;                                  // 0x01B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	CognitoIdp_EUserPoolMfaType                        mfaConfiguration;                                          // 0x01C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDeviceConfigurationType                    deviceConfiguration;                                       // 0x01C1(0x0002) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_95YZ[0x1];                                     // 0x01C3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                estimatedNumberOfUsers;                                    // 0x01C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEmailConfigurationType                     emailConfiguration;                                        // 0x01C8(0x0028) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSmsConfigurationType                       smsConfiguration;                                          // 0x01F0(0x0020) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TMap<struct FString, struct FString>               userPoolTags;                                              // 0x0210(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     smsConfigurationFailure;                                   // 0x0260(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     emailConfigurationFailure;                                 // 0x0270(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     domain;                                                    // 0x0280(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     customDomain;                                              // 0x0290(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAdminCreateUserConfigType                  adminCreateUserConfig;                                     // 0x02A0(0x0038) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FUserPoolAddOnsType                         userPoolAddOns;                                            // 0x02D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9PO4[0x7];                                     // 0x02D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     arn;                                                       // 0x02E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.CreateUserPoolResult
// 0x02F0
struct FCreateUserPoolResult
{
	struct FUserPoolType                               userPool;                                                  // 0x0000(0x02F0) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.CreateUserImportJobRequest
// 0x0030
struct FCreateUserImportJobRequest
{
	struct FString                                     jobName;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     userPoolId;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     cloudWatchLogsRoleArn;                                     // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.CreateIdentityProviderRequest
// 0x00D8
struct FCreateIdentityProviderRequest
{
	struct FString                                     userPoolId;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     providerName;                                              // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	CognitoIdp_EIdentityProviderTypeType               providerType;                                              // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2SEU[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<struct FString, struct FString>               providerDetails;                                           // 0x0028(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<struct FString, struct FString>               attributeMapping;                                          // 0x0078(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             idpIdentifiers;                                            // 0x00C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.CreateGroupRequest
// 0x0048
struct FCreateGroupRequest
{
	struct FString                                     groupName;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     userPoolId;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Description;                                               // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     roleArn;                                                   // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                precedence;                                                // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_S2R0[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct CognitoIdp.ConfirmSignUpRequest
// 0x0068
struct FConfirmSignUpRequest
{
	struct FString                                     ClientId;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     secretHash;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     userName;                                                  // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     confirmationCode;                                          // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               forceAliasCreation;                                        // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RO2K[0x7];                                     // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAnalyticsMetadataType                      analyticsMetadata;                                         // 0x0048(0x0010) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FUserContextDataType                        userContextData;                                           // 0x0058(0x0010) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.ConfirmSignUpResult
// 0x0001
struct FConfirmSignUpResult
{
	unsigned char                                      UnknownData_XG7C[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct CognitoIdp.ConfirmForgotPasswordResult
// 0x0001
struct FConfirmForgotPasswordResult
{
	unsigned char                                      UnknownData_ZFDK[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct CognitoIdp.DeviceSecretVerifierConfigType
// 0x0020
struct FDeviceSecretVerifierConfigType
{
	struct FString                                     passwordVerifier;                                          // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     salt;                                                      // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.ConfirmDeviceResult
// 0x0001
struct FConfirmDeviceResult
{
	bool                                               userConfirmationNecessary;                                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.ChangePasswordRequest
// 0x0030
struct FChangePasswordRequest
{
	struct FString                                     previousPassword;                                          // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     proposedPassword;                                          // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     accessToken;                                               // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.ChangePasswordResult
// 0x0001
struct FChangePasswordResult
{
	unsigned char                                      UnknownData_KOUB[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct CognitoIdp.AssociateSoftwareTokenRequest
// 0x0020
struct FAssociateSoftwareTokenRequest
{
	struct FString                                     accessToken;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     session;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.AssociateSoftwareTokenResult
// 0x0020
struct FAssociateSoftwareTokenResult
{
	struct FString                                     secretCode;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     session;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.AdminUserGlobalSignOutRequest
// 0x0020
struct FAdminUserGlobalSignOutRequest
{
	struct FString                                     userPoolId;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     userName;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.AdminUserGlobalSignOutResult
// 0x0001
struct FAdminUserGlobalSignOutResult
{
	unsigned char                                      UnknownData_ZBNY[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct CognitoIdp.AdminUpdateUserAttributesResult
// 0x0001
struct FAdminUpdateUserAttributesResult
{
	unsigned char                                      UnknownData_SJ99[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct CognitoIdp.AdminUpdateDeviceStatusRequest
// 0x0038
struct FAdminUpdateDeviceStatusRequest
{
	struct FString                                     userPoolId;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     userName;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     deviceKey;                                                 // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	CognitoIdp_EDeviceRememberedStatusType             deviceRememberedStatus;                                    // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CKGG[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct CognitoIdp.AdminUpdateDeviceStatusResult
// 0x0001
struct FAdminUpdateDeviceStatusResult
{
	unsigned char                                      UnknownData_UOGM[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct CognitoIdp.AdminUpdateAuthEventFeedbackRequest
// 0x0038
struct FAdminUpdateAuthEventFeedbackRequest
{
	struct FString                                     userPoolId;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     userName;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     eventId;                                                   // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	CognitoIdp_EFeedbackValueType                      feedbackValue;                                             // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KO19[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct CognitoIdp.AdminUpdateAuthEventFeedbackResult
// 0x0001
struct FAdminUpdateAuthEventFeedbackResult
{
	unsigned char                                      UnknownData_HLMV[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct CognitoIdp.AdminSetUserSettingsResult
// 0x0001
struct FAdminSetUserSettingsResult
{
	unsigned char                                      UnknownData_73JD[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct CognitoIdp.AdminSetUserPasswordRequest
// 0x0038
struct FAdminSetUserPasswordRequest
{
	struct FString                                     userPoolId;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     userName;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Password;                                                  // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               permanent;                                                 // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_K4M1[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct CognitoIdp.AdminSetUserPasswordResult
// 0x0001
struct FAdminSetUserPasswordResult
{
	unsigned char                                      UnknownData_TVX2[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct CognitoIdp.AdminSetUserMFAPreferenceRequest
// 0x0028
struct FAdminSetUserMFAPreferenceRequest
{
	struct FSMSMfaSettingsType                         SMSMfaSettings;                                            // 0x0000(0x0002) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FSoftwareTokenMfaSettingsType               softwareTokenMfaSettings;                                  // 0x0002(0x0002) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_47JY[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     userName;                                                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     userPoolId;                                                // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.AdminSetUserMFAPreferenceResult
// 0x0001
struct FAdminSetUserMFAPreferenceResult
{
	unsigned char                                      UnknownData_1UBO[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct CognitoIdp.HttpHeader
// 0x0020
struct FHttpHeader
{
	struct FString                                     headerName;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     headerValue;                                               // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.ContextDataType
// 0x0050
struct FContextDataType
{
	struct FString                                     ipAddress;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     serverName;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     serverPath;                                                // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FHttpHeader>                         httpHeaders;                                               // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     encodedData;                                               // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.AdminResetUserPasswordRequest
// 0x0020
struct FAdminResetUserPasswordRequest
{
	struct FString                                     userPoolId;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     userName;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.AdminResetUserPasswordResult
// 0x0001
struct FAdminResetUserPasswordResult
{
	unsigned char                                      UnknownData_GEDK[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct CognitoIdp.AdminRemoveUserFromGroupRequest
// 0x0030
struct FAdminRemoveUserFromGroupRequest
{
	struct FString                                     userPoolId;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     userName;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     groupName;                                                 // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.AdminListUserAuthEventsRequest
// 0x0038
struct FAdminListUserAuthEventsRequest
{
	struct FString                                     userPoolId;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     userName;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                maxResults;                                                // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TJ1H[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     nextToken;                                                 // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.EventRiskType
// 0x0002
struct FEventRiskType
{
	CognitoIdp_ERiskDecisionType                       riskDecision;                                              // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	CognitoIdp_ERiskLevelType                          riskLevel;                                                 // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.ChallengeResponseType
// 0x0002
struct FChallengeResponseType
{
	CognitoIdp_EChallengeName                          challengeName;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	CognitoIdp_EChallengeResponse                      challengeResponse;                                         // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.EventContextDataType
// 0x0050
struct FEventContextDataType
{
	struct FString                                     ipAddress;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     deviceName;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     timezone;                                                  // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     city;                                                      // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     country;                                                   // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.AdminListGroupsForUserRequest
// 0x0038
struct FAdminListGroupsForUserRequest
{
	struct FString                                     userName;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     userPoolId;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                limit;                                                     // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XDCN[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     nextToken;                                                 // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.AdminListGroupsForUserResult
// 0x0020
struct FAdminListGroupsForUserResult
{
	TArray<struct FGroupType>                          Groups;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     nextToken;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.AdminListDevicesRequest
// 0x0038
struct FAdminListDevicesRequest
{
	struct FString                                     userPoolId;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     userName;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                limit;                                                     // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_C9FY[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     paginationToken;                                           // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.DeviceType
// 0x0038
struct FDeviceType
{
	struct FString                                     deviceKey;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAttributeType>                      deviceAttributes;                                          // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FDateTime                                   deviceCreateDate;                                          // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   deviceLastModifiedDate;                                    // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   deviceLastAuthenticatedDate;                               // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.AdminListDevicesResult
// 0x0020
struct FAdminListDevicesResult
{
	TArray<struct FDeviceType>                         devices;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     paginationToken;                                           // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.ProviderUserIdentifierType
// 0x0030
struct FProviderUserIdentifierType
{
	struct FString                                     providerName;                                              // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     providerAttributeName;                                     // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     providerAttributeValue;                                    // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.AdminLinkProviderForUserResult
// 0x0001
struct FAdminLinkProviderForUserResult
{
	unsigned char                                      UnknownData_O9MG[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct CognitoIdp.AdminGetUserRequest
// 0x0020
struct FAdminGetUserRequest
{
	struct FString                                     userPoolId;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     userName;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.AdminGetUserResult
// 0x0068
struct FAdminGetUserResult
{
	struct FString                                     userName;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAttributeType>                      userAttributes;                                            // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FDateTime                                   userCreateDate;                                            // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   userLastModifiedDate;                                      // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Enabled;                                                   // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	CognitoIdp_EUserStatusType                         userStatus;                                                // 0x0031(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SZN0[0x6];                                     // 0x0032(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FMFAOptionType>                      MFAOptions;                                                // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     preferredMfaSetting;                                       // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             userMFASettingList;                                        // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.AdminGetDeviceRequest
// 0x0030
struct FAdminGetDeviceRequest
{
	struct FString                                     deviceKey;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     userPoolId;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     userName;                                                  // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.AdminForgetDeviceRequest
// 0x0030
struct FAdminForgetDeviceRequest
{
	struct FString                                     userPoolId;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     userName;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     deviceKey;                                                 // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.AdminEnableUserRequest
// 0x0020
struct FAdminEnableUserRequest
{
	struct FString                                     userPoolId;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     userName;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.AdminEnableUserResult
// 0x0001
struct FAdminEnableUserResult
{
	unsigned char                                      UnknownData_QH66[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct CognitoIdp.AdminDisableUserRequest
// 0x0020
struct FAdminDisableUserRequest
{
	struct FString                                     userPoolId;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     userName;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.AdminDisableUserResult
// 0x0001
struct FAdminDisableUserResult
{
	unsigned char                                      UnknownData_LNOH[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct CognitoIdp.AdminDisableProviderForUserRequest
// 0x0040
struct FAdminDisableProviderForUserRequest
{
	struct FString                                     userPoolId;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FProviderUserIdentifierType                 user;                                                      // 0x0010(0x0030) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.AdminDisableProviderForUserResult
// 0x0001
struct FAdminDisableProviderForUserResult
{
	unsigned char                                      UnknownData_NSQN[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct CognitoIdp.AdminDeleteUserAttributesRequest
// 0x0030
struct FAdminDeleteUserAttributesRequest
{
	struct FString                                     userPoolId;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     userName;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             userAttributeNames;                                        // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.AdminDeleteUserAttributesResult
// 0x0001
struct FAdminDeleteUserAttributesResult
{
	unsigned char                                      UnknownData_5LY4[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct CognitoIdp.AdminDeleteUserRequest
// 0x0020
struct FAdminDeleteUserRequest
{
	struct FString                                     userPoolId;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     userName;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.AdminCreateUserRequest
// 0x0068
struct FAdminCreateUserRequest
{
	struct FString                                     userPoolId;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     userName;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAttributeType>                      userAttributes;                                            // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FAttributeType>                      validationData;                                            // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     temporaryPassword;                                         // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               forceAliasCreation;                                        // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	CognitoIdp_EMessageActionType                      messageAction;                                             // 0x0051(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_B1ZS[0x6];                                     // 0x0052(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<CognitoIdp_EDeliveryMediumType>             desiredDeliveryMediums;                                    // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.AdminConfirmSignUpRequest
// 0x0020
struct FAdminConfirmSignUpRequest
{
	struct FString                                     userPoolId;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     userName;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.AdminConfirmSignUpResult
// 0x0001
struct FAdminConfirmSignUpResult
{
	unsigned char                                      UnknownData_CWZR[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct CognitoIdp.AdminAddUserToGroupRequest
// 0x0030
struct FAdminAddUserToGroupRequest
{
	struct FString                                     userPoolId;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     userName;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     groupName;                                                 // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.AddCustomAttributesResult
// 0x0001
struct FAddCustomAttributesResult
{
	unsigned char                                      UnknownData_ZUPX[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct CognitoIdp.UpdateUserPoolDomainRequest
// 0x0030
struct FUpdateUserPoolDomainRequest
{
	struct FString                                     domain;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     userPoolId;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCustomDomainConfigType                     customDomainConfig;                                        // 0x0020(0x0010) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.ResendConfirmationCodeResult
// 0x0028
struct FResendConfirmationCodeResult
{
	struct FCodeDeliveryDetailsType                    codeDeliveryDetails;                                       // 0x0000(0x0028) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.UpdateUserPoolClientRequest
// 0x0108
struct FUpdateUserPoolClientRequest
{
	struct FString                                     userPoolId;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ClientId;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     clientName;                                                // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                refreshTokenValidity;                                      // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UX57[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FString>                             readAttributes;                                            // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             writeAttributes;                                           // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<CognitoIdp_EExplicitAuthFlowsType>          explicitAuthFlows;                                         // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             supportedIdentityProviders;                                // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             callbackURLs;                                              // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             logoutURLs;                                                // 0x0088(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     defaultRedirectURI;                                        // 0x0098(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<CognitoIdp_EOAuthFlowType>                  allowedOAuthFlows;                                         // 0x00A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             allowedOAuthScopes;                                        // 0x00B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               allowedOAuthFlowsUserPoolClient;                           // 0x00C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TNBY[0x7];                                     // 0x00C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAnalyticsConfigurationType                 analyticsConfiguration;                                    // 0x00D0(0x0038) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.SignUpResult
// 0x0040
struct FSignUpResult
{
	bool                                               userConfirmed;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IF9V[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FCodeDeliveryDetailsType                    codeDeliveryDetails;                                       // 0x0008(0x0028) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FString                                     userSub;                                                   // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.SmsMfaConfigType
// 0x0030
struct FSmsMfaConfigType
{
	struct FString                                     smsAuthenticationMessage;                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSmsConfigurationType                       smsConfiguration;                                          // 0x0010(0x0020) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.CreateUserImportJobResult
// 0x0090
struct FCreateUserImportJobResult
{
	struct FUserImportJobType                          userImportJob;                                             // 0x0000(0x0090) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.UserPoolClientType
// 0x0128
struct FUserPoolClientType
{
	struct FString                                     userPoolId;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     clientName;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ClientId;                                                  // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     clientSecret;                                              // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   lastModifiedDate;                                          // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   creationDate;                                              // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                refreshTokenValidity;                                      // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_B5BM[0x4];                                     // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FString>                             readAttributes;                                            // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             writeAttributes;                                           // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<CognitoIdp_EExplicitAuthFlowsType>          explicitAuthFlows;                                         // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             supportedIdentityProviders;                                // 0x0088(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             callbackURLs;                                              // 0x0098(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             logoutURLs;                                                // 0x00A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     defaultRedirectURI;                                        // 0x00B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<CognitoIdp_EOAuthFlowType>                  allowedOAuthFlows;                                         // 0x00C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             allowedOAuthScopes;                                        // 0x00D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               allowedOAuthFlowsUserPoolClient;                           // 0x00E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_C771[0x7];                                     // 0x00E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAnalyticsConfigurationType                 analyticsConfiguration;                                    // 0x00F0(0x0038) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.UpdateUserPoolClientResult
// 0x0128
struct FUpdateUserPoolClientResult
{
	struct FUserPoolClientType                         userPoolClient;                                            // 0x0000(0x0128) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.GetUserResult
// 0x0050
struct FGetUserResult
{
	struct FString                                     userName;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAttributeType>                      userAttributes;                                            // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMFAOptionType>                      MFAOptions;                                                // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     preferredMfaSetting;                                       // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             userMFASettingList;                                        // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.IdentityProviderType
// 0x00E8
struct FIdentityProviderType
{
	struct FString                                     userPoolId;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     providerName;                                              // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	CognitoIdp_EIdentityProviderTypeType               providerType;                                              // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_O3DH[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<struct FString, struct FString>               providerDetails;                                           // 0x0028(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<struct FString, struct FString>               attributeMapping;                                          // 0x0078(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             idpIdentifiers;                                            // 0x00C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FDateTime                                   lastModifiedDate;                                          // 0x00D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   creationDate;                                              // 0x00E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.GetIdentityProviderByIdentifierResult
// 0x00E8
struct FGetIdentityProviderByIdentifierResult
{
	struct FIdentityProviderType                       identityProvider;                                          // 0x0000(0x00E8) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.DomainDescriptionType
// 0x0078
struct FDomainDescriptionType
{
	struct FString                                     userPoolId;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     AWSAccountId;                                              // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     domain;                                                    // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     s3Bucket;                                                  // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     cloudFrontDistribution;                                    // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Version;                                                   // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	CognitoIdp_EDomainStatusType                       status;                                                    // 0x0060(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DIJJ[0x7];                                     // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FCustomDomainConfigType                     customDomainConfig;                                        // 0x0068(0x0010) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.DescribeUserPoolDomainResult
// 0x0078
struct FDescribeUserPoolDomainResult
{
	struct FDomainDescriptionType                      domainDescription;                                         // 0x0000(0x0078) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.CreateUserPoolClientResult
// 0x0128
struct FCreateUserPoolClientResult
{
	struct FUserPoolClientType                         userPoolClient;                                            // 0x0000(0x0128) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.SetUserPoolMfaConfigResult
// 0x0038
struct FSetUserPoolMfaConfigResult
{
	struct FSmsMfaConfigType                           smsMfaConfiguration;                                       // 0x0000(0x0030) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSoftwareTokenMfaConfigType                 softwareTokenMfaConfiguration;                             // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	CognitoIdp_EUserPoolMfaType                        mfaConfiguration;                                          // 0x0031(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RLA0[0x6];                                     // 0x0032(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct CognitoIdp.AdminUpdateUserAttributesRequest
// 0x0030
struct FAdminUpdateUserAttributesRequest
{
	struct FString                                     userPoolId;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     userName;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAttributeType>                      userAttributes;                                            // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.UpdateUserPoolRequest
// 0x0248
struct FUpdateUserPoolRequest
{
	struct FString                                     userPoolId;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUserPoolPolicyType                         policies;                                                  // 0x0010(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_T6GW[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLambdaConfigType                           lambdaConfig;                                              // 0x0020(0x00A0) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<CognitoIdp_EVerifiedAttributeType>          autoVerifiedAttributes;                                    // 0x00C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     smsVerificationMessage;                                    // 0x00D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     emailVerificationMessage;                                  // 0x00E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     emailVerificationSubject;                                  // 0x00F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVerificationMessageTemplateType            verificationMessageTemplate;                               // 0x0100(0x0058) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FString                                     smsAuthenticationMessage;                                  // 0x0158(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	CognitoIdp_EUserPoolMfaType                        mfaConfiguration;                                          // 0x0168(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDeviceConfigurationType                    deviceConfiguration;                                       // 0x0169(0x0002) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RZ9Y[0x5];                                     // 0x016B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEmailConfigurationType                     emailConfiguration;                                        // 0x0170(0x0028) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSmsConfigurationType                       smsConfiguration;                                          // 0x0198(0x0020) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TMap<struct FString, struct FString>               userPoolTags;                                              // 0x01B8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FAdminCreateUserConfigType                  adminCreateUserConfig;                                     // 0x0208(0x0038) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FUserPoolAddOnsType                         userPoolAddOns;                                            // 0x0240(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_967M[0x7];                                     // 0x0241(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct CognitoIdp.UpdateUserAttributesRequest
// 0x0020
struct FUpdateUserAttributesRequest
{
	TArray<struct FAttributeType>                      userAttributes;                                            // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     accessToken;                                               // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.UpdateUserAttributesResult
// 0x0010
struct FUpdateUserAttributesResult
{
	TArray<struct FCodeDeliveryDetailsType>            codeDeliveryDetailsList;                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.UpdateResourceServerRequest
// 0x0040
struct FUpdateResourceServerRequest
{
	struct FString                                     userPoolId;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Identifier;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Name;                                                      // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FResourceServerScopeType>            scopes;                                                    // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.SetUserPoolMfaConfigRequest
// 0x0048
struct FSetUserPoolMfaConfigRequest
{
	struct FString                                     userPoolId;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSmsMfaConfigType                           smsMfaConfiguration;                                       // 0x0010(0x0030) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSoftwareTokenMfaConfigType                 softwareTokenMfaConfiguration;                             // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	CognitoIdp_EUserPoolMfaType                        mfaConfiguration;                                          // 0x0041(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HQC6[0x6];                                     // 0x0042(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct CognitoIdp.DescribeUserPoolResult
// 0x02F0
struct FDescribeUserPoolResult
{
	struct FUserPoolType                               userPool;                                                  // 0x0000(0x02F0) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.UpdateResourceServerResult
// 0x0040
struct FUpdateResourceServerResult
{
	struct FResourceServerType                         resourceServer;                                            // 0x0000(0x0040) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.StartUserImportJobResult
// 0x0090
struct FStartUserImportJobResult
{
	struct FUserImportJobType                          userImportJob;                                             // 0x0000(0x0090) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.SetRiskConfigurationResult
// 0x0128
struct FSetRiskConfigurationResult
{
	struct FRiskConfigurationType                      riskConfiguration;                                         // 0x0000(0x0128) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.AuthenticationResultType
// 0x0068
struct FAuthenticationResultType
{
	struct FString                                     accessToken;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                expiresIn;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_25K4[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     tokenType;                                                 // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     refreshToken;                                              // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     idToken;                                                   // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNewDeviceMetadataType                      newDeviceMetadata;                                         // 0x0048(0x0020) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.InitiateAuthResult
// 0x00D0
struct FInitiateAuthResult
{
	CognitoIdp_EChallengeNameType                      challengeName;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HFGL[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     session;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FString, struct FString>               challengeParameters;                                       // 0x0018(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FAuthenticationResultType                   authenticationResult;                                      // 0x0068(0x0068) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.GetUserAttributeVerificationCodeResult
// 0x0028
struct FGetUserAttributeVerificationCodeResult
{
	struct FCodeDeliveryDetailsType                    codeDeliveryDetails;                                       // 0x0000(0x0028) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.DescribeResourceServerResult
// 0x0040
struct FDescribeResourceServerResult
{
	struct FResourceServerType                         resourceServer;                                            // 0x0000(0x0040) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.AdminGetDeviceResult
// 0x0038
struct FAdminGetDeviceResult
{
	struct FDeviceType                                 device;                                                    // 0x0000(0x0038) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.AddCustomAttributesRequest
// 0x0020
struct FAddCustomAttributesRequest
{
	struct FString                                     userPoolId;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSchemaAttributeType>                customAttributes;                                          // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.UpdateIdentityProviderResult
// 0x00E8
struct FUpdateIdentityProviderResult
{
	struct FIdentityProviderType                       identityProvider;                                          // 0x0000(0x00E8) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.ListUserPoolClientsResult
// 0x0020
struct FListUserPoolClientsResult
{
	TArray<struct FUserPoolClientDescription>          userPoolClients;                                           // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     nextToken;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.ListDevicesResult
// 0x0020
struct FListDevicesResult
{
	TArray<struct FDeviceType>                         devices;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     paginationToken;                                           // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.GetDeviceResult
// 0x0038
struct FGetDeviceResult
{
	struct FDeviceType                                 device;                                                    // 0x0000(0x0038) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.CreateUserPoolClientRequest
// 0x00F8
struct FCreateUserPoolClientRequest
{
	struct FString                                     userPoolId;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     clientName;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               generateSecret;                                            // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GYJE[0x3];                                     // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                refreshTokenValidity;                                      // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             readAttributes;                                            // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             writeAttributes;                                           // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<CognitoIdp_EExplicitAuthFlowsType>          explicitAuthFlows;                                         // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             supportedIdentityProviders;                                // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             callbackURLs;                                              // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             logoutURLs;                                                // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     defaultRedirectURI;                                        // 0x0088(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<CognitoIdp_EOAuthFlowType>                  allowedOAuthFlows;                                         // 0x0098(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             allowedOAuthScopes;                                        // 0x00A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               allowedOAuthFlowsUserPoolClient;                           // 0x00B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0VDT[0x7];                                     // 0x00B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAnalyticsConfigurationType                 analyticsConfiguration;                                    // 0x00C0(0x0038) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.CreateUserPoolRequest
// 0x0278
struct FCreateUserPoolRequest
{
	struct FString                                     poolName;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUserPoolPolicyType                         policies;                                                  // 0x0010(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8AN7[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLambdaConfigType                           lambdaConfig;                                              // 0x0020(0x00A0) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<CognitoIdp_EVerifiedAttributeType>          autoVerifiedAttributes;                                    // 0x00C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<CognitoIdp_EAliasAttributeType>             aliasAttributes;                                           // 0x00D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<CognitoIdp_EUsernameAttributeType>          usernameAttributes;                                        // 0x00E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     smsVerificationMessage;                                    // 0x00F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     emailVerificationMessage;                                  // 0x0100(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     emailVerificationSubject;                                  // 0x0110(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVerificationMessageTemplateType            verificationMessageTemplate;                               // 0x0120(0x0058) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FString                                     smsAuthenticationMessage;                                  // 0x0178(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	CognitoIdp_EUserPoolMfaType                        mfaConfiguration;                                          // 0x0188(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDeviceConfigurationType                    deviceConfiguration;                                       // 0x0189(0x0002) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DPTL[0x5];                                     // 0x018B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEmailConfigurationType                     emailConfiguration;                                        // 0x0190(0x0028) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSmsConfigurationType                       smsConfiguration;                                          // 0x01B8(0x0020) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TMap<struct FString, struct FString>               userPoolTags;                                              // 0x01D8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FAdminCreateUserConfigType                  adminCreateUserConfig;                                     // 0x0228(0x0038) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FSchemaAttributeType>                schema;                                                    // 0x0260(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FUserPoolAddOnsType                         userPoolAddOns;                                            // 0x0270(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0GSL[0x7];                                     // 0x0271(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct CognitoIdp.UpdateGroupResult
// 0x0058
struct FUpdateGroupResult
{
	struct FGroupType                                  group;                                                     // 0x0000(0x0058) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.EventFeedbackType
// 0x0020
struct FEventFeedbackType
{
	CognitoIdp_EFeedbackValueType                      feedbackValue;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DTQ7[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     provider;                                                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   feedbackDate;                                              // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.AuthEventType
// 0x00A8
struct FAuthEventType
{
	struct FString                                     eventId;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	CognitoIdp_EEventType                              eventType;                                                 // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_762B[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDateTime                                   creationDate;                                              // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	CognitoIdp_EEventResponseType                      eventResponse;                                             // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEventRiskType                              eventRisk;                                                 // 0x0021(0x0002) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ECZO[0x5];                                     // 0x0023(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FChallengeResponseType>              challengeResponses;                                        // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FEventContextDataType                       eventContextData;                                          // 0x0038(0x0050) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FEventFeedbackType                          eventFeedback;                                             // 0x0088(0x0020) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.AdminListUserAuthEventsResult
// 0x0020
struct FAdminListUserAuthEventsResult
{
	TArray<struct FAuthEventType>                      authEvents;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     nextToken;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.StopUserImportJobResult
// 0x0090
struct FStopUserImportJobResult
{
	struct FUserImportJobType                          userImportJob;                                             // 0x0000(0x0090) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.SetRiskConfigurationRequest
// 0x0120
struct FSetRiskConfigurationRequest
{
	struct FString                                     userPoolId;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ClientId;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCompromisedCredentialsRiskConfigurationType compromisedCredentialsRiskConfiguration;                   // 0x0020(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FAccountTakeoverRiskConfigurationType       accountTakeoverRiskConfiguration;                          // 0x0038(0x00C8) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FRiskExceptionConfigurationType             riskExceptionConfiguration;                                // 0x0100(0x0020) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.ResendConfirmationCodeRequest
// 0x0050
struct FResendConfirmationCodeRequest
{
	struct FString                                     ClientId;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     secretHash;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUserContextDataType                        userContextData;                                           // 0x0020(0x0010) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FString                                     userName;                                                  // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAnalyticsMetadataType                      analyticsMetadata;                                         // 0x0040(0x0010) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.ListUserImportJobsResult
// 0x0020
struct FListUserImportJobsResult
{
	TArray<struct FUserImportJobType>                  userImportJobs;                                            // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     paginationToken;                                           // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.ForgotPasswordRequest
// 0x0050
struct FForgotPasswordRequest
{
	struct FString                                     ClientId;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     secretHash;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUserContextDataType                        userContextData;                                           // 0x0020(0x0010) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FString                                     userName;                                                  // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAnalyticsMetadataType                      analyticsMetadata;                                         // 0x0040(0x0010) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.DescribeUserPoolClientResult
// 0x0128
struct FDescribeUserPoolClientResult
{
	struct FUserPoolClientType                         userPoolClient;                                            // 0x0000(0x0128) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.SetUserSettingsRequest
// 0x0020
struct FSetUserSettingsRequest
{
	struct FString                                     accessToken;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FMFAOptionType>                      MFAOptions;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.DescribeUserImportJobResult
// 0x0090
struct FDescribeUserImportJobResult
{
	struct FUserImportJobType                          userImportJob;                                             // 0x0000(0x0090) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.ConfirmForgotPasswordRequest
// 0x0070
struct FConfirmForgotPasswordRequest
{
	struct FString                                     ClientId;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     secretHash;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     userName;                                                  // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     confirmationCode;                                          // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Password;                                                  // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAnalyticsMetadataType                      analyticsMetadata;                                         // 0x0050(0x0010) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FUserContextDataType                        userContextData;                                           // 0x0060(0x0010) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.SetUserMFAPreferenceRequest
// 0x0018
struct FSetUserMFAPreferenceRequest
{
	struct FSMSMfaSettingsType                         SMSMfaSettings;                                            // 0x0000(0x0002) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FSoftwareTokenMfaSettingsType               softwareTokenMfaSettings;                                  // 0x0002(0x0002) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XFGK[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     accessToken;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.UserType
// 0x0048
struct FUserType
{
	struct FString                                     userName;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAttributeType>                      attributes;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FDateTime                                   userCreateDate;                                            // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   userLastModifiedDate;                                      // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Enabled;                                                   // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	CognitoIdp_EUserStatusType                         userStatus;                                                // 0x0031(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_A59N[0x6];                                     // 0x0032(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FMFAOptionType>                      MFAOptions;                                                // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.ListUsersInGroupResult
// 0x0020
struct FListUsersInGroupResult
{
	TArray<struct FUserType>                           users;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     nextToken;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.AdminLinkProviderForUserRequest
// 0x0070
struct FAdminLinkProviderForUserRequest
{
	struct FString                                     userPoolId;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FProviderUserIdentifierType                 destinationUser;                                           // 0x0010(0x0030) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FProviderUserIdentifierType                 sourceUser;                                                // 0x0040(0x0030) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.UICustomizationType
// 0x0060
struct FUICustomizationType
{
	struct FString                                     userPoolId;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ClientId;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     imageUrl;                                                  // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CSS;                                                       // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CSSVersion;                                                // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   lastModifiedDate;                                          // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   creationDate;                                              // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.SetUICustomizationResult
// 0x0060
struct FSetUICustomizationResult
{
	struct FUICustomizationType                        uICustomization;                                           // 0x0000(0x0060) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.CreateResourceServerResult
// 0x0040
struct FCreateResourceServerResult
{
	struct FResourceServerType                         resourceServer;                                            // 0x0000(0x0040) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.InitiateAuthRequest
// 0x00D8
struct FInitiateAuthRequest
{
	CognitoIdp_EAuthFlowType                           authFlow;                                                  // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BECX[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<struct FString, struct FString>               authParameters;                                            // 0x0008(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<struct FString, struct FString>               clientMetadata;                                            // 0x0058(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     ClientId;                                                  // 0x00A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAnalyticsMetadataType                      analyticsMetadata;                                         // 0x00B8(0x0010) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FUserContextDataType                        userContextData;                                           // 0x00C8(0x0010) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.RespondToAuthChallengeRequest
// 0x0098
struct FRespondToAuthChallengeRequest
{
	struct FString                                     ClientId;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	CognitoIdp_EChallengeNameType                      challengeName;                                             // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9N9V[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     session;                                                   // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FString, struct FString>               challengeResponses;                                        // 0x0028(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FAnalyticsMetadataType                      analyticsMetadata;                                         // 0x0078(0x0010) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FUserContextDataType                        userContextData;                                           // 0x0088(0x0010) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.RespondToAuthChallengeResult
// 0x00D0
struct FRespondToAuthChallengeResult
{
	CognitoIdp_EChallengeNameType                      challengeName;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZAMD[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     session;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FString, struct FString>               challengeParameters;                                       // 0x0018(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FAuthenticationResultType                   authenticationResult;                                      // 0x0068(0x0068) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.UserPoolDescriptionType
// 0x00D8
struct FUserPoolDescriptionType
{
	struct FString                                     ID;                                                        // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Name;                                                      // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLambdaConfigType                           lambdaConfig;                                              // 0x0020(0x00A0) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	CognitoIdp_EStatusType                             status;                                                    // 0x00C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_P3SP[0x7];                                     // 0x00C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDateTime                                   lastModifiedDate;                                          // 0x00C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   creationDate;                                              // 0x00D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.ListUserPoolsResult
// 0x0020
struct FListUserPoolsResult
{
	TArray<struct FUserPoolDescriptionType>            userPools;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     nextToken;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.CreateResourceServerRequest
// 0x0040
struct FCreateResourceServerRequest
{
	struct FString                                     userPoolId;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Identifier;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Name;                                                      // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FResourceServerScopeType>            scopes;                                                    // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.CreateIdentityProviderResult
// 0x00E8
struct FCreateIdentityProviderResult
{
	struct FIdentityProviderType                       identityProvider;                                          // 0x0000(0x00E8) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.CreateGroupResult
// 0x0058
struct FCreateGroupResult
{
	struct FGroupType                                  group;                                                     // 0x0000(0x0058) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.ListUsersResult
// 0x0020
struct FListUsersResult
{
	TArray<struct FUserType>                           users;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     paginationToken;                                           // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.GetUserPoolMfaConfigResult
// 0x0038
struct FGetUserPoolMfaConfigResult
{
	struct FSmsMfaConfigType                           smsMfaConfiguration;                                       // 0x0000(0x0030) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSoftwareTokenMfaConfigType                 softwareTokenMfaConfiguration;                             // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	CognitoIdp_EUserPoolMfaType                        mfaConfiguration;                                          // 0x0031(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EQQ3[0x6];                                     // 0x0032(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct CognitoIdp.GetUICustomizationResult
// 0x0060
struct FGetUICustomizationResult
{
	struct FUICustomizationType                        uICustomization;                                           // 0x0000(0x0060) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.GetGroupResult
// 0x0058
struct FGetGroupResult
{
	struct FGroupType                                  group;                                                     // 0x0000(0x0058) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.ForgotPasswordResult
// 0x0028
struct FForgotPasswordResult
{
	struct FCodeDeliveryDetailsType                    codeDeliveryDetails;                                       // 0x0000(0x0028) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.ConfirmDeviceRequest
// 0x0050
struct FConfirmDeviceRequest
{
	struct FString                                     accessToken;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     deviceKey;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDeviceSecretVerifierConfigType             deviceSecretVerifierConfig;                                // 0x0020(0x0020) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FString                                     deviceName;                                                // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.AdminInitiateAuthRequest
// 0x0128
struct FAdminInitiateAuthRequest
{
	struct FString                                     userPoolId;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ClientId;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	CognitoIdp_EAuthFlowType                           authFlow;                                                  // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ES5S[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<struct FString, struct FString>               authParameters;                                            // 0x0028(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<struct FString, struct FString>               clientMetadata;                                            // 0x0078(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FAnalyticsMetadataType                      analyticsMetadata;                                         // 0x00C8(0x0010) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FContextDataType                            contextData;                                               // 0x00D8(0x0050) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.AdminCreateUserResult
// 0x0048
struct FAdminCreateUserResult
{
	struct FUserType                                   user;                                                      // 0x0000(0x0048) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.DescribeIdentityProviderResult
// 0x00E8
struct FDescribeIdentityProviderResult
{
	struct FIdentityProviderType                       identityProvider;                                          // 0x0000(0x00E8) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.AdminSetUserSettingsRequest
// 0x0030
struct FAdminSetUserSettingsRequest
{
	struct FString                                     userPoolId;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     userName;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FMFAOptionType>                      MFAOptions;                                                // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.AdminRespondToAuthChallengeRequest
// 0x00E8
struct FAdminRespondToAuthChallengeRequest
{
	struct FString                                     userPoolId;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ClientId;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	CognitoIdp_EChallengeNameType                      challengeName;                                             // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EAPE[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<struct FString, struct FString>               challengeResponses;                                        // 0x0028(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     session;                                                   // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAnalyticsMetadataType                      analyticsMetadata;                                         // 0x0088(0x0010) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FContextDataType                            contextData;                                               // 0x0098(0x0050) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.AdminInitiateAuthResult
// 0x00D0
struct FAdminInitiateAuthResult
{
	CognitoIdp_EChallengeNameType                      challengeName;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8XGJ[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     session;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FString, struct FString>               challengeParameters;                                       // 0x0018(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FAuthenticationResultType                   authenticationResult;                                      // 0x0068(0x0068) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct CognitoIdp.AdminRespondToAuthChallengeResult
// 0x00D0
struct FAdminRespondToAuthChallengeResult
{
	CognitoIdp_EChallengeNameType                      challengeName;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_70IV[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     session;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FString, struct FString>               challengeParameters;                                       // 0x0018(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FAuthenticationResultType                   authenticationResult;                                      // 0x0068(0x0068) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
