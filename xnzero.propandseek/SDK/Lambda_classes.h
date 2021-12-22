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

// Class Lambda.LambdaClientObject
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class ULambdaClientObject : public UObject
{
public:
	unsigned char                                      UnknownData_64KX[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Lambda.LambdaClientObject");
		return ptr;
	}



	void UpdateFunctionConfiguration(class UObject* WorldContextObject, bool* Success, const struct FUpdateFunctionConfigurationRequest& UpdateFunctionConfigurationRequest, struct FUpdateFunctionConfigurationResult* UpdateFunctionConfigurationResult, Lambda_ELambdaError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void UpdateFunctionCode(class UObject* WorldContextObject, bool* Success, const struct FUpdateFunctionCodeRequest& UpdateFunctionCodeRequest, struct FUpdateFunctionCodeResult* UpdateFunctionCodeResult, Lambda_ELambdaError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void UpdateEventSourceMapping(class UObject* WorldContextObject, bool* Success, const struct FUpdateEventSourceMappingRequest& UpdateEventSourceMappingRequest, struct FUpdateEventSourceMappingResult* UpdateEventSourceMappingResult, Lambda_ELambdaError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void UpdateAlias(class UObject* WorldContextObject, bool* Success, const struct FLambdaUpdateAliasRequest& updateAliasRequest, struct FLambdaUpdateAliasResult* updateAliasResult, Lambda_ELambdaError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void UntagResource(class UObject* WorldContextObject, bool* Success, const struct FLambdaUntagResourceRequest& untagResourceRequest, Lambda_ELambdaError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void TagResource(class UObject* WorldContextObject, bool* Success, const struct FLambdaTagResourceRequest& tagResourceRequest, Lambda_ELambdaError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void RemovePermission(class UObject* WorldContextObject, bool* Success, const struct FRemovePermissionRequest& RemovePermissionRequest, Lambda_ELambdaError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void RemoveLayerVersionPermission(class UObject* WorldContextObject, bool* Success, const struct FRemoveLayerVersionPermissionRequest& RemoveLayerVersionPermissionRequest, Lambda_ELambdaError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void PutFunctionConcurrency(class UObject* WorldContextObject, bool* Success, const struct FPutFunctionConcurrencyRequest& PutFunctionConcurrencyRequest, struct FPutFunctionConcurrencyResult* PutFunctionConcurrencyResult, Lambda_ELambdaError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void PublishVersion(class UObject* WorldContextObject, bool* Success, const struct FPublishVersionRequest& PublishVersionRequest, struct FPublishVersionResult* PublishVersionResult, Lambda_ELambdaError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void PublishLayerVersion(class UObject* WorldContextObject, bool* Success, const struct FPublishLayerVersionRequest& PublishLayerVersionRequest, struct FPublishLayerVersionResult* PublishLayerVersionResult, Lambda_ELambdaError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void ListVersionsByFunction(class UObject* WorldContextObject, bool* Success, const struct FListVersionsByFunctionRequest& ListVersionsByFunctionRequest, struct FListVersionsByFunctionResult* ListVersionsByFunctionResult, Lambda_ELambdaError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void ListTags(class UObject* WorldContextObject, bool* Success, const struct FListTagsRequest& ListTagsRequest, struct FListTagsResult* ListTagsResult, Lambda_ELambdaError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void ListLayerVersions(class UObject* WorldContextObject, bool* Success, const struct FListLayerVersionsRequest& ListLayerVersionsRequest, struct FListLayerVersionsResult* ListLayerVersionsResult, Lambda_ELambdaError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void ListLayers(class UObject* WorldContextObject, bool* Success, const struct FListLayersRequest& ListLayersRequest, struct FListLayersResult* ListLayersResult, Lambda_ELambdaError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void ListFunctions(class UObject* WorldContextObject, bool* Success, const struct FListFunctionsRequest& ListFunctionsRequest, struct FListFunctionsResult* ListFunctionsResult, Lambda_ELambdaError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void ListEventSourceMappings(class UObject* WorldContextObject, bool* Success, const struct FListEventSourceMappingsRequest& ListEventSourceMappingsRequest, struct FListEventSourceMappingsResult* ListEventSourceMappingsResult, Lambda_ELambdaError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void ListAliases(class UObject* WorldContextObject, bool* Success, const struct FLambdaListAliasesRequest& listAliasesRequest, struct FLambdaListAliasesResult* listAliasesResult, Lambda_ELambdaError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void Invoke(class UObject* WorldContextObject, bool* Success, const struct FInvokeRequest& InvokeRequest, struct FInvokeResult* InvokeResult, Lambda_ELambdaError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	struct FString GetServiceClientName();
	void GetPolicy(class UObject* WorldContextObject, bool* Success, const struct FGetPolicyRequest& GetPolicyRequest, struct FGetPolicyResult* GetPolicyResult, Lambda_ELambdaError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void GetLayerVersionPolicy(class UObject* WorldContextObject, bool* Success, const struct FGetLayerVersionPolicyRequest& GetLayerVersionPolicyRequest, struct FGetLayerVersionPolicyResult* GetLayerVersionPolicyResult, Lambda_ELambdaError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void GetLayerVersionByArn(class UObject* WorldContextObject, bool* Success, const struct FGetLayerVersionByArnRequest& GetLayerVersionByArnRequest, struct FGetLayerVersionByArnResult* GetLayerVersionByArnResult, Lambda_ELambdaError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void GetLayerVersion(class UObject* WorldContextObject, bool* Success, const struct FGetLayerVersionRequest& GetLayerVersionRequest, struct FGetLayerVersionResult* GetLayerVersionResult, Lambda_ELambdaError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void GetFunctionConfiguration(class UObject* WorldContextObject, bool* Success, const struct FGetFunctionConfigurationRequest& GetFunctionConfigurationRequest, struct FGetFunctionConfigurationResult* GetFunctionConfigurationResult, Lambda_ELambdaError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void GetFunction(class UObject* WorldContextObject, bool* Success, const struct FGetFunctionRequest& GetFunctionRequest, struct FGetFunctionResult* GetFunctionResult, Lambda_ELambdaError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void GetEventSourceMapping(class UObject* WorldContextObject, bool* Success, const struct FGetEventSourceMappingRequest& GetEventSourceMappingRequest, struct FGetEventSourceMappingResult* GetEventSourceMappingResult, Lambda_ELambdaError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void GetAlias(class UObject* WorldContextObject, bool* Success, const struct FGetAliasRequest& GetAliasRequest, struct FGetAliasResult* GetAliasResult, Lambda_ELambdaError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void GetAccountSettings(class UObject* WorldContextObject, bool* Success, const struct FGetAccountSettingsRequest& GetAccountSettingsRequest, struct FGetAccountSettingsResult* GetAccountSettingsResult, Lambda_ELambdaError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void DeleteLayerVersion(class UObject* WorldContextObject, bool* Success, const struct FDeleteLayerVersionRequest& DeleteLayerVersionRequest, Lambda_ELambdaError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void DeleteFunctionConcurrency(class UObject* WorldContextObject, bool* Success, const struct FDeleteFunctionConcurrencyRequest& DeleteFunctionConcurrencyRequest, Lambda_ELambdaError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void DeleteFunction(class UObject* WorldContextObject, bool* Success, const struct FDeleteFunctionRequest& DeleteFunctionRequest, Lambda_ELambdaError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void DeleteEventSourceMapping(class UObject* WorldContextObject, bool* Success, const struct FDeleteEventSourceMappingRequest& DeleteEventSourceMappingRequest, struct FDeleteEventSourceMappingResult* DeleteEventSourceMappingResult, Lambda_ELambdaError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void DeleteAlias(class UObject* WorldContextObject, bool* Success, const struct FLambdaDeleteAliasRequest& deleteAliasRequest, Lambda_ELambdaError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	class ULambdaClientObject* STATIC_CreateLambdaObject(const struct FAWSCredentials& credentials, const struct FAWSClientConfiguration& clientConfiguration);
	void CreateFunction(class UObject* WorldContextObject, bool* Success, const struct FCreateFunctionRequest& CreateFunctionRequest, struct FCreateFunctionResult* CreateFunctionResult, Lambda_ELambdaError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void CreateEventSourceMapping(class UObject* WorldContextObject, bool* Success, const struct FCreateEventSourceMappingRequest& CreateEventSourceMappingRequest, struct FCreateEventSourceMappingResult* CreateEventSourceMappingResult, Lambda_ELambdaError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void CreateAlias(class UObject* WorldContextObject, bool* Success, const struct FLambdaCreateAliasRequest& createAliasRequest, struct FLambdaCreateAliasResult* createAliasResult, Lambda_ELambdaError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void AddPermission(class UObject* WorldContextObject, bool* Success, const struct FAddPermissionRequest& AddPermissionRequest, struct FAddPermissionResult* AddPermissionResult, Lambda_ELambdaError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void AddLayerVersionPermission(class UObject* WorldContextObject, bool* Success, const struct FAddLayerVersionPermissionRequest& AddLayerVersionPermissionRequest, struct FAddLayerVersionPermissionResult* AddLayerVersionPermissionResult, Lambda_ELambdaError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
