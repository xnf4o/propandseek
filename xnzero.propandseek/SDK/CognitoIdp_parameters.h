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

// Function CognitoIdp.CognitoIdpClientObject.VerifyUserAttribute
struct UCognitoIdpClientObject_VerifyUserAttribute_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVerifyUserAttributeRequest                 VerifyUserAttributeRequest;                                // 0x0000(0x0030)  (Parm, NativeAccessSpecifierPublic)
	struct FVerifyUserAttributeResult                  VerifyUserAttributeResult;                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	CognitoIdp_ECognitoIdpError                        errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdp.CognitoIdpClientObject.VerifySoftwareToken
struct UCognitoIdpClientObject_VerifySoftwareToken_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVerifySoftwareTokenRequest                 VerifySoftwareTokenRequest;                                // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
	struct FVerifySoftwareTokenResult                  VerifySoftwareTokenResult;                                 // 0x0000(0x0018)  (Parm, OutParm, NativeAccessSpecifierPublic)
	CognitoIdp_ECognitoIdpError                        errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdp.CognitoIdpClientObject.UpdateUserPoolDomain
struct UCognitoIdpClientObject_UpdateUserPoolDomain_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUpdateUserPoolDomainRequest                UpdateUserPoolDomainRequest;                               // 0x0000(0x0030)  (Parm, NativeAccessSpecifierPublic)
	struct FUpdateUserPoolDomainResult                 UpdateUserPoolDomainResult;                                // 0x0000(0x0010)  (Parm, OutParm, NativeAccessSpecifierPublic)
	CognitoIdp_ECognitoIdpError                        errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdp.CognitoIdpClientObject.UpdateUserPoolClient
struct UCognitoIdpClientObject_UpdateUserPoolClient_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUpdateUserPoolClientRequest                UpdateUserPoolClientRequest;                               // 0x0000(0x0108)  (Parm, NativeAccessSpecifierPublic)
	struct FUpdateUserPoolClientResult                 UpdateUserPoolClientResult;                                // 0x0000(0x0128)  (Parm, OutParm, NativeAccessSpecifierPublic)
	CognitoIdp_ECognitoIdpError                        errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdp.CognitoIdpClientObject.UpdateUserPool
struct UCognitoIdpClientObject_UpdateUserPool_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUpdateUserPoolRequest                      UpdateUserPoolRequest;                                     // 0x0000(0x0248)  (Parm, NativeAccessSpecifierPublic)
	struct FUpdateUserPoolResult                       UpdateUserPoolResult;                                      // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	CognitoIdp_ECognitoIdpError                        errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdp.CognitoIdpClientObject.UpdateUserAttributes
struct UCognitoIdpClientObject_UpdateUserAttributes_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUpdateUserAttributesRequest                UpdateUserAttributesRequest;                               // 0x0000(0x0020)  (Parm, NativeAccessSpecifierPublic)
	struct FUpdateUserAttributesResult                 UpdateUserAttributesResult;                                // 0x0000(0x0010)  (Parm, OutParm, NativeAccessSpecifierPublic)
	CognitoIdp_ECognitoIdpError                        errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdp.CognitoIdpClientObject.UpdateResourceServer
struct UCognitoIdpClientObject_UpdateResourceServer_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUpdateResourceServerRequest                UpdateResourceServerRequest;                               // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
	struct FUpdateResourceServerResult                 UpdateResourceServerResult;                                // 0x0000(0x0040)  (Parm, OutParm, NativeAccessSpecifierPublic)
	CognitoIdp_ECognitoIdpError                        errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdp.CognitoIdpClientObject.UpdateIdentityProvider
struct UCognitoIdpClientObject_UpdateIdentityProvider_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUpdateIdentityProviderRequest              UpdateIdentityProviderRequest;                             // 0x0000(0x00D0)  (Parm, NativeAccessSpecifierPublic)
	struct FUpdateIdentityProviderResult               UpdateIdentityProviderResult;                              // 0x0000(0x00E8)  (Parm, OutParm, NativeAccessSpecifierPublic)
	CognitoIdp_ECognitoIdpError                        errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdp.CognitoIdpClientObject.UpdateGroup
struct UCognitoIdpClientObject_UpdateGroup_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUpdateGroupRequest                         UpdateGroupRequest;                                        // 0x0000(0x0048)  (Parm, NativeAccessSpecifierPublic)
	struct FUpdateGroupResult                          UpdateGroupResult;                                         // 0x0000(0x0058)  (Parm, OutParm, NativeAccessSpecifierPublic)
	CognitoIdp_ECognitoIdpError                        errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdp.CognitoIdpClientObject.UpdateDeviceStatus
struct UCognitoIdpClientObject_UpdateDeviceStatus_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUpdateDeviceStatusRequest                  UpdateDeviceStatusRequest;                                 // 0x0000(0x0028)  (Parm, NativeAccessSpecifierPublic)
	struct FUpdateDeviceStatusResult                   UpdateDeviceStatusResult;                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	CognitoIdp_ECognitoIdpError                        errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdp.CognitoIdpClientObject.UpdateAuthEventFeedback
struct UCognitoIdpClientObject_UpdateAuthEventFeedback_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUpdateAuthEventFeedbackRequest             UpdateAuthEventFeedbackRequest;                            // 0x0000(0x0048)  (Parm, NativeAccessSpecifierPublic)
	struct FUpdateAuthEventFeedbackResult              UpdateAuthEventFeedbackResult;                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	CognitoIdp_ECognitoIdpError                        errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdp.CognitoIdpClientObject.UntagResource
struct UCognitoIdpClientObject_UntagResource_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCognitoIdpUntagResourceRequest             untagResourceRequest;                                      // 0x0000(0x0020)  (Parm, NativeAccessSpecifierPublic)
	struct FCognitoIdpUntagResourceResult              untagResourceResult;                                       // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	CognitoIdp_ECognitoIdpError                        errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdp.CognitoIdpClientObject.TagResource
