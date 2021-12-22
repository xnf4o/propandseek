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

// Function Lambda.LambdaClientObject.UpdateFunctionConfiguration
struct ULambdaClientObject_UpdateFunctionConfiguration_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUpdateFunctionConfigurationRequest         UpdateFunctionConfigurationRequest;                        // 0x0000(0x0108)  (Parm, NativeAccessSpecifierPublic)
	struct FUpdateFunctionConfigurationResult          UpdateFunctionConfigurationResult;                         // 0x0000(0x0190)  (Parm, OutParm, NativeAccessSpecifierPublic)
	Lambda_ELambdaError                                errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Lambda.LambdaClientObject.UpdateFunctionCode
struct ULambdaClientObject_UpdateFunctionCode_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUpdateFunctionCodeRequest                  UpdateFunctionCodeRequest;                                 // 0x0000(0x0068)  (Parm, NativeAccessSpecifierPublic)
	struct FUpdateFunctionCodeResult                   UpdateFunctionCodeResult;                                  // 0x0000(0x0190)  (Parm, OutParm, NativeAccessSpecifierPublic)
	Lambda_ELambdaError                                errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Lambda.LambdaClientObject.UpdateEventSourceMapping
struct ULambdaClientObject_UpdateEventSourceMapping_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUpdateEventSourceMappingRequest            UpdateEventSourceMappingRequest;                           // 0x0000(0x0030)  (Parm, NativeAccessSpecifierPublic)
	struct FUpdateEventSourceMappingResult             UpdateEventSourceMappingResult;                            // 0x0000(0x0070)  (Parm, OutParm, NativeAccessSpecifierPublic)
	Lambda_ELambdaError                                errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Lambda.LambdaClientObject.UpdateAlias
struct ULambdaClientObject_UpdateAlias_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLambdaUpdateAliasRequest                   updateAliasRequest;                                        // 0x0000(0x00A0)  (Parm, NativeAccessSpecifierPublic)
	struct FLambdaUpdateAliasResult                    updateAliasResult;                                         // 0x0000(0x00A0)  (Parm, OutParm, NativeAccessSpecifierPublic)
	Lambda_ELambdaError                                errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Lambda.LambdaClientObject.UntagResource
struct ULambdaClientObject_UntagResource_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLambdaUntagResourceRequest                 untagResourceRequest;                                      // 0x0000(0x0020)  (Parm, NativeAccessSpecifierPublic)
	Lambda_ELambdaError                                errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Lambda.LambdaClientObject.TagResource
struct ULambdaClientObject_TagResource_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLambdaTagResourceRequest                   tagResourceRequest;                                        // 0x0000(0x0060)  (Parm, NativeAccessSpecifierPublic)
	Lambda_ELambdaError                                errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Lambda.LambdaClientObject.RemovePermission
struct ULambdaClientObject_RemovePermission_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRemovePermissionRequest                    RemovePermissionRequest;                                   // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
	Lambda_ELambdaError                                errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Lambda.LambdaClientObject.RemoveLayerVersionPermission
struct ULambdaClientObject_RemoveLayerVersionPermission_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRemoveLayerVersionPermissionRequest        RemoveLayerVersionPermissionRequest;                       // 0x0000(0x0038)  (Parm, NativeAccessSpecifierPublic)
	Lambda_ELambdaError                                errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Lambda.LambdaClientObject.PutFunctionConcurrency
struct ULambdaClientObject_PutFunctionConcurrency_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPutFunctionConcurrencyRequest              PutFunctionConcurrencyRequest;                             // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
	struct FPutFunctionConcurrencyResult               PutFunctionConcurrencyResult;                              // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	Lambda_ELambdaError                                errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Lambda.LambdaClientObject.PublishVersion
struct ULambdaClientObject_PublishVersion_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPublishVersionRequest                      PublishVersionRequest;                                     // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
	struct FPublishVersionResult                       PublishVersionResult;                                      // 0x0000(0x0190)  (Parm, OutParm, NativeAccessSpecifierPublic)
	Lambda_ELambdaError                                errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Lambda.LambdaClientObject.PublishLayerVersion
