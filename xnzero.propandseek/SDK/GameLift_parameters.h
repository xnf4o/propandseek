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

// Function GameLift.GameLiftClientObject.ValidateMatchmakingRuleSet
struct UGameLiftClientObject_ValidateMatchmakingRuleSet_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FValidateMatchmakingRuleSetRequest          ValidateMatchmakingRuleSetRequest;                         // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
	struct FValidateMatchmakingRuleSetResult           ValidateMatchmakingRuleSetResult;                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.UpdateScript
struct UGameLiftClientObject_UpdateScript_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUpdateScriptRequest                        UpdateScriptRequest;                                       // 0x0000(0x0080)  (Parm, NativeAccessSpecifierPublic)
	struct FUpdateScriptResult                         UpdateScriptResult;                                        // 0x0000(0x0080)  (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.UpdateRuntimeConfiguration
struct UGameLiftClientObject_UpdateRuntimeConfiguration_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUpdateRuntimeConfigurationRequest          UpdateRuntimeConfigurationRequest;                         // 0x0000(0x0028)  (Parm, NativeAccessSpecifierPublic)
	struct FUpdateRuntimeConfigurationResult           UpdateRuntimeConfigurationResult;                          // 0x0000(0x0018)  (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.UpdateMatchmakingConfiguration
struct UGameLiftClientObject_UpdateMatchmakingConfiguration_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUpdateMatchmakingConfigurationRequest      UpdateMatchmakingConfigurationRequest;                     // 0x0000(0x00A0)  (Parm, NativeAccessSpecifierPublic)
	struct FUpdateMatchmakingConfigurationResult       UpdateMatchmakingConfigurationResult;                      // 0x0000(0x00A8)  (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.UpdateGameSessionQueue
struct UGameLiftClientObject_UpdateGameSessionQueue_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUpdateGameSessionQueueRequest              UpdateGameSessionQueueRequest;                             // 0x0000(0x0038)  (Parm, NativeAccessSpecifierPublic)
	struct FUpdateGameSessionQueueResult               UpdateGameSessionQueueResult;                              // 0x0000(0x0048)  (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.UpdateGameSession
struct UGameLiftClientObject_UpdateGameSession_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUpdateGameSessionRequest                   UpdateGameSessionRequest;                                  // 0x0000(0x0030)  (Parm, NativeAccessSpecifierPublic)
	struct FUpdateGameSessionResult                    UpdateGameSessionResult;                                   // 0x0000(0x00B8)  (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.UpdateFleetPortSettings
struct UGameLiftClientObject_UpdateFleetPortSettings_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUpdateFleetPortSettingsRequest             UpdateFleetPortSettingsRequest;                            // 0x0000(0x0030)  (Parm, NativeAccessSpecifierPublic)
	struct FUpdateFleetPortSettingsResult              UpdateFleetPortSettingsResult;                             // 0x0000(0x0010)  (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.UpdateFleetCapacity
struct UGameLiftClientObject_UpdateFleetCapacity_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUpdateFleetCapacityRequest                 UpdateFleetCapacityRequest;                                // 0x0000(0x0020)  (Parm, NativeAccessSpecifierPublic)
	struct FUpdateFleetCapacityResult                  UpdateFleetCapacityResult;                                 // 0x0000(0x0010)  (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.UpdateFleetAttributes
struct UGameLiftClientObject_UpdateFleetAttributes_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUpdateFleetAttributesRequest               UpdateFleetAttributesRequest;                              // 0x0000(0x0050)  (Parm, NativeAccessSpecifierPublic)
	struct FUpdateFleetAttributesResult                UpdateFleetAttributesResult;                               // 0x0000(0x0010)  (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.UpdateBuild
struct UGameLiftClientObject_UpdateBuild_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUpdateBuildRequest                         UpdateBuildRequest;                                        // 0x0000(0x0030)  (Parm, NativeAccessSpecifierPublic)
	struct FUpdateBuildResult                          UpdateBuildResult;                                         // 0x0000(0x0048)  (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.UpdateAlias
struct UGameLiftClientObject_UpdateAlias_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameLiftUpdateAliasRequest                 updateAliasRequest;                                        // 0x0000(0x0058)  (Parm, NativeAccessSpecifierPublic)
	struct FGameLiftUpdateAliasResult                  updateAliasResult;                                         // 0x0000(0x0078)  (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.StopMatchmaking