struct UCognitoIdpClientObject_TagResource_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCognitoIdpTagResourceRequest               tagResourceRequest;                                        // 0x0000(0x0060)  (Parm, NativeAccessSpecifierPublic)
	struct FCognitoIdpTagResourceResult                tagResourceResult;                                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	CognitoIdp_ECognitoIdpError                        errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdp.CognitoIdpClientObject.StopUserImportJob
struct UCognitoIdpClientObject_StopUserImportJob_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FStopUserImportJobRequest                   StopUserImportJobRequest;                                  // 0x0000(0x0020)  (Parm, NativeAccessSpecifierPublic)
	struct FStopUserImportJobResult                    StopUserImportJobResult;                                   // 0x0000(0x0090)  (Parm, OutParm, NativeAccessSpecifierPublic)
	CognitoIdp_ECognitoIdpError                        errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdp.CognitoIdpClientObject.StartUserImportJob
struct UCognitoIdpClientObject_StartUserImportJob_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FStartUserImportJobRequest                  StartUserImportJobRequest;                                 // 0x0000(0x0020)  (Parm, NativeAccessSpecifierPublic)
	struct FStartUserImportJobResult                   StartUserImportJobResult;                                  // 0x0000(0x0090)  (Parm, OutParm, NativeAccessSpecifierPublic)
	CognitoIdp_ECognitoIdpError                        errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdp.CognitoIdpClientObject.SignUp
struct UCognitoIdpClientObject_SignUp_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSignUpRequest                              SignUpRequest;                                             // 0x0000(0x0080)  (Parm, NativeAccessSpecifierPublic)
	struct FSignUpResult                               SignUpResult;                                              // 0x0000(0x0040)  (Parm, OutParm, NativeAccessSpecifierPublic)
	CognitoIdp_ECognitoIdpError                        errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdp.CognitoIdpClientObject.SetUserSettings
struct UCognitoIdpClientObject_SetUserSettings_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSetUserSettingsRequest                     SetUserSettingsRequest;                                    // 0x0000(0x0020)  (Parm, NativeAccessSpecifierPublic)
	struct FSetUserSettingsResult                      SetUserSettingsResult;                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	CognitoIdp_ECognitoIdpError                        errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdp.CognitoIdpClientObject.SetUserPoolMfaConfig
struct UCognitoIdpClientObject_SetUserPoolMfaConfig_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSetUserPoolMfaConfigRequest                SetUserPoolMfaConfigRequest;                               // 0x0000(0x0048)  (Parm, NativeAccessSpecifierPublic)
	struct FSetUserPoolMfaConfigResult                 SetUserPoolMfaConfigResult;                                // 0x0000(0x0038)  (Parm, OutParm, NativeAccessSpecifierPublic)
	CognitoIdp_ECognitoIdpError                        errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdp.CognitoIdpClientObject.SetUserMFAPreference
struct UCognitoIdpClientObject_SetUserMFAPreference_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSetUserMFAPreferenceRequest                SetUserMFAPreferenceRequest;                               // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
	struct FSetUserMFAPreferenceResult                 SetUserMFAPreferenceResult;                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	CognitoIdp_ECognitoIdpError                        errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdp.CognitoIdpClientObject.SetUICustomization
struct UCognitoIdpClientObject_SetUICustomization_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSetUICustomizationRequest                  SetUICustomizationRequest;                                 // 0x0000(0x0038)  (Parm, NativeAccessSpecifierPublic)
	struct FSetUICustomizationResult                   SetUICustomizationResult;                                  // 0x0000(0x0060)  (Parm, OutParm, NativeAccessSpecifierPublic)
	CognitoIdp_ECognitoIdpError                        errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdp.CognitoIdpClientObject.SetRiskConfiguration
struct UCognitoIdpClientObject_SetRiskConfiguration_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSetRiskConfigurationRequest                SetRiskConfigurationRequest;                               // 0x0000(0x0120)  (Parm, NativeAccessSpecifierPublic)
	struct FSetRiskConfigurationResult                 SetRiskConfigurationResult;                                // 0x0000(0x0128)  (Parm, OutParm, NativeAccessSpecifierPublic)
	CognitoIdp_ECognitoIdpError                        errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdp.CognitoIdpClientObject.RespondToAuthChallenge
struct UCognitoIdpClientObject_RespondToAuthChallenge_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRespondToAuthChallengeRequest              RespondToAuthChallengeRequest;                             // 0x0000(0x0098)  (Parm, NativeAccessSpecifierPublic)
	struct FRespondToAuthChallengeResult               RespondToAuthChallengeResult;                              // 0x0000(0x00D0)  (Parm, OutParm, NativeAccessSpecifierPublic)
	CognitoIdp_ECognitoIdpError                        errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdp.CognitoIdpClientObject.ResendConfirmationCode
struct UCognitoIdpClientObject_ResendConfirmationCode_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FResendConfirmationCodeRequest              ResendConfirmationCodeRequest;                             // 0x0000(0x0050)  (Parm, NativeAccessSpecifierPublic)
	struct FResendConfirmationCodeResult               ResendConfirmationCodeResult;                              // 0x0000(0x0028)  (Parm, OutParm, NativeAccessSpecifierPublic)
	CognitoIdp_ECognitoIdpError                        errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdp.CognitoIdpClientObject.ListUsersInGroup
struct UCognitoIdpClientObject_ListUsersInGroup_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FListUsersInGroupRequest                    ListUsersInGroupRequest;                                   // 0x0000(0x0038)  (Parm, NativeAccessSpecifierPublic)
	struct FListUsersInGroupResult                     ListUsersInGroupResult;                                    // 0x0000(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
	CognitoIdp_ECognitoIdpError                        errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdp.CognitoIdpClientObject.ListUsers
