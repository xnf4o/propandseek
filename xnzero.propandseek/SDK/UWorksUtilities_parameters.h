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

// Function UWorksUtilities.UWorksLibraryConversions.GetCurrentProcessId
struct UUWorksLibraryConversions_GetCurrentProcessId_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksUtilities.UWorksLibraryConversions.ConvertStringToBytes
struct UUWorksLibraryConversions_ConvertStringToBytes_Params
{
	struct FString                                     Data;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<unsigned char>                              ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function UWorksUtilities.UWorksLibraryConversions.ConvertBytesToString
struct UUWorksLibraryConversions_ConvertBytesToString_Params
{
	TArray<unsigned char>                              Data;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksUtilities.UWorksLibraryGameID.SetIdentifier
struct UUWorksLibraryGameID_SetIdentifier_Params
{
	struct FUWorksGameID                               GameID;                                                    // 0x0000(0x0008)  (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     Identifier;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksUtilities.UWorksLibraryGameID.Reset
struct UUWorksLibraryGameID_Reset_Params
{
	struct FUWorksGameID                               GameID;                                                    // 0x0000(0x0008)  (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksUtilities.UWorksLibraryGameID.IsValid
struct UUWorksLibraryGameID_IsValid_Params
{
	struct FUWorksGameID                               GameID;                                                    // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksUtilities.UWorksLibraryGameID.IsSteamApp
struct UUWorksLibraryGameID_IsSteamApp_Params
{
	struct FUWorksGameID                               GameID;                                                    // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksUtilities.UWorksLibraryGameID.IsShortcut
struct UUWorksLibraryGameID_IsShortcut_Params
{
	struct FUWorksGameID                               GameID;                                                    // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksUtilities.UWorksLibraryGameID.IsP2PFile
struct UUWorksLibraryGameID_IsP2PFile_Params
{
	struct FUWorksGameID                               GameID;                                                    // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksUtilities.UWorksLibraryGameID.IsMod
struct UUWorksLibraryGameID_IsMod_Params
{
	struct FUWorksGameID                               GameID;                                                    // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksUtilities.UWorksLibraryGameID.IsIdenticalWith
struct UUWorksLibraryGameID_IsIdenticalWith_Params
{
	struct FUWorksGameID                               A;                                                         // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FUWorksGameID                               B;                                                         // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksUtilities.UWorksLibraryGameID.GetModID
struct UUWorksLibraryGameID_GetModID_Params
{
	struct FUWorksGameID                               GameID;                                                    // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksUtilities.UWorksLibraryGameID.GetIdentifier
struct UUWorksLibraryGameID_GetIdentifier_Params
{
	struct FUWorksGameID                               GameID;                                                    // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksUtilities.UWorksLibraryGameID.GetAppID
struct UUWorksLibraryGameID_GetAppID_Params
{
	struct FUWorksGameID                               GameID;                                                    // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksUtilities.UWorksLibraryGameID.ConstructFromParametersC
struct UUWorksLibraryGameID_ConstructFromParametersC_Params
{
	int                                                AppID;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ModID;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksGameID                               ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksUtilities.UWorksLibraryGameID.ConstructFromParametersB
struct UUWorksLibraryGameID_ConstructFromParametersB_Params
{
	int                                                AppID;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksGameID                               ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksUtilities.UWorksLibraryGameID.ConstructFromParametersA
struct UUWorksLibraryGameID_ConstructFromParametersA_Params
{
	struct FString                                     Identifier;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksGameID                               ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksUtilities.UWorksLibraryLex.WriteUGCUpdateHandle
struct UUWorksLibraryLex_WriteUGCUpdateHandle_Params
{
	struct FString                                     Value;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksUGCUpdateHandle                      ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksUtilities.UWorksLibraryLex.WriteUGCQueryHandle
struct UUWorksLibraryLex_WriteUGCQueryHandle_Params
{
	struct FString                                     Value;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksUGCQueryHandle                       ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksUtilities.UWorksLibraryLex.WriteUGCHandle
struct UUWorksLibraryLex_WriteUGCHandle_Params
{
	struct FString                                     Value;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksUGCHandle                            ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksUtilities.UWorksLibraryLex.WriteUGCFileWriteStreamHandle
struct UUWorksLibraryLex_WriteUGCFileWriteStreamHandle_Params
{
	struct FString                                     Value;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksUGCFileWriteStreamHandle             ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksUtilities.UWorksLibraryLex.WriteTicketHandle
struct UUWorksLibraryLex_WriteTicketHandle_Params
{
	struct FString                                     Value;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksTicketHandle                         ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksUtilities.UWorksLibraryLex.WriteSteamUser
struct UUWorksLibraryLex_WriteSteamUser_Params
{
	struct FString                                     Value;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamUser                            ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksUtilities.UWorksLibraryLex.WriteSteamPipe
struct UUWorksLibraryLex_WriteSteamPipe_Params
{
	struct FString                                     Value;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamPipe                            ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksUtilities.UWorksLibraryLex.WriteSteamLeaderboardEntries
struct UUWorksLibraryLex_WriteSteamLeaderboardEntries_Params
{
	struct FString                                     Value;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamLeaderboardEntries              ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksUtilities.UWorksLibraryLex.WriteSteamLeaderboard
struct UUWorksLibraryLex_WriteSteamLeaderboard_Params
{
	struct FString                                     Value;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamLeaderboard                     ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksUtilities.UWorksLibraryLex.WriteSteamInventoryResult
struct UUWorksLibraryLex_WriteSteamInventoryResult_Params
{
	struct FString                                     Value;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamInventoryResult                 ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksUtilities.UWorksLibraryLex.WriteScreenshotHandle
struct UUWorksLibraryLex_WriteScreenshotHandle_Params
{
	struct FString                                     Value;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksScreenshotHandle                     ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksUtilities.UWorksLibraryLex.WriteFriendsGroupID
struct UUWorksLibraryLex_WriteFriendsGroupID_Params
{
	struct FString                                     Value;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksFriendsGroupID                       ReturnValue;                                               // 0x0000(0x0002)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksUtilities.UWorksLibraryLex.WriteControllerHandle
struct UUWorksLibraryLex_WriteControllerHandle_Params
{
	struct FString                                     Value;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksControllerHandle                     ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksUtilities.UWorksLibraryLex.WriteControllerDigitalActionHandle
struct UUWorksLibraryLex_WriteControllerDigitalActionHandle_Params
{
	struct FString                                     Value;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksControllerDigitalActionHandle        ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksUtilities.UWorksLibraryLex.WriteControllerAnalogActionHandle
struct UUWorksLibraryLex_WriteControllerAnalogActionHandle_Params
{
	struct FString                                     Value;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksControllerAnalogActionHandle         ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksUtilities.UWorksLibraryLex.WriteControllerActionSetHandle
struct UUWorksLibraryLex_WriteControllerActionSetHandle_Params
{
	struct FString                                     Value;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksControllerActionSetHandle            ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksUtilities.UWorksLibraryLex.ReadUGCUpdateHandle
struct UUWorksLibraryLex_ReadUGCUpdateHandle_Params
{
	struct FUWorksUGCUpdateHandle                      Value;                                                     // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksUtilities.UWorksLibraryLex.ReadUGCQueryHandle
struct UUWorksLibraryLex_ReadUGCQueryHandle_Params
{
	struct FUWorksUGCQueryHandle                       Value;                                                     // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksUtilities.UWorksLibraryLex.ReadUGCHandle
struct UUWorksLibraryLex_ReadUGCHandle_Params
{
	struct FUWorksUGCHandle                            Value;                                                     // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksUtilities.UWorksLibraryLex.ReadUGCFileWriteStreamHandle
struct UUWorksLibraryLex_ReadUGCFileWriteStreamHandle_Params
{
	struct FUWorksUGCFileWriteStreamHandle             Value;                                                     // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksUtilities.UWorksLibraryLex.ReadTicketHandle
struct UUWorksLibraryLex_ReadTicketHandle_Params
{
	struct FUWorksTicketHandle                         Value;                                                     // 0x0000(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksUtilities.UWorksLibraryLex.ReadSteamUser
struct UUWorksLibraryLex_ReadSteamUser_Params
{
	struct FUWorksSteamUser                            Value;                                                     // 0x0000(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksUtilities.UWorksLibraryLex.ReadSteamPipe
struct UUWorksLibraryLex_ReadSteamPipe_Params
{
	struct FUWorksSteamPipe                            Value;                                                     // 0x0000(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksUtilities.UWorksLibraryLex.ReadSteamLeaderboardEntries
struct UUWorksLibraryLex_ReadSteamLeaderboardEntries_Params
{
	struct FUWorksSteamLeaderboardEntries              Value;                                                     // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksUtilities.UWorksLibraryLex.ReadSteamLeaderboard
struct UUWorksLibraryLex_ReadSteamLeaderboard_Params
{
	struct FUWorksSteamLeaderboard                     Value;                                                     // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksUtilities.UWorksLibraryLex.ReadSteamInventoryResult
struct UUWorksLibraryLex_ReadSteamInventoryResult_Params
{
	struct FUWorksSteamInventoryResult                 Value;                                                     // 0x0000(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksUtilities.UWorksLibraryLex.ReadScreenshotHandle
struct UUWorksLibraryLex_ReadScreenshotHandle_Params
{
	struct FUWorksScreenshotHandle                     Value;                                                     // 0x0000(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksUtilities.UWorksLibraryLex.ReadFriendsGroupID
struct UUWorksLibraryLex_ReadFriendsGroupID_Params
{
	struct FUWorksFriendsGroupID                       Value;                                                     // 0x0000(0x0002)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksUtilities.UWorksLibraryLex.ReadControllerHandle
struct UUWorksLibraryLex_ReadControllerHandle_Params
{
	struct FUWorksControllerHandle                     Value;                                                     // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksUtilities.UWorksLibraryLex.ReadControllerDigitalActionHandle
struct UUWorksLibraryLex_ReadControllerDigitalActionHandle_Params
{
	struct FUWorksControllerDigitalActionHandle        Value;                                                     // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksUtilities.UWorksLibraryLex.ReadControllerAnalogActionHandle
struct UUWorksLibraryLex_ReadControllerAnalogActionHandle_Params
{
	struct FUWorksControllerAnalogActionHandle         Value;                                                     // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksUtilities.UWorksLibraryLex.ReadControllerActionSetHandle
struct UUWorksLibraryLex_ReadControllerActionSetHandle_Params
{
	struct FUWorksControllerActionSetHandle            Value;                                                     // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksUtilities.UWorksLibrarySteamID.SetUniverse
struct UUWorksLibrarySteamID_SetUniverse_Params
{
	struct FUWorksSteamID                              SteamID;                                                   // 0x0000(0x0008)  (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksUniverse                         Universe;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksUtilities.UWorksLibrarySteamID.SetParametersC
struct UUWorksLibrarySteamID_SetParametersC_Params
{
	struct FUWorksSteamID                              SteamID;                                                   // 0x0000(0x0008)  (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksUniverse                         Universe;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksAccountType                      AccountType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     accountId;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     AccountInstance;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksUtilities.UWorksLibrarySteamID.SetParametersB
struct UUWorksLibrarySteamID_SetParametersB_Params
{
	struct FUWorksSteamID                              SteamID;                                                   // 0x0000(0x0008)  (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksUniverse                         Universe;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksAccountType                      AccountType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     accountId;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksUtilities.UWorksLibrarySteamID.SetParametersA
struct UUWorksLibrarySteamID_SetParametersA_Params
{
	struct FUWorksSteamID                              SteamID;                                                   // 0x0000(0x0008)  (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksUniverse                         Universe;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksAccountType                      AccountType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Identifier;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksUtilities.UWorksLibrarySteamID.SetIdentifier
struct UUWorksLibrarySteamID_SetIdentifier_Params
{
	struct FUWorksSteamID                              SteamID;                                                   // 0x0000(0x0008)  (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     Identifier;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksUtilities.UWorksLibrarySteamID.SetAccountInstance
struct UUWorksLibrarySteamID_SetAccountInstance_Params
{
	struct FUWorksSteamID                              SteamID;                                                   // 0x0000(0x0008)  (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     AccountInstance;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksUtilities.UWorksLibrarySteamID.SetAccountID
struct UUWorksLibrarySteamID_SetAccountID_Params
{
	struct FUWorksSteamID                              SteamID;                                                   // 0x0000(0x0008)  (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     accountId;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksUtilities.UWorksLibrarySteamID.IsValid
struct UUWorksLibrarySteamID_IsValid_Params
{
	struct FUWorksSteamID                              SteamID;                                                   // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksUtilities.UWorksLibrarySteamID.IsPersistentGameServerAccount
struct UUWorksLibrarySteamID_IsPersistentGameServerAccount_Params
{
	struct FUWorksSteamID                              SteamID;                                                   // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksUtilities.UWorksLibrarySteamID.IsLobby
struct UUWorksLibrarySteamID_IsLobby_Params
{
	struct FUWorksSteamID                              SteamID;                                                   // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksUtilities.UWorksLibrarySteamID.IsIndividualAccount
struct UUWorksLibrarySteamID_IsIndividualAccount_Params
{
	struct FUWorksSteamID                              SteamID;                                                   // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksUtilities.UWorksLibrarySteamID.IsIdenticalWith
struct UUWorksLibrarySteamID_IsIdenticalWith_Params
{
	struct FUWorksSteamID                              A;                                                         // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              B;                                                         // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksUtilities.UWorksLibrarySteamID.IsGameServerAccount
struct UUWorksLibrarySteamID_IsGameServerAccount_Params
{
	struct FUWorksSteamID                              SteamID;                                                   // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksUtilities.UWorksLibrarySteamID.IsContentServerAccount
struct UUWorksLibrarySteamID_IsContentServerAccount_Params
{
	struct FUWorksSteamID                              SteamID;                                                   // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksUtilities.UWorksLibrarySteamID.IsConsoleUserAccount
struct UUWorksLibrarySteamID_IsConsoleUserAccount_Params
{
	struct FUWorksSteamID                              SteamID;                                                   // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksUtilities.UWorksLibrarySteamID.IsClanAccount
struct UUWorksLibrarySteamID_IsClanAccount_Params
{
	struct FUWorksSteamID                              SteamID;                                                   // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksUtilities.UWorksLibrarySteamID.IsChatAccount
struct UUWorksLibrarySteamID_IsChatAccount_Params
{
	struct FUWorksSteamID                              SteamID;                                                   // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksUtilities.UWorksLibrarySteamID.IsBlankAnonAccount
struct UUWorksLibrarySteamID_IsBlankAnonAccount_Params
{
	struct FUWorksSteamID                              SteamID;                                                   // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksUtilities.UWorksLibrarySteamID.IsAnonUserAccount
struct UUWorksLibrarySteamID_IsAnonUserAccount_Params
{
	struct FUWorksSteamID                              SteamID;                                                   // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksUtilities.UWorksLibrarySteamID.IsAnonGameServerAccount
struct UUWorksLibrarySteamID_IsAnonGameServerAccount_Params
{
	struct FUWorksSteamID                              SteamID;                                                   // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksUtilities.UWorksLibrarySteamID.IsAnonAccount
struct UUWorksLibrarySteamID_IsAnonAccount_Params
{
	struct FUWorksSteamID                              SteamID;                                                   // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksUtilities.UWorksLibrarySteamID.HasNoIndividualInstance
struct UUWorksLibrarySteamID_HasNoIndividualInstance_Params
{
	struct FUWorksSteamID                              SteamID;                                                   // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksUtilities.UWorksLibrarySteamID.GetUniverse
struct UUWorksLibrarySteamID_GetUniverse_Params
{
	struct FUWorksSteamID                              SteamID;                                                   // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksUniverse                         ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksUtilities.UWorksLibrarySteamID.GetStaticAccountKey
struct UUWorksLibrarySteamID_GetStaticAccountKey_Params
{
	struct FUWorksSteamID                              SteamID;                                                   // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksUtilities.UWorksLibrarySteamID.GetIdentifier
struct UUWorksLibrarySteamID_GetIdentifier_Params
{
	struct FUWorksSteamID                              SteamID;                                                   // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksUtilities.UWorksLibrarySteamID.GetAccountType
struct UUWorksLibrarySteamID_GetAccountType_Params
{
	struct FUWorksSteamID                              SteamID;                                                   // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksAccountType                      ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksUtilities.UWorksLibrarySteamID.GetAccountInstance
struct UUWorksLibrarySteamID_GetAccountInstance_Params
{
	struct FUWorksSteamID                              SteamID;                                                   // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksUtilities.UWorksLibrarySteamID.GetAccountID
struct UUWorksLibrarySteamID_GetAccountID_Params
{
	struct FUWorksSteamID                              SteamID;                                                   // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksUtilities.UWorksLibrarySteamID.CreateBlankAnonUserLogon
struct UUWorksLibrarySteamID_CreateBlankAnonUserLogon_Params
{
	struct FUWorksSteamID                              SteamID;                                                   // 0x0000(0x0008)  (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksUniverse                         Universe;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksUtilities.UWorksLibrarySteamID.CreateBlankAnonLogon
struct UUWorksLibrarySteamID_CreateBlankAnonLogon_Params
{
	struct FUWorksSteamID                              SteamID;                                                   // 0x0000(0x0008)  (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksUniverse                         Universe;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksUtilities.UWorksLibrarySteamID.ConstructFromParametersC
struct UUWorksLibrarySteamID_ConstructFromParametersC_Params
{
	UWorksCore_EUWorksUniverse                         Universe;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksAccountType                      AccountType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     accountId;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     AccountInstance;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksUtilities.UWorksLibrarySteamID.ConstructFromParametersB
struct UUWorksLibrarySteamID_ConstructFromParametersB_Params
{
	UWorksCore_EUWorksUniverse                         Universe;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksAccountType                      AccountType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     accountId;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksUtilities.UWorksLibrarySteamID.ConstructFromParametersA
struct UUWorksLibrarySteamID_ConstructFromParametersA_Params
{
	struct FString                                     Identifier;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksUtilities.UWorksLibrarySteamID.ClearIndividualInstance
struct UUWorksLibrarySteamID_ClearIndividualInstance_Params
{
	struct FUWorksSteamID                              SteamID;                                                   // 0x0000(0x0008)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksUtilities.UWorksLibrarySteamID.Clear
struct UUWorksLibrarySteamID_Clear_Params
{
	struct FUWorksSteamID                              SteamID;                                                   // 0x0000(0x0008)  (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksUtilities.UWorksManagerNetwork.Refresh
struct UUWorksManagerNetwork_Refresh_Params
{
};

// Function UWorksUtilities.UWorksManagerNetwork.GetNetDriverClassName
struct UUWorksManagerNetwork_GetNetDriverClassName_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksUtilities.UWorksManagerNetwork.GetManagerNetwork
struct UUWorksManagerNetwork_GetManagerNetwork_Params
{
	class UUWorksManagerNetwork*                       ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksUtilities.UWorksManagerNetwork.CreateSessionUWorks
struct UUWorksManagerNetwork_CreateSessionUWorks_Params
{
	struct FName                                       SessionName;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumPublicConnections;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsLANMatch;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
