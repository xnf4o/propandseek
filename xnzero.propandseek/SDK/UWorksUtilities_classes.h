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

// Class UWorksUtilities.UWorksLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UUWorksLibrary : public UUWorks
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksUtilities.UWorksLibrary");
		return ptr;
	}



};

// Class UWorksUtilities.UWorksLibraryConversions
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UUWorksLibraryConversions : public UUWorksLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksUtilities.UWorksLibraryConversions");
		return ptr;
	}



	struct FString STATIC_GetCurrentProcessId();
	TArray<unsigned char> STATIC_ConvertStringToBytes(const struct FString& Data);
	struct FString STATIC_ConvertBytesToString(TArray<unsigned char> Data);
};

// Class UWorksUtilities.UWorksLibraryGameID
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UUWorksLibraryGameID : public UUWorksLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksUtilities.UWorksLibraryGameID");
		return ptr;
	}



	void STATIC_SetIdentifier(struct FUWorksGameID* GameID, const struct FString& Identifier);
	void STATIC_Reset(struct FUWorksGameID* GameID);
	bool STATIC_IsValid(const struct FUWorksGameID& GameID);
	bool STATIC_IsSteamApp(const struct FUWorksGameID& GameID);
	bool STATIC_IsShortcut(const struct FUWorksGameID& GameID);
	bool STATIC_IsP2PFile(const struct FUWorksGameID& GameID);
	bool STATIC_IsMod(const struct FUWorksGameID& GameID);
	bool STATIC_IsIdenticalWith(const struct FUWorksGameID& A, const struct FUWorksGameID& B);
	int STATIC_GetModID(const struct FUWorksGameID& GameID);
	struct FString STATIC_GetIdentifier(const struct FUWorksGameID& GameID);
	int STATIC_GetAppID(const struct FUWorksGameID& GameID);
	struct FUWorksGameID STATIC_ConstructFromParametersC(int AppID, int ModID);
	struct FUWorksGameID STATIC_ConstructFromParametersB(int AppID);
	struct FUWorksGameID STATIC_ConstructFromParametersA(const struct FString& Identifier);
};

// Class UWorksUtilities.UWorksLibraryLex
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UUWorksLibraryLex : public UUWorksLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksUtilities.UWorksLibraryLex");
		return ptr;
	}



	struct FUWorksUGCUpdateHandle STATIC_WriteUGCUpdateHandle(const struct FString& Value);
	struct FUWorksUGCQueryHandle STATIC_WriteUGCQueryHandle(const struct FString& Value);
	struct FUWorksUGCHandle STATIC_WriteUGCHandle(const struct FString& Value);
	struct FUWorksUGCFileWriteStreamHandle STATIC_WriteUGCFileWriteStreamHandle(const struct FString& Value);
	struct FUWorksTicketHandle STATIC_WriteTicketHandle(const struct FString& Value);
	struct FUWorksSteamUser STATIC_WriteSteamUser(const struct FString& Value);
	struct FUWorksSteamPipe STATIC_WriteSteamPipe(const struct FString& Value);
	struct FUWorksSteamLeaderboardEntries STATIC_WriteSteamLeaderboardEntries(const struct FString& Value);
	struct FUWorksSteamLeaderboard STATIC_WriteSteamLeaderboard(const struct FString& Value);
	struct FUWorksSteamInventoryResult STATIC_WriteSteamInventoryResult(const struct FString& Value);
	struct FUWorksScreenshotHandle STATIC_WriteScreenshotHandle(const struct FString& Value);
	struct FUWorksFriendsGroupID STATIC_WriteFriendsGroupID(const struct FString& Value);
	struct FUWorksControllerHandle STATIC_WriteControllerHandle(const struct FString& Value);
	struct FUWorksControllerDigitalActionHandle STATIC_WriteControllerDigitalActionHandle(const struct FString& Value);
	struct FUWorksControllerAnalogActionHandle STATIC_WriteControllerAnalogActionHandle(const struct FString& Value);
	struct FUWorksControllerActionSetHandle STATIC_WriteControllerActionSetHandle(const struct FString& Value);
	struct FString STATIC_ReadUGCUpdateHandle(const struct FUWorksUGCUpdateHandle& Value);
	struct FString STATIC_ReadUGCQueryHandle(const struct FUWorksUGCQueryHandle& Value);
	struct FString STATIC_ReadUGCHandle(const struct FUWorksUGCHandle& Value);
	struct FString STATIC_ReadUGCFileWriteStreamHandle(const struct FUWorksUGCFileWriteStreamHandle& Value);
	struct FString STATIC_ReadTicketHandle(const struct FUWorksTicketHandle& Value);
	struct FString STATIC_ReadSteamUser(const struct FUWorksSteamUser& Value);
	struct FString STATIC_ReadSteamPipe(const struct FUWorksSteamPipe& Value);
	struct FString STATIC_ReadSteamLeaderboardEntries(const struct FUWorksSteamLeaderboardEntries& Value);
	struct FString STATIC_ReadSteamLeaderboard(const struct FUWorksSteamLeaderboard& Value);
	struct FString STATIC_ReadSteamInventoryResult(const struct FUWorksSteamInventoryResult& Value);
	struct FString STATIC_ReadScreenshotHandle(const struct FUWorksScreenshotHandle& Value);
	struct FString STATIC_ReadFriendsGroupID(const struct FUWorksFriendsGroupID& Value);
	struct FString STATIC_ReadControllerHandle(const struct FUWorksControllerHandle& Value);
	struct FString STATIC_ReadControllerDigitalActionHandle(const struct FUWorksControllerDigitalActionHandle& Value);
	struct FString STATIC_ReadControllerAnalogActionHandle(const struct FUWorksControllerAnalogActionHandle& Value);
	struct FString STATIC_ReadControllerActionSetHandle(const struct FUWorksControllerActionSetHandle& Value);
};

