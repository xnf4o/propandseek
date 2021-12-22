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
//		Offset -> 0x005F48B0
//		Name   -> Function DynamoDB.DynamoDBClientObject.UpdateTimeToLive
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUpdateTimeToLiveRequest                    UpdateTimeToLiveRequest                                    (Parm, NativeAccessSpecifierPublic)
//		struct FUpdateTimeToLiveResult                     UpdateTimeToLiveResult                                     (Parm, OutParm, NativeAccessSpecifierPublic)
//		DynamoDB_EDynamoDBError                            errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UDynamoDBClientObject::UpdateTimeToLive(class UObject* WorldContextObject, bool* Success, const struct FUpdateTimeToLiveRequest& UpdateTimeToLiveRequest, struct FUpdateTimeToLiveResult* UpdateTimeToLiveResult, DynamoDB_EDynamoDBError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DynamoDB.DynamoDBClientObject.UpdateTimeToLive");

	UDynamoDBClientObject_UpdateTimeToLive_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.UpdateTimeToLiveRequest = UpdateTimeToLiveRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (UpdateTimeToLiveResult != nullptr)
		*UpdateTimeToLiveResult = params.UpdateTimeToLiveResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x005F43F0
//		Name   -> Function DynamoDB.DynamoDBClientObject.UpdateTable
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUpdateTableRequest                         UpdateTableRequest                                         (Parm, NativeAccessSpecifierPublic)
//		struct FUpdateTableResult                          UpdateTableResult                                          (Parm, OutParm, NativeAccessSpecifierPublic)
//		DynamoDB_EDynamoDBError                            errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UDynamoDBClientObject::UpdateTable(class UObject* WorldContextObject, bool* Success, const struct FUpdateTableRequest& UpdateTableRequest, struct FUpdateTableResult* UpdateTableResult, DynamoDB_EDynamoDBError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DynamoDB.DynamoDBClientObject.UpdateTable");

	UDynamoDBClientObject_UpdateTable_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.UpdateTableRequest = UpdateTableRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (UpdateTableResult != nullptr)
		*UpdateTableResult = params.UpdateTableResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x005F4080
//		Name   -> Function DynamoDB.DynamoDBClientObject.UpdateItem
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUpdateItemRequest                          UpdateItemRequest                                          (Parm, NativeAccessSpecifierPublic)
//		struct FUpdateItemResult                           UpdateItemResult                                           (Parm, OutParm, NativeAccessSpecifierPublic)
//		DynamoDB_EDynamoDBError                            errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UDynamoDBClientObject::UpdateItem(class UObject* WorldContextObject, bool* Success, const struct FUpdateItemRequest& UpdateItemRequest, struct FUpdateItemResult* UpdateItemResult, DynamoDB_EDynamoDBError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DynamoDB.DynamoDBClientObject.UpdateItem");

	UDynamoDBClientObject_UpdateItem_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.UpdateItemRequest = UpdateItemRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (UpdateItemResult != nullptr)
		*UpdateItemResult = params.UpdateItemResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x005F3C30
//		Name   -> Function DynamoDB.DynamoDBClientObject.UpdateGlobalTableSettings
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUpdateGlobalTableSettingsRequest           UpdateGlobalTableSettingsRequest                           (Parm, NativeAccessSpecifierPublic)
//		struct FUpdateGlobalTableSettingsResult            UpdateGlobalTableSettingsResult                            (Parm, OutParm, NativeAccessSpecifierPublic)
//		DynamoDB_EDynamoDBError                            errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UDynamoDBClientObject::UpdateGlobalTableSettings(class UObject* WorldContextObject, bool* Success, const struct FUpdateGlobalTableSettingsRequest& UpdateGlobalTableSettingsRequest, struct FUpdateGlobalTableSettingsResult* UpdateGlobalTableSettingsResult, DynamoDB_EDynamoDBError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DynamoDB.DynamoDBClientObject.UpdateGlobalTableSettings");

	UDynamoDBClientObject_UpdateGlobalTableSettings_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.UpdateGlobalTableSettingsRequest = UpdateGlobalTableSettingsRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (UpdateGlobalTableSettingsResult != nullptr)
		*UpdateGlobalTableSettingsResult = params.UpdateGlobalTableSettingsResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x005F38B0
