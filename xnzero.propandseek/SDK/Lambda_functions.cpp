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
//		Offset -> 0x005B7E90
//		Name   -> Function Lambda.LambdaClientObject.UpdateFunctionConfiguration
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUpdateFunctionConfigurationRequest         UpdateFunctionConfigurationRequest                         (Parm, NativeAccessSpecifierPublic)
//		struct FUpdateFunctionConfigurationResult          UpdateFunctionConfigurationResult                          (Parm, OutParm, NativeAccessSpecifierPublic)
//		Lambda_ELambdaError                                errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void ULambdaClientObject::UpdateFunctionConfiguration(class UObject* WorldContextObject, bool* Success, const struct FUpdateFunctionConfigurationRequest& UpdateFunctionConfigurationRequest, struct FUpdateFunctionConfigurationResult* UpdateFunctionConfigurationResult, Lambda_ELambdaError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Lambda.LambdaClientObject.UpdateFunctionConfiguration");

	ULambdaClientObject_UpdateFunctionConfiguration_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.UpdateFunctionConfigurationRequest = UpdateFunctionConfigurationRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (UpdateFunctionConfigurationResult != nullptr)
		*UpdateFunctionConfigurationResult = params.UpdateFunctionConfigurationResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x005B7AB0
//		Name   -> Function Lambda.LambdaClientObject.UpdateFunctionCode
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUpdateFunctionCodeRequest                  UpdateFunctionCodeRequest                                  (Parm, NativeAccessSpecifierPublic)
//		struct FUpdateFunctionCodeResult                   UpdateFunctionCodeResult                                   (Parm, OutParm, NativeAccessSpecifierPublic)
//		Lambda_ELambdaError                                errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void ULambdaClientObject::UpdateFunctionCode(class UObject* WorldContextObject, bool* Success, const struct FUpdateFunctionCodeRequest& UpdateFunctionCodeRequest, struct FUpdateFunctionCodeResult* UpdateFunctionCodeResult, Lambda_ELambdaError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Lambda.LambdaClientObject.UpdateFunctionCode");

	ULambdaClientObject_UpdateFunctionCode_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.UpdateFunctionCodeRequest = UpdateFunctionCodeRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (UpdateFunctionCodeResult != nullptr)
		*UpdateFunctionCodeResult = params.UpdateFunctionCodeResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x005B7700
//		Name   -> Function Lambda.LambdaClientObject.UpdateEventSourceMapping
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUpdateEventSourceMappingRequest            UpdateEventSourceMappingRequest                            (Parm, NativeAccessSpecifierPublic)
//		struct FUpdateEventSourceMappingResult             UpdateEventSourceMappingResult                             (Parm, OutParm, NativeAccessSpecifierPublic)
//		Lambda_ELambdaError                                errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void ULambdaClientObject::UpdateEventSourceMapping(class UObject* WorldContextObject, bool* Success, const struct FUpdateEventSourceMappingRequest& UpdateEventSourceMappingRequest, struct FUpdateEventSourceMappingResult* UpdateEventSourceMappingResult, Lambda_ELambdaError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Lambda.LambdaClientObject.UpdateEventSourceMapping");

	ULambdaClientObject_UpdateEventSourceMapping_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.UpdateEventSourceMappingRequest = UpdateEventSourceMappingRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (UpdateEventSourceMappingResult != nullptr)
		*UpdateEventSourceMappingResult = params.UpdateEventSourceMappingResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x005B71B0
//		Name   -> Function Lambda.LambdaClientObject.UpdateAlias
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLambdaUpdateAliasRequest                   updateAliasRequest                                         (Parm, NativeAccessSpecifierPublic)
//		struct FLambdaUpdateAliasResult                    updateAliasResult                                          (Parm, OutParm, NativeAccessSpecifierPublic)
//		Lambda_ELambdaError                                errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void ULambdaClientObject::UpdateAlias(class UObject* WorldContextObject, bool* Success, const struct FLambdaUpdateAliasRequest& updateAliasRequest, struct FLambdaUpdateAliasResult* updateAliasResult, Lambda_ELambdaError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Lambda.LambdaClientObject.UpdateAlias");

	ULambdaClientObject_UpdateAlias_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.updateAliasRequest = updateAliasRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (updateAliasResult != nullptr)
		*updateAliasResult = params.updateAliasResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x005B6EE0
