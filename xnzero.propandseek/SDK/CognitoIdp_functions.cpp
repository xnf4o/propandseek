// Name: pns, Version: 1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x00565CB0
//		Name   -> Function CognitoIdp.CognitoIdpClientObject.VerifyUserAttribute
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVerifyUserAttributeRequest                 VerifyUserAttributeRequest                                 (Parm, NativeAccessSpecifierPublic)
//		struct FVerifyUserAttributeResult                  VerifyUserAttributeResult                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		CognitoIdp_ECognitoIdpError                        errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdpClientObject::VerifyUserAttribute(class UObject* WorldContextObject, bool* Success, const struct FVerifyUserAttributeRequest& VerifyUserAttributeRequest, struct FVerifyUserAttributeResult* VerifyUserAttributeResult, CognitoIdp_ECognitoIdpError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdp.CognitoIdpClientObject.VerifyUserAttribute");

	UCognitoIdpClientObject_VerifyUserAttribute_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.VerifyUserAttributeRequest = VerifyUserAttributeRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (VerifyUserAttributeResult != nullptr)
		*VerifyUserAttributeResult = params.VerifyUserAttributeResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x00565940
//		Name   -> Function CognitoIdp.CognitoIdpClientObject.VerifySoftwareToken
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVerifySoftwareTokenRequest                 VerifySoftwareTokenRequest                                 (Parm, NativeAccessSpecifierPublic)
//		struct FVerifySoftwareTokenResult                  VerifySoftwareTokenResult                                  (Parm, OutParm, NativeAccessSpecifierPublic)
//		CognitoIdp_ECognitoIdpError                        errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdpClientObject::VerifySoftwareToken(class UObject* WorldContextObject, bool* Success, const struct FVerifySoftwareTokenRequest& VerifySoftwareTokenRequest, struct FVerifySoftwareTokenResult* VerifySoftwareTokenResult, CognitoIdp_ECognitoIdpError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdp.CognitoIdpClientObject.VerifySoftwareToken");

	UCognitoIdpClientObject_VerifySoftwareToken_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.VerifySoftwareTokenRequest = VerifySoftwareTokenRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (VerifySoftwareTokenResult != nullptr)
		*VerifySoftwareTokenResult = params.VerifySoftwareTokenResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x00565610
//		Name   -> Function CognitoIdp.CognitoIdpClientObject.UpdateUserPoolDomain
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUpdateUserPoolDomainRequest                UpdateUserPoolDomainRequest                                (Parm, NativeAccessSpecifierPublic)
//		struct FUpdateUserPoolDomainResult                 UpdateUserPoolDomainResult                                 (Parm, OutParm, NativeAccessSpecifierPublic)
//		CognitoIdp_ECognitoIdpError                        errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdpClientObject::UpdateUserPoolDomain(class UObject* WorldContextObject, bool* Success, const struct FUpdateUserPoolDomainRequest& UpdateUserPoolDomainRequest, struct FUpdateUserPoolDomainResult* UpdateUserPoolDomainResult, CognitoIdp_ECognitoIdpError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdp.CognitoIdpClientObject.UpdateUserPoolDomain");

	UCognitoIdpClientObject_UpdateUserPoolDomain_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.UpdateUserPoolDomainRequest = UpdateUserPoolDomainRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (UpdateUserPoolDomainResult != nullptr)
		*UpdateUserPoolDomainResult = params.UpdateUserPoolDomainResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x00565290
//		Name   -> Function CognitoIdp.CognitoIdpClientObject.UpdateUserPoolClient
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUpdateUserPoolClientRequest                UpdateUserPoolClientRequest                                (Parm, NativeAccessSpecifierPublic)
//		struct FUpdateUserPoolClientResult                 UpdateUserPoolClientResult                                 (Parm, OutParm, NativeAccessSpecifierPublic)
//		CognitoIdp_ECognitoIdpError                        errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdpClientObject::UpdateUserPoolClient(class UObject* WorldContextObject, bool* Success, const struct FUpdateUserPoolClientRequest& UpdateUserPoolClientRequest, struct FUpdateUserPoolClientResult* UpdateUserPoolClientResult, CognitoIdp_ECognitoIdpError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdp.CognitoIdpClientObject.UpdateUserPoolClient");

	UCognitoIdpClientObject_UpdateUserPoolClient_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.UpdateUserPoolClientRequest = UpdateUserPoolClientRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (UpdateUserPoolClientResult != nullptr)
		*UpdateUserPoolClientResult = params.UpdateUserPoolClientResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x00564F90
//		Name   -> Function CognitoIdp.CognitoIdpClientObject.UpdateUserPool
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUpdateUserPoolRequest                      UpdateUserPoolRequest                                      (Parm, NativeAccessSpecifierPublic)
//		struct FUpdateUserPoolResult                       UpdateUserPoolResult                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		CognitoIdp_ECognitoIdpError                        errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdpClientObject::UpdateUserPool(class UObject* WorldContextObject, bool* Success, const struct FUpdateUserPoolRequest& UpdateUserPoolRequest, struct FUpdateUserPoolResult* UpdateUserPoolResult, CognitoIdp_ECognitoIdpError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdp.CognitoIdpClientObject.UpdateUserPool");

	UCognitoIdpClientObject_UpdateUserPool_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.UpdateUserPoolRequest = UpdateUserPoolRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (UpdateUserPoolResult != nullptr)
		*UpdateUserPoolResult = params.UpdateUserPoolResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x00564C40
//		Name   -> Function CognitoIdp.CognitoIdpClientObject.UpdateUserAttributes
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUpdateUserAttributesRequest                UpdateUserAttributesRequest                                (Parm, NativeAccessSpecifierPublic)
//		struct FUpdateUserAttributesResult                 UpdateUserAttributesResult                                 (Parm, OutParm, NativeAccessSpecifierPublic)
//		CognitoIdp_ECognitoIdpError                        errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdpClientObject::UpdateUserAttributes(class UObject* WorldContextObject, bool* Success, const struct FUpdateUserAttributesRequest& UpdateUserAttributesRequest, struct FUpdateUserAttributesResult* UpdateUserAttributesResult, CognitoIdp_ECognitoIdpError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdp.CognitoIdpClientObject.UpdateUserAttributes");

	UCognitoIdpClientObject_UpdateUserAttributes_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.UpdateUserAttributesRequest = UpdateUserAttributesRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (UpdateUserAttributesResult != nullptr)
		*UpdateUserAttributesResult = params.UpdateUserAttributesResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x00564840
//		Name   -> Function CognitoIdp.CognitoIdpClientObject.UpdateResourceServer
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUpdateResourceServerRequest                UpdateResourceServerRequest                                (Parm, NativeAccessSpecifierPublic)
//		struct FUpdateResourceServerResult                 UpdateResourceServerResult                                 (Parm, OutParm, NativeAccessSpecifierPublic)
//		CognitoIdp_ECognitoIdpError                        errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdpClientObject::UpdateResourceServer(class UObject* WorldContextObject, bool* Success, const struct FUpdateResourceServerRequest& UpdateResourceServerRequest, struct FUpdateResourceServerResult* UpdateResourceServerResult, CognitoIdp_ECognitoIdpError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdp.CognitoIdpClientObject.UpdateResourceServer");

	UCognitoIdpClientObject_UpdateResourceServer_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.UpdateResourceServerRequest = UpdateResourceServerRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (UpdateResourceServerResult != nullptr)
		*UpdateResourceServerResult = params.UpdateResourceServerResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x00564470
//		Name   -> Function CognitoIdp.CognitoIdpClientObject.UpdateIdentityProvider
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUpdateIdentityProviderRequest              UpdateIdentityProviderRequest                              (Parm, NativeAccessSpecifierPublic)
//		struct FUpdateIdentityProviderResult               UpdateIdentityProviderResult                               (Parm, OutParm, NativeAccessSpecifierPublic)
//		CognitoIdp_ECognitoIdpError                        errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdpClientObject::UpdateIdentityProvider(class UObject* WorldContextObject, bool* Success, const struct FUpdateIdentityProviderRequest& UpdateIdentityProviderRequest, struct FUpdateIdentityProviderResult* UpdateIdentityProviderResult, CognitoIdp_ECognitoIdpError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdp.CognitoIdpClientObject.UpdateIdentityProvider");

	UCognitoIdpClientObject_UpdateIdentityProvider_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.UpdateIdentityProviderRequest = UpdateIdentityProviderRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (UpdateIdentityProviderResult != nullptr)
		*UpdateIdentityProviderResult = params.UpdateIdentityProviderResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x005640B0
//		Name   -> Function CognitoIdp.CognitoIdpClientObject.UpdateGroup
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUpdateGroupRequest                         UpdateGroupRequest                                         (Parm, NativeAccessSpecifierPublic)
//		struct FUpdateGroupResult                          UpdateGroupResult                                          (Parm, OutParm, NativeAccessSpecifierPublic)
//		CognitoIdp_ECognitoIdpError                        errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdpClientObject::UpdateGroup(class UObject* WorldContextObject, bool* Success, const struct FUpdateGroupRequest& UpdateGroupRequest, struct FUpdateGroupResult* UpdateGroupResult, CognitoIdp_ECognitoIdpError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdp.CognitoIdpClientObject.UpdateGroup");

	UCognitoIdpClientObject_UpdateGroup_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.UpdateGroupRequest = UpdateGroupRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (UpdateGroupResult != nullptr)
		*UpdateGroupResult = params.UpdateGroupResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x00563DC0
//		Name   -> Function CognitoIdp.CognitoIdpClientObject.UpdateDeviceStatus
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUpdateDeviceStatusRequest                  UpdateDeviceStatusRequest                                  (Parm, NativeAccessSpecifierPublic)
//		struct FUpdateDeviceStatusResult                   UpdateDeviceStatusResult                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		CognitoIdp_ECognitoIdpError                        errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdpClientObject::UpdateDeviceStatus(class UObject* WorldContextObject, bool* Success, const struct FUpdateDeviceStatusRequest& UpdateDeviceStatusRequest, struct FUpdateDeviceStatusResult* UpdateDeviceStatusResult, CognitoIdp_ECognitoIdpError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdp.CognitoIdpClientObject.UpdateDeviceStatus");

	UCognitoIdpClientObject_UpdateDeviceStatus_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.UpdateDeviceStatusRequest = UpdateDeviceStatusRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (UpdateDeviceStatusResult != nullptr)
		*UpdateDeviceStatusResult = params.UpdateDeviceStatusResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x00563A60
//		Name   -> Function CognitoIdp.CognitoIdpClientObject.UpdateAuthEventFeedback
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUpdateAuthEventFeedbackRequest             UpdateAuthEventFeedbackRequest                             (Parm, NativeAccessSpecifierPublic)
//		struct FUpdateAuthEventFeedbackResult              UpdateAuthEventFeedbackResult                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		CognitoIdp_ECognitoIdpError                        errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdpClientObject::UpdateAuthEventFeedback(class UObject* WorldContextObject, bool* Success, const struct FUpdateAuthEventFeedbackRequest& UpdateAuthEventFeedbackRequest, struct FUpdateAuthEventFeedbackResult* UpdateAuthEventFeedbackResult, CognitoIdp_ECognitoIdpError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdp.CognitoIdpClientObject.UpdateAuthEventFeedback");

	UCognitoIdpClientObject_UpdateAuthEventFeedback_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.UpdateAuthEventFeedbackRequest = UpdateAuthEventFeedbackRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (UpdateAuthEventFeedbackResult != nullptr)
		*UpdateAuthEventFeedbackResult = params.UpdateAuthEventFeedbackResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x00563730
//		Name   -> Function CognitoIdp.CognitoIdpClientObject.UntagResource
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FCognitoIdpUntagResourceRequest             untagResourceRequest                                       (Parm, NativeAccessSpecifierPublic)
//		struct FCognitoIdpUntagResourceResult              untagResourceResult                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		CognitoIdp_ECognitoIdpError                        errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdpClientObject::UntagResource(class UObject* WorldContextObject, bool* Success, const struct FCognitoIdpUntagResourceRequest& untagResourceRequest, struct FCognitoIdpUntagResourceResult* untagResourceResult, CognitoIdp_ECognitoIdpError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdp.CognitoIdpClientObject.UntagResource");

	UCognitoIdpClientObject_UntagResource_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.untagResourceRequest = untagResourceRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (untagResourceResult != nullptr)
		*untagResourceResult = params.untagResourceResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x00563380
