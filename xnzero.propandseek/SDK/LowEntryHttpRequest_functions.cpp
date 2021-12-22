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
//		Offset -> 0x004A3CE0
//		Name   -> Function LowEntryHttpRequest.LowEntryHttpRequest.SetUrlParameter
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryHttpRequest::SetUrlParameter(const struct FString& Key, const struct FString& Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryHttpRequest.LowEntryHttpRequest.SetUrlParameter");

	ULowEntryHttpRequest_SetUrlParameter_Params params {};
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x004A3BF0
//		Name   -> Function LowEntryHttpRequest.LowEntryHttpRequest.SetUrlCustomType
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Type                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     URL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryHttpRequest::SetUrlCustomType(const struct FString& Type, const struct FString& URL)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryHttpRequest.LowEntryHttpRequest.SetUrlCustomType");

	ULowEntryHttpRequest_SetUrlCustomType_Params params {};
	params.Type = Type;
	params.URL = URL;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x004A3B10
//		Name   -> Function LowEntryHttpRequest.LowEntryHttpRequest.SetUrl
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		LowEntryHttpRequest_ELowEntryHttpRequestType       Type                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     URL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryHttpRequest::SetUrl(LowEntryHttpRequest_ELowEntryHttpRequestType Type, const struct FString& URL)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryHttpRequest.LowEntryHttpRequest.SetUrl");

	ULowEntryHttpRequest_SetUrl_Params params {};
	params.Type = Type;
	params.URL = URL;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x004A3A20
//		Name   -> Function LowEntryHttpRequest.LowEntryHttpRequest.SetHeader
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryHttpRequest::SetHeader(const struct FString& Key, const struct FString& Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryHttpRequest.LowEntryHttpRequest.SetHeader");

	ULowEntryHttpRequest_SetHeader_Params params {};
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x004A3930
//		Name   -> Function LowEntryHttpRequest.LowEntryHttpRequest.SetContentAsStringParameters
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryHttpRequest::SetContentAsStringParameters(const struct FString& Key, const struct FString& Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryHttpRequest.LowEntryHttpRequest.SetContentAsStringParameters");

	ULowEntryHttpRequest_SetContentAsStringParameters_Params params {};
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x004A3890
//		Name   -> Function LowEntryHttpRequest.LowEntryHttpRequest.SetContentAsString
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Data                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryHttpRequest::SetContentAsString(const struct FString& Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryHttpRequest.LowEntryHttpRequest.SetContentAsString");

	ULowEntryHttpRequest_SetContentAsString_Params params {};
	params.Data = Data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x004A37F0
//		Name   -> Function LowEntryHttpRequest.LowEntryHttpRequest.SetContentAsJsonString
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Data                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryHttpRequest::SetContentAsJsonString(const struct FString& Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryHttpRequest.LowEntryHttpRequest.SetContentAsJsonString");

	ULowEntryHttpRequest_SetContentAsJsonString_Params params {};
	params.Data = Data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x004A3740
//		Name   -> Function LowEntryHttpRequest.LowEntryHttpRequest.SetContent
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<unsigned char>                              Data                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void ULowEntryHttpRequest::SetContent(TArray<unsigned char> Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryHttpRequest.LowEntryHttpRequest.SetContent");

	ULowEntryHttpRequest_SetContent_Params params {};
	params.Data = Data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x004A36E0
//		Name   -> Function LowEntryHttpRequest.LowEntryHttpRequest.IsExecutingRequest
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULowEntryHttpRequest::IsExecutingRequest()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryHttpRequest.LowEntryHttpRequest.IsExecutingRequest");

	ULowEntryHttpRequest_IsExecutingRequest_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x004A3630
//		Name   -> Function LowEntryHttpRequest.LowEntryHttpRequest.GetUrlWithUrlParameters
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString ULowEntryHttpRequest::GetUrlWithUrlParameters()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryHttpRequest.LowEntryHttpRequest.GetUrlWithUrlParameters");

	ULowEntryHttpRequest_GetUrlWithUrlParameters_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x004A3580
//		Name   -> Function LowEntryHttpRequest.LowEntryHttpRequest.GetSentPercentage
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float ULowEntryHttpRequest::GetSentPercentage()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryHttpRequest.LowEntryHttpRequest.GetSentPercentage");

	ULowEntryHttpRequest_GetSentPercentage_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x004A3520
//		Name   -> Function LowEntryHttpRequest.LowEntryHttpRequest.GetReceivedPercentage
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float ULowEntryHttpRequest::GetReceivedPercentage()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryHttpRequest.LowEntryHttpRequest.GetReceivedPercentage");

	ULowEntryHttpRequest_GetReceivedPercentage_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x004A3300
//		Name   -> Function LowEntryHttpRequest.LowEntryHttpRequest.GetContentAsStringParameters
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString ULowEntryHttpRequest::GetContentAsStringParameters()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryHttpRequest.LowEntryHttpRequest.GetContentAsStringParameters");

	ULowEntryHttpRequest_GetContentAsStringParameters_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x004A31D0
//		Name   -> Function LowEntryHttpRequest.LowEntryHttpRequest.GetBytesToSend
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int ULowEntryHttpRequest::GetBytesToSend()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryHttpRequest.LowEntryHttpRequest.GetBytesToSend");

	ULowEntryHttpRequest_GetBytesToSend_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x004A31A0
//		Name   -> Function LowEntryHttpRequest.LowEntryHttpRequest.GetBytesToReceive
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int ULowEntryHttpRequest::GetBytesToReceive()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryHttpRequest.LowEntryHttpRequest.GetBytesToReceive");

	ULowEntryHttpRequest_GetBytesToReceive_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x004A3170
//		Name   -> Function LowEntryHttpRequest.LowEntryHttpRequest.GetBytesSent
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int ULowEntryHttpRequest::GetBytesSent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryHttpRequest.LowEntryHttpRequest.GetBytesSent");

	ULowEntryHttpRequest_GetBytesSent_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x004A3140
//		Name   -> Function LowEntryHttpRequest.LowEntryHttpRequest.GetBytesReceived
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int ULowEntryHttpRequest::GetBytesReceived()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryHttpRequest.LowEntryHttpRequest.GetBytesReceived");

	ULowEntryHttpRequest_GetBytesReceived_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x004A2FB0
//		Name   -> Function LowEntryHttpRequest.LowEntryHttpRequest.ExecuteRequestEvent
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FScriptDelegate                             OnComplete                                                 (ConstParm, Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
void ULowEntryHttpRequest::ExecuteRequestEvent(const struct FScriptDelegate& OnComplete)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryHttpRequest.LowEntryHttpRequest.ExecuteRequestEvent");

	ULowEntryHttpRequest_ExecuteRequestEvent_Params params {};
	params.OnComplete = OnComplete;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x004A2E70
//		Name   -> Function LowEntryHttpRequest.LowEntryHttpRequest.ExecuteRequest
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		class ULowEntryHttpRequestResponse*                Response                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryHttpRequest::ExecuteRequest(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class ULowEntryHttpRequestResponse** Response)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryHttpRequest.LowEntryHttpRequest.ExecuteRequest");

	ULowEntryHttpRequest_ExecuteRequest_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Response != nullptr)
		*Response = params.Response;

}


// Function:
//		Offset -> 0x004A2E50
//		Name   -> Function LowEntryHttpRequest.LowEntryHttpRequest.CancelRequest
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void ULowEntryHttpRequest::CancelRequest()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryHttpRequest.LowEntryHttpRequest.CancelRequest");

	ULowEntryHttpRequest_CancelRequest_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x004A3710
//		Name   -> Function LowEntryHttpRequest.LowEntryHttpRequestLibrary.Request_Create
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class ULowEntryHttpRequest*                        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULowEntryHttpRequest* ULowEntryHttpRequestLibrary::STATIC_Request_Create()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryHttpRequest.LowEntryHttpRequestLibrary.Request_Create");

	ULowEntryHttpRequestLibrary_Request_Create_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x004A3DD0
//		Name   -> Function LowEntryHttpRequest.LowEntryHttpRequestResponse.WasSuccessful
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		LowEntryHttpRequest_ELowEntryHttpRequestSuccess    Branch                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryHttpRequestResponse::WasSuccessful(LowEntryHttpRequest_ELowEntryHttpRequestSuccess* Branch)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryHttpRequest.LowEntryHttpRequestResponse.WasSuccessful");

	ULowEntryHttpRequestResponse_WasSuccessful_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Branch != nullptr)
		*Branch = params.Branch;

}


// Function:
//		Offset -> 0x004A36B0
//		Name   -> Function LowEntryHttpRequest.LowEntryHttpRequestResponse.GetWasSuccessful
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULowEntryHttpRequestResponse::GetWasSuccessful()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryHttpRequest.LowEntryHttpRequestResponse.GetWasSuccessful");

	ULowEntryHttpRequestResponse_GetWasSuccessful_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x004A35B0
//		Name   -> Function LowEntryHttpRequest.LowEntryHttpRequestResponse.GetUrl
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString ULowEntryHttpRequestResponse::GetUrl()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryHttpRequest.LowEntryHttpRequestResponse.GetUrl");

	ULowEntryHttpRequestResponse_GetUrl_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x004A3550
//		Name   -> Function LowEntryHttpRequest.LowEntryHttpRequestResponse.GetResponseCode
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int ULowEntryHttpRequestResponse::GetResponseCode()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryHttpRequest.LowEntryHttpRequestResponse.GetResponseCode");

	ULowEntryHttpRequestResponse_GetResponseCode_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x004A3430
//		Name   -> Function LowEntryHttpRequest.LowEntryHttpRequestResponse.GetHeader
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString ULowEntryHttpRequestResponse::GetHeader(const struct FString& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryHttpRequest.LowEntryHttpRequestResponse.GetHeader");

	ULowEntryHttpRequestResponse_GetHeader_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x004A33B0
//		Name   -> Function LowEntryHttpRequest.LowEntryHttpRequestResponse.GetContentType
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString ULowEntryHttpRequestResponse::GetContentType()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryHttpRequest.LowEntryHttpRequestResponse.GetContentType");

	ULowEntryHttpRequestResponse_GetContentType_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x004A3380
//		Name   -> Function LowEntryHttpRequest.LowEntryHttpRequestResponse.GetContentLength
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int ULowEntryHttpRequestResponse::GetContentLength()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryHttpRequest.LowEntryHttpRequestResponse.GetContentLength");

	ULowEntryHttpRequestResponse_GetContentLength_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x004A3280
//		Name   -> Function LowEntryHttpRequest.LowEntryHttpRequestResponse.GetContentAsString
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString ULowEntryHttpRequestResponse::GetContentAsString()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryHttpRequest.LowEntryHttpRequestResponse.GetContentAsString");

	ULowEntryHttpRequestResponse_GetContentAsString_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x004A3200
//		Name   -> Function LowEntryHttpRequest.LowEntryHttpRequestResponse.GetContent
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<unsigned char>                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<unsigned char> ULowEntryHttpRequestResponse::GetContent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryHttpRequest.LowEntryHttpRequestResponse.GetContent");

	ULowEntryHttpRequestResponse_GetContent_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x004A3060
//		Name   -> Function LowEntryHttpRequest.LowEntryHttpRequestResponse.GetAllHeaders
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<struct FString>                             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FString> ULowEntryHttpRequestResponse::GetAllHeaders()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryHttpRequest.LowEntryHttpRequestResponse.GetAllHeaders");

	ULowEntryHttpRequestResponse_GetAllHeaders_Params params {};

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