//		Name   -> Function DynamoDB.DynamoDBClientObject.UpdateGlobalTable
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUpdateGlobalTableRequest                   UpdateGlobalTableRequest                                   (Parm, NativeAccessSpecifierPublic)
//		struct FUpdateGlobalTableResult                    UpdateGlobalTableResult                                    (Parm, OutParm, NativeAccessSpecifierPublic)
//		DynamoDB_EDynamoDBError                            errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UDynamoDBClientObject::UpdateGlobalTable(class UObject* WorldContextObject, bool* Success, const struct FUpdateGlobalTableRequest& UpdateGlobalTableRequest, struct FUpdateGlobalTableResult* UpdateGlobalTableResult, DynamoDB_EDynamoDBError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DynamoDB.DynamoDBClientObject.UpdateGlobalTable");

	UDynamoDBClientObject_UpdateGlobalTable_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.UpdateGlobalTableRequest = UpdateGlobalTableRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (UpdateGlobalTableResult != nullptr)
		*UpdateGlobalTableResult = params.UpdateGlobalTableResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x005F35F0
//		Name   -> Function DynamoDB.DynamoDBClientObject.UpdateContinuousBackups
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUpdateContinuousBackupsRequest             UpdateContinuousBackupsRequest                             (Parm, NativeAccessSpecifierPublic)
//		struct FUpdateContinuousBackupsResult              UpdateContinuousBackupsResult                              (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
//		DynamoDB_EDynamoDBError                            errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UDynamoDBClientObject::UpdateContinuousBackups(class UObject* WorldContextObject, bool* Success, const struct FUpdateContinuousBackupsRequest& UpdateContinuousBackupsRequest, struct FUpdateContinuousBackupsResult* UpdateContinuousBackupsResult, DynamoDB_EDynamoDBError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DynamoDB.DynamoDBClientObject.UpdateContinuousBackups");

	UDynamoDBClientObject_UpdateContinuousBackups_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.UpdateContinuousBackupsRequest = UpdateContinuousBackupsRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (UpdateContinuousBackupsResult != nullptr)
		*UpdateContinuousBackupsResult = params.UpdateContinuousBackupsResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x005F3320
//		Name   -> Function DynamoDB.DynamoDBClientObject.UntagResource
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FDynamoDBUntagResourceRequest               untagResourceRequest                                       (Parm, NativeAccessSpecifierPublic)
//		DynamoDB_EDynamoDBError                            errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UDynamoDBClientObject::UntagResource(class UObject* WorldContextObject, bool* Success, const struct FDynamoDBUntagResourceRequest& untagResourceRequest, DynamoDB_EDynamoDBError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DynamoDB.DynamoDBClientObject.UntagResource");

	UDynamoDBClientObject_UntagResource_Params params {};
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
//		Offset -> 0x005F2F60
//		Name   -> Function DynamoDB.DynamoDBClientObject.TransactWriteItems
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FTransactWriteItemsRequest                  TransactWriteItemsRequest                                  (Parm, NativeAccessSpecifierPublic)
//		struct FTransactWriteItemsResult                   TransactWriteItemsResult                                   (Parm, OutParm, NativeAccessSpecifierPublic)
//		DynamoDB_EDynamoDBError                            errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UDynamoDBClientObject::TransactWriteItems(class UObject* WorldContextObject, bool* Success, const struct FTransactWriteItemsRequest& TransactWriteItemsRequest, struct FTransactWriteItemsResult* TransactWriteItemsResult, DynamoDB_EDynamoDBError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DynamoDB.DynamoDBClientObject.TransactWriteItems");

	UDynamoDBClientObject_TransactWriteItems_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.TransactWriteItemsRequest = TransactWriteItemsRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (TransactWriteItemsResult != nullptr)
		*TransactWriteItemsResult = params.TransactWriteItemsResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x005F2C40
//		Name   -> Function DynamoDB.DynamoDBClientObject.TransactGetItems
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FTransactGetItemsRequest                    TransactGetItemsRequest                                    (Parm, NativeAccessSpecifierPublic)
//		struct FTransactGetItemsResult                     TransactGetItemsResult                                     (Parm, OutParm, NativeAccessSpecifierPublic)
//		DynamoDB_EDynamoDBError                            errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UDynamoDBClientObject::TransactGetItems(class UObject* WorldContextObject, bool* Success, const struct FTransactGetItemsRequest& TransactGetItemsRequest, struct FTransactGetItemsResult* TransactGetItemsResult, DynamoDB_EDynamoDBError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DynamoDB.DynamoDBClientObject.TransactGetItems");

	UDynamoDBClientObject_TransactGetItems_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.TransactGetItemsRequest = TransactGetItemsRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (TransactGetItemsResult != nullptr)
		*TransactGetItemsResult = params.TransactGetItemsResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x005F2950
