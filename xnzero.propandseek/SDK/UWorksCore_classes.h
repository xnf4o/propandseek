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

// Class UWorksCore.UWorksInterfaceCore
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UUWorksInterfaceCore : public UUWorksInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.UWorksInterfaceCore");
		return ptr;
	}



};

// Class UWorksCore.UWorksRequestCore
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UUWorksRequestCore : public UUWorksRequest
{
public:
	unsigned char                                      UnknownData_5707[0x10];                                    // 0x0028(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.UWorksRequestCore");
		return ptr;
	}



};

// Class UWorksCore.UWorksInterfaceCoreAppList
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
class UUWorksInterfaceCoreAppList : public UUWorksInterfaceCore
{
public:
	struct FScriptMulticastDelegate                    SteamAppInstalled;                                         // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    SteamAppUninstalled;                                       // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.UWorksInterfaceCoreAppList");
		return ptr;
	}



	int GetNumInstalledApps();
	int GetInstalledApps(TArray<int>* AppIDs, int MaxAppIDs);
	int GetAppName(int AppID, struct FString* Name, int NameMaxLength);
	class UUWorksInterfaceCoreAppList* STATIC_GetAppList();
	int GetAppInstallDir(int AppID, struct FString* Directory, int DirectoryMaxLength);
	int GetAppBuildId(int AppID);
};

// Class UWorksCore.UWorksInterfaceCoreApps
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
class UUWorksInterfaceCoreApps : public UUWorksInterfaceCore
{
public:
	struct FScriptMulticastDelegate                    DlcInstalled;                                              // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    NewLaunchQueryParameters;                                  // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.UWorksInterfaceCoreApps");
		return ptr;
	}



	void UninstallDLC(int AppID);
	bool MarkContentCorrupt(bool bMissingFilesOnly);
	void InstallDLC(int AppID);
	struct FString GetLaunchQueryParam(const struct FString& Key);
	int GetInstalledDepots(int AppID, TArray<int>* Depots, int MaxDepots);
	void GetFileDetailsMinimal(const struct FScriptDelegate& Completed, const struct FString& Filename);
	class UUWorksRequestCoreGetFileDetails* GetFileDetails();
	int GetEarliestPurchaseUnixTime(int AppID);
	bool GetDlcDownloadProgress(int AppID, int* BytesDownloaded, int* BytesTotal);
	int GetDLCCount();
	struct FString GetCurrentGameLanguage();
	bool GetCurrentBetaName(struct FString* Name, int NameMaxLength);
	struct FString GetAvailableGameLanguages();
	class UUWorksInterfaceCoreApps* STATIC_GetApps();
	struct FUWorksSteamID GetAppOwner();
	int GetAppInstallDir(int AppID, struct FString* Path, int PathMaxLength);
	int GetAppBuildId();
	bool BIsVACBanned();
	bool BIsSubscribedFromFreeWeekend();
	bool BIsSubscribedApp(int AppID);
	bool BIsSubscribed();
	bool BIsLowViolence();
	bool BIsDlcInstalled(int AppID);
	bool BIsCybercafe();
	bool BIsAppInstalled(int AppID);
	bool BGetDLCDataByIndex(int DLC, int* AppID, bool* bAvailable, struct FString* Name, int NameMaxLength);
};

// Class UWorksCore.UWorksInterfaceCoreController
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UUWorksInterfaceCoreController : public UUWorksInterfaceCore
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.UWorksInterfaceCoreController");
		return ptr;
	}



	void TriggerVibration(const struct FUWorksControllerHandle& ControllerHandle, int LeftSpeed, int RightSpeed);
	void TriggerRepeatedHapticPulse(const struct FUWorksControllerHandle& ControllerHandle, UWorksCore_EUWorksSteamControllerPad TargetPad, int DurationMicroSec, int OffMicroSec, int Repeat, int Flags);
	void TriggerHapticPulse(const struct FUWorksControllerHandle& ControllerHandle, UWorksCore_EUWorksSteamControllerPad TargetPad, int DurationMicroSec);
	void StopAnalogActionMomentum(const struct FUWorksControllerHandle& ControllerHandle, const struct FUWorksControllerAnalogActionHandle& action);
	bool Shutdown();
	bool ShowBindingPanel(const struct FUWorksControllerHandle& ControllerHandle);
	void SetLEDColor(const struct FUWorksControllerHandle& ControllerHandle, unsigned char ColorR, unsigned char ColorG, unsigned char ColorB, TArray<UWorksCore_EUWorksSteamControllerLEDFlag> Flags);
	void RunFrame();
	bool Init();
	struct FString GetStringForActionOrigin(UWorksCore_EUWorksControllerActionOrigin Origin);
	struct FUWorksControllerMotionData GetMotionData(const struct FUWorksControllerHandle& ControllerHandle);
	struct FString GetGlyphForActionOrigin(UWorksCore_EUWorksControllerActionOrigin Origin);
	int GetGamepadIndexForController(const struct FUWorksControllerHandle& ControllerHandle);
	int GetDigitalActionOrigins(const struct FUWorksControllerHandle& ControllerHandle, const struct FUWorksControllerActionSetHandle& ActionSetHandle, const struct FUWorksControllerDigitalActionHandle& DigitalActionHandle, TArray<UWorksCore_EUWorksControllerActionOrigin>* OriginsOut);
	struct FUWorksControllerDigitalActionHandle GetDigitalActionHandle(const struct FString& ActionName);
	struct FUWorksControllerDigitalActionData GetDigitalActionData(const struct FUWorksControllerHandle& ControllerHandle, const struct FUWorksControllerDigitalActionHandle& DigitalActionHandle);
	struct FUWorksControllerActionSetHandle GetCurrentActionSet(const struct FUWorksControllerHandle& ControllerHandle);
	struct FUWorksControllerHandle GetControllerForGamepadIndex(int Index);
	class UUWorksInterfaceCoreController* STATIC_GetController();
	int GetConnectedControllers(TArray<struct FUWorksControllerHandle>* HandlesOut);
	int GetAnalogActionOrigins(const struct FUWorksControllerHandle& ControllerHandle, const struct FUWorksControllerActionSetHandle& ActionSetHandle, const struct FUWorksControllerAnalogActionHandle& AnalogActionHandle, TArray<UWorksCore_EUWorksControllerActionOrigin>* OriginsOut);
	struct FUWorksControllerAnalogActionHandle GetAnalogActionHandle(const struct FString& ActionName);
	struct FUWorksControllerAnalogActionData GetAnalogActionData(const struct FUWorksControllerHandle& ControllerHandle, const struct FUWorksControllerAnalogActionHandle& AnalogActionHandle);
	struct FUWorksControllerActionSetHandle GetActionSetHandle(const struct FString& ActionSetName);
	void ActivateActionSet(const struct FUWorksControllerHandle& ControllerHandle, const struct FUWorksControllerActionSetHandle& ActionSetHandle);
};

// Class UWorksCore.UWorksInterfaceCoreFriends
// 0x00B0 (FullSize[0x00D8] - InheritedSize[0x0028])
class UUWorksInterfaceCoreFriends : public UUWorksInterfaceCore
{
public:
	struct FScriptMulticastDelegate                    PersonaStateChange;                                        // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    GameOverlayActivated;                                      // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    GameServerChangeRequested;                                 // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    GameLobbyJoinRequested;                                    // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    AvatarImageLoaded;                                         // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    FriendRichPresenceUpdate;                                  // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    GameRichPresenceJoinRequested;                             // 0x0088(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    GameConnectedClanChatMsg;                                  // 0x0098(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    GameConnectedChatJoin;                                     // 0x00A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    GameConnectedChatLeave;                                    // 0x00B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    GameConnectedFriendChatMsg;                                // 0x00C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.UWorksInterfaceCoreFriends");
		return ptr;
	}



	bool SetRichPresence(const struct FString& Key, const struct FString& Value);
	void SetPlayedWith(const struct FUWorksSteamID& SteamIDUserPlayedWith);
	void SetPersonaNameMinimal(const struct FScriptDelegate& Completed, const struct FString& Name);
	class UUWorksRequestCoreSetPersonaName* SetPersonaName();
	bool SetListenForFriendsMessages(bool bInterceptEnabled);
	void SetInGameVoiceSpeaking(const struct FUWorksSteamID& SteamIDUser, bool bSpeaking);
	bool SendClanChatMessage(const struct FUWorksSteamID& SteamIDClanChat, const struct FString& Text);
	bool RequestUserInformation(const struct FUWorksSteamID& SteamIDUser, bool bRequireNameOnly);
	void RequestFriendRichPresence(const struct FUWorksSteamID& SteamIDFriend);
	void RequestClanOfficerListMinimal(const struct FScriptDelegate& Completed, const struct FUWorksSteamID& SteamID);
	class UUWorksRequestCoreRequestClanOfficerList* RequestClanOfficerList();
	bool ReplyToFriendMessage(const struct FUWorksSteamID& SteamIDFriend, const struct FString& MessageToSend);
	bool OpenClanChatWindowInSteam(const struct FUWorksSteamID& SteamIDClanChat);
	bool LeaveClanChatRoom(const struct FUWorksSteamID& SteamIDClan);
	void JoinClanChatRoomMinimal(const struct FScriptDelegate& Completed, const struct FUWorksSteamID& SteamIDClan);
	class UUWorksRequestCoreJoinClanChatRoom* JoinClanChatRoom();
	bool IsUserInSource(const struct FUWorksSteamID& SteamIDUser, const struct FUWorksSteamID& SteamIDSource);
	void IsFollowingMinimal(const struct FScriptDelegate& Completed, const struct FUWorksSteamID& SteamID);
	class UUWorksRequestCoreIsFollowing* IsFollowing();
	bool IsClanChatWindowOpenInSteam(const struct FUWorksSteamID& SteamIDClanChat);
	bool IsClanChatAdmin(const struct FUWorksSteamID& SteamIDClanChat, const struct FUWorksSteamID& SteamIDUser);
	bool InviteUserToGame(const struct FUWorksSteamID& SteamIDFriend, const struct FString& ConnectString);
	bool HasFriend(const struct FUWorksSteamID& SteamIDFriend, TArray<UWorksCore_EUWorksFriendFlags> FriendFlags);
	TArray<UWorksCore_EUWorksUserRestriction> GetUserRestrictions();
	class UTexture2D* GetSmallFriendAvatar(const struct FUWorksSteamID& SteamIDFriend);
	struct FString GetPlayerNickname(const struct FUWorksSteamID& SteamIDPlayer);
	UWorksCore_EUWorksPersonaState GetPersonaState();
	struct FString GetPersonaName();
	class UTexture2D* GetMediumFriendAvatar(const struct FUWorksSteamID& SteamIDFriend);
	class UTexture2D* GetLargeFriendAvatar(const struct FUWorksSteamID& SteamIDFriend);
	int GetFriendSteamLevel(const struct FUWorksSteamID& SteamIDFriend);
	struct FString GetFriendsGroupName(const struct FUWorksFriendsGroupID& FriendsGroupID);
	void GetFriendsGroupMembersList(const struct FUWorksFriendsGroupID& FriendsGroupID, TArray<struct FUWorksSteamID>* SteamIDMembers, int MembersCount);
	int GetFriendsGroupMembersCount(const struct FUWorksFriendsGroupID& FriendsGroupID);
	struct FUWorksFriendsGroupID GetFriendsGroupIDByIndex(int FriendGroup);
	int GetFriendsGroupCount();
	class UUWorksInterfaceCoreFriends* STATIC_GetFriends();
	int GetFriendRichPresenceKeyCount(const struct FUWorksSteamID& SteamIDFriend);
	struct FString GetFriendRichPresenceKeyByIndex(const struct FUWorksSteamID& SteamIDFriend, int Key);
	struct FString GetFriendRichPresence(const struct FUWorksSteamID& SteamIDFriend, const struct FString& Key);
	UWorksCore_EUWorksFriendRelationship GetFriendRelationship(const struct FUWorksSteamID& SteamIDFriend);
	UWorksCore_EUWorksPersonaState GetFriendPersonaState(const struct FUWorksSteamID& SteamIDFriend);
	struct FString GetFriendPersonaNameHistory(const struct FUWorksSteamID& SteamIDFriend, int PersonaName);
	struct FString GetFriendPersonaName(const struct FUWorksSteamID& SteamIDFriend);
	int GetFriendMessage(const struct FUWorksSteamID& SteamIDFriend, int MessageID, struct FString* Text, int TextMaxLength, UWorksCore_EUWorksChatEntryType* ChatEntryType);
	bool GetFriendGamePlayed(const struct FUWorksSteamID& SteamIDFriend, struct FUWorksGameID* GameID, struct FString* GameIP, int* ConnectionPort, int* QueryPort, struct FUWorksSteamID* SteamIDLobby);
	struct FUWorksSteamID GetFriendFromSourceByIndex(const struct FUWorksSteamID& SteamIDSource, int Friend);
	int GetFriendCountFromSource(const struct FUWorksSteamID& SteamIDSource);
	int GetFriendCount(TArray<UWorksCore_EUWorksFriendFlags> FriendFlags);
	int GetFriendCoplayTime(const struct FUWorksSteamID& SteamIDFriend);
	int GetFriendCoplayGame(const struct FUWorksSteamID& SteamIDFriend);
	struct FUWorksSteamID GetFriendByIndex(int Friend, TArray<UWorksCore_EUWorksFriendFlags> FriendFlags);
	void GetFollowerCountMinimal(const struct FScriptDelegate& Completed, const struct FUWorksSteamID& SteamID);
	class UUWorksRequestCoreGetFollowerCount* GetFollowerCount();
	int GetCoplayFriendCount();
	struct FUWorksSteamID GetCoplayFriend(int CoplayFriend);
	struct FString GetClanTag(const struct FUWorksSteamID& SteamIDClan);
	struct FUWorksSteamID GetClanOwner(const struct FUWorksSteamID& SteamIDClan);
	int GetClanOfficerCount(const struct FUWorksSteamID& SteamIDClan);
	struct FUWorksSteamID GetClanOfficerByIndex(const struct FUWorksSteamID& SteamIDClan, int Officer);
	struct FString GetClanName(const struct FUWorksSteamID& SteamIDClan);
	int GetClanCount();
	int GetClanChatMessage(const struct FUWorksSteamID& SteamIDClanChat, int MessageID, struct FString* Text, int TextMax, UWorksCore_EUWorksChatEntryType* ChatEntryType, struct FUWorksSteamID* SteamIDChatter);
	int GetClanChatMemberCount(const struct FUWorksSteamID& SteamIDClan);
	struct FUWorksSteamID GetClanByIndex(int Clan);
	bool GetClanActivityCounts(const struct FUWorksSteamID& SteamIDClan, int* Online, int* InGame, int* Chatting);
	struct FUWorksSteamID GetChatMemberByIndex(const struct FUWorksSteamID& SteamIDClan, int user);
	void EnumerateFollowingListMinimal(const struct FScriptDelegate& Completed, int StartIndex);
	class UUWorksRequestCoreEnumerateFollowingList* EnumerateFollowingList();
	void DownloadClanActivityCountsMinimal(const struct FScriptDelegate& Completed, TArray<struct FUWorksSteamID> SteamIDClans);
	class UUWorksRequestCoreDownloadClanActivityCounts* DownloadClanActivityCounts();
	bool CloseClanChatWindowInSteam(const struct FUWorksSteamID& SteamIDClanChat);
	void ClearRichPresence();
	void ActivateGameOverlayToWebPage(const struct FString& URL);
	void ActivateGameOverlayToUser(UWorksCore_EUWorksOverlaySpecific Dialog, const struct FUWorksSteamID& SteamID);
	void ActivateGameOverlayToStore(int AppID, UWorksCore_EUWorksOverlayToStoreFlag Flag);
	void ActivateGameOverlayInviteDialog(const struct FUWorksSteamID& SteamIDLobby);
	void ActivateGameOverlay(UWorksCore_EUWorksOverlayGeneric Dialog);
};