//		Name   -> Function CognitoIdp.CognitoIdpClientObject.TagResource
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FCognitoIdpTagResourceRequest               tagResourceRequest                                         (Parm, NativeAccessSpecifierPublic)
//		struct FCognitoIdpTagResourceResult                tagResourceResult                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		CognitoIdp_ECognitoIdpError                        errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdpClientObject::TagResource(class UObject* WorldContextObject, bool* Success, const struct FCognitoIdpTagResourceRequest& tagResourceRequest, struct FCognitoIdpTagResourceResult* tagResourceResult, CognitoIdp_ECognitoIdpError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdp.CognitoIdpClientObject.TagResource");

	UCognitoIdpClientObject_TagResource_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.tagResourceRequest = tagResourceRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (tagResourceResult != nullptr)
		*tagResourceResult = params.tagResourceResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x00563040
//		Name   -> Function CognitoIdp.CognitoIdpClientObject.StopUserImportJob
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FStopUserImportJobRequest                   StopUserImportJobRequest                                   (Parm, NativeAccessSpecifierPublic)
//		struct FStopUserImportJobResult                    StopUserImportJobResult                                    (Parm, OutParm, NativeAccessSpecifierPublic)
//		CognitoIdp_ECognitoIdpError                        errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdpClientObject::StopUserImportJob(class UObject* WorldContextObject, bool* Success, const struct FStopUserImportJobRequest& StopUserImportJobRequest, struct FStopUserImportJobResult* StopUserImportJobResult, CognitoIdp_ECognitoIdpError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdp.CognitoIdpClientObject.StopUserImportJob");

	UCognitoIdpClientObject_StopUserImportJob_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.StopUserImportJobRequest = StopUserImportJobRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (StopUserImportJobResult != nullptr)
		*StopUserImportJobResult = params.StopUserImportJobResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x00562D00
//		Name   -> Function CognitoIdp.CognitoIdpClientObject.StartUserImportJob
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FStartUserImportJobRequest                  StartUserImportJobRequest                                  (Parm, NativeAccessSpecifierPublic)
//		struct FStartUserImportJobResult                   StartUserImportJobResult                                   (Parm, OutParm, NativeAccessSpecifierPublic)
//		CognitoIdp_ECognitoIdpError                        errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdpClientObject::StartUserImportJob(class UObject* WorldContextObject, bool* Success, const struct FStartUserImportJobRequest& StartUserImportJobRequest, struct FStartUserImportJobResult* StartUserImportJobResult, CognitoIdp_ECognitoIdpError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdp.CognitoIdpClientObject.StartUserImportJob");

	UCognitoIdpClientObject_StartUserImportJob_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.StartUserImportJobRequest = StartUserImportJobRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (StartUserImportJobResult != nullptr)
		*StartUserImportJobResult = params.StartUserImportJobResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x00562940
//		Name   -> Function CognitoIdp.CognitoIdpClientObject.SignUp
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FSignUpRequest                              SignUpRequest                                              (Parm, NativeAccessSpecifierPublic)
//		struct FSignUpResult                               SignUpResult                                               (Parm, OutParm, NativeAccessSpecifierPublic)
//		CognitoIdp_ECognitoIdpError                        errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdpClientObject::SignUp(class UObject* WorldContextObject, bool* Success, const struct FSignUpRequest& SignUpRequest, struct FSignUpResult* SignUpResult, CognitoIdp_ECognitoIdpError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdp.CognitoIdpClientObject.SignUp");

	UCognitoIdpClientObject_SignUp_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.SignUpRequest = SignUpRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (SignUpResult != nullptr)
		*SignUpResult = params.SignUpResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x00562620
//		Name   -> Function CognitoIdp.CognitoIdpClientObject.SetUserSettings
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FSetUserSettingsRequest                     SetUserSettingsRequest                                     (Parm, NativeAccessSpecifierPublic)
//		struct FSetUserSettingsResult                      SetUserSettingsResult                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		CognitoIdp_ECognitoIdpError                        errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdpClientObject::SetUserSettings(class UObject* WorldContextObject, bool* Success, const struct FSetUserSettingsRequest& SetUserSettingsRequest, struct FSetUserSettingsResult* SetUserSettingsResult, CognitoIdp_ECognitoIdpError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdp.CognitoIdpClientObject.SetUserSettings");

	UCognitoIdpClientObject_SetUserSettings_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.SetUserSettingsRequest = SetUserSettingsRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (SetUserSettingsResult != nullptr)
		*SetUserSettingsResult = params.SetUserSettingsResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x00562260
//		Name   -> Function CognitoIdp.CognitoIdpClientObject.SetUserPoolMfaConfig
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FSetUserPoolMfaConfigRequest                SetUserPoolMfaConfigRequest                                (Parm, NativeAccessSpecifierPublic)
//		struct FSetUserPoolMfaConfigResult                 SetUserPoolMfaConfigResult                                 (Parm, OutParm, NativeAccessSpecifierPublic)
//		CognitoIdp_ECognitoIdpError                        errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdpClientObject::SetUserPoolMfaConfig(class UObject* WorldContextObject, bool* Success, const struct FSetUserPoolMfaConfigRequest& SetUserPoolMfaConfigRequest, struct FSetUserPoolMfaConfigResult* SetUserPoolMfaConfigResult, CognitoIdp_ECognitoIdpError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdp.CognitoIdpClientObject.SetUserPoolMfaConfig");

	UCognitoIdpClientObject_SetUserPoolMfaConfig_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.SetUserPoolMfaConfigRequest = SetUserPoolMfaConfigRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (SetUserPoolMfaConfigResult != nullptr)
		*SetUserPoolMfaConfigResult = params.SetUserPoolMfaConfigResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x00561FA0
//		Name   -> Function CognitoIdp.CognitoIdpClientObject.SetUserMFAPreference
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FSetUserMFAPreferenceRequest                SetUserMFAPreferenceRequest                                (Parm, NativeAccessSpecifierPublic)
//		struct FSetUserMFAPreferenceResult                 SetUserMFAPreferenceResult                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		CognitoIdp_ECognitoIdpError                        errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdpClientObject::SetUserMFAPreference(class UObject* WorldContextObject, bool* Success, const struct FSetUserMFAPreferenceRequest& SetUserMFAPreferenceRequest, struct FSetUserMFAPreferenceResult* SetUserMFAPreferenceResult, CognitoIdp_ECognitoIdpError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdp.CognitoIdpClientObject.SetUserMFAPreference");

	UCognitoIdpClientObject_SetUserMFAPreference_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.SetUserMFAPreferenceRequest = SetUserMFAPreferenceRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (SetUserMFAPreferenceResult != nullptr)
		*SetUserMFAPreferenceResult = params.SetUserMFAPreferenceResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x00561C30
//		Name   -> Function CognitoIdp.CognitoIdpClientObject.SetUICustomization
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FSetUICustomizationRequest                  SetUICustomizationRequest                                  (Parm, NativeAccessSpecifierPublic)
//		struct FSetUICustomizationResult                   SetUICustomizationResult                                   (Parm, OutParm, NativeAccessSpecifierPublic)
//		CognitoIdp_ECognitoIdpError                        errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdpClientObject::SetUICustomization(class UObject* WorldContextObject, bool* Success, const struct FSetUICustomizationRequest& SetUICustomizationRequest, struct FSetUICustomizationResult* SetUICustomizationResult, CognitoIdp_ECognitoIdpError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdp.CognitoIdpClientObject.SetUICustomization");

	UCognitoIdpClientObject_SetUICustomization_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.SetUICustomizationRequest = SetUICustomizationRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (SetUICustomizationResult != nullptr)
		*SetUICustomizationResult = params.SetUICustomizationResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x00561820
//		Name   -> Function CognitoIdp.CognitoIdpClientObject.SetRiskConfiguration
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FSetRiskConfigurationRequest                SetRiskConfigurationRequest                                (Parm, NativeAccessSpecifierPublic)
//		struct FSetRiskConfigurationResult                 SetRiskConfigurationResult                                 (Parm, OutParm, NativeAccessSpecifierPublic)
//		CognitoIdp_ECognitoIdpError                        errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdpClientObject::SetRiskConfiguration(class UObject* WorldContextObject, bool* Success, const struct FSetRiskConfigurationRequest& SetRiskConfigurationRequest, struct FSetRiskConfigurationResult* SetRiskConfigurationResult, CognitoIdp_ECognitoIdpError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdp.CognitoIdpClientObject.SetRiskConfiguration");

	UCognitoIdpClientObject_SetRiskConfiguration_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.SetRiskConfigurationRequest = SetRiskConfigurationRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (SetRiskConfigurationResult != nullptr)
		*SetRiskConfigurationResult = params.SetRiskConfigurationResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x00561310
//		Name   -> Function CognitoIdp.CognitoIdpClientObject.RespondToAuthChallenge
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FRespondToAuthChallengeRequest              RespondToAuthChallengeRequest                              (Parm, NativeAccessSpecifierPublic)
//		struct FRespondToAuthChallengeResult               RespondToAuthChallengeResult                               (Parm, OutParm, NativeAccessSpecifierPublic)
//		CognitoIdp_ECognitoIdpError                        errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdpClientObject::RespondToAuthChallenge(class UObject* WorldContextObject, bool* Success, const struct FRespondToAuthChallengeRequest& RespondToAuthChallengeRequest, struct FRespondToAuthChallengeResult* RespondToAuthChallengeResult, CognitoIdp_ECognitoIdpError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdp.CognitoIdpClientObject.RespondToAuthChallenge");

	UCognitoIdpClientObject_RespondToAuthChallenge_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.RespondToAuthChallengeRequest = RespondToAuthChallengeRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (RespondToAuthChallengeResult != nullptr)
		*RespondToAuthChallengeResult = params.RespondToAuthChallengeResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x00560F60
//		Name   -> Function CognitoIdp.CognitoIdpClientObject.ResendConfirmationCode
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FResendConfirmationCodeRequest              ResendConfirmationCodeRequest                              (Parm, NativeAccessSpecifierPublic)
//		struct FResendConfirmationCodeResult               ResendConfirmationCodeResult                               (Parm, OutParm, NativeAccessSpecifierPublic)
//		CognitoIdp_ECognitoIdpError                        errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdpClientObject::ResendConfirmationCode(class UObject* WorldContextObject, bool* Success, const struct FResendConfirmationCodeRequest& ResendConfirmationCodeRequest, struct FResendConfirmationCodeResult* ResendConfirmationCodeResult, CognitoIdp_ECognitoIdpError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdp.CognitoIdpClientObject.ResendConfirmationCode");

	UCognitoIdpClientObject_ResendConfirmationCode_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.ResendConfirmationCodeRequest = ResendConfirmationCodeRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (ResendConfirmationCodeResult != nullptr)
		*ResendConfirmationCodeResult = params.ResendConfirmationCodeResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x00560C00
//		Name   -> Function CognitoIdp.CognitoIdpClientObject.ListUsersInGroup
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FListUsersInGroupRequest                    ListUsersInGroupRequest                                    (Parm, NativeAccessSpecifierPublic)
//		struct FListUsersInGroupResult                     ListUsersInGroupResult                                     (Parm, OutParm, NativeAccessSpecifierPublic)
//		CognitoIdp_ECognitoIdpError                        errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdpClientObject::ListUsersInGroup(class UObject* WorldContextObject, bool* Success, const struct FListUsersInGroupRequest& ListUsersInGroupRequest, struct FListUsersInGroupResult* ListUsersInGroupResult, CognitoIdp_ECognitoIdpError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdp.CognitoIdpClientObject.ListUsersInGroup");

	UCognitoIdpClientObject_ListUsersInGroup_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.ListUsersInGroupRequest = ListUsersInGroupRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (ListUsersInGroupResult != nullptr)
		*ListUsersInGroupResult = params.ListUsersInGroupResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x00560830
//		Name   -> Function CognitoIdp.CognitoIdpClientObject.ListUsers
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FListUsersRequest                           ListUsersRequest                                           (Parm, NativeAccessSpecifierPublic)
//		struct FListUsersResult                            ListUsersResult                                            (Parm, OutParm, NativeAccessSpecifierPublic)
//		CognitoIdp_ECognitoIdpError                        errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdpClientObject::ListUsers(class UObject* WorldContextObject, bool* Success, const struct FListUsersRequest& ListUsersRequest, struct FListUsersResult* ListUsersResult, CognitoIdp_ECognitoIdpError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdp.CognitoIdpClientObject.ListUsers");

	UCognitoIdpClientObject_ListUsers_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.ListUsersRequest = ListUsersRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (ListUsersResult != nullptr)
		*ListUsersResult = params.ListUsersResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x00560550