struct UGameLiftClientObject_StopMatchmaking_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FStopMatchmakingRequest                     StopMatchmakingRequest;                                    // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
	struct FStopMatchmakingResult                      StopMatchmakingResult;                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.StopGameSessionPlacement
struct UGameLiftClientObject_StopGameSessionPlacement_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FStopGameSessionPlacementRequest            StopGameSessionPlacementRequest;                           // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
	struct FStopGameSessionPlacementResult             StopGameSessionPlacementResult;                            // 0x0000(0x00F8)  (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.StopFleetActions
struct UGameLiftClientObject_StopFleetActions_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FStopFleetActionsRequest                    StopFleetActionsRequest;                                   // 0x0000(0x0020)  (Parm, NativeAccessSpecifierPublic)
	struct FStopFleetActionsResult                     StopFleetActionsResult;                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.StartMatchmaking
struct UGameLiftClientObject_StartMatchmaking_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FStartMatchmakingRequest                    StartMatchmakingRequest;                                   // 0x0000(0x0030)  (Parm, NativeAccessSpecifierPublic)
	struct FStartMatchmakingResult                     StartMatchmakingResult;                                    // 0x0000(0x00B8)  (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.StartMatchBackfill
struct UGameLiftClientObject_StartMatchBackfill_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FStartMatchBackfillRequest                  StartMatchBackfillRequest;                                 // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
	struct FStartMatchBackfillResult                   StartMatchBackfillResult;                                  // 0x0000(0x00B8)  (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.StartGameSessionPlacement
struct UGameLiftClientObject_StartGameSessionPlacement_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FStartGameSessionPlacementRequest           StartGameSessionPlacementRequest;                          // 0x0000(0x0078)  (Parm, NativeAccessSpecifierPublic)
	struct FStartGameSessionPlacementResult            StartGameSessionPlacementResult;                           // 0x0000(0x00F8)  (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.StartFleetActions
struct UGameLiftClientObject_StartFleetActions_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FStartFleetActionsRequest                   StartFleetActionsRequest;                                  // 0x0000(0x0020)  (Parm, NativeAccessSpecifierPublic)
	struct FStartFleetActionsResult                    StartFleetActionsResult;                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.SearchGameSessions
struct UGameLiftClientObject_SearchGameSessions_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSearchGameSessionsRequest                  SearchGameSessionsRequest;                                 // 0x0000(0x0048)  (Parm, NativeAccessSpecifierPublic)
	struct FSearchGameSessionsResult                   SearchGameSessionsResult;                                  // 0x0000(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.ResolveAlias
struct UGameLiftClientObject_ResolveAlias_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FResolveAliasRequest                        ResolveAliasRequest;                                       // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
	struct FResolveAliasResult                         ResolveAliasResult;                                        // 0x0000(0x0010)  (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.RequestUploadCredentials
struct UGameLiftClientObject_RequestUploadCredentials_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRequestUploadCredentialsRequest            RequestUploadCredentialsRequest;                           // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
	struct FRequestUploadCredentialsResult             RequestUploadCredentialsResult;                            // 0x0000(0x0070)  (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.PutScalingPolicy
struct UGameLiftClientObject_PutScalingPolicy_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPutScalingPolicyRequest                    PutScalingPolicyRequest;                                   // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
	struct FPutScalingPolicyResult                     PutScalingPolicyResult;                                    // 0x0000(0x0010)  (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.ListScripts
struct UGameLiftClientObject_ListScripts_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FListScriptsRequest                         ListScriptsRequest;                                        // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
	struct FListScriptsResult                          ListScriptsResult;                                         // 0x0000(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.ListFleets
struct UGameLiftClientObject_ListFleets_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FListFleetsRequest                          ListFleetsRequest;                                         // 0x0000(0x0038)  (Parm, NativeAccessSpecifierPublic)
	struct FListFleetsResult                           ListFleetsResult;                                          // 0x0000(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.ListBuilds
struct UGameLiftClientObject_ListBuilds_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FListBuildsRequest                          ListBuildsRequest;                                         // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
	struct FListBuildsResult                           ListBuildsResult;                                          // 0x0000(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.ListAliases
