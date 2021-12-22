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
//		Offset -> 0x006044A0
//		Name   -> Function DynamoDBStreams.DynamoDBStreamsClientObject.ListStreams
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FListStreamsRequest                         ListStreamsRequest                                         (Parm, NativeAccessSpecifierPublic)
//		struct FListStreamsResult                          ListStreamsResult                                          (Parm, OutParm, NativeAccessSpecifierPublic)
//		DynamoDBStreams_EDynamoDBStreamsError              errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UDynamoDBStreamsClientObject::ListStreams(class UObject* WorldContextObject, bool* Success, const struct FListStreamsRequest& ListStreamsRequest, struct FListStreamsResult* ListStreamsResult, DynamoDBStreams_EDynamoDBStreamsError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DynamoDBStreams.DynamoDBStreamsClientObject.ListStreams");

	UDynamoDBStreamsClientObject_ListStreams_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.ListStreamsRequest = ListStreamsRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (ListStreamsResult != nullptr)
		*ListStreamsResult = params.ListStreamsResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x00604160
//		Name   -> Function DynamoDBStreams.DynamoDBStreamsClientObject.GetShardIterator
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FGetShardIteratorRequest                    GetShardIteratorRequest                                    (Parm, NativeAccessSpecifierPublic)
//		struct FGetShardIteratorResult                     GetShardIteratorResult                                     (Parm, OutParm, NativeAccessSpecifierPublic)
//		DynamoDBStreams_EDynamoDBStreamsError              errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UDynamoDBStreamsClientObject::GetShardIterator(class UObject* WorldContextObject, bool* Success, const struct FGetShardIteratorRequest& GetShardIteratorRequest, struct FGetShardIteratorResult* GetShardIteratorResult, DynamoDBStreams_EDynamoDBStreamsError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DynamoDBStreams.DynamoDBStreamsClientObject.GetShardIterator");

	UDynamoDBStreamsClientObject_GetShardIterator_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.GetShardIteratorRequest = GetShardIteratorRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (GetShardIteratorResult != nullptr)
		*GetShardIteratorResult = params.GetShardIteratorResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x004F5420
//		Name   -> Function DynamoDBStreams.DynamoDBStreamsClientObject.GetServiceClientName
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UDynamoDBStreamsClientObject::GetServiceClientName()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DynamoDBStreams.DynamoDBStreamsClientObject.GetServiceClientName");

	UDynamoDBStreamsClientObject_GetServiceClientName_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00603E80
//		Name   -> Function DynamoDBStreams.DynamoDBStreamsClientObject.GetRecords
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FGetRecordsRequest                          GetRecordsRequest                                          (Parm, NativeAccessSpecifierPublic)
//		struct FGetRecordsResult                           GetRecordsResult                                           (Parm, OutParm, NativeAccessSpecifierPublic)
//		DynamoDBStreams_EDynamoDBStreamsError              errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UDynamoDBStreamsClientObject::GetRecords(class UObject* WorldContextObject, bool* Success, const struct FGetRecordsRequest& GetRecordsRequest, struct FGetRecordsResult* GetRecordsResult, DynamoDBStreams_EDynamoDBStreamsError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DynamoDBStreams.DynamoDBStreamsClientObject.GetRecords");

	UDynamoDBStreamsClientObject_GetRecords_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.GetRecordsRequest = GetRecordsRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (GetRecordsResult != nullptr)
		*GetRecordsResult = params.GetRecordsResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x00603B30
//		Name   -> Function DynamoDBStreams.DynamoDBStreamsClientObject.DescribeStream
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FDescribeStreamRequest                      DescribeStreamRequest                                      (Parm, NativeAccessSpecifierPublic)
//		struct FDescribeStreamResult                       DescribeStreamResult                                       (Parm, OutParm, NativeAccessSpecifierPublic)
//		DynamoDBStreams_EDynamoDBStreamsError              errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     errorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UDynamoDBStreamsClientObject::DescribeStream(class UObject* WorldContextObject, bool* Success, const struct FDescribeStreamRequest& DescribeStreamRequest, struct FDescribeStreamResult* DescribeStreamResult, DynamoDBStreams_EDynamoDBStreamsError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DynamoDBStreams.DynamoDBStreamsClientObject.DescribeStream");

	UDynamoDBStreamsClientObject_DescribeStream_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.DescribeStreamRequest = DescribeStreamRequest;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (DescribeStreamResult != nullptr)
		*DescribeStreamResult = params.DescribeStreamResult;
	if (errorType != nullptr)
		*errorType = params.errorType;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;

}


// Function:
//		Offset -> 0x00603950
//		Name   -> Function DynamoDBStreams.DynamoDBStreamsClientObject.CreateDynamoDBStreamsObject
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FAWSCredentials                             credentials                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FAWSClientConfiguration                     clientConfiguration                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		class UDynamoDBStreamsClientObject*                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UDynamoDBStreamsClientObject* UDynamoDBStreamsClientObject::STATIC_CreateDynamoDBStreamsObject(const struct FAWSCredentials& credentials, const struct FAWSClientConfiguration& clientConfiguration)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DynamoDBStreams.DynamoDBStreamsClientObject.CreateDynamoDBStreamsObject");

	UDynamoDBStreamsClientObject_CreateDynamoDBStreamsObject_Params params {};
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