//		Name   -> Function CognitoIdp.CognitoIdpClientObject.ListUserPools
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FListUserPoolsRequest                       ListUserPoolsRequest                                       (Parm, NativeAccessSpecifierPublic)
//		struct FListUserPoolsResult                        ListUserPoolsResult                                        (Parm, OutParm, NativeAccessSpecifierPublic)
//		CognitoIdp_ECognitoIdpError                        errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdpClientObject::ListUserPools(class UObject* WorldContextObject, bool* Success, const struct FListUserPoolsRequest& ListUserPoolsRequest, struct FListUserPoolsResult* ListUserPoolsResult, CognitoIdp_ECognitoIdpError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdp.CognitoIdpClientObject.ListUserPools");

	UCognitoIdpClientObject_ListUserPools_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.ListUserPoolsRequest = ListUserPoolsRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (ListUserPoolsResult != nullptr)
		*ListUserPoolsResult = params.ListUserPoolsResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x00560230
//		Name   -> Function CognitoIdp.CognitoIdpClientObject.ListUserPoolClients
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FListUserPoolClientsRequest                 ListUserPoolClientsRequest                                 (Parm, NativeAccessSpecifierPublic)
//		struct FListUserPoolClientsResult                  ListUserPoolClientsResult                                  (Parm, OutParm, NativeAccessSpecifierPublic)
//		CognitoIdp_ECognitoIdpError                        errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdpClientObject::ListUserPoolClients(class UObject* WorldContextObject, bool* Success, const struct FListUserPoolClientsRequest& ListUserPoolClientsRequest, struct FListUserPoolClientsResult* ListUserPoolClientsResult, CognitoIdp_ECognitoIdpError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdp.CognitoIdpClientObject.ListUserPoolClients");

	UCognitoIdpClientObject_ListUserPoolClients_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.ListUserPoolClientsRequest = ListUserPoolClientsRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (ListUserPoolClientsResult != nullptr)
		*ListUserPoolClientsResult = params.ListUserPoolClientsResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x0055FF10
//		Name   -> Function CognitoIdp.CognitoIdpClientObject.ListUserImportJobs
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FListUserImportJobsRequest                  ListUserImportJobsRequest                                  (Parm, NativeAccessSpecifierPublic)
//		struct FListUserImportJobsResult                   ListUserImportJobsResult                                   (Parm, OutParm, NativeAccessSpecifierPublic)
//		CognitoIdp_ECognitoIdpError                        errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdpClientObject::ListUserImportJobs(class UObject* WorldContextObject, bool* Success, const struct FListUserImportJobsRequest& ListUserImportJobsRequest, struct FListUserImportJobsResult* ListUserImportJobsResult, CognitoIdp_ECognitoIdpError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdp.CognitoIdpClientObject.ListUserImportJobs");

	UCognitoIdpClientObject_ListUserImportJobs_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.ListUserImportJobsRequest = ListUserImportJobsRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (ListUserImportJobsResult != nullptr)
		*ListUserImportJobsResult = params.ListUserImportJobsResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x0055FBB0
//		Name   -> Function CognitoIdp.CognitoIdpClientObject.ListTagsForResource
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FCognitoIdpListTagsForResourceRequest       listTagsForResourceRequest                                 (Parm, NativeAccessSpecifierPublic)
//		struct FCognitoIdpListTagsForResourceResult        listTagsForResourceResult                                  (Parm, OutParm, NativeAccessSpecifierPublic)
//		CognitoIdp_ECognitoIdpError                        errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdpClientObject::ListTagsForResource(class UObject* WorldContextObject, bool* Success, const struct FCognitoIdpListTagsForResourceRequest& listTagsForResourceRequest, struct FCognitoIdpListTagsForResourceResult* listTagsForResourceResult, CognitoIdp_ECognitoIdpError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdp.CognitoIdpClientObject.ListTagsForResource");

	UCognitoIdpClientObject_ListTagsForResource_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.listTagsForResourceRequest = listTagsForResourceRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (listTagsForResourceResult != nullptr)
		*listTagsForResourceResult = params.listTagsForResourceResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x0055F890
//		Name   -> Function CognitoIdp.CognitoIdpClientObject.ListResourceServers
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FListResourceServersRequest                 ListResourceServersRequest                                 (Parm, NativeAccessSpecifierPublic)
//		struct FListResourceServersResult                  ListResourceServersResult                                  (Parm, OutParm, NativeAccessSpecifierPublic)
//		CognitoIdp_ECognitoIdpError                        errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdpClientObject::ListResourceServers(class UObject* WorldContextObject, bool* Success, const struct FListResourceServersRequest& ListResourceServersRequest, struct FListResourceServersResult* ListResourceServersResult, CognitoIdp_ECognitoIdpError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdp.CognitoIdpClientObject.ListResourceServers");

	UCognitoIdpClientObject_ListResourceServers_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.ListResourceServersRequest = ListResourceServersRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (ListResourceServersResult != nullptr)
		*ListResourceServersResult = params.ListResourceServersResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x0055F540
//		Name   -> Function CognitoIdp.CognitoIdpClientObject.ListIdentityProviders
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FListIdentityProvidersRequest               ListIdentityProvidersRequest                               (Parm, NativeAccessSpecifierPublic)
//		struct FListIdentityProvidersResult                ListIdentityProvidersResult                                (Parm, OutParm, NativeAccessSpecifierPublic)
//		CognitoIdp_ECognitoIdpError                        errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdpClientObject::ListIdentityProviders(class UObject* WorldContextObject, bool* Success, const struct FListIdentityProvidersRequest& ListIdentityProvidersRequest, struct FListIdentityProvidersResult* ListIdentityProvidersResult, CognitoIdp_ECognitoIdpError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdp.CognitoIdpClientObject.ListIdentityProviders");

	UCognitoIdpClientObject_ListIdentityProviders_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.ListIdentityProvidersRequest = ListIdentityProvidersRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (ListIdentityProvidersResult != nullptr)
		*ListIdentityProvidersResult = params.ListIdentityProvidersResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x0055F220
//		Name   -> Function CognitoIdp.CognitoIdpClientObject.ListGroups
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FListGroupsRequest                          ListGroupsRequest                                          (Parm, NativeAccessSpecifierPublic)
//		struct FListGroupsResult                           ListGroupsResult                                           (Parm, OutParm, NativeAccessSpecifierPublic)
//		CognitoIdp_ECognitoIdpError                        errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdpClientObject::ListGroups(class UObject* WorldContextObject, bool* Success, const struct FListGroupsRequest& ListGroupsRequest, struct FListGroupsResult* ListGroupsResult, CognitoIdp_ECognitoIdpError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdp.CognitoIdpClientObject.ListGroups");

	UCognitoIdpClientObject_ListGroups_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.ListGroupsRequest = ListGroupsRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (ListGroupsResult != nullptr)
		*ListGroupsResult = params.ListGroupsResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x0055EF00
//		Name   -> Function CognitoIdp.CognitoIdpClientObject.ListDevices
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FListDevicesRequest                         ListDevicesRequest                                         (Parm, NativeAccessSpecifierPublic)
//		struct FListDevicesResult                          ListDevicesResult                                          (Parm, OutParm, NativeAccessSpecifierPublic)
//		CognitoIdp_ECognitoIdpError                        errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdpClientObject::ListDevices(class UObject* WorldContextObject, bool* Success, const struct FListDevicesRequest& ListDevicesRequest, struct FListDevicesResult* ListDevicesResult, CognitoIdp_ECognitoIdpError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdp.CognitoIdpClientObject.ListDevices");

	UCognitoIdpClientObject_ListDevices_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.ListDevicesRequest = ListDevicesRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (ListDevicesResult != nullptr)
		*ListDevicesResult = params.ListDevicesResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x0055EA20
//		Name   -> Function CognitoIdp.CognitoIdpClientObject.InitiateAuth
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FInitiateAuthRequest                        InitiateAuthRequest                                        (Parm, NativeAccessSpecifierPublic)
//		struct FInitiateAuthResult                         InitiateAuthResult                                         (Parm, OutParm, NativeAccessSpecifierPublic)
//		CognitoIdp_ECognitoIdpError                        errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdpClientObject::InitiateAuth(class UObject* WorldContextObject, bool* Success, const struct FInitiateAuthRequest& InitiateAuthRequest, struct FInitiateAuthResult* InitiateAuthResult, CognitoIdp_ECognitoIdpError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdp.CognitoIdpClientObject.InitiateAuth");

	UCognitoIdpClientObject_InitiateAuth_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.InitiateAuthRequest = InitiateAuthRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (InitiateAuthResult != nullptr)
		*InitiateAuthResult = params.InitiateAuthResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x0055E770
//		Name   -> Function CognitoIdp.CognitoIdpClientObject.GlobalSignOut
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FGlobalSignOutRequest                       GlobalSignOutRequest                                       (Parm, NativeAccessSpecifierPublic)
//		struct FGlobalSignOutResult                        GlobalSignOutResult                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		CognitoIdp_ECognitoIdpError                        errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdpClientObject::GlobalSignOut(class UObject* WorldContextObject, bool* Success, const struct FGlobalSignOutRequest& GlobalSignOutRequest, struct FGlobalSignOutResult* GlobalSignOutResult, CognitoIdp_ECognitoIdpError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdp.CognitoIdpClientObject.GlobalSignOut");

	UCognitoIdpClientObject_GlobalSignOut_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.GlobalSignOutRequest = GlobalSignOutRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (GlobalSignOutResult != nullptr)
		*GlobalSignOutResult = params.GlobalSignOutResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x0055E470
//		Name   -> Function CognitoIdp.CognitoIdpClientObject.GetUserPoolMfaConfig
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FGetUserPoolMfaConfigRequest                GetUserPoolMfaConfigRequest                                (Parm, NativeAccessSpecifierPublic)
//		struct FGetUserPoolMfaConfigResult                 GetUserPoolMfaConfigResult                                 (Parm, OutParm, NativeAccessSpecifierPublic)
//		CognitoIdp_ECognitoIdpError                        errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdpClientObject::GetUserPoolMfaConfig(class UObject* WorldContextObject, bool* Success, const struct FGetUserPoolMfaConfigRequest& GetUserPoolMfaConfigRequest, struct FGetUserPoolMfaConfigResult* GetUserPoolMfaConfigResult, CognitoIdp_ECognitoIdpError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdp.CognitoIdpClientObject.GetUserPoolMfaConfig");

	UCognitoIdpClientObject_GetUserPoolMfaConfig_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.GetUserPoolMfaConfigRequest = GetUserPoolMfaConfigRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (GetUserPoolMfaConfigResult != nullptr)
		*GetUserPoolMfaConfigResult = params.GetUserPoolMfaConfigResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x0055E150
//		Name   -> Function CognitoIdp.CognitoIdpClientObject.GetUserAttributeVerificationCode
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FGetUserAttributeVerificationCodeRequest    GetUserAttributeVerificationCodeRequest                    (Parm, NativeAccessSpecifierPublic)
//		struct FGetUserAttributeVerificationCodeResult     GetUserAttributeVerificationCodeResult                     (Parm, OutParm, NativeAccessSpecifierPublic)
//		CognitoIdp_ECognitoIdpError                        errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdpClientObject::GetUserAttributeVerificationCode(class UObject* WorldContextObject, bool* Success, const struct FGetUserAttributeVerificationCodeRequest& GetUserAttributeVerificationCodeRequest, struct FGetUserAttributeVerificationCodeResult* GetUserAttributeVerificationCodeResult, CognitoIdp_ECognitoIdpError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdp.CognitoIdpClientObject.GetUserAttributeVerificationCode");

	UCognitoIdpClientObject_GetUserAttributeVerificationCode_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.GetUserAttributeVerificationCodeRequest = GetUserAttributeVerificationCodeRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (GetUserAttributeVerificationCodeResult != nullptr)
		*GetUserAttributeVerificationCodeResult = params.GetUserAttributeVerificationCodeResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x0055DE00