struct UCognitoIdpClientObject_ListUsers_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FListUsersRequest                           ListUsersRequest;                                          // 0x0000(0x0048)  (Parm, NativeAccessSpecifierPublic)
	struct FListUsersResult                            ListUsersResult;                                           // 0x0000(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
	CognitoIdp_ECognitoIdpError                        errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdp.CognitoIdpClientObject.ListUserPools
struct UCognitoIdpClientObject_ListUserPools_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FListUserPoolsRequest                       ListUserPoolsRequest;                                      // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
	struct FListUserPoolsResult                        ListUserPoolsResult;                                       // 0x0000(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
	CognitoIdp_ECognitoIdpError                        errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdp.CognitoIdpClientObject.ListUserPoolClients
struct UCognitoIdpClientObject_ListUserPoolClients_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FListUserPoolClientsRequest                 ListUserPoolClientsRequest;                                // 0x0000(0x0028)  (Parm, NativeAccessSpecifierPublic)
	struct FListUserPoolClientsResult                  ListUserPoolClientsResult;                                 // 0x0000(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
	CognitoIdp_ECognitoIdpError                        errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdp.CognitoIdpClientObject.ListUserImportJobs
struct UCognitoIdpClientObject_ListUserImportJobs_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FListUserImportJobsRequest                  ListUserImportJobsRequest;                                 // 0x0000(0x0028)  (Parm, NativeAccessSpecifierPublic)
	struct FListUserImportJobsResult                   ListUserImportJobsResult;                                  // 0x0000(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
	CognitoIdp_ECognitoIdpError                        errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdp.CognitoIdpClientObject.ListTagsForResource
struct UCognitoIdpClientObject_ListTagsForResource_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCognitoIdpListTagsForResourceRequest       listTagsForResourceRequest;                                // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
	struct FCognitoIdpListTagsForResourceResult        listTagsForResourceResult;                                 // 0x0000(0x0050)  (Parm, OutParm, NativeAccessSpecifierPublic)
	CognitoIdp_ECognitoIdpError                        errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdp.CognitoIdpClientObject.ListResourceServers
struct UCognitoIdpClientObject_ListResourceServers_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FListResourceServersRequest                 ListResourceServersRequest;                                // 0x0000(0x0028)  (Parm, NativeAccessSpecifierPublic)
	struct FListResourceServersResult                  ListResourceServersResult;                                 // 0x0000(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
	CognitoIdp_ECognitoIdpError                        errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdp.CognitoIdpClientObject.ListIdentityProviders
struct UCognitoIdpClientObject_ListIdentityProviders_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FListIdentityProvidersRequest               ListIdentityProvidersRequest;                              // 0x0000(0x0028)  (Parm, NativeAccessSpecifierPublic)
	struct FListIdentityProvidersResult                ListIdentityProvidersResult;                               // 0x0000(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
	CognitoIdp_ECognitoIdpError                        errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdp.CognitoIdpClientObject.ListGroups
struct UCognitoIdpClientObject_ListGroups_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FListGroupsRequest                          ListGroupsRequest;                                         // 0x0000(0x0028)  (Parm, NativeAccessSpecifierPublic)
	struct FListGroupsResult                           ListGroupsResult;                                          // 0x0000(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
	CognitoIdp_ECognitoIdpError                        errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdp.CognitoIdpClientObject.ListDevices
struct UCognitoIdpClientObject_ListDevices_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FListDevicesRequest                         ListDevicesRequest;                                        // 0x0000(0x0028)  (Parm, NativeAccessSpecifierPublic)
	struct FListDevicesResult                          ListDevicesResult;                                         // 0x0000(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
	CognitoIdp_ECognitoIdpError                        errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdp.CognitoIdpClientObject.InitiateAuth
struct UCognitoIdpClientObject_InitiateAuth_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInitiateAuthRequest                        InitiateAuthRequest;                                       // 0x0000(0x00D8)  (Parm, NativeAccessSpecifierPublic)
	struct FInitiateAuthResult                         InitiateAuthResult;                                        // 0x0000(0x00D0)  (Parm, OutParm, NativeAccessSpecifierPublic)
	CognitoIdp_ECognitoIdpError                        errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdp.CognitoIdpClientObject.GlobalSignOut
struct UCognitoIdpClientObject_GlobalSignOut_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGlobalSignOutRequest                       GlobalSignOutRequest;                                      // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
	struct FGlobalSignOutResult                        GlobalSignOutResult;                                       // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	CognitoIdp_ECognitoIdpError                        errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdp.CognitoIdpClientObject.GetUserPoolMfaConfig
struct UCognitoIdpClientObject_GetUserPoolMfaConfig_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGetUserPoolMfaConfigRequest                GetUserPoolMfaConfigRequest;                               // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
	struct FGetUserPoolMfaConfigResult                 GetUserPoolMfaConfigResult;                                // 0x0000(0x0038)  (Parm, OutParm, NativeAccessSpecifierPublic)
	CognitoIdp_ECognitoIdpError                        errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdp.CognitoIdpClientObject.GetUserAttributeVerificationCode
struct UCognitoIdpClientObject_GetUserAttributeVerificationCode_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGetUserAttributeVerificationCodeRequest    GetUserAttributeVerificationCodeRequest;                   // 0x0000(0x0020)  (Parm, NativeAccessSpecifierPublic)
	struct FGetUserAttributeVerificationCodeResult     GetUserAttributeVerificationCodeResult;                    // 0x0000(0x0028)  (Parm, OutParm, NativeAccessSpecifierPublic)
	CognitoIdp_ECognitoIdpError                        errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdp.CognitoIdpClientObject.GetUser