// Class UWorksCore.UWorksInterfaceCoreGameServer
// 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
class UUWorksInterfaceCoreGameServer : public UUWorksInterfaceCore
{
public:
	struct FScriptMulticastDelegate                    GSPolicyResponse;                                          // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    GSClientGroupStatus;                                       // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    GSValidateAuthTicketResponse;                              // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.UWorksInterfaceCoreGameServer");
		return ptr;
	}



	bool WasRestartRequested();
	UWorksCore_EUWorksUserHasLicenseForAppResult UserHasLicenseForApp(const struct FUWorksSteamID& SteamID, int AppID);
	void SetServerName(const struct FString& serverName);
	void SetRegion(const struct FString& region);
	void SetPasswordProtected(bool bPasswordProtected);
	void SetMaxPlayerCount(int PlayersMax);
	void SetMapName(const struct FString& MapName);
	void SetKeyValue(const struct FString& Key, const struct FString& Value);
	void SetHeartbeatInterval(int HeartbeatInterval);
	void SetGameTags(const struct FString& GameTags);
	void SetGameData(const struct FString& GameData);
	void SetBotPlayerCount(int BotPlayers);
	bool RequestUserGroupStatus(const struct FUWorksSteamID& SteamIDUser, const struct FUWorksSteamID& SteamIDGroup);
	struct FUWorksSteamID GetSteamID();
	class UUWorksInterfaceCoreGameServer* STATIC_GetGameServer();
	struct FUWorksTicketHandle GetAuthSessionTicket(TArray<unsigned char>* Ticket);
	void ForceHeartbeat();
	void EndAuthSession(const struct FUWorksSteamID& SteamID);
	void EnableHeartbeats(bool bActive);
	void ComputeNewPlayerCompatibilityMinimal(const struct FScriptDelegate& Completed, const struct FUWorksSteamID& SteamIDNewPlayer);
	class UUWorksRequestCoreComputeNewPlayerCompatibility* ComputeNewPlayerCompatibility();
	void ClearAllKeyValues();
	void CancelAuthTicket(const struct FUWorksTicketHandle& TicketHandle);
	bool BSecure();
	bool BLoggedOn();
	UWorksCore_EUWorksBeginAuthSessionResult BeginAuthSession(TArray<unsigned char> Ticket, const struct FUWorksSteamID& SteamID);
	void AssociateWithClanMinimal(const struct FScriptDelegate& Completed, const struct FUWorksSteamID& SteamIDClan);
	class UUWorksRequestCoreAssociateWithClan* AssociateWithClan();
};

// Class UWorksCore.UWorksInterfaceCoreGameServerStats
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UUWorksInterfaceCoreGameServerStats : public UUWorksInterfaceCore
{
public:
	struct FScriptMulticastDelegate                    GSStatsUnloaded;                                           // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.UWorksInterfaceCoreGameServerStats");
		return ptr;
	}



	bool UpdateUserAvgRateStat(const struct FUWorksSteamID& SteamIDUser, const struct FString& Name, float CountThisSession, float SessionLength);
	void StoreUserStatsMinimal(const struct FScriptDelegate& Completed, const struct FUWorksSteamID& SteamIDUser);
	class UUWorksRequestCoreStoreUserStats* StoreUserStats();
	bool SetUserStatFromInteger(const struct FUWorksSteamID& SteamIDUser, const struct FString& Name, int Data);
	bool SetUserStatFromFloat(const struct FUWorksSteamID& SteamIDUser, const struct FString& Name, float Data);
	bool SetUserAchievement(const struct FUWorksSteamID& SteamIDUser, const struct FString& Name);
	void RequestUserStatsMinimal(const struct FScriptDelegate& Completed, const struct FUWorksSteamID& SteamIDUser);
	class UUWorksRequestCoreRequestUserStatsGS* RequestUserStats();
	bool GetUserStatAsInteger(const struct FUWorksSteamID& SteamIDUser, const struct FString& Name, int* Data);
	bool GetUserStatAsFloat(const struct FUWorksSteamID& SteamIDUser, const struct FString& Name, float* Data);
	bool GetUserAchievement(const struct FUWorksSteamID& SteamIDUser, const struct FString& Name, bool* bAchieved);
	class UUWorksInterfaceCoreGameServerStats* STATIC_GetGameServerStats();
	bool ClearUserAchievement(const struct FUWorksSteamID& SteamIDUser, const struct FString& Name);
};

// Class UWorksCore.UWorksInterfaceCoreInventory
// 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
class UUWorksInterfaceCoreInventory : public UUWorksInterfaceCore
{
public:
	struct FScriptMulticastDelegate                    SteamInventoryResultReady;                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    SteamInventoryFullUpdate;                                  // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    SteamInventoryDefinitionUpdate;                            // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.UWorksInterfaceCoreInventory");
		return ptr;
	}



	bool TriggerItemDrop(struct FUWorksSteamInventoryResult* Handle, const struct FUWorksSteamItemDef& ItemDefinition);
	bool TransferItemQuantity(struct FUWorksSteamInventoryResult* Handle, const struct FUWorksSteamItemInstanceID& ItemSourceInstanceID, int ItemSourceQuantity, const struct FUWorksSteamItemInstanceID& ItemDestinationInstanceID);
	bool TradeItems(struct FUWorksSteamInventoryResult* Handle, const struct FUWorksSteamID& SteamIDTradePartner, TArray<struct FUWorksSteamItemInstanceID> ItemsGiven, TArray<int> ItemsGivenQuantities, TArray<struct FUWorksSteamItemInstanceID> ItemsReceived, TArray<int> ItemsReceivedQuantities);
	bool SerializeResult(const struct FUWorksSteamInventoryResult& Handle, TArray<unsigned char>* Buffer);
	void RequestEligiblePromoItemDefinitionsIDsMinimal(const struct FScriptDelegate& Completed, const struct FUWorksSteamID& SteamID);
	class UUWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs* RequestEligiblePromoItemDefinitionsIDs();
	bool LoadItemDefinitions();
	bool GrantPromoItems(struct FUWorksSteamInventoryResult* Handle);
	int GetResultTimestamp(const struct FUWorksSteamInventoryResult& Handle);
	UWorksCore_EUWorksResult GetResultStatus(const struct FUWorksSteamInventoryResult& Handle);
	bool GetResultItems(const struct FUWorksSteamInventoryResult& Handle, TArray<struct FUWorksSteamItemDetails>* items);
	bool GetItemsByID(struct FUWorksSteamInventoryResult* Handle, TArray<struct FUWorksSteamItemInstanceID> InstanceIDs);
	bool GetItemDefinitionPropertyValue(const struct FUWorksSteamItemDef& ItemDefinition, const struct FString& PropertyName, struct FString* PropertyValue);
	bool GetItemDefinitionPropertiesNames(const struct FUWorksSteamItemDef& ItemDefinition, TArray<struct FString>* PropertiesNames);
	bool GetItemDefinitionIDs(TArray<struct FUWorksSteamItemDef>* ItemDefinitions);
	class UUWorksInterfaceCoreInventory* STATIC_GetInventory();
	bool GetEligiblePromoItemDefinitionIDs(const struct FUWorksSteamID& SteamID, TArray<struct FUWorksSteamItemDef>* ItemDefinitions);
	bool GetAllItems(struct FUWorksSteamInventoryResult* Handle);
	bool GenerateItems(struct FUWorksSteamInventoryResult* Handle, TArray<struct FUWorksSteamItemDef> ItemDefinitions, TArray<int> ItemQuantities);
	bool ExchangeItems(struct FUWorksSteamInventoryResult* Handle, TArray<struct FUWorksSteamItemDef> ItemsGenerated, TArray<int> ItemsGeneratedQuantities, TArray<struct FUWorksSteamItemInstanceID> ItemsDestroyed, TArray<int> ItemsDestroyedQuantities);
	void DestroyResult(const struct FUWorksSteamInventoryResult& Handle);
	bool DeserializeResult(struct FUWorksSteamInventoryResult* Handle, TArray<unsigned char> Buffer, bool bReservedMustBeFalse);
	bool ConsumeItem(struct FUWorksSteamInventoryResult* Handle, const struct FUWorksSteamItemInstanceID& ItemInstanceID, int ItemQuantity);
	bool CheckResultSteamID(const struct FUWorksSteamInventoryResult& Handle, const struct FUWorksSteamID& SteamID);
	bool AddPromoItems(struct FUWorksSteamInventoryResult* Handle, TArray<struct FUWorksSteamItemDef> ItemDefinitions);
	bool AddPromoItem(struct FUWorksSteamInventoryResult* Handle, const struct FUWorksSteamItemDef& ItemDefinition);
};

// Class UWorksCore.UWorksInterfaceCoreMatchmaking
// 0x0090 (FullSize[0x00B8] - InheritedSize[0x0028])
class UUWorksInterfaceCoreMatchmaking : public UUWorksInterfaceCore
{
public:
	struct FScriptMulticastDelegate                    FavoritesListChanged;                                      // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    LobbyInvite;                                               // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    LobbyDataUpdate;                                           // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    LobbyEnter;                                                // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    LobbyChatUpdate;                                           // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    LobbyChatMsg;                                              // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    LobbyGameCreated;                                          // 0x0088(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    LobbyKicked;                                               // 0x0098(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    FavoritesListAccountsUpdated;                              // 0x00A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.UWorksInterfaceCoreMatchmaking");
		return ptr;
	}



	bool SetLobbyType(const struct FUWorksSteamID& SteamIDLobby, UWorksCore_EUWorksLobbyType LobbyType);
	bool SetLobbyOwner(const struct FUWorksSteamID& SteamIDLobby, const struct FUWorksSteamID& SteamIDNewOwner);
	bool SetLobbyMemberLimit(const struct FUWorksSteamID& SteamIDLobby, int MaxMembers);
	void SetLobbyMemberData(const struct FUWorksSteamID& SteamIDLobby, const struct FString& Key, const struct FString& Value);
	bool SetLobbyJoinable(const struct FUWorksSteamID& SteamIDLobby, bool bLobbyJoinable);
	void SetLobbyGameServer(const struct FUWorksSteamID& SteamIDLobby, const struct FString& GameServerIP, int GameServerPort, const struct FUWorksSteamID& SteamIDGameServer);
	bool SetLobbyData(const struct FUWorksSteamID& SteamIDLobby, const struct FString& Key, const struct FString& Value);
	bool SetLinkedLobby(const struct FUWorksSteamID& SteamIDLobby, const struct FUWorksSteamID& SteamIDLobbyDependent);
	bool SendLobbyChatMsg(const struct FUWorksSteamID& SteamIDLobby, const struct FString& Message);
	void RequestLobbyListMinimal(const struct FScriptDelegate& Completed);
	class UUWorksRequestCoreRequestLobbyList* RequestLobbyList();
	bool RequestLobbyData(const struct FUWorksSteamID& SteamIDLobby);
	bool RemoveFavoriteGame(int AppID, const struct FString& IP, int ConnectionPort, int QueryPort, TArray<UWorksCore_EUWorksFavoriteFlags> Flags);
	void LeaveLobby(const struct FUWorksSteamID& SteamIDLobby);
	void JoinLobbyMinimal(const struct FScriptDelegate& Completed, const struct FUWorksSteamID& SteamIDLobby);
	class UUWorksRequestCoreJoinLobby* JoinLobby();
	bool InviteUserToLobby(const struct FUWorksSteamID& SteamIDLobby, const struct FUWorksSteamID& SteamIDInvitee);
	int GetNumLobbyMembers(const struct FUWorksSteamID& SteamIDLobby);
	class UUWorksInterfaceCoreMatchmaking* STATIC_GetMatchmaking();
	struct FUWorksSteamID GetLobbyOwner(const struct FUWorksSteamID& SteamIDLobby);
	int GetLobbyMemberLimit(const struct FUWorksSteamID& SteamIDLobby);
	struct FString GetLobbyMemberData(const struct FUWorksSteamID& SteamIDLobby, const struct FUWorksSteamID& SteamIDUser, const struct FString& Key);
	struct FUWorksSteamID GetLobbyMemberByIndex(const struct FUWorksSteamID& SteamIDLobby, int Member);
	bool GetLobbyGameServer(const struct FUWorksSteamID& SteamIDLobby, struct FString* GameServerIP, int* GameServerPort, struct FUWorksSteamID* SteamIDGameServer);
	int GetLobbyDataCount(const struct FUWorksSteamID& SteamIDLobby);
	bool GetLobbyDataByIndex(const struct FUWorksSteamID& SteamIDLobby, int LobbyData, struct FString* Key, int KeyMaxLength, struct FString* Value, int ValueMaxLength);
	struct FString GetLobbyData(const struct FUWorksSteamID& SteamIDLobby, const struct FString& Key);
	int GetLobbyChatEntry(const struct FUWorksSteamID& SteamIDLobby, int MessageID, struct FUWorksSteamID* SteamIDUser, struct FString* Message, int MessageMaxLength, UWorksCore_EUWorksChatEntryType* ChatEntryType);
	struct FUWorksSteamID GetLobbyByIndex(int Lobby);
	int GetFavoriteGameCount();
	bool GetFavoriteGame(int Game, int* AppID, struct FString* IP, int* ConnectionPort, int* QueryPort, TArray<UWorksCore_EUWorksFavoriteFlags>* Flags, int* TimeLastPlayedOnServer);
	bool DeleteLobbyData(const struct FUWorksSteamID& SteamIDLobby, const struct FString& Key);
	void CreateLobbyMinimal(const struct FScriptDelegate& Completed, UWorksCore_EUWorksLobbyType LobbyType, int MaxMembers);
	class UUWorksRequestCoreCreateLobby* CreateLobby();
	void AddRequestLobbyListStringFilter(const struct FString& KeyToMatch, const struct FString& ValueToMatch, UWorksCore_EUWorksLobbyComparison ComparisonType);
	void AddRequestLobbyListResultCountFilter(int maxResults);
	void AddRequestLobbyListNumericalFilter(const struct FString& KeyToMatch, int ValueToMatch, UWorksCore_EUWorksLobbyComparison ComparisonType);
	void AddRequestLobbyListNearValueFilter(const struct FString& KeyToMatch, int ValueToBeCloseTo);
	void AddRequestLobbyListFilterSlotsAvailable(int SlotsAvailable);
	void AddRequestLobbyListDistanceFilter(UWorksCore_EUWorksLobbyDistanceFilter LobbyDistanceFilter);
	void AddRequestLobbyListCompatibleMembersFilter(const struct FUWorksSteamID& SteamIDLobby);
	int AddFavoriteGame(int AppID, const struct FString& IP, int ConnectionPort, int QueryPort, TArray<UWorksCore_EUWorksFavoriteFlags> Flags, int TimeLastPlayedOnServer);
};

