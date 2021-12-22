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

// Function DynamoDB.DynamoDBClientObject.UpdateTimeToLive
struct UDynamoDBClientObject_UpdateTimeToLive_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUpdateTimeToLiveRequest                    UpdateTimeToLiveRequest;                                   // 0x0000(0x0028)  (Parm, NativeAccessSpecifierPublic)
	struct FUpdateTimeToLiveResult                     UpdateTimeToLiveResult;                                    // 0x0000(0x0018)  (Parm, OutParm, NativeAccessSpecifierPublic)
	DynamoDB_EDynamoDBError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function DynamoDB.DynamoDBClientObject.UpdateTable
struct UDynamoDBClientObject_UpdateTable_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUpdateTableRequest                         UpdateTableRequest;                                        // 0x0000(0x0060)  (Parm, NativeAccessSpecifierPublic)
	struct FUpdateTableResult                          UpdateTableResult;                                         // 0x0000(0x0128)  (Parm, OutParm, NativeAccessSpecifierPublic)
	DynamoDB_EDynamoDBError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function DynamoDB.DynamoDBClientObject.UpdateItem
struct UDynamoDBClientObject_UpdateItem_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUpdateItemRequest                          UpdateItemRequest;                                         // 0x0000(0x0128)  (Parm, NativeAccessSpecifierPublic)
	struct FUpdateItemResult                           UpdateItemResult;                                          // 0x0000(0x0178)  (Parm, OutParm, NativeAccessSpecifierPublic)
	DynamoDB_EDynamoDBError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function DynamoDB.DynamoDBClientObject.UpdateGlobalTableSettings
struct UDynamoDBClientObject_UpdateGlobalTableSettings_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUpdateGlobalTableSettingsRequest           UpdateGlobalTableSettingsRequest;                          // 0x0000(0x0078)  (Parm, NativeAccessSpecifierPublic)
	struct FUpdateGlobalTableSettingsResult            UpdateGlobalTableSettingsResult;                           // 0x0000(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
	DynamoDB_EDynamoDBError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function DynamoDB.DynamoDBClientObject.UpdateGlobalTable
struct UDynamoDBClientObject_UpdateGlobalTable_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUpdateGlobalTableRequest                   UpdateGlobalTableRequest;                                  // 0x0000(0x0020)  (Parm, NativeAccessSpecifierPublic)
	struct FUpdateGlobalTableResult                    UpdateGlobalTableResult;                                   // 0x0000(0x0040)  (Parm, OutParm, NativeAccessSpecifierPublic)
	DynamoDB_EDynamoDBError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function DynamoDB.DynamoDBClientObject.UpdateContinuousBackups
struct UDynamoDBClientObject_UpdateContinuousBackups_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUpdateContinuousBackupsRequest             UpdateContinuousBackupsRequest;                            // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
	struct FUpdateContinuousBackupsResult              UpdateContinuousBackupsResult;                             // 0x0000(0x0020)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	DynamoDB_EDynamoDBError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function DynamoDB.DynamoDBClientObject.UntagResource
struct UDynamoDBClientObject_UntagResource_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDynamoDBUntagResourceRequest               untagResourceRequest;                                      // 0x0000(0x0020)  (Parm, NativeAccessSpecifierPublic)
	DynamoDB_EDynamoDBError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function DynamoDB.DynamoDBClientObject.TransactWriteItems
struct UDynamoDBClientObject_TransactWriteItems_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransactWriteItemsRequest                  TransactWriteItemsRequest;                                 // 0x0000(0x0028)  (Parm, NativeAccessSpecifierPublic)
	struct FTransactWriteItemsResult                   TransactWriteItemsResult;                                  // 0x0000(0x0060)  (Parm, OutParm, NativeAccessSpecifierPublic)
	DynamoDB_EDynamoDBError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function DynamoDB.DynamoDBClientObject.TransactGetItems
struct UDynamoDBClientObject_TransactGetItems_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransactGetItemsRequest                    TransactGetItemsRequest;                                   // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
	struct FTransactGetItemsResult                     TransactGetItemsResult;                                    // 0x0000(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
	DynamoDB_EDynamoDBError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function DynamoDB.DynamoDBClientObject.TagResource