//		Name   -> Function CognitoIdp.CognitoIdpClientObject.GetUser
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FGetUserRequest                             GetUserRequest                                             (Parm, NativeAccessSpecifierPublic)
//		struct FGetUserResult                              GetUserResult                                              (Parm, OutParm, NativeAccessSpecifierPublic)
//		CognitoIdp_ECognitoIdpError                        errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdpClientObject::GetUser(class UObject* WorldContextObject, bool* Success, const struct FGetUserRequest& GetUserRequest, struct FGetUserResult* GetUserResult, CognitoIdp_ECognitoIdpError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdp.CognitoIdpClientObject.GetUser");

	UCognitoIdpClientObject_GetUser_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.GetUserRequest = GetUserRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (GetUserResult != nullptr)
		*GetUserResult = params.GetUserResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x0055DAC0
//		Name   -> Function CognitoIdp.CognitoIdpClientObject.GetUICustomization
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FGetUICustomizationRequest                  GetUICustomizationRequest                                  (Parm, NativeAccessSpecifierPublic)
//		struct FGetUICustomizationResult                   GetUICustomizationResult                                   (Parm, OutParm, NativeAccessSpecifierPublic)
//		CognitoIdp_ECognitoIdpError                        errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdpClientObject::GetUICustomization(class UObject* WorldContextObject, bool* Success, const struct FGetUICustomizationRequest& GetUICustomizationRequest, struct FGetUICustomizationResult* GetUICustomizationResult, CognitoIdp_ECognitoIdpError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdp.CognitoIdpClientObject.GetUICustomization");

	UCognitoIdpClientObject_GetUICustomization_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.GetUICustomizationRequest = GetUICustomizationRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (GetUICustomizationResult != nullptr)
		*GetUICustomizationResult = params.GetUICustomizationResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x0055D800
//		Name   -> Function CognitoIdp.CognitoIdpClientObject.GetSigningCertificate
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FGetSigningCertificateRequest               GetSigningCertificateRequest                               (Parm, NativeAccessSpecifierPublic)
//		struct FGetSigningCertificateResult                GetSigningCertificateResult                                (Parm, OutParm, NativeAccessSpecifierPublic)
//		CognitoIdp_ECognitoIdpError                        errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdpClientObject::GetSigningCertificate(class UObject* WorldContextObject, bool* Success, const struct FGetSigningCertificateRequest& GetSigningCertificateRequest, struct FGetSigningCertificateResult* GetSigningCertificateResult, CognitoIdp_ECognitoIdpError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdp.CognitoIdpClientObject.GetSigningCertificate");

	UCognitoIdpClientObject_GetSigningCertificate_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.GetSigningCertificateRequest = GetSigningCertificateRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (GetSigningCertificateResult != nullptr)
		*GetSigningCertificateResult = params.GetSigningCertificateResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x004F5420
//		Name   -> Function CognitoIdp.CognitoIdpClientObject.GetServiceClientName
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UCognitoIdpClientObject::GetServiceClientName()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdp.CognitoIdpClientObject.GetServiceClientName");

	UCognitoIdpClientObject_GetServiceClientName_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0055D4D0
//		Name   -> Function CognitoIdp.CognitoIdpClientObject.GetIdentityProviderByIdentifier
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FGetIdentityProviderByIdentifierRequest     GetIdentityProviderByIdentifierRequest                     (Parm, NativeAccessSpecifierPublic)
//		struct FGetIdentityProviderByIdentifierResult      GetIdentityProviderByIdentifierResult                      (Parm, OutParm, NativeAccessSpecifierPublic)
//		CognitoIdp_ECognitoIdpError                        errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdpClientObject::GetIdentityProviderByIdentifier(class UObject* WorldContextObject, bool* Success, const struct FGetIdentityProviderByIdentifierRequest& GetIdentityProviderByIdentifierRequest, struct FGetIdentityProviderByIdentifierResult* GetIdentityProviderByIdentifierResult, CognitoIdp_ECognitoIdpError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdp.CognitoIdpClientObject.GetIdentityProviderByIdentifier");

	UCognitoIdpClientObject_GetIdentityProviderByIdentifier_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.GetIdentityProviderByIdentifierRequest = GetIdentityProviderByIdentifierRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (GetIdentityProviderByIdentifierResult != nullptr)
		*GetIdentityProviderByIdentifierResult = params.GetIdentityProviderByIdentifierResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x0055D160
//		Name   -> Function CognitoIdp.CognitoIdpClientObject.GetGroup
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FGetGroupRequest                            GetGroupRequest                                            (Parm, NativeAccessSpecifierPublic)
//		struct FGetGroupResult                             GetGroupResult                                             (Parm, OutParm, NativeAccessSpecifierPublic)
//		CognitoIdp_ECognitoIdpError                        errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdpClientObject::GetGroup(class UObject* WorldContextObject, bool* Success, const struct FGetGroupRequest& GetGroupRequest, struct FGetGroupResult* GetGroupResult, CognitoIdp_ECognitoIdpError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdp.CognitoIdpClientObject.GetGroup");

	UCognitoIdpClientObject_GetGroup_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.GetGroupRequest = GetGroupRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (GetGroupResult != nullptr)
		*GetGroupResult = params.GetGroupResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x0055CE40
//		Name   -> Function CognitoIdp.CognitoIdpClientObject.GetDevice
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FGetDeviceRequest                           GetDeviceRequest                                           (Parm, NativeAccessSpecifierPublic)
//		struct FGetDeviceResult                            GetDeviceResult                                            (Parm, OutParm, NativeAccessSpecifierPublic)
//		CognitoIdp_ECognitoIdpError                        errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdpClientObject::GetDevice(class UObject* WorldContextObject, bool* Success, const struct FGetDeviceRequest& GetDeviceRequest, struct FGetDeviceResult* GetDeviceResult, CognitoIdp_ECognitoIdpError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdp.CognitoIdpClientObject.GetDevice");

	UCognitoIdpClientObject_GetDevice_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.GetDeviceRequest = GetDeviceRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (GetDeviceResult != nullptr)
		*GetDeviceResult = params.GetDeviceResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x0055CB30
//		Name   -> Function CognitoIdp.CognitoIdpClientObject.GetCSVHeader
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FGetCSVHeaderRequest                        GetCSVHeaderRequest                                        (Parm, NativeAccessSpecifierPublic)
//		struct FGetCSVHeaderResult                         GetCSVHeaderResult                                         (Parm, OutParm, NativeAccessSpecifierPublic)
//		CognitoIdp_ECognitoIdpError                        errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdpClientObject::GetCSVHeader(class UObject* WorldContextObject, bool* Success, const struct FGetCSVHeaderRequest& GetCSVHeaderRequest, struct FGetCSVHeaderResult* GetCSVHeaderResult, CognitoIdp_ECognitoIdpError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdp.CognitoIdpClientObject.GetCSVHeader");

	UCognitoIdpClientObject_GetCSVHeader_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.GetCSVHeaderRequest = GetCSVHeaderRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (GetCSVHeaderResult != nullptr)
		*GetCSVHeaderResult = params.GetCSVHeaderResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x0055C780
//		Name   -> Function CognitoIdp.CognitoIdpClientObject.ForgotPassword
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FForgotPasswordRequest                      ForgotPasswordRequest                                      (Parm, NativeAccessSpecifierPublic)
//		struct FForgotPasswordResult                       ForgotPasswordResult                                       (Parm, OutParm, NativeAccessSpecifierPublic)
//		CognitoIdp_ECognitoIdpError                        errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdpClientObject::ForgotPassword(class UObject* WorldContextObject, bool* Success, const struct FForgotPasswordRequest& ForgotPasswordRequest, struct FForgotPasswordResult* ForgotPasswordResult, CognitoIdp_ECognitoIdpError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdp.CognitoIdpClientObject.ForgotPassword");

	UCognitoIdpClientObject_ForgotPassword_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.ForgotPasswordRequest = ForgotPasswordRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (ForgotPasswordResult != nullptr)
		*ForgotPasswordResult = params.ForgotPasswordResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x0055C4F0
//		Name   -> Function CognitoIdp.CognitoIdpClientObject.ForgetDevice
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FForgetDeviceRequest                        ForgetDeviceRequest                                        (Parm, NativeAccessSpecifierPublic)
//		CognitoIdp_ECognitoIdpError                        errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdpClientObject::ForgetDevice(class UObject* WorldContextObject, bool* Success, const struct FForgetDeviceRequest& ForgetDeviceRequest, CognitoIdp_ECognitoIdpError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdp.CognitoIdpClientObject.ForgetDevice");

	UCognitoIdpClientObject_ForgetDevice_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.ForgetDeviceRequest = ForgetDeviceRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x0055C1D0
//		Name   -> Function CognitoIdp.CognitoIdpClientObject.DescribeUserPoolDomain
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FDescribeUserPoolDomainRequest              DescribeUserPoolDomainRequest                              (Parm, NativeAccessSpecifierPublic)
//		struct FDescribeUserPoolDomainResult               DescribeUserPoolDomainResult                               (Parm, OutParm, NativeAccessSpecifierPublic)
//		CognitoIdp_ECognitoIdpError                        errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdpClientObject::DescribeUserPoolDomain(class UObject* WorldContextObject, bool* Success, const struct FDescribeUserPoolDomainRequest& DescribeUserPoolDomainRequest, struct FDescribeUserPoolDomainResult* DescribeUserPoolDomainResult, CognitoIdp_ECognitoIdpError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdp.CognitoIdpClientObject.DescribeUserPoolDomain");

	UCognitoIdpClientObject_DescribeUserPoolDomain_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.DescribeUserPoolDomainRequest = DescribeUserPoolDomainRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (DescribeUserPoolDomainResult != nullptr)
		*DescribeUserPoolDomainResult = params.DescribeUserPoolDomainResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x0055BEB0
//		Name   -> Function CognitoIdp.CognitoIdpClientObject.DescribeUserPoolClient
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FDescribeUserPoolClientRequest              DescribeUserPoolClientRequest                              (Parm, NativeAccessSpecifierPublic)
//		struct FDescribeUserPoolClientResult               DescribeUserPoolClientResult                               (Parm, OutParm, NativeAccessSpecifierPublic)
//		CognitoIdp_ECognitoIdpError                        errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdpClientObject::DescribeUserPoolClient(class UObject* WorldContextObject, bool* Success, const struct FDescribeUserPoolClientRequest& DescribeUserPoolClientRequest, struct FDescribeUserPoolClientResult* DescribeUserPoolClientResult, CognitoIdp_ECognitoIdpError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdp.CognitoIdpClientObject.DescribeUserPoolClient");

	UCognitoIdpClientObject_DescribeUserPoolClient_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.DescribeUserPoolClientRequest = DescribeUserPoolClientRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (DescribeUserPoolClientResult != nullptr)
		*DescribeUserPoolClientResult = params.DescribeUserPoolClientResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x0055BBB0
//		Name   -> Function CognitoIdp.CognitoIdpClientObject.DescribeUserPool
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FDescribeUserPoolRequest                    DescribeUserPoolRequest                                    (Parm, NativeAccessSpecifierPublic)
//		struct FDescribeUserPoolResult                     DescribeUserPoolResult                                     (Parm, OutParm, NativeAccessSpecifierPublic)
//		CognitoIdp_ECognitoIdpError                        errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdpClientObject::DescribeUserPool(class UObject* WorldContextObject, bool* Success, const struct FDescribeUserPoolRequest& DescribeUserPoolRequest, struct FDescribeUserPoolResult* DescribeUserPoolResult, CognitoIdp_ECognitoIdpError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdp.CognitoIdpClientObject.DescribeUserPool");

	UCognitoIdpClientObject_DescribeUserPool_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.DescribeUserPoolRequest = DescribeUserPoolRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (DescribeUserPoolResult != nullptr)
		*DescribeUserPoolResult = params.DescribeUserPoolResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x0055B870
//		Name   -> Function CognitoIdp.CognitoIdpClientObject.DescribeUserImportJob
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FDescribeUserImportJobRequest               DescribeUserImportJobRequest                               (Parm, NativeAccessSpecifierPublic)
//		struct FDescribeUserImportJobResult                DescribeUserImportJobResult                                (Parm, OutParm, NativeAccessSpecifierPublic)
//		CognitoIdp_ECognitoIdpError                        errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdpClientObject::DescribeUserImportJob(class UObject* WorldContextObject, bool* Success, const struct FDescribeUserImportJobRequest& DescribeUserImportJobRequest, struct FDescribeUserImportJobResult* DescribeUserImportJobResult, CognitoIdp_ECognitoIdpError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdp.CognitoIdpClientObject.DescribeUserImportJob");

	UCognitoIdpClientObject_DescribeUserImportJob_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.DescribeUserImportJobRequest = DescribeUserImportJobRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (DescribeUserImportJobResult != nullptr)
		*DescribeUserImportJobResult = params.DescribeUserImportJobResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x0055B510