//		Name   -> Function Lambda.LambdaClientObject.UntagResource
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLambdaUntagResourceRequest                 untagResourceRequest                                       (Parm, NativeAccessSpecifierPublic)
//		Lambda_ELambdaError                                errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void ULambdaClientObject::UntagResource(class UObject* WorldContextObject, bool* Success, const struct FLambdaUntagResourceRequest& untagResourceRequest, Lambda_ELambdaError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Lambda.LambdaClientObject.UntagResource");

	ULambdaClientObject_UntagResource_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.untagResourceRequest = untagResourceRequest;
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
//		Offset -> 0x005B6B80
//		Name   -> Function Lambda.LambdaClientObject.TagResource
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLambdaTagResourceRequest                   tagResourceRequest                                         (Parm, NativeAccessSpecifierPublic)
//		Lambda_ELambdaError                                errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void ULambdaClientObject::TagResource(class UObject* WorldContextObject, bool* Success, const struct FLambdaTagResourceRequest& tagResourceRequest, Lambda_ELambdaError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Lambda.LambdaClientObject.TagResource");

	ULambdaClientObject_TagResource_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.tagResourceRequest = tagResourceRequest;
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
//		Offset -> 0x005B6890
//		Name   -> Function Lambda.LambdaClientObject.RemovePermission
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FRemovePermissionRequest                    RemovePermissionRequest                                    (Parm, NativeAccessSpecifierPublic)
//		Lambda_ELambdaError                                errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void ULambdaClientObject::RemovePermission(class UObject* WorldContextObject, bool* Success, const struct FRemovePermissionRequest& RemovePermissionRequest, Lambda_ELambdaError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Lambda.LambdaClientObject.RemovePermission");

	ULambdaClientObject_RemovePermission_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.RemovePermissionRequest = RemovePermissionRequest;
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
//		Offset -> 0x005B65C0
//		Name   -> Function Lambda.LambdaClientObject.RemoveLayerVersionPermission
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FRemoveLayerVersionPermissionRequest        RemoveLayerVersionPermissionRequest                        (Parm, NativeAccessSpecifierPublic)
//		Lambda_ELambdaError                                errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void ULambdaClientObject::RemoveLayerVersionPermission(class UObject* WorldContextObject, bool* Success, const struct FRemoveLayerVersionPermissionRequest& RemoveLayerVersionPermissionRequest, Lambda_ELambdaError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Lambda.LambdaClientObject.RemoveLayerVersionPermission");

	ULambdaClientObject_RemoveLayerVersionPermission_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.RemoveLayerVersionPermissionRequest = RemoveLayerVersionPermissionRequest;
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
//		Offset -> 0x005B6310
//		Name   -> Function Lambda.LambdaClientObject.PutFunctionConcurrency
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FPutFunctionConcurrencyRequest              PutFunctionConcurrencyRequest                              (Parm, NativeAccessSpecifierPublic)
//		struct FPutFunctionConcurrencyResult               PutFunctionConcurrencyResult                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		Lambda_ELambdaError                                errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void ULambdaClientObject::PutFunctionConcurrency(class UObject* WorldContextObject, bool* Success, const struct FPutFunctionConcurrencyRequest& PutFunctionConcurrencyRequest, struct FPutFunctionConcurrencyResult* PutFunctionConcurrencyResult, Lambda_ELambdaError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Lambda.LambdaClientObject.PutFunctionConcurrency");

	ULambdaClientObject_PutFunctionConcurrency_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.PutFunctionConcurrencyRequest = PutFunctionConcurrencyRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (PutFunctionConcurrencyResult != nullptr)
		*PutFunctionConcurrencyResult = params.PutFunctionConcurrencyResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x005B5FA0
//		Name   -> Function Lambda.LambdaClientObject.PublishVersion
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FPublishVersionRequest                      PublishVersionRequest                                      (Parm, NativeAccessSpecifierPublic)
//		struct FPublishVersionResult                       PublishVersionResult                                       (Parm, OutParm, NativeAccessSpecifierPublic)
//		Lambda_ELambdaError                                errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void ULambdaClientObject::PublishVersion(class UObject* WorldContextObject, bool* Success, const struct FPublishVersionRequest& PublishVersionRequest, struct FPublishVersionResult* PublishVersionResult, Lambda_ELambdaError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Lambda.LambdaClientObject.PublishVersion");

	ULambdaClientObject_PublishVersion_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.PublishVersionRequest = PublishVersionRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (PublishVersionResult != nullptr)
		*PublishVersionResult = params.PublishVersionResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x005B5A70