struct ULambdaClientObject_PublishLayerVersion_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPublishLayerVersionRequest                 PublishLayerVersionRequest;                                // 0x0000(0x0080)  (Parm, NativeAccessSpecifierPublic)
	struct FPublishLayerVersionResult                  PublishLayerVersionResult;                                 // 0x0000(0x0090)  (Parm, OutParm, NativeAccessSpecifierPublic)
	Lambda_ELambdaError                                errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Lambda.LambdaClientObject.ListVersionsByFunction
struct ULambdaClientObject_ListVersionsByFunction_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FListVersionsByFunctionRequest              ListVersionsByFunctionRequest;                             // 0x0000(0x0028)  (Parm, NativeAccessSpecifierPublic)
	struct FListVersionsByFunctionResult               ListVersionsByFunctionResult;                              // 0x0000(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
	Lambda_ELambdaError                                errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Lambda.LambdaClientObject.ListTags
struct ULambdaClientObject_ListTags_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FListTagsRequest                            ListTagsRequest;                                           // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
	struct FListTagsResult                             ListTagsResult;                                            // 0x0000(0x0050)  (Parm, OutParm, NativeAccessSpecifierPublic)
	Lambda_ELambdaError                                errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Lambda.LambdaClientObject.ListLayerVersions
struct ULambdaClientObject_ListLayerVersions_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FListLayerVersionsRequest                   ListLayerVersionsRequest;                                  // 0x0000(0x0030)  (Parm, NativeAccessSpecifierPublic)
	struct FListLayerVersionsResult                    ListLayerVersionsResult;                                   // 0x0000(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
	Lambda_ELambdaError                                errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Lambda.LambdaClientObject.ListLayers
struct ULambdaClientObject_ListLayers_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FListLayersRequest                          ListLayersRequest;                                         // 0x0000(0x0020)  (Parm, NativeAccessSpecifierPublic)
	struct FListLayersResult                           ListLayersResult;                                          // 0x0000(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
	Lambda_ELambdaError                                errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Lambda.LambdaClientObject.ListFunctions
struct ULambdaClientObject_ListFunctions_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FListFunctionsRequest                       ListFunctionsRequest;                                      // 0x0000(0x0030)  (Parm, NativeAccessSpecifierPublic)
	struct FListFunctionsResult                        ListFunctionsResult;                                       // 0x0000(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
	Lambda_ELambdaError                                errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Lambda.LambdaClientObject.ListEventSourceMappings
struct ULambdaClientObject_ListEventSourceMappings_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FListEventSourceMappingsRequest             ListEventSourceMappingsRequest;                            // 0x0000(0x0038)  (Parm, NativeAccessSpecifierPublic)
	struct FListEventSourceMappingsResult              ListEventSourceMappingsResult;                             // 0x0000(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
	Lambda_ELambdaError                                errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Lambda.LambdaClientObject.ListAliases
struct ULambdaClientObject_ListAliases_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLambdaListAliasesRequest                   listAliasesRequest;                                        // 0x0000(0x0038)  (Parm, NativeAccessSpecifierPublic)
	struct FLambdaListAliasesResult                    listAliasesResult;                                         // 0x0000(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
	Lambda_ELambdaError                                errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Lambda.LambdaClientObject.Invoke
struct ULambdaClientObject_Invoke_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInvokeRequest                              InvokeRequest;                                             // 0x0000(0x0058)  (Parm, NativeAccessSpecifierPublic)
	struct FInvokeResult                               InvokeResult;                                              // 0x0000(0x0048)  (Parm, OutParm, NativeAccessSpecifierPublic)
	Lambda_ELambdaError                                errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Lambda.LambdaClientObject.GetServiceClientName