// Class UWorksCore.UWorksInterfaceCoreMatchmakingServers
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UUWorksInterfaceCoreMatchmakingServers : public UUWorksInterfaceCore
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.UWorksInterfaceCoreMatchmakingServers");
		return ptr;
	}



	void ServerListMinimal(const struct FScriptDelegate& Completed, const struct FScriptDelegate& Updated, int AppID, UWorksCore_EUWorksServerQueryType QueryType);
	class UUWorksRequestCoreServerList* ServerList();
	void RulesMinimal(const struct FScriptDelegate& Completed, const struct FScriptDelegate& Updated, const struct FString& IP, int Port);
	class UUWorksRequestCoreRules* Rules();
	void PlayersMinimal(const struct FScriptDelegate& Completed, const struct FScriptDelegate& Updated, const struct FString& IP, int Port);
	class UUWorksRequestCorePlayers* Players();
	void PingMinimal(const struct FScriptDelegate& Completed, const struct FString& IP, int Port);
	class UUWorksRequestCorePing* Ping();
	class UUWorksInterfaceCoreMatchmakingServers* STATIC_GetMatchmakingServers();
};

// Class UWorksCore.UWorksInterfaceCoreMusic
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
class UUWorksInterfaceCoreMusic : public UUWorksInterfaceCore
{
public:
	struct FScriptMulticastDelegate                    PlaybackStatusHasChanged;                                  // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    VolumeHasChanged;                                          // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.UWorksInterfaceCoreMusic");
		return ptr;
	}



	void SetVolume(float Volume);
	void PlayPrevious();
	void PlayNext();
	void Play();
	void Pause();
	float GetVolume();
	UWorksCore_EUWorksAudioPlaybackStatus GetPlaybackStatus();
	class UUWorksInterfaceCoreMusic* STATIC_GetMusic();
	bool BIsPlaying();
	bool BIsEnabled();
};

// Class UWorksCore.UWorksInterfaceCoreNetworking
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
class UUWorksInterfaceCoreNetworking : public UUWorksInterfaceCore
{
public:
	struct FScriptMulticastDelegate                    P2PSessionRequest;                                         // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    P2PSessionConnectFail;                                     // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.UWorksInterfaceCoreNetworking");
		return ptr;
	}



	bool SendP2PPacket(const struct FUWorksSteamID& SteamIDRemote, TArray<unsigned char> Data, UWorksCore_EUWorksP2PSend P2PSendType, int Channel);
	bool SendP2PMessage(const struct FUWorksSteamID& SteamIDRemote, const struct FString& Data, UWorksCore_EUWorksP2PSend P2PSendType, int Channel);
	bool ReadP2PPacket(TArray<unsigned char>* Data, int DataMax, struct FUWorksSteamID* SteamIDRemote, int Channel);
	bool ReadP2PMessage(struct FString* Data, int DataMax, struct FUWorksSteamID* SteamIDRemote, int Channel);
	bool IsP2PPacketAvailable(int* DataSize, int Channel);
	bool GetP2PSessionState(const struct FUWorksSteamID& SteamIDRemote, struct FUWorksP2PSessionState* ConnectionState);
	class UUWorksInterfaceCoreNetworking* STATIC_GetNetworking();
	bool CloseP2PSessionWithUser(const struct FUWorksSteamID& SteamIDRemote);
	bool CloseP2PChannelWithUser(const struct FUWorksSteamID& SteamIDRemote, int Channel);
	bool AllowP2PPacketRelay(bool bAllow);
	bool AcceptP2PSessionWithUser(const struct FUWorksSteamID& SteamIDRemote);
};

// Class UWorksCore.UWorksInterfaceCoreRemoteStorage
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UUWorksInterfaceCoreRemoteStorage : public UUWorksInterfaceCore
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.UWorksInterfaceCoreRemoteStorage");
		return ptr;
	}



	bool SetSyncPlatforms(const struct FString& File, UWorksCore_EUWorksRemoteStoragePlatform RemoteStoragePlatform);
	void SetCloudEnabledForApp(bool bEnabled);
	bool IsCloudEnabledForApp();
	bool IsCloudEnabledForAccount();
	UWorksCore_EUWorksRemoteStoragePlatform GetSyncPlatforms(const struct FString& File);
	class UUWorksInterfaceCoreRemoteStorage* STATIC_GetRemoteStorage();
	bool GetQuota(struct FString* TotalBytes, struct FString* AvailableBytes);
	int GetFileTimestamp(const struct FString& File);
	int GetFileSize(const struct FString& File);
	struct FString GetFileNameAndSize(int File, int* FileSizeInBytes);
	int GetFileCount();
	bool FileWriteStreamWriteChunk(const struct FUWorksUGCFileWriteStreamHandle& Handle, TArray<unsigned char> Buffer);
	struct FUWorksUGCFileWriteStreamHandle FileWriteStreamOpen(const struct FString& File);
	bool FileWriteStreamClose(const struct FUWorksUGCFileWriteStreamHandle& Handle);
	bool FileWriteStreamCancel(const struct FUWorksUGCFileWriteStreamHandle& Handle);
	void FileWriteAsyncMinimal(const struct FScriptDelegate& Completed, const struct FString& File, TArray<unsigned char> Buffer);
	class UUWorksRequestCoreFileWriteAsync* FileWriteAsync();
	bool FileWrite(const struct FString& File, TArray<unsigned char> Buffer);
	void FileReadAsyncMinimal(const struct FScriptDelegate& Completed, const struct FString& File, int Offset, int BytesToRead);
	class UUWorksRequestCoreFileReadAsync* FileReadAsync();
	int FileRead(const struct FString& File, TArray<unsigned char>* Buffer, int BufferSize);
	bool FilePersisted(const struct FString& File);
	bool FileForget(const struct FString& File);
	bool FileExists(const struct FString& File);
	bool FileDelete(const struct FString& File);
};

// Class UWorksCore.UWorksInterfaceCoreScreenshots
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
class UUWorksInterfaceCoreScreenshots : public UUWorksInterfaceCore
{
public:
	struct FScriptMulticastDelegate                    ScreenshotReady;                                           // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    ScreenshotRequested;                                       // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.UWorksInterfaceCoreScreenshots");
		return ptr;
	}



	struct FUWorksScreenshotHandle WriteScreenshot(class UTexture2D* Image);
	void TriggerScreenshot();
	bool TagUser(const struct FUWorksScreenshotHandle& Screenshot, const struct FUWorksSteamID& SteamID);
	bool TagPublishedFile(const struct FUWorksScreenshotHandle& Screenshot, const struct FUWorksPublishedFileID& PublishedFileID);
	bool SetLocation(const struct FUWorksScreenshotHandle& Screenshot, const struct FString& Location);
	bool IsScreenshotsHooked();
	void HookScreenshots(bool bHook);
	class UUWorksInterfaceCoreScreenshots* STATIC_GetScreenshots();
	struct FUWorksScreenshotHandle AddVRScreenshotToLibrary(UWorksCore_EUWorksVRScreenshotType Type, const struct FString& Filename, const struct FString& VRFileName);
	struct FUWorksScreenshotHandle AddScreenshotToLibrary(const struct FString& FileMame, const struct FString& ThumbnailFileName, int Width, int Height);
};