struct UDynamoDBClientObject_TagResource_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDynamoDBTagResourceRequest                 tagResourceRequest;                                        // 0x0000(0x0020)  (Parm, NativeAccessSpecifierPublic)
	DynamoDB_EDynamoDBError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function DynamoDB.DynamoDBClientObject.Scan
struct UDynamoDBClientObject_Scan_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScanRequest                                ScanRequest;                                               // 0x0000(0x0150)  (Parm, NativeAccessSpecifierPublic)
	struct FScanResult                                 ScanResult;                                                // 0x0000(0x0130)  (Parm, OutParm, NativeAccessSpecifierPublic)
	DynamoDB_EDynamoDBError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function DynamoDB.DynamoDBClientObject.RestoreTableToPointInTime
struct UDynamoDBClientObject_RestoreTableToPointInTime_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRestoreTableToPointInTimeRequest           RestoreTableToPointInTimeRequest;                          // 0x0000(0x0030)  (Parm, NativeAccessSpecifierPublic)
	struct FRestoreTableToPointInTimeResult            RestoreTableToPointInTimeResult;                           // 0x0000(0x0128)  (Parm, OutParm, NativeAccessSpecifierPublic)
	DynamoDB_EDynamoDBError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function DynamoDB.DynamoDBClientObject.RestoreTableFromBackup
struct UDynamoDBClientObject_RestoreTableFromBackup_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRestoreTableFromBackupRequest              RestoreTableFromBackupRequest;                             // 0x0000(0x0020)  (Parm, NativeAccessSpecifierPublic)
	struct FRestoreTableFromBackupResult               RestoreTableFromBackupResult;                              // 0x0000(0x0128)  (Parm, OutParm, NativeAccessSpecifierPublic)
	DynamoDB_EDynamoDBError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function DynamoDB.DynamoDBClientObject.Query
struct UDynamoDBClientObject_Query_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQueryRequest                               QueryRequest;                                              // 0x0000(0x0158)  (Parm, NativeAccessSpecifierPublic)
	struct FQueryResult                                QueryResult;                                               // 0x0000(0x0130)  (Parm, OutParm, NativeAccessSpecifierPublic)
	DynamoDB_EDynamoDBError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function DynamoDB.DynamoDBClientObject.PutItem
struct UDynamoDBClientObject_PutItem_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPutItemRequest                             PutItemRequest;                                            // 0x0000(0x0118)  (Parm, NativeAccessSpecifierPublic)
	struct FPutItemResult                              PutItemResult;                                             // 0x0000(0x0178)  (Parm, OutParm, NativeAccessSpecifierPublic)
	DynamoDB_EDynamoDBError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function DynamoDB.DynamoDBClientObject.ListTagsOfResource
struct UDynamoDBClientObject_ListTagsOfResource_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FListTagsOfResourceRequest                  ListTagsOfResourceRequest;                                 // 0x0000(0x0020)  (Parm, NativeAccessSpecifierPublic)
	struct FListTagsOfResourceResult                   ListTagsOfResourceResult;                                  // 0x0000(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
	DynamoDB_EDynamoDBError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function DynamoDB.DynamoDBClientObject.ListTables
struct UDynamoDBClientObject_ListTables_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FListTablesRequest                          ListTablesRequest;                                         // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
	struct FListTablesResult                           ListTablesResult;                                          // 0x0000(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
	DynamoDB_EDynamoDBError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function DynamoDB.DynamoDBClientObject.ListGlobalTables
struct UDynamoDBClientObject_ListGlobalTables_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FListGlobalTablesRequest                    ListGlobalTablesRequest;                                   // 0x0000(0x0028)  (Parm, NativeAccessSpecifierPublic)
	struct FListGlobalTablesResult                     ListGlobalTablesResult;                                    // 0x0000(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
	DynamoDB_EDynamoDBError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function DynamoDB.DynamoDBClientObject.ListBackups