struct ULambdaClientObject_GetServiceClientName_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Lambda.LambdaClientObject.GetPolicy
struct ULambdaClientObject_GetPolicy_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGetPolicyRequest                           GetPolicyRequest;                                          // 0x0000(0x0020)  (Parm, NativeAccessSpecifierPublic)
	struct FGetPolicyResult                            GetPolicyResult;                                           // 0x0000(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
	Lambda_ELambdaError                                errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Lambda.LambdaClientObject.GetLayerVersionPolicy
struct ULambdaClientObject_GetLayerVersionPolicy_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGetLayerVersionPolicyRequest               GetLayerVersionPolicyRequest;                              // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
	struct FGetLayerVersionPolicyResult                GetLayerVersionPolicyResult;                               // 0x0000(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
	Lambda_ELambdaError                                errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Lambda.LambdaClientObject.GetLayerVersionByArn
struct ULambdaClientObject_GetLayerVersionByArn_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGetLayerVersionByArnRequest                GetLayerVersionByArnRequest;                               // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
	struct FGetLayerVersionByArnResult                 GetLayerVersionByArnResult;                                // 0x0000(0x0090)  (Parm, OutParm, NativeAccessSpecifierPublic)
	Lambda_ELambdaError                                errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Lambda.LambdaClientObject.GetLayerVersion
struct ULambdaClientObject_GetLayerVersion_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGetLayerVersionRequest                     GetLayerVersionRequest;                                    // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
	struct FGetLayerVersionResult                      GetLayerVersionResult;                                     // 0x0000(0x0090)  (Parm, OutParm, NativeAccessSpecifierPublic)
	Lambda_ELambdaError                                errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Lambda.LambdaClientObject.GetFunctionConfiguration
struct ULambdaClientObject_GetFunctionConfiguration_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGetFunctionConfigurationRequest            GetFunctionConfigurationRequest;                           // 0x0000(0x0020)  (Parm, NativeAccessSpecifierPublic)
	struct FGetFunctionConfigurationResult             GetFunctionConfigurationResult;                            // 0x0000(0x0190)  (Parm, OutParm, NativeAccessSpecifierPublic)
	Lambda_ELambdaError                                errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Lambda.LambdaClientObject.GetFunction
struct ULambdaClientObject_GetFunction_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGetFunctionRequest                         GetFunctionRequest;                                        // 0x0000(0x0020)  (Parm, NativeAccessSpecifierPublic)
	struct FGetFunctionResult                          GetFunctionResult;                                         // 0x0000(0x0208)  (Parm, OutParm, NativeAccessSpecifierPublic)
	Lambda_ELambdaError                                errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Lambda.LambdaClientObject.GetEventSourceMapping
struct ULambdaClientObject_GetEventSourceMapping_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGetEventSourceMappingRequest               GetEventSourceMappingRequest;                              // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
	struct FGetEventSourceMappingResult                GetEventSourceMappingResult;                               // 0x0000(0x0070)  (Parm, OutParm, NativeAccessSpecifierPublic)
	Lambda_ELambdaError                                errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Lambda.LambdaClientObject.GetAlias
struct ULambdaClientObject_GetAlias_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGetAliasRequest                            GetAliasRequest;                                           // 0x0000(0x0020)  (Parm, NativeAccessSpecifierPublic)
	struct FGetAliasResult                             GetAliasResult;                                            // 0x0000(0x00A0)  (Parm, OutParm, NativeAccessSpecifierPublic)
	Lambda_ELambdaError                                errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Lambda.LambdaClientObject.GetAccountSettings
struct ULambdaClientObject_GetAccountSettings_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGetAccountSettingsRequest                  GetAccountSettingsRequest;                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FGetAccountSettingsResult                   GetAccountSettingsResult;                                  // 0x0000(0x001C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	Lambda_ELambdaError                                errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Lambda.LambdaClientObject.DeleteLayerVersion
struct ULambdaClientObject_DeleteLayerVersion_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDeleteLayerVersionRequest                  DeleteLayerVersionRequest;                                 // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
	Lambda_ELambdaError                                errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Lambda.LambdaClientObject.DeleteFunctionConcurrency
