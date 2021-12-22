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

// Function UWorksCore.UWorksInterfaceCoreAppList.GetNumInstalledApps
struct UUWorksInterfaceCoreAppList_GetNumInstalledApps_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreAppList.GetInstalledApps
struct UUWorksInterfaceCoreAppList_GetInstalledApps_Params
{
	TArray<int>                                        AppIDs;                                                    // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                MaxAppIDs;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreAppList.GetAppName
struct UUWorksInterfaceCoreAppList_GetAppName_Params
{
	int                                                AppID;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Name;                                                      // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NameMaxLength;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreAppList.GetAppList
struct UUWorksInterfaceCoreAppList_GetAppList_Params
{
	class UUWorksInterfaceCoreAppList*                 ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreAppList.GetAppInstallDir
struct UUWorksInterfaceCoreAppList_GetAppInstallDir_Params
{
	int                                                AppID;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Directory;                                                 // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DirectoryMaxLength;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreAppList.GetAppBuildId
struct UUWorksInterfaceCoreAppList_GetAppBuildId_Params
{
	int                                                AppID;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreApps.UninstallDLC
struct UUWorksInterfaceCoreApps_UninstallDLC_Params
{
	int                                                AppID;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreApps.MarkContentCorrupt
struct UUWorksInterfaceCoreApps_MarkContentCorrupt_Params
{
	bool                                               bMissingFilesOnly;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreApps.InstallDLC
struct UUWorksInterfaceCoreApps_InstallDLC_Params
{
	int                                                AppID;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreApps.GetLaunchQueryParam
struct UUWorksInterfaceCoreApps_GetLaunchQueryParam_Params
{
	struct FString                                     Key;                                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreApps.GetInstalledDepots
struct UUWorksInterfaceCoreApps_GetInstalledDepots_Params
{
	int                                                AppID;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int>                                        Depots;                                                    // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                MaxDepots;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreApps.GetFileDetailsMinimal
struct UUWorksInterfaceCoreApps_GetFileDetailsMinimal_Params
{
	struct FScriptDelegate                             Completed;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     Filename;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreApps.GetFileDetails
struct UUWorksInterfaceCoreApps_GetFileDetails_Params
{
	class UUWorksRequestCoreGetFileDetails*            ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreApps.GetEarliestPurchaseUnixTime
struct UUWorksInterfaceCoreApps_GetEarliestPurchaseUnixTime_Params
{
	int                                                AppID;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreApps.GetDlcDownloadProgress
struct UUWorksInterfaceCoreApps_GetDlcDownloadProgress_Params
{
	int                                                AppID;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BytesDownloaded;                                           // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BytesTotal;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreApps.GetDLCCount
struct UUWorksInterfaceCoreApps_GetDLCCount_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreApps.GetCurrentGameLanguage
struct UUWorksInterfaceCoreApps_GetCurrentGameLanguage_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreApps.GetCurrentBetaName
struct UUWorksInterfaceCoreApps_GetCurrentBetaName_Params
{
	struct FString                                     Name;                                                      // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NameMaxLength;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreApps.GetAvailableGameLanguages
struct UUWorksInterfaceCoreApps_GetAvailableGameLanguages_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreApps.GetApps
struct UUWorksInterfaceCoreApps_GetApps_Params
{
	class UUWorksInterfaceCoreApps*                    ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreApps.GetAppOwner
struct UUWorksInterfaceCoreApps_GetAppOwner_Params
{
	struct FUWorksSteamID                              ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreApps.GetAppInstallDir
struct UUWorksInterfaceCoreApps_GetAppInstallDir_Params
{
	int                                                AppID;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Path;                                                      // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PathMaxLength;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreApps.GetAppBuildId
struct UUWorksInterfaceCoreApps_GetAppBuildId_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreApps.BIsVACBanned
struct UUWorksInterfaceCoreApps_BIsVACBanned_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreApps.BIsSubscribedFromFreeWeekend
struct UUWorksInterfaceCoreApps_BIsSubscribedFromFreeWeekend_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreApps.BIsSubscribedApp
struct UUWorksInterfaceCoreApps_BIsSubscribedApp_Params
{
	int                                                AppID;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreApps.BIsSubscribed
struct UUWorksInterfaceCoreApps_BIsSubscribed_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreApps.BIsLowViolence
struct UUWorksInterfaceCoreApps_BIsLowViolence_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreApps.BIsDlcInstalled
struct UUWorksInterfaceCoreApps_BIsDlcInstalled_Params
{
	int                                                AppID;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreApps.BIsCybercafe
struct UUWorksInterfaceCoreApps_BIsCybercafe_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreApps.BIsAppInstalled
struct UUWorksInterfaceCoreApps_BIsAppInstalled_Params
{
	int                                                AppID;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreApps.BGetDLCDataByIndex
struct UUWorksInterfaceCoreApps_BGetDLCDataByIndex_Params
{
	int                                                DLC;                                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAvailable;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Name;                                                      // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NameMaxLength;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreController.TriggerVibration
struct UUWorksInterfaceCoreController_TriggerVibration_Params
{
	struct FUWorksControllerHandle                     ControllerHandle;                                          // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                LeftSpeed;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RightSpeed;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreController.TriggerRepeatedHapticPulse
struct UUWorksInterfaceCoreController_TriggerRepeatedHapticPulse_Params
{
	struct FUWorksControllerHandle                     ControllerHandle;                                          // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksSteamControllerPad               TargetPad;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DurationMicroSec;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OffMicroSec;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Repeat;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Flags;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreController.TriggerHapticPulse
struct UUWorksInterfaceCoreController_TriggerHapticPulse_Params
{
	struct FUWorksControllerHandle                     ControllerHandle;                                          // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksSteamControllerPad               TargetPad;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DurationMicroSec;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreController.StopAnalogActionMomentum
struct UUWorksInterfaceCoreController_StopAnalogActionMomentum_Params
{
	struct FUWorksControllerHandle                     ControllerHandle;                                          // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FUWorksControllerAnalogActionHandle         action;                                                    // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreController.Shutdown
struct UUWorksInterfaceCoreController_Shutdown_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreController.ShowBindingPanel
struct UUWorksInterfaceCoreController_ShowBindingPanel_Params
{
	struct FUWorksControllerHandle                     ControllerHandle;                                          // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreController.SetLEDColor
struct UUWorksInterfaceCoreController_SetLEDColor_Params
{
	struct FUWorksControllerHandle                     ControllerHandle;                                          // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      ColorR;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      ColorG;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      ColorB;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<UWorksCore_EUWorksSteamControllerLEDFlag>   Flags;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreController.RunFrame
struct UUWorksInterfaceCoreController_RunFrame_Params
{
};

// Function UWorksCore.UWorksInterfaceCoreController.Init
struct UUWorksInterfaceCoreController_Init_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreController.GetStringForActionOrigin
struct UUWorksInterfaceCoreController_GetStringForActionOrigin_Params
{
	UWorksCore_EUWorksControllerActionOrigin           Origin;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreController.GetMotionData
struct UUWorksInterfaceCoreController_GetMotionData_Params
{
	struct FUWorksControllerHandle                     ControllerHandle;                                          // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FUWorksControllerMotionData                 ReturnValue;                                               // 0x0000(0x0028)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreController.GetGlyphForActionOrigin
struct UUWorksInterfaceCoreController_GetGlyphForActionOrigin_Params
{
	UWorksCore_EUWorksControllerActionOrigin           Origin;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreController.GetGamepadIndexForController
struct UUWorksInterfaceCoreController_GetGamepadIndexForController_Params
{
	struct FUWorksControllerHandle                     ControllerHandle;                                          // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreController.GetDigitalActionOrigins
struct UUWorksInterfaceCoreController_GetDigitalActionOrigins_Params
{
	struct FUWorksControllerHandle                     ControllerHandle;                                          // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FUWorksControllerActionSetHandle            ActionSetHandle;                                           // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FUWorksControllerDigitalActionHandle        DigitalActionHandle;                                       // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	TArray<UWorksCore_EUWorksControllerActionOrigin>   OriginsOut;                                                // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreController.GetDigitalActionHandle
struct UUWorksInterfaceCoreController_GetDigitalActionHandle_Params
{
	struct FString                                     ActionName;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksControllerDigitalActionHandle        ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreController.GetDigitalActionData
struct UUWorksInterfaceCoreController_GetDigitalActionData_Params
{
	struct FUWorksControllerHandle                     ControllerHandle;                                          // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FUWorksControllerDigitalActionHandle        DigitalActionHandle;                                       // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FUWorksControllerDigitalActionData          ReturnValue;                                               // 0x0000(0x0002)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreController.GetCurrentActionSet
struct UUWorksInterfaceCoreController_GetCurrentActionSet_Params
{
	struct FUWorksControllerHandle                     ControllerHandle;                                          // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FUWorksControllerActionSetHandle            ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreController.GetControllerForGamepadIndex
struct UUWorksInterfaceCoreController_GetControllerForGamepadIndex_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksControllerHandle                     ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreController.GetController
struct UUWorksInterfaceCoreController_GetController_Params
{
	class UUWorksInterfaceCoreController*              ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreController.GetConnectedControllers
struct UUWorksInterfaceCoreController_GetConnectedControllers_Params
{
	TArray<struct FUWorksControllerHandle>             HandlesOut;                                                // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreController.GetAnalogActionOrigins
struct UUWorksInterfaceCoreController_GetAnalogActionOrigins_Params
{
	struct FUWorksControllerHandle                     ControllerHandle;                                          // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FUWorksControllerActionSetHandle            ActionSetHandle;                                           // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FUWorksControllerAnalogActionHandle         AnalogActionHandle;                                        // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	TArray<UWorksCore_EUWorksControllerActionOrigin>   OriginsOut;                                                // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreController.GetAnalogActionHandle
struct UUWorksInterfaceCoreController_GetAnalogActionHandle_Params
{
	struct FString                                     ActionName;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksControllerAnalogActionHandle         ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreController.GetAnalogActionData
struct UUWorksInterfaceCoreController_GetAnalogActionData_Params
{
	struct FUWorksControllerHandle                     ControllerHandle;                                          // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FUWorksControllerAnalogActionHandle         AnalogActionHandle;                                        // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FUWorksControllerAnalogActionData           ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreController.GetActionSetHandle
struct UUWorksInterfaceCoreController_GetActionSetHandle_Params
{
	struct FString                                     ActionSetName;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksControllerActionSetHandle            ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreController.ActivateActionSet
struct UUWorksInterfaceCoreController_ActivateActionSet_Params
{
	struct FUWorksControllerHandle                     ControllerHandle;                                          // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FUWorksControllerActionSetHandle            ActionSetHandle;                                           // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreFriends.SetRichPresence
struct UUWorksInterfaceCoreFriends_SetRichPresence_Params
{
	struct FString                                     Key;                                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Value;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreFriends.SetPlayedWith
struct UUWorksInterfaceCoreFriends_SetPlayedWith_Params
{
	struct FUWorksSteamID                              SteamIDUserPlayedWith;                                     // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreFriends.SetPersonaNameMinimal
struct UUWorksInterfaceCoreFriends_SetPersonaNameMinimal_Params
{
	struct FScriptDelegate                             Completed;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     Name;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreFriends.SetPersonaName
struct UUWorksInterfaceCoreFriends_SetPersonaName_Params
{
	class UUWorksRequestCoreSetPersonaName*            ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreFriends.SetListenForFriendsMessages
struct UUWorksInterfaceCoreFriends_SetListenForFriendsMessages_Params
{
	bool                                               bInterceptEnabled;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreFriends.SetInGameVoiceSpeaking
struct UUWorksInterfaceCoreFriends_SetInGameVoiceSpeaking_Params
{
	struct FUWorksSteamID                              SteamIDUser;                                               // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bSpeaking;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreFriends.SendClanChatMessage
struct UUWorksInterfaceCoreFriends_SendClanChatMessage_Params
{
	struct FUWorksSteamID                              SteamIDClanChat;                                           // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     Text;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreFriends.RequestUserInformation
struct UUWorksInterfaceCoreFriends_RequestUserInformation_Params
{
	struct FUWorksSteamID                              SteamIDUser;                                               // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bRequireNameOnly;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreFriends.RequestFriendRichPresence
struct UUWorksInterfaceCoreFriends_RequestFriendRichPresence_Params
{
	struct FUWorksSteamID                              SteamIDFriend;                                             // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreFriends.RequestClanOfficerListMinimal
struct UUWorksInterfaceCoreFriends_RequestClanOfficerListMinimal_Params
{
	struct FScriptDelegate                             Completed;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreFriends.RequestClanOfficerList
struct UUWorksInterfaceCoreFriends_RequestClanOfficerList_Params
{
	class UUWorksRequestCoreRequestClanOfficerList*    ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreFriends.ReplyToFriendMessage
struct UUWorksInterfaceCoreFriends_ReplyToFriendMessage_Params
{
	struct FUWorksSteamID                              SteamIDFriend;                                             // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     MessageToSend;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreFriends.OpenClanChatWindowInSteam
struct UUWorksInterfaceCoreFriends_OpenClanChatWindowInSteam_Params
{
	struct FUWorksSteamID                              SteamIDClanChat;                                           // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreFriends.LeaveClanChatRoom
struct UUWorksInterfaceCoreFriends_LeaveClanChatRoom_Params
{
	struct FUWorksSteamID                              SteamIDClan;                                               // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreFriends.JoinClanChatRoomMinimal
struct UUWorksInterfaceCoreFriends_JoinClanChatRoomMinimal_Params
{
	struct FScriptDelegate                             Completed;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamIDClan;                                               // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreFriends.JoinClanChatRoom
struct UUWorksInterfaceCoreFriends_JoinClanChatRoom_Params
{
	class UUWorksRequestCoreJoinClanChatRoom*          ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreFriends.IsUserInSource
struct UUWorksInterfaceCoreFriends_IsUserInSource_Params
{
	struct FUWorksSteamID                              SteamIDUser;                                               // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamIDSource;                                             // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreFriends.IsFollowingMinimal
struct UUWorksInterfaceCoreFriends_IsFollowingMinimal_Params
{
	struct FScriptDelegate                             Completed;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreFriends.IsFollowing
struct UUWorksInterfaceCoreFriends_IsFollowing_Params
{
	class UUWorksRequestCoreIsFollowing*               ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreFriends.IsClanChatWindowOpenInSteam
struct UUWorksInterfaceCoreFriends_IsClanChatWindowOpenInSteam_Params
{
	struct FUWorksSteamID                              SteamIDClanChat;                                           // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreFriends.IsClanChatAdmin
struct UUWorksInterfaceCoreFriends_IsClanChatAdmin_Params
{
	struct FUWorksSteamID                              SteamIDClanChat;                                           // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamIDUser;                                               // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreFriends.InviteUserToGame
struct UUWorksInterfaceCoreFriends_InviteUserToGame_Params
{
	struct FUWorksSteamID                              SteamIDFriend;                                             // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     ConnectString;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreFriends.HasFriend
struct UUWorksInterfaceCoreFriends_HasFriend_Params
{
	struct FUWorksSteamID                              SteamIDFriend;                                             // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	TArray<UWorksCore_EUWorksFriendFlags>              FriendFlags;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreFriends.GetUserRestrictions
struct UUWorksInterfaceCoreFriends_GetUserRestrictions_Params
{
	TArray<UWorksCore_EUWorksUserRestriction>          ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreFriends.GetSmallFriendAvatar
struct UUWorksInterfaceCoreFriends_GetSmallFriendAvatar_Params
{
	struct FUWorksSteamID                              SteamIDFriend;                                             // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UTexture2D*                                  ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreFriends.GetPlayerNickname
struct UUWorksInterfaceCoreFriends_GetPlayerNickname_Params
{
	struct FUWorksSteamID                              SteamIDPlayer;                                             // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreFriends.GetPersonaState
struct UUWorksInterfaceCoreFriends_GetPersonaState_Params
{
	UWorksCore_EUWorksPersonaState                     ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreFriends.GetPersonaName
struct UUWorksInterfaceCoreFriends_GetPersonaName_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreFriends.GetMediumFriendAvatar
struct UUWorksInterfaceCoreFriends_GetMediumFriendAvatar_Params
{
	struct FUWorksSteamID                              SteamIDFriend;                                             // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UTexture2D*                                  ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreFriends.GetLargeFriendAvatar
struct UUWorksInterfaceCoreFriends_GetLargeFriendAvatar_Params
{
	struct FUWorksSteamID                              SteamIDFriend;                                             // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UTexture2D*                                  ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendSteamLevel
struct UUWorksInterfaceCoreFriends_GetFriendSteamLevel_Params
{
	struct FUWorksSteamID                              SteamIDFriend;                                             // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendsGroupName
struct UUWorksInterfaceCoreFriends_GetFriendsGroupName_Params
{
	struct FUWorksFriendsGroupID                       FriendsGroupID;                                            // 0x0000(0x0002)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendsGroupMembersList
struct UUWorksInterfaceCoreFriends_GetFriendsGroupMembersList_Params
{
	struct FUWorksFriendsGroupID                       FriendsGroupID;                                            // 0x0000(0x0002)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FUWorksSteamID>                      SteamIDMembers;                                            // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                MembersCount;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendsGroupMembersCount
struct UUWorksInterfaceCoreFriends_GetFriendsGroupMembersCount_Params
{
	struct FUWorksFriendsGroupID                       FriendsGroupID;                                            // 0x0000(0x0002)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendsGroupIDByIndex
struct UUWorksInterfaceCoreFriends_GetFriendsGroupIDByIndex_Params
{
	int                                                FriendGroup;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksFriendsGroupID                       ReturnValue;                                               // 0x0000(0x0002)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendsGroupCount
struct UUWorksInterfaceCoreFriends_GetFriendsGroupCount_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreFriends.GetFriends
struct UUWorksInterfaceCoreFriends_GetFriends_Params
{
	class UUWorksInterfaceCoreFriends*                 ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendRichPresenceKeyCount
struct UUWorksInterfaceCoreFriends_GetFriendRichPresenceKeyCount_Params
{
	struct FUWorksSteamID                              SteamIDFriend;                                             // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendRichPresenceKeyByIndex
struct UUWorksInterfaceCoreFriends_GetFriendRichPresenceKeyByIndex_Params
{
	struct FUWorksSteamID                              SteamIDFriend;                                             // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                Key;                                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendRichPresence
struct UUWorksInterfaceCoreFriends_GetFriendRichPresence_Params
{
	struct FUWorksSteamID                              SteamIDFriend;                                             // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     Key;                                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendRelationship
struct UUWorksInterfaceCoreFriends_GetFriendRelationship_Params
{
	struct FUWorksSteamID                              SteamIDFriend;                                             // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksFriendRelationship               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendPersonaState
struct UUWorksInterfaceCoreFriends_GetFriendPersonaState_Params
{
	struct FUWorksSteamID                              SteamIDFriend;                                             // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksPersonaState                     ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendPersonaNameHistory
struct UUWorksInterfaceCoreFriends_GetFriendPersonaNameHistory_Params
{
	struct FUWorksSteamID                              SteamIDFriend;                                             // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                PersonaName;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendPersonaName
struct UUWorksInterfaceCoreFriends_GetFriendPersonaName_Params
{
	struct FUWorksSteamID                              SteamIDFriend;                                             // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendMessage
struct UUWorksInterfaceCoreFriends_GetFriendMessage_Params
{
	struct FUWorksSteamID                              SteamIDFriend;                                             // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                MessageID;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Text;                                                      // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TextMaxLength;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksChatEntryType                    ChatEntryType;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendGamePlayed
struct UUWorksInterfaceCoreFriends_GetFriendGamePlayed_Params
{
	struct FUWorksSteamID                              SteamIDFriend;                                             // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FUWorksGameID                               GameID;                                                    // 0x0000(0x0008)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     GameIP;                                                    // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ConnectionPort;                                            // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                QueryPort;                                                 // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamIDLobby;                                              // 0x0000(0x0008)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendFromSourceByIndex
struct UUWorksInterfaceCoreFriends_GetFriendFromSourceByIndex_Params
{
	struct FUWorksSteamID                              SteamIDSource;                                             // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                Friend;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendCountFromSource
struct UUWorksInterfaceCoreFriends_GetFriendCountFromSource_Params
{
	struct FUWorksSteamID                              SteamIDSource;                                             // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendCount
struct UUWorksInterfaceCoreFriends_GetFriendCount_Params
{
	TArray<UWorksCore_EUWorksFriendFlags>              FriendFlags;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendCoplayTime
struct UUWorksInterfaceCoreFriends_GetFriendCoplayTime_Params
{
	struct FUWorksSteamID                              SteamIDFriend;                                             // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendCoplayGame
struct UUWorksInterfaceCoreFriends_GetFriendCoplayGame_Params
{
	struct FUWorksSteamID                              SteamIDFriend;                                             // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendByIndex
struct UUWorksInterfaceCoreFriends_GetFriendByIndex_Params
{
	int                                                Friend;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<UWorksCore_EUWorksFriendFlags>              FriendFlags;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreFriends.GetFollowerCountMinimal
struct UUWorksInterfaceCoreFriends_GetFollowerCountMinimal_Params
{
	struct FScriptDelegate                             Completed;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreFriends.GetFollowerCount
struct UUWorksInterfaceCoreFriends_GetFollowerCount_Params
{
	class UUWorksRequestCoreGetFollowerCount*          ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreFriends.GetCoplayFriendCount
struct UUWorksInterfaceCoreFriends_GetCoplayFriendCount_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreFriends.GetCoplayFriend
struct UUWorksInterfaceCoreFriends_GetCoplayFriend_Params
{
	int                                                CoplayFriend;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreFriends.GetClanTag
struct UUWorksInterfaceCoreFriends_GetClanTag_Params
{
	struct FUWorksSteamID                              SteamIDClan;                                               // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreFriends.GetClanOwner
struct UUWorksInterfaceCoreFriends_GetClanOwner_Params
{
	struct FUWorksSteamID                              SteamIDClan;                                               // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreFriends.GetClanOfficerCount
struct UUWorksInterfaceCoreFriends_GetClanOfficerCount_Params
{
	struct FUWorksSteamID                              SteamIDClan;                                               // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreFriends.GetClanOfficerByIndex
struct UUWorksInterfaceCoreFriends_GetClanOfficerByIndex_Params
{
	struct FUWorksSteamID                              SteamIDClan;                                               // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                Officer;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreFriends.GetClanName
struct UUWorksInterfaceCoreFriends_GetClanName_Params
{
	struct FUWorksSteamID                              SteamIDClan;                                               // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreFriends.GetClanCount
struct UUWorksInterfaceCoreFriends_GetClanCount_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreFriends.GetClanChatMessage
struct UUWorksInterfaceCoreFriends_GetClanChatMessage_Params
{
	struct FUWorksSteamID                              SteamIDClanChat;                                           // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                MessageID;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Text;                                                      // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TextMax;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksChatEntryType                    ChatEntryType;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamIDChatter;                                            // 0x0000(0x0008)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreFriends.GetClanChatMemberCount
struct UUWorksInterfaceCoreFriends_GetClanChatMemberCount_Params
{
	struct FUWorksSteamID                              SteamIDClan;                                               // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreFriends.GetClanByIndex
struct UUWorksInterfaceCoreFriends_GetClanByIndex_Params
{
	int                                                Clan;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreFriends.GetClanActivityCounts
struct UUWorksInterfaceCoreFriends_GetClanActivityCounts_Params
{
	struct FUWorksSteamID                              SteamIDClan;                                               // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                Online;                                                    // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InGame;                                                    // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Chatting;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreFriends.GetChatMemberByIndex
struct UUWorksInterfaceCoreFriends_GetChatMemberByIndex_Params
{
	struct FUWorksSteamID                              SteamIDClan;                                               // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                user;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreFriends.EnumerateFollowingListMinimal
struct UUWorksInterfaceCoreFriends_EnumerateFollowingListMinimal_Params
{
	struct FScriptDelegate                             Completed;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                StartIndex;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreFriends.EnumerateFollowingList
struct UUWorksInterfaceCoreFriends_EnumerateFollowingList_Params
{
	class UUWorksRequestCoreEnumerateFollowingList*    ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreFriends.DownloadClanActivityCountsMinimal
struct UUWorksInterfaceCoreFriends_DownloadClanActivityCountsMinimal_Params
{
	struct FScriptDelegate                             Completed;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FUWorksSteamID>                      SteamIDClans;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreFriends.DownloadClanActivityCounts
struct UUWorksInterfaceCoreFriends_DownloadClanActivityCounts_Params
{
	class UUWorksRequestCoreDownloadClanActivityCounts* ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreFriends.CloseClanChatWindowInSteam
struct UUWorksInterfaceCoreFriends_CloseClanChatWindowInSteam_Params
{
	struct FUWorksSteamID                              SteamIDClanChat;                                           // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreFriends.ClearRichPresence
struct UUWorksInterfaceCoreFriends_ClearRichPresence_Params
{
};

// Function UWorksCore.UWorksInterfaceCoreFriends.ActivateGameOverlayToWebPage
struct UUWorksInterfaceCoreFriends_ActivateGameOverlayToWebPage_Params
{
	struct FString                                     URL;                                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreFriends.ActivateGameOverlayToUser
struct UUWorksInterfaceCoreFriends_ActivateGameOverlayToUser_Params
{
	UWorksCore_EUWorksOverlaySpecific                  Dialog;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreFriends.ActivateGameOverlayToStore
struct UUWorksInterfaceCoreFriends_ActivateGameOverlayToStore_Params
{
	int                                                AppID;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksOverlayToStoreFlag               Flag;                                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreFriends.ActivateGameOverlayInviteDialog
struct UUWorksInterfaceCoreFriends_ActivateGameOverlayInviteDialog_Params
{
	struct FUWorksSteamID                              SteamIDLobby;                                              // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreFriends.ActivateGameOverlay
struct UUWorksInterfaceCoreFriends_ActivateGameOverlay_Params
{
	UWorksCore_EUWorksOverlayGeneric                   Dialog;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreGameServer.WasRestartRequested
struct UUWorksInterfaceCoreGameServer_WasRestartRequested_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreGameServer.UserHasLicenseForApp
struct UUWorksInterfaceCoreGameServer_UserHasLicenseForApp_Params
{
	struct FUWorksSteamID                              SteamID;                                                   // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksUserHasLicenseForAppResult       ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreGameServer.SetServerName
struct UUWorksInterfaceCoreGameServer_SetServerName_Params
{
	struct FString                                     serverName;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreGameServer.SetRegion
struct UUWorksInterfaceCoreGameServer_SetRegion_Params
{
	struct FString                                     region;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreGameServer.SetPasswordProtected
struct UUWorksInterfaceCoreGameServer_SetPasswordProtected_Params
{
	bool                                               bPasswordProtected;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreGameServer.SetMaxPlayerCount
struct UUWorksInterfaceCoreGameServer_SetMaxPlayerCount_Params
{
	int                                                PlayersMax;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreGameServer.SetMapName
struct UUWorksInterfaceCoreGameServer_SetMapName_Params
{
	struct FString                                     MapName;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreGameServer.SetKeyValue
struct UUWorksInterfaceCoreGameServer_SetKeyValue_Params
{
	struct FString                                     Key;                                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Value;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreGameServer.SetHeartbeatInterval
struct UUWorksInterfaceCoreGameServer_SetHeartbeatInterval_Params
{
	int                                                HeartbeatInterval;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreGameServer.SetGameTags
struct UUWorksInterfaceCoreGameServer_SetGameTags_Params
{
	struct FString                                     GameTags;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreGameServer.SetGameData
struct UUWorksInterfaceCoreGameServer_SetGameData_Params
{
	struct FString                                     GameData;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreGameServer.SetBotPlayerCount
struct UUWorksInterfaceCoreGameServer_SetBotPlayerCount_Params
{
	int                                                BotPlayers;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreGameServer.RequestUserGroupStatus
struct UUWorksInterfaceCoreGameServer_RequestUserGroupStatus_Params
{
	struct FUWorksSteamID                              SteamIDUser;                                               // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamIDGroup;                                              // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreGameServer.GetSteamID
struct UUWorksInterfaceCoreGameServer_GetSteamID_Params
{
	struct FUWorksSteamID                              ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreGameServer.GetGameServer
struct UUWorksInterfaceCoreGameServer_GetGameServer_Params
{
	class UUWorksInterfaceCoreGameServer*              ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreGameServer.GetAuthSessionTicket
struct UUWorksInterfaceCoreGameServer_GetAuthSessionTicket_Params
{
	TArray<unsigned char>                              Ticket;                                                    // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FUWorksTicketHandle                         ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreGameServer.ForceHeartbeat
struct UUWorksInterfaceCoreGameServer_ForceHeartbeat_Params
{
};

// Function UWorksCore.UWorksInterfaceCoreGameServer.EndAuthSession
struct UUWorksInterfaceCoreGameServer_EndAuthSession_Params
{
	struct FUWorksSteamID                              SteamID;                                                   // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreGameServer.EnableHeartbeats
struct UUWorksInterfaceCoreGameServer_EnableHeartbeats_Params
{
	bool                                               bActive;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreGameServer.ComputeNewPlayerCompatibilityMinimal
struct UUWorksInterfaceCoreGameServer_ComputeNewPlayerCompatibilityMinimal_Params
{
	struct FScriptDelegate                             Completed;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamIDNewPlayer;                                          // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreGameServer.ComputeNewPlayerCompatibility
struct UUWorksInterfaceCoreGameServer_ComputeNewPlayerCompatibility_Params
{
	class UUWorksRequestCoreComputeNewPlayerCompatibility* ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreGameServer.ClearAllKeyValues
struct UUWorksInterfaceCoreGameServer_ClearAllKeyValues_Params
{
};

// Function UWorksCore.UWorksInterfaceCoreGameServer.CancelAuthTicket
struct UUWorksInterfaceCoreGameServer_CancelAuthTicket_Params
{
	struct FUWorksTicketHandle                         TicketHandle;                                              // 0x0000(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreGameServer.BSecure
struct UUWorksInterfaceCoreGameServer_BSecure_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreGameServer.BLoggedOn
struct UUWorksInterfaceCoreGameServer_BLoggedOn_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreGameServer.BeginAuthSession
struct UUWorksInterfaceCoreGameServer_BeginAuthSession_Params
{
	TArray<unsigned char>                              Ticket;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksBeginAuthSessionResult           ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreGameServer.AssociateWithClanMinimal
struct UUWorksInterfaceCoreGameServer_AssociateWithClanMinimal_Params
{
	struct FScriptDelegate                             Completed;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamIDClan;                                               // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreGameServer.AssociateWithClan
struct UUWorksInterfaceCoreGameServer_AssociateWithClan_Params
{
	class UUWorksRequestCoreAssociateWithClan*         ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreGameServerStats.UpdateUserAvgRateStat
struct UUWorksInterfaceCoreGameServerStats_UpdateUserAvgRateStat_Params
{
	struct FUWorksSteamID                              SteamIDUser;                                               // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     Name;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CountThisSession;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SessionLength;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreGameServerStats.StoreUserStatsMinimal
struct UUWorksInterfaceCoreGameServerStats_StoreUserStatsMinimal_Params
{
	struct FScriptDelegate                             Completed;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamIDUser;                                               // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreGameServerStats.StoreUserStats
struct UUWorksInterfaceCoreGameServerStats_StoreUserStats_Params
{
	class UUWorksRequestCoreStoreUserStats*            ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreGameServerStats.SetUserStatFromInteger
struct UUWorksInterfaceCoreGameServerStats_SetUserStatFromInteger_Params
{
	struct FUWorksSteamID                              SteamIDUser;                                               // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     Name;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Data;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreGameServerStats.SetUserStatFromFloat
struct UUWorksInterfaceCoreGameServerStats_SetUserStatFromFloat_Params
{
	struct FUWorksSteamID                              SteamIDUser;                                               // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     Name;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Data;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreGameServerStats.SetUserAchievement
struct UUWorksInterfaceCoreGameServerStats_SetUserAchievement_Params
{
	struct FUWorksSteamID                              SteamIDUser;                                               // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     Name;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreGameServerStats.RequestUserStatsMinimal
struct UUWorksInterfaceCoreGameServerStats_RequestUserStatsMinimal_Params
{
	struct FScriptDelegate                             Completed;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamIDUser;                                               // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreGameServerStats.RequestUserStats
struct UUWorksInterfaceCoreGameServerStats_RequestUserStats_Params
{
	class UUWorksRequestCoreRequestUserStatsGS*        ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreGameServerStats.GetUserStatAsInteger
struct UUWorksInterfaceCoreGameServerStats_GetUserStatAsInteger_Params
{
	struct FUWorksSteamID                              SteamIDUser;                                               // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     Name;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Data;                                                      // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreGameServerStats.GetUserStatAsFloat
struct UUWorksInterfaceCoreGameServerStats_GetUserStatAsFloat_Params
{
	struct FUWorksSteamID                              SteamIDUser;                                               // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     Name;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Data;                                                      // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreGameServerStats.GetUserAchievement
struct UUWorksInterfaceCoreGameServerStats_GetUserAchievement_Params
{
	struct FUWorksSteamID                              SteamIDUser;                                               // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     Name;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAchieved;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreGameServerStats.GetGameServerStats
struct UUWorksInterfaceCoreGameServerStats_GetGameServerStats_Params
{
	class UUWorksInterfaceCoreGameServerStats*         ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreGameServerStats.ClearUserAchievement
struct UUWorksInterfaceCoreGameServerStats_ClearUserAchievement_Params
{
	struct FUWorksSteamID                              SteamIDUser;                                               // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     Name;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreInventory.TriggerItemDrop
struct UUWorksInterfaceCoreInventory_TriggerItemDrop_Params
{
	struct FUWorksSteamInventoryResult                 Handle;                                                    // 0x0000(0x0004)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FUWorksSteamItemDef                         ItemDefinition;                                            // 0x0000(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreInventory.TransferItemQuantity
struct UUWorksInterfaceCoreInventory_TransferItemQuantity_Params
{
	struct FUWorksSteamInventoryResult                 Handle;                                                    // 0x0000(0x0004)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FUWorksSteamItemInstanceID                  ItemSourceInstanceID;                                      // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                ItemSourceQuantity;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamItemInstanceID                  ItemDestinationInstanceID;                                 // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreInventory.TradeItems
struct UUWorksInterfaceCoreInventory_TradeItems_Params
{
	struct FUWorksSteamInventoryResult                 Handle;                                                    // 0x0000(0x0004)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamIDTradePartner;                                       // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FUWorksSteamItemInstanceID>          ItemsGiven;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int>                                        ItemsGivenQuantities;                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FUWorksSteamItemInstanceID>          ItemsReceived;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int>                                        ItemsReceivedQuantities;                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreInventory.SerializeResult
struct UUWorksInterfaceCoreInventory_SerializeResult_Params
{
	struct FUWorksSteamInventoryResult                 Handle;                                                    // 0x0000(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	TArray<unsigned char>                              Buffer;                                                    // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreInventory.RequestEligiblePromoItemDefinitionsIDsMinimal
struct UUWorksInterfaceCoreInventory_RequestEligiblePromoItemDefinitionsIDsMinimal_Params
{
	struct FScriptDelegate                             Completed;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreInventory.RequestEligiblePromoItemDefinitionsIDs
struct UUWorksInterfaceCoreInventory_RequestEligiblePromoItemDefinitionsIDs_Params
{
	class UUWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs* ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreInventory.LoadItemDefinitions
struct UUWorksInterfaceCoreInventory_LoadItemDefinitions_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreInventory.GrantPromoItems
struct UUWorksInterfaceCoreInventory_GrantPromoItems_Params
{
	struct FUWorksSteamInventoryResult                 Handle;                                                    // 0x0000(0x0004)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreInventory.GetResultTimestamp
struct UUWorksInterfaceCoreInventory_GetResultTimestamp_Params
{
	struct FUWorksSteamInventoryResult                 Handle;                                                    // 0x0000(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreInventory.GetResultStatus
struct UUWorksInterfaceCoreInventory_GetResultStatus_Params
{
	struct FUWorksSteamInventoryResult                 Handle;                                                    // 0x0000(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksResult                           ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreInventory.GetResultItems
struct UUWorksInterfaceCoreInventory_GetResultItems_Params
{
	struct FUWorksSteamInventoryResult                 Handle;                                                    // 0x0000(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FUWorksSteamItemDetails>             items;                                                     // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreInventory.GetItemsByID
struct UUWorksInterfaceCoreInventory_GetItemsByID_Params
{
	struct FUWorksSteamInventoryResult                 Handle;                                                    // 0x0000(0x0004)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FUWorksSteamItemInstanceID>          InstanceIDs;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreInventory.GetItemDefinitionPropertyValue
struct UUWorksInterfaceCoreInventory_GetItemDefinitionPropertyValue_Params
{
	struct FUWorksSteamItemDef                         ItemDefinition;                                            // 0x0000(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     PropertyName;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PropertyValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreInventory.GetItemDefinitionPropertiesNames
struct UUWorksInterfaceCoreInventory_GetItemDefinitionPropertiesNames_Params
{
	struct FUWorksSteamItemDef                         ItemDefinition;                                            // 0x0000(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             PropertiesNames;                                           // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreInventory.GetItemDefinitionIDs
struct UUWorksInterfaceCoreInventory_GetItemDefinitionIDs_Params
{
	TArray<struct FUWorksSteamItemDef>                 ItemDefinitions;                                           // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreInventory.GetInventory
struct UUWorksInterfaceCoreInventory_GetInventory_Params
{
	class UUWorksInterfaceCoreInventory*               ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreInventory.GetEligiblePromoItemDefinitionIDs
struct UUWorksInterfaceCoreInventory_GetEligiblePromoItemDefinitionIDs_Params
{
	struct FUWorksSteamID                              SteamID;                                                   // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FUWorksSteamItemDef>                 ItemDefinitions;                                           // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreInventory.GetAllItems
struct UUWorksInterfaceCoreInventory_GetAllItems_Params
{
	struct FUWorksSteamInventoryResult                 Handle;                                                    // 0x0000(0x0004)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreInventory.GenerateItems
struct UUWorksInterfaceCoreInventory_GenerateItems_Params
{
	struct FUWorksSteamInventoryResult                 Handle;                                                    // 0x0000(0x0004)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FUWorksSteamItemDef>                 ItemDefinitions;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int>                                        ItemQuantities;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreInventory.ExchangeItems
struct UUWorksInterfaceCoreInventory_ExchangeItems_Params
{
	struct FUWorksSteamInventoryResult                 Handle;                                                    // 0x0000(0x0004)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FUWorksSteamItemDef>                 ItemsGenerated;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int>                                        ItemsGeneratedQuantities;                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FUWorksSteamItemInstanceID>          ItemsDestroyed;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int>                                        ItemsDestroyedQuantities;                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreInventory.DestroyResult
struct UUWorksInterfaceCoreInventory_DestroyResult_Params
{
	struct FUWorksSteamInventoryResult                 Handle;                                                    // 0x0000(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreInventory.DeserializeResult
struct UUWorksInterfaceCoreInventory_DeserializeResult_Params
{
	struct FUWorksSteamInventoryResult                 Handle;                                                    // 0x0000(0x0004)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	TArray<unsigned char>                              Buffer;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bReservedMustBeFalse;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreInventory.ConsumeItem
struct UUWorksInterfaceCoreInventory_ConsumeItem_Params
{
	struct FUWorksSteamInventoryResult                 Handle;                                                    // 0x0000(0x0004)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FUWorksSteamItemInstanceID                  ItemInstanceID;                                            // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                ItemQuantity;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreInventory.CheckResultSteamID
struct UUWorksInterfaceCoreInventory_CheckResultSteamID_Params
{
	struct FUWorksSteamInventoryResult                 Handle;                                                    // 0x0000(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreInventory.AddPromoItems
struct UUWorksInterfaceCoreInventory_AddPromoItems_Params
{
	struct FUWorksSteamInventoryResult                 Handle;                                                    // 0x0000(0x0004)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FUWorksSteamItemDef>                 ItemDefinitions;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreInventory.AddPromoItem
struct UUWorksInterfaceCoreInventory_AddPromoItem_Params
{
	struct FUWorksSteamInventoryResult                 Handle;                                                    // 0x0000(0x0004)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FUWorksSteamItemDef                         ItemDefinition;                                            // 0x0000(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreMatchmaking.SetLobbyType
struct UUWorksInterfaceCoreMatchmaking_SetLobbyType_Params
{
	struct FUWorksSteamID                              SteamIDLobby;                                              // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksLobbyType                        LobbyType;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreMatchmaking.SetLobbyOwner
struct UUWorksInterfaceCoreMatchmaking_SetLobbyOwner_Params
{
	struct FUWorksSteamID                              SteamIDLobby;                                              // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamIDNewOwner;                                           // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreMatchmaking.SetLobbyMemberLimit
struct UUWorksInterfaceCoreMatchmaking_SetLobbyMemberLimit_Params
{
	struct FUWorksSteamID                              SteamIDLobby;                                              // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                MaxMembers;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreMatchmaking.SetLobbyMemberData
struct UUWorksInterfaceCoreMatchmaking_SetLobbyMemberData_Params
{
	struct FUWorksSteamID                              SteamIDLobby;                                              // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     Key;                                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Value;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreMatchmaking.SetLobbyJoinable
struct UUWorksInterfaceCoreMatchmaking_SetLobbyJoinable_Params
{
	struct FUWorksSteamID                              SteamIDLobby;                                              // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bLobbyJoinable;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreMatchmaking.SetLobbyGameServer
struct UUWorksInterfaceCoreMatchmaking_SetLobbyGameServer_Params
{
	struct FUWorksSteamID                              SteamIDLobby;                                              // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     GameServerIP;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                GameServerPort;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamIDGameServer;                                         // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreMatchmaking.SetLobbyData
struct UUWorksInterfaceCoreMatchmaking_SetLobbyData_Params
{
	struct FUWorksSteamID                              SteamIDLobby;                                              // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     Key;                                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Value;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreMatchmaking.SetLinkedLobby
struct UUWorksInterfaceCoreMatchmaking_SetLinkedLobby_Params
{
	struct FUWorksSteamID                              SteamIDLobby;                                              // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamIDLobbyDependent;                                     // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreMatchmaking.SendLobbyChatMsg
struct UUWorksInterfaceCoreMatchmaking_SendLobbyChatMsg_Params
{
	struct FUWorksSteamID                              SteamIDLobby;                                              // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     Message;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreMatchmaking.RequestLobbyListMinimal
struct UUWorksInterfaceCoreMatchmaking_RequestLobbyListMinimal_Params
{
	struct FScriptDelegate                             Completed;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreMatchmaking.RequestLobbyList
struct UUWorksInterfaceCoreMatchmaking_RequestLobbyList_Params
{
	class UUWorksRequestCoreRequestLobbyList*          ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreMatchmaking.RequestLobbyData
struct UUWorksInterfaceCoreMatchmaking_RequestLobbyData_Params
{
	struct FUWorksSteamID                              SteamIDLobby;                                              // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreMatchmaking.RemoveFavoriteGame
struct UUWorksInterfaceCoreMatchmaking_RemoveFavoriteGame_Params
{
	int                                                AppID;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     IP;                                                        // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ConnectionPort;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                QueryPort;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<UWorksCore_EUWorksFavoriteFlags>            Flags;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreMatchmaking.LeaveLobby
struct UUWorksInterfaceCoreMatchmaking_LeaveLobby_Params
{
	struct FUWorksSteamID                              SteamIDLobby;                                              // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreMatchmaking.JoinLobbyMinimal
struct UUWorksInterfaceCoreMatchmaking_JoinLobbyMinimal_Params
{
	struct FScriptDelegate                             Completed;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamIDLobby;                                              // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreMatchmaking.JoinLobby
struct UUWorksInterfaceCoreMatchmaking_JoinLobby_Params
{
	class UUWorksRequestCoreJoinLobby*                 ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreMatchmaking.InviteUserToLobby
struct UUWorksInterfaceCoreMatchmaking_InviteUserToLobby_Params
{
	struct FUWorksSteamID                              SteamIDLobby;                                              // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamIDInvitee;                                            // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreMatchmaking.GetNumLobbyMembers
struct UUWorksInterfaceCoreMatchmaking_GetNumLobbyMembers_Params
{
	struct FUWorksSteamID                              SteamIDLobby;                                              // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreMatchmaking.GetMatchmaking
struct UUWorksInterfaceCoreMatchmaking_GetMatchmaking_Params
{
	class UUWorksInterfaceCoreMatchmaking*             ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreMatchmaking.GetLobbyOwner
struct UUWorksInterfaceCoreMatchmaking_GetLobbyOwner_Params
{
	struct FUWorksSteamID                              SteamIDLobby;                                              // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreMatchmaking.GetLobbyMemberLimit
struct UUWorksInterfaceCoreMatchmaking_GetLobbyMemberLimit_Params
{
	struct FUWorksSteamID                              SteamIDLobby;                                              // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreMatchmaking.GetLobbyMemberData
struct UUWorksInterfaceCoreMatchmaking_GetLobbyMemberData_Params
{
	struct FUWorksSteamID                              SteamIDLobby;                                              // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamIDUser;                                               // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     Key;                                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreMatchmaking.GetLobbyMemberByIndex
struct UUWorksInterfaceCoreMatchmaking_GetLobbyMemberByIndex_Params
{
	struct FUWorksSteamID                              SteamIDLobby;                                              // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                Member;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreMatchmaking.GetLobbyGameServer
struct UUWorksInterfaceCoreMatchmaking_GetLobbyGameServer_Params
{
	struct FUWorksSteamID                              SteamIDLobby;                                              // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     GameServerIP;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                GameServerPort;                                            // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamIDGameServer;                                         // 0x0000(0x0008)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreMatchmaking.GetLobbyDataCount
struct UUWorksInterfaceCoreMatchmaking_GetLobbyDataCount_Params
{
	struct FUWorksSteamID                              SteamIDLobby;                                              // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreMatchmaking.GetLobbyDataByIndex
struct UUWorksInterfaceCoreMatchmaking_GetLobbyDataByIndex_Params
{
	struct FUWorksSteamID                              SteamIDLobby;                                              // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                LobbyData;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Key;                                                       // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                KeyMaxLength;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Value;                                                     // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ValueMaxLength;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreMatchmaking.GetLobbyData
struct UUWorksInterfaceCoreMatchmaking_GetLobbyData_Params
{
	struct FUWorksSteamID                              SteamIDLobby;                                              // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     Key;                                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreMatchmaking.GetLobbyChatEntry
struct UUWorksInterfaceCoreMatchmaking_GetLobbyChatEntry_Params
{
	struct FUWorksSteamID                              SteamIDLobby;                                              // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                MessageID;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamIDUser;                                               // 0x0000(0x0008)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     Message;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MessageMaxLength;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksChatEntryType                    ChatEntryType;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreMatchmaking.GetLobbyByIndex
struct UUWorksInterfaceCoreMatchmaking_GetLobbyByIndex_Params
{
	int                                                Lobby;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreMatchmaking.GetFavoriteGameCount
struct UUWorksInterfaceCoreMatchmaking_GetFavoriteGameCount_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreMatchmaking.GetFavoriteGame
struct UUWorksInterfaceCoreMatchmaking_GetFavoriteGame_Params
{
	int                                                Game;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     IP;                                                        // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ConnectionPort;                                            // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                QueryPort;                                                 // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<UWorksCore_EUWorksFavoriteFlags>            Flags;                                                     // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                TimeLastPlayedOnServer;                                    // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreMatchmaking.DeleteLobbyData
struct UUWorksInterfaceCoreMatchmaking_DeleteLobbyData_Params
{
	struct FUWorksSteamID                              SteamIDLobby;                                              // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     Key;                                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreMatchmaking.CreateLobbyMinimal
struct UUWorksInterfaceCoreMatchmaking_CreateLobbyMinimal_Params
{
	struct FScriptDelegate                             Completed;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksLobbyType                        LobbyType;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxMembers;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreMatchmaking.CreateLobby
struct UUWorksInterfaceCoreMatchmaking_CreateLobby_Params
{
	class UUWorksRequestCoreCreateLobby*               ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreMatchmaking.AddRequestLobbyListStringFilter
struct UUWorksInterfaceCoreMatchmaking_AddRequestLobbyListStringFilter_Params
{
	struct FString                                     KeyToMatch;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ValueToMatch;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksLobbyComparison                  ComparisonType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreMatchmaking.AddRequestLobbyListResultCountFilter
struct UUWorksInterfaceCoreMatchmaking_AddRequestLobbyListResultCountFilter_Params
{
	int                                                maxResults;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreMatchmaking.AddRequestLobbyListNumericalFilter
struct UUWorksInterfaceCoreMatchmaking_AddRequestLobbyListNumericalFilter_Params
{
	struct FString                                     KeyToMatch;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ValueToMatch;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksLobbyComparison                  ComparisonType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreMatchmaking.AddRequestLobbyListNearValueFilter
struct UUWorksInterfaceCoreMatchmaking_AddRequestLobbyListNearValueFilter_Params
{
	struct FString                                     KeyToMatch;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ValueToBeCloseTo;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreMatchmaking.AddRequestLobbyListFilterSlotsAvailable
struct UUWorksInterfaceCoreMatchmaking_AddRequestLobbyListFilterSlotsAvailable_Params
{
	int                                                SlotsAvailable;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreMatchmaking.AddRequestLobbyListDistanceFilter
struct UUWorksInterfaceCoreMatchmaking_AddRequestLobbyListDistanceFilter_Params
{
	UWorksCore_EUWorksLobbyDistanceFilter              LobbyDistanceFilter;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreMatchmaking.AddRequestLobbyListCompatibleMembersFilter
struct UUWorksInterfaceCoreMatchmaking_AddRequestLobbyListCompatibleMembersFilter_Params
{
	struct FUWorksSteamID                              SteamIDLobby;                                              // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreMatchmaking.AddFavoriteGame
struct UUWorksInterfaceCoreMatchmaking_AddFavoriteGame_Params
{
	int                                                AppID;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     IP;                                                        // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ConnectionPort;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                QueryPort;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<UWorksCore_EUWorksFavoriteFlags>            Flags;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                TimeLastPlayedOnServer;                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreMatchmakingServers.ServerListMinimal
struct UUWorksInterfaceCoreMatchmakingServers_ServerListMinimal_Params
{
	struct FScriptDelegate                             Completed;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Updated;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksServerQueryType                  QueryType;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreMatchmakingServers.ServerList
struct UUWorksInterfaceCoreMatchmakingServers_ServerList_Params
{
	class UUWorksRequestCoreServerList*                ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreMatchmakingServers.RulesMinimal
struct UUWorksInterfaceCoreMatchmakingServers_RulesMinimal_Params
{
	struct FScriptDelegate                             Completed;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Updated;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     IP;                                                        // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Port;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreMatchmakingServers.Rules
struct UUWorksInterfaceCoreMatchmakingServers_Rules_Params
{
	class UUWorksRequestCoreRules*                     ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreMatchmakingServers.PlayersMinimal
struct UUWorksInterfaceCoreMatchmakingServers_PlayersMinimal_Params
{
	struct FScriptDelegate                             Completed;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Updated;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     IP;                                                        // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Port;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreMatchmakingServers.Players
struct UUWorksInterfaceCoreMatchmakingServers_Players_Params
{
	class UUWorksRequestCorePlayers*                   ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreMatchmakingServers.PingMinimal
struct UUWorksInterfaceCoreMatchmakingServers_PingMinimal_Params
{
	struct FScriptDelegate                             Completed;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     IP;                                                        // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Port;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreMatchmakingServers.Ping
struct UUWorksInterfaceCoreMatchmakingServers_Ping_Params
{
	class UUWorksRequestCorePing*                      ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreMatchmakingServers.GetMatchmakingServers
struct UUWorksInterfaceCoreMatchmakingServers_GetMatchmakingServers_Params
{
	class UUWorksInterfaceCoreMatchmakingServers*      ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreMusic.SetVolume
struct UUWorksInterfaceCoreMusic_SetVolume_Params
{
	float                                              Volume;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreMusic.PlayPrevious
struct UUWorksInterfaceCoreMusic_PlayPrevious_Params
{
};

// Function UWorksCore.UWorksInterfaceCoreMusic.PlayNext
struct UUWorksInterfaceCoreMusic_PlayNext_Params
{
};

// Function UWorksCore.UWorksInterfaceCoreMusic.Play
struct UUWorksInterfaceCoreMusic_Play_Params
{
};

// Function UWorksCore.UWorksInterfaceCoreMusic.Pause
struct UUWorksInterfaceCoreMusic_Pause_Params
{
};

// Function UWorksCore.UWorksInterfaceCoreMusic.GetVolume
struct UUWorksInterfaceCoreMusic_GetVolume_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreMusic.GetPlaybackStatus
struct UUWorksInterfaceCoreMusic_GetPlaybackStatus_Params
{
	UWorksCore_EUWorksAudioPlaybackStatus              ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreMusic.GetMusic
struct UUWorksInterfaceCoreMusic_GetMusic_Params
{
	class UUWorksInterfaceCoreMusic*                   ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreMusic.BIsPlaying
struct UUWorksInterfaceCoreMusic_BIsPlaying_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreMusic.BIsEnabled
struct UUWorksInterfaceCoreMusic_BIsEnabled_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreNetworking.SendP2PPacket
struct UUWorksInterfaceCoreNetworking_SendP2PPacket_Params
{
	struct FUWorksSteamID                              SteamIDRemote;                                             // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	TArray<unsigned char>                              Data;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksP2PSend                          P2PSendType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Channel;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreNetworking.SendP2PMessage
struct UUWorksInterfaceCoreNetworking_SendP2PMessage_Params
{
	struct FUWorksSteamID                              SteamIDRemote;                                             // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     Data;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksP2PSend                          P2PSendType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Channel;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreNetworking.ReadP2PPacket
struct UUWorksInterfaceCoreNetworking_ReadP2PPacket_Params
{
	TArray<unsigned char>                              Data;                                                      // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                DataMax;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamIDRemote;                                             // 0x0000(0x0008)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                Channel;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreNetworking.ReadP2PMessage
struct UUWorksInterfaceCoreNetworking_ReadP2PMessage_Params
{
	struct FString                                     Data;                                                      // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DataMax;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamIDRemote;                                             // 0x0000(0x0008)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                Channel;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreNetworking.IsP2PPacketAvailable
struct UUWorksInterfaceCoreNetworking_IsP2PPacketAvailable_Params
{
	int                                                DataSize;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Channel;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreNetworking.GetP2PSessionState
struct UUWorksInterfaceCoreNetworking_GetP2PSessionState_Params
{
	struct FUWorksSteamID                              SteamIDRemote;                                             // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FUWorksP2PSessionState                      ConnectionState;                                           // 0x0000(0x000C)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreNetworking.GetNetworking
struct UUWorksInterfaceCoreNetworking_GetNetworking_Params
{
	class UUWorksInterfaceCoreNetworking*              ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreNetworking.CloseP2PSessionWithUser
struct UUWorksInterfaceCoreNetworking_CloseP2PSessionWithUser_Params
{
	struct FUWorksSteamID                              SteamIDRemote;                                             // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreNetworking.CloseP2PChannelWithUser
struct UUWorksInterfaceCoreNetworking_CloseP2PChannelWithUser_Params
{
	struct FUWorksSteamID                              SteamIDRemote;                                             // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                Channel;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreNetworking.AllowP2PPacketRelay
struct UUWorksInterfaceCoreNetworking_AllowP2PPacketRelay_Params
{
	bool                                               bAllow;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreNetworking.AcceptP2PSessionWithUser
struct UUWorksInterfaceCoreNetworking_AcceptP2PSessionWithUser_Params
{
	struct FUWorksSteamID                              SteamIDRemote;                                             // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreRemoteStorage.SetSyncPlatforms
struct UUWorksInterfaceCoreRemoteStorage_SetSyncPlatforms_Params
{
	struct FString                                     File;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksRemoteStoragePlatform            RemoteStoragePlatform;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreRemoteStorage.SetCloudEnabledForApp
struct UUWorksInterfaceCoreRemoteStorage_SetCloudEnabledForApp_Params
{
	bool                                               bEnabled;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreRemoteStorage.IsCloudEnabledForApp
struct UUWorksInterfaceCoreRemoteStorage_IsCloudEnabledForApp_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreRemoteStorage.IsCloudEnabledForAccount
struct UUWorksInterfaceCoreRemoteStorage_IsCloudEnabledForAccount_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreRemoteStorage.GetSyncPlatforms
struct UUWorksInterfaceCoreRemoteStorage_GetSyncPlatforms_Params
{
	struct FString                                     File;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksRemoteStoragePlatform            ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreRemoteStorage.GetRemoteStorage
struct UUWorksInterfaceCoreRemoteStorage_GetRemoteStorage_Params
{
	class UUWorksInterfaceCoreRemoteStorage*           ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreRemoteStorage.GetQuota
struct UUWorksInterfaceCoreRemoteStorage_GetQuota_Params
{
	struct FString                                     TotalBytes;                                                // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     AvailableBytes;                                            // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreRemoteStorage.GetFileTimestamp
struct UUWorksInterfaceCoreRemoteStorage_GetFileTimestamp_Params
{
	struct FString                                     File;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreRemoteStorage.GetFileSize
struct UUWorksInterfaceCoreRemoteStorage_GetFileSize_Params
{
	struct FString                                     File;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreRemoteStorage.GetFileNameAndSize
struct UUWorksInterfaceCoreRemoteStorage_GetFileNameAndSize_Params
{
	int                                                File;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FileSizeInBytes;                                           // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreRemoteStorage.GetFileCount
struct UUWorksInterfaceCoreRemoteStorage_GetFileCount_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreRemoteStorage.FileWriteStreamWriteChunk
struct UUWorksInterfaceCoreRemoteStorage_FileWriteStreamWriteChunk_Params
{
	struct FUWorksUGCFileWriteStreamHandle             Handle;                                                    // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	TArray<unsigned char>                              Buffer;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreRemoteStorage.FileWriteStreamOpen
struct UUWorksInterfaceCoreRemoteStorage_FileWriteStreamOpen_Params
{
	struct FString                                     File;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksUGCFileWriteStreamHandle             ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreRemoteStorage.FileWriteStreamClose
struct UUWorksInterfaceCoreRemoteStorage_FileWriteStreamClose_Params
{
	struct FUWorksUGCFileWriteStreamHandle             Handle;                                                    // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreRemoteStorage.FileWriteStreamCancel
struct UUWorksInterfaceCoreRemoteStorage_FileWriteStreamCancel_Params
{
	struct FUWorksUGCFileWriteStreamHandle             Handle;                                                    // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreRemoteStorage.FileWriteAsyncMinimal
struct UUWorksInterfaceCoreRemoteStorage_FileWriteAsyncMinimal_Params
{
	struct FScriptDelegate                             Completed;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     File;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<unsigned char>                              Buffer;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreRemoteStorage.FileWriteAsync
struct UUWorksInterfaceCoreRemoteStorage_FileWriteAsync_Params
{
	class UUWorksRequestCoreFileWriteAsync*            ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreRemoteStorage.FileWrite
struct UUWorksInterfaceCoreRemoteStorage_FileWrite_Params
{
	struct FString                                     File;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<unsigned char>                              Buffer;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreRemoteStorage.FileReadAsyncMinimal
struct UUWorksInterfaceCoreRemoteStorage_FileReadAsyncMinimal_Params
{
	struct FScriptDelegate                             Completed;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     File;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Offset;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BytesToRead;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreRemoteStorage.FileReadAsync
struct UUWorksInterfaceCoreRemoteStorage_FileReadAsync_Params
{
	class UUWorksRequestCoreFileReadAsync*             ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreRemoteStorage.FileRead
struct UUWorksInterfaceCoreRemoteStorage_FileRead_Params
{
	struct FString                                     File;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<unsigned char>                              Buffer;                                                    // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                BufferSize;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreRemoteStorage.FilePersisted
struct UUWorksInterfaceCoreRemoteStorage_FilePersisted_Params
{
	struct FString                                     File;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreRemoteStorage.FileForget
struct UUWorksInterfaceCoreRemoteStorage_FileForget_Params
{
	struct FString                                     File;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreRemoteStorage.FileExists
struct UUWorksInterfaceCoreRemoteStorage_FileExists_Params
{
	struct FString                                     File;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreRemoteStorage.FileDelete
struct UUWorksInterfaceCoreRemoteStorage_FileDelete_Params
{
	struct FString                                     File;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreScreenshots.WriteScreenshot
struct UUWorksInterfaceCoreScreenshots_WriteScreenshot_Params
{
	class UTexture2D*                                  Image;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksScreenshotHandle                     ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreScreenshots.TriggerScreenshot
struct UUWorksInterfaceCoreScreenshots_TriggerScreenshot_Params
{
};

// Function UWorksCore.UWorksInterfaceCoreScreenshots.TagUser
struct UUWorksInterfaceCoreScreenshots_TagUser_Params
{
	struct FUWorksScreenshotHandle                     Screenshot;                                                // 0x0000(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreScreenshots.TagPublishedFile
struct UUWorksInterfaceCoreScreenshots_TagPublishedFile_Params
{
	struct FUWorksScreenshotHandle                     Screenshot;                                                // 0x0000(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FUWorksPublishedFileID                      PublishedFileID;                                           // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreScreenshots.SetLocation
struct UUWorksInterfaceCoreScreenshots_SetLocation_Params
{
	struct FUWorksScreenshotHandle                     Screenshot;                                                // 0x0000(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     Location;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreScreenshots.IsScreenshotsHooked
struct UUWorksInterfaceCoreScreenshots_IsScreenshotsHooked_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreScreenshots.HookScreenshots
struct UUWorksInterfaceCoreScreenshots_HookScreenshots_Params
{
	bool                                               bHook;                                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreScreenshots.GetScreenshots
struct UUWorksInterfaceCoreScreenshots_GetScreenshots_Params
{
	class UUWorksInterfaceCoreScreenshots*             ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreScreenshots.AddVRScreenshotToLibrary
struct UUWorksInterfaceCoreScreenshots_AddVRScreenshotToLibrary_Params
{
	UWorksCore_EUWorksVRScreenshotType                 Type;                                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Filename;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     VRFileName;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksScreenshotHandle                     ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreScreenshots.AddScreenshotToLibrary
struct UUWorksInterfaceCoreScreenshots_AddScreenshotToLibrary_Params
{
	struct FString                                     FileMame;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ThumbnailFileName;                                         // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Width;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Height;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksScreenshotHandle                     ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUGC.UpdateItemPreviewVideo
struct UUWorksInterfaceCoreUGC_UpdateItemPreviewVideo_Params
{
	struct FUWorksUGCUpdateHandle                      Handle;                                                    // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PreviewVideo;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUGC.UpdateItemPreviewFile
struct UUWorksInterfaceCoreUGC_UpdateItemPreviewFile_Params
{
	struct FUWorksUGCUpdateHandle                      Handle;                                                    // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PreviewFile;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUGC.UnsubscribeItemMinimal
struct UUWorksInterfaceCoreUGC_UnsubscribeItemMinimal_Params
{
	struct FScriptDelegate                             Completed;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FUWorksPublishedFileID                      PublishedFileID;                                           // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUGC.UnsubscribeItem
struct UUWorksInterfaceCoreUGC_UnsubscribeItem_Params
{
	class UUWorksRequestCoreUnsubscribeItem*           ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUGC.SuspendDownloads
struct UUWorksInterfaceCoreUGC_SuspendDownloads_Params
{
	bool                                               bSuspend;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUGC.SubscribeItemMinimal
struct UUWorksInterfaceCoreUGC_SubscribeItemMinimal_Params
{
	struct FScriptDelegate                             Completed;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FUWorksPublishedFileID                      PublishedFileID;                                           // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUGC.SubscribeItem
struct UUWorksInterfaceCoreUGC_SubscribeItem_Params
{
	class UUWorksRequestCoreSubscribeItem*             ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUGC.SubmitItemUpdateMinimal
struct UUWorksInterfaceCoreUGC_SubmitItemUpdateMinimal_Params
{
	struct FScriptDelegate                             Completed;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FUWorksUGCUpdateHandle                      UGCUpdateHandle;                                           // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     ChangeNote;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUGC.SubmitItemUpdate
struct UUWorksInterfaceCoreUGC_SubmitItemUpdate_Params
{
	class UUWorksRequestCoreSubmitItemUpdate*          ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUGC.StopPlaytimeTrackingMinimal
struct UUWorksInterfaceCoreUGC_StopPlaytimeTrackingMinimal_Params
{
	struct FScriptDelegate                             Completed;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FUWorksPublishedFileID>              PublishedFileIDs;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUGC.StopPlaytimeTrackingForAllItemsMinimal
struct UUWorksInterfaceCoreUGC_StopPlaytimeTrackingForAllItemsMinimal_Params
{
	struct FScriptDelegate                             Completed;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUGC.StopPlaytimeTrackingForAllItems
struct UUWorksInterfaceCoreUGC_StopPlaytimeTrackingForAllItems_Params
{
	class UUWorksRequestCoreStopPlaytimeTrackingForAllItems* ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUGC.StopPlaytimeTracking
struct UUWorksInterfaceCoreUGC_StopPlaytimeTracking_Params
{
	class UUWorksRequestCoreStopPlaytimeTracking*      ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUGC.StartPlaytimeTrackingMinimal
struct UUWorksInterfaceCoreUGC_StartPlaytimeTrackingMinimal_Params
{
	struct FScriptDelegate                             Completed;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FUWorksPublishedFileID>              PublishedFileID;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUGC.StartPlaytimeTracking
struct UUWorksInterfaceCoreUGC_StartPlaytimeTracking_Params
{
	class UUWorksRequestCoreStartPlaytimeTracking*     ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUGC.StartItemUpdate
struct UUWorksInterfaceCoreUGC_StartItemUpdate_Params
{
	int                                                ConsumerAppID;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksPublishedFileID                      PublishedFileID;                                           // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FUWorksUGCUpdateHandle                      ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUGC.SetUserItemVoteMinimal
struct UUWorksInterfaceCoreUGC_SetUserItemVoteMinimal_Params
{
	struct FScriptDelegate                             Completed;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FUWorksPublishedFileID                      PublishedFileID;                                           // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bVoteUp;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUGC.SetUserItemVote
struct UUWorksInterfaceCoreUGC_SetUserItemVote_Params
{
	class UUWorksRequestCoreSetUserItemVote*           ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUGC.SetSearchText
struct UUWorksInterfaceCoreUGC_SetSearchText_Params
{
	struct FUWorksUGCQueryHandle                       Handle;                                                    // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     SearchText;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUGC.SetReturnTotalOnly
struct UUWorksInterfaceCoreUGC_SetReturnTotalOnly_Params
{
	struct FUWorksUGCQueryHandle                       Handle;                                                    // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bReturnTotalOnly;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUGC.SetReturnOnlyIDs
struct UUWorksInterfaceCoreUGC_SetReturnOnlyIDs_Params
{
	struct FUWorksUGCQueryHandle                       Handle;                                                    // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bReturnOnlyIDs;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUGC.SetReturnMetadata
struct UUWorksInterfaceCoreUGC_SetReturnMetadata_Params
{
	struct FUWorksUGCQueryHandle                       Handle;                                                    // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bReturnMetadata;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUGC.SetReturnLongDescription
struct UUWorksInterfaceCoreUGC_SetReturnLongDescription_Params
{
	struct FUWorksUGCQueryHandle                       Handle;                                                    // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bReturnLongDescription;                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUGC.SetReturnKeyValueTags
struct UUWorksInterfaceCoreUGC_SetReturnKeyValueTags_Params
{
	struct FUWorksUGCQueryHandle                       Handle;                                                    // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bReturnKeyValueTags;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUGC.SetReturnChildren
struct UUWorksInterfaceCoreUGC_SetReturnChildren_Params
{
	struct FUWorksUGCQueryHandle                       Handle;                                                    // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bReturnChildren;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUGC.SetReturnAdditionalPreviews
struct UUWorksInterfaceCoreUGC_SetReturnAdditionalPreviews_Params
{
	struct FUWorksUGCQueryHandle                       Handle;                                                    // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bReturnAdditionalPreviews;                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUGC.SetRankedByTrendDays
struct UUWorksInterfaceCoreUGC_SetRankedByTrendDays_Params
{
	struct FUWorksUGCQueryHandle                       Handle;                                                    // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                Days;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUGC.SetMatchAnyTag
struct UUWorksInterfaceCoreUGC_SetMatchAnyTag_Params
{
	struct FUWorksUGCQueryHandle                       Handle;                                                    // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bMatchAnyTag;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUGC.SetLanguage
struct UUWorksInterfaceCoreUGC_SetLanguage_Params
{
	struct FUWorksUGCQueryHandle                       Handle;                                                    // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     Language;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUGC.SetItemVisibility
struct UUWorksInterfaceCoreUGC_SetItemVisibility_Params
{
	struct FUWorksUGCUpdateHandle                      Handle;                                                    // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksRemoteStoragePublishedFileVisibility Visibility;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUGC.SetItemUpdateLanguage
struct UUWorksInterfaceCoreUGC_SetItemUpdateLanguage_Params
{
	struct FUWorksUGCUpdateHandle                      Handle;                                                    // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     Language;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUGC.SetItemTitle
struct UUWorksInterfaceCoreUGC_SetItemTitle_Params
{
	struct FUWorksUGCUpdateHandle                      Handle;                                                    // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     Title;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUGC.SetItemTags
struct UUWorksInterfaceCoreUGC_SetItemTags_Params
{
	struct FUWorksUGCUpdateHandle                      Handle;                                                    // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             Tags;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUGC.SetItemPreview
struct UUWorksInterfaceCoreUGC_SetItemPreview_Params
{
	struct FUWorksUGCUpdateHandle                      Handle;                                                    // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     PreviewFile;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUGC.SetItemMetadata
struct UUWorksInterfaceCoreUGC_SetItemMetadata_Params
{
	struct FUWorksUGCUpdateHandle                      Handle;                                                    // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     MetaData;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUGC.SetItemDescription
struct UUWorksInterfaceCoreUGC_SetItemDescription_Params
{
	struct FUWorksUGCUpdateHandle                      Handle;                                                    // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     Description;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUGC.SetItemContent
struct UUWorksInterfaceCoreUGC_SetItemContent_Params
{
	struct FUWorksUGCUpdateHandle                      Handle;                                                    // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     ContentFolder;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUGC.SetCloudFileNameFilter
struct UUWorksInterfaceCoreUGC_SetCloudFileNameFilter_Params
{
	struct FUWorksUGCQueryHandle                       Handle;                                                    // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     MatchCloudFileName;                                        // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUGC.SetAllowCachedResponse
struct UUWorksInterfaceCoreUGC_SetAllowCachedResponse_Params
{
	struct FUWorksUGCQueryHandle                       Handle;                                                    // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                MaxAgeSeconds;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUGC.SendQueryUGCRequestMinimal
struct UUWorksInterfaceCoreUGC_SendQueryUGCRequestMinimal_Params
{
	struct FScriptDelegate                             Completed;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FUWorksUGCQueryHandle                       UGCQueryHandle;                                            // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUGC.SendQueryUGCRequest
struct UUWorksInterfaceCoreUGC_SendQueryUGCRequest_Params
{
	class UUWorksRequestCoreSendQueryUGCRequest*       ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUGC.RemoveItemPreview
struct UUWorksInterfaceCoreUGC_RemoveItemPreview_Params
{
	struct FUWorksUGCUpdateHandle                      Handle;                                                    // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUGC.RemoveItemKeyValueTags
struct UUWorksInterfaceCoreUGC_RemoveItemKeyValueTags_Params
{
	struct FUWorksUGCUpdateHandle                      Handle;                                                    // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     Key;                                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUGC.RemoveItemFromFavoritesMinimal
struct UUWorksInterfaceCoreUGC_RemoveItemFromFavoritesMinimal_Params
{
	struct FScriptDelegate                             Completed;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksPublishedFileID                      PublishedFileID;                                           // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUGC.RemoveItemFromFavorites
struct UUWorksInterfaceCoreUGC_RemoveItemFromFavorites_Params
{
	class UUWorksRequestCoreRemoveItemFromFavorites*   ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUGC.ReleaseQueryUGCRequest
struct UUWorksInterfaceCoreUGC_ReleaseQueryUGCRequest_Params
{
	struct FUWorksUGCQueryHandle                       Handle;                                                    // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUGC.GetUserItemVoteMinimal
struct UUWorksInterfaceCoreUGC_GetUserItemVoteMinimal_Params
{
	struct FScriptDelegate                             Completed;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FUWorksPublishedFileID                      PublishedFileID;                                           // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUGC.GetUserItemVote
struct UUWorksInterfaceCoreUGC_GetUserItemVote_Params
{
	class UUWorksRequestCoreGetUserItemVote*           ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUGC.GetUGC
struct UUWorksInterfaceCoreUGC_GetUGC_Params
{
	class UUWorksInterfaceCoreUGC*                     ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUGC.GetSubscribedItems
struct UUWorksInterfaceCoreUGC_GetSubscribedItems_Params
{
	TArray<struct FUWorksPublishedFileID>              PublishedFileIDs;                                          // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                MaxEntries;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUGC.GetQueryUGCStatistic
struct UUWorksInterfaceCoreUGC_GetQueryUGCStatistic_Params
{
	struct FUWorksUGCQueryHandle                       Handle;                                                    // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksItemStatistic                    StatType;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     StatValue;                                                 // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUGC.GetQueryUGCResult
struct UUWorksInterfaceCoreUGC_GetQueryUGCResult_Params
{
	struct FUWorksUGCQueryHandle                       Handle;                                                    // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamUGCDetails                      Details;                                                   // 0x0000(0x00A8)  (Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUGC.GetQueryUGCPreviewURL
struct UUWorksInterfaceCoreUGC_GetQueryUGCPreviewURL_Params
{
	struct FUWorksUGCQueryHandle                       Handle;                                                    // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     URL;                                                       // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                URLMaxLength;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUGC.GetQueryUGCNumKeyValueTags
struct UUWorksInterfaceCoreUGC_GetQueryUGCNumKeyValueTags_Params
{
	struct FUWorksUGCQueryHandle                       Handle;                                                    // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUGC.GetQueryUGCNumAdditionalPreviews
struct UUWorksInterfaceCoreUGC_GetQueryUGCNumAdditionalPreviews_Params
{
	struct FUWorksUGCQueryHandle                       Handle;                                                    // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUGC.GetQueryUGCMetadata
struct UUWorksInterfaceCoreUGC_GetQueryUGCMetadata_Params
{
	struct FUWorksUGCQueryHandle                       Handle;                                                    // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     MetaData;                                                  // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MetadataMaxLength;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUGC.GetQueryUGCKeyValueTag
struct UUWorksInterfaceCoreUGC_GetQueryUGCKeyValueTag_Params
{
	struct FUWorksUGCQueryHandle                       Handle;                                                    // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                KeyValueTagIndex;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Key;                                                       // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                KeyMaxLength;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Value;                                                     // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ValueMaxLength;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUGC.GetQueryUGCChildren
struct UUWorksInterfaceCoreUGC_GetQueryUGCChildren_Params
{
	struct FUWorksUGCQueryHandle                       Handle;                                                    // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FUWorksPublishedFileID>              PublishedFileIDs;                                          // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                MaxEntries;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUGC.GetQueryUGCAdditionalPreview
struct UUWorksInterfaceCoreUGC_GetQueryUGCAdditionalPreview_Params
{
	struct FUWorksUGCQueryHandle                       Handle;                                                    // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PreviewIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     URLOrVideoID;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                URLOrVideoIDMaxLength;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     OriginalFileName;                                          // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OriginalFileNameMaxLength;                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksItemPreviewType                  PreviewType;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUGC.GetNumSubscribedItems
struct UUWorksInterfaceCoreUGC_GetNumSubscribedItems_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUGC.GetItemUpdateProgress
struct UUWorksInterfaceCoreUGC_GetItemUpdateProgress_Params
{
	struct FUWorksUGCUpdateHandle                      Handle;                                                    // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     BytesProcessed;                                            // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     BytesTotal;                                                // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksItemUpdateStatus                 ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUGC.GetItemState
struct UUWorksInterfaceCoreUGC_GetItemState_Params
{
	struct FUWorksPublishedFileID                      PublishedFileID;                                           // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUGC.GetItemInstallInfo
struct UUWorksInterfaceCoreUGC_GetItemInstallInfo_Params
{
	struct FUWorksPublishedFileID                      PublishedFileID;                                           // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     sizeOnDisk;                                                // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Path;                                                      // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PathMaxLength;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Timestamp;                                                 // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUGC.GetItemDownloadInfo
struct UUWorksInterfaceCoreUGC_GetItemDownloadInfo_Params
{
	struct FUWorksPublishedFileID                      PublishedFileID;                                           // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     BytesDownloaded;                                           // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     BytesTotal;                                                // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUGC.DownloadItem
struct UUWorksInterfaceCoreUGC_DownloadItem_Params
{
	struct FUWorksPublishedFileID                      PublishedFileID;                                           // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bHighPriority;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUGC.CreateQueryUserUGCRequest
struct UUWorksInterfaceCoreUGC_CreateQueryUserUGCRequest_Params
{
	struct FUWorksSteamID                              SteamID;                                                   // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksUserUGCList                      ListType;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksUGCMatchingUGCType               MatchingUGCType;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksUserUGCListSortOrder             SortOrder;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CreatorAppID;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ConsumerAppID;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Page;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksUGCQueryHandle                       ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUGC.CreateQueryUGCDetailsRequest
struct UUWorksInterfaceCoreUGC_CreateQueryUGCDetailsRequest_Params
{
	TArray<struct FUWorksPublishedFileID>              PublishedFileIDs;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                NumPublishedFileIDs;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksUGCQueryHandle                       ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUGC.CreateQueryAllUGCRequest
struct UUWorksInterfaceCoreUGC_CreateQueryAllUGCRequest_Params
{
	UWorksCore_EUWorksUGCQuery                         QueryType;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksUGCMatchingUGCType               MatchingUGCTypeFileType;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CreatorAppID;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ConsumerAppID;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Page;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksUGCQueryHandle                       ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUGC.CreateItemMinimal
struct UUWorksInterfaceCoreUGC_CreateItemMinimal_Params
{
	struct FScriptDelegate                             Completed;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                ConsumerAppID;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksWorkshopFileType                 FileType;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUGC.CreateItem
struct UUWorksInterfaceCoreUGC_CreateItem_Params
{
	class UUWorksRequestCoreCreateItem*                ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUGC.BInitWorkshopForGameServer
struct UUWorksInterfaceCoreUGC_BInitWorkshopForGameServer_Params
{
	int                                                WorkshopDepotID;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Folder;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUGC.AddRequiredTag
struct UUWorksInterfaceCoreUGC_AddRequiredTag_Params
{
	struct FUWorksUGCQueryHandle                       Handle;                                                    // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     TagName;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUGC.AddRequiredKeyValueTag
struct UUWorksInterfaceCoreUGC_AddRequiredKeyValueTag_Params
{
	struct FUWorksUGCQueryHandle                       Handle;                                                    // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     Key;                                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Value;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUGC.AddItemToFavoritesMinimal
struct UUWorksInterfaceCoreUGC_AddItemToFavoritesMinimal_Params
{
	struct FScriptDelegate                             Completed;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksPublishedFileID                      PublishedFileID;                                           // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUGC.AddItemToFavorites
struct UUWorksInterfaceCoreUGC_AddItemToFavorites_Params
{
	class UUWorksRequestCoreAddItemToFavorites*        ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUGC.AddItemPreviewVideo
struct UUWorksInterfaceCoreUGC_AddItemPreviewVideo_Params
{
	struct FUWorksUGCUpdateHandle                      Handle;                                                    // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     VideoID;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUGC.AddItemPreviewFile
struct UUWorksInterfaceCoreUGC_AddItemPreviewFile_Params
{
	struct FUWorksUGCUpdateHandle                      Handle;                                                    // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     PreviewFile;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksItemPreviewType                  Type;                                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUGC.AddItemKeyValueTag
struct UUWorksInterfaceCoreUGC_AddItemKeyValueTag_Params
{
	struct FUWorksUGCUpdateHandle                      Handle;                                                    // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     Key;                                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Value;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUGC.AddExcludedTag
struct UUWorksInterfaceCoreUGC_AddExcludedTag_Params
{
	struct FUWorksUGCQueryHandle                       Handle;                                                    // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     TagName;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUser.UserHasLicenseForApp
struct UUWorksInterfaceCoreUser_UserHasLicenseForApp_Params
{
	struct FUWorksSteamID                              SteamID;                                                   // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksUserHasLicenseForAppResult       ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUser.StopVoiceRecording
struct UUWorksInterfaceCoreUser_StopVoiceRecording_Params
{
};

// Function UWorksCore.UWorksInterfaceCoreUser.StartVoiceRecording
struct UUWorksInterfaceCoreUser_StartVoiceRecording_Params
{
};

// Function UWorksCore.UWorksInterfaceCoreUser.RequestStoreAuthURLMinimal
struct UUWorksInterfaceCoreUser_RequestStoreAuthURLMinimal_Params
{
	struct FScriptDelegate                             Completed;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     URL;                                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUser.RequestStoreAuthURL
struct UUWorksInterfaceCoreUser_RequestStoreAuthURL_Params
{
	class UUWorksRequestCoreRequestStoreAuthURL*       ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUser.RequestEncryptedAppTicketMinimal
struct UUWorksInterfaceCoreUser_RequestEncryptedAppTicketMinimal_Params
{
	struct FScriptDelegate                             Completed;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	TArray<unsigned char>                              Buffer;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUser.RequestEncryptedAppTicket
struct UUWorksInterfaceCoreUser_RequestEncryptedAppTicket_Params
{
	class UUWorksRequestCoreRequestEncryptedAppTicket* ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUser.GetVoiceChannel
struct UUWorksInterfaceCoreUser_GetVoiceChannel_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAudioComponent*                             ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUser.GetVoice
struct UUWorksInterfaceCoreUser_GetVoice_Params
{
	TArray<unsigned char>                              Data;                                                      // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksVoiceResult                      ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUser.GetUser
struct UUWorksInterfaceCoreUser_GetUser_Params
{
	class UUWorksInterfaceCoreUser*                    ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUser.GetSteamID
struct UUWorksInterfaceCoreUser_GetSteamID_Params
{
	struct FUWorksSteamID                              ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUser.GetPlayerSteamLevel
struct UUWorksInterfaceCoreUser_GetPlayerSteamLevel_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUser.GetHSteamUser
struct UUWorksInterfaceCoreUser_GetHSteamUser_Params
{
	struct FUWorksSteamUser                            ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUser.GetGameBadgeLevel
struct UUWorksInterfaceCoreUser_GetGameBadgeLevel_Params
{
	int                                                Series;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFoil;                                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUser.GetEncryptedAppTicket
struct UUWorksInterfaceCoreUser_GetEncryptedAppTicket_Params
{
	TArray<unsigned char>                              Ticket;                                                    // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUser.GetAuthSessionTicket
struct UUWorksInterfaceCoreUser_GetAuthSessionTicket_Params
{
	TArray<unsigned char>                              Ticket;                                                    // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FUWorksTicketHandle                         ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUser.EndAuthSession
struct UUWorksInterfaceCoreUser_EndAuthSession_Params
{
	struct FUWorksSteamID                              SteamID;                                                   // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUser.DecompressVoice
struct UUWorksInterfaceCoreUser_DecompressVoice_Params
{
	TArray<unsigned char>                              CompressedBuffer;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<unsigned char>                              UncompressedBuffer;                                        // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksVoiceResult                      ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUser.CancelAuthTicket
struct UUWorksInterfaceCoreUser_CancelAuthTicket_Params
{
	struct FUWorksTicketHandle                         TicketHandle;                                              // 0x0000(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUser.BLoggedOn
struct UUWorksInterfaceCoreUser_BLoggedOn_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUser.BIsTwoFactorEnabled
struct UUWorksInterfaceCoreUser_BIsTwoFactorEnabled_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUser.BIsPhoneVerified
struct UUWorksInterfaceCoreUser_BIsPhoneVerified_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUser.BIsPhoneRequiringVerification
struct UUWorksInterfaceCoreUser_BIsPhoneRequiringVerification_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUser.BIsPhoneIdentifying
struct UUWorksInterfaceCoreUser_BIsPhoneIdentifying_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUser.BIsBehindNAT
struct UUWorksInterfaceCoreUser_BIsBehindNAT_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUser.BeginAuthSession
struct UUWorksInterfaceCoreUser_BeginAuthSession_Params
{
	TArray<unsigned char>                              Ticket;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksBeginAuthSessionResult           ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUser.AdvertiseGame
struct UUWorksInterfaceCoreUser_AdvertiseGame_Params
{
	struct FUWorksSteamID                              SteamIDGameServer;                                         // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     ServerIP;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ServerPort;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUser.AddBufferToVoiceChannel
struct UUWorksInterfaceCoreUser_AddBufferToVoiceChannel_Params
{
	TArray<unsigned char>                              Buffer;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAudioComponent*                             ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUserStats.UploadLeaderboardScoreMinimal
struct UUWorksInterfaceCoreUserStats_UploadLeaderboardScoreMinimal_Params
{
	struct FScriptDelegate                             Completed;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FUWorksSteamLeaderboard                     SteamLeaderboard;                                          // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksLeaderboardUploadScoreMethod     LeaderboardUploadScoreMethod;                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Score;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int>                                        ScoreDetails;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUserStats.UploadLeaderboardScore
struct UUWorksInterfaceCoreUserStats_UploadLeaderboardScore_Params
{
	class UUWorksRequestCoreUploadLeaderboardScore*    ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUserStats.UpdateAvgRateStat
struct UUWorksInterfaceCoreUserStats_UpdateAvgRateStat_Params
{
	struct FString                                     Name;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CountThisSession;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SessionLength;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUserStats.StoreStats
struct UUWorksInterfaceCoreUserStats_StoreStats_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUserStats.SetStatAsInteger
struct UUWorksInterfaceCoreUserStats_SetStatAsInteger_Params
{
	struct FString                                     Name;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Data;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUserStats.SetStatAsFloat
struct UUWorksInterfaceCoreUserStats_SetStatAsFloat_Params
{
	struct FString                                     Name;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Data;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUserStats.SetAchievement
struct UUWorksInterfaceCoreUserStats_SetAchievement_Params
{
	struct FString                                     Name;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUserStats.ResetAllStats
struct UUWorksInterfaceCoreUserStats_ResetAllStats_Params
{
	bool                                               bAchievementsToo;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUserStats.RequestUserStatsMinimal
struct UUWorksInterfaceCoreUserStats_RequestUserStatsMinimal_Params
{
	struct FScriptDelegate                             Completed;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUserStats.RequestUserStats
struct UUWorksInterfaceCoreUserStats_RequestUserStats_Params
{
	class UUWorksRequestCoreRequestUserStats*          ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUserStats.RequestGlobalStatsMinimal
struct UUWorksInterfaceCoreUserStats_RequestGlobalStatsMinimal_Params
{
	struct FScriptDelegate                             Completed;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                HistoryDays;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUserStats.RequestGlobalStats
struct UUWorksInterfaceCoreUserStats_RequestGlobalStats_Params
{
	class UUWorksRequestCoreRequestGlobalStats*        ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUserStats.RequestGlobalAchievementPercentagesMinimal
struct UUWorksInterfaceCoreUserStats_RequestGlobalAchievementPercentagesMinimal_Params
{
	struct FScriptDelegate                             Completed;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUserStats.RequestGlobalAchievementPercentages
struct UUWorksInterfaceCoreUserStats_RequestGlobalAchievementPercentages_Params
{
	class UUWorksRequestCoreRequestGlobalAchievementPercentages* ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUserStats.RequestCurrentStats
struct UUWorksInterfaceCoreUserStats_RequestCurrentStats_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUserStats.IndicateAchievementProgress
struct UUWorksInterfaceCoreUserStats_IndicateAchievementProgress_Params
{
	struct FString                                     Name;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CurrentProgress;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxProgress;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUserStats.GetUserStats
struct UUWorksInterfaceCoreUserStats_GetUserStats_Params
{
	class UUWorksInterfaceCoreUserStats*               ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUserStats.GetUserStatInteger
struct UUWorksInterfaceCoreUserStats_GetUserStatInteger_Params
{
	struct FUWorksSteamID                              SteamIDUser;                                               // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     Name;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Data;                                                      // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUserStats.GetUserStatFloat
struct UUWorksInterfaceCoreUserStats_GetUserStatFloat_Params
{
	struct FUWorksSteamID                              SteamIDUser;                                               // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     Name;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Data;                                                      // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUserStats.GetUserAchievementAndUnlockTime
struct UUWorksInterfaceCoreUserStats_GetUserAchievementAndUnlockTime_Params
{
	struct FUWorksSteamID                              SteamIDUser;                                               // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     Name;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAchieved;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                UnlockTime;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUserStats.GetUserAchievement
struct UUWorksInterfaceCoreUserStats_GetUserAchievement_Params
{
	struct FUWorksSteamID                              SteamIDUser;                                               // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     Name;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAchieved;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUserStats.GetStatAsInteger
struct UUWorksInterfaceCoreUserStats_GetStatAsInteger_Params
{
	struct FString                                     Name;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Data;                                                      // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUserStats.GetStatAsFloat
struct UUWorksInterfaceCoreUserStats_GetStatAsFloat_Params
{
	struct FString                                     Name;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Data;                                                      // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUserStats.GetNumberOfCurrentPlayersMinimal
struct UUWorksInterfaceCoreUserStats_GetNumberOfCurrentPlayersMinimal_Params
{
	struct FScriptDelegate                             Completed;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUserStats.GetNumberOfCurrentPlayers
struct UUWorksInterfaceCoreUserStats_GetNumberOfCurrentPlayers_Params
{
	class UUWorksRequestCoreGetNumberOfCurrentPlayers* ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUserStats.GetNumAchievements
struct UUWorksInterfaceCoreUserStats_GetNumAchievements_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUserStats.GetNextMostAchievedAchievementInfo
struct UUWorksInterfaceCoreUserStats_GetNextMostAchievedAchievementInfo_Params
{
	int                                                IteratorPrevious;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Name;                                                      // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NameBufferLength;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Percent;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAchieved;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUserStats.GetMostAchievedAchievementInfo
struct UUWorksInterfaceCoreUserStats_GetMostAchievedAchievementInfo_Params
{
	struct FString                                     Name;                                                      // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NameBufferLength;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Percent;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAchieved;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUserStats.GetLeaderboardSortMethod
struct UUWorksInterfaceCoreUserStats_GetLeaderboardSortMethod_Params
{
	struct FUWorksSteamLeaderboard                     SteamLeaderboard;                                          // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksLeaderboardSortMethod            ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUserStats.GetLeaderboardName
struct UUWorksInterfaceCoreUserStats_GetLeaderboardName_Params
{
	struct FUWorksSteamLeaderboard                     SteamLeaderboard;                                          // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUserStats.GetLeaderboardEntryCount
struct UUWorksInterfaceCoreUserStats_GetLeaderboardEntryCount_Params
{
	struct FUWorksSteamLeaderboard                     SteamLeaderboard;                                          // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUserStats.GetLeaderboardDisplayType
struct UUWorksInterfaceCoreUserStats_GetLeaderboardDisplayType_Params
{
	struct FUWorksSteamLeaderboard                     SteamLeaderboard;                                          // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksLeaderboardDisplayType           ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUserStats.GetGlobalStatHistoryFromIntegers
struct UUWorksInterfaceCoreUserStats_GetGlobalStatHistoryFromIntegers_Params
{
	struct FString                                     StatName;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             Data;                                                      // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                HistoryDays;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUserStats.GetGlobalStatHistoryFromFloats
struct UUWorksInterfaceCoreUserStats_GetGlobalStatHistoryFromFloats_Params
{
	struct FString                                     StatName;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             Data;                                                      // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                HistoryDays;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUserStats.GetGlobalStatFromInteger
struct UUWorksInterfaceCoreUserStats_GetGlobalStatFromInteger_Params
{
	struct FString                                     StatName;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Data;                                                      // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUserStats.GetGlobalStatFromFloat
struct UUWorksInterfaceCoreUserStats_GetGlobalStatFromFloat_Params
{
	struct FString                                     StatName;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Data;                                                      // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUserStats.GetDownloadedLeaderboardEntry
struct UUWorksInterfaceCoreUserStats_GetDownloadedLeaderboardEntry_Params
{
	struct FUWorksSteamLeaderboardEntries              SteamLeaderboardEntries;                                   // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksLeaderboardEntry                     LeaderboardEntry;                                          // 0x0000(0x0020)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	TArray<int>                                        Details;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                DetailsMax;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUserStats.GetAchievementName
struct UUWorksInterfaceCoreUserStats_GetAchievementName_Params
{
	int                                                Achievement;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUserStats.GetAchievementIcon
struct UUWorksInterfaceCoreUserStats_GetAchievementIcon_Params
{
	struct FString                                     Name;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUserStats.GetAchievementDisplayAttribute
struct UUWorksInterfaceCoreUserStats_GetAchievementDisplayAttribute_Params
{
	struct FString                                     Name;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Key;                                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUserStats.GetAchievementAndUnlockTime
struct UUWorksInterfaceCoreUserStats_GetAchievementAndUnlockTime_Params
{
	struct FString                                     Name;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAchieved;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                UnlockTime;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUserStats.GetAchievementAchievedPercent
struct UUWorksInterfaceCoreUserStats_GetAchievementAchievedPercent_Params
{
	struct FString                                     Name;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Percent;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUserStats.GetAchievement
struct UUWorksInterfaceCoreUserStats_GetAchievement_Params
{
	struct FString                                     Name;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAchieved;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUserStats.FindOrCreateLeaderboardMinimal
struct UUWorksInterfaceCoreUserStats_FindOrCreateLeaderboardMinimal_Params
{
	struct FScriptDelegate                             Completed;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     LeaderboardName;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksLeaderboardSortMethod            LeaderboardSortMethod;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksLeaderboardDisplayType           LeaderboardDisplayType;                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUserStats.FindOrCreateLeaderboard
struct UUWorksInterfaceCoreUserStats_FindOrCreateLeaderboard_Params
{
	class UUWorksRequestCoreFindOrCreateLeaderboard*   ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUserStats.FindLeaderboardMinimal
struct UUWorksInterfaceCoreUserStats_FindLeaderboardMinimal_Params
{
	struct FScriptDelegate                             Completed;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     LeaderboardName;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUserStats.FindLeaderboard
struct UUWorksInterfaceCoreUserStats_FindLeaderboard_Params
{
	class UUWorksRequestCoreFindLeaderboard*           ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUserStats.DownloadLeaderboardEntriesMinimal
struct UUWorksInterfaceCoreUserStats_DownloadLeaderboardEntriesMinimal_Params
{
	struct FScriptDelegate                             Completed;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FUWorksSteamLeaderboard                     SteamLeaderboard;                                          // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksLeaderboardDataRequest           LeaderboardDataRequest;                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RangeStart;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RangeEnd;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUserStats.DownloadLeaderboardEntriesForUsersMinimal
struct UUWorksInterfaceCoreUserStats_DownloadLeaderboardEntriesForUsersMinimal_Params
{
	struct FScriptDelegate                             Completed;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FUWorksSteamLeaderboard                     SteamLeaderboard;                                          // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FUWorksSteamID>                      users;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUserStats.DownloadLeaderboardEntriesForUsers
struct UUWorksInterfaceCoreUserStats_DownloadLeaderboardEntriesForUsers_Params
{
	class UUWorksRequestCoreDownloadLeaderboardEntriesForUsers* ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUserStats.DownloadLeaderboardEntries
struct UUWorksInterfaceCoreUserStats_DownloadLeaderboardEntries_Params
{
	class UUWorksRequestCoreDownloadLeaderboardEntries* ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUserStats.ClearAchievement
struct UUWorksInterfaceCoreUserStats_ClearAchievement_Params
{
	struct FString                                     Name;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUserStats.AttachLeaderboardUGCMinimal
struct UUWorksInterfaceCoreUserStats_AttachLeaderboardUGCMinimal_Params
{
	struct FScriptDelegate                             Completed;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FUWorksSteamLeaderboard                     SteamLeaderboard;                                          // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FUWorksUGCHandle                            UGCHandle;                                                 // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUserStats.AttachLeaderboardUGC
struct UUWorksInterfaceCoreUserStats_AttachLeaderboardUGC_Params
{
	class UUWorksRequestCoreAttachLeaderboardUGC*      ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUtils.StartVRDashboard
struct UUWorksInterfaceCoreUtils_StartVRDashboard_Params
{
};

// Function UWorksCore.UWorksInterfaceCoreUtils.ShowGamepadTextInput
struct UUWorksInterfaceCoreUtils_ShowGamepadTextInput_Params
{
	UWorksCore_EUWorksGamepadTextInputMode             InputMode;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksGamepadTextInputLineMode         LineInputMode;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Description;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CharMax;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ExistingText;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUtils.SetOverlayNotificationPosition
struct UUWorksInterfaceCoreUtils_SetOverlayNotificationPosition_Params
{
	UWorksCore_EUWorksNotificationPosition             NotificationPosition;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUtils.SetOverlayNotificationInset
struct UUWorksInterfaceCoreUtils_SetOverlayNotificationInset_Params
{
	int                                                HorizontalInset;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                VerticalInset;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUtils.IsSteamRunningInVR
struct UUWorksInterfaceCoreUtils_IsSteamRunningInVR_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUtils.IsSteamInBigPictureMode
struct UUWorksInterfaceCoreUtils_IsSteamInBigPictureMode_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUtils.IsOverlayEnabled
struct UUWorksInterfaceCoreUtils_IsOverlayEnabled_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUtils.GetUtils
struct UUWorksInterfaceCoreUtils_GetUtils_Params
{
	class UUWorksInterfaceCoreUtils*                   ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUtils.GetSteamUILanguage
struct UUWorksInterfaceCoreUtils_GetSteamUILanguage_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUtils.GetServerRealTime
struct UUWorksInterfaceCoreUtils_GetServerRealTime_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUtils.GetSecondsSinceComputerActive
struct UUWorksInterfaceCoreUtils_GetSecondsSinceComputerActive_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUtils.GetSecondsSinceAppActive
struct UUWorksInterfaceCoreUtils_GetSecondsSinceAppActive_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUtils.GetIPCountry
struct UUWorksInterfaceCoreUtils_GetIPCountry_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUtils.GetIPCCallCount
struct UUWorksInterfaceCoreUtils_GetIPCCallCount_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUtils.GetEnteredGamepadTextLength
struct UUWorksInterfaceCoreUtils_GetEnteredGamepadTextLength_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUtils.GetEnteredGamepadTextInput
struct UUWorksInterfaceCoreUtils_GetEnteredGamepadTextInput_Params
{
	struct FString                                     Text;                                                      // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TextMaxLength;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUtils.GetCurrentBatteryPower
struct UUWorksInterfaceCoreUtils_GetCurrentBatteryPower_Params
{
	unsigned char                                      ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUtils.GetConnectedUniverse
struct UUWorksInterfaceCoreUtils_GetConnectedUniverse_Params
{
	UWorksCore_EUWorksUniverse                         ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUtils.GetAppID
struct UUWorksInterfaceCoreUtils_GetAppID_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreUtils.BOverlayNeedsPresent
struct UUWorksInterfaceCoreUtils_BOverlayNeedsPresent_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreVideo.IsBroadcasting
struct UUWorksInterfaceCoreVideo_IsBroadcasting_Params
{
	int                                                NumViewers;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreVideo.GetVideoURL
struct UUWorksInterfaceCoreVideo_GetVideoURL_Params
{
	int                                                VideoAppID;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksInterfaceCoreVideo.GetVideo
struct UUWorksInterfaceCoreVideo_GetVideo_Params
{
	class UUWorksInterfaceCoreVideo*                   ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreGetFileDetails.SetInput
struct UUWorksRequestCoreGetFileDetails_SetInput_Params
{
	struct FString                                     Filename;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreGetFileDetails.IsActive
struct UUWorksRequestCoreGetFileDetails_IsActive_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreGetFileDetails.GetOutput
struct UUWorksRequestCoreGetFileDetails_GetOutput_Params
{
	UWorksCore_EUWorksResult                           Result;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FileSize;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     FileSHA;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int>                                        FileFlags;                                                 // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreGetFileDetails.Deactivate
struct UUWorksRequestCoreGetFileDetails_Deactivate_Params
{
};

// Function UWorksCore.UWorksRequestCoreGetFileDetails.Activate
struct UUWorksRequestCoreGetFileDetails_Activate_Params
{
};

// Function UWorksCore.UWorksRequestCoreSetPersonaName.SetInput
struct UUWorksRequestCoreSetPersonaName_SetInput_Params
{
	struct FString                                     Name;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreSetPersonaName.IsActive
struct UUWorksRequestCoreSetPersonaName_IsActive_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreSetPersonaName.GetOutput
struct UUWorksRequestCoreSetPersonaName_GetOutput_Params
{
	bool                                               bSuccess;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLocalSuccess;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksResult                           Result;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreSetPersonaName.Deactivate
struct UUWorksRequestCoreSetPersonaName_Deactivate_Params
{
};

// Function UWorksCore.UWorksRequestCoreSetPersonaName.Activate
struct UUWorksRequestCoreSetPersonaName_Activate_Params
{
};

// Function UWorksCore.UWorksRequestCoreDownloadClanActivityCounts.SetInput
struct UUWorksRequestCoreDownloadClanActivityCounts_SetInput_Params
{
	TArray<struct FUWorksSteamID>                      SteamIDClans;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreDownloadClanActivityCounts.IsActive
struct UUWorksRequestCoreDownloadClanActivityCounts_IsActive_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreDownloadClanActivityCounts.GetOutput
struct UUWorksRequestCoreDownloadClanActivityCounts_GetOutput_Params
{
	bool                                               bSuccess;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreDownloadClanActivityCounts.Deactivate
struct UUWorksRequestCoreDownloadClanActivityCounts_Deactivate_Params
{
};

// Function UWorksCore.UWorksRequestCoreDownloadClanActivityCounts.Activate
struct UUWorksRequestCoreDownloadClanActivityCounts_Activate_Params
{
};

// Function UWorksCore.UWorksRequestCoreRequestClanOfficerList.SetInput
struct UUWorksRequestCoreRequestClanOfficerList_SetInput_Params
{
	struct FUWorksSteamID                              SteamID;                                                   // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreRequestClanOfficerList.IsActive
struct UUWorksRequestCoreRequestClanOfficerList_IsActive_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreRequestClanOfficerList.GetOutput
struct UUWorksRequestCoreRequestClanOfficerList_GetOutput_Params
{
	struct FUWorksSteamID                              SteamIDClan;                                               // 0x0000(0x0008)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                Officers;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSuccess;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreRequestClanOfficerList.Deactivate
struct UUWorksRequestCoreRequestClanOfficerList_Deactivate_Params
{
};

// Function UWorksCore.UWorksRequestCoreRequestClanOfficerList.Activate
struct UUWorksRequestCoreRequestClanOfficerList_Activate_Params
{
};

// Function UWorksCore.UWorksRequestCoreJoinClanChatRoom.SetInput
struct UUWorksRequestCoreJoinClanChatRoom_SetInput_Params
{
	struct FUWorksSteamID                              SteamIDClan;                                               // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreJoinClanChatRoom.IsActive
struct UUWorksRequestCoreJoinClanChatRoom_IsActive_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreJoinClanChatRoom.GetOutput
struct UUWorksRequestCoreJoinClanChatRoom_GetOutput_Params
{
	struct FUWorksSteamID                              SteamIDClanChat;                                           // 0x0000(0x0008)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksChatRoomEnterResponse            ChatRoomEnterResponse;                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreJoinClanChatRoom.Deactivate
struct UUWorksRequestCoreJoinClanChatRoom_Deactivate_Params
{
};

// Function UWorksCore.UWorksRequestCoreJoinClanChatRoom.Activate
struct UUWorksRequestCoreJoinClanChatRoom_Activate_Params
{
};

// Function UWorksCore.UWorksRequestCoreGetFollowerCount.SetInput
struct UUWorksRequestCoreGetFollowerCount_SetInput_Params
{
	struct FUWorksSteamID                              SteamID;                                                   // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreGetFollowerCount.IsActive
struct UUWorksRequestCoreGetFollowerCount_IsActive_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreGetFollowerCount.GetOutput
struct UUWorksRequestCoreGetFollowerCount_GetOutput_Params
{
	UWorksCore_EUWorksResult                           Result;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // 0x0000(0x0008)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                Count;                                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreGetFollowerCount.Deactivate
struct UUWorksRequestCoreGetFollowerCount_Deactivate_Params
{
};

// Function UWorksCore.UWorksRequestCoreGetFollowerCount.Activate
struct UUWorksRequestCoreGetFollowerCount_Activate_Params
{
};

// Function UWorksCore.UWorksRequestCoreIsFollowing.SetInput
struct UUWorksRequestCoreIsFollowing_SetInput_Params
{
	struct FUWorksSteamID                              SteamID;                                                   // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreIsFollowing.IsActive
struct UUWorksRequestCoreIsFollowing_IsActive_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreIsFollowing.GetOutput
struct UUWorksRequestCoreIsFollowing_GetOutput_Params
{
	UWorksCore_EUWorksResult                           Result;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // 0x0000(0x0008)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bIsFollowing;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreIsFollowing.Deactivate
struct UUWorksRequestCoreIsFollowing_Deactivate_Params
{
};

// Function UWorksCore.UWorksRequestCoreIsFollowing.Activate
struct UUWorksRequestCoreIsFollowing_Activate_Params
{
};

// Function UWorksCore.UWorksRequestCoreEnumerateFollowingList.SetInput
struct UUWorksRequestCoreEnumerateFollowingList_SetInput_Params
{
	int                                                StartIndex;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreEnumerateFollowingList.IsActive
struct UUWorksRequestCoreEnumerateFollowingList_IsActive_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreEnumerateFollowingList.GetOutput
struct UUWorksRequestCoreEnumerateFollowingList_GetOutput_Params
{
	UWorksCore_EUWorksResult                           Result;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FUWorksSteamID>                      SteamIDs;                                                  // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                ResultsReturned;                                           // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TotalResultCount;                                          // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreEnumerateFollowingList.Deactivate
struct UUWorksRequestCoreEnumerateFollowingList_Deactivate_Params
{
};

// Function UWorksCore.UWorksRequestCoreEnumerateFollowingList.Activate
struct UUWorksRequestCoreEnumerateFollowingList_Activate_Params
{
};

// Function UWorksCore.UWorksRequestCoreAssociateWithClan.SetInput
struct UUWorksRequestCoreAssociateWithClan_SetInput_Params
{
	struct FUWorksSteamID                              SteamIDClan;                                               // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreAssociateWithClan.IsActive
struct UUWorksRequestCoreAssociateWithClan_IsActive_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreAssociateWithClan.GetOutput
struct UUWorksRequestCoreAssociateWithClan_GetOutput_Params
{
	UWorksCore_EUWorksResult                           Result;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreAssociateWithClan.Deactivate
struct UUWorksRequestCoreAssociateWithClan_Deactivate_Params
{
};

// Function UWorksCore.UWorksRequestCoreAssociateWithClan.Activate
struct UUWorksRequestCoreAssociateWithClan_Activate_Params
{
};

// Function UWorksCore.UWorksRequestCoreComputeNewPlayerCompatibility.SetInput
struct UUWorksRequestCoreComputeNewPlayerCompatibility_SetInput_Params
{
	struct FUWorksSteamID                              SteamIDNewPlayer;                                          // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreComputeNewPlayerCompatibility.IsActive
struct UUWorksRequestCoreComputeNewPlayerCompatibility_IsActive_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreComputeNewPlayerCompatibility.GetOutput
struct UUWorksRequestCoreComputeNewPlayerCompatibility_GetOutput_Params
{
	UWorksCore_EUWorksResult                           Result;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlayersThatDontLikeCandidate;                              // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlayersThatCandidateDoesntLike;                            // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ClanPlayersThatDontLikeCandidate;                          // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamIDCandidate;                                          // 0x0000(0x0008)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreComputeNewPlayerCompatibility.Deactivate
struct UUWorksRequestCoreComputeNewPlayerCompatibility_Deactivate_Params
{
};

// Function UWorksCore.UWorksRequestCoreComputeNewPlayerCompatibility.Activate
struct UUWorksRequestCoreComputeNewPlayerCompatibility_Activate_Params
{
};

// Function UWorksCore.UWorksRequestCoreRequestUserStatsGS.SetInput
struct UUWorksRequestCoreRequestUserStatsGS_SetInput_Params
{
	struct FUWorksSteamID                              SteamIDUser;                                               // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreRequestUserStatsGS.IsActive
struct UUWorksRequestCoreRequestUserStatsGS_IsActive_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreRequestUserStatsGS.GetOutput
struct UUWorksRequestCoreRequestUserStatsGS_GetOutput_Params
{
	UWorksCore_EUWorksResult                           Result;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamIDUser;                                               // 0x0000(0x0008)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreRequestUserStatsGS.Deactivate
struct UUWorksRequestCoreRequestUserStatsGS_Deactivate_Params
{
};

// Function UWorksCore.UWorksRequestCoreRequestUserStatsGS.Activate
struct UUWorksRequestCoreRequestUserStatsGS_Activate_Params
{
};

// Function UWorksCore.UWorksRequestCoreStoreUserStats.SetInput
struct UUWorksRequestCoreStoreUserStats_SetInput_Params
{
	struct FUWorksSteamID                              SteamIDUser;                                               // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreStoreUserStats.IsActive
struct UUWorksRequestCoreStoreUserStats_IsActive_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreStoreUserStats.GetOutput
struct UUWorksRequestCoreStoreUserStats_GetOutput_Params
{
	UWorksCore_EUWorksResult                           Result;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamIDUser;                                               // 0x0000(0x0008)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreStoreUserStats.Deactivate
struct UUWorksRequestCoreStoreUserStats_Deactivate_Params
{
};

// Function UWorksCore.UWorksRequestCoreStoreUserStats.Activate
struct UUWorksRequestCoreStoreUserStats_Activate_Params
{
};

// Function UWorksCore.UWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs.SetInput
struct UUWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs_SetInput_Params
{
	struct FUWorksSteamID                              SteamID;                                                   // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs.IsActive
struct UUWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs_IsActive_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs.GetOutput
struct UUWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs_GetOutput_Params
{
	UWorksCore_EUWorksResult                           Result;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // 0x0000(0x0008)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                NumEligiblePromoItemsDefinitionsIDs;                       // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCachedData;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs.Deactivate
struct UUWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs_Deactivate_Params
{
};

// Function UWorksCore.UWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs.Activate
struct UUWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs_Activate_Params
{
};

// Function UWorksCore.UWorksRequestCoreRequestLobbyList.IsActive
struct UUWorksRequestCoreRequestLobbyList_IsActive_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreRequestLobbyList.GetOutput
struct UUWorksRequestCoreRequestLobbyList_GetOutput_Params
{
	int                                                LobbiesMatching;                                           // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreRequestLobbyList.Deactivate
struct UUWorksRequestCoreRequestLobbyList_Deactivate_Params
{
};

// Function UWorksCore.UWorksRequestCoreRequestLobbyList.Activate
struct UUWorksRequestCoreRequestLobbyList_Activate_Params
{
};

// Function UWorksCore.UWorksRequestCoreCreateLobby.SetInput
struct UUWorksRequestCoreCreateLobby_SetInput_Params
{
	UWorksCore_EUWorksLobbyType                        LobbyType;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxMembers;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreCreateLobby.IsActive
struct UUWorksRequestCoreCreateLobby_IsActive_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreCreateLobby.GetOutput
struct UUWorksRequestCoreCreateLobby_GetOutput_Params
{
	UWorksCore_EUWorksResult                           Result;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamIDLobby;                                              // 0x0000(0x0008)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreCreateLobby.Deactivate
struct UUWorksRequestCoreCreateLobby_Deactivate_Params
{
};

// Function UWorksCore.UWorksRequestCoreCreateLobby.Activate
struct UUWorksRequestCoreCreateLobby_Activate_Params
{
};

// Function UWorksCore.UWorksRequestCoreJoinLobby.SetInput
struct UUWorksRequestCoreJoinLobby_SetInput_Params
{
	struct FUWorksSteamID                              SteamIDLobby;                                              // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreJoinLobby.IsActive
struct UUWorksRequestCoreJoinLobby_IsActive_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreJoinLobby.GetOutput
struct UUWorksRequestCoreJoinLobby_GetOutput_Params
{
	struct FUWorksSteamID                              SteamIDLobby;                                              // 0x0000(0x0008)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	TArray<unsigned char>                              ChatPermissions;                                           // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bLocked;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksChatRoomEnterResponse            ChatRoomEnterResponse;                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreJoinLobby.Deactivate
struct UUWorksRequestCoreJoinLobby_Deactivate_Params
{
};

// Function UWorksCore.UWorksRequestCoreJoinLobby.Activate
struct UUWorksRequestCoreJoinLobby_Activate_Params
{
};

// Function UWorksCore.UWorksRequestCoreServerList.SetInput
struct UUWorksRequestCoreServerList_SetInput_Params
{
	int                                                AppID;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksServerQueryType                  QueryType;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreServerList.IsActive
struct UUWorksRequestCoreServerList_IsActive_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreServerList.GetOutput
struct UUWorksRequestCoreServerList_GetOutput_Params
{
	struct FUWorksServerInfo                           UpdatedServer;                                             // 0x0000(0x0098)  (Parm, OutParm, NativeAccessSpecifierPublic)
	TArray<struct FUWorksServerInfo>                   Servers;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreServerList.Deactivate
struct UUWorksRequestCoreServerList_Deactivate_Params
{
};

// Function UWorksCore.UWorksRequestCoreServerList.AddFilterSecure
struct UUWorksRequestCoreServerList_AddFilterSecure_Params
{
};

// Function UWorksCore.UWorksRequestCoreServerList.AddFilterOr
struct UUWorksRequestCoreServerList_AddFilterOr_Params
{
	int                                                Value;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreServerList.AddFilterNotFull
struct UUWorksRequestCoreServerList_AddFilterNotFull_Params
{
};

// Function UWorksCore.UWorksRequestCoreServerList.AddFilterNor
struct UUWorksRequestCoreServerList_AddFilterNor_Params
{
	int                                                Value;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreServerList.AddFilterNoPlayers
struct UUWorksRequestCoreServerList_AddFilterNoPlayers_Params
{
};

// Function UWorksCore.UWorksRequestCoreServerList.AddFilterNand
struct UUWorksRequestCoreServerList_AddFilterNand_Params
{
	int                                                Value;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreServerList.AddFilterMap
struct UUWorksRequestCoreServerList_AddFilterMap_Params
{
	struct FString                                     Value;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreServerList.AddFilterLinux
struct UUWorksRequestCoreServerList_AddFilterLinux_Params
{
};

// Function UWorksCore.UWorksRequestCoreServerList.AddFilterHasPlayers
struct UUWorksRequestCoreServerList_AddFilterHasPlayers_Params
{
};

// Function UWorksCore.UWorksRequestCoreServerList.AddFilterGameTagsNor
struct UUWorksRequestCoreServerList_AddFilterGameTagsNor_Params
{
	struct FString                                     Value;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreServerList.AddFilterGameTagsAnd
struct UUWorksRequestCoreServerList_AddFilterGameTagsAnd_Params
{
	struct FString                                     Value;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreServerList.AddFilterGameDataOr
struct UUWorksRequestCoreServerList_AddFilterGameDataOr_Params
{
	struct FString                                     Value;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreServerList.AddFilterGameDataNor
struct UUWorksRequestCoreServerList_AddFilterGameDataNor_Params
{
	struct FString                                     Value;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreServerList.AddFilterGameDataAnd
struct UUWorksRequestCoreServerList_AddFilterGameDataAnd_Params
{
	struct FString                                     Value;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreServerList.AddFilterGameAddr
struct UUWorksRequestCoreServerList_AddFilterGameAddr_Params
{
	struct FString                                     Value;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreServerList.AddFilterDedicated
struct UUWorksRequestCoreServerList_AddFilterDedicated_Params
{
};

// Function UWorksCore.UWorksRequestCoreServerList.AddFilterAnd
struct UUWorksRequestCoreServerList_AddFilterAnd_Params
{
	int                                                Value;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreServerList.AddFilterAddr
struct UUWorksRequestCoreServerList_AddFilterAddr_Params
{
	struct FString                                     Value;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreServerList.Activate
struct UUWorksRequestCoreServerList_Activate_Params
{
};

// Function UWorksCore.UWorksRequestCorePing.SetInput
struct UUWorksRequestCorePing_SetInput_Params
{
	struct FString                                     IP;                                                        // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Port;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCorePing.IsActive
struct UUWorksRequestCorePing_IsActive_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCorePing.GetOutput
struct UUWorksRequestCorePing_GetOutput_Params
{
	struct FUWorksServerInfo                           Server;                                                    // 0x0000(0x0098)  (Parm, OutParm, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCorePing.Deactivate
struct UUWorksRequestCorePing_Deactivate_Params
{
};

// Function UWorksCore.UWorksRequestCorePing.Activate
struct UUWorksRequestCorePing_Activate_Params
{
};

// Function UWorksCore.UWorksRequestCorePlayers.SetInput
struct UUWorksRequestCorePlayers_SetInput_Params
{
	struct FString                                     IP;                                                        // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Port;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCorePlayers.IsActive
struct UUWorksRequestCorePlayers_IsActive_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCorePlayers.GetOutput
struct UUWorksRequestCorePlayers_GetOutput_Params
{
	struct FUWorksPlayerInfo                           UpdatedPlayer;                                             // 0x0000(0x0018)  (Parm, OutParm, NativeAccessSpecifierPublic)
	TArray<struct FUWorksPlayerInfo>                   Players;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCorePlayers.Deactivate
struct UUWorksRequestCorePlayers_Deactivate_Params
{
};

// Function UWorksCore.UWorksRequestCorePlayers.Activate
struct UUWorksRequestCorePlayers_Activate_Params
{
};

// Function UWorksCore.UWorksRequestCoreRules.SetInput
struct UUWorksRequestCoreRules_SetInput_Params
{
	struct FString                                     IP;                                                        // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Port;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreRules.IsActive
struct UUWorksRequestCoreRules_IsActive_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreRules.GetOutput
struct UUWorksRequestCoreRules_GetOutput_Params
{
	struct FUWorksRuleInfo                             UpdatedRule;                                               // 0x0000(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
	TArray<struct FUWorksRuleInfo>                     Rules;                                                     // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreRules.Deactivate
struct UUWorksRequestCoreRules_Deactivate_Params
{
};

// Function UWorksCore.UWorksRequestCoreRules.Activate
struct UUWorksRequestCoreRules_Activate_Params
{
};

// Function UWorksCore.UWorksRequestCoreFileWriteAsync.SetInput
struct UUWorksRequestCoreFileWriteAsync_SetInput_Params
{
	struct FString                                     File;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<unsigned char>                              Buffer;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreFileWriteAsync.IsActive
struct UUWorksRequestCoreFileWriteAsync_IsActive_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreFileWriteAsync.GetOutput
struct UUWorksRequestCoreFileWriteAsync_GetOutput_Params
{
	UWorksCore_EUWorksResult                           Result;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreFileWriteAsync.Deactivate
struct UUWorksRequestCoreFileWriteAsync_Deactivate_Params
{
};

// Function UWorksCore.UWorksRequestCoreFileWriteAsync.Activate
struct UUWorksRequestCoreFileWriteAsync_Activate_Params
{
};

// Function UWorksCore.UWorksRequestCoreFileReadAsync.SetInput
struct UUWorksRequestCoreFileReadAsync_SetInput_Params
{
	struct FString                                     File;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Offset;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BytesToRead;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreFileReadAsync.IsActive
struct UUWorksRequestCoreFileReadAsync_IsActive_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreFileReadAsync.GetOutput
struct UUWorksRequestCoreFileReadAsync_GetOutput_Params
{
	UWorksCore_EUWorksResult                           Result;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Offset;                                                    // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<unsigned char>                              Buffer;                                                    // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreFileReadAsync.Deactivate
struct UUWorksRequestCoreFileReadAsync_Deactivate_Params
{
};

// Function UWorksCore.UWorksRequestCoreFileReadAsync.Activate
struct UUWorksRequestCoreFileReadAsync_Activate_Params
{
};

// Function UWorksCore.UWorksRequestCoreSendQueryUGCRequest.SetInput
struct UUWorksRequestCoreSendQueryUGCRequest_SetInput_Params
{
	struct FUWorksUGCQueryHandle                       UGCQueryHandle;                                            // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreSendQueryUGCRequest.IsActive
struct UUWorksRequestCoreSendQueryUGCRequest_IsActive_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreSendQueryUGCRequest.GetOutput
struct UUWorksRequestCoreSendQueryUGCRequest_GetOutput_Params
{
	struct FUWorksUGCQueryHandle                       UGCQueryHandle;                                            // 0x0000(0x0008)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksResult                           Result;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumResultsReturned;                                        // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TotalMatchingResults;                                      // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCachedData;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreSendQueryUGCRequest.Deactivate
struct UUWorksRequestCoreSendQueryUGCRequest_Deactivate_Params
{
};

// Function UWorksCore.UWorksRequestCoreSendQueryUGCRequest.Activate
struct UUWorksRequestCoreSendQueryUGCRequest_Activate_Params
{
};

// Function UWorksCore.UWorksRequestCoreCreateItem.SetInput
struct UUWorksRequestCoreCreateItem_SetInput_Params
{
	int                                                ConsumerAppID;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksWorkshopFileType                 FileType;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreCreateItem.IsActive
struct UUWorksRequestCoreCreateItem_IsActive_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreCreateItem.GetOutput
struct UUWorksRequestCoreCreateItem_GetOutput_Params
{
	UWorksCore_EUWorksResult                           Result;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksPublishedFileID                      PublishedFileID;                                           // 0x0000(0x0008)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bUserNeedsToAcceptWorkshopLegalAgreement;                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreCreateItem.Deactivate
struct UUWorksRequestCoreCreateItem_Deactivate_Params
{
};

// Function UWorksCore.UWorksRequestCoreCreateItem.Activate
struct UUWorksRequestCoreCreateItem_Activate_Params
{
};

// Function UWorksCore.UWorksRequestCoreSubmitItemUpdate.SetInput
struct UUWorksRequestCoreSubmitItemUpdate_SetInput_Params
{
	struct FUWorksUGCUpdateHandle                      UGCUpdateHandle;                                           // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     ChangeNote;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreSubmitItemUpdate.IsActive
struct UUWorksRequestCoreSubmitItemUpdate_IsActive_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreSubmitItemUpdate.GetOutput
struct UUWorksRequestCoreSubmitItemUpdate_GetOutput_Params
{
	UWorksCore_EUWorksResult                           Result;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUserNeedsToAcceptWorkshopLegalAgreement;                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreSubmitItemUpdate.Deactivate
struct UUWorksRequestCoreSubmitItemUpdate_Deactivate_Params
{
};

// Function UWorksCore.UWorksRequestCoreSubmitItemUpdate.Activate
struct UUWorksRequestCoreSubmitItemUpdate_Activate_Params
{
};

// Function UWorksCore.UWorksRequestCoreSetUserItemVote.SetInput
struct UUWorksRequestCoreSetUserItemVote_SetInput_Params
{
	struct FUWorksPublishedFileID                      PublishedFileID;                                           // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bVoteUp;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreSetUserItemVote.IsActive
struct UUWorksRequestCoreSetUserItemVote_IsActive_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreSetUserItemVote.GetOutput
struct UUWorksRequestCoreSetUserItemVote_GetOutput_Params
{
	struct FUWorksPublishedFileID                      PublishedFileID;                                           // 0x0000(0x0008)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksResult                           Result;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bVoteUp;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreSetUserItemVote.Deactivate
struct UUWorksRequestCoreSetUserItemVote_Deactivate_Params
{
};

// Function UWorksCore.UWorksRequestCoreSetUserItemVote.Activate
struct UUWorksRequestCoreSetUserItemVote_Activate_Params
{
};

// Function UWorksCore.UWorksRequestCoreGetUserItemVote.SetInput
struct UUWorksRequestCoreGetUserItemVote_SetInput_Params
{
	struct FUWorksPublishedFileID                      PublishedFileID;                                           // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreGetUserItemVote.IsActive
struct UUWorksRequestCoreGetUserItemVote_IsActive_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreGetUserItemVote.GetOutput
struct UUWorksRequestCoreGetUserItemVote_GetOutput_Params
{
	struct FUWorksPublishedFileID                      PublishedFileID;                                           // 0x0000(0x0008)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksResult                           Result;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bVotedUp;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bVotedDown;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bVoteSkipped;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreGetUserItemVote.Deactivate
struct UUWorksRequestCoreGetUserItemVote_Deactivate_Params
{
};

// Function UWorksCore.UWorksRequestCoreGetUserItemVote.Activate
struct UUWorksRequestCoreGetUserItemVote_Activate_Params
{
};

// Function UWorksCore.UWorksRequestCoreAddItemToFavorites.SetInput
struct UUWorksRequestCoreAddItemToFavorites_SetInput_Params
{
	int                                                AppID;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksPublishedFileID                      PublishedFileID;                                           // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreAddItemToFavorites.IsActive
struct UUWorksRequestCoreAddItemToFavorites_IsActive_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreAddItemToFavorites.GetOutput
struct UUWorksRequestCoreAddItemToFavorites_GetOutput_Params
{
	struct FUWorksPublishedFileID                      PublishedFileID;                                           // 0x0000(0x0008)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksResult                           Result;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bWasAddRequest;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreAddItemToFavorites.Deactivate
struct UUWorksRequestCoreAddItemToFavorites_Deactivate_Params
{
};

// Function UWorksCore.UWorksRequestCoreAddItemToFavorites.Activate
struct UUWorksRequestCoreAddItemToFavorites_Activate_Params
{
};

// Function UWorksCore.UWorksRequestCoreRemoveItemFromFavorites.SetInput
struct UUWorksRequestCoreRemoveItemFromFavorites_SetInput_Params
{
	int                                                AppID;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksPublishedFileID                      PublishedFileID;                                           // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreRemoveItemFromFavorites.IsActive
struct UUWorksRequestCoreRemoveItemFromFavorites_IsActive_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreRemoveItemFromFavorites.GetOutput
struct UUWorksRequestCoreRemoveItemFromFavorites_GetOutput_Params
{
	struct FUWorksPublishedFileID                      PublishedFileID;                                           // 0x0000(0x0008)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksResult                           Result;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bWasAddRequest;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreRemoveItemFromFavorites.Deactivate
struct UUWorksRequestCoreRemoveItemFromFavorites_Deactivate_Params
{
};

// Function UWorksCore.UWorksRequestCoreRemoveItemFromFavorites.Activate
struct UUWorksRequestCoreRemoveItemFromFavorites_Activate_Params
{
};

// Function UWorksCore.UWorksRequestCoreSubscribeItem.SetInput
struct UUWorksRequestCoreSubscribeItem_SetInput_Params
{
	struct FUWorksPublishedFileID                      PublishedFileID;                                           // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreSubscribeItem.IsActive
struct UUWorksRequestCoreSubscribeItem_IsActive_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreSubscribeItem.GetOutput
struct UUWorksRequestCoreSubscribeItem_GetOutput_Params
{
	UWorksCore_EUWorksResult                           Result;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksPublishedFileID                      PublishedFileID;                                           // 0x0000(0x0008)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreSubscribeItem.Deactivate
struct UUWorksRequestCoreSubscribeItem_Deactivate_Params
{
};

// Function UWorksCore.UWorksRequestCoreSubscribeItem.Activate
struct UUWorksRequestCoreSubscribeItem_Activate_Params
{
};

// Function UWorksCore.UWorksRequestCoreUnsubscribeItem.SetInput
struct UUWorksRequestCoreUnsubscribeItem_SetInput_Params
{
	struct FUWorksPublishedFileID                      PublishedFileID;                                           // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreUnsubscribeItem.IsActive
struct UUWorksRequestCoreUnsubscribeItem_IsActive_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreUnsubscribeItem.GetOutput
struct UUWorksRequestCoreUnsubscribeItem_GetOutput_Params
{
	UWorksCore_EUWorksResult                           Result;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksPublishedFileID                      PublishedFileID;                                           // 0x0000(0x0008)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreUnsubscribeItem.Deactivate
struct UUWorksRequestCoreUnsubscribeItem_Deactivate_Params
{
};

// Function UWorksCore.UWorksRequestCoreUnsubscribeItem.Activate
struct UUWorksRequestCoreUnsubscribeItem_Activate_Params
{
};

// Function UWorksCore.UWorksRequestCoreStartPlaytimeTracking.SetInput
struct UUWorksRequestCoreStartPlaytimeTracking_SetInput_Params
{
	TArray<struct FUWorksPublishedFileID>              PublishedFileID;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreStartPlaytimeTracking.IsActive
struct UUWorksRequestCoreStartPlaytimeTracking_IsActive_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreStartPlaytimeTracking.GetOutput
struct UUWorksRequestCoreStartPlaytimeTracking_GetOutput_Params
{
	UWorksCore_EUWorksResult                           Result;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreStartPlaytimeTracking.Deactivate
struct UUWorksRequestCoreStartPlaytimeTracking_Deactivate_Params
{
};

// Function UWorksCore.UWorksRequestCoreStartPlaytimeTracking.Activate
struct UUWorksRequestCoreStartPlaytimeTracking_Activate_Params
{
};

// Function UWorksCore.UWorksRequestCoreStopPlaytimeTracking.SetInput
struct UUWorksRequestCoreStopPlaytimeTracking_SetInput_Params
{
	TArray<struct FUWorksPublishedFileID>              PublishedFileIDs;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreStopPlaytimeTracking.IsActive
struct UUWorksRequestCoreStopPlaytimeTracking_IsActive_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreStopPlaytimeTracking.GetOutput
struct UUWorksRequestCoreStopPlaytimeTracking_GetOutput_Params
{
	UWorksCore_EUWorksResult                           Result;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreStopPlaytimeTracking.Deactivate
struct UUWorksRequestCoreStopPlaytimeTracking_Deactivate_Params
{
};

// Function UWorksCore.UWorksRequestCoreStopPlaytimeTracking.Activate
struct UUWorksRequestCoreStopPlaytimeTracking_Activate_Params
{
};

// Function UWorksCore.UWorksRequestCoreStopPlaytimeTrackingForAllItems.IsActive
struct UUWorksRequestCoreStopPlaytimeTrackingForAllItems_IsActive_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreStopPlaytimeTrackingForAllItems.GetOutput
struct UUWorksRequestCoreStopPlaytimeTrackingForAllItems_GetOutput_Params
{
	UWorksCore_EUWorksResult                           Result;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreStopPlaytimeTrackingForAllItems.Deactivate
struct UUWorksRequestCoreStopPlaytimeTrackingForAllItems_Deactivate_Params
{
};

// Function UWorksCore.UWorksRequestCoreStopPlaytimeTrackingForAllItems.Activate
struct UUWorksRequestCoreStopPlaytimeTrackingForAllItems_Activate_Params
{
};

// Function UWorksCore.UWorksRequestCoreRequestEncryptedAppTicket.SetInput
struct UUWorksRequestCoreRequestEncryptedAppTicket_SetInput_Params
{
	TArray<unsigned char>                              Buffer;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreRequestEncryptedAppTicket.IsActive
struct UUWorksRequestCoreRequestEncryptedAppTicket_IsActive_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreRequestEncryptedAppTicket.GetOutput
struct UUWorksRequestCoreRequestEncryptedAppTicket_GetOutput_Params
{
	UWorksCore_EUWorksResult                           Result;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreRequestEncryptedAppTicket.Deactivate
struct UUWorksRequestCoreRequestEncryptedAppTicket_Deactivate_Params
{
};

// Function UWorksCore.UWorksRequestCoreRequestEncryptedAppTicket.Activate
struct UUWorksRequestCoreRequestEncryptedAppTicket_Activate_Params
{
};

// Function UWorksCore.UWorksRequestCoreRequestStoreAuthURL.SetInput
struct UUWorksRequestCoreRequestStoreAuthURL_SetInput_Params
{
	struct FString                                     URL;                                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreRequestStoreAuthURL.IsActive
struct UUWorksRequestCoreRequestStoreAuthURL_IsActive_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreRequestStoreAuthURL.GetOutput
struct UUWorksRequestCoreRequestStoreAuthURL_GetOutput_Params
{
	struct FString                                     URL;                                                       // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreRequestStoreAuthURL.Deactivate
struct UUWorksRequestCoreRequestStoreAuthURL_Deactivate_Params
{
};

// Function UWorksCore.UWorksRequestCoreRequestStoreAuthURL.Activate
struct UUWorksRequestCoreRequestStoreAuthURL_Activate_Params
{
};

// Function UWorksCore.UWorksRequestCoreRequestUserStats.SetInput
struct UUWorksRequestCoreRequestUserStats_SetInput_Params
{
	struct FUWorksSteamID                              SteamID;                                                   // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreRequestUserStats.IsActive
struct UUWorksRequestCoreRequestUserStats_IsActive_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreRequestUserStats.GetOutput
struct UUWorksRequestCoreRequestUserStats_GetOutput_Params
{
	struct FUWorksGameID                               GameID;                                                    // 0x0000(0x0008)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksResult                           Result;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // 0x0000(0x0008)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreRequestUserStats.Deactivate
struct UUWorksRequestCoreRequestUserStats_Deactivate_Params
{
};

// Function UWorksCore.UWorksRequestCoreRequestUserStats.Activate
struct UUWorksRequestCoreRequestUserStats_Activate_Params
{
};

// Function UWorksCore.UWorksRequestCoreFindOrCreateLeaderboard.SetInput
struct UUWorksRequestCoreFindOrCreateLeaderboard_SetInput_Params
{
	struct FString                                     LeaderboardName;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksLeaderboardSortMethod            LeaderboardSortMethod;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksLeaderboardDisplayType           LeaderboardDisplayType;                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreFindOrCreateLeaderboard.IsActive
struct UUWorksRequestCoreFindOrCreateLeaderboard_IsActive_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreFindOrCreateLeaderboard.GetOutput
struct UUWorksRequestCoreFindOrCreateLeaderboard_GetOutput_Params
{
	struct FUWorksSteamLeaderboard                     SteamLeaderboard;                                          // 0x0000(0x0008)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bLeaderboardFound;                                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreFindOrCreateLeaderboard.Deactivate
struct UUWorksRequestCoreFindOrCreateLeaderboard_Deactivate_Params
{
};

// Function UWorksCore.UWorksRequestCoreFindOrCreateLeaderboard.Activate
struct UUWorksRequestCoreFindOrCreateLeaderboard_Activate_Params
{
};

// Function UWorksCore.UWorksRequestCoreFindLeaderboard.SetInput
struct UUWorksRequestCoreFindLeaderboard_SetInput_Params
{
	struct FString                                     LeaderboardName;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreFindLeaderboard.IsActive
struct UUWorksRequestCoreFindLeaderboard_IsActive_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreFindLeaderboard.GetOutput
struct UUWorksRequestCoreFindLeaderboard_GetOutput_Params
{
	struct FUWorksSteamLeaderboard                     SteamLeaderboard;                                          // 0x0000(0x0008)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bLeaderboardFound;                                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreFindLeaderboard.Deactivate
struct UUWorksRequestCoreFindLeaderboard_Deactivate_Params
{
};

// Function UWorksCore.UWorksRequestCoreFindLeaderboard.Activate
struct UUWorksRequestCoreFindLeaderboard_Activate_Params
{
};

// Function UWorksCore.UWorksRequestCoreDownloadLeaderboardEntries.SetInput
struct UUWorksRequestCoreDownloadLeaderboardEntries_SetInput_Params
{
	struct FUWorksSteamLeaderboard                     SteamLeaderboard;                                          // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksLeaderboardDataRequest           LeaderboardDataRequest;                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RangeStart;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RangeEnd;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreDownloadLeaderboardEntries.IsActive
struct UUWorksRequestCoreDownloadLeaderboardEntries_IsActive_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreDownloadLeaderboardEntries.GetOutput
struct UUWorksRequestCoreDownloadLeaderboardEntries_GetOutput_Params
{
	struct FUWorksSteamLeaderboard                     SteamLeaderboard;                                          // 0x0000(0x0008)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FUWorksSteamLeaderboardEntries              SteamLeaderboardEntries;                                   // 0x0000(0x0008)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                EntryCount;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreDownloadLeaderboardEntries.Deactivate
struct UUWorksRequestCoreDownloadLeaderboardEntries_Deactivate_Params
{
};

// Function UWorksCore.UWorksRequestCoreDownloadLeaderboardEntries.Activate
struct UUWorksRequestCoreDownloadLeaderboardEntries_Activate_Params
{
};

// Function UWorksCore.UWorksRequestCoreDownloadLeaderboardEntriesForUsers.SetInput
struct UUWorksRequestCoreDownloadLeaderboardEntriesForUsers_SetInput_Params
{
	struct FUWorksSteamLeaderboard                     SteamLeaderboard;                                          // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FUWorksSteamID>                      users;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreDownloadLeaderboardEntriesForUsers.IsActive
struct UUWorksRequestCoreDownloadLeaderboardEntriesForUsers_IsActive_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreDownloadLeaderboardEntriesForUsers.GetOutput
struct UUWorksRequestCoreDownloadLeaderboardEntriesForUsers_GetOutput_Params
{
	struct FUWorksSteamLeaderboard                     SteamLeaderboard;                                          // 0x0000(0x0008)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FUWorksSteamLeaderboardEntries              SteamLeaderboardEntries;                                   // 0x0000(0x0008)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                EntryCount;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreDownloadLeaderboardEntriesForUsers.Deactivate
struct UUWorksRequestCoreDownloadLeaderboardEntriesForUsers_Deactivate_Params
{
};

// Function UWorksCore.UWorksRequestCoreDownloadLeaderboardEntriesForUsers.Activate
struct UUWorksRequestCoreDownloadLeaderboardEntriesForUsers_Activate_Params
{
};

// Function UWorksCore.UWorksRequestCoreUploadLeaderboardScore.SetInput
struct UUWorksRequestCoreUploadLeaderboardScore_SetInput_Params
{
	struct FUWorksSteamLeaderboard                     SteamLeaderboard;                                          // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksLeaderboardUploadScoreMethod     LeaderboardUploadScoreMethod;                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Score;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int>                                        ScoreDetails;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreUploadLeaderboardScore.IsActive
struct UUWorksRequestCoreUploadLeaderboardScore_IsActive_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreUploadLeaderboardScore.GetOutput
struct UUWorksRequestCoreUploadLeaderboardScore_GetOutput_Params
{
	bool                                               bSuccess;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamLeaderboard                     SteamLeaderboard;                                          // 0x0000(0x0008)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                Score;                                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bScoreChanged;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                GlobalRankNew;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                GlobalRankPrevious;                                        // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreUploadLeaderboardScore.Deactivate
struct UUWorksRequestCoreUploadLeaderboardScore_Deactivate_Params
{
};

// Function UWorksCore.UWorksRequestCoreUploadLeaderboardScore.Activate
struct UUWorksRequestCoreUploadLeaderboardScore_Activate_Params
{
};

// Function UWorksCore.UWorksRequestCoreAttachLeaderboardUGC.SetInput
struct UUWorksRequestCoreAttachLeaderboardUGC_SetInput_Params
{
	struct FUWorksSteamLeaderboard                     SteamLeaderboard;                                          // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FUWorksUGCHandle                            UGCHandle;                                                 // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreAttachLeaderboardUGC.IsActive
struct UUWorksRequestCoreAttachLeaderboardUGC_IsActive_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreAttachLeaderboardUGC.GetOutput
struct UUWorksRequestCoreAttachLeaderboardUGC_GetOutput_Params
{
	UWorksCore_EUWorksResult                           Result;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamLeaderboard                     SteamLeaderboard;                                          // 0x0000(0x0008)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreAttachLeaderboardUGC.Deactivate
struct UUWorksRequestCoreAttachLeaderboardUGC_Deactivate_Params
{
};

// Function UWorksCore.UWorksRequestCoreAttachLeaderboardUGC.Activate
struct UUWorksRequestCoreAttachLeaderboardUGC_Activate_Params
{
};

// Function UWorksCore.UWorksRequestCoreGetNumberOfCurrentPlayers.IsActive
struct UUWorksRequestCoreGetNumberOfCurrentPlayers_IsActive_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreGetNumberOfCurrentPlayers.GetOutput
struct UUWorksRequestCoreGetNumberOfCurrentPlayers_GetOutput_Params
{
	bool                                               bSuccess;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Players;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreGetNumberOfCurrentPlayers.Deactivate
struct UUWorksRequestCoreGetNumberOfCurrentPlayers_Deactivate_Params
{
};

// Function UWorksCore.UWorksRequestCoreGetNumberOfCurrentPlayers.Activate
struct UUWorksRequestCoreGetNumberOfCurrentPlayers_Activate_Params
{
};

// Function UWorksCore.UWorksRequestCoreRequestGlobalAchievementPercentages.IsActive
struct UUWorksRequestCoreRequestGlobalAchievementPercentages_IsActive_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreRequestGlobalAchievementPercentages.GetOutput
struct UUWorksRequestCoreRequestGlobalAchievementPercentages_GetOutput_Params
{
	struct FUWorksGameID                               GameID;                                                    // 0x0000(0x0008)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksResult                           Result;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreRequestGlobalAchievementPercentages.Deactivate
struct UUWorksRequestCoreRequestGlobalAchievementPercentages_Deactivate_Params
{
};

// Function UWorksCore.UWorksRequestCoreRequestGlobalAchievementPercentages.Activate
struct UUWorksRequestCoreRequestGlobalAchievementPercentages_Activate_Params
{
};

// Function UWorksCore.UWorksRequestCoreRequestGlobalStats.SetInput
struct UUWorksRequestCoreRequestGlobalStats_SetInput_Params
{
	int                                                HistoryDays;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreRequestGlobalStats.IsActive
struct UUWorksRequestCoreRequestGlobalStats_IsActive_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreRequestGlobalStats.GetOutput
struct UUWorksRequestCoreRequestGlobalStats_GetOutput_Params
{
	struct FUWorksGameID                               GameID;                                                    // 0x0000(0x0008)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksResult                           Result;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.UWorksRequestCoreRequestGlobalStats.Deactivate
struct UUWorksRequestCoreRequestGlobalStats_Deactivate_Params
{
};

// Function UWorksCore.UWorksRequestCoreRequestGlobalStats.Activate
struct UUWorksRequestCoreRequestGlobalStats_Activate_Params
{
};

// Function UWorksCore.CoreGetFileDetailsNode.OnRequestCompleted
struct UCoreGetFileDetailsNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksResult                           Result;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FileSize;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     FileSHA;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int>                                        FileFlags;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function UWorksCore.CoreGetFileDetailsNode.GetFileDetailsNode
struct UCoreGetFileDetailsNode_GetFileDetailsNode_Params
{
	struct FString                                     Filename;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCoreGetFileDetailsNode*                     ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.CoreSetPersonaNameNode.SetPersonaNameNode
struct UCoreSetPersonaNameNode_SetPersonaNameNode_Params
{
	struct FString                                     Name;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCoreSetPersonaNameNode*                     ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.CoreSetPersonaNameNode.OnRequestCompleted
struct UCoreSetPersonaNameNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSuccess;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLocalSuccess;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksResult                           Result;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.CoreDownloadClanActivityCountsNode.OnRequestCompleted
struct UCoreDownloadClanActivityCountsNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSuccess;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.CoreDownloadClanActivityCountsNode.DownloadClanActivityCountsNode
struct UCoreDownloadClanActivityCountsNode_DownloadClanActivityCountsNode_Params
{
	TArray<struct FUWorksSteamID>                      SteamIDClans;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	class UCoreDownloadClanActivityCountsNode*         ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.CoreRequestClanOfficerListNode.RequestClanOfficerListNode
struct UCoreRequestClanOfficerListNode_RequestClanOfficerListNode_Params
{
	struct FUWorksSteamID                              SteamID;                                                   // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UCoreRequestClanOfficerListNode*             ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.CoreRequestClanOfficerListNode.OnRequestCompleted
struct UCoreRequestClanOfficerListNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamIDClan;                                               // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                Officers;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSuccess;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.CoreJoinClanChatRoomNode.OnRequestCompleted
struct UCoreJoinClanChatRoomNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamIDClanChat;                                           // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksChatRoomEnterResponse            ChatRoomEnterResponse;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.CoreJoinClanChatRoomNode.JoinClanChatRoomNode
struct UCoreJoinClanChatRoomNode_JoinClanChatRoomNode_Params
{
	struct FUWorksSteamID                              SteamIDClan;                                               // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UCoreJoinClanChatRoomNode*                   ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.CoreGetFollowerCountNode.OnRequestCompleted
struct UCoreGetFollowerCountNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksResult                           Result;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                Count;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.CoreGetFollowerCountNode.GetFollowerCountNode
struct UCoreGetFollowerCountNode_GetFollowerCountNode_Params
{
	struct FUWorksSteamID                              SteamID;                                                   // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UCoreGetFollowerCountNode*                   ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.CoreIsFollowingNode.OnRequestCompleted
struct UCoreIsFollowingNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksResult                           Result;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bIsFollowing;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.CoreIsFollowingNode.IsFollowingNode
struct UCoreIsFollowingNode_IsFollowingNode_Params
{
	struct FUWorksSteamID                              SteamID;                                                   // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UCoreIsFollowingNode*                        ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.CoreEnumerateFollowingListNode.OnRequestCompleted
struct UCoreEnumerateFollowingListNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksResult                           Result;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FUWorksSteamID>                      SteamIDs;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	int                                                ResultsReturned;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TotalResultCount;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.CoreEnumerateFollowingListNode.EnumerateFollowingListNode
struct UCoreEnumerateFollowingListNode_EnumerateFollowingListNode_Params
{
	int                                                StartIndex;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCoreEnumerateFollowingListNode*             ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.CoreAssociateWithClanNode.OnRequestCompleted
struct UCoreAssociateWithClanNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksResult                           Result;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.CoreAssociateWithClanNode.AssociateWithClanNode
struct UCoreAssociateWithClanNode_AssociateWithClanNode_Params
{
	struct FUWorksSteamID                              SteamIDClan;                                               // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UCoreAssociateWithClanNode*                  ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.CoreComputeNewPlayerCompatibilityNode.OnRequestCompleted
struct UCoreComputeNewPlayerCompatibilityNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksResult                           Result;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlayersThatDontLikeCandidate;                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlayersThatCandidateDoesntLike;                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ClanPlayersThatDontLikeCandidate;                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamIDCandidate;                                          // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.CoreComputeNewPlayerCompatibilityNode.ComputeNewPlayerCompatibilityNode
struct UCoreComputeNewPlayerCompatibilityNode_ComputeNewPlayerCompatibilityNode_Params
{
	struct FUWorksSteamID                              SteamIDNewPlayer;                                          // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UCoreComputeNewPlayerCompatibilityNode*      ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.CoreRequestUserStatsGSNode.RequestUserStatsGSNode
struct UCoreRequestUserStatsGSNode_RequestUserStatsGSNode_Params
{
	struct FUWorksSteamID                              SteamIDUser;                                               // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UCoreRequestUserStatsGSNode*                 ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.CoreRequestUserStatsGSNode.OnRequestCompleted
struct UCoreRequestUserStatsGSNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksResult                           Result;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamIDUser;                                               // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.CoreStoreUserStatsNode.StoreUserStatsNode
struct UCoreStoreUserStatsNode_StoreUserStatsNode_Params
{
	struct FUWorksSteamID                              SteamIDUser;                                               // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UCoreStoreUserStatsNode*                     ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.CoreStoreUserStatsNode.OnRequestCompleted
struct UCoreStoreUserStatsNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksResult                           Result;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamIDUser;                                               // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.CoreRequestEligiblePromoItemDefinitionsIDsNode.RequestEligiblePromoItemDefinitionsIDsNode
struct UCoreRequestEligiblePromoItemDefinitionsIDsNode_RequestEligiblePromoItemDefinitionsIDsNode_Params
{
	struct FUWorksSteamID                              SteamID;                                                   // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UCoreRequestEligiblePromoItemDefinitionsIDsNode* ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.CoreRequestEligiblePromoItemDefinitionsIDsNode.OnRequestCompleted
struct UCoreRequestEligiblePromoItemDefinitionsIDsNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksResult                           Result;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                NumEligiblePromoItemsDefinitionsIDs;                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCachedData;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.CoreRequestLobbyListNode.RequestLobbyListNode
struct UCoreRequestLobbyListNode_RequestLobbyListNode_Params
{
	class UCoreRequestLobbyListNode*                   ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.CoreRequestLobbyListNode.OnRequestCompleted
struct UCoreRequestLobbyListNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LobbiesMatching;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.CoreCreateLobbyNode.OnRequestCompleted
struct UCoreCreateLobbyNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksResult                           Result;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamIDLobby;                                              // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.CoreCreateLobbyNode.CreateLobbyNode
struct UCoreCreateLobbyNode_CreateLobbyNode_Params
{
	UWorksCore_EUWorksLobbyType                        LobbyType;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxMembers;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCoreCreateLobbyNode*                        ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.CoreJoinLobbyNode.OnRequestCompleted
struct UCoreJoinLobbyNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamIDLobby;                                              // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	TArray<unsigned char>                              ChatPermissions;                                           // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               bLocked;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksChatRoomEnterResponse            ChatRoomEnterResponse;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.CoreJoinLobbyNode.JoinLobbyNode
struct UCoreJoinLobbyNode_JoinLobbyNode_Params
{
	struct FUWorksSteamID                              SteamIDLobby;                                              // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UCoreJoinLobbyNode*                          ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.CoreServerListNode.ServerListNode
struct UCoreServerListNode_ServerListNode_Params
{
	int                                                AppID;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksServerQueryType                  QueryType;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxUpdates;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCoreServerListNode*                         ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.CoreServerListNode.OnRequestUpdated
struct UCoreServerListNode_OnRequestUpdated_Params
{
	bool                                               bSuccessful;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksServerInfo                           Server;                                                    // 0x0000(0x0098)  (Parm, NativeAccessSpecifierPublic)
};

// Function UWorksCore.CorePingNode.PingNode
struct UCorePingNode_PingNode_Params
{
	struct FString                                     IP;                                                        // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Port;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCorePingNode*                               ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.CorePingNode.OnRequestCompleted
struct UCorePingNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksServerInfo                           Server;                                                    // 0x0000(0x0098)  (Parm, NativeAccessSpecifierPublic)
};

// Function UWorksCore.CorePlayersNode.PlayersNode
struct UCorePlayersNode_PlayersNode_Params
{
	struct FString                                     IP;                                                        // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Port;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxUpdates;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCorePlayersNode*                            ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.CorePlayersNode.OnRequestUpdated
struct UCorePlayersNode_OnRequestUpdated_Params
{
	bool                                               bSuccessful;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksPlayerInfo                           Player;                                                    // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
};

// Function UWorksCore.CoreRulesNode.RulesNode
struct UCoreRulesNode_RulesNode_Params
{
	struct FString                                     IP;                                                        // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Port;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxUpdates;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCoreRulesNode*                              ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.CoreRulesNode.OnRequestUpdated
struct UCoreRulesNode_OnRequestUpdated_Params
{
	bool                                               bSuccessful;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksRuleInfo                             Rule;                                                      // 0x0000(0x0020)  (Parm, NativeAccessSpecifierPublic)
};

// Function UWorksCore.CoreFileWriteAsyncNode.OnRequestCompleted
struct UCoreFileWriteAsyncNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksResult                           Result;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.CoreFileWriteAsyncNode.FileWriteAsyncNode
struct UCoreFileWriteAsyncNode_FileWriteAsyncNode_Params
{
	struct FString                                     File;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<unsigned char>                              Buffer;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	class UCoreFileWriteAsyncNode*                     ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.CoreFileReadAsyncNode.OnRequestCompleted
struct UCoreFileReadAsyncNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksResult                           Result;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Offset;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<unsigned char>                              Buffer;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function UWorksCore.CoreFileReadAsyncNode.FileReadAsyncNode
struct UCoreFileReadAsyncNode_FileReadAsyncNode_Params
{
	struct FString                                     File;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Offset;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BytesToRead;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCoreFileReadAsyncNode*                      ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.CoreSendQueryUGCRequestNode.SendQueryUGCRequestNode
struct UCoreSendQueryUGCRequestNode_SendQueryUGCRequestNode_Params
{
	struct FUWorksUGCQueryHandle                       UGCQueryHandle;                                            // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UCoreSendQueryUGCRequestNode*                ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.CoreSendQueryUGCRequestNode.OnRequestCompleted
struct UCoreSendQueryUGCRequestNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksUGCQueryHandle                       UGCQueryHandle;                                            // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksResult                           Result;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumResultsReturned;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TotalMatchingResults;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCachedData;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.CoreCreateItemNode.OnRequestCompleted
struct UCoreCreateItemNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksResult                           Result;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksPublishedFileID                      PublishedFileID;                                           // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bUserNeedsToAcceptWorkshopLegalAgreement;                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.CoreCreateItemNode.CreateItemNode
struct UCoreCreateItemNode_CreateItemNode_Params
{
	int                                                ConsumerAppID;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksWorkshopFileType                 FileType;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCoreCreateItemNode*                         ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.CoreSubmitItemUpdateNode.SubmitItemUpdateNode
struct UCoreSubmitItemUpdateNode_SubmitItemUpdateNode_Params
{
	struct FUWorksUGCUpdateHandle                      UGCUpdateHandle;                                           // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     ChangeNote;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCoreSubmitItemUpdateNode*                   ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.CoreSubmitItemUpdateNode.OnRequestCompleted
struct UCoreSubmitItemUpdateNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksResult                           Result;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUserNeedsToAcceptWorkshopLegalAgreement;                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.CoreSetUserItemVoteNode.SetUserItemVoteNode
struct UCoreSetUserItemVoteNode_SetUserItemVoteNode_Params
{
	struct FUWorksPublishedFileID                      PublishedFileID;                                           // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bVoteUp;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCoreSetUserItemVoteNode*                    ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.CoreSetUserItemVoteNode.OnRequestCompleted
struct UCoreSetUserItemVoteNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksPublishedFileID                      PublishedFileID;                                           // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksResult                           Result;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bVoteUp;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.CoreGetUserItemVoteNode.OnRequestCompleted
struct UCoreGetUserItemVoteNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksPublishedFileID                      PublishedFileID;                                           // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksResult                           Result;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bVotedUp;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bVotedDown;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bVoteSkipped;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.CoreGetUserItemVoteNode.GetUserItemVoteNode
struct UCoreGetUserItemVoteNode_GetUserItemVoteNode_Params
{
	struct FUWorksPublishedFileID                      PublishedFileID;                                           // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UCoreGetUserItemVoteNode*                    ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.CoreAddItemToFavoritesNode.OnRequestCompleted
struct UCoreAddItemToFavoritesNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksPublishedFileID                      PublishedFileID;                                           // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksResult                           Result;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bWasAddRequest;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.CoreAddItemToFavoritesNode.AddItemToFavoritesNode
struct UCoreAddItemToFavoritesNode_AddItemToFavoritesNode_Params
{
	int                                                AppID;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksPublishedFileID                      PublishedFileID;                                           // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UCoreAddItemToFavoritesNode*                 ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.CoreRemoveItemFromFavoritesNode.RemoveItemFromFavoritesNode
struct UCoreRemoveItemFromFavoritesNode_RemoveItemFromFavoritesNode_Params
{
	int                                                AppID;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksPublishedFileID                      PublishedFileID;                                           // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UCoreRemoveItemFromFavoritesNode*            ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.CoreRemoveItemFromFavoritesNode.OnRequestCompleted
struct UCoreRemoveItemFromFavoritesNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksPublishedFileID                      PublishedFileID;                                           // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksResult                           Result;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bWasAddRequest;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.CoreSubscribeItemNode.SubscribeItemNode
struct UCoreSubscribeItemNode_SubscribeItemNode_Params
{
	struct FUWorksPublishedFileID                      PublishedFileID;                                           // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UCoreSubscribeItemNode*                      ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.CoreSubscribeItemNode.OnRequestCompleted
struct UCoreSubscribeItemNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksResult                           Result;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksPublishedFileID                      PublishedFileID;                                           // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.CoreUnsubscribeItemNode.UnsubscribeItemNode
struct UCoreUnsubscribeItemNode_UnsubscribeItemNode_Params
{
	struct FUWorksPublishedFileID                      PublishedFileID;                                           // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UCoreUnsubscribeItemNode*                    ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.CoreUnsubscribeItemNode.OnRequestCompleted
struct UCoreUnsubscribeItemNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksResult                           Result;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksPublishedFileID                      PublishedFileID;                                           // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.CoreStartPlaytimeTrackingNode.StartPlaytimeTrackingNode
struct UCoreStartPlaytimeTrackingNode_StartPlaytimeTrackingNode_Params
{
	TArray<struct FUWorksPublishedFileID>              PublishedFileID;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	class UCoreStartPlaytimeTrackingNode*              ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.CoreStartPlaytimeTrackingNode.OnRequestCompleted
struct UCoreStartPlaytimeTrackingNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksResult                           Result;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.CoreStopPlaytimeTrackingNode.StopPlaytimeTrackingNode
struct UCoreStopPlaytimeTrackingNode_StopPlaytimeTrackingNode_Params
{
	TArray<struct FUWorksPublishedFileID>              PublishedFileID;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	class UCoreStopPlaytimeTrackingNode*               ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.CoreStopPlaytimeTrackingNode.OnRequestCompleted
struct UCoreStopPlaytimeTrackingNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksResult                           Result;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.CoreStopPlaytimeTrackingForAllItemsNode.StopPlaytimeTrackingForAllItemsNode
struct UCoreStopPlaytimeTrackingForAllItemsNode_StopPlaytimeTrackingForAllItemsNode_Params
{
	class UCoreStopPlaytimeTrackingForAllItemsNode*    ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.CoreStopPlaytimeTrackingForAllItemsNode.OnRequestCompleted
struct UCoreStopPlaytimeTrackingForAllItemsNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksResult                           Result;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.CoreRequestEncryptedAppTicketNode.RequestEncryptedAppTicketNode
struct UCoreRequestEncryptedAppTicketNode_RequestEncryptedAppTicketNode_Params
{
	TArray<unsigned char>                              Buffer;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	class UCoreRequestEncryptedAppTicketNode*          ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.CoreRequestEncryptedAppTicketNode.OnRequestCompleted
struct UCoreRequestEncryptedAppTicketNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksResult                           Result;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.CoreRequestStoreAuthURLNode.RequestStoreAuthURLNode
struct UCoreRequestStoreAuthURLNode_RequestStoreAuthURLNode_Params
{
	struct FString                                     URL;                                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCoreRequestStoreAuthURLNode*                ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.CoreRequestStoreAuthURLNode.OnRequestCompleted
struct UCoreRequestStoreAuthURLNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     URL;                                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.CoreRequestUserStatsNode.RequestUserStatsNode
struct UCoreRequestUserStatsNode_RequestUserStatsNode_Params
{
	struct FUWorksSteamID                              SteamID;                                                   // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UCoreRequestUserStatsNode*                   ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.CoreRequestUserStatsNode.OnRequestCompleted
struct UCoreRequestUserStatsNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksGameID                               GameID;                                                    // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksResult                           Result;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.CoreFindOrCreateLeaderboardNode.OnRequestCompleted
struct UCoreFindOrCreateLeaderboardNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamLeaderboard                     SteamLeaderboard;                                          // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bLeaderboardFound;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.CoreFindOrCreateLeaderboardNode.FindOrCreateLeaderboardNode
struct UCoreFindOrCreateLeaderboardNode_FindOrCreateLeaderboardNode_Params
{
	struct FString                                     LeaderboardName;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksLeaderboardSortMethod            LeaderboardSortMethod;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksLeaderboardDisplayType           LeaderboardDisplayType;                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCoreFindOrCreateLeaderboardNode*            ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.CoreFindLeaderboardNode.OnRequestCompleted
struct UCoreFindLeaderboardNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamLeaderboard                     SteamLeaderboard;                                          // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bLeaderboardFound;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.CoreFindLeaderboardNode.FindLeaderboardNode
struct UCoreFindLeaderboardNode_FindLeaderboardNode_Params
{
	struct FString                                     LeaderboardName;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCoreFindLeaderboardNode*                    ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.CoreDownloadLeaderboardEntriesNode.OnRequestCompleted
struct UCoreDownloadLeaderboardEntriesNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamLeaderboard                     SteamLeaderboard;                                          // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FUWorksSteamLeaderboardEntries              SteamLeaderboardEntries;                                   // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                EntryCount;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.CoreDownloadLeaderboardEntriesNode.DownloadLeaderboardEntriesNode
struct UCoreDownloadLeaderboardEntriesNode_DownloadLeaderboardEntriesNode_Params
{
	struct FUWorksSteamLeaderboard                     SteamLeaderboard;                                          // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksLeaderboardDataRequest           LeaderboardDataRequest;                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RangeStart;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RangeEnd;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCoreDownloadLeaderboardEntriesNode*         ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.CoreDownloadLeaderboardEntriesForUsersNode.OnRequestCompleted
struct UCoreDownloadLeaderboardEntriesForUsersNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamLeaderboard                     SteamLeaderboard;                                          // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FUWorksSteamLeaderboardEntries              SteamLeaderboardEntries;                                   // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                EntryCount;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.CoreDownloadLeaderboardEntriesForUsersNode.DownloadLeaderboardEntriesForUsersNode
struct UCoreDownloadLeaderboardEntriesForUsersNode_DownloadLeaderboardEntriesForUsersNode_Params
{
	struct FUWorksSteamLeaderboard                     SteamLeaderboard;                                          // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FUWorksSteamID>                      users;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	class UCoreDownloadLeaderboardEntriesForUsersNode* ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.CoreUploadLeaderboardScoreNode.UploadLeaderboardScoreNode
struct UCoreUploadLeaderboardScoreNode_UploadLeaderboardScoreNode_Params
{
	struct FUWorksSteamLeaderboard                     SteamLeaderboard;                                          // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksLeaderboardUploadScoreMethod     LeaderboardUploadScoreMethod;                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Score;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int>                                        ScoreDetails;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	class UCoreUploadLeaderboardScoreNode*             ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.CoreUploadLeaderboardScoreNode.OnRequestCompleted
struct UCoreUploadLeaderboardScoreNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSuccess;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamLeaderboard                     SteamLeaderboard;                                          // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                Score;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bScoreChanged;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                GlobalRankNew;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                GlobalRankPrevious;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.CoreAttachLeaderboardUGCNode.OnRequestCompleted
struct UCoreAttachLeaderboardUGCNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksResult                           Result;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamLeaderboard                     SteamLeaderboard;                                          // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UWorksCore.CoreAttachLeaderboardUGCNode.AttachLeaderboardUGCNode
struct UCoreAttachLeaderboardUGCNode_AttachLeaderboardUGCNode_Params
{
	struct FUWorksSteamLeaderboard                     SteamLeaderboard;                                          // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FUWorksUGCHandle                            UGCHandle;                                                 // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UCoreAttachLeaderboardUGCNode*               ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.CoreGetNumberOfCurrentPlayersNode.OnRequestCompleted
struct UCoreGetNumberOfCurrentPlayersNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSuccess;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Players;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.CoreGetNumberOfCurrentPlayersNode.GetNumberOfCurrentPlayersNode
struct UCoreGetNumberOfCurrentPlayersNode_GetNumberOfCurrentPlayersNode_Params
{
	class UCoreGetNumberOfCurrentPlayersNode*          ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.CoreRequestGlobalAchievementPercentagesNode.RequestGlobalAchievementPercentagesNode
struct UCoreRequestGlobalAchievementPercentagesNode_RequestGlobalAchievementPercentagesNode_Params
{
	class UCoreRequestGlobalAchievementPercentagesNode* ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.CoreRequestGlobalAchievementPercentagesNode.OnRequestCompleted
struct UCoreRequestGlobalAchievementPercentagesNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksGameID                               GameID;                                                    // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksResult                           Result;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.CoreRequestGlobalStatsNode.RequestGlobalStatsNode
struct UCoreRequestGlobalStatsNode_RequestGlobalStatsNode_Params
{
	int                                                HistoryDays;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCoreRequestGlobalStatsNode*                 ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UWorksCore.CoreRequestGlobalStatsNode.OnRequestCompleted
struct UCoreRequestGlobalStatsNode_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksGameID                               GameID;                                                    // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksResult                           Result;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