struct UDynamoDBClientObject_ListBackups_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FListBackupsRequest                         ListBackupsRequest;                                        // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
	struct FListBackupsResult                          ListBackupsResult;                                         // 0x0000(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
	DynamoDB_EDynamoDBError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function DynamoDB.DynamoDBClientObject.GetServiceClientName
struct UDynamoDBClientObject_GetServiceClientName_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DynamoDB.DynamoDBClientObject.GetItem
struct UDynamoDBClientObject_GetItem_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGetItemRequest                             GetItemRequest;                                            // 0x0000(0x00C8)  (Parm, NativeAccessSpecifierPublic)
	struct FGetItemResult                              GetItemResult;                                             // 0x0000(0x0118)  (Parm, OutParm, NativeAccessSpecifierPublic)
	DynamoDB_EDynamoDBError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function DynamoDB.DynamoDBClientObject.DescribeTimeToLive
struct UDynamoDBClientObject_DescribeTimeToLive_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDescribeTimeToLiveRequest                  DescribeTimeToLiveRequest;                                 // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
	struct FDescribeTimeToLiveResult                   DescribeTimeToLiveResult;                                  // 0x0000(0x0018)  (Parm, OutParm, NativeAccessSpecifierPublic)
	DynamoDB_EDynamoDBError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function DynamoDB.DynamoDBClientObject.DescribeTable
struct UDynamoDBClientObject_DescribeTable_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDescribeTableRequest                       DescribeTableRequest;                                      // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
	struct FDescribeTableResult                        DescribeTableResult;                                       // 0x0000(0x0128)  (Parm, OutParm, NativeAccessSpecifierPublic)
	DynamoDB_EDynamoDBError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function DynamoDB.DynamoDBClientObject.DescribeLimits
struct UDynamoDBClientObject_DescribeLimits_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDescribeLimitsRequest                      DescribeLimitsRequest;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FDescribeLimitsResult                       DescribeLimitsResult;                                      // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	DynamoDB_EDynamoDBError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function DynamoDB.DynamoDBClientObject.DescribeGlobalTableSettings
struct UDynamoDBClientObject_DescribeGlobalTableSettings_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDescribeGlobalTableSettingsRequest         DescribeGlobalTableSettingsRequest;                        // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
	struct FDescribeGlobalTableSettingsResult          DescribeGlobalTableSettingsResult;                         // 0x0000(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
	DynamoDB_EDynamoDBError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function DynamoDB.DynamoDBClientObject.DescribeGlobalTable
struct UDynamoDBClientObject_DescribeGlobalTable_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDescribeGlobalTableRequest                 DescribeGlobalTableRequest;                                // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
	struct FDescribeGlobalTableResult                  DescribeGlobalTableResult;                                 // 0x0000(0x0040)  (Parm, OutParm, NativeAccessSpecifierPublic)
	DynamoDB_EDynamoDBError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function DynamoDB.DynamoDBClientObject.DescribeEndpoints
struct UDynamoDBClientObject_DescribeEndpoints_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDescribeEndpointsRequest                   DescribeEndpointsRequest;                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FDescribeEndpointsResult                    DescribeEndpointsResult;                                   // 0x0000(0x0010)  (Parm, OutParm, NativeAccessSpecifierPublic)
	DynamoDB_EDynamoDBError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function DynamoDB.DynamoDBClientObject.DescribeContinuousBackups
struct UDynamoDBClientObject_DescribeContinuousBackups_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDescribeContinuousBackupsRequest           DescribeContinuousBackupsRequest;                          // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
	struct FDescribeContinuousBackupsResult            DescribeContinuousBackupsResult;                           // 0x0000(0x0020)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	DynamoDB_EDynamoDBError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function DynamoDB.DynamoDBClientObject.DescribeBackup
struct UDynamoDBClientObject_DescribeBackup_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDescribeBackupRequest                      DescribeBackupRequest;                                     // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
	struct FDescribeBackupResult                       DescribeBackupResult;                                      // 0x0000(0x00F0)  (Parm, OutParm, NativeAccessSpecifierPublic)
	DynamoDB_EDynamoDBError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function DynamoDB.DynamoDBClientObject.DeleteTable
