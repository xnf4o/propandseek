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

// Class DynamoDB.DynamoDBClientObject
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UDynamoDBClientObject : public UObject
{
public:
	unsigned char                                      UnknownData_UK15[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DynamoDB.DynamoDBClientObject");
		return ptr;
	}



	void UpdateTimeToLive(class UObject* WorldContextObject, bool* Success, const struct FUpdateTimeToLiveRequest& UpdateTimeToLiveRequest, struct FUpdateTimeToLiveResult* UpdateTimeToLiveResult, DynamoDB_EDynamoDBError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void UpdateTable(class UObject* WorldContextObject, bool* Success, const struct FUpdateTableRequest& UpdateTableRequest, struct FUpdateTableResult* UpdateTableResult, DynamoDB_EDynamoDBError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void UpdateItem(class UObject* WorldContextObject, bool* Success, const struct FUpdateItemRequest& UpdateItemRequest, struct FUpdateItemResult* UpdateItemResult, DynamoDB_EDynamoDBError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void UpdateGlobalTableSettings(class UObject* WorldContextObject, bool* Success, const struct FUpdateGlobalTableSettingsRequest& UpdateGlobalTableSettingsRequest, struct FUpdateGlobalTableSettingsResult* UpdateGlobalTableSettingsResult, DynamoDB_EDynamoDBError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void UpdateGlobalTable(class UObject* WorldContextObject, bool* Success, const struct FUpdateGlobalTableRequest& UpdateGlobalTableRequest, struct FUpdateGlobalTableResult* UpdateGlobalTableResult, DynamoDB_EDynamoDBError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void UpdateContinuousBackups(class UObject* WorldContextObject, bool* Success, const struct FUpdateContinuousBackupsRequest& UpdateContinuousBackupsRequest, struct FUpdateContinuousBackupsResult* UpdateContinuousBackupsResult, DynamoDB_EDynamoDBError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void UntagResource(class UObject* WorldContextObject, bool* Success, const struct FDynamoDBUntagResourceRequest& untagResourceRequest, DynamoDB_EDynamoDBError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void TransactWriteItems(class UObject* WorldContextObject, bool* Success, const struct FTransactWriteItemsRequest& TransactWriteItemsRequest, struct FTransactWriteItemsResult* TransactWriteItemsResult, DynamoDB_EDynamoDBError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void TransactGetItems(class UObject* WorldContextObject, bool* Success, const struct FTransactGetItemsRequest& TransactGetItemsRequest, struct FTransactGetItemsResult* TransactGetItemsResult, DynamoDB_EDynamoDBError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void TagResource(class UObject* WorldContextObject, bool* Success, const struct FDynamoDBTagResourceRequest& tagResourceRequest, DynamoDB_EDynamoDBError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void Scan(class UObject* WorldContextObject, bool* Success, const struct FScanRequest& ScanRequest, struct FScanResult* ScanResult, DynamoDB_EDynamoDBError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void RestoreTableToPointInTime(class UObject* WorldContextObject, bool* Success, const struct FRestoreTableToPointInTimeRequest& RestoreTableToPointInTimeRequest, struct FRestoreTableToPointInTimeResult* RestoreTableToPointInTimeResult, DynamoDB_EDynamoDBError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void RestoreTableFromBackup(class UObject* WorldContextObject, bool* Success, const struct FRestoreTableFromBackupRequest& RestoreTableFromBackupRequest, struct FRestoreTableFromBackupResult* RestoreTableFromBackupResult, DynamoDB_EDynamoDBError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void Query(class UObject* WorldContextObject, bool* Success, const struct FQueryRequest& QueryRequest, struct FQueryResult* QueryResult, DynamoDB_EDynamoDBError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void PutItem(class UObject* WorldContextObject, bool* Success, const struct FPutItemRequest& PutItemRequest, struct FPutItemResult* PutItemResult, DynamoDB_EDynamoDBError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void ListTagsOfResource(class UObject* WorldContextObject, bool* Success, const struct FListTagsOfResourceRequest& ListTagsOfResourceRequest, struct FListTagsOfResourceResult* ListTagsOfResourceResult, DynamoDB_EDynamoDBError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void ListTables(class UObject* WorldContextObject, bool* Success, const struct FListTablesRequest& ListTablesRequest, struct FListTablesResult* ListTablesResult, DynamoDB_EDynamoDBError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void ListGlobalTables(class UObject* WorldContextObject, bool* Success, const struct FListGlobalTablesRequest& ListGlobalTablesRequest, struct FListGlobalTablesResult* ListGlobalTablesResult, DynamoDB_EDynamoDBError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void ListBackups(class UObject* WorldContextObject, bool* Success, const struct FListBackupsRequest& ListBackupsRequest, struct FListBackupsResult* ListBackupsResult, DynamoDB_EDynamoDBError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	struct FString GetServiceClientName();
	void GetItem(class UObject* WorldContextObject, bool* Success, const struct FGetItemRequest& GetItemRequest, struct FGetItemResult* GetItemResult, DynamoDB_EDynamoDBError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void DescribeTimeToLive(class UObject* WorldContextObject, bool* Success, const struct FDescribeTimeToLiveRequest& DescribeTimeToLiveRequest, struct FDescribeTimeToLiveResult* DescribeTimeToLiveResult, DynamoDB_EDynamoDBError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void DescribeTable(class UObject* WorldContextObject, bool* Success, const struct FDescribeTableRequest& DescribeTableRequest, struct FDescribeTableResult* DescribeTableResult, DynamoDB_EDynamoDBError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void DescribeLimits(class UObject* WorldContextObject, bool* Success, const struct FDescribeLimitsRequest& DescribeLimitsRequest, struct FDescribeLimitsResult* DescribeLimitsResult, DynamoDB_EDynamoDBError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void DescribeGlobalTableSettings(class UObject* WorldContextObject, bool* Success, const struct FDescribeGlobalTableSettingsRequest& DescribeGlobalTableSettingsRequest, struct FDescribeGlobalTableSettingsResult* DescribeGlobalTableSettingsResult, DynamoDB_EDynamoDBError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void DescribeGlobalTable(class UObject* WorldContextObject, bool* Success, const struct FDescribeGlobalTableRequest& DescribeGlobalTableRequest, struct FDescribeGlobalTableResult* DescribeGlobalTableResult, DynamoDB_EDynamoDBError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void DescribeEndpoints(class UObject* WorldContextObject, bool* Success, const struct FDescribeEndpointsRequest& DescribeEndpointsRequest, struct FDescribeEndpointsResult* DescribeEndpointsResult, DynamoDB_EDynamoDBError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void DescribeContinuousBackups(class UObject* WorldContextObject, bool* Success, const struct FDescribeContinuousBackupsRequest& DescribeContinuousBackupsRequest, struct FDescribeContinuousBackupsResult* DescribeContinuousBackupsResult, DynamoDB_EDynamoDBError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void DescribeBackup(class UObject* WorldContextObject, bool* Success, const struct FDescribeBackupRequest& DescribeBackupRequest, struct FDescribeBackupResult* DescribeBackupResult, DynamoDB_EDynamoDBError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void DeleteTable(class UObject* WorldContextObject, bool* Success, const struct FDeleteTableRequest& DeleteTableRequest, struct FDeleteTableResult* DeleteTableResult, DynamoDB_EDynamoDBError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void DeleteItem(class UObject* WorldContextObject, bool* Success, const struct FDeleteItemRequest& DeleteItemRequest, struct FDeleteItemResult* DeleteItemResult, DynamoDB_EDynamoDBError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void DeleteBackup(class UObject* WorldContextObject, bool* Success, const struct FDeleteBackupRequest& DeleteBackupRequest, struct FDeleteBackupResult* DeleteBackupResult, DynamoDB_EDynamoDBError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void CreateTable(class UObject* WorldContextObject, bool* Success, const struct FCreateTableRequest& CreateTableRequest, struct FCreateTableResult* CreateTableResult, DynamoDB_EDynamoDBError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void CreateGlobalTable(class UObject* WorldContextObject, bool* Success, const struct FCreateGlobalTableRequest& CreateGlobalTableRequest, struct FCreateGlobalTableResult* CreateGlobalTableResult, DynamoDB_EDynamoDBError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	class UDynamoDBClientObject* STATIC_CreateDynamoDBObject(const struct FAWSCredentials& credentials, const struct FAWSClientConfiguration& clientConfiguration);
	void CreateBackup(class UObject* WorldContextObject, bool* Success, const struct FCreateBackupRequest& CreateBackupRequest, struct FCreateBackupResult* CreateBackupResult, DynamoDB_EDynamoDBError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void BatchWriteItem(class UObject* WorldContextObject, bool* Success, const struct FBatchWriteItemRequest& BatchWriteItemRequest, struct FBatchWriteItemResult* BatchWriteItemResult, DynamoDB_EDynamoDBError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void BatchGetItem(class UObject* WorldContextObject, bool* Success, const struct FBatchGetItemRequest& BatchGetItemRequest, struct FBatchGetItemResult* BatchGetItemResult, DynamoDB_EDynamoDBError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
