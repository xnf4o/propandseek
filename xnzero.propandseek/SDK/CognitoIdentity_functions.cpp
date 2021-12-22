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
//		Offset -> 0x0058F3A0
//		Name   -> Function CognitoIdentity.CognitoIdentityClientObject.UpdateIdentityPool
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUpdateIdentityPoolRequest                  UpdateIdentityPoolRequest                                  (Parm, NativeAccessSpecifierPublic)
//		struct FUpdateIdentityPoolResult                   UpdateIdentityPoolResult                                   (Parm, OutParm, NativeAccessSpecifierPublic)
//		CognitoIdentity_ECognitoIdentityError              errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdentityClientObject::UpdateIdentityPool(class UObject* WorldContextObject, bool* Success, const struct FUpdateIdentityPoolRequest& UpdateIdentityPoolRequest, struct FUpdateIdentityPoolResult* UpdateIdentityPoolResult, CognitoIdentity_ECognitoIdentityError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdentity.CognitoIdentityClientObject.UpdateIdentityPool");

	UCognitoIdentityClientObject_UpdateIdentityPool_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.UpdateIdentityPoolRequest = UpdateIdentityPoolRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (UpdateIdentityPoolResult != nullptr)
		*UpdateIdentityPoolResult = params.UpdateIdentityPoolResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x0058F070
//		Name   -> Function CognitoIdentity.CognitoIdentityClientObject.UntagResource
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FCognitoIdentityUntagResourceRequest        untagResourceRequest                                       (Parm, NativeAccessSpecifierPublic)
//		struct FCognitoIdentityUntagResourceResult         untagResourceResult                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		CognitoIdentity_ECognitoIdentityError              errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdentityClientObject::UntagResource(class UObject* WorldContextObject, bool* Success, const struct FCognitoIdentityUntagResourceRequest& untagResourceRequest, struct FCognitoIdentityUntagResourceResult* untagResourceResult, CognitoIdentity_ECognitoIdentityError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdentity.CognitoIdentityClientObject.UntagResource");

	UCognitoIdentityClientObject_UntagResource_Params params {};
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
//		Offset -> 0x0058ED10
//		Name   -> Function CognitoIdentity.CognitoIdentityClientObject.UnlinkIdentity
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUnlinkIdentityRequest                      UnlinkIdentityRequest                                      (Parm, NativeAccessSpecifierPublic)
//		CognitoIdentity_ECognitoIdentityError              errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdentityClientObject::UnlinkIdentity(class UObject* WorldContextObject, bool* Success, const struct FUnlinkIdentityRequest& UnlinkIdentityRequest, CognitoIdentity_ECognitoIdentityError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdentity.CognitoIdentityClientObject.UnlinkIdentity");

	UCognitoIdentityClientObject_UnlinkIdentity_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.UnlinkIdentityRequest = UnlinkIdentityRequest;
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
//		Offset -> 0x0058EA20
//		Name   -> Function CognitoIdentity.CognitoIdentityClientObject.UnlinkDeveloperIdentity
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUnlinkDeveloperIdentityRequest             UnlinkDeveloperIdentityRequest                             (Parm, NativeAccessSpecifierPublic)
//		CognitoIdentity_ECognitoIdentityError              errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdentityClientObject::UnlinkDeveloperIdentity(class UObject* WorldContextObject, bool* Success, const struct FUnlinkDeveloperIdentityRequest& UnlinkDeveloperIdentityRequest, CognitoIdentity_ECognitoIdentityError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdentity.CognitoIdentityClientObject.UnlinkDeveloperIdentity");

	UCognitoIdentityClientObject_UnlinkDeveloperIdentity_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.UnlinkDeveloperIdentityRequest = UnlinkDeveloperIdentityRequest;
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
//		Offset -> 0x0058E670
//		Name   -> Function CognitoIdentity.CognitoIdentityClientObject.TagResource
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FCognitoIdentityTagResourceRequest          tagResourceRequest                                         (Parm, NativeAccessSpecifierPublic)
//		struct FCognitoIdentityTagResourceResult           tagResourceResult                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		CognitoIdentity_ECognitoIdentityError              errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdentityClientObject::TagResource(class UObject* WorldContextObject, bool* Success, const struct FCognitoIdentityTagResourceRequest& tagResourceRequest, struct FCognitoIdentityTagResourceResult* tagResourceResult, CognitoIdentity_ECognitoIdentityError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdentity.CognitoIdentityClientObject.TagResource");

	UCognitoIdentityClientObject_TagResource_Params params {};
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
//		Offset -> 0x0058E290
//		Name   -> Function CognitoIdentity.CognitoIdentityClientObject.SetIdentityPoolRoles
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FSetIdentityPoolRolesRequest                SetIdentityPoolRolesRequest                                (Parm, NativeAccessSpecifierPublic)
//		CognitoIdentity_ECognitoIdentityError              errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdentityClientObject::SetIdentityPoolRoles(class UObject* WorldContextObject, bool* Success, const struct FSetIdentityPoolRolesRequest& SetIdentityPoolRolesRequest, CognitoIdentity_ECognitoIdentityError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdentity.CognitoIdentityClientObject.SetIdentityPoolRoles");

	UCognitoIdentityClientObject_SetIdentityPoolRoles_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.SetIdentityPoolRolesRequest = SetIdentityPoolRolesRequest;
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
//		Offset -> 0x0058DF30
//		Name   -> Function CognitoIdentity.CognitoIdentityClientObject.MergeDeveloperIdentities
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FMergeDeveloperIdentitiesRequest            MergeDeveloperIdentitiesRequest                            (Parm, NativeAccessSpecifierPublic)
//		struct FMergeDeveloperIdentitiesResult             MergeDeveloperIdentitiesResult                             (Parm, OutParm, NativeAccessSpecifierPublic)
//		CognitoIdentity_ECognitoIdentityError              errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdentityClientObject::MergeDeveloperIdentities(class UObject* WorldContextObject, bool* Success, const struct FMergeDeveloperIdentitiesRequest& MergeDeveloperIdentitiesRequest, struct FMergeDeveloperIdentitiesResult* MergeDeveloperIdentitiesResult, CognitoIdentity_ECognitoIdentityError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdentity.CognitoIdentityClientObject.MergeDeveloperIdentities");

	UCognitoIdentityClientObject_MergeDeveloperIdentities_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.MergeDeveloperIdentitiesRequest = MergeDeveloperIdentitiesRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (MergeDeveloperIdentitiesResult != nullptr)
		*MergeDeveloperIdentitiesResult = params.MergeDeveloperIdentitiesResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x0058DB70
