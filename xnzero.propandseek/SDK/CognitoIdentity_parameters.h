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

// Function CognitoIdentity.CognitoIdentityClientObject.UpdateIdentityPool
struct UCognitoIdentityClientObject_UpdateIdentityPool_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUpdateIdentityPoolRequest                  UpdateIdentityPoolRequest;                                 // 0x0000(0x0108)  (Parm, NativeAccessSpecifierPublic)
	struct FUpdateIdentityPoolResult                   UpdateIdentityPoolResult;                                  // 0x0000(0x0108)  (Parm, OutParm, NativeAccessSpecifierPublic)
	CognitoIdentity_ECognitoIdentityError              errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdentity.CognitoIdentityClientObject.UntagResource
struct UCognitoIdentityClientObject_UntagResource_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCognitoIdentityUntagResourceRequest        untagResourceRequest;                                      // 0x0000(0x0020)  (Parm, NativeAccessSpecifierPublic)
	struct FCognitoIdentityUntagResourceResult         untagResourceResult;                                       // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	CognitoIdentity_ECognitoIdentityError              errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdentity.CognitoIdentityClientObject.UnlinkIdentity
struct UCognitoIdentityClientObject_UnlinkIdentity_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUnlinkIdentityRequest                      UnlinkIdentityRequest;                                     // 0x0000(0x0070)  (Parm, NativeAccessSpecifierPublic)
	CognitoIdentity_ECognitoIdentityError              errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdentity.CognitoIdentityClientObject.UnlinkDeveloperIdentity
struct UCognitoIdentityClientObject_UnlinkDeveloperIdentity_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUnlinkDeveloperIdentityRequest             UnlinkDeveloperIdentityRequest;                            // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
	CognitoIdentity_ECognitoIdentityError              errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdentity.CognitoIdentityClientObject.TagResource
struct UCognitoIdentityClientObject_TagResource_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCognitoIdentityTagResourceRequest          tagResourceRequest;                                        // 0x0000(0x0060)  (Parm, NativeAccessSpecifierPublic)
	struct FCognitoIdentityTagResourceResult           tagResourceResult;                                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	CognitoIdentity_ECognitoIdentityError              errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdentity.CognitoIdentityClientObject.SetIdentityPoolRoles
struct UCognitoIdentityClientObject_SetIdentityPoolRoles_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSetIdentityPoolRolesRequest                SetIdentityPoolRolesRequest;                               // 0x0000(0x00B0)  (Parm, NativeAccessSpecifierPublic)
	CognitoIdentity_ECognitoIdentityError              errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdentity.CognitoIdentityClientObject.MergeDeveloperIdentities
struct UCognitoIdentityClientObject_MergeDeveloperIdentities_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMergeDeveloperIdentitiesRequest            MergeDeveloperIdentitiesRequest;                           // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
	struct FMergeDeveloperIdentitiesResult             MergeDeveloperIdentitiesResult;                            // 0x0000(0x0010)  (Parm, OutParm, NativeAccessSpecifierPublic)
	CognitoIdentity_ECognitoIdentityError              errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdentity.CognitoIdentityClientObject.LookupDeveloperIdentity
struct UCognitoIdentityClientObject_LookupDeveloperIdentity_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLookupDeveloperIdentityRequest             LookupDeveloperIdentityRequest;                            // 0x0000(0x0048)  (Parm, NativeAccessSpecifierPublic)
	struct FLookupDeveloperIdentityResult              LookupDeveloperIdentityResult;                             // 0x0000(0x0030)  (Parm, OutParm, NativeAccessSpecifierPublic)
	CognitoIdentity_ECognitoIdentityError              errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdentity.CognitoIdentityClientObject.ListTagsForResource
struct UCognitoIdentityClientObject_ListTagsForResource_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCognitoIdentityListTagsForResourceRequest  listTagsForResourceRequest;                                // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
	struct FCognitoIdentityListTagsForResourceResult   listTagsForResourceResult;                                 // 0x0000(0x0050)  (Parm, OutParm, NativeAccessSpecifierPublic)
	CognitoIdentity_ECognitoIdentityError              errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdentity.CognitoIdentityClientObject.ListIdentityPools
struct UCognitoIdentityClientObject_ListIdentityPools_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FListIdentityPoolsRequest                   ListIdentityPoolsRequest;                                  // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
	struct FListIdentityPoolsResult                    ListIdentityPoolsResult;                                   // 0x0000(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
	CognitoIdentity_ECognitoIdentityError              errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdentity.CognitoIdentityClientObject.ListIdentities
struct UCognitoIdentityClientObject_ListIdentities_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FListIdentitiesRequest                      ListIdentitiesRequest;                                     // 0x0000(0x0030)  (Parm, NativeAccessSpecifierPublic)
	struct FListIdentitiesResult                       ListIdentitiesResult;                                      // 0x0000(0x0030)  (Parm, OutParm, NativeAccessSpecifierPublic)
	CognitoIdentity_ECognitoIdentityError              errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdentity.CognitoIdentityClientObject.GetServiceClientName