// Class UWorksCore.UWorksInterfaceCoreUGC
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
class UUWorksInterfaceCoreUGC : public UUWorksInterfaceCore
{
public:
	struct FScriptMulticastDelegate                    ItemInstalled;                                             // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    DownloadItemResult;                                        // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.UWorksInterfaceCoreUGC");
		return ptr;
	}



	bool UpdateItemPreviewVideo(const struct FUWorksUGCUpdateHandle& Handle, int Index, const struct FString& PreviewVideo);
	bool UpdateItemPreviewFile(const struct FUWorksUGCUpdateHandle& Handle, int Index, const struct FString& PreviewFile);
	void UnsubscribeItemMinimal(const struct FScriptDelegate& Completed, const struct FUWorksPublishedFileID& PublishedFileID);
	class UUWorksRequestCoreUnsubscribeItem* UnsubscribeItem();
	void SuspendDownloads(bool bSuspend);
	void SubscribeItemMinimal(const struct FScriptDelegate& Completed, const struct FUWorksPublishedFileID& PublishedFileID);
	class UUWorksRequestCoreSubscribeItem* SubscribeItem();
	void SubmitItemUpdateMinimal(const struct FScriptDelegate& Completed, const struct FUWorksUGCUpdateHandle& UGCUpdateHandle, const struct FString& ChangeNote);
	class UUWorksRequestCoreSubmitItemUpdate* SubmitItemUpdate();
	void StopPlaytimeTrackingMinimal(const struct FScriptDelegate& Completed, TArray<struct FUWorksPublishedFileID> PublishedFileIDs);
	void StopPlaytimeTrackingForAllItemsMinimal(const struct FScriptDelegate& Completed);
	class UUWorksRequestCoreStopPlaytimeTrackingForAllItems* StopPlaytimeTrackingForAllItems();
	class UUWorksRequestCoreStopPlaytimeTracking* StopPlaytimeTracking();
	void StartPlaytimeTrackingMinimal(const struct FScriptDelegate& Completed, TArray<struct FUWorksPublishedFileID> PublishedFileID);
	class UUWorksRequestCoreStartPlaytimeTracking* StartPlaytimeTracking();
	struct FUWorksUGCUpdateHandle StartItemUpdate(int ConsumerAppID, const struct FUWorksPublishedFileID& PublishedFileID);
	void SetUserItemVoteMinimal(const struct FScriptDelegate& Completed, const struct FUWorksPublishedFileID& PublishedFileID, bool bVoteUp);
	class UUWorksRequestCoreSetUserItemVote* SetUserItemVote();
	bool SetSearchText(const struct FUWorksUGCQueryHandle& Handle, const struct FString& SearchText);
	bool SetReturnTotalOnly(const struct FUWorksUGCQueryHandle& Handle, bool bReturnTotalOnly);
	bool SetReturnOnlyIDs(const struct FUWorksUGCQueryHandle& Handle, bool bReturnOnlyIDs);
	bool SetReturnMetadata(const struct FUWorksUGCQueryHandle& Handle, bool bReturnMetadata);
	bool SetReturnLongDescription(const struct FUWorksUGCQueryHandle& Handle, bool bReturnLongDescription);
	bool SetReturnKeyValueTags(const struct FUWorksUGCQueryHandle& Handle, bool bReturnKeyValueTags);
	bool SetReturnChildren(const struct FUWorksUGCQueryHandle& Handle, bool bReturnChildren);
	bool SetReturnAdditionalPreviews(const struct FUWorksUGCQueryHandle& Handle, bool bReturnAdditionalPreviews);
	bool SetRankedByTrendDays(const struct FUWorksUGCQueryHandle& Handle, int Days);
	bool SetMatchAnyTag(const struct FUWorksUGCQueryHandle& Handle, bool bMatchAnyTag);
	bool SetLanguage(const struct FUWorksUGCQueryHandle& Handle, const struct FString& Language);
	bool SetItemVisibility(const struct FUWorksUGCUpdateHandle& Handle, UWorksCore_EUWorksRemoteStoragePublishedFileVisibility Visibility);
	bool SetItemUpdateLanguage(const struct FUWorksUGCUpdateHandle& Handle, const struct FString& Language);
	bool SetItemTitle(const struct FUWorksUGCUpdateHandle& Handle, const struct FString& Title);
	bool SetItemTags(const struct FUWorksUGCUpdateHandle& Handle, TArray<struct FString> Tags);
	bool SetItemPreview(const struct FUWorksUGCUpdateHandle& Handle, const struct FString& PreviewFile);
	bool SetItemMetadata(const struct FUWorksUGCUpdateHandle& Handle, const struct FString& MetaData);
	bool SetItemDescription(const struct FUWorksUGCUpdateHandle& Handle, const struct FString& Description);
	bool SetItemContent(const struct FUWorksUGCUpdateHandle& Handle, const struct FString& ContentFolder);
	bool SetCloudFileNameFilter(const struct FUWorksUGCQueryHandle& Handle, const struct FString& MatchCloudFileName);
	bool SetAllowCachedResponse(const struct FUWorksUGCQueryHandle& Handle, int MaxAgeSeconds);
	void SendQueryUGCRequestMinimal(const struct FScriptDelegate& Completed, const struct FUWorksUGCQueryHandle& UGCQueryHandle);
	class UUWorksRequestCoreSendQueryUGCRequest* SendQueryUGCRequest();
	bool RemoveItemPreview(const struct FUWorksUGCUpdateHandle& Handle, int Index);
	bool RemoveItemKeyValueTags(const struct FUWorksUGCUpdateHandle& Handle, const struct FString& Key);
	void RemoveItemFromFavoritesMinimal(const struct FScriptDelegate& Completed, int AppID, const struct FUWorksPublishedFileID& PublishedFileID);
	class UUWorksRequestCoreRemoveItemFromFavorites* RemoveItemFromFavorites();
	bool ReleaseQueryUGCRequest(const struct FUWorksUGCQueryHandle& Handle);
	void GetUserItemVoteMinimal(const struct FScriptDelegate& Completed, const struct FUWorksPublishedFileID& PublishedFileID);
	class UUWorksRequestCoreGetUserItemVote* GetUserItemVote();
	class UUWorksInterfaceCoreUGC* STATIC_GetUGC();
	int GetSubscribedItems(TArray<struct FUWorksPublishedFileID>* PublishedFileIDs, int MaxEntries);
	bool GetQueryUGCStatistic(const struct FUWorksUGCQueryHandle& Handle, int Index, UWorksCore_EUWorksItemStatistic StatType, struct FString* StatValue);
	bool GetQueryUGCResult(const struct FUWorksUGCQueryHandle& Handle, int Index, struct FUWorksSteamUGCDetails* Details);
	bool GetQueryUGCPreviewURL(const struct FUWorksUGCQueryHandle& Handle, int Index, struct FString* URL, int URLMaxLength);
	int GetQueryUGCNumKeyValueTags(const struct FUWorksUGCQueryHandle& Handle, int Index);
	int GetQueryUGCNumAdditionalPreviews(const struct FUWorksUGCQueryHandle& Handle, int Index);
	bool GetQueryUGCMetadata(const struct FUWorksUGCQueryHandle& Handle, int Index, struct FString* MetaData, int MetadataMaxLength);
	bool GetQueryUGCKeyValueTag(const struct FUWorksUGCQueryHandle& Handle, int Index, int KeyValueTagIndex, struct FString* Key, int KeyMaxLength, struct FString* Value, int ValueMaxLength);
	bool GetQueryUGCChildren(const struct FUWorksUGCQueryHandle& Handle, int Index, TArray<struct FUWorksPublishedFileID>* PublishedFileIDs, int MaxEntries);
	bool GetQueryUGCAdditionalPreview(const struct FUWorksUGCQueryHandle& Handle, int Index, int PreviewIndex, struct FString* URLOrVideoID, int URLOrVideoIDMaxLength, struct FString* OriginalFileName, int OriginalFileNameMaxLength, UWorksCore_EUWorksItemPreviewType* PreviewType);
	int GetNumSubscribedItems();
	UWorksCore_EUWorksItemUpdateStatus GetItemUpdateProgress(const struct FUWorksUGCUpdateHandle& Handle, struct FString* BytesProcessed, struct FString* BytesTotal);
	int GetItemState(const struct FUWorksPublishedFileID& PublishedFileID);
	bool GetItemInstallInfo(const struct FUWorksPublishedFileID& PublishedFileID, struct FString* sizeOnDisk, struct FString* Path, int PathMaxLength, int* Timestamp);
	bool GetItemDownloadInfo(const struct FUWorksPublishedFileID& PublishedFileID, struct FString* BytesDownloaded, struct FString* BytesTotal);
	bool DownloadItem(const struct FUWorksPublishedFileID& PublishedFileID, bool bHighPriority);
	struct FUWorksUGCQueryHandle CreateQueryUserUGCRequest(const struct FUWorksSteamID& SteamID, UWorksCore_EUWorksUserUGCList ListType, UWorksCore_EUWorksUGCMatchingUGCType MatchingUGCType, UWorksCore_EUWorksUserUGCListSortOrder SortOrder, int CreatorAppID, int ConsumerAppID, int Page);
	struct FUWorksUGCQueryHandle CreateQueryUGCDetailsRequest(TArray<struct FUWorksPublishedFileID> PublishedFileIDs, int NumPublishedFileIDs);
	struct FUWorksUGCQueryHandle CreateQueryAllUGCRequest(UWorksCore_EUWorksUGCQuery QueryType, UWorksCore_EUWorksUGCMatchingUGCType MatchingUGCTypeFileType, int CreatorAppID, int ConsumerAppID, int Page);
	void CreateItemMinimal(const struct FScriptDelegate& Completed, int ConsumerAppID, UWorksCore_EUWorksWorkshopFileType FileType);
	class UUWorksRequestCoreCreateItem* CreateItem();
	bool BInitWorkshopForGameServer(int WorkshopDepotID, const struct FString& Folder);
	bool AddRequiredTag(const struct FUWorksUGCQueryHandle& Handle, const struct FString& TagName);
	bool AddRequiredKeyValueTag(const struct FUWorksUGCQueryHandle& Handle, const struct FString& Key, const struct FString& Value);
	void AddItemToFavoritesMinimal(const struct FScriptDelegate& Completed, int AppID, const struct FUWorksPublishedFileID& PublishedFileID);
	class UUWorksRequestCoreAddItemToFavorites* AddItemToFavorites();
	bool AddItemPreviewVideo(const struct FUWorksUGCUpdateHandle& Handle, const struct FString& VideoID);
	bool AddItemPreviewFile(const struct FUWorksUGCUpdateHandle& Handle, const struct FString& PreviewFile, UWorksCore_EUWorksItemPreviewType Type);
	bool AddItemKeyValueTag(const struct FUWorksUGCUpdateHandle& Handle, const struct FString& Key, const struct FString& Value);
	bool AddExcludedTag(const struct FUWorksUGCQueryHandle& Handle, const struct FString& TagName);
};

// Class UWorksCore.UWorksInterfaceCoreUser
// 0x00B0 (FullSize[0x00D8] - InheritedSize[0x0028])
class UUWorksInterfaceCoreUser : public UUWorksInterfaceCore
{
public:
	unsigned char                                      UnknownData_MNPJ[0x10];                                    // 0x0028(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    SteamServersConnected;                                     // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    SteamServerConnectFailure;                                 // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    SteamServersDisconnected;                                  // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    ClientGameServerDeny;                                      // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    IPCFailure;                                                // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    LicensesUpdated;                                           // 0x0088(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    ValidateAuthTicketResponse;                                // 0x0098(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    MicroTxnAuthorizationResponse;                             // 0x00A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    GetAuthSessionTicketResponse;                              // 0x00B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    GameWebCallback;                                           // 0x00C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.UWorksInterfaceCoreUser");
		return ptr;
	}



	UWorksCore_EUWorksUserHasLicenseForAppResult UserHasLicenseForApp(const struct FUWorksSteamID& SteamID, int AppID);
	void StopVoiceRecording();
	void StartVoiceRecording();
	void RequestStoreAuthURLMinimal(const struct FScriptDelegate& Completed, const struct FString& URL);
	class UUWorksRequestCoreRequestStoreAuthURL* RequestStoreAuthURL();
	void RequestEncryptedAppTicketMinimal(const struct FScriptDelegate& Completed, TArray<unsigned char> Buffer);
	class UUWorksRequestCoreRequestEncryptedAppTicket* RequestEncryptedAppTicket();
	class UAudioComponent* GetVoiceChannel(int Index);
	UWorksCore_EUWorksVoiceResult GetVoice(TArray<unsigned char>* Data);
	class UUWorksInterfaceCoreUser* STATIC_GetUser();
	struct FUWorksSteamID GetSteamID();
	int GetPlayerSteamLevel();
	struct FUWorksSteamUser GetHSteamUser();
	int GetGameBadgeLevel(int Series, bool bFoil);
	bool GetEncryptedAppTicket(TArray<unsigned char>* Ticket);
	struct FUWorksTicketHandle GetAuthSessionTicket(TArray<unsigned char>* Ticket);
	void EndAuthSession(const struct FUWorksSteamID& SteamID);
	UWorksCore_EUWorksVoiceResult DecompressVoice(TArray<unsigned char> CompressedBuffer, TArray<unsigned char>* UncompressedBuffer);
	void CancelAuthTicket(const struct FUWorksTicketHandle& TicketHandle);
	bool BLoggedOn();
	bool BIsTwoFactorEnabled();
	bool BIsPhoneVerified();
	bool BIsPhoneRequiringVerification();
	bool BIsPhoneIdentifying();
	bool BIsBehindNAT();
	UWorksCore_EUWorksBeginAuthSessionResult BeginAuthSession(TArray<unsigned char> Ticket, const struct FUWorksSteamID& SteamID);
	void AdvertiseGame(const struct FUWorksSteamID& SteamIDGameServer, const struct FString& ServerIP, int ServerPort);
	class UAudioComponent* AddBufferToVoiceChannel(TArray<unsigned char> Buffer, int Index);
};

// Class UWorksCore.UWorksInterfaceCoreUserStats
// 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
class UUWorksInterfaceCoreUserStats : public UUWorksInterfaceCore
{
public:
	struct FScriptMulticastDelegate                    UserStatsReceived;                                         // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    UserStatsStored;                                           // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    UserAchievementStored;                                     // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    UserStatsUnloaded;                                         // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    UserAchievementIconFetched;                                // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.UWorksInterfaceCoreUserStats");
		return ptr;
	}



	void UploadLeaderboardScoreMinimal(const struct FScriptDelegate& Completed, const struct FUWorksSteamLeaderboard& SteamLeaderboard, UWorksCore_EUWorksLeaderboardUploadScoreMethod LeaderboardUploadScoreMethod, int Score, TArray<int> ScoreDetails);
	class UUWorksRequestCoreUploadLeaderboardScore* UploadLeaderboardScore();
	bool UpdateAvgRateStat(const struct FString& Name, float CountThisSession, float SessionLength);
	bool StoreStats();
	bool SetStatAsInteger(const struct FString& Name, int Data);
	bool SetStatAsFloat(const struct FString& Name, float Data);
	bool SetAchievement(const struct FString& Name);
	bool ResetAllStats(bool bAchievementsToo);
	void RequestUserStatsMinimal(const struct FScriptDelegate& Completed, const struct FUWorksSteamID& SteamID);
	class UUWorksRequestCoreRequestUserStats* RequestUserStats();
	void RequestGlobalStatsMinimal(const struct FScriptDelegate& Completed, int HistoryDays);
	class UUWorksRequestCoreRequestGlobalStats* RequestGlobalStats();
	void RequestGlobalAchievementPercentagesMinimal(const struct FScriptDelegate& Completed);
	class UUWorksRequestCoreRequestGlobalAchievementPercentages* RequestGlobalAchievementPercentages();
	bool RequestCurrentStats();
	bool IndicateAchievementProgress(const struct FString& Name, int CurrentProgress, int MaxProgress);
	class UUWorksInterfaceCoreUserStats* STATIC_GetUserStats();
	bool GetUserStatInteger(const struct FUWorksSteamID& SteamIDUser, const struct FString& Name, int* Data);
	bool GetUserStatFloat(const struct FUWorksSteamID& SteamIDUser, const struct FString& Name, float* Data);
	bool GetUserAchievementAndUnlockTime(const struct FUWorksSteamID& SteamIDUser, const struct FString& Name, bool* bAchieved, int* UnlockTime);
	bool GetUserAchievement(const struct FUWorksSteamID& SteamIDUser, const struct FString& Name, bool* bAchieved);
	bool GetStatAsInteger(const struct FString& Name, int* Data);
	bool GetStatAsFloat(const struct FString& Name, float* Data);
	void GetNumberOfCurrentPlayersMinimal(const struct FScriptDelegate& Completed);
	class UUWorksRequestCoreGetNumberOfCurrentPlayers* GetNumberOfCurrentPlayers();
	int GetNumAchievements();
	int GetNextMostAchievedAchievementInfo(int IteratorPrevious, struct FString* Name, int NameBufferLength, float* Percent, bool* bAchieved);
	int GetMostAchievedAchievementInfo(struct FString* Name, int NameBufferLength, float* Percent, bool* bAchieved);
	UWorksCore_EUWorksLeaderboardSortMethod GetLeaderboardSortMethod(const struct FUWorksSteamLeaderboard& SteamLeaderboard);
	struct FString GetLeaderboardName(const struct FUWorksSteamLeaderboard& SteamLeaderboard);
	int GetLeaderboardEntryCount(const struct FUWorksSteamLeaderboard& SteamLeaderboard);
	UWorksCore_EUWorksLeaderboardDisplayType GetLeaderboardDisplayType(const struct FUWorksSteamLeaderboard& SteamLeaderboard);
	int GetGlobalStatHistoryFromIntegers(const struct FString& StatName, TArray<struct FString>* Data, int HistoryDays);
	int GetGlobalStatHistoryFromFloats(const struct FString& StatName, TArray<struct FString>* Data, int HistoryDays);
	bool GetGlobalStatFromInteger(const struct FString& StatName, struct FString* Data);
	bool GetGlobalStatFromFloat(const struct FString& StatName, struct FString* Data);
	bool GetDownloadedLeaderboardEntry(const struct FUWorksSteamLeaderboardEntries& SteamLeaderboardEntries, int Index, struct FUWorksLeaderboardEntry* LeaderboardEntry, TArray<int>* Details, int DetailsMax);
	struct FString GetAchievementName(int Achievement);
	class UTexture2D* GetAchievementIcon(const struct FString& Name);
	struct FString GetAchievementDisplayAttribute(const struct FString& Name, const struct FString& Key);
	bool GetAchievementAndUnlockTime(const struct FString& Name, bool* bAchieved, int* UnlockTime);
	bool GetAchievementAchievedPercent(const struct FString& Name, float* Percent);
	bool GetAchievement(const struct FString& Name, bool* bAchieved);
	void FindOrCreateLeaderboardMinimal(const struct FScriptDelegate& Completed, const struct FString& LeaderboardName, UWorksCore_EUWorksLeaderboardSortMethod LeaderboardSortMethod, UWorksCore_EUWorksLeaderboardDisplayType LeaderboardDisplayType);
	class UUWorksRequestCoreFindOrCreateLeaderboard* FindOrCreateLeaderboard();
	void FindLeaderboardMinimal(const struct FScriptDelegate& Completed, const struct FString& LeaderboardName);
	class UUWorksRequestCoreFindLeaderboard* FindLeaderboard();
	void DownloadLeaderboardEntriesMinimal(const struct FScriptDelegate& Completed, const struct FUWorksSteamLeaderboard& SteamLeaderboard, UWorksCore_EUWorksLeaderboardDataRequest LeaderboardDataRequest, int RangeStart, int RangeEnd);
	void DownloadLeaderboardEntriesForUsersMinimal(const struct FScriptDelegate& Completed, const struct FUWorksSteamLeaderboard& SteamLeaderboard, TArray<struct FUWorksSteamID> users);
	class UUWorksRequestCoreDownloadLeaderboardEntriesForUsers* DownloadLeaderboardEntriesForUsers();
	class UUWorksRequestCoreDownloadLeaderboardEntries* DownloadLeaderboardEntries();
	bool ClearAchievement(const struct FString& Name);
	void AttachLeaderboardUGCMinimal(const struct FScriptDelegate& Completed, const struct FUWorksSteamLeaderboard& SteamLeaderboard, const struct FUWorksUGCHandle& UGCHandle);
	class UUWorksRequestCoreAttachLeaderboardUGC* AttachLeaderboardUGC();
};

