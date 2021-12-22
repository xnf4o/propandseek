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
// Classes
//---------------------------------------------------------------------------

// Class LowEntryHttpRequest.LowEntryHttpRequest
// 0x00E8 (FullSize[0x0110] - InheritedSize[0x0028])
class ULowEntryHttpRequest : public UObject
{
public:
	unsigned char                                      UnknownData_32A0[0x10];                                    // 0x0028(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<struct FString, struct FString>               UrlParameters;                                             // 0x0038(0x0050) (ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<struct FString, struct FString>               ContentStringParameters;                                   // 0x0088(0x0050) (ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               JsonData;                                                  // 0x00D8(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SFTT[0x3];                                     // 0x00D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                KeepAliveCount;                                            // 0x00DC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KZDI[0x8];                                     // 0x00E0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptDelegate                             ExecutionEvent;                                            // 0x00E8(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	class ULowEntryHttpRequestResponse*                ExecutionResponse;                                         // 0x00F8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BytesToSend;                                               // 0x0100(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BytesSent;                                                 // 0x0104(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BytesToReceive;                                            // 0x0108(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BytesReceived;                                             // 0x010C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class LowEntryHttpRequest.LowEntryHttpRequest");
		return ptr;
	}



	void SetUrlParameter(const struct FString& Key, const struct FString& Value);
	void SetUrlCustomType(const struct FString& Type, const struct FString& URL);
	void SetUrl(LowEntryHttpRequest_ELowEntryHttpRequestType Type, const struct FString& URL);
	void SetHeader(const struct FString& Key, const struct FString& Value);
	void SetContentAsStringParameters(const struct FString& Key, const struct FString& Value);
	void SetContentAsString(const struct FString& Data);
	void SetContentAsJsonString(const struct FString& Data);
	void SetContent(TArray<unsigned char> Data);
	bool IsExecutingRequest();
	struct FString GetUrlWithUrlParameters();
	float GetSentPercentage();
	float GetReceivedPercentage();
	struct FString GetContentAsStringParameters();
	int GetBytesToSend();
	int GetBytesToReceive();
	int GetBytesSent();
	int GetBytesReceived();
	void ExecuteRequestEvent(const struct FScriptDelegate& OnComplete);
	void ExecuteRequest(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class ULowEntryHttpRequestResponse** Response);
	void CancelRequest();
};

// Class LowEntryHttpRequest.LowEntryHttpRequestLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class ULowEntryHttpRequestLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class LowEntryHttpRequest.LowEntryHttpRequestLibrary");
		return ptr;
	}



	class ULowEntryHttpRequest* STATIC_Request_Create();
};

// Class LowEntryHttpRequest.LowEntryHttpRequestResponse
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class ULowEntryHttpRequestResponse : public UObject
{
public:
	unsigned char                                      UnknownData_2A1N[0x10];                                    // 0x0028(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               Successful;                                                // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WU2J[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class LowEntryHttpRequest.LowEntryHttpRequestResponse");
		return ptr;
	}



	void WasSuccessful(LowEntryHttpRequest_ELowEntryHttpRequestSuccess* Branch);
	bool GetWasSuccessful();
	struct FString GetUrl();
	int GetResponseCode();
	struct FString GetHeader(const struct FString& Key);
	struct FString GetContentType();
	int GetContentLength();
	struct FString GetContentAsString();
	TArray<unsigned char> GetContent();
	TArray<struct FString> GetAllHeaders();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