//		Name   -> Function CognitoIdentity.CognitoIdentityClientObject.LookupDeveloperIdentity
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLookupDeveloperIdentityRequest             LookupDeveloperIdentityRequest                             (Parm, NativeAccessSpecifierPublic)
//		struct FLookupDeveloperIdentityResult              LookupDeveloperIdentityResult                              (Parm, OutParm, NativeAccessSpecifierPublic)
//		CognitoIdentity_ECognitoIdentityError              errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdentityClientObject::LookupDeveloperIdentity(class UObject* WorldContextObject, bool* Success, const struct FLookupDeveloperIdentityRequest& LookupDeveloperIdentityRequest, struct FLookupDeveloperIdentityResult* LookupDeveloperIdentityResult, CognitoIdentity_ECognitoIdentityError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdentity.CognitoIdentityClientObject.LookupDeveloperIdentity");

	UCognitoIdentityClientObject_LookupDeveloperIdentity_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.LookupDeveloperIdentityRequest = LookupDeveloperIdentityRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (LookupDeveloperIdentityResult != nullptr)
		*LookupDeveloperIdentityResult = params.LookupDeveloperIdentityResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x0058D810
//		Name   -> Function CognitoIdentity.CognitoIdentityClientObject.ListTagsForResource
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FCognitoIdentityListTagsForResourceRequest  listTagsForResourceRequest                                 (Parm, NativeAccessSpecifierPublic)
//		struct FCognitoIdentityListTagsForResourceResult   listTagsForResourceResult                                  (Parm, OutParm, NativeAccessSpecifierPublic)
//		CognitoIdentity_ECognitoIdentityError              errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdentityClientObject::ListTagsForResource(class UObject* WorldContextObject, bool* Success, const struct FCognitoIdentityListTagsForResourceRequest& listTagsForResourceRequest, struct FCognitoIdentityListTagsForResourceResult* listTagsForResourceResult, CognitoIdentity_ECognitoIdentityError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdentity.CognitoIdentityClientObject.ListTagsForResource");

	UCognitoIdentityClientObject_ListTagsForResource_Params params {};
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
//		Offset -> 0x0058D530
//		Name   -> Function CognitoIdentity.CognitoIdentityClientObject.ListIdentityPools
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FListIdentityPoolsRequest                   ListIdentityPoolsRequest                                   (Parm, NativeAccessSpecifierPublic)
//		struct FListIdentityPoolsResult                    ListIdentityPoolsResult                                    (Parm, OutParm, NativeAccessSpecifierPublic)
//		CognitoIdentity_ECognitoIdentityError              errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdentityClientObject::ListIdentityPools(class UObject* WorldContextObject, bool* Success, const struct FListIdentityPoolsRequest& ListIdentityPoolsRequest, struct FListIdentityPoolsResult* ListIdentityPoolsResult, CognitoIdentity_ECognitoIdentityError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdentity.CognitoIdentityClientObject.ListIdentityPools");

	UCognitoIdentityClientObject_ListIdentityPools_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.ListIdentityPoolsRequest = ListIdentityPoolsRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (ListIdentityPoolsResult != nullptr)
		*ListIdentityPoolsResult = params.ListIdentityPoolsResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x0058D1E0