//		Name   -> Function DynamoDB.DynamoDBClientObject.TagResource
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FDynamoDBTagResourceRequest                 tagResourceRequest                                         (Parm, NativeAccessSpecifierPublic)
//		DynamoDB_EDynamoDBError                            errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UDynamoDBClientObject::TagResource(class UObject* WorldContextObject, bool* Success, const struct FDynamoDBTagResourceRequest& tagResourceRequest, DynamoDB_EDynamoDBError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DynamoDB.DynamoDBClientObject.TagResource");

	UDynamoDBClientObject_TagResource_Params params {};
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
//		Offset -> 0x005F2490
//		Name   -> Function DynamoDB.DynamoDBClientObject.Scan
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FScanRequest                                ScanRequest                                                (Parm, NativeAccessSpecifierPublic)
//		struct FScanResult                                 ScanResult                                                 (Parm, OutParm, NativeAccessSpecifierPublic)
//		DynamoDB_EDynamoDBError                            errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UDynamoDBClientObject::Scan(class UObject* WorldContextObject, bool* Success, const struct FScanRequest& ScanRequest, struct FScanResult* ScanResult, DynamoDB_EDynamoDBError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DynamoDB.DynamoDBClientObject.Scan");

	UDynamoDBClientObject_Scan_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.ScanRequest = ScanRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (ScanResult != nullptr)
		*ScanResult = params.ScanResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x005F20D0
//		Name   -> Function DynamoDB.DynamoDBClientObject.RestoreTableToPointInTime
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FRestoreTableToPointInTimeRequest           RestoreTableToPointInTimeRequest                           (Parm, NativeAccessSpecifierPublic)
//		struct FRestoreTableToPointInTimeResult            RestoreTableToPointInTimeResult                            (Parm, OutParm, NativeAccessSpecifierPublic)
//		DynamoDB_EDynamoDBError                            errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UDynamoDBClientObject::RestoreTableToPointInTime(class UObject* WorldContextObject, bool* Success, const struct FRestoreTableToPointInTimeRequest& RestoreTableToPointInTimeRequest, struct FRestoreTableToPointInTimeResult* RestoreTableToPointInTimeResult, DynamoDB_EDynamoDBError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DynamoDB.DynamoDBClientObject.RestoreTableToPointInTime");

	UDynamoDBClientObject_RestoreTableToPointInTime_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.RestoreTableToPointInTimeRequest = RestoreTableToPointInTimeRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (RestoreTableToPointInTimeResult != nullptr)
		*RestoreTableToPointInTimeResult = params.RestoreTableToPointInTimeResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x005F1D30
//		Name   -> Function DynamoDB.DynamoDBClientObject.RestoreTableFromBackup
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FRestoreTableFromBackupRequest              RestoreTableFromBackupRequest                              (Parm, NativeAccessSpecifierPublic)
//		struct FRestoreTableFromBackupResult               RestoreTableFromBackupResult                               (Parm, OutParm, NativeAccessSpecifierPublic)
//		DynamoDB_EDynamoDBError                            errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UDynamoDBClientObject::RestoreTableFromBackup(class UObject* WorldContextObject, bool* Success, const struct FRestoreTableFromBackupRequest& RestoreTableFromBackupRequest, struct FRestoreTableFromBackupResult* RestoreTableFromBackupResult, DynamoDB_EDynamoDBError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DynamoDB.DynamoDBClientObject.RestoreTableFromBackup");

	UDynamoDBClientObject_RestoreTableFromBackup_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.RestoreTableFromBackupRequest = RestoreTableFromBackupRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (RestoreTableFromBackupResult != nullptr)
		*RestoreTableFromBackupResult = params.RestoreTableFromBackupResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x005F1870
//		Name   -> Function DynamoDB.DynamoDBClientObject.Query
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FQueryRequest                               QueryRequest                                               (Parm, NativeAccessSpecifierPublic)
//		struct FQueryResult                                QueryResult                                                (Parm, OutParm, NativeAccessSpecifierPublic)
//		DynamoDB_EDynamoDBError                            errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UDynamoDBClientObject::Query(class UObject* WorldContextObject, bool* Success, const struct FQueryRequest& QueryRequest, struct FQueryResult* QueryResult, DynamoDB_EDynamoDBError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DynamoDB.DynamoDBClientObject.Query");

	UDynamoDBClientObject_Query_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.QueryRequest = QueryRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (QueryResult != nullptr)
		*QueryResult = params.QueryResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x005F13F0