struct UGameLiftClientObject_ListAliases_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameLiftListAliasesRequest                 listAliasesRequest;                                        // 0x0000(0x0030)  (Parm, NativeAccessSpecifierPublic)
	struct FGameLiftListAliasesResult                  listAliasesResult;                                         // 0x0000(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.GetServiceClientName
struct UGameLiftClientObject_GetServiceClientName_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.GetInstanceAccess
struct UGameLiftClientObject_GetInstanceAccess_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGetInstanceAccessRequest                   GetInstanceAccessRequest;                                  // 0x0000(0x0020)  (Parm, NativeAccessSpecifierPublic)
	struct FGetInstanceAccessResult                    GetInstanceAccessResult;                                   // 0x0000(0x0058)  (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.GetGameSessionLogUrl
struct UGameLiftClientObject_GetGameSessionLogUrl_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGetGameSessionLogUrlRequest                GetGameSessionLogUrlRequest;                               // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
	struct FGetGameSessionLogUrlResult                 GetGameSessionLogUrlResult;                                // 0x0000(0x0010)  (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.DescribeVpcPeeringConnections
struct UGameLiftClientObject_DescribeVpcPeeringConnections_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDescribeVpcPeeringConnectionsRequest       DescribeVpcPeeringConnectionsRequest;                      // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
	struct FDescribeVpcPeeringConnectionsResult        DescribeVpcPeeringConnectionsResult;                       // 0x0000(0x0010)  (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.DescribeVpcPeeringAuthorizations
struct UGameLiftClientObject_DescribeVpcPeeringAuthorizations_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDescribeVpcPeeringAuthorizationsRequest    DescribeVpcPeeringAuthorizationsRequest;                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FDescribeVpcPeeringAuthorizationsResult     DescribeVpcPeeringAuthorizationsResult;                    // 0x0000(0x0010)  (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.DescribeScript
struct UGameLiftClientObject_DescribeScript_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDescribeScriptRequest                      DescribeScriptRequest;                                     // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
	struct FDescribeScriptResult                       DescribeScriptResult;                                      // 0x0000(0x0080)  (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.DescribeScalingPolicies
struct UGameLiftClientObject_DescribeScalingPolicies_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDescribeScalingPoliciesRequest             DescribeScalingPoliciesRequest;                            // 0x0000(0x0028)  (Parm, NativeAccessSpecifierPublic)
	struct FDescribeScalingPoliciesResult              DescribeScalingPoliciesResult;                             // 0x0000(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.DescribeRuntimeConfiguration
struct UGameLiftClientObject_DescribeRuntimeConfiguration_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDescribeRuntimeConfigurationRequest        DescribeRuntimeConfigurationRequest;                       // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
	struct FDescribeRuntimeConfigurationResult         DescribeRuntimeConfigurationResult;                        // 0x0000(0x0018)  (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.DescribePlayerSessions
struct UGameLiftClientObject_DescribePlayerSessions_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDescribePlayerSessionsRequest              DescribePlayerSessionsRequest;                             // 0x0000(0x0058)  (Parm, NativeAccessSpecifierPublic)
	struct FDescribePlayerSessionsResult               DescribePlayerSessionsResult;                              // 0x0000(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.DescribeMatchmakingRuleSets
struct UGameLiftClientObject_DescribeMatchmakingRuleSets_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDescribeMatchmakingRuleSetsRequest         DescribeMatchmakingRuleSetsRequest;                        // 0x0000(0x0028)  (Parm, NativeAccessSpecifierPublic)
	struct FDescribeMatchmakingRuleSetsResult          DescribeMatchmakingRuleSetsResult;                         // 0x0000(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.DescribeMatchmakingConfigurations
struct UGameLiftClientObject_DescribeMatchmakingConfigurations_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDescribeMatchmakingConfigurationsRequest   DescribeMatchmakingConfigurationsRequest;                  // 0x0000(0x0038)  (Parm, NativeAccessSpecifierPublic)
	struct FDescribeMatchmakingConfigurationsResult    DescribeMatchmakingConfigurationsResult;                   // 0x0000(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.DescribeMatchmaking