// Class UWorksCore.UWorksInterfaceCoreUtils
// 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
class UUWorksInterfaceCoreUtils : public UUWorksInterfaceCore
{
public:
	struct FScriptMulticastDelegate                    IPCountry;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    LowBatteryPower;                                           // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    SteamShutdown;                                             // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    GamepadTextInputDismissed;                                 // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.UWorksInterfaceCoreUtils");
		return ptr;
	}



	void StartVRDashboard();
	bool ShowGamepadTextInput(UWorksCore_EUWorksGamepadTextInputMode InputMode, UWorksCore_EUWorksGamepadTextInputLineMode LineInputMode, const struct FString& Description, int CharMax, const struct FString& ExistingText);
	void SetOverlayNotificationPosition(UWorksCore_EUWorksNotificationPosition NotificationPosition);
	void SetOverlayNotificationInset(int HorizontalInset, int VerticalInset);
	bool IsSteamRunningInVR();
	bool IsSteamInBigPictureMode();
	bool IsOverlayEnabled();
	class UUWorksInterfaceCoreUtils* STATIC_GetUtils();
	struct FString GetSteamUILanguage();
	int GetServerRealTime();
	int GetSecondsSinceComputerActive();
	int GetSecondsSinceAppActive();
	struct FString GetIPCountry();
	int GetIPCCallCount();
	int GetEnteredGamepadTextLength();
	bool GetEnteredGamepadTextInput(struct FString* Text, int TextMaxLength);
	unsigned char GetCurrentBatteryPower();
	UWorksCore_EUWorksUniverse GetConnectedUniverse();
	int GetAppID();
	bool BOverlayNeedsPresent();
};

// Class UWorksCore.UWorksInterfaceCoreVideo
// 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
class UUWorksInterfaceCoreVideo : public UUWorksInterfaceCore
{
public:
	struct FScriptMulticastDelegate                    BroadcastUploadStart;                                      // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    BroadcastUploadStop;                                       // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    GetVideoURLResult;                                         // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.UWorksInterfaceCoreVideo");
		return ptr;
	}



	bool IsBroadcasting(int* NumViewers);
	void GetVideoURL(int VideoAppID);
	class UUWorksInterfaceCoreVideo* STATIC_GetVideo();
};

// Class UWorksCore.UWorksRequestCoreGetFileDetails
// 0x0058 (FullSize[0x0090] - InheritedSize[0x0038])
class UUWorksRequestCoreGetFileDetails : public UUWorksRequestCore
{
public:
	unsigned char                                      UnknownData_EK75[0x38];                                    // 0x0038(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x0070(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x0080(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.UWorksRequestCoreGetFileDetails");
		return ptr;
	}



	void SetInput(const struct FString& Filename);
	bool IsActive();
	void GetOutput(UWorksCore_EUWorksResult* Result, int* FileSize, struct FString* FileSHA, TArray<int>* FileFlags);
	void Deactivate();
	void Activate();
};

// Class UWorksCore.UWorksRequestCoreSetPersonaName
// 0x0038 (FullSize[0x0070] - InheritedSize[0x0038])
class UUWorksRequestCoreSetPersonaName : public UUWorksRequestCore
{
public:
	unsigned char                                      UnknownData_23XF[0x18];                                    // 0x0038(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x0050(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x0060(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.UWorksRequestCoreSetPersonaName");
		return ptr;
	}



	void SetInput(const struct FString& Name);
	bool IsActive();
	void GetOutput(bool* bSuccess, bool* bLocalSuccess, UWorksCore_EUWorksResult* Result);
	void Deactivate();
	void Activate();
};

// Class UWorksCore.UWorksRequestCoreDownloadClanActivityCounts
// 0x0038 (FullSize[0x0070] - InheritedSize[0x0038])
class UUWorksRequestCoreDownloadClanActivityCounts : public UUWorksRequestCore
{
public:
	unsigned char                                      UnknownData_Q1F4[0x18];                                    // 0x0038(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x0050(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x0060(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.UWorksRequestCoreDownloadClanActivityCounts");
		return ptr;
	}



	void SetInput(TArray<struct FUWorksSteamID> SteamIDClans);
	bool IsActive();
	void GetOutput(bool* bSuccess);
	void Deactivate();
	void Activate();
};

// Class UWorksCore.UWorksRequestCoreRequestClanOfficerList
// 0x0038 (FullSize[0x0070] - InheritedSize[0x0038])
class UUWorksRequestCoreRequestClanOfficerList : public UUWorksRequestCore
{
public:
	unsigned char                                      UnknownData_EKJ2[0x18];                                    // 0x0038(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x0050(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x0060(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.UWorksRequestCoreRequestClanOfficerList");
		return ptr;
	}



	void SetInput(const struct FUWorksSteamID& SteamID);
	bool IsActive();
	void GetOutput(struct FUWorksSteamID* SteamIDClan, int* Officers, bool* bSuccess);
	void Deactivate();
	void Activate();
};

// Class UWorksCore.UWorksRequestCoreJoinClanChatRoom
// 0x0038 (FullSize[0x0070] - InheritedSize[0x0038])
class UUWorksRequestCoreJoinClanChatRoom : public UUWorksRequestCore
{
public:
	unsigned char                                      UnknownData_A5BN[0x18];                                    // 0x0038(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x0050(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x0060(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.UWorksRequestCoreJoinClanChatRoom");
		return ptr;
	}



	void SetInput(const struct FUWorksSteamID& SteamIDClan);
	bool IsActive();
	void GetOutput(struct FUWorksSteamID* SteamIDClanChat, UWorksCore_EUWorksChatRoomEnterResponse* ChatRoomEnterResponse);
	void Deactivate();
	void Activate();
};

// Class UWorksCore.UWorksRequestCoreGetFollowerCount
// 0x0040 (FullSize[0x0078] - InheritedSize[0x0038])
class UUWorksRequestCoreGetFollowerCount : public UUWorksRequestCore
{
public:
	unsigned char                                      UnknownData_ICUE[0x20];                                    // 0x0038(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x0068(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.UWorksRequestCoreGetFollowerCount");
		return ptr;
	}



	void SetInput(const struct FUWorksSteamID& SteamID);
	bool IsActive();
	void GetOutput(UWorksCore_EUWorksResult* Result, struct FUWorksSteamID* SteamID, int* Count);
	void Deactivate();
	void Activate();
};

// Class UWorksCore.UWorksRequestCoreIsFollowing
// 0x0040 (FullSize[0x0078] - InheritedSize[0x0038])
class UUWorksRequestCoreIsFollowing : public UUWorksRequestCore
{
public:
	unsigned char                                      UnknownData_7CWM[0x20];                                    // 0x0038(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x0068(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.UWorksRequestCoreIsFollowing");
		return ptr;
	}



	void SetInput(const struct FUWorksSteamID& SteamID);
	bool IsActive();
	void GetOutput(UWorksCore_EUWorksResult* Result, struct FUWorksSteamID* SteamID, bool* bIsFollowing);
	void Deactivate();
	void Activate();
};

// Class UWorksCore.UWorksRequestCoreEnumerateFollowingList
// 0x0040 (FullSize[0x0078] - InheritedSize[0x0038])
class UUWorksRequestCoreEnumerateFollowingList : public UUWorksRequestCore
{
public:
	unsigned char                                      UnknownData_7RP0[0x20];                                    // 0x0038(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x0068(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.UWorksRequestCoreEnumerateFollowingList");
		return ptr;
	}



	void SetInput(int StartIndex);
	bool IsActive();
	void GetOutput(UWorksCore_EUWorksResult* Result, TArray<struct FUWorksSteamID>* SteamIDs, int* ResultsReturned, int* TotalResultCount);
	void Deactivate();
	void Activate();
};

// Class UWorksCore.UWorksRequestCoreAssociateWithClan
// 0x0030 (FullSize[0x0068] - InheritedSize[0x0038])
class UUWorksRequestCoreAssociateWithClan : public UUWorksRequestCore
{
public:
	unsigned char                                      UnknownData_CWG2[0x10];                                    // 0x0038(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x0058(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.UWorksRequestCoreAssociateWithClan");
		return ptr;
	}



	void SetInput(const struct FUWorksSteamID& SteamIDClan);
	bool IsActive();
	void GetOutput(UWorksCore_EUWorksResult* Result);
	void Deactivate();
	void Activate();
};

// Class UWorksCore.UWorksRequestCoreComputeNewPlayerCompatibility
// 0x0040 (FullSize[0x0078] - InheritedSize[0x0038])
class UUWorksRequestCoreComputeNewPlayerCompatibility : public UUWorksRequestCore
{
public:
	unsigned char                                      UnknownData_STD6[0x20];                                    // 0x0038(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x0068(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.UWorksRequestCoreComputeNewPlayerCompatibility");
		return ptr;
	}



	void SetInput(const struct FUWorksSteamID& SteamIDNewPlayer);
	bool IsActive();
	void GetOutput(UWorksCore_EUWorksResult* Result, int* PlayersThatDontLikeCandidate, int* PlayersThatCandidateDoesntLike, int* ClanPlayersThatDontLikeCandidate, struct FUWorksSteamID* SteamIDCandidate);
	void Deactivate();
	void Activate();
};

// Class UWorksCore.UWorksRequestCoreRequestUserStatsGS
// 0x0038 (FullSize[0x0070] - InheritedSize[0x0038])
class UUWorksRequestCoreRequestUserStatsGS : public UUWorksRequestCore
{
public:
	unsigned char                                      UnknownData_SIIP[0x18];                                    // 0x0038(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x0050(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x0060(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.UWorksRequestCoreRequestUserStatsGS");
		return ptr;
	}



	void SetInput(const struct FUWorksSteamID& SteamIDUser);
	bool IsActive();
	void GetOutput(UWorksCore_EUWorksResult* Result, struct FUWorksSteamID* SteamIDUser);
	void Deactivate();
	void Activate();
};

// Class UWorksCore.UWorksRequestCoreStoreUserStats
// 0x0038 (FullSize[0x0070] - InheritedSize[0x0038])
class UUWorksRequestCoreStoreUserStats : public UUWorksRequestCore
{
public:
	unsigned char                                      UnknownData_GACK[0x18];                                    // 0x0038(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x0050(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x0060(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.UWorksRequestCoreStoreUserStats");
		return ptr;
	}



	void SetInput(const struct FUWorksSteamID& SteamIDUser);
	bool IsActive();
	void GetOutput(UWorksCore_EUWorksResult* Result, struct FUWorksSteamID* SteamIDUser);
	void Deactivate();
	void Activate();
};

// Class UWorksCore.UWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs
// 0x0040 (FullSize[0x0078] - InheritedSize[0x0038])
class UUWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs : public UUWorksRequestCore
{
public:
	unsigned char                                      UnknownData_53C8[0x20];                                    // 0x0038(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x0068(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.UWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs");
		return ptr;
	}



	void SetInput(const struct FUWorksSteamID& SteamID);
	bool IsActive();
	void GetOutput(UWorksCore_EUWorksResult* Result, struct FUWorksSteamID* SteamID, int* NumEligiblePromoItemsDefinitionsIDs, bool* bCachedData);
	void Deactivate();
	void Activate();
};

// Class UWorksCore.UWorksRequestCoreRequestLobbyList
// 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
class UUWorksRequestCoreRequestLobbyList : public UUWorksRequestCore
{
public:
	unsigned char                                      UnknownData_ZCLO[0x8];                                     // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x0050(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.UWorksRequestCoreRequestLobbyList");
		return ptr;
	}



	bool IsActive();
	void GetOutput(int* LobbiesMatching);
	void Deactivate();
	void Activate();
};

// Class UWorksCore.UWorksRequestCoreCreateLobby
// 0x0038 (FullSize[0x0070] - InheritedSize[0x0038])
class UUWorksRequestCoreCreateLobby : public UUWorksRequestCore
{
public:
	unsigned char                                      UnknownData_4OMA[0x18];                                    // 0x0038(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x0050(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x0060(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.UWorksRequestCoreCreateLobby");
		return ptr;
	}



	void SetInput(UWorksCore_EUWorksLobbyType LobbyType, int MaxMembers);
	bool IsActive();
	void GetOutput(UWorksCore_EUWorksResult* Result, struct FUWorksSteamID* SteamIDLobby);
	void Deactivate();
	void Activate();
};

// Class UWorksCore.UWorksRequestCoreJoinLobby
// 0x0048 (FullSize[0x0080] - InheritedSize[0x0038])
class UUWorksRequestCoreJoinLobby : public UUWorksRequestCore
{
public:
	unsigned char                                      UnknownData_BRUC[0x28];                                    // 0x0038(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x0060(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x0070(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.UWorksRequestCoreJoinLobby");
		return ptr;
	}



	void SetInput(const struct FUWorksSteamID& SteamIDLobby);
	bool IsActive();
	void GetOutput(struct FUWorksSteamID* SteamIDLobby, TArray<unsigned char>* ChatPermissions, bool* bLocked, UWorksCore_EUWorksChatRoomEnterResponse* ChatRoomEnterResponse);
	void Deactivate();
	void Activate();
};

