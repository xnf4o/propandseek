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

// Class GameLift.GameLiftClientObject
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UGameLiftClientObject : public UObject
{
public:
	unsigned char                                      UnknownData_2SUB[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameLift.GameLiftClientObject");
		return ptr;
	}



	void ValidateMatchmakingRuleSet(class UObject* WorldContextObject, bool* Success, const struct FValidateMatchmakingRuleSetRequest& ValidateMatchmakingRuleSetRequest, struct FValidateMatchmakingRuleSetResult* ValidateMatchmakingRuleSetResult, GameLift_EGameLiftError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void UpdateScript(class UObject* WorldContextObject, bool* Success, const struct FUpdateScriptRequest& UpdateScriptRequest, struct FUpdateScriptResult* UpdateScriptResult, GameLift_EGameLiftError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void UpdateRuntimeConfiguration(class UObject* WorldContextObject, bool* Success, const struct FUpdateRuntimeConfigurationRequest& UpdateRuntimeConfigurationRequest, struct FUpdateRuntimeConfigurationResult* UpdateRuntimeConfigurationResult, GameLift_EGameLiftError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void UpdateMatchmakingConfiguration(class UObject* WorldContextObject, bool* Success, const struct FUpdateMatchmakingConfigurationRequest& UpdateMatchmakingConfigurationRequest, struct FUpdateMatchmakingConfigurationResult* UpdateMatchmakingConfigurationResult, GameLift_EGameLiftError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void UpdateGameSessionQueue(class UObject* WorldContextObject, bool* Success, const struct FUpdateGameSessionQueueRequest& UpdateGameSessionQueueRequest, struct FUpdateGameSessionQueueResult* UpdateGameSessionQueueResult, GameLift_EGameLiftError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void UpdateGameSession(class UObject* WorldContextObject, bool* Success, const struct FUpdateGameSessionRequest& UpdateGameSessionRequest, struct FUpdateGameSessionResult* UpdateGameSessionResult, GameLift_EGameLiftError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void UpdateFleetPortSettings(class UObject* WorldContextObject, bool* Success, const struct FUpdateFleetPortSettingsRequest& UpdateFleetPortSettingsRequest, struct FUpdateFleetPortSettingsResult* UpdateFleetPortSettingsResult, GameLift_EGameLiftError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void UpdateFleetCapacity(class UObject* WorldContextObject, bool* Success, const struct FUpdateFleetCapacityRequest& UpdateFleetCapacityRequest, struct FUpdateFleetCapacityResult* UpdateFleetCapacityResult, GameLift_EGameLiftError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void UpdateFleetAttributes(class UObject* WorldContextObject, bool* Success, const struct FUpdateFleetAttributesRequest& UpdateFleetAttributesRequest, struct FUpdateFleetAttributesResult* UpdateFleetAttributesResult, GameLift_EGameLiftError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void UpdateBuild(class UObject* WorldContextObject, bool* Success, const struct FUpdateBuildRequest& UpdateBuildRequest, struct FUpdateBuildResult* UpdateBuildResult, GameLift_EGameLiftError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void UpdateAlias(class UObject* WorldContextObject, bool* Success, const struct FGameLiftUpdateAliasRequest& updateAliasRequest, struct FGameLiftUpdateAliasResult* updateAliasResult, GameLift_EGameLiftError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void StopMatchmaking(class UObject* WorldContextObject, bool* Success, const struct FStopMatchmakingRequest& StopMatchmakingRequest, struct FStopMatchmakingResult* StopMatchmakingResult, GameLift_EGameLiftError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void StopGameSessionPlacement(class UObject* WorldContextObject, bool* Success, const struct FStopGameSessionPlacementRequest& StopGameSessionPlacementRequest, struct FStopGameSessionPlacementResult* StopGameSessionPlacementResult, GameLift_EGameLiftError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void StopFleetActions(class UObject* WorldContextObject, bool* Success, const struct FStopFleetActionsRequest& StopFleetActionsRequest, struct FStopFleetActionsResult* StopFleetActionsResult, GameLift_EGameLiftError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void StartMatchmaking(class UObject* WorldContextObject, bool* Success, const struct FStartMatchmakingRequest& StartMatchmakingRequest, struct FStartMatchmakingResult* StartMatchmakingResult, GameLift_EGameLiftError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void StartMatchBackfill(class UObject* WorldContextObject, bool* Success, const struct FStartMatchBackfillRequest& StartMatchBackfillRequest, struct FStartMatchBackfillResult* StartMatchBackfillResult, GameLift_EGameLiftError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void StartGameSessionPlacement(class UObject* WorldContextObject, bool* Success, const struct FStartGameSessionPlacementRequest& StartGameSessionPlacementRequest, struct FStartGameSessionPlacementResult* StartGameSessionPlacementResult, GameLift_EGameLiftError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void StartFleetActions(class UObject* WorldContextObject, bool* Success, const struct FStartFleetActionsRequest& StartFleetActionsRequest, struct FStartFleetActionsResult* StartFleetActionsResult, GameLift_EGameLiftError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void SearchGameSessions(class UObject* WorldContextObject, bool* Success, const struct FSearchGameSessionsRequest& SearchGameSessionsRequest, struct FSearchGameSessionsResult* SearchGameSessionsResult, GameLift_EGameLiftError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void ResolveAlias(class UObject* WorldContextObject, bool* Success, const struct FResolveAliasRequest& ResolveAliasRequest, struct FResolveAliasResult* ResolveAliasResult, GameLift_EGameLiftError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void RequestUploadCredentials(class UObject* WorldContextObject, bool* Success, const struct FRequestUploadCredentialsRequest& RequestUploadCredentialsRequest, struct FRequestUploadCredentialsResult* RequestUploadCredentialsResult, GameLift_EGameLiftError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void PutScalingPolicy(class UObject* WorldContextObject, bool* Success, const struct FPutScalingPolicyRequest& PutScalingPolicyRequest, struct FPutScalingPolicyResult* PutScalingPolicyResult, GameLift_EGameLiftError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void ListScripts(class UObject* WorldContextObject, bool* Success, const struct FListScriptsRequest& ListScriptsRequest, struct FListScriptsResult* ListScriptsResult, GameLift_EGameLiftError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void ListFleets(class UObject* WorldContextObject, bool* Success, const struct FListFleetsRequest& ListFleetsRequest, struct FListFleetsResult* ListFleetsResult, GameLift_EGameLiftError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void ListBuilds(class UObject* WorldContextObject, bool* Success, const struct FListBuildsRequest& ListBuildsRequest, struct FListBuildsResult* ListBuildsResult, GameLift_EGameLiftError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void ListAliases(class UObject* WorldContextObject, bool* Success, const struct FGameLiftListAliasesRequest& listAliasesRequest, struct FGameLiftListAliasesResult* listAliasesResult, GameLift_EGameLiftError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	struct FString GetServiceClientName();
	void GetInstanceAccess(class UObject* WorldContextObject, bool* Success, const struct FGetInstanceAccessRequest& GetInstanceAccessRequest, struct FGetInstanceAccessResult* GetInstanceAccessResult, GameLift_EGameLiftError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void GetGameSessionLogUrl(class UObject* WorldContextObject, bool* Success, const struct FGetGameSessionLogUrlRequest& GetGameSessionLogUrlRequest, struct FGetGameSessionLogUrlResult* GetGameSessionLogUrlResult, GameLift_EGameLiftError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void DescribeVpcPeeringConnections(class UObject* WorldContextObject, bool* Success, const struct FDescribeVpcPeeringConnectionsRequest& DescribeVpcPeeringConnectionsRequest, struct FDescribeVpcPeeringConnectionsResult* DescribeVpcPeeringConnectionsResult, GameLift_EGameLiftError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void DescribeVpcPeeringAuthorizations(class UObject* WorldContextObject, bool* Success, const struct FDescribeVpcPeeringAuthorizationsRequest& DescribeVpcPeeringAuthorizationsRequest, struct FDescribeVpcPeeringAuthorizationsResult* DescribeVpcPeeringAuthorizationsResult, GameLift_EGameLiftError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void DescribeScript(class UObject* WorldContextObject, bool* Success, const struct FDescribeScriptRequest& DescribeScriptRequest, struct FDescribeScriptResult* DescribeScriptResult, GameLift_EGameLiftError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void DescribeScalingPolicies(class UObject* WorldContextObject, bool* Success, const struct FDescribeScalingPoliciesRequest& DescribeScalingPoliciesRequest, struct FDescribeScalingPoliciesResult* DescribeScalingPoliciesResult, GameLift_EGameLiftError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void DescribeRuntimeConfiguration(class UObject* WorldContextObject, bool* Success, const struct FDescribeRuntimeConfigurationRequest& DescribeRuntimeConfigurationRequest, struct FDescribeRuntimeConfigurationResult* DescribeRuntimeConfigurationResult, GameLift_EGameLiftError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void DescribePlayerSessions(class UObject* WorldContextObject, bool* Success, const struct FDescribePlayerSessionsRequest& DescribePlayerSessionsRequest, struct FDescribePlayerSessionsResult* DescribePlayerSessionsResult, GameLift_EGameLiftError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void DescribeMatchmakingRuleSets(class UObject* WorldContextObject, bool* Success, const struct FDescribeMatchmakingRuleSetsRequest& DescribeMatchmakingRuleSetsRequest, struct FDescribeMatchmakingRuleSetsResult* DescribeMatchmakingRuleSetsResult, GameLift_EGameLiftError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void DescribeMatchmakingConfigurations(class UObject* WorldContextObject, bool* Success, const struct FDescribeMatchmakingConfigurationsRequest& DescribeMatchmakingConfigurationsRequest, struct FDescribeMatchmakingConfigurationsResult* DescribeMatchmakingConfigurationsResult, GameLift_EGameLiftError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void DescribeMatchmaking(class UObject* WorldContextObject, bool* Success, const struct FDescribeMatchmakingRequest& DescribeMatchmakingRequest, struct FDescribeMatchmakingResult* DescribeMatchmakingResult, GameLift_EGameLiftError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void DescribeInstances(class UObject* WorldContextObject, bool* Success, const struct FDescribeInstancesRequest& DescribeInstancesRequest, struct FDescribeInstancesResult* DescribeInstancesResult, GameLift_EGameLiftError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void DescribeGameSessions(class UObject* WorldContextObject, bool* Success, const struct FDescribeGameSessionsRequest& DescribeGameSessionsRequest, struct FDescribeGameSessionsResult* DescribeGameSessionsResult, GameLift_EGameLiftError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void DescribeGameSessionQueues(class UObject* WorldContextObject, bool* Success, const struct FDescribeGameSessionQueuesRequest& DescribeGameSessionQueuesRequest, struct FDescribeGameSessionQueuesResult* DescribeGameSessionQueuesResult, GameLift_EGameLiftError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void DescribeGameSessionPlacement(class UObject* WorldContextObject, bool* Success, const struct FDescribeGameSessionPlacementRequest& DescribeGameSessionPlacementRequest, struct FDescribeGameSessionPlacementResult* DescribeGameSessionPlacementResult, GameLift_EGameLiftError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void DescribeGameSessionDetails(class UObject* WorldContextObject, bool* Success, const struct FDescribeGameSessionDetailsRequest& DescribeGameSessionDetailsRequest, struct FDescribeGameSessionDetailsResult* DescribeGameSessionDetailsResult, GameLift_EGameLiftError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void DescribeFleetUtilization(class UObject* WorldContextObject, bool* Success, const struct FDescribeFleetUtilizationRequest& DescribeFleetUtilizationRequest, struct FDescribeFleetUtilizationResult* DescribeFleetUtilizationResult, GameLift_EGameLiftError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void DescribeFleetPortSettings(class UObject* WorldContextObject, bool* Success, const struct FDescribeFleetPortSettingsRequest& DescribeFleetPortSettingsRequest, struct FDescribeFleetPortSettingsResult* DescribeFleetPortSettingsResult, GameLift_EGameLiftError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void DescribeFleetEvents(class UObject* WorldContextObject, bool* Success, const struct FDescribeFleetEventsRequest& DescribeFleetEventsRequest, struct FDescribeFleetEventsResult* DescribeFleetEventsResult, GameLift_EGameLiftError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void DescribeFleetCapacity(class UObject* WorldContextObject, bool* Success, const struct FDescribeFleetCapacityRequest& DescribeFleetCapacityRequest, struct FDescribeFleetCapacityResult* DescribeFleetCapacityResult, GameLift_EGameLiftError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void DescribeFleetAttributes(class UObject* WorldContextObject, bool* Success, const struct FDescribeFleetAttributesRequest& DescribeFleetAttributesRequest, struct FDescribeFleetAttributesResult* DescribeFleetAttributesResult, GameLift_EGameLiftError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void DescribeEC2InstanceLimits(class UObject* WorldContextObject, bool* Success, const struct FDescribeEC2InstanceLimitsRequest& DescribeEC2InstanceLimitsRequest, struct FDescribeEC2InstanceLimitsResult* DescribeEC2InstanceLimitsResult, GameLift_EGameLiftError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void DescribeBuild(class UObject* WorldContextObject, bool* Success, const struct FDescribeBuildRequest& DescribeBuildRequest, struct FDescribeBuildResult* DescribeBuildResult, GameLift_EGameLiftError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void DescribeAlias(class UObject* WorldContextObject, bool* Success, const struct FDescribeAliasRequest& DescribeAliasRequest, struct FDescribeAliasResult* DescribeAliasResult, GameLift_EGameLiftError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void DeleteVpcPeeringConnection(class UObject* WorldContextObject, bool* Success, const struct FDeleteVpcPeeringConnectionRequest& DeleteVpcPeeringConnectionRequest, struct FDeleteVpcPeeringConnectionResult* DeleteVpcPeeringConnectionResult, GameLift_EGameLiftError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void DeleteVpcPeeringAuthorization(class UObject* WorldContextObject, bool* Success, const struct FDeleteVpcPeeringAuthorizationRequest& DeleteVpcPeeringAuthorizationRequest, struct FDeleteVpcPeeringAuthorizationResult* DeleteVpcPeeringAuthorizationResult, GameLift_EGameLiftError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void DeleteScript(class UObject* WorldContextObject, bool* Success, const struct FDeleteScriptRequest& DeleteScriptRequest, GameLift_EGameLiftError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void DeleteScalingPolicy(class UObject* WorldContextObject, bool* Success, const struct FDeleteScalingPolicyRequest& DeleteScalingPolicyRequest, GameLift_EGameLiftError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void DeleteMatchmakingRuleSet(class UObject* WorldContextObject, bool* Success, const struct FDeleteMatchmakingRuleSetRequest& DeleteMatchmakingRuleSetRequest, struct FDeleteMatchmakingRuleSetResult* DeleteMatchmakingRuleSetResult, GameLift_EGameLiftError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void DeleteMatchmakingConfiguration(class UObject* WorldContextObject, bool* Success, const struct FDeleteMatchmakingConfigurationRequest& DeleteMatchmakingConfigurationRequest, struct FDeleteMatchmakingConfigurationResult* DeleteMatchmakingConfigurationResult, GameLift_EGameLiftError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void DeleteGameSessionQueue(class UObject* WorldContextObject, bool* Success, const struct FDeleteGameSessionQueueRequest& DeleteGameSessionQueueRequest, struct FDeleteGameSessionQueueResult* DeleteGameSessionQueueResult, GameLift_EGameLiftError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void DeleteFleet(class UObject* WorldContextObject, bool* Success, const struct FDeleteFleetRequest& DeleteFleetRequest, GameLift_EGameLiftError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void DeleteBuild(class UObject* WorldContextObject, bool* Success, const struct FDeleteBuildRequest& DeleteBuildRequest, GameLift_EGameLiftError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void DeleteAlias(class UObject* WorldContextObject, bool* Success, const struct FGameLiftDeleteAliasRequest& deleteAliasRequest, GameLift_EGameLiftError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void CreateVpcPeeringConnection(class UObject* WorldContextObject, bool* Success, const struct FCreateVpcPeeringConnectionRequest& CreateVpcPeeringConnectionRequest, struct FCreateVpcPeeringConnectionResult* CreateVpcPeeringConnectionResult, GameLift_EGameLiftError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void CreateVpcPeeringAuthorization(class UObject* WorldContextObject, bool* Success, const struct FCreateVpcPeeringAuthorizationRequest& CreateVpcPeeringAuthorizationRequest, struct FCreateVpcPeeringAuthorizationResult* CreateVpcPeeringAuthorizationResult, GameLift_EGameLiftError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void CreateScript(class UObject* WorldContextObject, bool* Success, const struct FCreateScriptRequest& CreateScriptRequest, struct FCreateScriptResult* CreateScriptResult, GameLift_EGameLiftError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void CreatePlayerSessions(class UObject* WorldContextObject, bool* Success, const struct FCreatePlayerSessionsRequest& CreatePlayerSessionsRequest, struct FCreatePlayerSessionsResult* CreatePlayerSessionsResult, GameLift_EGameLiftError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void CreatePlayerSession(class UObject* WorldContextObject, bool* Success, const struct FCreatePlayerSessionRequest& CreatePlayerSessionRequest, struct FCreatePlayerSessionResult* CreatePlayerSessionResult, GameLift_EGameLiftError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void CreateMatchmakingRuleSet(class UObject* WorldContextObject, bool* Success, const struct FCreateMatchmakingRuleSetRequest& CreateMatchmakingRuleSetRequest, struct FCreateMatchmakingRuleSetResult* CreateMatchmakingRuleSetResult, GameLift_EGameLiftError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void CreateMatchmakingConfiguration(class UObject* WorldContextObject, bool* Success, const struct FCreateMatchmakingConfigurationRequest& CreateMatchmakingConfigurationRequest, struct FCreateMatchmakingConfigurationResult* CreateMatchmakingConfigurationResult, GameLift_EGameLiftError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void CreateGameSessionQueue(class UObject* WorldContextObject, bool* Success, const struct FCreateGameSessionQueueRequest& CreateGameSessionQueueRequest, struct FCreateGameSessionQueueResult* CreateGameSessionQueueResult, GameLift_EGameLiftError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void CreateGameSession(class UObject* WorldContextObject, bool* Success, const struct FCreateGameSessionRequest& CreateGameSessionRequest, struct FCreateGameSessionResult* CreateGameSessionResult, GameLift_EGameLiftError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	class UGameLiftClientObject* STATIC_CreateGameLiftObject(const struct FAWSCredentials& credentials, const struct FAWSClientConfiguration& clientConfiguration);
	void CreateFleet(class UObject* WorldContextObject, bool* Success, const struct FCreateFleetRequest& CreateFleetRequest, struct FCreateFleetResult* CreateFleetResult, GameLift_EGameLiftError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void CreateBuild(class UObject* WorldContextObject, bool* Success, const struct FCreateBuildRequest& CreateBuildRequest, struct FCreateBuildResult* CreateBuildResult, GameLift_EGameLiftError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void CreateAlias(class UObject* WorldContextObject, bool* Success, const struct FGameLiftCreateAliasRequest& createAliasRequest, struct FGameLiftCreateAliasResult* createAliasResult, GameLift_EGameLiftError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
	void AcceptMatch(class UObject* WorldContextObject, bool* Success, const struct FAcceptMatchRequest& AcceptMatchRequest, struct FAcceptMatchResult* AcceptMatchResult, GameLift_EGameLiftError* errorType, struct FString* errorMessage, const struct FLatentActionInfo& LatentInfo);
};

// Class GameLift.GameLiftUtils
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UGameLiftUtils : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameLift.GameLiftUtils");
		return ptr;
	}



	GameLift_EGameLiftARNType STATIC_IdentifyGameLiftARNType(const struct FString& awsResourceName);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