struct UGameLiftClientObject_DescribeMatchmaking_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDescribeMatchmakingRequest                 DescribeMatchmakingRequest;                                // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
	struct FDescribeMatchmakingResult                  DescribeMatchmakingResult;                                 // 0x0000(0x0010)  (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.DescribeInstances
struct UGameLiftClientObject_DescribeInstances_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDescribeInstancesRequest                   DescribeInstancesRequest;                                  // 0x0000(0x0038)  (Parm, NativeAccessSpecifierPublic)
	struct FDescribeInstancesResult                    DescribeInstancesResult;                                   // 0x0000(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.DescribeGameSessions
struct UGameLiftClientObject_DescribeGameSessions_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDescribeGameSessionsRequest                DescribeGameSessionsRequest;                               // 0x0000(0x0038)  (Parm, NativeAccessSpecifierPublic)
	struct FDescribeGameSessionsResult                 DescribeGameSessionsResult;                                // 0x0000(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.DescribeGameSessionQueues
struct UGameLiftClientObject_DescribeGameSessionQueues_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDescribeGameSessionQueuesRequest           DescribeGameSessionQueuesRequest;                          // 0x0000(0x0028)  (Parm, NativeAccessSpecifierPublic)
	struct FDescribeGameSessionQueuesResult            DescribeGameSessionQueuesResult;                           // 0x0000(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.DescribeGameSessionPlacement
struct UGameLiftClientObject_DescribeGameSessionPlacement_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDescribeGameSessionPlacementRequest        DescribeGameSessionPlacementRequest;                       // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
	struct FDescribeGameSessionPlacementResult         DescribeGameSessionPlacementResult;                        // 0x0000(0x00F8)  (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.DescribeGameSessionDetails
struct UGameLiftClientObject_DescribeGameSessionDetails_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDescribeGameSessionDetailsRequest          DescribeGameSessionDetailsRequest;                         // 0x0000(0x0038)  (Parm, NativeAccessSpecifierPublic)
	struct FDescribeGameSessionDetailsResult           DescribeGameSessionDetailsResult;                          // 0x0000(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.DescribeFleetUtilization
struct UGameLiftClientObject_DescribeFleetUtilization_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDescribeFleetUtilizationRequest            DescribeFleetUtilizationRequest;                           // 0x0000(0x0028)  (Parm, NativeAccessSpecifierPublic)
	struct FDescribeFleetUtilizationResult             DescribeFleetUtilizationResult;                            // 0x0000(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.DescribeFleetPortSettings
struct UGameLiftClientObject_DescribeFleetPortSettings_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDescribeFleetPortSettingsRequest           DescribeFleetPortSettingsRequest;                          // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
	struct FDescribeFleetPortSettingsResult            DescribeFleetPortSettingsResult;                           // 0x0000(0x0010)  (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.DescribeFleetEvents
struct UGameLiftClientObject_DescribeFleetEvents_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDescribeFleetEventsRequest                 DescribeFleetEventsRequest;                                // 0x0000(0x0038)  (Parm, NativeAccessSpecifierPublic)
	struct FDescribeFleetEventsResult                  DescribeFleetEventsResult;                                 // 0x0000(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.DescribeFleetCapacity
struct UGameLiftClientObject_DescribeFleetCapacity_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDescribeFleetCapacityRequest               DescribeFleetCapacityRequest;                              // 0x0000(0x0028)  (Parm, NativeAccessSpecifierPublic)
	struct FDescribeFleetCapacityResult                DescribeFleetCapacityResult;                               // 0x0000(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.DescribeFleetAttributes
struct UGameLiftClientObject_DescribeFleetAttributes_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDescribeFleetAttributesRequest             DescribeFleetAttributesRequest;                            // 0x0000(0x0028)  (Parm, NativeAccessSpecifierPublic)
	struct FDescribeFleetAttributesResult              DescribeFleetAttributesResult;                             // 0x0000(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.DescribeEC2InstanceLimits
struct UGameLiftClientObject_DescribeEC2InstanceLimits_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDescribeEC2InstanceLimitsRequest           DescribeEC2InstanceLimitsRequest;                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FDescribeEC2InstanceLimitsResult            DescribeEC2InstanceLimitsResult;                           // 0x0000(0x0010)  (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.DescribeBuild
struct UGameLiftClientObject_DescribeBuild_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDescribeBuildRequest                       DescribeBuildRequest;                                      // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
	struct FDescribeBuildResult                        DescribeBuildResult;                                       // 0x0000(0x0048)  (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.DescribeAlias