//		Name   -> Function DynamoDB.DynamoDBClientObject.PutItem
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FPutItemRequest                             PutItemRequest                                             (Parm, NativeAccessSpecifierPublic)
//		struct FPutItemResult                              PutItemResult                                              (Parm, OutParm, NativeAccessSpecifierPublic)
//		DynamoDB_EDynamoDBError                            errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UDynamoDBClientObject::PutItem(class UObject* WorldContextObject, bool* Success, const struct FPutItemRequest& PutItemRequest, struct FPutItemResult* PutItemResult, DynamoDB_EDynamoDBError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DynamoDB.DynamoDBClientObject.PutItem");

	UDynamoDBClientObject_PutItem_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.PutItemRequest = PutItemRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (PutItemResult != nullptr)
		*PutItemResult = params.PutItemResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x005F10E0
//		Name   -> Function DynamoDB.DynamoDBClientObject.ListTagsOfResource
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FListTagsOfResourceRequest                  ListTagsOfResourceRequest                                  (Parm, NativeAccessSpecifierPublic)
//		struct FListTagsOfResourceResult                   ListTagsOfResourceResult                                   (Parm, OutParm, NativeAccessSpecifierPublic)
//		DynamoDB_EDynamoDBError                            errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UDynamoDBClientObject::ListTagsOfResource(class UObject* WorldContextObject, bool* Success, const struct FListTagsOfResourceRequest& ListTagsOfResourceRequest, struct FListTagsOfResourceResult* ListTagsOfResourceResult, DynamoDB_EDynamoDBError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DynamoDB.DynamoDBClientObject.ListTagsOfResource");

	UDynamoDBClientObject_ListTagsOfResource_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.ListTagsOfResourceRequest = ListTagsOfResourceRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (ListTagsOfResourceResult != nullptr)
		*ListTagsOfResourceResult = params.ListTagsOfResourceResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x005F0DD0
//		Name   -> Function DynamoDB.DynamoDBClientObject.ListTables
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FListTablesRequest                          ListTablesRequest                                          (Parm, NativeAccessSpecifierPublic)
//		struct FListTablesResult                           ListTablesResult                                           (Parm, OutParm, NativeAccessSpecifierPublic)
//		DynamoDB_EDynamoDBError                            errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UDynamoDBClientObject::ListTables(class UObject* WorldContextObject, bool* Success, const struct FListTablesRequest& ListTablesRequest, struct FListTablesResult* ListTablesResult, DynamoDB_EDynamoDBError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DynamoDB.DynamoDBClientObject.ListTables");

	UDynamoDBClientObject_ListTables_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.ListTablesRequest = ListTablesRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (ListTablesResult != nullptr)
		*ListTablesResult = params.ListTablesResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x005F0AB0
//		Name   -> Function DynamoDB.DynamoDBClientObject.ListGlobalTables
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FListGlobalTablesRequest                    ListGlobalTablesRequest                                    (Parm, NativeAccessSpecifierPublic)
//		struct FListGlobalTablesResult                     ListGlobalTablesResult                                     (Parm, OutParm, NativeAccessSpecifierPublic)
//		DynamoDB_EDynamoDBError                            errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UDynamoDBClientObject::ListGlobalTables(class UObject* WorldContextObject, bool* Success, const struct FListGlobalTablesRequest& ListGlobalTablesRequest, struct FListGlobalTablesResult* ListGlobalTablesResult, DynamoDB_EDynamoDBError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DynamoDB.DynamoDBClientObject.ListGlobalTables");

	UDynamoDBClientObject_ListGlobalTables_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.ListGlobalTablesRequest = ListGlobalTablesRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (ListGlobalTablesResult != nullptr)
		*ListGlobalTablesResult = params.ListGlobalTablesResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x005F0760
//		Name   -> Function DynamoDB.DynamoDBClientObject.ListBackups
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FListBackupsRequest                         ListBackupsRequest                                         (Parm, NativeAccessSpecifierPublic)
//		struct FListBackupsResult                          ListBackupsResult                                          (Parm, OutParm, NativeAccessSpecifierPublic)
//		DynamoDB_EDynamoDBError                            errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UDynamoDBClientObject::ListBackups(class UObject* WorldContextObject, bool* Success, const struct FListBackupsRequest& ListBackupsRequest, struct FListBackupsResult* ListBackupsResult, DynamoDB_EDynamoDBError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DynamoDB.DynamoDBClientObject.ListBackups");

	UDynamoDBClientObject_ListBackups_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.ListBackupsRequest = ListBackupsRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (ListBackupsResult != nullptr)
		*ListBackupsResult = params.ListBackupsResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x004F5420