struct UCognitoIdentityClientObject_GetServiceClientName_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CognitoIdentity.CognitoIdentityClientObject.GetOpenIdTokenForDeveloperIdentity
struct UCognitoIdentityClientObject_GetOpenIdTokenForDeveloperIdentity_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGetOpenIdTokenForDeveloperIdentityRequest  GetOpenIdTokenForDeveloperIdentityRequest;                 // 0x0000(0x0078)  (Parm, NativeAccessSpecifierPublic)
	struct FGetOpenIdTokenForDeveloperIdentityResult   GetOpenIdTokenForDeveloperIdentityResult;                  // 0x0000(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
	CognitoIdentity_ECognitoIdentityError              errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdentity.CognitoIdentityClientObject.GetOpenIdToken
struct UCognitoIdentityClientObject_GetOpenIdToken_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGetOpenIdTokenRequest                      GetOpenIdTokenRequest;                                     // 0x0000(0x0060)  (Parm, NativeAccessSpecifierPublic)
	struct FGetOpenIdTokenResult                       GetOpenIdTokenResult;                                      // 0x0000(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
	CognitoIdentity_ECognitoIdentityError              errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdentity.CognitoIdentityClientObject.GetIdentityPoolRoles
struct UCognitoIdentityClientObject_GetIdentityPoolRoles_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGetIdentityPoolRolesRequest                GetIdentityPoolRolesRequest;                               // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
	struct FGetIdentityPoolRolesResult                 GetIdentityPoolRolesResult;                                // 0x0000(0x00B0)  (Parm, OutParm, NativeAccessSpecifierPublic)
	CognitoIdentity_ECognitoIdentityError              errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdentity.CognitoIdentityClientObject.GetId
struct UCognitoIdentityClientObject_GetId_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGetIdRequest                               GetIdRequest;                                              // 0x0000(0x0070)  (Parm, NativeAccessSpecifierPublic)
	struct FGetIdResult                                GetIdResult;                                               // 0x0000(0x0010)  (Parm, OutParm, NativeAccessSpecifierPublic)
	CognitoIdentity_ECognitoIdentityError              errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdentity.CognitoIdentityClientObject.GetCredentialsForIdentity
struct UCognitoIdentityClientObject_GetCredentialsForIdentity_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGetCredentialsForIdentityRequest           GetCredentialsForIdentityRequest;                          // 0x0000(0x0070)  (Parm, NativeAccessSpecifierPublic)
	struct FGetCredentialsForIdentityResult            GetCredentialsForIdentityResult;                           // 0x0000(0x0048)  (Parm, OutParm, NativeAccessSpecifierPublic)
	CognitoIdentity_ECognitoIdentityError              errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdentity.CognitoIdentityClientObject.DescribeIdentityPool
struct UCognitoIdentityClientObject_DescribeIdentityPool_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDescribeIdentityPoolRequest                DescribeIdentityPoolRequest;                               // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
	struct FDescribeIdentityPoolResult                 DescribeIdentityPoolResult;                                // 0x0000(0x0108)  (Parm, OutParm, NativeAccessSpecifierPublic)
	CognitoIdentity_ECognitoIdentityError              errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdentity.CognitoIdentityClientObject.DescribeIdentity
struct UCognitoIdentityClientObject_DescribeIdentity_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDescribeIdentityRequest                    DescribeIdentityRequest;                                   // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
	struct FDescribeIdentityResult                     DescribeIdentityResult;                                    // 0x0000(0x0030)  (Parm, OutParm, NativeAccessSpecifierPublic)
	CognitoIdentity_ECognitoIdentityError              errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdentity.CognitoIdentityClientObject.DeleteIdentityPool
struct UCognitoIdentityClientObject_DeleteIdentityPool_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDeleteIdentityPoolRequest                  DeleteIdentityPoolRequest;                                 // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
	CognitoIdentity_ECognitoIdentityError              errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdentity.CognitoIdentityClientObject.DeleteIdentities
struct UCognitoIdentityClientObject_DeleteIdentities_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDeleteIdentitiesRequest                    DeleteIdentitiesRequest;                                   // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
	struct FDeleteIdentitiesResult                     DeleteIdentitiesResult;                                    // 0x0000(0x0010)  (Parm, OutParm, NativeAccessSpecifierPublic)
	CognitoIdentity_ECognitoIdentityError              errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdentity.CognitoIdentityClientObject.CreateIdentityPool
struct UCognitoIdentityClientObject_CreateIdentityPool_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCreateIdentityPoolRequest                  CreateIdentityPoolRequest;                                 // 0x0000(0x00F8)  (Parm, NativeAccessSpecifierPublic)
	struct FCreateIdentityPoolResult                   CreateIdentityPoolResult;                                  // 0x0000(0x0108)  (Parm, OutParm, NativeAccessSpecifierPublic)
	CognitoIdentity_ECognitoIdentityError              errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CognitoIdentity.CognitoIdentityClientObject.CreateCognitoIdentityObject
struct UCognitoIdentityClientObject_CreateCognitoIdentityObject_Params
{
	struct FAWSCredentials                             credentials;                                               // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FAWSClientConfiguration                     clientConfiguration;                                       // 0x0000(0x00B8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UCognitoIdentityClientObject*                ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