//		Name   -> Function Lambda.LambdaClientObject.PublishLayerVersion
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FPublishLayerVersionRequest                 PublishLayerVersionRequest                                 (Parm, NativeAccessSpecifierPublic)
//		struct FPublishLayerVersionResult                  PublishLayerVersionResult                                  (Parm, OutParm, NativeAccessSpecifierPublic)
//		Lambda_ELambdaError                                errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void ULambdaClientObject::PublishLayerVersion(class UObject* WorldContextObject, bool* Success, const struct FPublishLayerVersionRequest& PublishLayerVersionRequest, struct FPublishLayerVersionResult* PublishLayerVersionResult, Lambda_ELambdaError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Lambda.LambdaClientObject.PublishLayerVersion");

	ULambdaClientObject_PublishLayerVersion_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.PublishLayerVersionRequest = PublishLayerVersionRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (PublishLayerVersionResult != nullptr)
		*PublishLayerVersionResult = params.PublishLayerVersionResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x005B5750
//		Name   -> Function Lambda.LambdaClientObject.ListVersionsByFunction
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FListVersionsByFunctionRequest              ListVersionsByFunctionRequest                              (Parm, NativeAccessSpecifierPublic)
//		struct FListVersionsByFunctionResult               ListVersionsByFunctionResult                               (Parm, OutParm, NativeAccessSpecifierPublic)
//		Lambda_ELambdaError                                errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void ULambdaClientObject::ListVersionsByFunction(class UObject* WorldContextObject, bool* Success, const struct FListVersionsByFunctionRequest& ListVersionsByFunctionRequest, struct FListVersionsByFunctionResult* ListVersionsByFunctionResult, Lambda_ELambdaError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Lambda.LambdaClientObject.ListVersionsByFunction");

	ULambdaClientObject_ListVersionsByFunction_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.ListVersionsByFunctionRequest = ListVersionsByFunctionRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (ListVersionsByFunctionResult != nullptr)
		*ListVersionsByFunctionResult = params.ListVersionsByFunctionResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x005B53F0
//		Name   -> Function Lambda.LambdaClientObject.ListTags
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FListTagsRequest                            ListTagsRequest                                            (Parm, NativeAccessSpecifierPublic)
//		struct FListTagsResult                             ListTagsResult                                             (Parm, OutParm, NativeAccessSpecifierPublic)
//		Lambda_ELambdaError                                errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void ULambdaClientObject::ListTags(class UObject* WorldContextObject, bool* Success, const struct FListTagsRequest& ListTagsRequest, struct FListTagsResult* ListTagsResult, Lambda_ELambdaError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Lambda.LambdaClientObject.ListTags");

	ULambdaClientObject_ListTags_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.ListTagsRequest = ListTagsRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (ListTagsResult != nullptr)
		*ListTagsResult = params.ListTagsResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x005B4DD0
//		Name   -> Function Lambda.LambdaClientObject.ListLayerVersions
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FListLayerVersionsRequest                   ListLayerVersionsRequest                                   (Parm, NativeAccessSpecifierPublic)
//		struct FListLayerVersionsResult                    ListLayerVersionsResult                                    (Parm, OutParm, NativeAccessSpecifierPublic)
//		Lambda_ELambdaError                                errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void ULambdaClientObject::ListLayerVersions(class UObject* WorldContextObject, bool* Success, const struct FListLayerVersionsRequest& ListLayerVersionsRequest, struct FListLayerVersionsResult* ListLayerVersionsResult, Lambda_ELambdaError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Lambda.LambdaClientObject.ListLayerVersions");

	ULambdaClientObject_ListLayerVersions_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.ListLayerVersionsRequest = ListLayerVersionsRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (ListLayerVersionsResult != nullptr)
		*ListLayerVersionsResult = params.ListLayerVersionsResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x005B5100
//		Name   -> Function Lambda.LambdaClientObject.ListLayers
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FListLayersRequest                          ListLayersRequest                                          (Parm, NativeAccessSpecifierPublic)
//		struct FListLayersResult                           ListLayersResult                                           (Parm, OutParm, NativeAccessSpecifierPublic)
//		Lambda_ELambdaError                                errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void ULambdaClientObject::ListLayers(class UObject* WorldContextObject, bool* Success, const struct FListLayersRequest& ListLayersRequest, struct FListLayersResult* ListLayersResult, Lambda_ELambdaError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Lambda.LambdaClientObject.ListLayers");

	ULambdaClientObject_ListLayers_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.ListLayersRequest = ListLayersRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (ListLayersResult != nullptr)
		*ListLayersResult = params.ListLayersResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x005B4AA0