struct UCognitoIdpClientObject_GetUser_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGetUserRequest                             GetUserRequest;                                            // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
	struct FGetUserResult                              GetUserResult;                                             // 0x0000(0x0050)  (Parm, OutParm, NativeAccessSpecifierPublic)
	CognitoIdp_ECognitoIdpError                        errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdp.CognitoIdpClientObject.GetUICustomization
struct UCognitoIdpClientObject_GetUICustomization_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGetUICustomizationRequest                  GetUICustomizationRequest;                                 // 0x0000(0x0020)  (Parm, NativeAccessSpecifierPublic)
	struct FGetUICustomizationResult                   GetUICustomizationResult;                                  // 0x0000(0x0060)  (Parm, OutParm, NativeAccessSpecifierPublic)
	CognitoIdp_ECognitoIdpError                        errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdp.CognitoIdpClientObject.GetSigningCertificate
struct UCognitoIdpClientObject_GetSigningCertificate_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGetSigningCertificateRequest               GetSigningCertificateRequest;                              // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
	struct FGetSigningCertificateResult                GetSigningCertificateResult;                               // 0x0000(0x0010)  (Parm, OutParm, NativeAccessSpecifierPublic)
	CognitoIdp_ECognitoIdpError                        errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdp.CognitoIdpClientObject.GetServiceClientName
struct UCognitoIdpClientObject_GetServiceClientName_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CognitoIdp.CognitoIdpClientObject.GetIdentityProviderByIdentifier
struct UCognitoIdpClientObject_GetIdentityProviderByIdentifier_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGetIdentityProviderByIdentifierRequest     GetIdentityProviderByIdentifierRequest;                    // 0x0000(0x0020)  (Parm, NativeAccessSpecifierPublic)
	struct FGetIdentityProviderByIdentifierResult      GetIdentityProviderByIdentifierResult;                     // 0x0000(0x00E8)  (Parm, OutParm, NativeAccessSpecifierPublic)
	CognitoIdp_ECognitoIdpError                        errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdp.CognitoIdpClientObject.GetGroup
struct UCognitoIdpClientObject_GetGroup_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGetGroupRequest                            GetGroupRequest;                                           // 0x0000(0x0020)  (Parm, NativeAccessSpecifierPublic)
	struct FGetGroupResult                             GetGroupResult;                                            // 0x0000(0x0058)  (Parm, OutParm, NativeAccessSpecifierPublic)
	CognitoIdp_ECognitoIdpError                        errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdp.CognitoIdpClientObject.GetDevice
struct UCognitoIdpClientObject_GetDevice_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGetDeviceRequest                           GetDeviceRequest;                                          // 0x0000(0x0020)  (Parm, NativeAccessSpecifierPublic)
	struct FGetDeviceResult                            GetDeviceResult;                                           // 0x0000(0x0038)  (Parm, OutParm, NativeAccessSpecifierPublic)
	CognitoIdp_ECognitoIdpError                        errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdp.CognitoIdpClientObject.GetCSVHeader
struct UCognitoIdpClientObject_GetCSVHeader_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGetCSVHeaderRequest                        GetCSVHeaderRequest;                                       // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
	struct FGetCSVHeaderResult                         GetCSVHeaderResult;                                        // 0x0000(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
	CognitoIdp_ECognitoIdpError                        errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdp.CognitoIdpClientObject.ForgotPassword
struct UCognitoIdpClientObject_ForgotPassword_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FForgotPasswordRequest                      ForgotPasswordRequest;                                     // 0x0000(0x0050)  (Parm, NativeAccessSpecifierPublic)
	struct FForgotPasswordResult                       ForgotPasswordResult;                                      // 0x0000(0x0028)  (Parm, OutParm, NativeAccessSpecifierPublic)
	CognitoIdp_ECognitoIdpError                        errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdp.CognitoIdpClientObject.ForgetDevice
struct UCognitoIdpClientObject_ForgetDevice_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FForgetDeviceRequest                        ForgetDeviceRequest;                                       // 0x0000(0x0020)  (Parm, NativeAccessSpecifierPublic)
	CognitoIdp_ECognitoIdpError                        errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdp.CognitoIdpClientObject.DescribeUserPoolDomain
struct UCognitoIdpClientObject_DescribeUserPoolDomain_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDescribeUserPoolDomainRequest              DescribeUserPoolDomainRequest;                             // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
	struct FDescribeUserPoolDomainResult               DescribeUserPoolDomainResult;                              // 0x0000(0x0078)  (Parm, OutParm, NativeAccessSpecifierPublic)
	CognitoIdp_ECognitoIdpError                        errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdp.CognitoIdpClientObject.DescribeUserPoolClient
struct UCognitoIdpClientObject_DescribeUserPoolClient_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDescribeUserPoolClientRequest              DescribeUserPoolClientRequest;                             // 0x0000(0x0020)  (Parm, NativeAccessSpecifierPublic)
	struct FDescribeUserPoolClientResult               DescribeUserPoolClientResult;                              // 0x0000(0x0128)  (Parm, OutParm, NativeAccessSpecifierPublic)
	CognitoIdp_ECognitoIdpError                        errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdp.CognitoIdpClientObject.DescribeUserPool
struct UCognitoIdpClientObject_DescribeUserPool_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDescribeUserPoolRequest                    DescribeUserPoolRequest;                                   // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
	struct FDescribeUserPoolResult                     DescribeUserPoolResult;                                    // 0x0000(0x02F0)  (Parm, OutParm, NativeAccessSpecifierPublic)
	CognitoIdp_ECognitoIdpError                        errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdp.CognitoIdpClientObject.DescribeUserImportJob
