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

// BlueprintGeneratedClass GI2.GI2_C
// 0x0639 (FullSize[0x07A1] - InheritedSize[0x0168])
class UGI2_C : public UGameInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0168(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FString                                     secretKey;                                                 // 0x0170(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     AccessKey;                                                 // 0x0180(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     sessionToken;                                              // 0x0190(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FDateTime                                   expiration;                                                // 0x01A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<struct FString>                             ClientId;                                                  // 0x01A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FString>                             Alias_Lobby_;                                              // 0x01B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FString>                             Alias_QuickGame_;                                          // 0x01C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               FirstStart_;                                               // 0x01D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_RO6Z[0x3];                                     // 0x01D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MaxLobbyPlayers;                                           // 0x01DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FString>                             Alias_CompetitiveGame_;                                    // 0x01E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                HourlyWarning;                                             // 0x01F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<EChatMode_EChatMode>                   ChatMode;                                                  // 0x01F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_H91R[0x3];                                     // 0x01F5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MasterVolume;                                              // 0x01F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MusicVolume;                                               // 0x01FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              EffectsVolume;                                             // 0x0200(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              UIVolume;                                                  // 0x0204(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int>                                        GraphicSettingsIndex;                                      // 0x0208(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     MyScreenResolutionOption;                                  // 0x0218(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	float                                              MouseSensitivity;                                          // 0x0228(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ScreenModeIndex;                                           // 0x022C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Cinematic_;                                                // 0x0230(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Vsync_;                                                    // 0x0231(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Kicked_;                                                   // 0x0232(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_DB2X[0x5];                                     // 0x0233(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ReasonForKicked;                                           // 0x0238(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<struct FString>                             InvalidWords;                                              // 0x0248(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FString>                             ConfigurationName_Quick_;                                  // 0x0258(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FString>                             ConfigurationName_Competitive_;                            // 0x0268(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TEnumAsByte<RegionList_ERegionList>                MyRegion;                                                  // 0x0278(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_G87F[0x7];                                     // 0x0279(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     PlayerSessionID_Lobby;                                     // 0x0280(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     PlayerSessionID_Game;                                      // 0x0290(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     DebuggingSteamID;                                          // 0x02A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class AGameModeBase*                               PASGameMode;                                               // 0x02B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               UseNumberID_;                                              // 0x02B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ShortenTime_;                                              // 0x02B9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               DisableValidCheck_;                                        // 0x02BA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               OneManStartGame_;                                          // 0x02BB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsShuttingDown_;                                           // 0x02BC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsJoiningGame_;                                            // 0x02BD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ForceStart_;                                               // 0x02BE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               DebugLobby_;                                               // 0x02BF(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FString                                     CompetitiveLeaderboardID;                                  // 0x02C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                               DebugChooseProps_;                                         // 0x02D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               TestServer_;                                               // 0x02D1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               AlternativeQuickMatch_;                                    // 0x02D2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               InvertMouse;                                               // 0x02D3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ZBRX[0x4];                                     // 0x02D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     SessionTitle;                                              // 0x02D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     Map;                                                       // 0x02E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     MaxRound;                                                  // 0x02F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     MaxPlayer;                                                 // 0x0308(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     Password;                                                  // 0x0318(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class UPP_C*                                       PP;                                                        // 0x0328(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FAWSGameSession>                     SessionList;                                               // 0x0330(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     GameSessionIdToJoin;                                       // 0x0340(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<struct FString>                             DevID;                                                     // 0x0350(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               EnableSuperStatus_;                                        // 0x0360(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_U0TK[0x3];                                     // 0x0361(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                SessionNumber;                                             // 0x0364(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DebugMicroTxn;                                             // 0x0368(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_4NNP[0x7];                                     // 0x0369(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       Version;                                                   // 0x0370(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               DisablePropOutline_;                                       // 0x0388(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               DisableGlobalChat_;                                        // 0x0389(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               DisableHunterOutline_;                                     // 0x038A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               DisableStartUntilFull_;                                    // 0x038B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              AmbienceVolume;                                            // 0x038C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<ELanguage_ELanguage>                   Language;                                                  // 0x0390(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_H1K6[0x7];                                     // 0x0391(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     CustomMatchLeaderboardID;                                  // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     userName;                                                  // 0x03A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	int                                                GoldCoins;                                                 // 0x03B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                STokens;                                                   // 0x03BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Mileage;                                                   // 0x03C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CustomScore;                                               // 0x03C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CompetitiveScore;                                          // 0x03C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DisplayAnimationInLobby_;                                  // 0x03CC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_AILH[0x3];                                     // 0x03CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     QuickMatchLeaderboardID;                                   // 0x03D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class UObject*>                             ChatList;                                                  // 0x03E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     TestLobby;                                                 // 0x03F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     TestGame;                                                  // 0x0400(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                               ChatSwitch;                                                // 0x0410(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_VR6A[0x3];                                     // 0x0411(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Exp;                                                       // 0x0414(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               MouseMode_;                                                // 0x0418(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TEnumAsByte<EGameFocusMode_EGameFocusMode>         FocusMode;                                                 // 0x0419(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSCashItemsGameInfo                         CashItemInfos;                                             // 0x041A(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               HasNewPurchase_;                                           // 0x0422(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               CustomTop100_;                                             // 0x0423(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               CompetitiveTop100_;                                        // 0x0424(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_MSVI[0x3];                                     // 0x0425(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              AnnouncerVolume;                                           // 0x0428(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_ADRJ[0x4];                                     // 0x042C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     MyCurrentGameSessionData;                                  // 0x0430(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     CompetitiveGameSessionData;                                // 0x0440(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     QuickGameSessionData;                                      // 0x0450(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     Maintenance_Content;                                       // 0x0460(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                               Maintenance_Display;                                       // 0x0470(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_F5GZ[0x7];                                     // 0x0471(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Maintenance_link;                                          // 0x0478(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     Maintenance_time_date;                                     // 0x0488(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     Maintenance_time_time;                                     // 0x0498(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     Maintenance_title;                                         // 0x04A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                               PatchNote_Visibility;                                      // 0x04B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_BJ30[0x7];                                     // 0x04B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     PatchNote_Version;                                         // 0x04C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     PatchNote_Link;                                            // 0x04D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class UGameLiftClientObject*>               GameliftObject;                                            // 0x04E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FString>                             identityPoolId;                                            // 0x04F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     creatorId;                                                 // 0x0500(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	TEnumAsByte<EMatchType_EMatchType>                 matchType;                                                 // 0x0510(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<RegionList_ERegionList>                SessionRegion;                                             // 0x0511(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<WhichMap_EWhichMap>                    WhichMap;                                                  // 0x0512(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               QuickTop100_;                                              // 0x0513(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int                                                NewsAmount;                                                // 0x0514(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DisableFreecam_;                                           // 0x0518(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               MotionBlur_;                                               // 0x0519(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_4W53[0x6];                                     // 0x051A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UDynamoDBClientObject*                       DynamodbObject;                                            // 0x0520(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Authenicated_;                                             // 0x0528(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TEnumAsByte<RegionList_ERegionList>                Cognito_TempRegion;                                        // 0x0529(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_WLKL[0x2];                                     // 0x052A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Cognito_TempIndex;                                         // 0x052C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULowEntryExecutionQueue*                     Cognito_TempQueue;                                         // 0x0530(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSDyLobby>                           LobbySessionList;                                          // 0x0538(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FSDyGameSessions>                    GameSessionList;                                           // 0x0548(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TEnumAsByte<EDyGameSession_EDyGameSession>         DynamoDB_Game_TempChangeTo;                                // 0x0558(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_05X7[0x7];                                     // 0x0559(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     DynamoDB_Game_TempValue;                                   // 0x0560(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                               CanGetAllGames_;                                           // 0x0570(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ReadyToJoinGame01;                                         // 0x0571(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ReadyToJoinGame02;                                         // 0x0572(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               SpammingTime;                                              // 0x0573(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_WZTI[0x4];                                     // 0x0574(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCognitoIdentityClientObject*                TempCognitoObject;                                         // 0x0578(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGetIdResult                                TempGetIdResult;                                           // 0x0580(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FString                                     DefaultAccessID;                                           // 0x0590(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     DefaultSecretKeyID;                                        // 0x05A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	int                                                FieldOfView;                                               // 0x05B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_EQLB[0x4];                                     // 0x05B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     DefaultAccountID;                                          // 0x05B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FAWSGameSession                             gameSessionId;                                             // 0x05C8(0x00B8) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               FoundSession_;                                             // 0x0680(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_FKJ0[0x7];                                     // 0x0681(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSAwsGameInfo                               AwsGameInfo__ServerOnly_;                                  // 0x0688(0x0090) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     RetrievedSessionNumber;                                    // 0x0718(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<struct FString>                             GameSessionIdToDelete;                                     // 0x0728(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                QueueIndex;                                                // 0x0738(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_6EKM[0x4];                                     // 0x073C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     CurrentQuickQueueNumber;                                   // 0x0740(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<TEnumAsByte<EQuickCompetitiveQueue_EQuickCompetitiveQueue>> QuickQueue;                                                // 0x0750(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FTimerHandle                                QuickQueueTimer;                                           // 0x0760(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int                                                JoinTrials;                                                // 0x0768(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_VV50[0x4];                                     // 0x076C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                JoinTrialTimer;                                            // 0x0770(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                               IsInPropSelection_;                                        // 0x0778(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_PVN9[0x7];                                     // 0x0779(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FsCompensationInfo>                  ToCompensates;                                             // 0x0780(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               ViewChat_;                                                 // 0x0790(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Reported_AbusiveChat;                                      // 0x0791(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_VDOA[0x6];                                     // 0x0792(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDateTime                                   Reported_AbusiveChatBanDuration;                           // 0x0798(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                               Compensated_;                                              // 0x07A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass GI2.GI2_C");
		return ptr;
	}



	void RetrieveCompensationInfo2(const struct FString& Content, TArray<struct FsCompensationInfo>* Compensations);
	void GetQuick(const struct FString& Content, bool* Found_, struct FString* QuickPlayerQueueNumber);
	void RetrieveTimedOutSessions(const struct FString& Content, TArray<struct FString>* GameSessionIdToDelete);
	void GetSessionNumberInfo(const struct FString& Content, struct FString* SessionNumber);
	void GetGameInformation(const struct FString& Content, struct FString* gameSessionData, struct FString* GameSessionInfo, struct FString* Creator, struct FString* CurrentRound, struct FString* CurrentPlayer, struct FString* GameStatus, struct FString* TimeCreated, struct FString* Title, struct FString* Ban);
	void GetJson_Sub_(const struct FString& Content, const struct FString& Key, struct FString* Value);
	void RetrieveGameInfo(const struct FString& Content, const struct FString& gameSessionId, bool* Found_, struct FString* FoundString);
	void CalculateGoldCoinBuff(float* Output_Buff);
	void SelectRegion2(TEnumAsByte<RegionList_ERegionList> WhichRegion, struct FString* Alias_Lobby, struct FString* Alias_Quick, struct FString* Alias_Competitive, struct FString* region, struct FString* ConfigurationName_QuickMatch, struct FString* ConfigurationName_CompetitiveMatch, class UGameLiftClientObject** GameliftObject);
	void GameFilter(const struct FString& Item, struct FString* gameSessionId, struct FString* GameSessionInfo, struct FString* Creator, struct FString* CurrentRounds, struct FString* CurrentPlayers, struct FString* GameStatus, struct FString* Time, struct FString* Title, struct FString* Ban);
	struct FString ItemFilter(const struct FString& Item, const struct FString& KeyName, const struct FString& Type);
	void UpdateSessionInfo(const struct FString& gameSessionData, const struct FString& Title, const struct FString& Creator);
	void UpdateAnnouncerVolume(float Volume);
	void UpdateAmbienceVolume(float Volume);
	void DeploySessionSettings(const struct FString& Title, const struct FString& Map, const struct FString& MaxRound, const struct FString& MaxPlayer, const struct FString& Password, bool OnlyTeamChat_, bool DisableHunterOutline_, bool DisablePropOutline_, bool DisableStartUntilFull_, const struct FString& creatorId, const struct FString& SessionNumber, TEnumAsByte<EMatchType_EMatchType> matchType, TEnumAsByte<RegionList_ERegionList> SessionRegion, TEnumAsByte<WhichMap_EWhichMap> WhichMap, bool DisableFreecam_);
	void CheckPlayerController(bool* NoPlayersExist_);
	void InvalidateAllTimer();
	void SelectRegion(struct FString* Alias_Lobby, struct FString* Alias_Quick, struct FString* Alias_Competitive, struct FString* region, struct FString* ConfigurationName_QuickMatch, struct FString* ConfigurationName_CompetitiveMatch, class UGameLiftClientObject** GameliftObject);
	void MessageFilter(const struct FText& Message, struct FText* ModifiedMessage);
	void UpdateCinematicMode();
	void MouseSensitivityOutput(float* Sensitivity);
	void UpdateUIVolume(float Volume);
	void UpdateEffectsVolume(float Volume);
	void UpdateMusicVolume(float Volume);
	void UpdateMasterVolume(float Volume);
	void OnAuthFinished();
	void OnGetAllLobbies();
	void OnGetAllGames();
	void OnProcessReady();
	void GetAllGames(class ALobbyPC2_C* LobbyPC);
	void JoinLobbyClient();
	void Trials();
	void CreatePlayerSession();
	void RetrieveRoomInfo();
	void OnCompletedHttpRequest_GetInfos_(class ULowEntryHttpRequestResponse* Response);
	void UpdateGameInfo(TEnumAsByte<EDyGameSession_EDyGameSession> WorkType_Key_, const struct FString& Value);
	void OnCompletedHttpRequest_UpdateGameInfo_(class ULowEntryHttpRequestResponse* Response);
	void DeleteDynamoDBList();
	void OnCompletedHttpRequest_Delete_(class ULowEntryHttpRequestResponse* Response);
	void GetSessionNumber(class ALobbyPC2_C* LobbyPC);
	void OnCompletedHttpRequest_GetSessionNumber_(class ULowEntryHttpRequestResponse* Response);
	void OnCompletedHttpRequest_SetSessionNumber_(class ULowEntryHttpRequestResponse* Response);
	void MakeGameSession(const struct FString& gameSessionId, const struct FString& GameSessionInfo, const struct FString& Creator, const struct FString& Title);
	void OnCompletedHttpRequest_MakeGame_(class ULowEntryHttpRequestResponse* Response);
	void VerifyGameSessions();
	void OnCompletedHttpRequest_VerifyGameSessions_(class ULowEntryHttpRequestResponse* Response);
	void OnCompletedHttpRequest_DeleteQueue_(class ULowEntryHttpRequestResponse* Response);
	void AddQuickQueueNumber();
	void OnCompletedHttpRequest_GetQuickQueuePlayerNumber_(class ULowEntryHttpRequestResponse* Response);
	void OnCompletedHttpRequest_AddQuickQueue_Post(class ULowEntryHttpRequestResponse* Response);
	void SubtractQuickQueueNumber();
	void InitQuickQueueTimer();
	void StartQuickQueueRender();
	void DeleteRequestedGame(const struct FString& gameSessionId);
	void OnHttpRequestCompleted_DeleteRequestedGame_(class ULowEntryHttpRequestResponse* Response);
	void RetrieveCompensationInfo(class ALobbyGM1_C* GM);
	void OnCompletedHttpRequest_GetCompensationInfos_(class ULowEntryHttpRequestResponse* Response);
	void DeleteCompensationInfo(const struct FString& SteamIdToUpdate);
	void OnCompletedHttpRequest_PostCompensationInfos_(class ULowEntryHttpRequestResponse* Response);
	void Start_Cognito_Auth();
	void ReceiveShutdown();
	void Check_players();
	void CheckPlayerSession(float CheckNoPlayerSession, class AGameModeBase* GameMode);
	void EndServer();
	void InitializeAmazonGamelift(class AGameModeBase* GameMode);
	void InitFromFPSGM(class AFPS_GM_C* FPSGM);
	void ExecuteUbergraph_GI2(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