//		Name   -> Function Lambda.LambdaClientObject.ListFunctions
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FListFunctionsRequest                       ListFunctionsRequest                                       (Parm, NativeAccessSpecifierPublic)
//		struct FListFunctionsResult                        ListFunctionsResult                                        (Parm, OutParm, NativeAccessSpecifierPublic)
//		Lambda_ELambdaError                                errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void ULambdaClientObject::ListFunctions(class UObject* WorldContextObject, bool* Success, const struct FListFunctionsRequest& ListFunctionsRequest, struct FListFunctionsResult* ListFunctionsResult, Lambda_ELambdaError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Lambda.LambdaClientObject.ListFunctions");

	ULambdaClientObject_ListFunctions_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.ListFunctionsRequest = ListFunctionsRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (ListFunctionsResult != nullptr)
		*ListFunctionsResult = params.ListFunctionsResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x005B4740
//		Name   -> Function Lambda.LambdaClientObject.ListEventSourceMappings
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FListEventSourceMappingsRequest             ListEventSourceMappingsRequest                             (Parm, NativeAccessSpecifierPublic)
//		struct FListEventSourceMappingsResult              ListEventSourceMappingsResult                              (Parm, OutParm, NativeAccessSpecifierPublic)
//		Lambda_ELambdaError                                errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void ULambdaClientObject::ListEventSourceMappings(class UObject* WorldContextObject, bool* Success, const struct FListEventSourceMappingsRequest& ListEventSourceMappingsRequest, struct FListEventSourceMappingsResult* ListEventSourceMappingsResult, Lambda_ELambdaError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Lambda.LambdaClientObject.ListEventSourceMappings");

	ULambdaClientObject_ListEventSourceMappings_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.ListEventSourceMappingsRequest = ListEventSourceMappingsRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (ListEventSourceMappingsResult != nullptr)
		*ListEventSourceMappingsResult = params.ListEventSourceMappingsResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x005B43E0
//		Name   -> Function Lambda.LambdaClientObject.ListAliases
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLambdaListAliasesRequest                   listAliasesRequest                                         (Parm, NativeAccessSpecifierPublic)
//		struct FLambdaListAliasesResult                    listAliasesResult                                          (Parm, OutParm, NativeAccessSpecifierPublic)
//		Lambda_ELambdaError                                errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void ULambdaClientObject::ListAliases(class UObject* WorldContextObject, bool* Success, const struct FLambdaListAliasesRequest& listAliasesRequest, struct FLambdaListAliasesResult* listAliasesResult, Lambda_ELambdaError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Lambda.LambdaClientObject.ListAliases");

	ULambdaClientObject_ListAliases_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.listAliasesRequest = listAliasesRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (listAliasesResult != nullptr)
		*listAliasesResult = params.listAliasesResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x005B3FF0
//		Name   -> Function Lambda.LambdaClientObject.Invoke
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FInvokeRequest                              InvokeRequest                                              (Parm, NativeAccessSpecifierPublic)
//		struct FInvokeResult                               InvokeResult                                               (Parm, OutParm, NativeAccessSpecifierPublic)
//		Lambda_ELambdaError                                errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void ULambdaClientObject::Invoke(class UObject* WorldContextObject, bool* Success, const struct FInvokeRequest& InvokeRequest, struct FInvokeResult* InvokeResult, Lambda_ELambdaError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Lambda.LambdaClientObject.Invoke");

	ULambdaClientObject_Invoke_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.InvokeRequest = InvokeRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (InvokeResult != nullptr)
		*InvokeResult = params.InvokeResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x004F5420
//		Name   -> Function Lambda.LambdaClientObject.GetServiceClientName
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString ULambdaClientObject::GetServiceClientName()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Lambda.LambdaClientObject.GetServiceClientName");

	ULambdaClientObject_GetServiceClientName_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x005B3CD0