//		Name   -> Function DynamoDB.DynamoDBClientObject.GetServiceClientName
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UDynamoDBClientObject::GetServiceClientName()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DynamoDB.DynamoDBClientObject.GetServiceClientName");

	UDynamoDBClientObject_GetServiceClientName_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x005F0170
//		Name   -> Function DynamoDB.DynamoDBClientObject.GetItem
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FGetItemRequest                             GetItemRequest                                             (Parm, NativeAccessSpecifierPublic)
//		struct FGetItemResult                              GetItemResult                                              (Parm, OutParm, NativeAccessSpecifierPublic)
//		DynamoDB_EDynamoDBError                            errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UDynamoDBClientObject::GetItem(class UObject* WorldContextObject, bool* Success, const struct FGetItemRequest& GetItemRequest, struct FGetItemResult* GetItemResult, DynamoDB_EDynamoDBError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DynamoDB.DynamoDBClientObject.GetItem");

	UDynamoDBClientObject_GetItem_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.GetItemRequest = GetItemRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (GetItemResult != nullptr)
		*GetItemResult = params.GetItemResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x005EFEB0
//		Name   -> Function DynamoDB.DynamoDBClientObject.DescribeTimeToLive
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FDescribeTimeToLiveRequest                  DescribeTimeToLiveRequest                                  (Parm, NativeAccessSpecifierPublic)
//		struct FDescribeTimeToLiveResult                   DescribeTimeToLiveResult                                   (Parm, OutParm, NativeAccessSpecifierPublic)
//		DynamoDB_EDynamoDBError                            errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UDynamoDBClientObject::DescribeTimeToLive(class UObject* WorldContextObject, bool* Success, const struct FDescribeTimeToLiveRequest& DescribeTimeToLiveRequest, struct FDescribeTimeToLiveResult* DescribeTimeToLiveResult, DynamoDB_EDynamoDBError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DynamoDB.DynamoDBClientObject.DescribeTimeToLive");

	UDynamoDBClientObject_DescribeTimeToLive_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.DescribeTimeToLiveRequest = DescribeTimeToLiveRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (DescribeTimeToLiveResult != nullptr)
		*DescribeTimeToLiveResult = params.DescribeTimeToLiveResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x005EFB50
//		Name   -> Function DynamoDB.DynamoDBClientObject.DescribeTable
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FDescribeTableRequest                       DescribeTableRequest                                       (Parm, NativeAccessSpecifierPublic)
//		struct FDescribeTableResult                        DescribeTableResult                                        (Parm, OutParm, NativeAccessSpecifierPublic)
//		DynamoDB_EDynamoDBError                            errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UDynamoDBClientObject::DescribeTable(class UObject* WorldContextObject, bool* Success, const struct FDescribeTableRequest& DescribeTableRequest, struct FDescribeTableResult* DescribeTableResult, DynamoDB_EDynamoDBError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DynamoDB.DynamoDBClientObject.DescribeTable");

	UDynamoDBClientObject_DescribeTable_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.DescribeTableRequest = DescribeTableRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (DescribeTableResult != nullptr)
		*DescribeTableResult = params.DescribeTableResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x005EF8B0