// Class UWorksCore.UWorksRequestCoreServerList
// 0x0118 (FullSize[0x0150] - InheritedSize[0x0038])
class UUWorksRequestCoreServerList : public UUWorksRequestCore
{
public:
	unsigned char                                      UnknownData_1XYF[0xD8];                                    // 0x0038(0x00D8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x0110(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnRequestUpdated;                                          // 0x0120(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x0130(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestUpdatedMinimal;                                   // 0x0140(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.UWorksRequestCoreServerList");
		return ptr;
	}



	void SetInput(int AppID, UWorksCore_EUWorksServerQueryType QueryType);
	bool IsActive();
	void GetOutput(struct FUWorksServerInfo* UpdatedServer, TArray<struct FUWorksServerInfo>* Servers);
	void Deactivate();
	void AddFilterSecure();
	void AddFilterOr(int Value);
	void AddFilterNotFull();
	void AddFilterNor(int Value);
	void AddFilterNoPlayers();
	void AddFilterNand(int Value);
	void AddFilterMap(const struct FString& Value);
	void AddFilterLinux();
	void AddFilterHasPlayers();
	void AddFilterGameTagsNor(const struct FString& Value);
	void AddFilterGameTagsAnd(const struct FString& Value);
	void AddFilterGameDataOr(const struct FString& Value);
	void AddFilterGameDataNor(const struct FString& Value);
	void AddFilterGameDataAnd(const struct FString& Value);
	void AddFilterGameAddr(const struct FString& Value);
	void AddFilterDedicated();
	void AddFilterAnd(int Value);
	void AddFilterAddr(const struct FString& Value);
	void Activate();
};

// Class UWorksCore.UWorksRequestCorePing
// 0x00C8 (FullSize[0x0100] - InheritedSize[0x0038])
class UUWorksRequestCorePing : public UUWorksRequestCore
{
public:
	unsigned char                                      UnknownData_B2E7[0xA8];                                    // 0x0038(0x00A8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00F0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.UWorksRequestCorePing");
		return ptr;
	}



	void SetInput(const struct FString& IP, int Port);
	bool IsActive();
	void GetOutput(struct FUWorksServerInfo* Server);
	void Deactivate();
	void Activate();
};

// Class UWorksCore.UWorksRequestCorePlayers
// 0x0078 (FullSize[0x00B0] - InheritedSize[0x0038])
class UUWorksRequestCorePlayers : public UUWorksRequestCore
{
public:
	unsigned char                                      UnknownData_0L40[0x38];                                    // 0x0038(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x0070(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnRequestUpdated;                                          // 0x0080(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x0090(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestUpdatedMinimal;                                   // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.UWorksRequestCorePlayers");
		return ptr;
	}



	void SetInput(const struct FString& IP, int Port);
	bool IsActive();
	void GetOutput(struct FUWorksPlayerInfo* UpdatedPlayer, TArray<struct FUWorksPlayerInfo>* Players);
	void Deactivate();
	void Activate();
};

// Class UWorksCore.UWorksRequestCoreRules
// 0x0080 (FullSize[0x00B8] - InheritedSize[0x0038])
class UUWorksRequestCoreRules : public UUWorksRequestCore
{
public:
	unsigned char                                      UnknownData_8S10[0x40];                                    // 0x0038(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnRequestUpdated;                                          // 0x0088(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x0098(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestUpdatedMinimal;                                   // 0x00A8(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.UWorksRequestCoreRules");
		return ptr;
	}



	void SetInput(const struct FString& IP, int Port);
	bool IsActive();
	void GetOutput(struct FUWorksRuleInfo* UpdatedRule, TArray<struct FUWorksRuleInfo>* Rules);
	void Deactivate();
	void Activate();
};

// Class UWorksCore.UWorksRequestCoreFileWriteAsync
// 0x0048 (FullSize[0x0080] - InheritedSize[0x0038])
class UUWorksRequestCoreFileWriteAsync : public UUWorksRequestCore
{
public:
	unsigned char                                      UnknownData_YJAM[0x28];                                    // 0x0038(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x0060(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x0070(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.UWorksRequestCoreFileWriteAsync");
		return ptr;
	}



	void SetInput(const struct FString& File, TArray<unsigned char> Buffer);
	bool IsActive();
	void GetOutput(UWorksCore_EUWorksResult* Result);
	void Deactivate();
	void Activate();
};

// Class UWorksCore.UWorksRequestCoreFileReadAsync
// 0x0050 (FullSize[0x0088] - InheritedSize[0x0038])
class UUWorksRequestCoreFileReadAsync : public UUWorksRequestCore
{
public:
	unsigned char                                      UnknownData_4C6E[0x30];                                    // 0x0038(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x0078(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.UWorksRequestCoreFileReadAsync");
		return ptr;
	}



	void SetInput(const struct FString& File, int Offset, int BytesToRead);
	bool IsActive();
	void GetOutput(UWorksCore_EUWorksResult* Result, int* Offset, TArray<unsigned char>* Buffer);
	void Deactivate();
	void Activate();
};

// Class UWorksCore.UWorksRequestCoreSendQueryUGCRequest
// 0x0040 (FullSize[0x0078] - InheritedSize[0x0038])
class UUWorksRequestCoreSendQueryUGCRequest : public UUWorksRequestCore
{
public:
	unsigned char                                      UnknownData_4BMW[0x20];                                    // 0x0038(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x0068(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.UWorksRequestCoreSendQueryUGCRequest");
		return ptr;
	}



	void SetInput(const struct FUWorksUGCQueryHandle& UGCQueryHandle);
	bool IsActive();
	void GetOutput(struct FUWorksUGCQueryHandle* UGCQueryHandle, UWorksCore_EUWorksResult* Result, int* NumResultsReturned, int* TotalMatchingResults, bool* bCachedData);
	void Deactivate();
	void Activate();
};

// Class UWorksCore.UWorksRequestCoreCreateItem
// 0x0038 (FullSize[0x0070] - InheritedSize[0x0038])
class UUWorksRequestCoreCreateItem : public UUWorksRequestCore
{
public:
	unsigned char                                      UnknownData_RL8D[0x18];                                    // 0x0038(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x0050(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x0060(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.UWorksRequestCoreCreateItem");
		return ptr;
	}



	void SetInput(int ConsumerAppID, UWorksCore_EUWorksWorkshopFileType FileType);
	bool IsActive();
	void GetOutput(UWorksCore_EUWorksResult* Result, struct FUWorksPublishedFileID* PublishedFileID, bool* bUserNeedsToAcceptWorkshopLegalAgreement);
	void Deactivate();
	void Activate();
};

// Class UWorksCore.UWorksRequestCoreSubmitItemUpdate
// 0x0040 (FullSize[0x0078] - InheritedSize[0x0038])
class UUWorksRequestCoreSubmitItemUpdate : public UUWorksRequestCore
{
public:
	unsigned char                                      UnknownData_J822[0x20];                                    // 0x0038(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x0068(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.UWorksRequestCoreSubmitItemUpdate");
		return ptr;
	}



	void SetInput(const struct FUWorksUGCUpdateHandle& UGCUpdateHandle, const struct FString& ChangeNote);
	bool IsActive();
	void GetOutput(UWorksCore_EUWorksResult* Result, bool* bUserNeedsToAcceptWorkshopLegalAgreement);
	void Deactivate();
	void Activate();
};

// Class UWorksCore.UWorksRequestCoreSetUserItemVote
// 0x0040 (FullSize[0x0078] - InheritedSize[0x0038])
class UUWorksRequestCoreSetUserItemVote : public UUWorksRequestCore
{
public:
	unsigned char                                      UnknownData_JELA[0x20];                                    // 0x0038(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x0068(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.UWorksRequestCoreSetUserItemVote");
		return ptr;
	}



	void SetInput(const struct FUWorksPublishedFileID& PublishedFileID, bool bVoteUp);
	bool IsActive();
	void GetOutput(struct FUWorksPublishedFileID* PublishedFileID, UWorksCore_EUWorksResult* Result, bool* bVoteUp);
	void Deactivate();
	void Activate();
};

// Class UWorksCore.UWorksRequestCoreGetUserItemVote
// 0x0038 (FullSize[0x0070] - InheritedSize[0x0038])
class UUWorksRequestCoreGetUserItemVote : public UUWorksRequestCore
{
public:
	unsigned char                                      UnknownData_XU01[0x18];                                    // 0x0038(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x0050(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x0060(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.UWorksRequestCoreGetUserItemVote");
		return ptr;
	}



	void SetInput(const struct FUWorksPublishedFileID& PublishedFileID);
	bool IsActive();
	void GetOutput(struct FUWorksPublishedFileID* PublishedFileID, UWorksCore_EUWorksResult* Result, bool* bVotedUp, bool* bVotedDown, bool* bVoteSkipped);
	void Deactivate();
	void Activate();
};

// Class UWorksCore.UWorksRequestCoreAddItemToFavorites
// 0x0040 (FullSize[0x0078] - InheritedSize[0x0038])
class UUWorksRequestCoreAddItemToFavorites : public UUWorksRequestCore
{
public:
	unsigned char                                      UnknownData_QRNB[0x20];                                    // 0x0038(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x0068(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.UWorksRequestCoreAddItemToFavorites");
		return ptr;
	}



	void SetInput(int AppID, const struct FUWorksPublishedFileID& PublishedFileID);
	bool IsActive();
	void GetOutput(struct FUWorksPublishedFileID* PublishedFileID, UWorksCore_EUWorksResult* Result, bool* bWasAddRequest);
	void Deactivate();
	void Activate();
};

// Class UWorksCore.UWorksRequestCoreRemoveItemFromFavorites
// 0x0040 (FullSize[0x0078] - InheritedSize[0x0038])
class UUWorksRequestCoreRemoveItemFromFavorites : public UUWorksRequestCore
{
public:
	unsigned char                                      UnknownData_QXG3[0x20];                                    // 0x0038(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x0068(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.UWorksRequestCoreRemoveItemFromFavorites");
		return ptr;
	}



	void SetInput(int AppID, const struct FUWorksPublishedFileID& PublishedFileID);
	bool IsActive();
	void GetOutput(struct FUWorksPublishedFileID* PublishedFileID, UWorksCore_EUWorksResult* Result, bool* bWasAddRequest);
	void Deactivate();
	void Activate();
};

// Class UWorksCore.UWorksRequestCoreSubscribeItem
// 0x0038 (FullSize[0x0070] - InheritedSize[0x0038])
class UUWorksRequestCoreSubscribeItem : public UUWorksRequestCore
{
public:
	unsigned char                                      UnknownData_SP5L[0x18];                                    // 0x0038(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x0050(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x0060(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.UWorksRequestCoreSubscribeItem");
		return ptr;
	}



	void SetInput(const struct FUWorksPublishedFileID& PublishedFileID);
	bool IsActive();
	void GetOutput(UWorksCore_EUWorksResult* Result, struct FUWorksPublishedFileID* PublishedFileID);
	void Deactivate();
	void Activate();
};

// Class UWorksCore.UWorksRequestCoreUnsubscribeItem
// 0x0038 (FullSize[0x0070] - InheritedSize[0x0038])
class UUWorksRequestCoreUnsubscribeItem : public UUWorksRequestCore
{
public:
	unsigned char                                      UnknownData_Z6FR[0x18];                                    // 0x0038(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x0050(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x0060(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.UWorksRequestCoreUnsubscribeItem");
		return ptr;
	}



	void SetInput(const struct FUWorksPublishedFileID& PublishedFileID);
	bool IsActive();
	void GetOutput(UWorksCore_EUWorksResult* Result, struct FUWorksPublishedFileID* PublishedFileID);
	void Deactivate();
	void Activate();
};

// Class UWorksCore.UWorksRequestCoreStartPlaytimeTracking
// 0x0038 (FullSize[0x0070] - InheritedSize[0x0038])
class UUWorksRequestCoreStartPlaytimeTracking : public UUWorksRequestCore
{
public:
	unsigned char                                      UnknownData_U18O[0x18];                                    // 0x0038(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x0050(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x0060(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.UWorksRequestCoreStartPlaytimeTracking");
		return ptr;
	}



	void SetInput(TArray<struct FUWorksPublishedFileID> PublishedFileID);
	bool IsActive();
	void GetOutput(UWorksCore_EUWorksResult* Result);
	void Deactivate();
	void Activate();
};

// Class UWorksCore.UWorksRequestCoreStopPlaytimeTracking
// 0x0038 (FullSize[0x0070] - InheritedSize[0x0038])
class UUWorksRequestCoreStopPlaytimeTracking : public UUWorksRequestCore
{
public:
	unsigned char                                      UnknownData_N1RA[0x18];                                    // 0x0038(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x0050(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x0060(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.UWorksRequestCoreStopPlaytimeTracking");
		return ptr;
	}



	void SetInput(TArray<struct FUWorksPublishedFileID> PublishedFileIDs);
	bool IsActive();
	void GetOutput(UWorksCore_EUWorksResult* Result);
	void Deactivate();
	void Activate();
};

// Class UWorksCore.UWorksRequestCoreStopPlaytimeTrackingForAllItems
// 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
class UUWorksRequestCoreStopPlaytimeTrackingForAllItems : public UUWorksRequestCore
{
public:
	unsigned char                                      UnknownData_08QU[0x8];                                     // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x0050(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.UWorksRequestCoreStopPlaytimeTrackingForAllItems");
		return ptr;
	}



	bool IsActive();
	void GetOutput(UWorksCore_EUWorksResult* Result);
	void Deactivate();
	void Activate();
};

// Class UWorksCore.UWorksRequestCoreRequestEncryptedAppTicket
// 0x0038 (FullSize[0x0070] - InheritedSize[0x0038])
class UUWorksRequestCoreRequestEncryptedAppTicket : public UUWorksRequestCore
{
public:
	unsigned char                                      UnknownData_YKF4[0x18];                                    // 0x0038(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x0050(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x0060(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.UWorksRequestCoreRequestEncryptedAppTicket");
		return ptr;
	}



	void SetInput(TArray<unsigned char> Buffer);
	bool IsActive();
	void GetOutput(UWorksCore_EUWorksResult* Result);
	void Deactivate();
	void Activate();
};