struct UCognitoIdpClientObject_DescribeUserImportJob_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDescribeUserImportJobRequest               DescribeUserImportJobRequest;                              // 0x0000(0x0020)  (Parm, NativeAccessSpecifierPublic)
	struct FDescribeUserImportJobResult                DescribeUserImportJobResult;                               // 0x0000(0x0090)  (Parm, OutParm, NativeAccessSpecifierPublic)
	CognitoIdp_ECognitoIdpError                        errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdp.CognitoIdpClientObject.DescribeRiskConfiguration
struct UCognitoIdpClientObject_DescribeRiskConfiguration_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDescribeRiskConfigurationRequest           DescribeRiskConfigurationRequest;                          // 0x0000(0x0020)  (Parm, NativeAccessSpecifierPublic)
	struct FDescribeRiskConfigurationResult            DescribeRiskConfigurationResult;                           // 0x0000(0x0128)  (Parm, OutParm, NativeAccessSpecifierPublic)
	CognitoIdp_ECognitoIdpError                        errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdp.CognitoIdpClientObject.DescribeResourceServer
struct UCognitoIdpClientObject_DescribeResourceServer_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDescribeResourceServerRequest              DescribeResourceServerRequest;                             // 0x0000(0x0020)  (Parm, NativeAccessSpecifierPublic)
	struct FDescribeResourceServerResult               DescribeResourceServerResult;                              // 0x0000(0x0040)  (Parm, OutParm, NativeAccessSpecifierPublic)
	CognitoIdp_ECognitoIdpError                        errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdp.CognitoIdpClientObject.DescribeIdentityProvider
struct UCognitoIdpClientObject_DescribeIdentityProvider_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDescribeIdentityProviderRequest            DescribeIdentityProviderRequest;                           // 0x0000(0x0020)  (Parm, NativeAccessSpecifierPublic)
	struct FDescribeIdentityProviderResult             DescribeIdentityProviderResult;                            // 0x0000(0x00E8)  (Parm, OutParm, NativeAccessSpecifierPublic)
	CognitoIdp_ECognitoIdpError                        errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdp.CognitoIdpClientObject.DeleteUserPoolDomain
struct UCognitoIdpClientObject_DeleteUserPoolDomain_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDeleteUserPoolDomainRequest                DeleteUserPoolDomainRequest;                               // 0x0000(0x0020)  (Parm, NativeAccessSpecifierPublic)
	struct FDeleteUserPoolDomainResult                 DeleteUserPoolDomainResult;                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	CognitoIdp_ECognitoIdpError                        errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdp.CognitoIdpClientObject.DeleteUserPoolClient
struct UCognitoIdpClientObject_DeleteUserPoolClient_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDeleteUserPoolClientRequest                DeleteUserPoolClientRequest;                               // 0x0000(0x0020)  (Parm, NativeAccessSpecifierPublic)
	CognitoIdp_ECognitoIdpError                        errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdp.CognitoIdpClientObject.DeleteUserPool
struct UCognitoIdpClientObject_DeleteUserPool_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDeleteUserPoolRequest                      DeleteUserPoolRequest;                                     // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
	CognitoIdp_ECognitoIdpError                        errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdp.CognitoIdpClientObject.DeleteUserAttributes
struct UCognitoIdpClientObject_DeleteUserAttributes_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDeleteUserAttributesRequest                DeleteUserAttributesRequest;                               // 0x0000(0x0020)  (Parm, NativeAccessSpecifierPublic)
	struct FDeleteUserAttributesResult                 DeleteUserAttributesResult;                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	CognitoIdp_ECognitoIdpError                        errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdp.CognitoIdpClientObject.DeleteUser
struct UCognitoIdpClientObject_DeleteUser_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDeleteUserRequest                          DeleteUserRequest;                                         // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
	CognitoIdp_ECognitoIdpError                        errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdp.CognitoIdpClientObject.DeleteResourceServer
struct UCognitoIdpClientObject_DeleteResourceServer_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDeleteResourceServerRequest                DeleteResourceServerRequest;                               // 0x0000(0x0020)  (Parm, NativeAccessSpecifierPublic)
	CognitoIdp_ECognitoIdpError                        errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdp.CognitoIdpClientObject.DeleteIdentityProvider
struct UCognitoIdpClientObject_DeleteIdentityProvider_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDeleteIdentityProviderRequest              DeleteIdentityProviderRequest;                             // 0x0000(0x0020)  (Parm, NativeAccessSpecifierPublic)
	CognitoIdp_ECognitoIdpError                        errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdp.CognitoIdpClientObject.DeleteGroup
struct UCognitoIdpClientObject_DeleteGroup_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDeleteGroupRequest                         DeleteGroupRequest;                                        // 0x0000(0x0020)  (Parm, NativeAccessSpecifierPublic)
	CognitoIdp_ECognitoIdpError                        errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdp.CognitoIdpClientObject.CreateUserPoolDomain
struct UCognitoIdpClientObject_CreateUserPoolDomain_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCreateUserPoolDomainRequest                CreateUserPoolDomainRequest;                               // 0x0000(0x0030)  (Parm, NativeAccessSpecifierPublic)
	struct FCreateUserPoolDomainResult                 CreateUserPoolDomainResult;                                // 0x0000(0x0010)  (Parm, OutParm, NativeAccessSpecifierPublic)
	CognitoIdp_ECognitoIdpError                        errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdp.CognitoIdpClientObject.CreateUserPoolClient
struct UCognitoIdpClientObject_CreateUserPoolClient_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCreateUserPoolClientRequest                CreateUserPoolClientRequest;                               // 0x0000(0x00F8)  (Parm, NativeAccessSpecifierPublic)
	struct FCreateUserPoolClientResult                 CreateUserPoolClientResult;                                // 0x0000(0x0128)  (Parm, OutParm, NativeAccessSpecifierPublic)
	CognitoIdp_ECognitoIdpError                        errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdp.CognitoIdpClientObject.CreateUserPool