struct ULambdaClientObject_DeleteFunctionConcurrency_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDeleteFunctionConcurrencyRequest           DeleteFunctionConcurrencyRequest;                          // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
	Lambda_ELambdaError                                errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Lambda.LambdaClientObject.DeleteFunction
struct ULambdaClientObject_DeleteFunction_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDeleteFunctionRequest                      DeleteFunctionRequest;                                     // 0x0000(0x0020)  (Parm, NativeAccessSpecifierPublic)
	Lambda_ELambdaError                                errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Lambda.LambdaClientObject.DeleteEventSourceMapping
struct ULambdaClientObject_DeleteEventSourceMapping_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDeleteEventSourceMappingRequest            DeleteEventSourceMappingRequest;                           // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
	struct FDeleteEventSourceMappingResult             DeleteEventSourceMappingResult;                            // 0x0000(0x0070)  (Parm, OutParm, NativeAccessSpecifierPublic)
	Lambda_ELambdaError                                errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Lambda.LambdaClientObject.DeleteAlias
struct ULambdaClientObject_DeleteAlias_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLambdaDeleteAliasRequest                   deleteAliasRequest;                                        // 0x0000(0x0020)  (Parm, NativeAccessSpecifierPublic)
	Lambda_ELambdaError                                errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Lambda.LambdaClientObject.CreateLambdaObject
struct ULambdaClientObject_CreateLambdaObject_Params
{
	struct FAWSCredentials                             credentials;                                               // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FAWSClientConfiguration                     clientConfiguration;                                       // 0x0000(0x00B8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class ULambdaClientObject*                         ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Lambda.LambdaClientObject.CreateFunction
struct ULambdaClientObject_CreateFunction_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCreateFunctionRequest                      CreateFunctionRequest;                                     // 0x0000(0x0190)  (Parm, NativeAccessSpecifierPublic)
	struct FCreateFunctionResult                       CreateFunctionResult;                                      // 0x0000(0x0190)  (Parm, OutParm, NativeAccessSpecifierPublic)
	Lambda_ELambdaError                                errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Lambda.LambdaClientObject.CreateEventSourceMapping
struct ULambdaClientObject_CreateEventSourceMapping_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCreateEventSourceMappingRequest            CreateEventSourceMappingRequest;                           // 0x0000(0x0038)  (Parm, NativeAccessSpecifierPublic)
	struct FCreateEventSourceMappingResult             CreateEventSourceMappingResult;                            // 0x0000(0x0070)  (Parm, OutParm, NativeAccessSpecifierPublic)
	Lambda_ELambdaError                                errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Lambda.LambdaClientObject.CreateAlias
struct ULambdaClientObject_CreateAlias_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLambdaCreateAliasRequest                   createAliasRequest;                                        // 0x0000(0x0090)  (Parm, NativeAccessSpecifierPublic)
	struct FLambdaCreateAliasResult                    createAliasResult;                                         // 0x0000(0x00A0)  (Parm, OutParm, NativeAccessSpecifierPublic)
	Lambda_ELambdaError                                errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Lambda.LambdaClientObject.AddPermission
struct ULambdaClientObject_AddPermission_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAddPermissionRequest                       AddPermissionRequest;                                      // 0x0000(0x0090)  (Parm, NativeAccessSpecifierPublic)
	struct FAddPermissionResult                        AddPermissionResult;                                       // 0x0000(0x0010)  (Parm, OutParm, NativeAccessSpecifierPublic)
	Lambda_ELambdaError                                errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Lambda.LambdaClientObject.AddLayerVersionPermission
struct ULambdaClientObject_AddLayerVersionPermission_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAddLayerVersionPermissionRequest           AddLayerVersionPermissionRequest;                          // 0x0000(0x0068)  (Parm, NativeAccessSpecifierPublic)
	struct FAddLayerVersionPermissionResult            AddLayerVersionPermissionResult;                           // 0x0000(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
	Lambda_ELambdaError                                errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