//		Name   -> Function DynamoDB.DynamoDBClientObject.DescribeLimits
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FDescribeLimitsRequest                      DescribeLimitsRequest                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		struct FDescribeLimitsResult                       DescribeLimitsResult                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		DynamoDB_EDynamoDBError                            errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UDynamoDBClientObject::DescribeLimits(class UObject* WorldContextObject, bool* Success, const struct FDescribeLimitsRequest& DescribeLimitsRequest, struct FDescribeLimitsResult* DescribeLimitsResult, DynamoDB_EDynamoDBError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DynamoDB.DynamoDBClientObject.DescribeLimits");

	UDynamoDBClientObject_DescribeLimits_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.DescribeLimitsRequest = DescribeLimitsRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (DescribeLimitsResult != nullptr)
		*DescribeLimitsResult = params.DescribeLimitsResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x005EF5D0
//		Name   -> Function DynamoDB.DynamoDBClientObject.DescribeGlobalTableSettings
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FDescribeGlobalTableSettingsRequest         DescribeGlobalTableSettingsRequest                         (Parm, NativeAccessSpecifierPublic)
//		struct FDescribeGlobalTableSettingsResult          DescribeGlobalTableSettingsResult                          (Parm, OutParm, NativeAccessSpecifierPublic)
//		DynamoDB_EDynamoDBError                            errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UDynamoDBClientObject::DescribeGlobalTableSettings(class UObject* WorldContextObject, bool* Success, const struct FDescribeGlobalTableSettingsRequest& DescribeGlobalTableSettingsRequest, struct FDescribeGlobalTableSettingsResult* DescribeGlobalTableSettingsResult, DynamoDB_EDynamoDBError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DynamoDB.DynamoDBClientObject.DescribeGlobalTableSettings");

	UDynamoDBClientObject_DescribeGlobalTableSettings_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.DescribeGlobalTableSettingsRequest = DescribeGlobalTableSettingsRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (DescribeGlobalTableSettingsResult != nullptr)
		*DescribeGlobalTableSettingsResult = params.DescribeGlobalTableSettingsResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x005EF2F0
//		Name   -> Function DynamoDB.DynamoDBClientObject.DescribeGlobalTable
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FDescribeGlobalTableRequest                 DescribeGlobalTableRequest                                 (Parm, NativeAccessSpecifierPublic)
//		struct FDescribeGlobalTableResult                  DescribeGlobalTableResult                                  (Parm, OutParm, NativeAccessSpecifierPublic)
//		DynamoDB_EDynamoDBError                            errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UDynamoDBClientObject::DescribeGlobalTable(class UObject* WorldContextObject, bool* Success, const struct FDescribeGlobalTableRequest& DescribeGlobalTableRequest, struct FDescribeGlobalTableResult* DescribeGlobalTableResult, DynamoDB_EDynamoDBError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DynamoDB.DynamoDBClientObject.DescribeGlobalTable");

	UDynamoDBClientObject_DescribeGlobalTable_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.DescribeGlobalTableRequest = DescribeGlobalTableRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (DescribeGlobalTableResult != nullptr)
		*DescribeGlobalTableResult = params.DescribeGlobalTableResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x005EF020
//		Name   -> Function DynamoDB.DynamoDBClientObject.DescribeEndpoints
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FDescribeEndpointsRequest                   DescribeEndpointsRequest                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		struct FDescribeEndpointsResult                    DescribeEndpointsResult                                    (Parm, OutParm, NativeAccessSpecifierPublic)
//		DynamoDB_EDynamoDBError                            errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UDynamoDBClientObject::DescribeEndpoints(class UObject* WorldContextObject, bool* Success, const struct FDescribeEndpointsRequest& DescribeEndpointsRequest, struct FDescribeEndpointsResult* DescribeEndpointsResult, DynamoDB_EDynamoDBError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DynamoDB.DynamoDBClientObject.DescribeEndpoints");

	UDynamoDBClientObject_DescribeEndpoints_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.DescribeEndpointsRequest = DescribeEndpointsRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (DescribeEndpointsResult != nullptr)
		*DescribeEndpointsResult = params.DescribeEndpointsResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x005EED70
//		Name   -> Function DynamoDB.DynamoDBClientObject.DescribeContinuousBackups
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FDescribeContinuousBackupsRequest           DescribeContinuousBackupsRequest                           (Parm, NativeAccessSpecifierPublic)
//		struct FDescribeContinuousBackupsResult            DescribeContinuousBackupsResult                            (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
//		DynamoDB_EDynamoDBError                            errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UDynamoDBClientObject::DescribeContinuousBackups(class UObject* WorldContextObject, bool* Success, const struct FDescribeContinuousBackupsRequest& DescribeContinuousBackupsRequest, struct FDescribeContinuousBackupsResult* DescribeContinuousBackupsResult, DynamoDB_EDynamoDBError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DynamoDB.DynamoDBClientObject.DescribeContinuousBackups");

	UDynamoDBClientObject_DescribeContinuousBackups_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.DescribeContinuousBackupsRequest = DescribeContinuousBackupsRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (DescribeContinuousBackupsResult != nullptr)
		*DescribeContinuousBackupsResult = params.DescribeContinuousBackupsResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x005EEA30
//		Name   -> Function DynamoDB.DynamoDBClientObject.DescribeBackup
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FDescribeBackupRequest                      DescribeBackupRequest                                      (Parm, NativeAccessSpecifierPublic)
//		struct FDescribeBackupResult                       DescribeBackupResult                                       (Parm, OutParm, NativeAccessSpecifierPublic)
//		DynamoDB_EDynamoDBError                            errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UDynamoDBClientObject::DescribeBackup(class UObject* WorldContextObject, bool* Success, const struct FDescribeBackupRequest& DescribeBackupRequest, struct FDescribeBackupResult* DescribeBackupResult, DynamoDB_EDynamoDBError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DynamoDB.DynamoDBClientObject.DescribeBackup");

	UDynamoDBClientObject_DescribeBackup_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.DescribeBackupRequest = DescribeBackupRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (DescribeBackupResult != nullptr)
		*DescribeBackupResult = params.DescribeBackupResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x005EE6D0
//		Name   -> Function DynamoDB.DynamoDBClientObject.DeleteTable
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FDeleteTableRequest                         DeleteTableRequest                                         (Parm, NativeAccessSpecifierPublic)
//		struct FDeleteTableResult                          DeleteTableResult                                          (Parm, OutParm, NativeAccessSpecifierPublic)
//		DynamoDB_EDynamoDBError                            errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UDynamoDBClientObject::DeleteTable(class UObject* WorldContextObject, bool* Success, const struct FDeleteTableRequest& DeleteTableRequest, struct FDeleteTableResult* DeleteTableResult, DynamoDB_EDynamoDBError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DynamoDB.DynamoDBClientObject.DeleteTable");

	UDynamoDBClientObject_DeleteTable_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.DeleteTableRequest = DeleteTableRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (DeleteTableResult != nullptr)
		*DeleteTableResult = params.DeleteTableResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x005EE250
//		Name   -> Function DynamoDB.DynamoDBClientObject.DeleteItem
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FDeleteItemRequest                          DeleteItemRequest                                          (Parm, NativeAccessSpecifierPublic)
//		struct FDeleteItemResult                           DeleteItemResult                                           (Parm, OutParm, NativeAccessSpecifierPublic)
//		DynamoDB_EDynamoDBError                            errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UDynamoDBClientObject::DeleteItem(class UObject* WorldContextObject, bool* Success, const struct FDeleteItemRequest& DeleteItemRequest, struct FDeleteItemResult* DeleteItemResult, DynamoDB_EDynamoDBError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DynamoDB.DynamoDBClientObject.DeleteItem");

	UDynamoDBClientObject_DeleteItem_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.DeleteItemRequest = DeleteItemRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (DeleteItemResult != nullptr)
		*DeleteItemResult = params.DeleteItemResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x005EDF10
//		Name   -> Function DynamoDB.DynamoDBClientObject.DeleteBackup
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FDeleteBackupRequest                        DeleteBackupRequest                                        (Parm, NativeAccessSpecifierPublic)
//		struct FDeleteBackupResult                         DeleteBackupResult                                         (Parm, OutParm, NativeAccessSpecifierPublic)
//		DynamoDB_EDynamoDBError                            errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UDynamoDBClientObject::DeleteBackup(class UObject* WorldContextObject, bool* Success, const struct FDeleteBackupRequest& DeleteBackupRequest, struct FDeleteBackupResult* DeleteBackupResult, DynamoDB_EDynamoDBError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DynamoDB.DynamoDBClientObject.DeleteBackup");

	UDynamoDBClientObject_DeleteBackup_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.DeleteBackupRequest = DeleteBackupRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (DeleteBackupResult != nullptr)
		*DeleteBackupResult = params.DeleteBackupResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x005EDB60
//		Name   -> Function DynamoDB.DynamoDBClientObject.CreateTable
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FCreateTableRequest                         CreateTableRequest                                         (Parm, NativeAccessSpecifierPublic)
//		struct FCreateTableResult                          CreateTableResult                                          (Parm, OutParm, NativeAccessSpecifierPublic)
//		DynamoDB_EDynamoDBError                            errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UDynamoDBClientObject::CreateTable(class UObject* WorldContextObject, bool* Success, const struct FCreateTableRequest& CreateTableRequest, struct FCreateTableResult* CreateTableResult, DynamoDB_EDynamoDBError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DynamoDB.DynamoDBClientObject.CreateTable");

	UDynamoDBClientObject_CreateTable_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.CreateTableRequest = CreateTableRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (CreateTableResult != nullptr)
		*CreateTableResult = params.CreateTableResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x005ED7D0
//		Name   -> Function DynamoDB.DynamoDBClientObject.CreateGlobalTable
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FCreateGlobalTableRequest                   CreateGlobalTableRequest                                   (Parm, NativeAccessSpecifierPublic)
//		struct FCreateGlobalTableResult                    CreateGlobalTableResult                                    (Parm, OutParm, NativeAccessSpecifierPublic)
//		DynamoDB_EDynamoDBError                            errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UDynamoDBClientObject::CreateGlobalTable(class UObject* WorldContextObject, bool* Success, const struct FCreateGlobalTableRequest& CreateGlobalTableRequest, struct FCreateGlobalTableResult* CreateGlobalTableResult, DynamoDB_EDynamoDBError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DynamoDB.DynamoDBClientObject.CreateGlobalTable");

	UDynamoDBClientObject_CreateGlobalTable_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.CreateGlobalTableRequest = CreateGlobalTableRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (CreateGlobalTableResult != nullptr)
		*CreateGlobalTableResult = params.CreateGlobalTableResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x005ED5F0
//		Name   -> Function DynamoDB.DynamoDBClientObject.CreateDynamoDBObject
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FAWSCredentials                             credentials                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FAWSClientConfiguration                     clientConfiguration                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		class UDynamoDBClientObject*                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UDynamoDBClientObject* UDynamoDBClientObject::STATIC_CreateDynamoDBObject(const struct FAWSCredentials& credentials, const struct FAWSClientConfiguration& clientConfiguration)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DynamoDB.DynamoDBClientObject.CreateDynamoDBObject");

	UDynamoDBClientObject_CreateDynamoDBObject_Params params {};
	params.credentials = credentials;
	params.clientConfiguration = clientConfiguration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x005ED2D0
//		Name   -> Function DynamoDB.DynamoDBClientObject.CreateBackup
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FCreateBackupRequest                        CreateBackupRequest                                        (Parm, NativeAccessSpecifierPublic)
//		struct FCreateBackupResult                         CreateBackupResult                                         (Parm, OutParm, NativeAccessSpecifierPublic)
//		DynamoDB_EDynamoDBError                            errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UDynamoDBClientObject::CreateBackup(class UObject* WorldContextObject, bool* Success, const struct FCreateBackupRequest& CreateBackupRequest, struct FCreateBackupResult* CreateBackupResult, DynamoDB_EDynamoDBError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DynamoDB.DynamoDBClientObject.CreateBackup");

	UDynamoDBClientObject_CreateBackup_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.CreateBackupRequest = CreateBackupRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (CreateBackupResult != nullptr)
		*CreateBackupResult = params.CreateBackupResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x005ECFC0
//		Name   -> Function DynamoDB.DynamoDBClientObject.BatchWriteItem
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FBatchWriteItemRequest                      BatchWriteItemRequest                                      (Parm, NativeAccessSpecifierPublic)
//		struct FBatchWriteItemResult                       BatchWriteItemResult                                       (Parm, OutParm, NativeAccessSpecifierPublic)
//		DynamoDB_EDynamoDBError                            errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UDynamoDBClientObject::BatchWriteItem(class UObject* WorldContextObject, bool* Success, const struct FBatchWriteItemRequest& BatchWriteItemRequest, struct FBatchWriteItemResult* BatchWriteItemResult, DynamoDB_EDynamoDBError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DynamoDB.DynamoDBClientObject.BatchWriteItem");

	UDynamoDBClientObject_BatchWriteItem_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.BatchWriteItemRequest = BatchWriteItemRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (BatchWriteItemResult != nullptr)
		*BatchWriteItemResult = params.BatchWriteItemResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x005ECB60
//		Name   -> Function DynamoDB.DynamoDBClientObject.BatchGetItem
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FBatchGetItemRequest                        BatchGetItemRequest                                        (Parm, NativeAccessSpecifierPublic)
//		struct FBatchGetItemResult                         BatchGetItemResult                                         (Parm, OutParm, NativeAccessSpecifierPublic)
//		DynamoDB_EDynamoDBError                            errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UDynamoDBClientObject::BatchGetItem(class UObject* WorldContextObject, bool* Success, const struct FBatchGetItemRequest& BatchGetItemRequest, struct FBatchGetItemResult* BatchGetItemResult, DynamoDB_EDynamoDBError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DynamoDB.DynamoDBClientObject.BatchGetItem");

	UDynamoDBClientObject_BatchGetItem_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.BatchGetItemRequest = BatchGetItemRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (BatchGetItemResult != nullptr)
		*BatchGetItemResult = params.BatchGetItemResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