//		Name   -> Function CognitoIdp.CognitoIdpClientObject.DescribeRiskConfiguration
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FDescribeRiskConfigurationRequest           DescribeRiskConfigurationRequest                           (Parm, NativeAccessSpecifierPublic)
//		struct FDescribeRiskConfigurationResult            DescribeRiskConfigurationResult                            (Parm, OutParm, NativeAccessSpecifierPublic)
//		CognitoIdp_ECognitoIdpError                        errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdpClientObject::DescribeRiskConfiguration(class UObject* WorldContextObject, bool* Success, const struct FDescribeRiskConfigurationRequest& DescribeRiskConfigurationRequest, struct FDescribeRiskConfigurationResult* DescribeRiskConfigurationResult, CognitoIdp_ECognitoIdpError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdp.CognitoIdpClientObject.DescribeRiskConfiguration");

	UCognitoIdpClientObject_DescribeRiskConfiguration_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.DescribeRiskConfigurationRequest = DescribeRiskConfigurationRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (DescribeRiskConfigurationResult != nullptr)
		*DescribeRiskConfigurationResult = params.DescribeRiskConfigurationResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x0055B1C0
//		Name   -> Function CognitoIdp.CognitoIdpClientObject.DescribeResourceServer
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FDescribeResourceServerRequest              DescribeResourceServerRequest                              (Parm, NativeAccessSpecifierPublic)
//		struct FDescribeResourceServerResult               DescribeResourceServerResult                               (Parm, OutParm, NativeAccessSpecifierPublic)
//		CognitoIdp_ECognitoIdpError                        errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdpClientObject::DescribeResourceServer(class UObject* WorldContextObject, bool* Success, const struct FDescribeResourceServerRequest& DescribeResourceServerRequest, struct FDescribeResourceServerResult* DescribeResourceServerResult, CognitoIdp_ECognitoIdpError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdp.CognitoIdpClientObject.DescribeResourceServer");

	UCognitoIdpClientObject_DescribeResourceServer_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.DescribeResourceServerRequest = DescribeResourceServerRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (DescribeResourceServerResult != nullptr)
		*DescribeResourceServerResult = params.DescribeResourceServerResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x0055AE90
//		Name   -> Function CognitoIdp.CognitoIdpClientObject.DescribeIdentityProvider
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FDescribeIdentityProviderRequest            DescribeIdentityProviderRequest                            (Parm, NativeAccessSpecifierPublic)
//		struct FDescribeIdentityProviderResult             DescribeIdentityProviderResult                             (Parm, OutParm, NativeAccessSpecifierPublic)
//		CognitoIdp_ECognitoIdpError                        errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdpClientObject::DescribeIdentityProvider(class UObject* WorldContextObject, bool* Success, const struct FDescribeIdentityProviderRequest& DescribeIdentityProviderRequest, struct FDescribeIdentityProviderResult* DescribeIdentityProviderResult, CognitoIdp_ECognitoIdpError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdp.CognitoIdpClientObject.DescribeIdentityProvider");

	UCognitoIdpClientObject_DescribeIdentityProvider_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.DescribeIdentityProviderRequest = DescribeIdentityProviderRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (DescribeIdentityProviderResult != nullptr)
		*DescribeIdentityProviderResult = params.DescribeIdentityProviderResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x0055ABB0
//		Name   -> Function CognitoIdp.CognitoIdpClientObject.DeleteUserPoolDomain
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FDeleteUserPoolDomainRequest                DeleteUserPoolDomainRequest                                (Parm, NativeAccessSpecifierPublic)
//		struct FDeleteUserPoolDomainResult                 DeleteUserPoolDomainResult                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		CognitoIdp_ECognitoIdpError                        errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdpClientObject::DeleteUserPoolDomain(class UObject* WorldContextObject, bool* Success, const struct FDeleteUserPoolDomainRequest& DeleteUserPoolDomainRequest, struct FDeleteUserPoolDomainResult* DeleteUserPoolDomainResult, CognitoIdp_ECognitoIdpError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdp.CognitoIdpClientObject.DeleteUserPoolDomain");

	UCognitoIdpClientObject_DeleteUserPoolDomain_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.DeleteUserPoolDomainRequest = DeleteUserPoolDomainRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (DeleteUserPoolDomainResult != nullptr)
		*DeleteUserPoolDomainResult = params.DeleteUserPoolDomainResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x0055A920
//		Name   -> Function CognitoIdp.CognitoIdpClientObject.DeleteUserPoolClient
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FDeleteUserPoolClientRequest                DeleteUserPoolClientRequest                                (Parm, NativeAccessSpecifierPublic)
//		CognitoIdp_ECognitoIdpError                        errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdpClientObject::DeleteUserPoolClient(class UObject* WorldContextObject, bool* Success, const struct FDeleteUserPoolClientRequest& DeleteUserPoolClientRequest, CognitoIdp_ECognitoIdpError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdp.CognitoIdpClientObject.DeleteUserPoolClient");

	UCognitoIdpClientObject_DeleteUserPoolClient_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.DeleteUserPoolClientRequest = DeleteUserPoolClientRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x0055A6C0
//		Name   -> Function CognitoIdp.CognitoIdpClientObject.DeleteUserPool
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FDeleteUserPoolRequest                      DeleteUserPoolRequest                                      (Parm, NativeAccessSpecifierPublic)
//		CognitoIdp_ECognitoIdpError                        errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdpClientObject::DeleteUserPool(class UObject* WorldContextObject, bool* Success, const struct FDeleteUserPoolRequest& DeleteUserPoolRequest, CognitoIdp_ECognitoIdpError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdp.CognitoIdpClientObject.DeleteUserPool");

	UCognitoIdpClientObject_DeleteUserPool_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.DeleteUserPoolRequest = DeleteUserPoolRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x0055A390
//		Name   -> Function CognitoIdp.CognitoIdpClientObject.DeleteUserAttributes
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FDeleteUserAttributesRequest                DeleteUserAttributesRequest                                (Parm, NativeAccessSpecifierPublic)
//		struct FDeleteUserAttributesResult                 DeleteUserAttributesResult                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		CognitoIdp_ECognitoIdpError                        errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdpClientObject::DeleteUserAttributes(class UObject* WorldContextObject, bool* Success, const struct FDeleteUserAttributesRequest& DeleteUserAttributesRequest, struct FDeleteUserAttributesResult* DeleteUserAttributesResult, CognitoIdp_ECognitoIdpError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdp.CognitoIdpClientObject.DeleteUserAttributes");

	UCognitoIdpClientObject_DeleteUserAttributes_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.DeleteUserAttributesRequest = DeleteUserAttributesRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (DeleteUserAttributesResult != nullptr)
		*DeleteUserAttributesResult = params.DeleteUserAttributesResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x0055A130
//		Name   -> Function CognitoIdp.CognitoIdpClientObject.DeleteUser
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FDeleteUserRequest                          DeleteUserRequest                                          (Parm, NativeAccessSpecifierPublic)
//		CognitoIdp_ECognitoIdpError                        errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdpClientObject::DeleteUser(class UObject* WorldContextObject, bool* Success, const struct FDeleteUserRequest& DeleteUserRequest, CognitoIdp_ECognitoIdpError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdp.CognitoIdpClientObject.DeleteUser");

	UCognitoIdpClientObject_DeleteUser_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.DeleteUserRequest = DeleteUserRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x00559EA0
//		Name   -> Function CognitoIdp.CognitoIdpClientObject.DeleteResourceServer
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FDeleteResourceServerRequest                DeleteResourceServerRequest                                (Parm, NativeAccessSpecifierPublic)
//		CognitoIdp_ECognitoIdpError                        errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdpClientObject::DeleteResourceServer(class UObject* WorldContextObject, bool* Success, const struct FDeleteResourceServerRequest& DeleteResourceServerRequest, CognitoIdp_ECognitoIdpError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdp.CognitoIdpClientObject.DeleteResourceServer");

	UCognitoIdpClientObject_DeleteResourceServer_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.DeleteResourceServerRequest = DeleteResourceServerRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x00559C10
//		Name   -> Function CognitoIdp.CognitoIdpClientObject.DeleteIdentityProvider
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FDeleteIdentityProviderRequest              DeleteIdentityProviderRequest                              (Parm, NativeAccessSpecifierPublic)
//		CognitoIdp_ECognitoIdpError                        errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdpClientObject::DeleteIdentityProvider(class UObject* WorldContextObject, bool* Success, const struct FDeleteIdentityProviderRequest& DeleteIdentityProviderRequest, CognitoIdp_ECognitoIdpError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdp.CognitoIdpClientObject.DeleteIdentityProvider");

	UCognitoIdpClientObject_DeleteIdentityProvider_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.DeleteIdentityProviderRequest = DeleteIdentityProviderRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x00559980
//		Name   -> Function CognitoIdp.CognitoIdpClientObject.DeleteGroup
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FDeleteGroupRequest                         DeleteGroupRequest                                         (Parm, NativeAccessSpecifierPublic)
//		CognitoIdp_ECognitoIdpError                        errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdpClientObject::DeleteGroup(class UObject* WorldContextObject, bool* Success, const struct FDeleteGroupRequest& DeleteGroupRequest, CognitoIdp_ECognitoIdpError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdp.CognitoIdpClientObject.DeleteGroup");

	UCognitoIdpClientObject_DeleteGroup_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.DeleteGroupRequest = DeleteGroupRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x00559650
//		Name   -> Function CognitoIdp.CognitoIdpClientObject.CreateUserPoolDomain
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FCreateUserPoolDomainRequest                CreateUserPoolDomainRequest                                (Parm, NativeAccessSpecifierPublic)
//		struct FCreateUserPoolDomainResult                 CreateUserPoolDomainResult                                 (Parm, OutParm, NativeAccessSpecifierPublic)
//		CognitoIdp_ECognitoIdpError                        errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdpClientObject::CreateUserPoolDomain(class UObject* WorldContextObject, bool* Success, const struct FCreateUserPoolDomainRequest& CreateUserPoolDomainRequest, struct FCreateUserPoolDomainResult* CreateUserPoolDomainResult, CognitoIdp_ECognitoIdpError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdp.CognitoIdpClientObject.CreateUserPoolDomain");

	UCognitoIdpClientObject_CreateUserPoolDomain_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.CreateUserPoolDomainRequest = CreateUserPoolDomainRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (CreateUserPoolDomainResult != nullptr)
		*CreateUserPoolDomainResult = params.CreateUserPoolDomainResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x005592E0
//		Name   -> Function CognitoIdp.CognitoIdpClientObject.CreateUserPoolClient
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FCreateUserPoolClientRequest                CreateUserPoolClientRequest                                (Parm, NativeAccessSpecifierPublic)
//		struct FCreateUserPoolClientResult                 CreateUserPoolClientResult                                 (Parm, OutParm, NativeAccessSpecifierPublic)
//		CognitoIdp_ECognitoIdpError                        errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdpClientObject::CreateUserPoolClient(class UObject* WorldContextObject, bool* Success, const struct FCreateUserPoolClientRequest& CreateUserPoolClientRequest, struct FCreateUserPoolClientResult* CreateUserPoolClientResult, CognitoIdp_ECognitoIdpError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdp.CognitoIdpClientObject.CreateUserPoolClient");

	UCognitoIdpClientObject_CreateUserPoolClient_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.CreateUserPoolClientRequest = CreateUserPoolClientRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (CreateUserPoolClientResult != nullptr)
		*CreateUserPoolClientResult = params.CreateUserPoolClientResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x00558FC0
