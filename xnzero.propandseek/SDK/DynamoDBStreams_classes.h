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

// Class DynamoDBStreams.DynamoDBStreamsClientObject
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UDynamoDBStreamsClientObject : public UObject
{
public:
	unsigned char                                      UnknownData_SH47[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DynamoDBStreams.DynamoDBStreamsClientObject");
		return ptr;
	}



	void ListStreams(class UObject* WorldContextObject, bool* Success, const struct FListStreamsRequest& ListStreamsRequest, struct FListStreamsResult* ListStreamsResult, DynamoDBStreams_EDynamoDBStreamsError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void GetShardIterator(class UObject* WorldContextObject, bool* Success, const struct FGetShardIteratorRequest& GetShardIteratorRequest, struct FGetShardIteratorResult* GetShardIteratorResult, DynamoDBStreams_EDynamoDBStreamsError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	struct FString GetServiceClientName();
	void GetRecords(class UObject* WorldContextObject, bool* Success, const struct FGetRecordsRequest& GetRecordsRequest, struct FGetRecordsResult* GetRecordsResult, DynamoDBStreams_EDynamoDBStreamsError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void DescribeStream(class UObject* WorldContextObject, bool* Success, const struct FDescribeStreamRequest& DescribeStreamRequest, struct FDescribeStreamResult* DescribeStreamResult, DynamoDBStreams_EDynamoDBStreamsError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	class UDynamoDBStreamsClientObject* STATIC_CreateDynamoDBStreamsObject(const struct FAWSCredentials& credentials, const struct FAWSClientConfiguration& clientConfiguration);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