struct UCognitoIdpClientObject_CreateUserPool_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCreateUserPoolRequest                      CreateUserPoolRequest;                                     // 0x0000(0x0278)  (Parm, NativeAccessSpecifierPublic)
	struct FCreateUserPoolResult                       CreateUserPoolResult;                                      // 0x0000(0x02F0)  (Parm, OutParm, NativeAccessSpecifierPublic)
	CognitoIdp_ECognitoIdpError                        errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdp.CognitoIdpClientObject.CreateUserImportJob
struct UCognitoIdpClientObject_CreateUserImportJob_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCreateUserImportJobRequest                 CreateUserImportJobRequest;                                // 0x0000(0x0030)  (Parm, NativeAccessSpecifierPublic)
	struct FCreateUserImportJobResult                  CreateUserImportJobResult;                                 // 0x0000(0x0090)  (Parm, OutParm, NativeAccessSpecifierPublic)
	CognitoIdp_ECognitoIdpError                        errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdp.CognitoIdpClientObject.CreateResourceServer
struct UCognitoIdpClientObject_CreateResourceServer_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCreateResourceServerRequest                CreateResourceServerRequest;                               // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
	struct FCreateResourceServerResult                 CreateResourceServerResult;                                // 0x0000(0x0040)  (Parm, OutParm, NativeAccessSpecifierPublic)
	CognitoIdp_ECognitoIdpError                        errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdp.CognitoIdpClientObject.CreateIdentityProvider
struct UCognitoIdpClientObject_CreateIdentityProvider_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCreateIdentityProviderRequest              CreateIdentityProviderRequest;                             // 0x0000(0x00D8)  (Parm, NativeAccessSpecifierPublic)
	struct FCreateIdentityProviderResult               CreateIdentityProviderResult;                              // 0x0000(0x00E8)  (Parm, OutParm, NativeAccessSpecifierPublic)
	CognitoIdp_ECognitoIdpError                        errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdp.CognitoIdpClientObject.CreateGroup
struct UCognitoIdpClientObject_CreateGroup_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCreateGroupRequest                         CreateGroupRequest;                                        // 0x0000(0x0048)  (Parm, NativeAccessSpecifierPublic)
	struct FCreateGroupResult                          CreateGroupResult;                                         // 0x0000(0x0058)  (Parm, OutParm, NativeAccessSpecifierPublic)
	CognitoIdp_ECognitoIdpError                        errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdp.CognitoIdpClientObject.CreateCognitoIdpObject