//		Name   -> Function Lambda.LambdaClientObject.GetPolicy
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FGetPolicyRequest                           GetPolicyRequest                                           (Parm, NativeAccessSpecifierPublic)
//		struct FGetPolicyResult                            GetPolicyResult                                            (Parm, OutParm, NativeAccessSpecifierPublic)
//		Lambda_ELambdaError                                errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void ULambdaClientObject::GetPolicy(class UObject* WorldContextObject, bool* Success, const struct FGetPolicyRequest& GetPolicyRequest, struct FGetPolicyResult* GetPolicyResult, Lambda_ELambdaError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Lambda.LambdaClientObject.GetPolicy");

	ULambdaClientObject_GetPolicy_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.GetPolicyRequest = GetPolicyRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (GetPolicyResult != nullptr)
		*GetPolicyResult = params.GetPolicyResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x005B39E0
//		Name   -> Function Lambda.LambdaClientObject.GetLayerVersionPolicy
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FGetLayerVersionPolicyRequest               GetLayerVersionPolicyRequest                               (Parm, NativeAccessSpecifierPublic)
//		struct FGetLayerVersionPolicyResult                GetLayerVersionPolicyResult                                (Parm, OutParm, NativeAccessSpecifierPublic)
//		Lambda_ELambdaError                                errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void ULambdaClientObject::GetLayerVersionPolicy(class UObject* WorldContextObject, bool* Success, const struct FGetLayerVersionPolicyRequest& GetLayerVersionPolicyRequest, struct FGetLayerVersionPolicyResult* GetLayerVersionPolicyResult, Lambda_ELambdaError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Lambda.LambdaClientObject.GetLayerVersionPolicy");

	ULambdaClientObject_GetLayerVersionPolicy_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.GetLayerVersionPolicyRequest = GetLayerVersionPolicyRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (GetLayerVersionPolicyResult != nullptr)
		*GetLayerVersionPolicyResult = params.GetLayerVersionPolicyResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x005B3650
//		Name   -> Function Lambda.LambdaClientObject.GetLayerVersionByArn
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FGetLayerVersionByArnRequest                GetLayerVersionByArnRequest                                (Parm, NativeAccessSpecifierPublic)
//		struct FGetLayerVersionByArnResult                 GetLayerVersionByArnResult                                 (Parm, OutParm, NativeAccessSpecifierPublic)
//		Lambda_ELambdaError                                errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void ULambdaClientObject::GetLayerVersionByArn(class UObject* WorldContextObject, bool* Success, const struct FGetLayerVersionByArnRequest& GetLayerVersionByArnRequest, struct FGetLayerVersionByArnResult* GetLayerVersionByArnResult, Lambda_ELambdaError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Lambda.LambdaClientObject.GetLayerVersionByArn");

	ULambdaClientObject_GetLayerVersionByArn_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.GetLayerVersionByArnRequest = GetLayerVersionByArnRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (GetLayerVersionByArnResult != nullptr)
		*GetLayerVersionByArnResult = params.GetLayerVersionByArnResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x005B32B0
//		Name   -> Function Lambda.LambdaClientObject.GetLayerVersion
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FGetLayerVersionRequest                     GetLayerVersionRequest                                     (Parm, NativeAccessSpecifierPublic)
//		struct FGetLayerVersionResult                      GetLayerVersionResult                                      (Parm, OutParm, NativeAccessSpecifierPublic)
//		Lambda_ELambdaError                                errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void ULambdaClientObject::GetLayerVersion(class UObject* WorldContextObject, bool* Success, const struct FGetLayerVersionRequest& GetLayerVersionRequest, struct FGetLayerVersionResult* GetLayerVersionResult, Lambda_ELambdaError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Lambda.LambdaClientObject.GetLayerVersion");

	ULambdaClientObject_GetLayerVersion_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.GetLayerVersionRequest = GetLayerVersionRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (GetLayerVersionResult != nullptr)
		*GetLayerVersionResult = params.GetLayerVersionResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x005B2F80
//		Name   -> Function Lambda.LambdaClientObject.GetFunctionConfiguration
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FGetFunctionConfigurationRequest            GetFunctionConfigurationRequest                            (Parm, NativeAccessSpecifierPublic)
//		struct FGetFunctionConfigurationResult             GetFunctionConfigurationResult                             (Parm, OutParm, NativeAccessSpecifierPublic)
//		Lambda_ELambdaError                                errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void ULambdaClientObject::GetFunctionConfiguration(class UObject* WorldContextObject, bool* Success, const struct FGetFunctionConfigurationRequest& GetFunctionConfigurationRequest, struct FGetFunctionConfigurationResult* GetFunctionConfigurationResult, Lambda_ELambdaError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Lambda.LambdaClientObject.GetFunctionConfiguration");

	ULambdaClientObject_GetFunctionConfiguration_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.GetFunctionConfigurationRequest = GetFunctionConfigurationRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (GetFunctionConfigurationResult != nullptr)
		*GetFunctionConfigurationResult = params.GetFunctionConfigurationResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x005B2B70