// Class UWorksUtilities.UWorksLibrarySteamID
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UUWorksLibrarySteamID : public UUWorksLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksUtilities.UWorksLibrarySteamID");
		return ptr;
	}



	void STATIC_SetUniverse(struct FUWorksSteamID* SteamID, UWorksCore_EUWorksUniverse Universe);
	void STATIC_SetParametersC(struct FUWorksSteamID* SteamID, UWorksCore_EUWorksUniverse Universe, UWorksCore_EUWorksAccountType AccountType, const struct FString& accountId, const struct FString& AccountInstance);
	void STATIC_SetParametersB(struct FUWorksSteamID* SteamID, UWorksCore_EUWorksUniverse Universe, UWorksCore_EUWorksAccountType AccountType, const struct FString& accountId);
	void STATIC_SetParametersA(struct FUWorksSteamID* SteamID, UWorksCore_EUWorksUniverse Universe, UWorksCore_EUWorksAccountType AccountType, const struct FString& Identifier);
	void STATIC_SetIdentifier(struct FUWorksSteamID* SteamID, const struct FString& Identifier);
	void STATIC_SetAccountInstance(struct FUWorksSteamID* SteamID, const struct FString& AccountInstance);
	void STATIC_SetAccountID(struct FUWorksSteamID* SteamID, const struct FString& accountId);
	bool STATIC_IsValid(const struct FUWorksSteamID& SteamID);
	bool STATIC_IsPersistentGameServerAccount(const struct FUWorksSteamID& SteamID);
	bool STATIC_IsLobby(const struct FUWorksSteamID& SteamID);
	bool STATIC_IsIndividualAccount(const struct FUWorksSteamID& SteamID);
	bool STATIC_IsIdenticalWith(const struct FUWorksSteamID& A, const struct FUWorksSteamID& B);
	bool STATIC_IsGameServerAccount(const struct FUWorksSteamID& SteamID);
	bool STATIC_IsContentServerAccount(const struct FUWorksSteamID& SteamID);
	bool STATIC_IsConsoleUserAccount(const struct FUWorksSteamID& SteamID);
	bool STATIC_IsClanAccount(const struct FUWorksSteamID& SteamID);
	bool STATIC_IsChatAccount(const struct FUWorksSteamID& SteamID);
	bool STATIC_IsBlankAnonAccount(const struct FUWorksSteamID& SteamID);
	bool STATIC_IsAnonUserAccount(const struct FUWorksSteamID& SteamID);
	bool STATIC_IsAnonGameServerAccount(const struct FUWorksSteamID& SteamID);
	bool STATIC_IsAnonAccount(const struct FUWorksSteamID& SteamID);
	bool STATIC_HasNoIndividualInstance(const struct FUWorksSteamID& SteamID);
	UWorksCore_EUWorksUniverse STATIC_GetUniverse(const struct FUWorksSteamID& SteamID);
	struct FString STATIC_GetStaticAccountKey(const struct FUWorksSteamID& SteamID);
	struct FString STATIC_GetIdentifier(const struct FUWorksSteamID& SteamID);
	UWorksCore_EUWorksAccountType STATIC_GetAccountType(const struct FUWorksSteamID& SteamID);
	struct FString STATIC_GetAccountInstance(const struct FUWorksSteamID& SteamID);
	struct FString STATIC_GetAccountID(const struct FUWorksSteamID& SteamID);
	void STATIC_CreateBlankAnonUserLogon(struct FUWorksSteamID* SteamID, UWorksCore_EUWorksUniverse Universe);
	void STATIC_CreateBlankAnonLogon(struct FUWorksSteamID* SteamID, UWorksCore_EUWorksUniverse Universe);
	struct FUWorksSteamID STATIC_ConstructFromParametersC(UWorksCore_EUWorksUniverse Universe, UWorksCore_EUWorksAccountType AccountType, const struct FString& accountId, const struct FString& AccountInstance);
	struct FUWorksSteamID STATIC_ConstructFromParametersB(UWorksCore_EUWorksUniverse Universe, UWorksCore_EUWorksAccountType AccountType, const struct FString& accountId);
	struct FUWorksSteamID STATIC_ConstructFromParametersA(const struct FString& Identifier);
	void STATIC_ClearIndividualInstance(struct FUWorksSteamID* SteamID);
	void STATIC_Clear(struct FUWorksSteamID* SteamID);
};

// Class UWorksUtilities.UWorksLibraryTickets
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UUWorksLibraryTickets : public UUWorksLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksUtilities.UWorksLibraryTickets");
		return ptr;
	}



};

// Class UWorksUtilities.UWorksManager
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UUWorksManager : public UUWorks
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksUtilities.UWorksManager");
		return ptr;
	}



};

// Class UWorksUtilities.UWorksManagerNetwork
// 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
class UUWorksManagerNetwork : public UUWorksManager
{
public:
	unsigned char                                      UnknownData_YD0B[0x58];                                    // 0x0028(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    RefreshComplete;                                           // 0x0080(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksUtilities.UWorksManagerNetwork");
		return ptr;
	}



	void Refresh();
	struct FString GetNetDriverClassName();
	class UUWorksManagerNetwork* STATIC_GetManagerNetwork();
	void CreateSessionUWorks(const struct FName& SessionName, int NumPublicConnections, bool bIsLANMatch);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