struct UCognitoIdpClientObject_CreateCognitoIdpObject_Params
{
	struct FAWSCredentials                             credentials;                                               // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FAWSClientConfiguration                     clientConfiguration;                                       // 0x0000(0x00B8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UCognitoIdpClientObject*                     ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CognitoIdp.CognitoIdpClientObject.ConfirmSignUp
struct UCognitoIdpClientObject_ConfirmSignUp_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FConfirmSignUpRequest                       ConfirmSignUpRequest;                                      // 0x0000(0x0068)  (Parm, NativeAccessSpecifierPublic)
	struct FConfirmSignUpResult                        ConfirmSignUpResult;                                       // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	CognitoIdp_ECognitoIdpError                        errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdp.CognitoIdpClientObject.ConfirmForgotPassword
struct UCognitoIdpClientObject_ConfirmForgotPassword_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FConfirmForgotPasswordRequest               ConfirmForgotPasswordRequest;                              // 0x0000(0x0070)  (Parm, NativeAccessSpecifierPublic)
	struct FConfirmForgotPasswordResult                ConfirmForgotPasswordResult;                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	CognitoIdp_ECognitoIdpError                        errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdp.CognitoIdpClientObject.ConfirmDevice
struct UCognitoIdpClientObject_ConfirmDevice_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FConfirmDeviceRequest                       ConfirmDeviceRequest;                                      // 0x0000(0x0050)  (Parm, NativeAccessSpecifierPublic)
	struct FConfirmDeviceResult                        ConfirmDeviceResult;                                       // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	CognitoIdp_ECognitoIdpError                        errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdp.CognitoIdpClientObject.ChangePassword
struct UCognitoIdpClientObject_ChangePassword_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FChangePasswordRequest                      ChangePasswordRequest;                                     // 0x0000(0x0030)  (Parm, NativeAccessSpecifierPublic)
	struct FChangePasswordResult                       ChangePasswordResult;                                      // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	CognitoIdp_ECognitoIdpError                        errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdp.CognitoIdpClientObject.AssociateSoftwareToken
struct UCognitoIdpClientObject_AssociateSoftwareToken_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAssociateSoftwareTokenRequest              AssociateSoftwareTokenRequest;                             // 0x0000(0x0020)  (Parm, NativeAccessSpecifierPublic)
	struct FAssociateSoftwareTokenResult               AssociateSoftwareTokenResult;                              // 0x0000(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
	CognitoIdp_ECognitoIdpError                        errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdp.CognitoIdpClientObject.AdminUserGlobalSignOut
struct UCognitoIdpClientObject_AdminUserGlobalSignOut_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAdminUserGlobalSignOutRequest              AdminUserGlobalSignOutRequest;                             // 0x0000(0x0020)  (Parm, NativeAccessSpecifierPublic)
	struct FAdminUserGlobalSignOutResult               AdminUserGlobalSignOutResult;                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	CognitoIdp_ECognitoIdpError                        errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdp.CognitoIdpClientObject.AdminUpdateUserAttributes
struct UCognitoIdpClientObject_AdminUpdateUserAttributes_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAdminUpdateUserAttributesRequest           AdminUpdateUserAttributesRequest;                          // 0x0000(0x0030)  (Parm, NativeAccessSpecifierPublic)
	struct FAdminUpdateUserAttributesResult            AdminUpdateUserAttributesResult;                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	CognitoIdp_ECognitoIdpError                        errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdp.CognitoIdpClientObject.AdminUpdateDeviceStatus
struct UCognitoIdpClientObject_AdminUpdateDeviceStatus_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAdminUpdateDeviceStatusRequest             AdminUpdateDeviceStatusRequest;                            // 0x0000(0x0038)  (Parm, NativeAccessSpecifierPublic)
	struct FAdminUpdateDeviceStatusResult              AdminUpdateDeviceStatusResult;                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	CognitoIdp_ECognitoIdpError                        errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdp.CognitoIdpClientObject.AdminUpdateAuthEventFeedback
struct UCognitoIdpClientObject_AdminUpdateAuthEventFeedback_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAdminUpdateAuthEventFeedbackRequest        AdminUpdateAuthEventFeedbackRequest;                       // 0x0000(0x0038)  (Parm, NativeAccessSpecifierPublic)
	struct FAdminUpdateAuthEventFeedbackResult         AdminUpdateAuthEventFeedbackResult;                        // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	CognitoIdp_ECognitoIdpError                        errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdp.CognitoIdpClientObject.AdminSetUserSettings
struct UCognitoIdpClientObject_AdminSetUserSettings_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAdminSetUserSettingsRequest                AdminSetUserSettingsRequest;                               // 0x0000(0x0030)  (Parm, NativeAccessSpecifierPublic)
	struct FAdminSetUserSettingsResult                 AdminSetUserSettingsResult;                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	CognitoIdp_ECognitoIdpError                        errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdp.CognitoIdpClientObject.AdminSetUserPassword
struct UCognitoIdpClientObject_AdminSetUserPassword_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAdminSetUserPasswordRequest                AdminSetUserPasswordRequest;                               // 0x0000(0x0038)  (Parm, NativeAccessSpecifierPublic)
	struct FAdminSetUserPasswordResult                 AdminSetUserPasswordResult;                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	CognitoIdp_ECognitoIdpError                        errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdp.CognitoIdpClientObject.AdminSetUserMFAPreference
struct UCognitoIdpClientObject_AdminSetUserMFAPreference_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAdminSetUserMFAPreferenceRequest           AdminSetUserMFAPreferenceRequest;                          // 0x0000(0x0028)  (Parm, NativeAccessSpecifierPublic)
	struct FAdminSetUserMFAPreferenceResult            AdminSetUserMFAPreferenceResult;                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	CognitoIdp_ECognitoIdpError                        errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdp.CognitoIdpClientObject.AdminRespondToAuthChallenge
struct UCognitoIdpClientObject_AdminRespondToAuthChallenge_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAdminRespondToAuthChallengeRequest         AdminRespondToAuthChallengeRequest;                        // 0x0000(0x00E8)  (Parm, NativeAccessSpecifierPublic)
	struct FAdminRespondToAuthChallengeResult          AdminRespondToAuthChallengeResult;                         // 0x0000(0x00D0)  (Parm, OutParm, NativeAccessSpecifierPublic)
	CognitoIdp_ECognitoIdpError                        errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdp.CognitoIdpClientObject.AdminResetUserPassword
struct UCognitoIdpClientObject_AdminResetUserPassword_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAdminResetUserPasswordRequest              AdminResetUserPasswordRequest;                             // 0x0000(0x0020)  (Parm, NativeAccessSpecifierPublic)
	struct FAdminResetUserPasswordResult               AdminResetUserPasswordResult;                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	CognitoIdp_ECognitoIdpError                        errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdp.CognitoIdpClientObject.AdminRemoveUserFromGroup
struct UCognitoIdpClientObject_AdminRemoveUserFromGroup_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAdminRemoveUserFromGroupRequest            AdminRemoveUserFromGroupRequest;                           // 0x0000(0x0030)  (Parm, NativeAccessSpecifierPublic)
	CognitoIdp_ECognitoIdpError                        errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdp.CognitoIdpClientObject.AdminListUserAuthEvents
struct UCognitoIdpClientObject_AdminListUserAuthEvents_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAdminListUserAuthEventsRequest             AdminListUserAuthEventsRequest;                            // 0x0000(0x0038)  (Parm, NativeAccessSpecifierPublic)
	struct FAdminListUserAuthEventsResult              AdminListUserAuthEventsResult;                             // 0x0000(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
	CognitoIdp_ECognitoIdpError                        errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdp.CognitoIdpClientObject.AdminListGroupsForUser
struct UCognitoIdpClientObject_AdminListGroupsForUser_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAdminListGroupsForUserRequest              AdminListGroupsForUserRequest;                             // 0x0000(0x0038)  (Parm, NativeAccessSpecifierPublic)
	struct FAdminListGroupsForUserResult               AdminListGroupsForUserResult;                              // 0x0000(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
	CognitoIdp_ECognitoIdpError                        errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdp.CognitoIdpClientObject.AdminListDevices
struct UCognitoIdpClientObject_AdminListDevices_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAdminListDevicesRequest                    AdminListDevicesRequest;                                   // 0x0000(0x0038)  (Parm, NativeAccessSpecifierPublic)
	struct FAdminListDevicesResult                     AdminListDevicesResult;                                    // 0x0000(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
	CognitoIdp_ECognitoIdpError                        errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdp.CognitoIdpClientObject.AdminLinkProviderForUser
struct UCognitoIdpClientObject_AdminLinkProviderForUser_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAdminLinkProviderForUserRequest            AdminLinkProviderForUserRequest;                           // 0x0000(0x0070)  (Parm, NativeAccessSpecifierPublic)
	struct FAdminLinkProviderForUserResult             AdminLinkProviderForUserResult;                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	CognitoIdp_ECognitoIdpError                        errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdp.CognitoIdpClientObject.AdminInitiateAuth
struct UCognitoIdpClientObject_AdminInitiateAuth_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAdminInitiateAuthRequest                   AdminInitiateAuthRequest;                                  // 0x0000(0x0128)  (Parm, NativeAccessSpecifierPublic)
	struct FAdminInitiateAuthResult                    AdminInitiateAuthResult;                                   // 0x0000(0x00D0)  (Parm, OutParm, NativeAccessSpecifierPublic)
	CognitoIdp_ECognitoIdpError                        errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdp.CognitoIdpClientObject.AdminGetUser
struct UCognitoIdpClientObject_AdminGetUser_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAdminGetUserRequest                        AdminGetUserRequest;                                       // 0x0000(0x0020)  (Parm, NativeAccessSpecifierPublic)
	struct FAdminGetUserResult                         AdminGetUserResult;                                        // 0x0000(0x0068)  (Parm, OutParm, NativeAccessSpecifierPublic)
	CognitoIdp_ECognitoIdpError                        errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdp.CognitoIdpClientObject.AdminGetDevice
struct UCognitoIdpClientObject_AdminGetDevice_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAdminGetDeviceRequest                      AdminGetDeviceRequest;                                     // 0x0000(0x0030)  (Parm, NativeAccessSpecifierPublic)
	struct FAdminGetDeviceResult                       AdminGetDeviceResult;                                      // 0x0000(0x0038)  (Parm, OutParm, NativeAccessSpecifierPublic)
	CognitoIdp_ECognitoIdpError                        errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdp.CognitoIdpClientObject.AdminForgetDevice
struct UCognitoIdpClientObject_AdminForgetDevice_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAdminForgetDeviceRequest                   AdminForgetDeviceRequest;                                  // 0x0000(0x0030)  (Parm, NativeAccessSpecifierPublic)
	CognitoIdp_ECognitoIdpError                        errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdp.CognitoIdpClientObject.AdminEnableUser
struct UCognitoIdpClientObject_AdminEnableUser_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAdminEnableUserRequest                     AdminEnableUserRequest;                                    // 0x0000(0x0020)  (Parm, NativeAccessSpecifierPublic)
	struct FAdminEnableUserResult                      AdminEnableUserResult;                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	CognitoIdp_ECognitoIdpError                        errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdp.CognitoIdpClientObject.AdminDisableUser
struct UCognitoIdpClientObject_AdminDisableUser_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAdminDisableUserRequest                    AdminDisableUserRequest;                                   // 0x0000(0x0020)  (Parm, NativeAccessSpecifierPublic)
	struct FAdminDisableUserResult                     AdminDisableUserResult;                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	CognitoIdp_ECognitoIdpError                        errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdp.CognitoIdpClientObject.AdminDisableProviderForUser
struct UCognitoIdpClientObject_AdminDisableProviderForUser_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAdminDisableProviderForUserRequest         AdminDisableProviderForUserRequest;                        // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
	struct FAdminDisableProviderForUserResult          AdminDisableProviderForUserResult;                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	CognitoIdp_ECognitoIdpError                        errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdp.CognitoIdpClientObject.AdminDeleteUserAttributes
struct UCognitoIdpClientObject_AdminDeleteUserAttributes_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAdminDeleteUserAttributesRequest           AdminDeleteUserAttributesRequest;                          // 0x0000(0x0030)  (Parm, NativeAccessSpecifierPublic)
	struct FAdminDeleteUserAttributesResult            AdminDeleteUserAttributesResult;                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	CognitoIdp_ECognitoIdpError                        errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdp.CognitoIdpClientObject.AdminDeleteUser
struct UCognitoIdpClientObject_AdminDeleteUser_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAdminDeleteUserRequest                     AdminDeleteUserRequest;                                    // 0x0000(0x0020)  (Parm, NativeAccessSpecifierPublic)
	CognitoIdp_ECognitoIdpError                        errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdp.CognitoIdpClientObject.AdminCreateUser
struct UCognitoIdpClientObject_AdminCreateUser_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAdminCreateUserRequest                     AdminCreateUserRequest;                                    // 0x0000(0x0068)  (Parm, NativeAccessSpecifierPublic)
	struct FAdminCreateUserResult                      AdminCreateUserResult;                                     // 0x0000(0x0048)  (Parm, OutParm, NativeAccessSpecifierPublic)
	CognitoIdp_ECognitoIdpError                        errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdp.CognitoIdpClientObject.AdminConfirmSignUp
struct UCognitoIdpClientObject_AdminConfirmSignUp_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAdminConfirmSignUpRequest                  AdminConfirmSignUpRequest;                                 // 0x0000(0x0020)  (Parm, NativeAccessSpecifierPublic)
	struct FAdminConfirmSignUpResult                   AdminConfirmSignUpResult;                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	CognitoIdp_ECognitoIdpError                        errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdp.CognitoIdpClientObject.AdminAddUserToGroup
struct UCognitoIdpClientObject_AdminAddUserToGroup_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAdminAddUserToGroupRequest                 AdminAddUserToGroupRequest;                                // 0x0000(0x0030)  (Parm, NativeAccessSpecifierPublic)
	CognitoIdp_ECognitoIdpError                        errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdp.CognitoIdpClientObject.AddCustomAttributes
struct UCognitoIdpClientObject_AddCustomAttributes_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAddCustomAttributesRequest                 AddCustomAttributesRequest;                                // 0x0000(0x0020)  (Parm, NativeAccessSpecifierPublic)
	struct FAddCustomAttributesResult                  AddCustomAttributesResult;                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	CognitoIdp_ECognitoIdpError                        errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