//		Name   -> Function Lambda.LambdaClientObject.GetFunction
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FGetFunctionRequest                         GetFunctionRequest                                         (Parm, NativeAccessSpecifierPublic)
//		struct FGetFunctionResult                          GetFunctionResult                                          (Parm, OutParm, NativeAccessSpecifierPublic)
//		Lambda_ELambdaError                                errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void ULambdaClientObject::GetFunction(class UObject* WorldContextObject, bool* Success, const struct FGetFunctionRequest& GetFunctionRequest, struct FGetFunctionResult* GetFunctionResult, Lambda_ELambdaError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Lambda.LambdaClientObject.GetFunction");

	ULambdaClientObject_GetFunction_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.GetFunctionRequest = GetFunctionRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (GetFunctionResult != nullptr)
		*GetFunctionResult = params.GetFunctionResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x005B2810
//		Name   -> Function Lambda.LambdaClientObject.GetEventSourceMapping
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FGetEventSourceMappingRequest               GetEventSourceMappingRequest                               (Parm, NativeAccessSpecifierPublic)
//		struct FGetEventSourceMappingResult                GetEventSourceMappingResult                                (Parm, OutParm, NativeAccessSpecifierPublic)
//		Lambda_ELambdaError                                errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void ULambdaClientObject::GetEventSourceMapping(class UObject* WorldContextObject, bool* Success, const struct FGetEventSourceMappingRequest& GetEventSourceMappingRequest, struct FGetEventSourceMappingResult* GetEventSourceMappingResult, Lambda_ELambdaError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Lambda.LambdaClientObject.GetEventSourceMapping");

	ULambdaClientObject_GetEventSourceMapping_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.GetEventSourceMappingRequest = GetEventSourceMappingRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (GetEventSourceMappingResult != nullptr)
		*GetEventSourceMappingResult = params.GetEventSourceMappingResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x005B2400
//		Name   -> Function Lambda.LambdaClientObject.GetAlias
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FGetAliasRequest                            GetAliasRequest                                            (Parm, NativeAccessSpecifierPublic)
//		struct FGetAliasResult                             GetAliasResult                                             (Parm, OutParm, NativeAccessSpecifierPublic)
//		Lambda_ELambdaError                                errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void ULambdaClientObject::GetAlias(class UObject* WorldContextObject, bool* Success, const struct FGetAliasRequest& GetAliasRequest, struct FGetAliasResult* GetAliasResult, Lambda_ELambdaError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Lambda.LambdaClientObject.GetAlias");

	ULambdaClientObject_GetAlias_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.GetAliasRequest = GetAliasRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (GetAliasResult != nullptr)
		*GetAliasResult = params.GetAliasResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x005B2160