struct UGameLiftClientObject_DescribeAlias_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDescribeAliasRequest                       DescribeAliasRequest;                                      // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
	struct FDescribeAliasResult                        DescribeAliasResult;                                       // 0x0000(0x0078)  (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.DeleteVpcPeeringConnection
struct UGameLiftClientObject_DeleteVpcPeeringConnection_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDeleteVpcPeeringConnectionRequest          DeleteVpcPeeringConnectionRequest;                         // 0x0000(0x0020)  (Parm, NativeAccessSpecifierPublic)
	struct FDeleteVpcPeeringConnectionResult           DeleteVpcPeeringConnectionResult;                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.DeleteVpcPeeringAuthorization
struct UGameLiftClientObject_DeleteVpcPeeringAuthorization_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDeleteVpcPeeringAuthorizationRequest       DeleteVpcPeeringAuthorizationRequest;                      // 0x0000(0x0020)  (Parm, NativeAccessSpecifierPublic)
	struct FDeleteVpcPeeringAuthorizationResult        DeleteVpcPeeringAuthorizationResult;                       // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.DeleteScript
struct UGameLiftClientObject_DeleteScript_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDeleteScriptRequest                        DeleteScriptRequest;                                       // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.DeleteScalingPolicy
struct UGameLiftClientObject_DeleteScalingPolicy_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDeleteScalingPolicyRequest                 DeleteScalingPolicyRequest;                                // 0x0000(0x0020)  (Parm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.DeleteMatchmakingRuleSet
struct UGameLiftClientObject_DeleteMatchmakingRuleSet_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDeleteMatchmakingRuleSetRequest            DeleteMatchmakingRuleSetRequest;                           // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
	struct FDeleteMatchmakingRuleSetResult             DeleteMatchmakingRuleSetResult;                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.DeleteMatchmakingConfiguration
struct UGameLiftClientObject_DeleteMatchmakingConfiguration_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDeleteMatchmakingConfigurationRequest      DeleteMatchmakingConfigurationRequest;                     // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
	struct FDeleteMatchmakingConfigurationResult       DeleteMatchmakingConfigurationResult;                      // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.DeleteGameSessionQueue
struct UGameLiftClientObject_DeleteGameSessionQueue_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDeleteGameSessionQueueRequest              DeleteGameSessionQueueRequest;                             // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
	struct FDeleteGameSessionQueueResult               DeleteGameSessionQueueResult;                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.DeleteFleet
struct UGameLiftClientObject_DeleteFleet_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDeleteFleetRequest                         DeleteFleetRequest;                                        // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.DeleteBuild
struct UGameLiftClientObject_DeleteBuild_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDeleteBuildRequest                         DeleteBuildRequest;                                        // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.DeleteAlias
struct UGameLiftClientObject_DeleteAlias_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameLiftDeleteAliasRequest                 deleteAliasRequest;                                        // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.CreateVpcPeeringConnection
struct UGameLiftClientObject_CreateVpcPeeringConnection_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCreateVpcPeeringConnectionRequest          CreateVpcPeeringConnectionRequest;                         // 0x0000(0x0030)  (Parm, NativeAccessSpecifierPublic)
	struct FCreateVpcPeeringConnectionResult           CreateVpcPeeringConnectionResult;                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.CreateVpcPeeringAuthorization
struct UGameLiftClientObject_CreateVpcPeeringAuthorization_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCreateVpcPeeringAuthorizationRequest       CreateVpcPeeringAuthorizationRequest;                      // 0x0000(0x0020)  (Parm, NativeAccessSpecifierPublic)
	struct FCreateVpcPeeringAuthorizationResult        CreateVpcPeeringAuthorizationResult;                       // 0x0000(0x0040)  (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.CreateScript
struct UGameLiftClientObject_CreateScript_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCreateScriptRequest                        CreateScriptRequest;                                       // 0x0000(0x0070)  (Parm, NativeAccessSpecifierPublic)
	struct FCreateScriptResult                         CreateScriptResult;                                        // 0x0000(0x0080)  (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.CreatePlayerSessions