//		Name   -> Function CognitoIdentity.CognitoIdentityClientObject.ListIdentities
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FListIdentitiesRequest                      ListIdentitiesRequest                                      (Parm, NativeAccessSpecifierPublic)
//		struct FListIdentitiesResult                       ListIdentitiesResult                                       (Parm, OutParm, NativeAccessSpecifierPublic)
//		CognitoIdentity_ECognitoIdentityError              errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdentityClientObject::ListIdentities(class UObject* WorldContextObject, bool* Success, const struct FListIdentitiesRequest& ListIdentitiesRequest, struct FListIdentitiesResult* ListIdentitiesResult, CognitoIdentity_ECognitoIdentityError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdentity.CognitoIdentityClientObject.ListIdentities");

	UCognitoIdentityClientObject_ListIdentities_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.ListIdentitiesRequest = ListIdentitiesRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (ListIdentitiesResult != nullptr)
		*ListIdentitiesResult = params.ListIdentitiesResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x004F5420
//		Name   -> Function CognitoIdentity.CognitoIdentityClientObject.GetServiceClientName
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UCognitoIdentityClientObject::GetServiceClientName()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdentity.CognitoIdentityClientObject.GetServiceClientName");

	UCognitoIdentityClientObject_GetServiceClientName_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0058CDB0
//		Name   -> Function CognitoIdentity.CognitoIdentityClientObject.GetOpenIdTokenForDeveloperIdentity
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FGetOpenIdTokenForDeveloperIdentityRequest  GetOpenIdTokenForDeveloperIdentityRequest                  (Parm, NativeAccessSpecifierPublic)
//		struct FGetOpenIdTokenForDeveloperIdentityResult   GetOpenIdTokenForDeveloperIdentityResult                   (Parm, OutParm, NativeAccessSpecifierPublic)
//		CognitoIdentity_ECognitoIdentityError              errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdentityClientObject::GetOpenIdTokenForDeveloperIdentity(class UObject* WorldContextObject, bool* Success, const struct FGetOpenIdTokenForDeveloperIdentityRequest& GetOpenIdTokenForDeveloperIdentityRequest, struct FGetOpenIdTokenForDeveloperIdentityResult* GetOpenIdTokenForDeveloperIdentityResult, CognitoIdentity_ECognitoIdentityError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdentity.CognitoIdentityClientObject.GetOpenIdTokenForDeveloperIdentity");

	UCognitoIdentityClientObject_GetOpenIdTokenForDeveloperIdentity_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.GetOpenIdTokenForDeveloperIdentityRequest = GetOpenIdTokenForDeveloperIdentityRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (GetOpenIdTokenForDeveloperIdentityResult != nullptr)
		*GetOpenIdTokenForDeveloperIdentityResult = params.GetOpenIdTokenForDeveloperIdentityResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x0058C9C0
//		Name   -> Function CognitoIdentity.CognitoIdentityClientObject.GetOpenIdToken
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FGetOpenIdTokenRequest                      GetOpenIdTokenRequest                                      (Parm, NativeAccessSpecifierPublic)
//		struct FGetOpenIdTokenResult                       GetOpenIdTokenResult                                       (Parm, OutParm, NativeAccessSpecifierPublic)
//		CognitoIdentity_ECognitoIdentityError              errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdentityClientObject::GetOpenIdToken(class UObject* WorldContextObject, bool* Success, const struct FGetOpenIdTokenRequest& GetOpenIdTokenRequest, struct FGetOpenIdTokenResult* GetOpenIdTokenResult, CognitoIdentity_ECognitoIdentityError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdentity.CognitoIdentityClientObject.GetOpenIdToken");

	UCognitoIdentityClientObject_GetOpenIdToken_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.GetOpenIdTokenRequest = GetOpenIdTokenRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (GetOpenIdTokenResult != nullptr)
		*GetOpenIdTokenResult = params.GetOpenIdTokenResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x0058C660