//		Name   -> Function CognitoIdp.CognitoIdpClientObject.CreateUserPool
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FCreateUserPoolRequest                      CreateUserPoolRequest                                      (Parm, NativeAccessSpecifierPublic)
//		struct FCreateUserPoolResult                       CreateUserPoolResult                                       (Parm, OutParm, NativeAccessSpecifierPublic)
//		CognitoIdp_ECognitoIdpError                        errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdpClientObject::CreateUserPool(class UObject* WorldContextObject, bool* Success, const struct FCreateUserPoolRequest& CreateUserPoolRequest, struct FCreateUserPoolResult* CreateUserPoolResult, CognitoIdp_ECognitoIdpError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdp.CognitoIdpClientObject.CreateUserPool");

	UCognitoIdpClientObject_CreateUserPool_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.CreateUserPoolRequest = CreateUserPoolRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (CreateUserPoolResult != nullptr)
		*CreateUserPoolResult = params.CreateUserPoolResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x00558C50
//		Name   -> Function CognitoIdp.CognitoIdpClientObject.CreateUserImportJob
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FCreateUserImportJobRequest                 CreateUserImportJobRequest                                 (Parm, NativeAccessSpecifierPublic)
//		struct FCreateUserImportJobResult                  CreateUserImportJobResult                                  (Parm, OutParm, NativeAccessSpecifierPublic)
//		CognitoIdp_ECognitoIdpError                        errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdpClientObject::CreateUserImportJob(class UObject* WorldContextObject, bool* Success, const struct FCreateUserImportJobRequest& CreateUserImportJobRequest, struct FCreateUserImportJobResult* CreateUserImportJobResult, CognitoIdp_ECognitoIdpError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdp.CognitoIdpClientObject.CreateUserImportJob");

	UCognitoIdpClientObject_CreateUserImportJob_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.CreateUserImportJobRequest = CreateUserImportJobRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (CreateUserImportJobResult != nullptr)
		*CreateUserImportJobResult = params.CreateUserImportJobResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x00558850
//		Name   -> Function CognitoIdp.CognitoIdpClientObject.CreateResourceServer
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FCreateResourceServerRequest                CreateResourceServerRequest                                (Parm, NativeAccessSpecifierPublic)
//		struct FCreateResourceServerResult                 CreateResourceServerResult                                 (Parm, OutParm, NativeAccessSpecifierPublic)
//		CognitoIdp_ECognitoIdpError                        errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdpClientObject::CreateResourceServer(class UObject* WorldContextObject, bool* Success, const struct FCreateResourceServerRequest& CreateResourceServerRequest, struct FCreateResourceServerResult* CreateResourceServerResult, CognitoIdp_ECognitoIdpError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdp.CognitoIdpClientObject.CreateResourceServer");

	UCognitoIdpClientObject_CreateResourceServer_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.CreateResourceServerRequest = CreateResourceServerRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (CreateResourceServerResult != nullptr)
		*CreateResourceServerResult = params.CreateResourceServerResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x00558480
//		Name   -> Function CognitoIdp.CognitoIdpClientObject.CreateIdentityProvider
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FCreateIdentityProviderRequest              CreateIdentityProviderRequest                              (Parm, NativeAccessSpecifierPublic)
//		struct FCreateIdentityProviderResult               CreateIdentityProviderResult                               (Parm, OutParm, NativeAccessSpecifierPublic)
//		CognitoIdp_ECognitoIdpError                        errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdpClientObject::CreateIdentityProvider(class UObject* WorldContextObject, bool* Success, const struct FCreateIdentityProviderRequest& CreateIdentityProviderRequest, struct FCreateIdentityProviderResult* CreateIdentityProviderResult, CognitoIdp_ECognitoIdpError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdp.CognitoIdpClientObject.CreateIdentityProvider");

	UCognitoIdpClientObject_CreateIdentityProvider_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.CreateIdentityProviderRequest = CreateIdentityProviderRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (CreateIdentityProviderResult != nullptr)
		*CreateIdentityProviderResult = params.CreateIdentityProviderResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x005580C0
//		Name   -> Function CognitoIdp.CognitoIdpClientObject.CreateGroup
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FCreateGroupRequest                         CreateGroupRequest                                         (Parm, NativeAccessSpecifierPublic)
//		struct FCreateGroupResult                          CreateGroupResult                                          (Parm, OutParm, NativeAccessSpecifierPublic)
//		CognitoIdp_ECognitoIdpError                        errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdpClientObject::CreateGroup(class UObject* WorldContextObject, bool* Success, const struct FCreateGroupRequest& CreateGroupRequest, struct FCreateGroupResult* CreateGroupResult, CognitoIdp_ECognitoIdpError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdp.CognitoIdpClientObject.CreateGroup");

	UCognitoIdpClientObject_CreateGroup_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.CreateGroupRequest = CreateGroupRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (CreateGroupResult != nullptr)
		*CreateGroupResult = params.CreateGroupResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x00557EE0
//		Name   -> Function CognitoIdp.CognitoIdpClientObject.CreateCognitoIdpObject
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FAWSCredentials                             credentials                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FAWSClientConfiguration                     clientConfiguration                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		class UCognitoIdpClientObject*                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCognitoIdpClientObject* UCognitoIdpClientObject::STATIC_CreateCognitoIdpObject(const struct FAWSCredentials& credentials, const struct FAWSClientConfiguration& clientConfiguration)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdp.CognitoIdpClientObject.CreateCognitoIdpObject");

	UCognitoIdpClientObject_CreateCognitoIdpObject_Params params {};
	params.credentials = credentials;
	params.clientConfiguration = clientConfiguration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00557B30
//		Name   -> Function CognitoIdp.CognitoIdpClientObject.ConfirmSignUp
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FConfirmSignUpRequest                       ConfirmSignUpRequest                                       (Parm, NativeAccessSpecifierPublic)
//		struct FConfirmSignUpResult                        ConfirmSignUpResult                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		CognitoIdp_ECognitoIdpError                        errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdpClientObject::ConfirmSignUp(class UObject* WorldContextObject, bool* Success, const struct FConfirmSignUpRequest& ConfirmSignUpRequest, struct FConfirmSignUpResult* ConfirmSignUpResult, CognitoIdp_ECognitoIdpError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdp.CognitoIdpClientObject.ConfirmSignUp");

	UCognitoIdpClientObject_ConfirmSignUp_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.ConfirmSignUpRequest = ConfirmSignUpRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (ConfirmSignUpResult != nullptr)
		*ConfirmSignUpResult = params.ConfirmSignUpResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x00557760
//		Name   -> Function CognitoIdp.CognitoIdpClientObject.ConfirmForgotPassword
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FConfirmForgotPasswordRequest               ConfirmForgotPasswordRequest                               (Parm, NativeAccessSpecifierPublic)
//		struct FConfirmForgotPasswordResult                ConfirmForgotPasswordResult                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		CognitoIdp_ECognitoIdpError                        errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdpClientObject::ConfirmForgotPassword(class UObject* WorldContextObject, bool* Success, const struct FConfirmForgotPasswordRequest& ConfirmForgotPasswordRequest, struct FConfirmForgotPasswordResult* ConfirmForgotPasswordResult, CognitoIdp_ECognitoIdpError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdp.CognitoIdpClientObject.ConfirmForgotPassword");

	UCognitoIdpClientObject_ConfirmForgotPassword_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.ConfirmForgotPasswordRequest = ConfirmForgotPasswordRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (ConfirmForgotPasswordResult != nullptr)
		*ConfirmForgotPasswordResult = params.ConfirmForgotPasswordResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x005573E0
//		Name   -> Function CognitoIdp.CognitoIdpClientObject.ConfirmDevice
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FConfirmDeviceRequest                       ConfirmDeviceRequest                                       (Parm, NativeAccessSpecifierPublic)
//		struct FConfirmDeviceResult                        ConfirmDeviceResult                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		CognitoIdp_ECognitoIdpError                        errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdpClientObject::ConfirmDevice(class UObject* WorldContextObject, bool* Success, const struct FConfirmDeviceRequest& ConfirmDeviceRequest, struct FConfirmDeviceResult* ConfirmDeviceResult, CognitoIdp_ECognitoIdpError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdp.CognitoIdpClientObject.ConfirmDevice");

	UCognitoIdpClientObject_ConfirmDevice_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.ConfirmDeviceRequest = ConfirmDeviceRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (ConfirmDeviceResult != nullptr)
		*ConfirmDeviceResult = params.ConfirmDeviceResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x005570C0
//		Name   -> Function CognitoIdp.CognitoIdpClientObject.ChangePassword
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FChangePasswordRequest                      ChangePasswordRequest                                      (Parm, NativeAccessSpecifierPublic)
//		struct FChangePasswordResult                       ChangePasswordResult                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		CognitoIdp_ECognitoIdpError                        errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdpClientObject::ChangePassword(class UObject* WorldContextObject, bool* Success, const struct FChangePasswordRequest& ChangePasswordRequest, struct FChangePasswordResult* ChangePasswordResult, CognitoIdp_ECognitoIdpError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdp.CognitoIdpClientObject.ChangePassword");

	UCognitoIdpClientObject_ChangePassword_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.ChangePasswordRequest = ChangePasswordRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (ChangePasswordResult != nullptr)
		*ChangePasswordResult = params.ChangePasswordResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x00556DA0
//		Name   -> Function CognitoIdp.CognitoIdpClientObject.AssociateSoftwareToken
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FAssociateSoftwareTokenRequest              AssociateSoftwareTokenRequest                              (Parm, NativeAccessSpecifierPublic)
//		struct FAssociateSoftwareTokenResult               AssociateSoftwareTokenResult                               (Parm, OutParm, NativeAccessSpecifierPublic)
//		CognitoIdp_ECognitoIdpError                        errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdpClientObject::AssociateSoftwareToken(class UObject* WorldContextObject, bool* Success, const struct FAssociateSoftwareTokenRequest& AssociateSoftwareTokenRequest, struct FAssociateSoftwareTokenResult* AssociateSoftwareTokenResult, CognitoIdp_ECognitoIdpError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdp.CognitoIdpClientObject.AssociateSoftwareToken");

	UCognitoIdpClientObject_AssociateSoftwareToken_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.AssociateSoftwareTokenRequest = AssociateSoftwareTokenRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (AssociateSoftwareTokenResult != nullptr)
		*AssociateSoftwareTokenResult = params.AssociateSoftwareTokenResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x00556AC0
//		Name   -> Function CognitoIdp.CognitoIdpClientObject.AdminUserGlobalSignOut
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FAdminUserGlobalSignOutRequest              AdminUserGlobalSignOutRequest                              (Parm, NativeAccessSpecifierPublic)
//		struct FAdminUserGlobalSignOutResult               AdminUserGlobalSignOutResult                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		CognitoIdp_ECognitoIdpError                        errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdpClientObject::AdminUserGlobalSignOut(class UObject* WorldContextObject, bool* Success, const struct FAdminUserGlobalSignOutRequest& AdminUserGlobalSignOutRequest, struct FAdminUserGlobalSignOutResult* AdminUserGlobalSignOutResult, CognitoIdp_ECognitoIdpError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdp.CognitoIdpClientObject.AdminUserGlobalSignOut");

	UCognitoIdpClientObject_AdminUserGlobalSignOut_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.AdminUserGlobalSignOutRequest = AdminUserGlobalSignOutRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (AdminUserGlobalSignOutResult != nullptr)
		*AdminUserGlobalSignOutResult = params.AdminUserGlobalSignOutResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x00556750
//		Name   -> Function CognitoIdp.CognitoIdpClientObject.AdminUpdateUserAttributes
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FAdminUpdateUserAttributesRequest           AdminUpdateUserAttributesRequest                           (Parm, NativeAccessSpecifierPublic)
//		struct FAdminUpdateUserAttributesResult            AdminUpdateUserAttributesResult                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		CognitoIdp_ECognitoIdpError                        errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdpClientObject::AdminUpdateUserAttributes(class UObject* WorldContextObject, bool* Success, const struct FAdminUpdateUserAttributesRequest& AdminUpdateUserAttributesRequest, struct FAdminUpdateUserAttributesResult* AdminUpdateUserAttributesResult, CognitoIdp_ECognitoIdpError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdp.CognitoIdpClientObject.AdminUpdateUserAttributes");

	UCognitoIdpClientObject_AdminUpdateUserAttributes_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.AdminUpdateUserAttributesRequest = AdminUpdateUserAttributesRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (AdminUpdateUserAttributesResult != nullptr)
		*AdminUpdateUserAttributesResult = params.AdminUpdateUserAttributesResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x00556430