//		Name   -> Function Lambda.LambdaClientObject.GetAccountSettings
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FGetAccountSettingsRequest                  GetAccountSettingsRequest                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		struct FGetAccountSettingsResult                   GetAccountSettingsResult                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		Lambda_ELambdaError                                errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void ULambdaClientObject::GetAccountSettings(class UObject* WorldContextObject, bool* Success, const struct FGetAccountSettingsRequest& GetAccountSettingsRequest, struct FGetAccountSettingsResult* GetAccountSettingsResult, Lambda_ELambdaError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Lambda.LambdaClientObject.GetAccountSettings");

	ULambdaClientObject_GetAccountSettings_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.GetAccountSettingsRequest = GetAccountSettingsRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (GetAccountSettingsResult != nullptr)
		*GetAccountSettingsResult = params.GetAccountSettingsResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x005B1EF0
//		Name   -> Function Lambda.LambdaClientObject.DeleteLayerVersion
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FDeleteLayerVersionRequest                  DeleteLayerVersionRequest                                  (Parm, NativeAccessSpecifierPublic)
//		Lambda_ELambdaError                                errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void ULambdaClientObject::DeleteLayerVersion(class UObject* WorldContextObject, bool* Success, const struct FDeleteLayerVersionRequest& DeleteLayerVersionRequest, Lambda_ELambdaError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Lambda.LambdaClientObject.DeleteLayerVersion");

	ULambdaClientObject_DeleteLayerVersion_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.DeleteLayerVersionRequest = DeleteLayerVersionRequest;
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
//		Offset -> 0x005B1C90
//		Name   -> Function Lambda.LambdaClientObject.DeleteFunctionConcurrency
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FDeleteFunctionConcurrencyRequest           DeleteFunctionConcurrencyRequest                           (Parm, NativeAccessSpecifierPublic)
//		Lambda_ELambdaError                                errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void ULambdaClientObject::DeleteFunctionConcurrency(class UObject* WorldContextObject, bool* Success, const struct FDeleteFunctionConcurrencyRequest& DeleteFunctionConcurrencyRequest, Lambda_ELambdaError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Lambda.LambdaClientObject.DeleteFunctionConcurrency");

	ULambdaClientObject_DeleteFunctionConcurrency_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.DeleteFunctionConcurrencyRequest = DeleteFunctionConcurrencyRequest;
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
//		Offset -> 0x005B1A00
//		Name   -> Function Lambda.LambdaClientObject.DeleteFunction
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FDeleteFunctionRequest                      DeleteFunctionRequest                                      (Parm, NativeAccessSpecifierPublic)
//		Lambda_ELambdaError                                errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void ULambdaClientObject::DeleteFunction(class UObject* WorldContextObject, bool* Success, const struct FDeleteFunctionRequest& DeleteFunctionRequest, Lambda_ELambdaError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Lambda.LambdaClientObject.DeleteFunction");

	ULambdaClientObject_DeleteFunction_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.DeleteFunctionRequest = DeleteFunctionRequest;
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
//		Offset -> 0x005B16A0
//		Name   -> Function Lambda.LambdaClientObject.DeleteEventSourceMapping
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FDeleteEventSourceMappingRequest            DeleteEventSourceMappingRequest                            (Parm, NativeAccessSpecifierPublic)
//		struct FDeleteEventSourceMappingResult             DeleteEventSourceMappingResult                             (Parm, OutParm, NativeAccessSpecifierPublic)
//		Lambda_ELambdaError                                errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void ULambdaClientObject::DeleteEventSourceMapping(class UObject* WorldContextObject, bool* Success, const struct FDeleteEventSourceMappingRequest& DeleteEventSourceMappingRequest, struct FDeleteEventSourceMappingResult* DeleteEventSourceMappingResult, Lambda_ELambdaError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Lambda.LambdaClientObject.DeleteEventSourceMapping");

	ULambdaClientObject_DeleteEventSourceMapping_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.DeleteEventSourceMappingRequest = DeleteEventSourceMappingRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (DeleteEventSourceMappingResult != nullptr)
		*DeleteEventSourceMappingResult = params.DeleteEventSourceMappingResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x005B1410
//		Name   -> Function Lambda.LambdaClientObject.DeleteAlias
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLambdaDeleteAliasRequest                   deleteAliasRequest                                         (Parm, NativeAccessSpecifierPublic)
//		Lambda_ELambdaError                                errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void ULambdaClientObject::DeleteAlias(class UObject* WorldContextObject, bool* Success, const struct FLambdaDeleteAliasRequest& deleteAliasRequest, Lambda_ELambdaError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Lambda.LambdaClientObject.DeleteAlias");

	ULambdaClientObject_DeleteAlias_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.deleteAliasRequest = deleteAliasRequest;
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
//		Offset -> 0x005B1230
//		Name   -> Function Lambda.LambdaClientObject.CreateLambdaObject
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FAWSCredentials                             credentials                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FAWSClientConfiguration                     clientConfiguration                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		class ULambdaClientObject*                         ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULambdaClientObject* ULambdaClientObject::STATIC_CreateLambdaObject(const struct FAWSCredentials& credentials, const struct FAWSClientConfiguration& clientConfiguration)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Lambda.LambdaClientObject.CreateLambdaObject");

	ULambdaClientObject_CreateLambdaObject_Params params {};
	params.credentials = credentials;
	params.clientConfiguration = clientConfiguration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x005B0F10
//		Name   -> Function Lambda.LambdaClientObject.CreateFunction
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FCreateFunctionRequest                      CreateFunctionRequest                                      (Parm, NativeAccessSpecifierPublic)
//		struct FCreateFunctionResult                       CreateFunctionResult                                       (Parm, OutParm, NativeAccessSpecifierPublic)
//		Lambda_ELambdaError                                errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void ULambdaClientObject::CreateFunction(class UObject* WorldContextObject, bool* Success, const struct FCreateFunctionRequest& CreateFunctionRequest, struct FCreateFunctionResult* CreateFunctionResult, Lambda_ELambdaError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Lambda.LambdaClientObject.CreateFunction");

	ULambdaClientObject_CreateFunction_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.CreateFunctionRequest = CreateFunctionRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (CreateFunctionResult != nullptr)
		*CreateFunctionResult = params.CreateFunctionResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x005B0B50
//		Name   -> Function Lambda.LambdaClientObject.CreateEventSourceMapping
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FCreateEventSourceMappingRequest            CreateEventSourceMappingRequest                            (Parm, NativeAccessSpecifierPublic)
//		struct FCreateEventSourceMappingResult             CreateEventSourceMappingResult                             (Parm, OutParm, NativeAccessSpecifierPublic)
//		Lambda_ELambdaError                                errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void ULambdaClientObject::CreateEventSourceMapping(class UObject* WorldContextObject, bool* Success, const struct FCreateEventSourceMappingRequest& CreateEventSourceMappingRequest, struct FCreateEventSourceMappingResult* CreateEventSourceMappingResult, Lambda_ELambdaError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Lambda.LambdaClientObject.CreateEventSourceMapping");

	ULambdaClientObject_CreateEventSourceMapping_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.CreateEventSourceMappingRequest = CreateEventSourceMappingRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (CreateEventSourceMappingResult != nullptr)
		*CreateEventSourceMappingResult = params.CreateEventSourceMappingResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x005B0630
//		Name   -> Function Lambda.LambdaClientObject.CreateAlias
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLambdaCreateAliasRequest                   createAliasRequest                                         (Parm, NativeAccessSpecifierPublic)
//		struct FLambdaCreateAliasResult                    createAliasResult                                          (Parm, OutParm, NativeAccessSpecifierPublic)
//		Lambda_ELambdaError                                errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void ULambdaClientObject::CreateAlias(class UObject* WorldContextObject, bool* Success, const struct FLambdaCreateAliasRequest& createAliasRequest, struct FLambdaCreateAliasResult* createAliasResult, Lambda_ELambdaError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Lambda.LambdaClientObject.CreateAlias");

	ULambdaClientObject_CreateAlias_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.createAliasRequest = createAliasRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (createAliasResult != nullptr)
		*createAliasResult = params.createAliasResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x005B0270
//		Name   -> Function Lambda.LambdaClientObject.AddPermission
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FAddPermissionRequest                       AddPermissionRequest                                       (Parm, NativeAccessSpecifierPublic)
//		struct FAddPermissionResult                        AddPermissionResult                                        (Parm, OutParm, NativeAccessSpecifierPublic)
//		Lambda_ELambdaError                                errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void ULambdaClientObject::AddPermission(class UObject* WorldContextObject, bool* Success, const struct FAddPermissionRequest& AddPermissionRequest, struct FAddPermissionResult* AddPermissionResult, Lambda_ELambdaError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Lambda.LambdaClientObject.AddPermission");

	ULambdaClientObject_AddPermission_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.AddPermissionRequest = AddPermissionRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (AddPermissionResult != nullptr)
		*AddPermissionResult = params.AddPermissionResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x005AFE90
//		Name   -> Function Lambda.LambdaClientObject.AddLayerVersionPermission
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FAddLayerVersionPermissionRequest           AddLayerVersionPermissionRequest                           (Parm, NativeAccessSpecifierPublic)
//		struct FAddLayerVersionPermissionResult            AddLayerVersionPermissionResult                            (Parm, OutParm, NativeAccessSpecifierPublic)
//		Lambda_ELambdaError                                errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void ULambdaClientObject::AddLayerVersionPermission(class UObject* WorldContextObject, bool* Success, const struct FAddLayerVersionPermissionRequest& AddLayerVersionPermissionRequest, struct FAddLayerVersionPermissionResult* AddLayerVersionPermissionResult, Lambda_ELambdaError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Lambda.LambdaClientObject.AddLayerVersionPermission");

	ULambdaClientObject_AddLayerVersionPermission_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.AddLayerVersionPermissionRequest = AddLayerVersionPermissionRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (AddLayerVersionPermissionResult != nullptr)
		*AddLayerVersionPermissionResult = params.AddLayerVersionPermissionResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