struct UGameLiftClientObject_CreatePlayerSessions_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCreatePlayerSessionsRequest                CreatePlayerSessionsRequest;                               // 0x0000(0x0070)  (Parm, NativeAccessSpecifierPublic)
	struct FCreatePlayerSessionsResult                 CreatePlayerSessionsResult;                                // 0x0000(0x0010)  (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.CreatePlayerSession
struct UGameLiftClientObject_CreatePlayerSession_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCreatePlayerSessionRequest                 CreatePlayerSessionRequest;                                // 0x0000(0x0030)  (Parm, NativeAccessSpecifierPublic)
	struct FCreatePlayerSessionResult                  CreatePlayerSessionResult;                                 // 0x0000(0x0090)  (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.CreateMatchmakingRuleSet
struct UGameLiftClientObject_CreateMatchmakingRuleSet_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCreateMatchmakingRuleSetRequest            CreateMatchmakingRuleSetRequest;                           // 0x0000(0x0020)  (Parm, NativeAccessSpecifierPublic)
	struct FCreateMatchmakingRuleSetResult             CreateMatchmakingRuleSetResult;                            // 0x0000(0x0028)  (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.CreateMatchmakingConfiguration
struct UGameLiftClientObject_CreateMatchmakingConfiguration_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCreateMatchmakingConfigurationRequest      CreateMatchmakingConfigurationRequest;                     // 0x0000(0x00A0)  (Parm, NativeAccessSpecifierPublic)
	struct FCreateMatchmakingConfigurationResult       CreateMatchmakingConfigurationResult;                      // 0x0000(0x00A8)  (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.CreateGameSessionQueue
struct UGameLiftClientObject_CreateGameSessionQueue_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCreateGameSessionQueueRequest              CreateGameSessionQueueRequest;                             // 0x0000(0x0038)  (Parm, NativeAccessSpecifierPublic)
	struct FCreateGameSessionQueueResult               CreateGameSessionQueueResult;                              // 0x0000(0x0048)  (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.CreateGameSession
struct UGameLiftClientObject_CreateGameSession_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCreateGameSessionRequest                   CreateGameSessionRequest;                                  // 0x0000(0x0078)  (Parm, NativeAccessSpecifierPublic)
	struct FCreateGameSessionResult                    CreateGameSessionResult;                                   // 0x0000(0x00B8)  (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.CreateGameLiftObject
struct UGameLiftClientObject_CreateGameLiftObject_Params
{
	struct FAWSCredentials                             credentials;                                               // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FAWSClientConfiguration                     clientConfiguration;                                       // 0x0000(0x00B8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UGameLiftClientObject*                       ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.CreateFleet
struct UGameLiftClientObject_CreateFleet_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCreateFleetRequest                         CreateFleetRequest;                                        // 0x0000(0x0100)  (Parm, NativeAccessSpecifierPublic)
	struct FCreateFleetResult                          CreateFleetResult;                                         // 0x0000(0x00F8)  (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.CreateBuild
struct UGameLiftClientObject_CreateBuild_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCreateBuildRequest                         CreateBuildRequest;                                        // 0x0000(0x0068)  (Parm, NativeAccessSpecifierPublic)
	struct FCreateBuildResult                          CreateBuildResult;                                         // 0x0000(0x00B8)  (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.CreateAlias
struct UGameLiftClientObject_CreateAlias_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameLiftCreateAliasRequest                 createAliasRequest;                                        // 0x0000(0x0048)  (Parm, NativeAccessSpecifierPublic)
	struct FGameLiftCreateAliasResult                  createAliasResult;                                         // 0x0000(0x0078)  (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.AcceptMatch
struct UGameLiftClientObject_AcceptMatch_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAcceptMatchRequest                         AcceptMatchRequest;                                        // 0x0000(0x0028)  (Parm, NativeAccessSpecifierPublic)
	struct FAcceptMatchResult                          AcceptMatchResult;                                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftUtils.IdentifyGameLiftARNType
struct UGameLiftUtils_IdentifyGameLiftARNType_Params
{
	struct FString                                     awsResourceName;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	GameLift_EGameLiftARNType                          ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