//		Name   -> Function CognitoIdp.CognitoIdpClientObject.AdminUpdateDeviceStatus
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FAdminUpdateDeviceStatusRequest             AdminUpdateDeviceStatusRequest                             (Parm, NativeAccessSpecifierPublic)
//		struct FAdminUpdateDeviceStatusResult              AdminUpdateDeviceStatusResult                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		CognitoIdp_ECognitoIdpError                        errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdpClientObject::AdminUpdateDeviceStatus(class UObject* WorldContextObject, bool* Success, const struct FAdminUpdateDeviceStatusRequest& AdminUpdateDeviceStatusRequest, struct FAdminUpdateDeviceStatusResult* AdminUpdateDeviceStatusResult, CognitoIdp_ECognitoIdpError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdp.CognitoIdpClientObject.AdminUpdateDeviceStatus");

	UCognitoIdpClientObject_AdminUpdateDeviceStatus_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.AdminUpdateDeviceStatusRequest = AdminUpdateDeviceStatusRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (AdminUpdateDeviceStatusResult != nullptr)
		*AdminUpdateDeviceStatusResult = params.AdminUpdateDeviceStatusResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x00556110
//		Name   -> Function CognitoIdp.CognitoIdpClientObject.AdminUpdateAuthEventFeedback
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FAdminUpdateAuthEventFeedbackRequest        AdminUpdateAuthEventFeedbackRequest                        (Parm, NativeAccessSpecifierPublic)
//		struct FAdminUpdateAuthEventFeedbackResult         AdminUpdateAuthEventFeedbackResult                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		CognitoIdp_ECognitoIdpError                        errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdpClientObject::AdminUpdateAuthEventFeedback(class UObject* WorldContextObject, bool* Success, const struct FAdminUpdateAuthEventFeedbackRequest& AdminUpdateAuthEventFeedbackRequest, struct FAdminUpdateAuthEventFeedbackResult* AdminUpdateAuthEventFeedbackResult, CognitoIdp_ECognitoIdpError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdp.CognitoIdpClientObject.AdminUpdateAuthEventFeedback");

	UCognitoIdpClientObject_AdminUpdateAuthEventFeedback_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.AdminUpdateAuthEventFeedbackRequest = AdminUpdateAuthEventFeedbackRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (AdminUpdateAuthEventFeedbackResult != nullptr)
		*AdminUpdateAuthEventFeedbackResult = params.AdminUpdateAuthEventFeedbackResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x00555DA0
//		Name   -> Function CognitoIdp.CognitoIdpClientObject.AdminSetUserSettings
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FAdminSetUserSettingsRequest                AdminSetUserSettingsRequest                                (Parm, NativeAccessSpecifierPublic)
//		struct FAdminSetUserSettingsResult                 AdminSetUserSettingsResult                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		CognitoIdp_ECognitoIdpError                        errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdpClientObject::AdminSetUserSettings(class UObject* WorldContextObject, bool* Success, const struct FAdminSetUserSettingsRequest& AdminSetUserSettingsRequest, struct FAdminSetUserSettingsResult* AdminSetUserSettingsResult, CognitoIdp_ECognitoIdpError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdp.CognitoIdpClientObject.AdminSetUserSettings");

	UCognitoIdpClientObject_AdminSetUserSettings_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.AdminSetUserSettingsRequest = AdminSetUserSettingsRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (AdminSetUserSettingsResult != nullptr)
		*AdminSetUserSettingsResult = params.AdminSetUserSettingsResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x00555A80
//		Name   -> Function CognitoIdp.CognitoIdpClientObject.AdminSetUserPassword
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FAdminSetUserPasswordRequest                AdminSetUserPasswordRequest                                (Parm, NativeAccessSpecifierPublic)
//		struct FAdminSetUserPasswordResult                 AdminSetUserPasswordResult                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		CognitoIdp_ECognitoIdpError                        errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdpClientObject::AdminSetUserPassword(class UObject* WorldContextObject, bool* Success, const struct FAdminSetUserPasswordRequest& AdminSetUserPasswordRequest, struct FAdminSetUserPasswordResult* AdminSetUserPasswordResult, CognitoIdp_ECognitoIdpError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdp.CognitoIdpClientObject.AdminSetUserPassword");

	UCognitoIdpClientObject_AdminSetUserPassword_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.AdminSetUserPasswordRequest = AdminSetUserPasswordRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (AdminSetUserPasswordResult != nullptr)
		*AdminSetUserPasswordResult = params.AdminSetUserPasswordResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x00555780
//		Name   -> Function CognitoIdp.CognitoIdpClientObject.AdminSetUserMFAPreference
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FAdminSetUserMFAPreferenceRequest           AdminSetUserMFAPreferenceRequest                           (Parm, NativeAccessSpecifierPublic)
//		struct FAdminSetUserMFAPreferenceResult            AdminSetUserMFAPreferenceResult                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		CognitoIdp_ECognitoIdpError                        errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdpClientObject::AdminSetUserMFAPreference(class UObject* WorldContextObject, bool* Success, const struct FAdminSetUserMFAPreferenceRequest& AdminSetUserMFAPreferenceRequest, struct FAdminSetUserMFAPreferenceResult* AdminSetUserMFAPreferenceResult, CognitoIdp_ECognitoIdpError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdp.CognitoIdpClientObject.AdminSetUserMFAPreference");

	UCognitoIdpClientObject_AdminSetUserMFAPreference_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.AdminSetUserMFAPreferenceRequest = AdminSetUserMFAPreferenceRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (AdminSetUserMFAPreferenceResult != nullptr)
		*AdminSetUserMFAPreferenceResult = params.AdminSetUserMFAPreferenceResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x005551F0
//		Name   -> Function CognitoIdp.CognitoIdpClientObject.AdminRespondToAuthChallenge
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FAdminRespondToAuthChallengeRequest         AdminRespondToAuthChallengeRequest                         (Parm, NativeAccessSpecifierPublic)
//		struct FAdminRespondToAuthChallengeResult          AdminRespondToAuthChallengeResult                          (Parm, OutParm, NativeAccessSpecifierPublic)
//		CognitoIdp_ECognitoIdpError                        errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdpClientObject::AdminRespondToAuthChallenge(class UObject* WorldContextObject, bool* Success, const struct FAdminRespondToAuthChallengeRequest& AdminRespondToAuthChallengeRequest, struct FAdminRespondToAuthChallengeResult* AdminRespondToAuthChallengeResult, CognitoIdp_ECognitoIdpError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdp.CognitoIdpClientObject.AdminRespondToAuthChallenge");

	UCognitoIdpClientObject_AdminRespondToAuthChallenge_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.AdminRespondToAuthChallengeRequest = AdminRespondToAuthChallengeRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (AdminRespondToAuthChallengeResult != nullptr)
		*AdminRespondToAuthChallengeResult = params.AdminRespondToAuthChallengeResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x00554F10
//		Name   -> Function CognitoIdp.CognitoIdpClientObject.AdminResetUserPassword
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FAdminResetUserPasswordRequest              AdminResetUserPasswordRequest                              (Parm, NativeAccessSpecifierPublic)
//		struct FAdminResetUserPasswordResult               AdminResetUserPasswordResult                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		CognitoIdp_ECognitoIdpError                        errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdpClientObject::AdminResetUserPassword(class UObject* WorldContextObject, bool* Success, const struct FAdminResetUserPasswordRequest& AdminResetUserPasswordRequest, struct FAdminResetUserPasswordResult* AdminResetUserPasswordResult, CognitoIdp_ECognitoIdpError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdp.CognitoIdpClientObject.AdminResetUserPassword");

	UCognitoIdpClientObject_AdminResetUserPassword_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.AdminResetUserPasswordRequest = AdminResetUserPasswordRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (AdminResetUserPasswordResult != nullptr)
		*AdminResetUserPasswordResult = params.AdminResetUserPasswordResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x00554C50
//		Name   -> Function CognitoIdp.CognitoIdpClientObject.AdminRemoveUserFromGroup
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FAdminRemoveUserFromGroupRequest            AdminRemoveUserFromGroupRequest                            (Parm, NativeAccessSpecifierPublic)
//		CognitoIdp_ECognitoIdpError                        errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdpClientObject::AdminRemoveUserFromGroup(class UObject* WorldContextObject, bool* Success, const struct FAdminRemoveUserFromGroupRequest& AdminRemoveUserFromGroupRequest, CognitoIdp_ECognitoIdpError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdp.CognitoIdpClientObject.AdminRemoveUserFromGroup");

	UCognitoIdpClientObject_AdminRemoveUserFromGroup_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.AdminRemoveUserFromGroupRequest = AdminRemoveUserFromGroupRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x005548F0
//		Name   -> Function CognitoIdp.CognitoIdpClientObject.AdminListUserAuthEvents
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FAdminListUserAuthEventsRequest             AdminListUserAuthEventsRequest                             (Parm, NativeAccessSpecifierPublic)
//		struct FAdminListUserAuthEventsResult              AdminListUserAuthEventsResult                              (Parm, OutParm, NativeAccessSpecifierPublic)
//		CognitoIdp_ECognitoIdpError                        errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdpClientObject::AdminListUserAuthEvents(class UObject* WorldContextObject, bool* Success, const struct FAdminListUserAuthEventsRequest& AdminListUserAuthEventsRequest, struct FAdminListUserAuthEventsResult* AdminListUserAuthEventsResult, CognitoIdp_ECognitoIdpError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdp.CognitoIdpClientObject.AdminListUserAuthEvents");

	UCognitoIdpClientObject_AdminListUserAuthEvents_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.AdminListUserAuthEventsRequest = AdminListUserAuthEventsRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (AdminListUserAuthEventsResult != nullptr)
		*AdminListUserAuthEventsResult = params.AdminListUserAuthEventsResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x00554590
//		Name   -> Function CognitoIdp.CognitoIdpClientObject.AdminListGroupsForUser
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FAdminListGroupsForUserRequest              AdminListGroupsForUserRequest                              (Parm, NativeAccessSpecifierPublic)
//		struct FAdminListGroupsForUserResult               AdminListGroupsForUserResult                               (Parm, OutParm, NativeAccessSpecifierPublic)
//		CognitoIdp_ECognitoIdpError                        errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdpClientObject::AdminListGroupsForUser(class UObject* WorldContextObject, bool* Success, const struct FAdminListGroupsForUserRequest& AdminListGroupsForUserRequest, struct FAdminListGroupsForUserResult* AdminListGroupsForUserResult, CognitoIdp_ECognitoIdpError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdp.CognitoIdpClientObject.AdminListGroupsForUser");

	UCognitoIdpClientObject_AdminListGroupsForUser_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.AdminListGroupsForUserRequest = AdminListGroupsForUserRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (AdminListGroupsForUserResult != nullptr)
		*AdminListGroupsForUserResult = params.AdminListGroupsForUserResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x00554230
//		Name   -> Function CognitoIdp.CognitoIdpClientObject.AdminListDevices
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FAdminListDevicesRequest                    AdminListDevicesRequest                                    (Parm, NativeAccessSpecifierPublic)
//		struct FAdminListDevicesResult                     AdminListDevicesResult                                     (Parm, OutParm, NativeAccessSpecifierPublic)
//		CognitoIdp_ECognitoIdpError                        errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdpClientObject::AdminListDevices(class UObject* WorldContextObject, bool* Success, const struct FAdminListDevicesRequest& AdminListDevicesRequest, struct FAdminListDevicesResult* AdminListDevicesResult, CognitoIdp_ECognitoIdpError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdp.CognitoIdpClientObject.AdminListDevices");

	UCognitoIdpClientObject_AdminListDevices_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.AdminListDevicesRequest = AdminListDevicesRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (AdminListDevicesResult != nullptr)
		*AdminListDevicesResult = params.AdminListDevicesResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x00553E50
//		Name   -> Function CognitoIdp.CognitoIdpClientObject.AdminLinkProviderForUser
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FAdminLinkProviderForUserRequest            AdminLinkProviderForUserRequest                            (Parm, NativeAccessSpecifierPublic)
//		struct FAdminLinkProviderForUserResult             AdminLinkProviderForUserResult                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		CognitoIdp_ECognitoIdpError                        errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdpClientObject::AdminLinkProviderForUser(class UObject* WorldContextObject, bool* Success, const struct FAdminLinkProviderForUserRequest& AdminLinkProviderForUserRequest, struct FAdminLinkProviderForUserResult* AdminLinkProviderForUserResult, CognitoIdp_ECognitoIdpError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdp.CognitoIdpClientObject.AdminLinkProviderForUser");

	UCognitoIdpClientObject_AdminLinkProviderForUser_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.AdminLinkProviderForUserRequest = AdminLinkProviderForUserRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (AdminLinkProviderForUserResult != nullptr)
		*AdminLinkProviderForUserResult = params.AdminLinkProviderForUserResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x00553A30