struct UDynamoDBClientObject_DeleteTable_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDeleteTableRequest                         DeleteTableRequest;                                        // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
	struct FDeleteTableResult                          DeleteTableResult;                                         // 0x0000(0x0128)  (Parm, OutParm, NativeAccessSpecifierPublic)
	DynamoDB_EDynamoDBError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function DynamoDB.DynamoDBClientObject.DeleteItem
struct UDynamoDBClientObject_DeleteItem_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDeleteItemRequest                          DeleteItemRequest;                                         // 0x0000(0x0118)  (Parm, NativeAccessSpecifierPublic)
	struct FDeleteItemResult                           DeleteItemResult;                                          // 0x0000(0x0178)  (Parm, OutParm, NativeAccessSpecifierPublic)
	DynamoDB_EDynamoDBError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function DynamoDB.DynamoDBClientObject.DeleteBackup
struct UDynamoDBClientObject_DeleteBackup_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDeleteBackupRequest                        DeleteBackupRequest;                                       // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
	struct FDeleteBackupResult                         DeleteBackupResult;                                        // 0x0000(0x00F0)  (Parm, OutParm, NativeAccessSpecifierPublic)
	DynamoDB_EDynamoDBError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function DynamoDB.DynamoDBClientObject.CreateTable
struct UDynamoDBClientObject_CreateTable_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCreateTableRequest                         CreateTableRequest;                                        // 0x0000(0x0088)  (Parm, NativeAccessSpecifierPublic)
	struct FCreateTableResult                          CreateTableResult;                                         // 0x0000(0x0128)  (Parm, OutParm, NativeAccessSpecifierPublic)
	DynamoDB_EDynamoDBError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function DynamoDB.DynamoDBClientObject.CreateGlobalTable
struct UDynamoDBClientObject_CreateGlobalTable_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCreateGlobalTableRequest                   CreateGlobalTableRequest;                                  // 0x0000(0x0020)  (Parm, NativeAccessSpecifierPublic)
	struct FCreateGlobalTableResult                    CreateGlobalTableResult;                                   // 0x0000(0x0040)  (Parm, OutParm, NativeAccessSpecifierPublic)
	DynamoDB_EDynamoDBError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function DynamoDB.DynamoDBClientObject.CreateDynamoDBObject
struct UDynamoDBClientObject_CreateDynamoDBObject_Params
{
	struct FAWSCredentials                             credentials;                                               // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FAWSClientConfiguration                     clientConfiguration;                                       // 0x0000(0x00B8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UDynamoDBClientObject*                       ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DynamoDB.DynamoDBClientObject.CreateBackup
struct UDynamoDBClientObject_CreateBackup_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCreateBackupRequest                        CreateBackupRequest;                                       // 0x0000(0x0020)  (Parm, NativeAccessSpecifierPublic)
	struct FCreateBackupResult                         CreateBackupResult;                                        // 0x0000(0x0038)  (Parm, OutParm, NativeAccessSpecifierPublic)
	DynamoDB_EDynamoDBError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function DynamoDB.DynamoDBClientObject.BatchWriteItem
struct UDynamoDBClientObject_BatchWriteItem_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBatchWriteItemRequest                      BatchWriteItemRequest;                                     // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
	struct FBatchWriteItemResult                       BatchWriteItemResult;                                      // 0x0000(0x0030)  (Parm, OutParm, NativeAccessSpecifierPublic)
	DynamoDB_EDynamoDBError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function DynamoDB.DynamoDBClientObject.BatchGetItem
struct UDynamoDBClientObject_BatchGetItem_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBatchGetItemRequest                        BatchGetItemRequest;                                       // 0x0000(0x0058)  (Parm, NativeAccessSpecifierPublic)
	struct FBatchGetItemResult                         BatchGetItemResult;                                        // 0x0000(0x0070)  (Parm, OutParm, NativeAccessSpecifierPublic)
	DynamoDB_EDynamoDBError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
