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

// Class CognitoIdentity.CognitoIdentityClientObject
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UCognitoIdentityClientObject : public UObject
{
public:
	unsigned char                                      UnknownData_02PO[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CognitoIdentity.CognitoIdentityClientObject");
		return ptr;
	}



	void UpdateIdentityPool(class UObject* WorldContextObject, bool* Success, const struct FUpdateIdentityPoolRequest& UpdateIdentityPoolRequest, struct FUpdateIdentityPoolResult* UpdateIdentityPoolResult, CognitoIdentity_ECognitoIdentityError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void UntagResource(class UObject* WorldContextObject, bool* Success, const struct FCognitoIdentityUntagResourceRequest& untagResourceRequest, struct FCognitoIdentityUntagResourceResult* untagResourceResult, CognitoIdentity_ECognitoIdentityError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void UnlinkIdentity(class UObject* WorldContextObject, bool* Success, const struct FUnlinkIdentityRequest& UnlinkIdentityRequest, CognitoIdentity_ECognitoIdentityError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void UnlinkDeveloperIdentity(class UObject* WorldContextObject, bool* Success, const struct FUnlinkDeveloperIdentityRequest& UnlinkDeveloperIdentityRequest, CognitoIdentity_ECognitoIdentityError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void TagResource(class UObject* WorldContextObject, bool* Success, const struct FCognitoIdentityTagResourceRequest& tagResourceRequest, struct FCognitoIdentityTagResourceResult* tagResourceResult, CognitoIdentity_ECognitoIdentityError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void SetIdentityPoolRoles(class UObject* WorldContextObject, bool* Success, const struct FSetIdentityPoolRolesRequest& SetIdentityPoolRolesRequest, CognitoIdentity_ECognitoIdentityError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void MergeDeveloperIdentities(class UObject* WorldContextObject, bool* Success, const struct FMergeDeveloperIdentitiesRequest& MergeDeveloperIdentitiesRequest, struct FMergeDeveloperIdentitiesResult* MergeDeveloperIdentitiesResult, CognitoIdentity_ECognitoIdentityError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void LookupDeveloperIdentity(class UObject* WorldContextObject, bool* Success, const struct FLookupDeveloperIdentityRequest& LookupDeveloperIdentityRequest, struct FLookupDeveloperIdentityResult* LookupDeveloperIdentityResult, CognitoIdentity_ECognitoIdentityError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void ListTagsForResource(class UObject* WorldContextObject, bool* Success, const struct FCognitoIdentityListTagsForResourceRequest& listTagsForResourceRequest, struct FCognitoIdentityListTagsForResourceResult* listTagsForResourceResult, CognitoIdentity_ECognitoIdentityError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void ListIdentityPools(class UObject* WorldContextObject, bool* Success, const struct FListIdentityPoolsRequest& ListIdentityPoolsRequest, struct FListIdentityPoolsResult* ListIdentityPoolsResult, CognitoIdentity_ECognitoIdentityError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void ListIdentities(class UObject* WorldContextObject, bool* Success, const struct FListIdentitiesRequest& ListIdentitiesRequest, struct FListIdentitiesResult* ListIdentitiesResult, CognitoIdentity_ECognitoIdentityError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	struct FString GetServiceClientName();
	void GetOpenIdTokenForDeveloperIdentity(class UObject* WorldContextObject, bool* Success, const struct FGetOpenIdTokenForDeveloperIdentityRequest& GetOpenIdTokenForDeveloperIdentityRequest, struct FGetOpenIdTokenForDeveloperIdentityResult* GetOpenIdTokenForDeveloperIdentityResult, CognitoIdentity_ECognitoIdentityError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void GetOpenIdToken(class UObject* WorldContextObject, bool* Success, const struct FGetOpenIdTokenRequest& GetOpenIdTokenRequest, struct FGetOpenIdTokenResult* GetOpenIdTokenResult, CognitoIdentity_ECognitoIdentityError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void GetIdentityPoolRoles(class UObject* WorldContextObject, bool* Success, const struct FGetIdentityPoolRolesRequest& GetIdentityPoolRolesRequest, struct FGetIdentityPoolRolesResult* GetIdentityPoolRolesResult, CognitoIdentity_ECognitoIdentityError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void GetId(class UObject* WorldContextObject, bool* Success, const struct FGetIdRequest& GetIdRequest, struct FGetIdResult* GetIdResult, CognitoIdentity_ECognitoIdentityError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void GetCredentialsForIdentity(class UObject* WorldContextObject, bool* Success, const struct FGetCredentialsForIdentityRequest& GetCredentialsForIdentityRequest, struct FGetCredentialsForIdentityResult* GetCredentialsForIdentityResult, CognitoIdentity_ECognitoIdentityError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void DescribeIdentityPool(class UObject* WorldContextObject, bool* Success, const struct FDescribeIdentityPoolRequest& DescribeIdentityPoolRequest, struct FDescribeIdentityPoolResult* DescribeIdentityPoolResult, CognitoIdentity_ECognitoIdentityError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void DescribeIdentity(class UObject* WorldContextObject, bool* Success, const struct FDescribeIdentityRequest& DescribeIdentityRequest, struct FDescribeIdentityResult* DescribeIdentityResult, CognitoIdentity_ECognitoIdentityError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void DeleteIdentityPool(class UObject* WorldContextObject, bool* Success, const struct FDeleteIdentityPoolRequest& DeleteIdentityPoolRequest, CognitoIdentity_ECognitoIdentityError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void DeleteIdentities(class UObject* WorldContextObject, bool* Success, const struct FDeleteIdentitiesRequest& DeleteIdentitiesRequest, struct FDeleteIdentitiesResult* DeleteIdentitiesResult, CognitoIdentity_ECognitoIdentityError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void CreateIdentityPool(class UObject* WorldContextObject, bool* Success, const struct FCreateIdentityPoolRequest& CreateIdentityPoolRequest, struct FCreateIdentityPoolResult* CreateIdentityPoolResult, CognitoIdentity_ECognitoIdentityError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	class UCognitoIdentityClientObject* STATIC_CreateCognitoIdentityObject(const struct FAWSCredentials& credentials, const struct FAWSClientConfiguration& clientConfiguration);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