//		Name   -> Function CognitoIdp.CognitoIdpClientObject.AdminInitiateAuth
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FAdminInitiateAuthRequest                   AdminInitiateAuthRequest                                   (Parm, NativeAccessSpecifierPublic)
//		struct FAdminInitiateAuthResult                    AdminInitiateAuthResult                                    (Parm, OutParm, NativeAccessSpecifierPublic)
//		CognitoIdp_ECognitoIdpError                        errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdpClientObject::AdminInitiateAuth(class UObject* WorldContextObject, bool* Success, const struct FAdminInitiateAuthRequest& AdminInitiateAuthRequest, struct FAdminInitiateAuthResult* AdminInitiateAuthResult, CognitoIdp_ECognitoIdpError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdp.CognitoIdpClientObject.AdminInitiateAuth");

	UCognitoIdpClientObject_AdminInitiateAuth_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.AdminInitiateAuthRequest = AdminInitiateAuthRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (AdminInitiateAuthResult != nullptr)
		*AdminInitiateAuthResult = params.AdminInitiateAuthResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x00553690
//		Name   -> Function CognitoIdp.CognitoIdpClientObject.AdminGetUser
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FAdminGetUserRequest                        AdminGetUserRequest                                        (Parm, NativeAccessSpecifierPublic)
//		struct FAdminGetUserResult                         AdminGetUserResult                                         (Parm, OutParm, NativeAccessSpecifierPublic)
//		CognitoIdp_ECognitoIdpError                        errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdpClientObject::AdminGetUser(class UObject* WorldContextObject, bool* Success, const struct FAdminGetUserRequest& AdminGetUserRequest, struct FAdminGetUserResult* AdminGetUserResult, CognitoIdp_ECognitoIdpError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdp.CognitoIdpClientObject.AdminGetUser");

	UCognitoIdpClientObject_AdminGetUser_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.AdminGetUserRequest = AdminGetUserRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (AdminGetUserResult != nullptr)
		*AdminGetUserResult = params.AdminGetUserResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x00553330
//		Name   -> Function CognitoIdp.CognitoIdpClientObject.AdminGetDevice
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FAdminGetDeviceRequest                      AdminGetDeviceRequest                                      (Parm, NativeAccessSpecifierPublic)
//		struct FAdminGetDeviceResult                       AdminGetDeviceResult                                       (Parm, OutParm, NativeAccessSpecifierPublic)
//		CognitoIdp_ECognitoIdpError                        errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdpClientObject::AdminGetDevice(class UObject* WorldContextObject, bool* Success, const struct FAdminGetDeviceRequest& AdminGetDeviceRequest, struct FAdminGetDeviceResult* AdminGetDeviceResult, CognitoIdp_ECognitoIdpError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdp.CognitoIdpClientObject.AdminGetDevice");

	UCognitoIdpClientObject_AdminGetDevice_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.AdminGetDeviceRequest = AdminGetDeviceRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (AdminGetDeviceResult != nullptr)
		*AdminGetDeviceResult = params.AdminGetDeviceResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x00553070
//		Name   -> Function CognitoIdp.CognitoIdpClientObject.AdminForgetDevice
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FAdminForgetDeviceRequest                   AdminForgetDeviceRequest                                   (Parm, NativeAccessSpecifierPublic)
//		CognitoIdp_ECognitoIdpError                        errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdpClientObject::AdminForgetDevice(class UObject* WorldContextObject, bool* Success, const struct FAdminForgetDeviceRequest& AdminForgetDeviceRequest, CognitoIdp_ECognitoIdpError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdp.CognitoIdpClientObject.AdminForgetDevice");

	UCognitoIdpClientObject_AdminForgetDevice_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.AdminForgetDeviceRequest = AdminForgetDeviceRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x00552D90
//		Name   -> Function CognitoIdp.CognitoIdpClientObject.AdminEnableUser
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FAdminEnableUserRequest                     AdminEnableUserRequest                                     (Parm, NativeAccessSpecifierPublic)
//		struct FAdminEnableUserResult                      AdminEnableUserResult                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		CognitoIdp_ECognitoIdpError                        errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdpClientObject::AdminEnableUser(class UObject* WorldContextObject, bool* Success, const struct FAdminEnableUserRequest& AdminEnableUserRequest, struct FAdminEnableUserResult* AdminEnableUserResult, CognitoIdp_ECognitoIdpError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdp.CognitoIdpClientObject.AdminEnableUser");

	UCognitoIdpClientObject_AdminEnableUser_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.AdminEnableUserRequest = AdminEnableUserRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (AdminEnableUserResult != nullptr)
		*AdminEnableUserResult = params.AdminEnableUserResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x00552AB0
//		Name   -> Function CognitoIdp.CognitoIdpClientObject.AdminDisableUser
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FAdminDisableUserRequest                    AdminDisableUserRequest                                    (Parm, NativeAccessSpecifierPublic)
//		struct FAdminDisableUserResult                     AdminDisableUserResult                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		CognitoIdp_ECognitoIdpError                        errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdpClientObject::AdminDisableUser(class UObject* WorldContextObject, bool* Success, const struct FAdminDisableUserRequest& AdminDisableUserRequest, struct FAdminDisableUserResult* AdminDisableUserResult, CognitoIdp_ECognitoIdpError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdp.CognitoIdpClientObject.AdminDisableUser");

	UCognitoIdpClientObject_AdminDisableUser_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.AdminDisableUserRequest = AdminDisableUserRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (AdminDisableUserResult != nullptr)
		*AdminDisableUserResult = params.AdminDisableUserResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x00552750
//		Name   -> Function CognitoIdp.CognitoIdpClientObject.AdminDisableProviderForUser
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FAdminDisableProviderForUserRequest         AdminDisableProviderForUserRequest                         (Parm, NativeAccessSpecifierPublic)
//		struct FAdminDisableProviderForUserResult          AdminDisableProviderForUserResult                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		CognitoIdp_ECognitoIdpError                        errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdpClientObject::AdminDisableProviderForUser(class UObject* WorldContextObject, bool* Success, const struct FAdminDisableProviderForUserRequest& AdminDisableProviderForUserRequest, struct FAdminDisableProviderForUserResult* AdminDisableProviderForUserResult, CognitoIdp_ECognitoIdpError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdp.CognitoIdpClientObject.AdminDisableProviderForUser");

	UCognitoIdpClientObject_AdminDisableProviderForUser_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.AdminDisableProviderForUserRequest = AdminDisableProviderForUserRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (AdminDisableProviderForUserResult != nullptr)
		*AdminDisableProviderForUserResult = params.AdminDisableProviderForUserResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x005523F0
//		Name   -> Function CognitoIdp.CognitoIdpClientObject.AdminDeleteUserAttributes
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FAdminDeleteUserAttributesRequest           AdminDeleteUserAttributesRequest                           (Parm, NativeAccessSpecifierPublic)
//		struct FAdminDeleteUserAttributesResult            AdminDeleteUserAttributesResult                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		CognitoIdp_ECognitoIdpError                        errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdpClientObject::AdminDeleteUserAttributes(class UObject* WorldContextObject, bool* Success, const struct FAdminDeleteUserAttributesRequest& AdminDeleteUserAttributesRequest, struct FAdminDeleteUserAttributesResult* AdminDeleteUserAttributesResult, CognitoIdp_ECognitoIdpError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdp.CognitoIdpClientObject.AdminDeleteUserAttributes");

	UCognitoIdpClientObject_AdminDeleteUserAttributes_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.AdminDeleteUserAttributesRequest = AdminDeleteUserAttributesRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (AdminDeleteUserAttributesResult != nullptr)
		*AdminDeleteUserAttributesResult = params.AdminDeleteUserAttributesResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x00552160
//		Name   -> Function CognitoIdp.CognitoIdpClientObject.AdminDeleteUser
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FAdminDeleteUserRequest                     AdminDeleteUserRequest                                     (Parm, NativeAccessSpecifierPublic)
//		CognitoIdp_ECognitoIdpError                        errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdpClientObject::AdminDeleteUser(class UObject* WorldContextObject, bool* Success, const struct FAdminDeleteUserRequest& AdminDeleteUserRequest, CognitoIdp_ECognitoIdpError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdp.CognitoIdpClientObject.AdminDeleteUser");

	UCognitoIdpClientObject_AdminDeleteUser_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.AdminDeleteUserRequest = AdminDeleteUserRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x00551DE0
//		Name   -> Function CognitoIdp.CognitoIdpClientObject.AdminCreateUser
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FAdminCreateUserRequest                     AdminCreateUserRequest                                     (Parm, NativeAccessSpecifierPublic)
//		struct FAdminCreateUserResult                      AdminCreateUserResult                                      (Parm, OutParm, NativeAccessSpecifierPublic)
//		CognitoIdp_ECognitoIdpError                        errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdpClientObject::AdminCreateUser(class UObject* WorldContextObject, bool* Success, const struct FAdminCreateUserRequest& AdminCreateUserRequest, struct FAdminCreateUserResult* AdminCreateUserResult, CognitoIdp_ECognitoIdpError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdp.CognitoIdpClientObject.AdminCreateUser");

	UCognitoIdpClientObject_AdminCreateUser_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.AdminCreateUserRequest = AdminCreateUserRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (AdminCreateUserResult != nullptr)
		*AdminCreateUserResult = params.AdminCreateUserResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x00551B00
//		Name   -> Function CognitoIdp.CognitoIdpClientObject.AdminConfirmSignUp
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FAdminConfirmSignUpRequest                  AdminConfirmSignUpRequest                                  (Parm, NativeAccessSpecifierPublic)
//		struct FAdminConfirmSignUpResult                   AdminConfirmSignUpResult                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		CognitoIdp_ECognitoIdpError                        errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdpClientObject::AdminConfirmSignUp(class UObject* WorldContextObject, bool* Success, const struct FAdminConfirmSignUpRequest& AdminConfirmSignUpRequest, struct FAdminConfirmSignUpResult* AdminConfirmSignUpResult, CognitoIdp_ECognitoIdpError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdp.CognitoIdpClientObject.AdminConfirmSignUp");

	UCognitoIdpClientObject_AdminConfirmSignUp_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.AdminConfirmSignUpRequest = AdminConfirmSignUpRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (AdminConfirmSignUpResult != nullptr)
		*AdminConfirmSignUpResult = params.AdminConfirmSignUpResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x00551840
//		Name   -> Function CognitoIdp.CognitoIdpClientObject.AdminAddUserToGroup
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FAdminAddUserToGroupRequest                 AdminAddUserToGroupRequest                                 (Parm, NativeAccessSpecifierPublic)
//		CognitoIdp_ECognitoIdpError                        errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdpClientObject::AdminAddUserToGroup(class UObject* WorldContextObject, bool* Success, const struct FAdminAddUserToGroupRequest& AdminAddUserToGroupRequest, CognitoIdp_ECognitoIdpError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdp.CognitoIdpClientObject.AdminAddUserToGroup");

	UCognitoIdpClientObject_AdminAddUserToGroup_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.AdminAddUserToGroupRequest = AdminAddUserToGroupRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x00551540
//		Name   -> Function CognitoIdp.CognitoIdpClientObject.AddCustomAttributes
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FAddCustomAttributesRequest                 AddCustomAttributesRequest                                 (Parm, NativeAccessSpecifierPublic)
//		struct FAddCustomAttributesResult                  AddCustomAttributesResult                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		CognitoIdp_ECognitoIdpError                        errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdpClientObject::AddCustomAttributes(class UObject* WorldContextObject, bool* Success, const struct FAddCustomAttributesRequest& AddCustomAttributesRequest, struct FAddCustomAttributesResult* AddCustomAttributesResult, CognitoIdp_ECognitoIdpError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdp.CognitoIdpClientObject.AddCustomAttributes");

	UCognitoIdpClientObject_AddCustomAttributes_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.AddCustomAttributesRequest = AddCustomAttributesRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (AddCustomAttributesResult != nullptr)
		*AddCustomAttributesResult = params.AddCustomAttributesResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