// Class UWorksCore.UWorksRequestCoreRequestStoreAuthURL
// 0x0040 (FullSize[0x0078] - InheritedSize[0x0038])
class UUWorksRequestCoreRequestStoreAuthURL : public UUWorksRequestCore
{
public:
	unsigned char                                      UnknownData_EFU3[0x20];                                    // 0x0038(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x0068(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.UWorksRequestCoreRequestStoreAuthURL");
		return ptr;
	}



	void SetInput(const struct FString& URL);
	bool IsActive();
	void GetOutput(struct FString* URL);
	void Deactivate();
	void Activate();
};

// Class UWorksCore.UWorksRequestCoreRequestUserStats
// 0x0040 (FullSize[0x0078] - InheritedSize[0x0038])
class UUWorksRequestCoreRequestUserStats : public UUWorksRequestCore
{
public:
	unsigned char                                      UnknownData_CQDN[0x20];                                    // 0x0038(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x0068(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.UWorksRequestCoreRequestUserStats");
		return ptr;
	}



	void SetInput(const struct FUWorksSteamID& SteamID);
	bool IsActive();
	void GetOutput(struct FUWorksGameID* GameID, UWorksCore_EUWorksResult* Result, struct FUWorksSteamID* SteamID);
	void Deactivate();
	void Activate();
};

// Class UWorksCore.UWorksRequestCoreFindOrCreateLeaderboard
// 0x0048 (FullSize[0x0080] - InheritedSize[0x0038])
class UUWorksRequestCoreFindOrCreateLeaderboard : public UUWorksRequestCore
{
public:
	unsigned char                                      UnknownData_WMOY[0x28];                                    // 0x0038(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x0060(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x0070(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.UWorksRequestCoreFindOrCreateLeaderboard");
		return ptr;
	}



	void SetInput(const struct FString& LeaderboardName, UWorksCore_EUWorksLeaderboardSortMethod LeaderboardSortMethod, UWorksCore_EUWorksLeaderboardDisplayType LeaderboardDisplayType);
	bool IsActive();
	void GetOutput(struct FUWorksSteamLeaderboard* SteamLeaderboard, bool* bLeaderboardFound);
	void Deactivate();
	void Activate();
};

// Class UWorksCore.UWorksRequestCoreFindLeaderboard
// 0x0040 (FullSize[0x0078] - InheritedSize[0x0038])
class UUWorksRequestCoreFindLeaderboard : public UUWorksRequestCore
{
public:
	unsigned char                                      UnknownData_AMKR[0x20];                                    // 0x0038(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x0068(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.UWorksRequestCoreFindLeaderboard");
		return ptr;
	}



	void SetInput(const struct FString& LeaderboardName);
	bool IsActive();
	void GetOutput(struct FUWorksSteamLeaderboard* SteamLeaderboard, bool* bLeaderboardFound);
	void Deactivate();
	void Activate();
};

// Class UWorksCore.UWorksRequestCoreDownloadLeaderboardEntries
// 0x0050 (FullSize[0x0088] - InheritedSize[0x0038])
class UUWorksRequestCoreDownloadLeaderboardEntries : public UUWorksRequestCore
{
public:
	unsigned char                                      UnknownData_GW4T[0x30];                                    // 0x0038(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x0078(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.UWorksRequestCoreDownloadLeaderboardEntries");
		return ptr;
	}



	void SetInput(const struct FUWorksSteamLeaderboard& SteamLeaderboard, UWorksCore_EUWorksLeaderboardDataRequest LeaderboardDataRequest, int RangeStart, int RangeEnd);
	bool IsActive();
	void GetOutput(struct FUWorksSteamLeaderboard* SteamLeaderboard, struct FUWorksSteamLeaderboardEntries* SteamLeaderboardEntries, int* EntryCount);
	void Deactivate();
	void Activate();
};

// Class UWorksCore.UWorksRequestCoreDownloadLeaderboardEntriesForUsers
// 0x0050 (FullSize[0x0088] - InheritedSize[0x0038])
class UUWorksRequestCoreDownloadLeaderboardEntriesForUsers : public UUWorksRequestCore
{
public:
	unsigned char                                      UnknownData_HX8J[0x30];                                    // 0x0038(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x0078(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.UWorksRequestCoreDownloadLeaderboardEntriesForUsers");
		return ptr;
	}



	void SetInput(const struct FUWorksSteamLeaderboard& SteamLeaderboard, TArray<struct FUWorksSteamID> users);
	bool IsActive();
	void GetOutput(struct FUWorksSteamLeaderboard* SteamLeaderboard, struct FUWorksSteamLeaderboardEntries* SteamLeaderboardEntries, int* EntryCount);
	void Deactivate();
	void Activate();
};

// Class UWorksCore.UWorksRequestCoreUploadLeaderboardScore
// 0x0060 (FullSize[0x0098] - InheritedSize[0x0038])
class UUWorksRequestCoreUploadLeaderboardScore : public UUWorksRequestCore
{
public:
	unsigned char                                      UnknownData_S3X9[0x40];                                    // 0x0038(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x0088(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.UWorksRequestCoreUploadLeaderboardScore");
		return ptr;
	}



	void SetInput(const struct FUWorksSteamLeaderboard& SteamLeaderboard, UWorksCore_EUWorksLeaderboardUploadScoreMethod LeaderboardUploadScoreMethod, int Score, TArray<int> ScoreDetails);
	bool IsActive();
	void GetOutput(bool* bSuccess, struct FUWorksSteamLeaderboard* SteamLeaderboard, int* Score, bool* bScoreChanged, int* GlobalRankNew, int* GlobalRankPrevious);
	void Deactivate();
	void Activate();
};

// Class UWorksCore.UWorksRequestCoreAttachLeaderboardUGC
// 0x0040 (FullSize[0x0078] - InheritedSize[0x0038])
class UUWorksRequestCoreAttachLeaderboardUGC : public UUWorksRequestCore
{
public:
	unsigned char                                      UnknownData_KADQ[0x20];                                    // 0x0038(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x0068(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.UWorksRequestCoreAttachLeaderboardUGC");
		return ptr;
	}



	void SetInput(const struct FUWorksSteamLeaderboard& SteamLeaderboard, const struct FUWorksUGCHandle& UGCHandle);
	bool IsActive();
	void GetOutput(UWorksCore_EUWorksResult* Result, struct FUWorksSteamLeaderboard* SteamLeaderboard);
	void Deactivate();
	void Activate();
};

// Class UWorksCore.UWorksRequestCoreGetNumberOfCurrentPlayers
// 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
class UUWorksRequestCoreGetNumberOfCurrentPlayers : public UUWorksRequestCore
{
public:
	unsigned char                                      UnknownData_QTEF[0x8];                                     // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x0050(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.UWorksRequestCoreGetNumberOfCurrentPlayers");
		return ptr;
	}



	bool IsActive();
	void GetOutput(bool* bSuccess, int* Players);
	void Deactivate();
	void Activate();
};

// Class UWorksCore.UWorksRequestCoreRequestGlobalAchievementPercentages
// 0x0030 (FullSize[0x0068] - InheritedSize[0x0038])
class UUWorksRequestCoreRequestGlobalAchievementPercentages : public UUWorksRequestCore
{
public:
	unsigned char                                      UnknownData_AHJS[0x10];                                    // 0x0038(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x0058(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.UWorksRequestCoreRequestGlobalAchievementPercentages");
		return ptr;
	}



	bool IsActive();
	void GetOutput(struct FUWorksGameID* GameID, UWorksCore_EUWorksResult* Result);
	void Deactivate();
	void Activate();
};

// Class UWorksCore.UWorksRequestCoreRequestGlobalStats
// 0x0038 (FullSize[0x0070] - InheritedSize[0x0038])
class UUWorksRequestCoreRequestGlobalStats : public UUWorksRequestCore
{
public:
	unsigned char                                      UnknownData_OBWD[0x18];                                    // 0x0038(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x0050(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x0060(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.UWorksRequestCoreRequestGlobalStats");
		return ptr;
	}



	void SetInput(int HistoryDays);
	bool IsActive();
	void GetOutput(struct FUWorksGameID* GameID, UWorksCore_EUWorksResult* Result);
	void Deactivate();
	void Activate();
};

// Class UWorksCore.CoreGetFileDetailsNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UCoreGetFileDetailsNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.CoreGetFileDetailsNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, UWorksCore_EUWorksResult Result, int FileSize, const struct FString& FileSHA, TArray<int> FileFlags);
	class UCoreGetFileDetailsNode* STATIC_GetFileDetailsNode(const struct FString& Filename);
};

// Class UWorksCore.CoreSetPersonaNameNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UCoreSetPersonaNameNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.CoreSetPersonaNameNode");
		return ptr;
	}



	class UCoreSetPersonaNameNode* STATIC_SetPersonaNameNode(const struct FString& Name);
	void OnRequestCompleted(bool bSuccessful, bool bSuccess, bool bLocalSuccess, UWorksCore_EUWorksResult Result);
};

// Class UWorksCore.CoreDownloadClanActivityCountsNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UCoreDownloadClanActivityCountsNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.CoreDownloadClanActivityCountsNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, bool bSuccess);
	class UCoreDownloadClanActivityCountsNode* STATIC_DownloadClanActivityCountsNode(TArray<struct FUWorksSteamID> SteamIDClans);
};

// Class UWorksCore.CoreRequestClanOfficerListNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UCoreRequestClanOfficerListNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.CoreRequestClanOfficerListNode");
		return ptr;
	}



	class UCoreRequestClanOfficerListNode* STATIC_RequestClanOfficerListNode(const struct FUWorksSteamID& SteamID);
	void OnRequestCompleted(bool bSuccessful, const struct FUWorksSteamID& SteamIDClan, int Officers, bool bSuccess);
};

// Class UWorksCore.CoreJoinClanChatRoomNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UCoreJoinClanChatRoomNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.CoreJoinClanChatRoomNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, const struct FUWorksSteamID& SteamIDClanChat, UWorksCore_EUWorksChatRoomEnterResponse ChatRoomEnterResponse);
	class UCoreJoinClanChatRoomNode* STATIC_JoinClanChatRoomNode(const struct FUWorksSteamID& SteamIDClan);
};

// Class UWorksCore.CoreGetFollowerCountNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UCoreGetFollowerCountNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.CoreGetFollowerCountNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, UWorksCore_EUWorksResult Result, const struct FUWorksSteamID& SteamID, int Count);
	class UCoreGetFollowerCountNode* STATIC_GetFollowerCountNode(const struct FUWorksSteamID& SteamID);
};

// Class UWorksCore.CoreIsFollowingNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UCoreIsFollowingNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.CoreIsFollowingNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, UWorksCore_EUWorksResult Result, const struct FUWorksSteamID& SteamID, bool bIsFollowing);
	class UCoreIsFollowingNode* STATIC_IsFollowingNode(const struct FUWorksSteamID& SteamID);
};

// Class UWorksCore.CoreEnumerateFollowingListNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UCoreEnumerateFollowingListNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.CoreEnumerateFollowingListNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, UWorksCore_EUWorksResult Result, TArray<struct FUWorksSteamID> SteamIDs, int ResultsReturned, int TotalResultCount);
	class UCoreEnumerateFollowingListNode* STATIC_EnumerateFollowingListNode(int StartIndex);
};

// Class UWorksCore.CoreAssociateWithClanNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UCoreAssociateWithClanNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.CoreAssociateWithClanNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, UWorksCore_EUWorksResult Result);
	class UCoreAssociateWithClanNode* STATIC_AssociateWithClanNode(const struct FUWorksSteamID& SteamIDClan);
};

// Class UWorksCore.CoreComputeNewPlayerCompatibilityNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UCoreComputeNewPlayerCompatibilityNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.CoreComputeNewPlayerCompatibilityNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, UWorksCore_EUWorksResult Result, int PlayersThatDontLikeCandidate, int PlayersThatCandidateDoesntLike, int ClanPlayersThatDontLikeCandidate, const struct FUWorksSteamID& SteamIDCandidate);
	class UCoreComputeNewPlayerCompatibilityNode* STATIC_ComputeNewPlayerCompatibilityNode(const struct FUWorksSteamID& SteamIDNewPlayer);
};

// Class UWorksCore.CoreRequestUserStatsGSNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UCoreRequestUserStatsGSNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.CoreRequestUserStatsGSNode");
		return ptr;
	}



	class UCoreRequestUserStatsGSNode* STATIC_RequestUserStatsGSNode(const struct FUWorksSteamID& SteamIDUser);
	void OnRequestCompleted(bool bSuccessful, UWorksCore_EUWorksResult Result, const struct FUWorksSteamID& SteamIDUser);
};

// Class UWorksCore.CoreStoreUserStatsNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UCoreStoreUserStatsNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.CoreStoreUserStatsNode");
		return ptr;
	}



	class UCoreStoreUserStatsNode* STATIC_StoreUserStatsNode(const struct FUWorksSteamID& SteamIDUser);
	void OnRequestCompleted(bool bSuccessful, UWorksCore_EUWorksResult Result, const struct FUWorksSteamID& SteamIDUser);
};

// Class UWorksCore.CoreRequestEligiblePromoItemDefinitionsIDsNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UCoreRequestEligiblePromoItemDefinitionsIDsNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.CoreRequestEligiblePromoItemDefinitionsIDsNode");
		return ptr;
	}



	class UCoreRequestEligiblePromoItemDefinitionsIDsNode* STATIC_RequestEligiblePromoItemDefinitionsIDsNode(const struct FUWorksSteamID& SteamID);
	void OnRequestCompleted(bool bSuccessful, UWorksCore_EUWorksResult Result, const struct FUWorksSteamID& SteamID, int NumEligiblePromoItemsDefinitionsIDs, bool bCachedData);
};

// Class UWorksCore.CoreRequestLobbyListNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UCoreRequestLobbyListNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.CoreRequestLobbyListNode");
		return ptr;
	}



	class UCoreRequestLobbyListNode* STATIC_RequestLobbyListNode();
	void OnRequestCompleted(bool bSuccessful, int LobbiesMatching);
};

// Class UWorksCore.CoreCreateLobbyNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UCoreCreateLobbyNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.CoreCreateLobbyNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, UWorksCore_EUWorksResult Result, const struct FUWorksSteamID& SteamIDLobby);
	class UCoreCreateLobbyNode* STATIC_CreateLobbyNode(UWorksCore_EUWorksLobbyType LobbyType, int MaxMembers);
};