//		Name   -> Function CognitoIdentity.CognitoIdentityClientObject.GetIdentityPoolRoles
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FGetIdentityPoolRolesRequest                GetIdentityPoolRolesRequest                                (Parm, NativeAccessSpecifierPublic)
//		struct FGetIdentityPoolRolesResult                 GetIdentityPoolRolesResult                                 (Parm, OutParm, NativeAccessSpecifierPublic)
//		CognitoIdentity_ECognitoIdentityError              errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdentityClientObject::GetIdentityPoolRoles(class UObject* WorldContextObject, bool* Success, const struct FGetIdentityPoolRolesRequest& GetIdentityPoolRolesRequest, struct FGetIdentityPoolRolesResult* GetIdentityPoolRolesResult, CognitoIdentity_ECognitoIdentityError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdentity.CognitoIdentityClientObject.GetIdentityPoolRoles");

	UCognitoIdentityClientObject_GetIdentityPoolRoles_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.GetIdentityPoolRolesRequest = GetIdentityPoolRolesRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (GetIdentityPoolRolesResult != nullptr)
		*GetIdentityPoolRolesResult = params.GetIdentityPoolRolesResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x0058C250
//		Name   -> Function CognitoIdentity.CognitoIdentityClientObject.GetId
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FGetIdRequest                               GetIdRequest                                               (Parm, NativeAccessSpecifierPublic)
//		struct FGetIdResult                                GetIdResult                                                (Parm, OutParm, NativeAccessSpecifierPublic)
//		CognitoIdentity_ECognitoIdentityError              errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdentityClientObject::GetId(class UObject* WorldContextObject, bool* Success, const struct FGetIdRequest& GetIdRequest, struct FGetIdResult* GetIdResult, CognitoIdentity_ECognitoIdentityError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdentity.CognitoIdentityClientObject.GetId");

	UCognitoIdentityClientObject_GetId_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.GetIdRequest = GetIdRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (GetIdResult != nullptr)
		*GetIdResult = params.GetIdResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x0058BDD0
//		Name   -> Function CognitoIdentity.CognitoIdentityClientObject.GetCredentialsForIdentity
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FGetCredentialsForIdentityRequest           GetCredentialsForIdentityRequest                           (Parm, NativeAccessSpecifierPublic)
//		struct FGetCredentialsForIdentityResult            GetCredentialsForIdentityResult                            (Parm, OutParm, NativeAccessSpecifierPublic)
//		CognitoIdentity_ECognitoIdentityError              errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdentityClientObject::GetCredentialsForIdentity(class UObject* WorldContextObject, bool* Success, const struct FGetCredentialsForIdentityRequest& GetCredentialsForIdentityRequest, struct FGetCredentialsForIdentityResult* GetCredentialsForIdentityResult, CognitoIdentity_ECognitoIdentityError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdentity.CognitoIdentityClientObject.GetCredentialsForIdentity");

	UCognitoIdentityClientObject_GetCredentialsForIdentity_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.GetCredentialsForIdentityRequest = GetCredentialsForIdentityRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (GetCredentialsForIdentityResult != nullptr)
		*GetCredentialsForIdentityResult = params.GetCredentialsForIdentityResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x0058BA30
//		Name   -> Function CognitoIdentity.CognitoIdentityClientObject.DescribeIdentityPool
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FDescribeIdentityPoolRequest                DescribeIdentityPoolRequest                                (Parm, NativeAccessSpecifierPublic)
//		struct FDescribeIdentityPoolResult                 DescribeIdentityPoolResult                                 (Parm, OutParm, NativeAccessSpecifierPublic)
//		CognitoIdentity_ECognitoIdentityError              errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdentityClientObject::DescribeIdentityPool(class UObject* WorldContextObject, bool* Success, const struct FDescribeIdentityPoolRequest& DescribeIdentityPoolRequest, struct FDescribeIdentityPoolResult* DescribeIdentityPoolResult, CognitoIdentity_ECognitoIdentityError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdentity.CognitoIdentityClientObject.DescribeIdentityPool");

	UCognitoIdentityClientObject_DescribeIdentityPool_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.DescribeIdentityPoolRequest = DescribeIdentityPoolRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (DescribeIdentityPoolResult != nullptr)
		*DescribeIdentityPoolResult = params.DescribeIdentityPoolResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x0058B720
