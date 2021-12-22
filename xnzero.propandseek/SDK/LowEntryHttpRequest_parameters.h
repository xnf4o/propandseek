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

// Function LowEntryHttpRequest.LowEntryHttpRequest.SetUrlParameter
struct ULowEntryHttpRequest_SetUrlParameter_Params
{
	struct FString                                     Key;                                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Value;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryHttpRequest.LowEntryHttpRequest.SetUrlCustomType
struct ULowEntryHttpRequest_SetUrlCustomType_Params
{
	struct FString                                     Type;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     URL;                                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryHttpRequest.LowEntryHttpRequest.SetUrl
struct ULowEntryHttpRequest_SetUrl_Params
{
	LowEntryHttpRequest_ELowEntryHttpRequestType       Type;                                                      // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     URL;                                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryHttpRequest.LowEntryHttpRequest.SetHeader
struct ULowEntryHttpRequest_SetHeader_Params
{
	struct FString                                     Key;                                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Value;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryHttpRequest.LowEntryHttpRequest.SetContentAsStringParameters
struct ULowEntryHttpRequest_SetContentAsStringParameters_Params
{
	struct FString                                     Key;                                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Value;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryHttpRequest.LowEntryHttpRequest.SetContentAsString
struct ULowEntryHttpRequest_SetContentAsString_Params
{
	struct FString                                     Data;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryHttpRequest.LowEntryHttpRequest.SetContentAsJsonString
struct ULowEntryHttpRequest_SetContentAsJsonString_Params
{
	struct FString                                     Data;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryHttpRequest.LowEntryHttpRequest.SetContent
struct ULowEntryHttpRequest_SetContent_Params
{
	TArray<unsigned char>                              Data;                                                      // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function LowEntryHttpRequest.LowEntryHttpRequest.IsExecutingRequest
struct ULowEntryHttpRequest_IsExecutingRequest_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryHttpRequest.LowEntryHttpRequest.GetUrlWithUrlParameters
struct ULowEntryHttpRequest_GetUrlWithUrlParameters_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryHttpRequest.LowEntryHttpRequest.GetSentPercentage
struct ULowEntryHttpRequest_GetSentPercentage_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryHttpRequest.LowEntryHttpRequest.GetReceivedPercentage
struct ULowEntryHttpRequest_GetReceivedPercentage_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryHttpRequest.LowEntryHttpRequest.GetContentAsStringParameters
struct ULowEntryHttpRequest_GetContentAsStringParameters_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryHttpRequest.LowEntryHttpRequest.GetBytesToSend
struct ULowEntryHttpRequest_GetBytesToSend_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryHttpRequest.LowEntryHttpRequest.GetBytesToReceive
struct ULowEntryHttpRequest_GetBytesToReceive_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryHttpRequest.LowEntryHttpRequest.GetBytesSent
struct ULowEntryHttpRequest_GetBytesSent_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryHttpRequest.LowEntryHttpRequest.GetBytesReceived
struct ULowEntryHttpRequest_GetBytesReceived_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryHttpRequest.LowEntryHttpRequest.ExecuteRequestEvent
struct ULowEntryHttpRequest_ExecuteRequestEvent_Params
{
	struct FScriptDelegate                             OnComplete;                                                // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

// Function LowEntryHttpRequest.LowEntryHttpRequest.ExecuteRequest
struct ULowEntryHttpRequest_ExecuteRequest_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	class ULowEntryHttpRequestResponse*                Response;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryHttpRequest.LowEntryHttpRequest.CancelRequest
struct ULowEntryHttpRequest_CancelRequest_Params
{
};

// Function LowEntryHttpRequest.LowEntryHttpRequestLibrary.Request_Create
struct ULowEntryHttpRequestLibrary_Request_Create_Params
{
	class ULowEntryHttpRequest*                        ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryHttpRequest.LowEntryHttpRequestResponse.WasSuccessful
struct ULowEntryHttpRequestResponse_WasSuccessful_Params
{
	LowEntryHttpRequest_ELowEntryHttpRequestSuccess    Branch;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryHttpRequest.LowEntryHttpRequestResponse.GetWasSuccessful
struct ULowEntryHttpRequestResponse_GetWasSuccessful_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryHttpRequest.LowEntryHttpRequestResponse.GetUrl
struct ULowEntryHttpRequestResponse_GetUrl_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryHttpRequest.LowEntryHttpRequestResponse.GetResponseCode
struct ULowEntryHttpRequestResponse_GetResponseCode_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryHttpRequest.LowEntryHttpRequestResponse.GetHeader
struct ULowEntryHttpRequestResponse_GetHeader_Params
{
	struct FString                                     Key;                                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryHttpRequest.LowEntryHttpRequestResponse.GetContentType
struct ULowEntryHttpRequestResponse_GetContentType_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryHttpRequest.LowEntryHttpRequestResponse.GetContentLength
struct ULowEntryHttpRequestResponse_GetContentLength_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryHttpRequest.LowEntryHttpRequestResponse.GetContentAsString
struct ULowEntryHttpRequestResponse_GetContentAsString_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryHttpRequest.LowEntryHttpRequestResponse.GetContent
struct ULowEntryHttpRequestResponse_GetContent_Params
{
	TArray<unsigned char>                              ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function LowEntryHttpRequest.LowEntryHttpRequestResponse.GetAllHeaders
struct ULowEntryHttpRequestResponse_GetAllHeaders_Params
{
	TArray<struct FString>                             ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