// Class UWorksCore.CoreJoinLobbyNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UCoreJoinLobbyNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.CoreJoinLobbyNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, const struct FUWorksSteamID& SteamIDLobby, TArray<unsigned char> ChatPermissions, bool bLocked, UWorksCore_EUWorksChatRoomEnterResponse ChatRoomEnterResponse);
	class UCoreJoinLobbyNode* STATIC_JoinLobbyNode(const struct FUWorksSteamID& SteamIDLobby);
};

// Class UWorksCore.CoreServerListNode
// 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
class UCoreServerListNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Updated;                                                   // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Q16G[0x10];                                    // 0x0040(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.CoreServerListNode");
		return ptr;
	}



	class UCoreServerListNode* STATIC_ServerListNode(int AppID, UWorksCore_EUWorksServerQueryType QueryType, int MaxUpdates);
	void OnRequestUpdated(bool bSuccessful, const struct FUWorksServerInfo& Server);
};

// Class UWorksCore.CorePingNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UCorePingNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.CorePingNode");
		return ptr;
	}



	class UCorePingNode* STATIC_PingNode(const struct FString& IP, int Port);
	void OnRequestCompleted(bool bSuccessful, const struct FUWorksServerInfo& Server);
};

// Class UWorksCore.CorePlayersNode
// 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
class UCorePlayersNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Updated;                                                   // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TR3L[0x10];                                    // 0x0040(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.CorePlayersNode");
		return ptr;
	}



	class UCorePlayersNode* STATIC_PlayersNode(const struct FString& IP, int Port, int MaxUpdates);
	void OnRequestUpdated(bool bSuccessful, const struct FUWorksPlayerInfo& Player);
};

// Class UWorksCore.CoreRulesNode
// 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
class UCoreRulesNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Updated;                                                   // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8PEL[0x10];                                    // 0x0040(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.CoreRulesNode");
		return ptr;
	}



	class UCoreRulesNode* STATIC_RulesNode(const struct FString& IP, int Port, int MaxUpdates);
	void OnRequestUpdated(bool bSuccessful, const struct FUWorksRuleInfo& Rule);
};

// Class UWorksCore.CoreFileWriteAsyncNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UCoreFileWriteAsyncNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.CoreFileWriteAsyncNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, UWorksCore_EUWorksResult Result);
	class UCoreFileWriteAsyncNode* STATIC_FileWriteAsyncNode(const struct FString& File, TArray<unsigned char> Buffer);
};

// Class UWorksCore.CoreFileReadAsyncNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UCoreFileReadAsyncNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.CoreFileReadAsyncNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, UWorksCore_EUWorksResult Result, int Offset, TArray<unsigned char> Buffer);
	class UCoreFileReadAsyncNode* STATIC_FileReadAsyncNode(const struct FString& File, int Offset, int BytesToRead);
};

// Class UWorksCore.CoreSendQueryUGCRequestNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UCoreSendQueryUGCRequestNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.CoreSendQueryUGCRequestNode");
		return ptr;
	}



	class UCoreSendQueryUGCRequestNode* STATIC_SendQueryUGCRequestNode(const struct FUWorksUGCQueryHandle& UGCQueryHandle);
	void OnRequestCompleted(bool bSuccessful, const struct FUWorksUGCQueryHandle& UGCQueryHandle, UWorksCore_EUWorksResult Result, int NumResultsReturned, int TotalMatchingResults, bool bCachedData);
};

// Class UWorksCore.CoreCreateItemNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UCoreCreateItemNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.CoreCreateItemNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, UWorksCore_EUWorksResult Result, const struct FUWorksPublishedFileID& PublishedFileID, bool bUserNeedsToAcceptWorkshopLegalAgreement);
	class UCoreCreateItemNode* STATIC_CreateItemNode(int ConsumerAppID, UWorksCore_EUWorksWorkshopFileType FileType);
};

// Class UWorksCore.CoreSubmitItemUpdateNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UCoreSubmitItemUpdateNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.CoreSubmitItemUpdateNode");
		return ptr;
	}



	class UCoreSubmitItemUpdateNode* STATIC_SubmitItemUpdateNode(const struct FUWorksUGCUpdateHandle& UGCUpdateHandle, const struct FString& ChangeNote);
	void OnRequestCompleted(bool bSuccessful, UWorksCore_EUWorksResult Result, bool bUserNeedsToAcceptWorkshopLegalAgreement);
};

// Class UWorksCore.CoreSetUserItemVoteNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UCoreSetUserItemVoteNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.CoreSetUserItemVoteNode");
		return ptr;
	}



	class UCoreSetUserItemVoteNode* STATIC_SetUserItemVoteNode(const struct FUWorksPublishedFileID& PublishedFileID, bool bVoteUp);
	void OnRequestCompleted(bool bSuccessful, const struct FUWorksPublishedFileID& PublishedFileID, UWorksCore_EUWorksResult Result, bool bVoteUp);
};

// Class UWorksCore.CoreGetUserItemVoteNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UCoreGetUserItemVoteNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.CoreGetUserItemVoteNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, const struct FUWorksPublishedFileID& PublishedFileID, UWorksCore_EUWorksResult Result, bool bVotedUp, bool bVotedDown, bool bVoteSkipped);
	class UCoreGetUserItemVoteNode* STATIC_GetUserItemVoteNode(const struct FUWorksPublishedFileID& PublishedFileID);
};

// Class UWorksCore.CoreAddItemToFavoritesNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UCoreAddItemToFavoritesNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.CoreAddItemToFavoritesNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, const struct FUWorksPublishedFileID& PublishedFileID, UWorksCore_EUWorksResult Result, bool bWasAddRequest);
	class UCoreAddItemToFavoritesNode* STATIC_AddItemToFavoritesNode(int AppID, const struct FUWorksPublishedFileID& PublishedFileID);
};

// Class UWorksCore.CoreRemoveItemFromFavoritesNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UCoreRemoveItemFromFavoritesNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.CoreRemoveItemFromFavoritesNode");
		return ptr;
	}



	class UCoreRemoveItemFromFavoritesNode* STATIC_RemoveItemFromFavoritesNode(int AppID, const struct FUWorksPublishedFileID& PublishedFileID);
	void OnRequestCompleted(bool bSuccessful, const struct FUWorksPublishedFileID& PublishedFileID, UWorksCore_EUWorksResult Result, bool bWasAddRequest);
};

// Class UWorksCore.CoreSubscribeItemNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UCoreSubscribeItemNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.CoreSubscribeItemNode");
		return ptr;
	}



	class UCoreSubscribeItemNode* STATIC_SubscribeItemNode(const struct FUWorksPublishedFileID& PublishedFileID);
	void OnRequestCompleted(bool bSuccessful, UWorksCore_EUWorksResult Result, const struct FUWorksPublishedFileID& PublishedFileID);
};

// Class UWorksCore.CoreUnsubscribeItemNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UCoreUnsubscribeItemNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.CoreUnsubscribeItemNode");
		return ptr;
	}



	class UCoreUnsubscribeItemNode* STATIC_UnsubscribeItemNode(const struct FUWorksPublishedFileID& PublishedFileID);
	void OnRequestCompleted(bool bSuccessful, UWorksCore_EUWorksResult Result, const struct FUWorksPublishedFileID& PublishedFileID);
};

// Class UWorksCore.CoreStartPlaytimeTrackingNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UCoreStartPlaytimeTrackingNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.CoreStartPlaytimeTrackingNode");
		return ptr;
	}



	class UCoreStartPlaytimeTrackingNode* STATIC_StartPlaytimeTrackingNode(TArray<struct FUWorksPublishedFileID> PublishedFileID);
	void OnRequestCompleted(bool bSuccessful, UWorksCore_EUWorksResult Result);
};

// Class UWorksCore.CoreStopPlaytimeTrackingNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UCoreStopPlaytimeTrackingNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.CoreStopPlaytimeTrackingNode");
		return ptr;
	}



	class UCoreStopPlaytimeTrackingNode* STATIC_StopPlaytimeTrackingNode(TArray<struct FUWorksPublishedFileID> PublishedFileID);
	void OnRequestCompleted(bool bSuccessful, UWorksCore_EUWorksResult Result);
};

// Class UWorksCore.CoreStopPlaytimeTrackingForAllItemsNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UCoreStopPlaytimeTrackingForAllItemsNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.CoreStopPlaytimeTrackingForAllItemsNode");
		return ptr;
	}



	class UCoreStopPlaytimeTrackingForAllItemsNode* STATIC_StopPlaytimeTrackingForAllItemsNode();
	void OnRequestCompleted(bool bSuccessful, UWorksCore_EUWorksResult Result);
};

// Class UWorksCore.CoreRequestEncryptedAppTicketNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UCoreRequestEncryptedAppTicketNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.CoreRequestEncryptedAppTicketNode");
		return ptr;
	}



	class UCoreRequestEncryptedAppTicketNode* STATIC_RequestEncryptedAppTicketNode(TArray<unsigned char> Buffer);
	void OnRequestCompleted(bool bSuccessful, UWorksCore_EUWorksResult Result);
};

// Class UWorksCore.CoreRequestStoreAuthURLNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UCoreRequestStoreAuthURLNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.CoreRequestStoreAuthURLNode");
		return ptr;
	}



	class UCoreRequestStoreAuthURLNode* STATIC_RequestStoreAuthURLNode(const struct FString& URL);
	void OnRequestCompleted(bool bSuccessful, const struct FString& URL);
};

// Class UWorksCore.CoreRequestUserStatsNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UCoreRequestUserStatsNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.CoreRequestUserStatsNode");
		return ptr;
	}



	class UCoreRequestUserStatsNode* STATIC_RequestUserStatsNode(const struct FUWorksSteamID& SteamID);
	void OnRequestCompleted(bool bSuccessful, const struct FUWorksGameID& GameID, UWorksCore_EUWorksResult Result, const struct FUWorksSteamID& SteamID);
};

// Class UWorksCore.CoreFindOrCreateLeaderboardNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UCoreFindOrCreateLeaderboardNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.CoreFindOrCreateLeaderboardNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, const struct FUWorksSteamLeaderboard& SteamLeaderboard, bool bLeaderboardFound);
	class UCoreFindOrCreateLeaderboardNode* STATIC_FindOrCreateLeaderboardNode(const struct FString& LeaderboardName, UWorksCore_EUWorksLeaderboardSortMethod LeaderboardSortMethod, UWorksCore_EUWorksLeaderboardDisplayType LeaderboardDisplayType);
};

// Class UWorksCore.CoreFindLeaderboardNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UCoreFindLeaderboardNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.CoreFindLeaderboardNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, const struct FUWorksSteamLeaderboard& SteamLeaderboard, bool bLeaderboardFound);
	class UCoreFindLeaderboardNode* STATIC_FindLeaderboardNode(const struct FString& LeaderboardName);
};

// Class UWorksCore.CoreDownloadLeaderboardEntriesNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UCoreDownloadLeaderboardEntriesNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.CoreDownloadLeaderboardEntriesNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, const struct FUWorksSteamLeaderboard& SteamLeaderboard, const struct FUWorksSteamLeaderboardEntries& SteamLeaderboardEntries, int EntryCount);
	class UCoreDownloadLeaderboardEntriesNode* STATIC_DownloadLeaderboardEntriesNode(const struct FUWorksSteamLeaderboard& SteamLeaderboard, UWorksCore_EUWorksLeaderboardDataRequest LeaderboardDataRequest, int RangeStart, int RangeEnd);
};

// Class UWorksCore.CoreDownloadLeaderboardEntriesForUsersNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UCoreDownloadLeaderboardEntriesForUsersNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.CoreDownloadLeaderboardEntriesForUsersNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, const struct FUWorksSteamLeaderboard& SteamLeaderboard, const struct FUWorksSteamLeaderboardEntries& SteamLeaderboardEntries, int EntryCount);
	class UCoreDownloadLeaderboardEntriesForUsersNode* STATIC_DownloadLeaderboardEntriesForUsersNode(const struct FUWorksSteamLeaderboard& SteamLeaderboard, TArray<struct FUWorksSteamID> users);
};

// Class UWorksCore.CoreUploadLeaderboardScoreNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UCoreUploadLeaderboardScoreNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.CoreUploadLeaderboardScoreNode");
		return ptr;
	}



	class UCoreUploadLeaderboardScoreNode* STATIC_UploadLeaderboardScoreNode(const struct FUWorksSteamLeaderboard& SteamLeaderboard, UWorksCore_EUWorksLeaderboardUploadScoreMethod LeaderboardUploadScoreMethod, int Score, TArray<int> ScoreDetails);
	void OnRequestCompleted(bool bSuccessful, bool bSuccess, const struct FUWorksSteamLeaderboard& SteamLeaderboard, int Score, bool bScoreChanged, int GlobalRankNew, int GlobalRankPrevious);
};

// Class UWorksCore.CoreAttachLeaderboardUGCNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UCoreAttachLeaderboardUGCNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.CoreAttachLeaderboardUGCNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, UWorksCore_EUWorksResult Result, const struct FUWorksSteamLeaderboard& SteamLeaderboard);
	class UCoreAttachLeaderboardUGCNode* STATIC_AttachLeaderboardUGCNode(const struct FUWorksSteamLeaderboard& SteamLeaderboard, const struct FUWorksUGCHandle& UGCHandle);
};

// Class UWorksCore.CoreGetNumberOfCurrentPlayersNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UCoreGetNumberOfCurrentPlayersNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.CoreGetNumberOfCurrentPlayersNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, bool bSuccess, int Players);
	class UCoreGetNumberOfCurrentPlayersNode* STATIC_GetNumberOfCurrentPlayersNode();
};

// Class UWorksCore.CoreRequestGlobalAchievementPercentagesNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UCoreRequestGlobalAchievementPercentagesNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.CoreRequestGlobalAchievementPercentagesNode");
		return ptr;
	}



	class UCoreRequestGlobalAchievementPercentagesNode* STATIC_RequestGlobalAchievementPercentagesNode();
	void OnRequestCompleted(bool bSuccessful, const struct FUWorksGameID& GameID, UWorksCore_EUWorksResult Result);
};

// Class UWorksCore.CoreRequestGlobalStatsNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UCoreRequestGlobalStatsNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksCore.CoreRequestGlobalStatsNode");
		return ptr;
	}



	class UCoreRequestGlobalStatsNode* STATIC_RequestGlobalStatsNode(int HistoryDays);
	void OnRequestCompleted(bool bSuccessful, const struct FUWorksGameID& GameID, UWorksCore_EUWorksResult Result);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