//		Name   -> Function CognitoIdentity.CognitoIdentityClientObject.DescribeIdentity
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FDescribeIdentityRequest                    DescribeIdentityRequest                                    (Parm, NativeAccessSpecifierPublic)
//		struct FDescribeIdentityResult                     DescribeIdentityResult                                     (Parm, OutParm, NativeAccessSpecifierPublic)
//		CognitoIdentity_ECognitoIdentityError              errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdentityClientObject::DescribeIdentity(class UObject* WorldContextObject, bool* Success, const struct FDescribeIdentityRequest& DescribeIdentityRequest, struct FDescribeIdentityResult* DescribeIdentityResult, CognitoIdentity_ECognitoIdentityError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdentity.CognitoIdentityClientObject.DescribeIdentity");

	UCognitoIdentityClientObject_DescribeIdentity_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.DescribeIdentityRequest = DescribeIdentityRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (DescribeIdentityResult != nullptr)
		*DescribeIdentityResult = params.DescribeIdentityResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x0058B4C0
//		Name   -> Function CognitoIdentity.CognitoIdentityClientObject.DeleteIdentityPool
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FDeleteIdentityPoolRequest                  DeleteIdentityPoolRequest                                  (Parm, NativeAccessSpecifierPublic)
//		CognitoIdentity_ECognitoIdentityError              errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdentityClientObject::DeleteIdentityPool(class UObject* WorldContextObject, bool* Success, const struct FDeleteIdentityPoolRequest& DeleteIdentityPoolRequest, CognitoIdentity_ECognitoIdentityError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdentity.CognitoIdentityClientObject.DeleteIdentityPool");

	UCognitoIdentityClientObject_DeleteIdentityPool_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.DeleteIdentityPoolRequest = DeleteIdentityPoolRequest;
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
//		Offset -> 0x0058B190
//		Name   -> Function CognitoIdentity.CognitoIdentityClientObject.DeleteIdentities
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FDeleteIdentitiesRequest                    DeleteIdentitiesRequest                                    (Parm, NativeAccessSpecifierPublic)
//		struct FDeleteIdentitiesResult                     DeleteIdentitiesResult                                     (Parm, OutParm, NativeAccessSpecifierPublic)
//		CognitoIdentity_ECognitoIdentityError              errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdentityClientObject::DeleteIdentities(class UObject* WorldContextObject, bool* Success, const struct FDeleteIdentitiesRequest& DeleteIdentitiesRequest, struct FDeleteIdentitiesResult* DeleteIdentitiesResult, CognitoIdentity_ECognitoIdentityError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdentity.CognitoIdentityClientObject.DeleteIdentities");

	UCognitoIdentityClientObject_DeleteIdentities_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.DeleteIdentitiesRequest = DeleteIdentitiesRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (DeleteIdentitiesResult != nullptr)
		*DeleteIdentitiesResult = params.DeleteIdentitiesResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x0058ACB0
//		Name   -> Function CognitoIdentity.CognitoIdentityClientObject.CreateIdentityPool
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FCreateIdentityPoolRequest                  CreateIdentityPoolRequest                                  (Parm, NativeAccessSpecifierPublic)
//		struct FCreateIdentityPoolResult                   CreateIdentityPoolResult                                   (Parm, OutParm, NativeAccessSpecifierPublic)
//		CognitoIdentity_ECognitoIdentityError              errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCognitoIdentityClientObject::CreateIdentityPool(class UObject* WorldContextObject, bool* Success, const struct FCreateIdentityPoolRequest& CreateIdentityPoolRequest, struct FCreateIdentityPoolResult* CreateIdentityPoolResult, CognitoIdentity_ECognitoIdentityError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdentity.CognitoIdentityClientObject.CreateIdentityPool");

	UCognitoIdentityClientObject_CreateIdentityPool_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.CreateIdentityPoolRequest = CreateIdentityPoolRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (CreateIdentityPoolResult != nullptr)
		*CreateIdentityPoolResult = params.CreateIdentityPoolResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x0058AAD0
//		Name   -> Function CognitoIdentity.CognitoIdentityClientObject.CreateCognitoIdentityObject
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FAWSCredentials                             credentials                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FAWSClientConfiguration                     clientConfiguration                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		class UCognitoIdentityClientObject*                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCognitoIdentityClientObject* UCognitoIdentityClientObject::STATIC_CreateCognitoIdentityObject(const struct FAWSCredentials& credentials, const struct FAWSClientConfiguration& clientConfiguration)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CognitoIdentity.CognitoIdentityClientObject.CreateCognitoIdentityObject");

	UCognitoIdentityClientObject_CreateCognitoIdentityObject_Params params {};
	params.credentials = credentials;
	params.clientConfiguration = clientConfiguration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
