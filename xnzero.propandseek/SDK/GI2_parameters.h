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

// Function GI2.GI2_C.RetrieveCompensationInfo2
struct UGI2_C_RetrieveCompensationInfo2_Params
{
	struct FString                                     Content;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FsCompensationInfo>                  Compensations;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
};

// Function GI2.GI2_C.GetQuick
struct UGI2_C_GetQuick_Params
{
	struct FString                                     Content;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                               Found_;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     QuickPlayerQueueNumber;                                    // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function GI2.GI2_C.RetrieveTimedOutSessions
struct UGI2_C_RetrieveTimedOutSessions_Params
{
	struct FString                                     Content;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FString>                             GameSessionIdToDelete;                                     // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
};

// Function GI2.GI2_C.GetSessionNumberInfo
struct UGI2_C_GetSessionNumberInfo_Params
{
	struct FString                                     Content;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     SessionNumber;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function GI2.GI2_C.GetGameInformation
struct UGI2_C_GetGameInformation_Params
{
	struct FString                                     Content;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     gameSessionData;                                           // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     GameSessionInfo;                                           // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Creator;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     CurrentRound;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     CurrentPlayer;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     GameStatus;                                                // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     TimeCreated;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Title;                                                     // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Ban;                                                       // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function GI2.GI2_C.GetJson(Sub)
struct UGI2_C_GetJson_Sub__Params
{
	struct FString                                     Content;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Key;                                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Value;                                                     // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function GI2.GI2_C.RetrieveGameInfo
struct UGI2_C_RetrieveGameInfo_Params
{
	struct FString                                     Content;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     gameSessionId;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                               Found_;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     FoundString;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function GI2.GI2_C.CalculateGoldCoinBuff
struct UGI2_C_CalculateGoldCoinBuff_Params
{
	float                                              Output_Buff;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GI2.GI2_C.SelectRegion2
struct UGI2_C_SelectRegion2_Params
{
	TEnumAsByte<RegionList_ERegionList>                WhichRegion;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     Alias_Lobby;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Alias_Quick;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Alias_Competitive;                                         // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     region;                                                    // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     ConfigurationName_QuickMatch;                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     ConfigurationName_CompetitiveMatch;                        // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class UGameLiftClientObject*                       GameliftObject;                                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GI2.GI2_C.GameFilter
struct UGI2_C_GameFilter_Params
{
	struct FString                                     Item;                                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     gameSessionId;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     GameSessionInfo;                                           // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Creator;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     CurrentRounds;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     CurrentPlayers;                                            // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     GameStatus;                                                // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Time;                                                      // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Title;                                                     // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Ban;                                                       // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function GI2.GI2_C.ItemFilter
struct UGI2_C_ItemFilter_Params
{
	struct FString                                     Item;                                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     KeyName;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Type;                                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};

// Function GI2.GI2_C.UpdateSessionInfo
struct UGI2_C_UpdateSessionInfo_Params
{
	struct FString                                     gameSessionData;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Title;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Creator;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function GI2.GI2_C.UpdateAnnouncerVolume
struct UGI2_C_UpdateAnnouncerVolume_Params
{
	float                                              Volume;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GI2.GI2_C.UpdateAmbienceVolume
struct UGI2_C_UpdateAmbienceVolume_Params
{
	float                                              Volume;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GI2.GI2_C.DeploySessionSettings
struct UGI2_C_DeploySessionSettings_Params
{
	struct FString                                     Title;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Map;                                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     MaxRound;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     MaxPlayer;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Password;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                               OnlyTeamChat_;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               DisableHunterOutline_;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               DisablePropOutline_;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               DisableStartUntilFull_;                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     creatorId;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     SessionNumber;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TEnumAsByte<EMatchType_EMatchType>                 matchType;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<RegionList_ERegionList>                SessionRegion;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<WhichMap_EWhichMap>                    WhichMap;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DisableFreecam_;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GI2.GI2_C.CheckPlayerController
struct UGI2_C_CheckPlayerController_Params
{
	bool                                               NoPlayersExist_;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GI2.GI2_C.InvalidateAllTimer
struct UGI2_C_InvalidateAllTimer_Params
{
};

// Function GI2.GI2_C.SelectRegion
struct UGI2_C_SelectRegion_Params
{
	struct FString                                     Alias_Lobby;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Alias_Quick;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Alias_Competitive;                                         // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     region;                                                    // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     ConfigurationName_QuickMatch;                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     ConfigurationName_CompetitiveMatch;                        // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class UGameLiftClientObject*                       GameliftObject;                                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GI2.GI2_C.MessageFilter
struct UGI2_C_MessageFilter_Params
{
	struct FText                                       Message;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       ModifiedMessage;                                           // 0x0000(0x0018)  (Parm, OutParm)
};

// Function GI2.GI2_C.UpdateCinematicMode
struct UGI2_C_UpdateCinematicMode_Params
{
};

// Function GI2.GI2_C.MouseSensitivityOutput
struct UGI2_C_MouseSensitivityOutput_Params
{
	float                                              Sensitivity;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GI2.GI2_C.UpdateUIVolume
struct UGI2_C_UpdateUIVolume_Params
{
	float                                              Volume;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GI2.GI2_C.UpdateEffectsVolume
struct UGI2_C_UpdateEffectsVolume_Params
{
	float                                              Volume;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GI2.GI2_C.UpdateMusicVolume
struct UGI2_C_UpdateMusicVolume_Params
{
	float                                              Volume;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GI2.GI2_C.UpdateMasterVolume
struct UGI2_C_UpdateMasterVolume_Params
{
	float                                              Volume;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GI2.GI2_C.OnAuthFinished
struct UGI2_C_OnAuthFinished_Params
{
};

// Function GI2.GI2_C.OnGetAllLobbies
struct UGI2_C_OnGetAllLobbies_Params
{
};

// Function GI2.GI2_C.OnGetAllGames
struct UGI2_C_OnGetAllGames_Params
{
};

// Function GI2.GI2_C.OnProcessReady
struct UGI2_C_OnProcessReady_Params
{
};

// Function GI2.GI2_C.GetAllGames
struct UGI2_C_GetAllGames_Params
{
	class ALobbyPC2_C*                                 LobbyPC;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GI2.GI2_C.JoinLobbyClient
struct UGI2_C_JoinLobbyClient_Params
{
};

// Function GI2.GI2_C.Trials
struct UGI2_C_Trials_Params
{
};

// Function GI2.GI2_C.CreatePlayerSession
struct UGI2_C_CreatePlayerSession_Params
{
};

// Function GI2.GI2_C.RetrieveRoomInfo
struct UGI2_C_RetrieveRoomInfo_Params
{
};

// Function GI2.GI2_C.OnCompletedHttpRequest(GetInfos)
struct UGI2_C_OnCompletedHttpRequest_GetInfos__Params
{
	class ULowEntryHttpRequestResponse*                Response;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GI2.GI2_C.UpdateGameInfo
struct UGI2_C_UpdateGameInfo_Params
{
	TEnumAsByte<EDyGameSession_EDyGameSession>         WorkType_Key_;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     Value;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function GI2.GI2_C.OnCompletedHttpRequest(UpdateGameInfo)
struct UGI2_C_OnCompletedHttpRequest_UpdateGameInfo__Params
{
	class ULowEntryHttpRequestResponse*                Response;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GI2.GI2_C.DeleteDynamoDBList
struct UGI2_C_DeleteDynamoDBList_Params
{
};

// Function GI2.GI2_C.OnCompletedHttpRequest(Delete)
struct UGI2_C_OnCompletedHttpRequest_Delete__Params
{
	class ULowEntryHttpRequestResponse*                Response;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GI2.GI2_C.GetSessionNumber
struct UGI2_C_GetSessionNumber_Params
{
	class ALobbyPC2_C*                                 LobbyPC;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GI2.GI2_C.OnCompletedHttpRequest(GetSessionNumber)
struct UGI2_C_OnCompletedHttpRequest_GetSessionNumber__Params
{
	class ULowEntryHttpRequestResponse*                Response;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GI2.GI2_C.OnCompletedHttpRequest(SetSessionNumber)
struct UGI2_C_OnCompletedHttpRequest_SetSessionNumber__Params
{
	class ULowEntryHttpRequestResponse*                Response;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GI2.GI2_C.MakeGameSession
struct UGI2_C_MakeGameSession_Params
{
	struct FString                                     gameSessionId;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     GameSessionInfo;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Creator;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Title;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function GI2.GI2_C.OnCompletedHttpRequest(MakeGame)
struct UGI2_C_OnCompletedHttpRequest_MakeGame__Params
{
	class ULowEntryHttpRequestResponse*                Response;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GI2.GI2_C.VerifyGameSessions
struct UGI2_C_VerifyGameSessions_Params
{
};

// Function GI2.GI2_C.OnCompletedHttpRequest(VerifyGameSessions)
struct UGI2_C_OnCompletedHttpRequest_VerifyGameSessions__Params
{
	class ULowEntryHttpRequestResponse*                Response;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GI2.GI2_C.OnCompletedHttpRequest(DeleteQueue)
struct UGI2_C_OnCompletedHttpRequest_DeleteQueue__Params
{
	class ULowEntryHttpRequestResponse*                Response;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GI2.GI2_C.AddQuickQueueNumber
struct UGI2_C_AddQuickQueueNumber_Params
{
};

// Function GI2.GI2_C.OnCompletedHttpRequest(GetQuickQueuePlayerNumber)
struct UGI2_C_OnCompletedHttpRequest_GetQuickQueuePlayerNumber__Params
{
	class ULowEntryHttpRequestResponse*                Response;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GI2.GI2_C.OnCompletedHttpRequest(AddQuickQueue)Post
struct UGI2_C_OnCompletedHttpRequest_AddQuickQueue_Post_Params
{
	class ULowEntryHttpRequestResponse*                Response;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GI2.GI2_C.SubtractQuickQueueNumber
struct UGI2_C_SubtractQuickQueueNumber_Params
{
};

// Function GI2.GI2_C.InitQuickQueueTimer
struct UGI2_C_InitQuickQueueTimer_Params
{
};

// Function GI2.GI2_C.StartQuickQueueRender
struct UGI2_C_StartQuickQueueRender_Params
{
};

// Function GI2.GI2_C.DeleteRequestedGame
struct UGI2_C_DeleteRequestedGame_Params
{
	struct FString                                     gameSessionId;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function GI2.GI2_C.OnHttpRequestCompleted(DeleteRequestedGame)
struct UGI2_C_OnHttpRequestCompleted_DeleteRequestedGame__Params
{
	class ULowEntryHttpRequestResponse*                Response;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GI2.GI2_C.RetrieveCompensationInfo
struct UGI2_C_RetrieveCompensationInfo_Params
{
	class ALobbyGM1_C*                                 GM;                                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GI2.GI2_C.OnCompletedHttpRequest(GetCompensationInfos)
struct UGI2_C_OnCompletedHttpRequest_GetCompensationInfos__Params
{
	class ULowEntryHttpRequestResponse*                Response;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GI2.GI2_C.DeleteCompensationInfo
struct UGI2_C_DeleteCompensationInfo_Params
{
	struct FString                                     SteamIdToUpdate;                                           // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function GI2.GI2_C.OnCompletedHttpRequest(PostCompensationInfos)
struct UGI2_C_OnCompletedHttpRequest_PostCompensationInfos__Params
{
	class ULowEntryHttpRequestResponse*                Response;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GI2.GI2_C.Start_Cognito_Auth
struct UGI2_C_Start_Cognito_Auth_Params
{
};

// Function GI2.GI2_C.ReceiveShutdown
struct UGI2_C_ReceiveShutdown_Params
{
};

// Function GI2.GI2_C.Check players
struct UGI2_C_Check_players_Params
{
};

// Function GI2.GI2_C.CheckPlayerSession
struct UGI2_C_CheckPlayerSession_Params
{
	float                                              CheckNoPlayerSession;                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameModeBase*                               GameMode;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GI2.GI2_C.EndServer
struct UGI2_C_EndServer_Params
{
};

// Function GI2.GI2_C.InitializeAmazonGamelift
struct UGI2_C_InitializeAmazonGamelift_Params
{
	class AGameModeBase*                               GameMode;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GI2.GI2_C.InitFromFPSGM
struct UGI2_C_InitFromFPSGM_Params
{
	class AFPS_GM_C*                                   FPSGM;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GI2.GI2_C.ExecuteUbergraph_GI2
struct UGI2_C_ExecuteUbergraph_GI2_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
