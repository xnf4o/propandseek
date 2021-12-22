// Name: pns, Version: 1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x002A3E20
//		Name   -> Function UWorksCore.UWorksInterfaceCoreAppList.GetNumInstalledApps
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreAppList::GetNumInstalledApps()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreAppList.GetNumInstalledApps");

	UUWorksInterfaceCoreAppList_GetNumInstalledApps_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002A3D30
//		Name   -> Function UWorksCore.UWorksInterfaceCoreAppList.GetInstalledApps
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<int>                                        AppIDs                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
//		int                                                MaxAppIDs                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreAppList::GetInstalledApps(TArray<int>* AppIDs, int MaxAppIDs)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreAppList.GetInstalledApps");

	UUWorksInterfaceCoreAppList_GetInstalledApps_Params params {};
	params.MaxAppIDs = MaxAppIDs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AppIDs != nullptr)
		*AppIDs = params.AppIDs;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002A3C00
//		Name   -> Function UWorksCore.UWorksInterfaceCoreAppList.GetAppName
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		int                                                AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Name                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                NameMaxLength                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreAppList::GetAppName(int AppID, struct FString* Name, int NameMaxLength)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreAppList.GetAppName");

	UUWorksInterfaceCoreAppList_GetAppName_Params params {};
	params.AppID = AppID;
	params.NameMaxLength = NameMaxLength;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002A3BD0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreAppList.GetAppList
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UUWorksInterfaceCoreAppList*                 ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksInterfaceCoreAppList* UUWorksInterfaceCoreAppList::STATIC_GetAppList()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreAppList.GetAppList");

	UUWorksInterfaceCoreAppList_GetAppList_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002A3AA0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreAppList.GetAppInstallDir
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		int                                                AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Directory                                                  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                DirectoryMaxLength                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreAppList::GetAppInstallDir(int AppID, struct FString* Directory, int DirectoryMaxLength)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreAppList.GetAppInstallDir");

	UUWorksInterfaceCoreAppList_GetAppInstallDir_Params params {};
	params.AppID = AppID;
	params.DirectoryMaxLength = DirectoryMaxLength;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Directory != nullptr)
		*Directory = params.Directory;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002A3A10
//		Name   -> Function UWorksCore.UWorksInterfaceCoreAppList.GetAppBuildId
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreAppList::GetAppBuildId(int AppID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreAppList.GetAppBuildId");

	UUWorksInterfaceCoreAppList_GetAppBuildId_Params params {};
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002A53A0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreApps.UninstallDLC
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreApps::UninstallDLC(int AppID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreApps.UninstallDLC");

	UUWorksInterfaceCoreApps_UninstallDLC_Params params {};
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002A5310
//		Name   -> Function UWorksCore.UWorksInterfaceCoreApps.MarkContentCorrupt
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bMissingFilesOnly                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreApps::MarkContentCorrupt(bool bMissingFilesOnly)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreApps.MarkContentCorrupt");

	UUWorksInterfaceCoreApps_MarkContentCorrupt_Params params {};
	params.bMissingFilesOnly = bMissingFilesOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002A5290
//		Name   -> Function UWorksCore.UWorksInterfaceCoreApps.InstallDLC
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreApps::InstallDLC(int AppID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreApps.InstallDLC");

	UUWorksInterfaceCoreApps_InstallDLC_Params params {};
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002A5160
//		Name   -> Function UWorksCore.UWorksInterfaceCoreApps.GetLaunchQueryParam
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UUWorksInterfaceCoreApps::GetLaunchQueryParam(const struct FString& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreApps.GetLaunchQueryParam");

	UUWorksInterfaceCoreApps_GetLaunchQueryParam_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002A5030
//		Name   -> Function UWorksCore.UWorksInterfaceCoreApps.GetInstalledDepots
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		int                                                AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<int>                                        Depots                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
//		int                                                MaxDepots                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreApps::GetInstalledDepots(int AppID, TArray<int>* Depots, int MaxDepots)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreApps.GetInstalledDepots");

	UUWorksInterfaceCoreApps_GetInstalledDepots_Params params {};
	params.AppID = AppID;
	params.MaxDepots = MaxDepots;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Depots != nullptr)
		*Depots = params.Depots;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002A4EE0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreApps.GetFileDetailsMinimal
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FScriptDelegate                             Completed                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FString                                     Filename                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreApps::GetFileDetailsMinimal(const struct FScriptDelegate& Completed, const struct FString& Filename)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreApps.GetFileDetailsMinimal");

	UUWorksInterfaceCoreApps_GetFileDetailsMinimal_Params params {};
	params.Completed = Completed;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002A4EB0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreApps.GetFileDetails
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UUWorksRequestCoreGetFileDetails*            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestCoreGetFileDetails* UUWorksInterfaceCoreApps::GetFileDetails()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreApps.GetFileDetails");

	UUWorksInterfaceCoreApps_GetFileDetails_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002A4E20
//		Name   -> Function UWorksCore.UWorksInterfaceCoreApps.GetEarliestPurchaseUnixTime
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreApps::GetEarliestPurchaseUnixTime(int AppID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreApps.GetEarliestPurchaseUnixTime");

	UUWorksInterfaceCoreApps_GetEarliestPurchaseUnixTime_Params params {};
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002A4D00
//		Name   -> Function UWorksCore.UWorksInterfaceCoreApps.GetDlcDownloadProgress
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		int                                                AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                BytesDownloaded                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                BytesTotal                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreApps::GetDlcDownloadProgress(int AppID, int* BytesDownloaded, int* BytesTotal)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreApps.GetDlcDownloadProgress");

	UUWorksInterfaceCoreApps_GetDlcDownloadProgress_Params params {};
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BytesDownloaded != nullptr)
		*BytesDownloaded = params.BytesDownloaded;
	if (BytesTotal != nullptr)
		*BytesTotal = params.BytesTotal;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002A4CD0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreApps.GetDLCCount
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreApps::GetDLCCount()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreApps.GetDLCCount");

	UUWorksInterfaceCoreApps_GetDLCCount_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002A4C50
//		Name   -> Function UWorksCore.UWorksInterfaceCoreApps.GetCurrentGameLanguage
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UUWorksInterfaceCoreApps::GetCurrentGameLanguage()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreApps.GetCurrentGameLanguage");

	UUWorksInterfaceCoreApps_GetCurrentGameLanguage_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002A4B60
//		Name   -> Function UWorksCore.UWorksInterfaceCoreApps.GetCurrentBetaName
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FString                                     Name                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                NameMaxLength                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreApps::GetCurrentBetaName(struct FString* Name, int NameMaxLength)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreApps.GetCurrentBetaName");

	UUWorksInterfaceCoreApps_GetCurrentBetaName_Params params {};
	params.NameMaxLength = NameMaxLength;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002A4AE0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreApps.GetAvailableGameLanguages
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UUWorksInterfaceCoreApps::GetAvailableGameLanguages()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreApps.GetAvailableGameLanguages");

	UUWorksInterfaceCoreApps_GetAvailableGameLanguages_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002A4AB0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreApps.GetApps
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UUWorksInterfaceCoreApps*                    ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksInterfaceCoreApps* UUWorksInterfaceCoreApps::STATIC_GetApps()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreApps.GetApps");

	UUWorksInterfaceCoreApps_GetApps_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002A4A70
//		Name   -> Function UWorksCore.UWorksInterfaceCoreApps.GetAppOwner
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FUWorksSteamID UUWorksInterfaceCoreApps::GetAppOwner()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreApps.GetAppOwner");

	UUWorksInterfaceCoreApps_GetAppOwner_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002A4940
//		Name   -> Function UWorksCore.UWorksInterfaceCoreApps.GetAppInstallDir
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		int                                                AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Path                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                PathMaxLength                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreApps::GetAppInstallDir(int AppID, struct FString* Path, int PathMaxLength)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreApps.GetAppInstallDir");

	UUWorksInterfaceCoreApps_GetAppInstallDir_Params params {};
	params.AppID = AppID;
	params.PathMaxLength = PathMaxLength;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Path != nullptr)
		*Path = params.Path;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002A4910
//		Name   -> Function UWorksCore.UWorksInterfaceCoreApps.GetAppBuildId
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreApps::GetAppBuildId()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreApps.GetAppBuildId");

	UUWorksInterfaceCoreApps_GetAppBuildId_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002A48E0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreApps.BIsVACBanned
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreApps::BIsVACBanned()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreApps.BIsVACBanned");

	UUWorksInterfaceCoreApps_BIsVACBanned_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002A48B0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreApps.BIsSubscribedFromFreeWeekend
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreApps::BIsSubscribedFromFreeWeekend()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreApps.BIsSubscribedFromFreeWeekend");

	UUWorksInterfaceCoreApps_BIsSubscribedFromFreeWeekend_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002A4820
//		Name   -> Function UWorksCore.UWorksInterfaceCoreApps.BIsSubscribedApp
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreApps::BIsSubscribedApp(int AppID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreApps.BIsSubscribedApp");

	UUWorksInterfaceCoreApps_BIsSubscribedApp_Params params {};
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002A47F0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreApps.BIsSubscribed
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreApps::BIsSubscribed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreApps.BIsSubscribed");

	UUWorksInterfaceCoreApps_BIsSubscribed_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002A47C0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreApps.BIsLowViolence
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreApps::BIsLowViolence()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreApps.BIsLowViolence");

	UUWorksInterfaceCoreApps_BIsLowViolence_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002A4730
//		Name   -> Function UWorksCore.UWorksInterfaceCoreApps.BIsDlcInstalled
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreApps::BIsDlcInstalled(int AppID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreApps.BIsDlcInstalled");

	UUWorksInterfaceCoreApps_BIsDlcInstalled_Params params {};
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002A4700
//		Name   -> Function UWorksCore.UWorksInterfaceCoreApps.BIsCybercafe
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreApps::BIsCybercafe()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreApps.BIsCybercafe");

	UUWorksInterfaceCoreApps_BIsCybercafe_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002A4670
//		Name   -> Function UWorksCore.UWorksInterfaceCoreApps.BIsAppInstalled
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreApps::BIsAppInstalled(int AppID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreApps.BIsAppInstalled");

	UUWorksInterfaceCoreApps_BIsAppInstalled_Params params {};
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002A4480
//		Name   -> Function UWorksCore.UWorksInterfaceCoreApps.BGetDLCDataByIndex
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		int                                                DLC                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                AppID                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bAvailable                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Name                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                NameMaxLength                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreApps::BGetDLCDataByIndex(int DLC, int* AppID, bool* bAvailable, struct FString* Name, int NameMaxLength)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreApps.BGetDLCDataByIndex");

	UUWorksInterfaceCoreApps_BGetDLCDataByIndex_Params params {};
	params.DLC = DLC;
	params.NameMaxLength = NameMaxLength;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AppID != nullptr)
		*AppID = params.AppID;
	if (bAvailable != nullptr)
		*bAvailable = params.bAvailable;
	if (Name != nullptr)
		*Name = params.Name;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002A6C20
//		Name   -> Function UWorksCore.UWorksInterfaceCoreController.TriggerVibration
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksControllerHandle                     ControllerHandle                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		int                                                LeftSpeed                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                RightSpeed                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreController::TriggerVibration(const struct FUWorksControllerHandle& ControllerHandle, int LeftSpeed, int RightSpeed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreController.TriggerVibration");

	UUWorksInterfaceCoreController_TriggerVibration_Params params {};
	params.ControllerHandle = ControllerHandle;
	params.LeftSpeed = LeftSpeed;
	params.RightSpeed = RightSpeed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002A6A70
//		Name   -> Function UWorksCore.UWorksInterfaceCoreController.TriggerRepeatedHapticPulse
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksControllerHandle                     ControllerHandle                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		UWorksCore_EUWorksSteamControllerPad               TargetPad                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                DurationMicroSec                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                OffMicroSec                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Repeat                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Flags                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreController::TriggerRepeatedHapticPulse(const struct FUWorksControllerHandle& ControllerHandle, UWorksCore_EUWorksSteamControllerPad TargetPad, int DurationMicroSec, int OffMicroSec, int Repeat, int Flags)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreController.TriggerRepeatedHapticPulse");

	UUWorksInterfaceCoreController_TriggerRepeatedHapticPulse_Params params {};
	params.ControllerHandle = ControllerHandle;
	params.TargetPad = TargetPad;
	params.DurationMicroSec = DurationMicroSec;
	params.OffMicroSec = OffMicroSec;
	params.Repeat = Repeat;
	params.Flags = Flags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002A6960
//		Name   -> Function UWorksCore.UWorksInterfaceCoreController.TriggerHapticPulse
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksControllerHandle                     ControllerHandle                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		UWorksCore_EUWorksSteamControllerPad               TargetPad                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                DurationMicroSec                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreController::TriggerHapticPulse(const struct FUWorksControllerHandle& ControllerHandle, UWorksCore_EUWorksSteamControllerPad TargetPad, int DurationMicroSec)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreController.TriggerHapticPulse");

	UUWorksInterfaceCoreController_TriggerHapticPulse_Params params {};
	params.ControllerHandle = ControllerHandle;
	params.TargetPad = TargetPad;
	params.DurationMicroSec = DurationMicroSec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002A68A0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreController.StopAnalogActionMomentum
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksControllerHandle                     ControllerHandle                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FUWorksControllerAnalogActionHandle         action                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreController::StopAnalogActionMomentum(const struct FUWorksControllerHandle& ControllerHandle, const struct FUWorksControllerAnalogActionHandle& action)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreController.StopAnalogActionMomentum");

	UUWorksInterfaceCoreController_StopAnalogActionMomentum_Params params {};
	params.ControllerHandle = ControllerHandle;
	params.action = action;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002A6870
//		Name   -> Function UWorksCore.UWorksInterfaceCoreController.Shutdown
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreController::Shutdown()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreController.Shutdown");

	UUWorksInterfaceCoreController_Shutdown_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002A67E0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreController.ShowBindingPanel
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksControllerHandle                     ControllerHandle                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreController::ShowBindingPanel(const struct FUWorksControllerHandle& ControllerHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreController.ShowBindingPanel");

	UUWorksInterfaceCoreController_ShowBindingPanel_Params params {};
	params.ControllerHandle = ControllerHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002A6600
//		Name   -> Function UWorksCore.UWorksInterfaceCoreController.SetLEDColor
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksControllerHandle                     ControllerHandle                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		unsigned char                                      ColorR                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		unsigned char                                      ColorG                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		unsigned char                                      ColorB                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<UWorksCore_EUWorksSteamControllerLEDFlag>   Flags                                                      (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreController::SetLEDColor(const struct FUWorksControllerHandle& ControllerHandle, unsigned char ColorR, unsigned char ColorG, unsigned char ColorB, TArray<UWorksCore_EUWorksSteamControllerLEDFlag> Flags)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreController.SetLEDColor");

	UUWorksInterfaceCoreController_SetLEDColor_Params params {};
	params.ControllerHandle = ControllerHandle;
	params.ColorR = ColorR;
	params.ColorG = ColorG;
	params.ColorB = ColorB;
	params.Flags = Flags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002A65E0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreController.RunFrame
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UUWorksInterfaceCoreController::RunFrame()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreController.RunFrame");

	UUWorksInterfaceCoreController_RunFrame_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002A65B0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreController.Init
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreController::Init()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreController.Init");

	UUWorksInterfaceCoreController_Init_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002A64E0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreController.GetStringForActionOrigin
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		UWorksCore_EUWorksControllerActionOrigin           Origin                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UUWorksInterfaceCoreController::GetStringForActionOrigin(UWorksCore_EUWorksControllerActionOrigin Origin)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreController.GetStringForActionOrigin");

	UUWorksInterfaceCoreController_GetStringForActionOrigin_Params params {};
	params.Origin = Origin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002A6430
//		Name   -> Function UWorksCore.UWorksInterfaceCoreController.GetMotionData
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksControllerHandle                     ControllerHandle                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FUWorksControllerMotionData                 ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FUWorksControllerMotionData UUWorksInterfaceCoreController::GetMotionData(const struct FUWorksControllerHandle& ControllerHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreController.GetMotionData");

	UUWorksInterfaceCoreController_GetMotionData_Params params {};
	params.ControllerHandle = ControllerHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002A6360
//		Name   -> Function UWorksCore.UWorksInterfaceCoreController.GetGlyphForActionOrigin
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		UWorksCore_EUWorksControllerActionOrigin           Origin                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UUWorksInterfaceCoreController::GetGlyphForActionOrigin(UWorksCore_EUWorksControllerActionOrigin Origin)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreController.GetGlyphForActionOrigin");

	UUWorksInterfaceCoreController_GetGlyphForActionOrigin_Params params {};
	params.Origin = Origin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002A62D0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreController.GetGamepadIndexForController
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksControllerHandle                     ControllerHandle                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreController::GetGamepadIndexForController(const struct FUWorksControllerHandle& ControllerHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreController.GetGamepadIndexForController");

	UUWorksInterfaceCoreController_GetGamepadIndexForController_Params params {};
	params.ControllerHandle = ControllerHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002A5D70
//		Name   -> Function UWorksCore.UWorksInterfaceCoreController.GetDigitalActionOrigins
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FUWorksControllerHandle                     ControllerHandle                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FUWorksControllerActionSetHandle            ActionSetHandle                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FUWorksControllerDigitalActionHandle        DigitalActionHandle                                        (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		TArray<UWorksCore_EUWorksControllerActionOrigin>   OriginsOut                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreController::GetDigitalActionOrigins(const struct FUWorksControllerHandle& ControllerHandle, const struct FUWorksControllerActionSetHandle& ActionSetHandle, const struct FUWorksControllerDigitalActionHandle& DigitalActionHandle, TArray<UWorksCore_EUWorksControllerActionOrigin>* OriginsOut)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreController.GetDigitalActionOrigins");

	UUWorksInterfaceCoreController_GetDigitalActionOrigins_Params params {};
	params.ControllerHandle = ControllerHandle;
	params.ActionSetHandle = ActionSetHandle;
	params.DigitalActionHandle = DigitalActionHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OriginsOut != nullptr)
		*OriginsOut = params.OriginsOut;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002A61E0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreController.GetDigitalActionHandle
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     ActionName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUWorksControllerDigitalActionHandle        ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FUWorksControllerDigitalActionHandle UUWorksInterfaceCoreController::GetDigitalActionHandle(const struct FString& ActionName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreController.GetDigitalActionHandle");

	UUWorksInterfaceCoreController_GetDigitalActionHandle_Params params {};
	params.ActionName = ActionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002A6110
//		Name   -> Function UWorksCore.UWorksInterfaceCoreController.GetDigitalActionData
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksControllerHandle                     ControllerHandle                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FUWorksControllerDigitalActionHandle        DigitalActionHandle                                        (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FUWorksControllerDigitalActionData          ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FUWorksControllerDigitalActionData UUWorksInterfaceCoreController::GetDigitalActionData(const struct FUWorksControllerHandle& ControllerHandle, const struct FUWorksControllerDigitalActionHandle& DigitalActionHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreController.GetDigitalActionData");

	UUWorksInterfaceCoreController_GetDigitalActionData_Params params {};
	params.ControllerHandle = ControllerHandle;
	params.DigitalActionHandle = DigitalActionHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002A6070
//		Name   -> Function UWorksCore.UWorksInterfaceCoreController.GetCurrentActionSet
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksControllerHandle                     ControllerHandle                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FUWorksControllerActionSetHandle            ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FUWorksControllerActionSetHandle UUWorksInterfaceCoreController::GetCurrentActionSet(const struct FUWorksControllerHandle& ControllerHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreController.GetCurrentActionSet");

	UUWorksInterfaceCoreController_GetCurrentActionSet_Params params {};
	params.ControllerHandle = ControllerHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002A5FE0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreController.GetControllerForGamepadIndex
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUWorksControllerHandle                     ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FUWorksControllerHandle UUWorksInterfaceCoreController::GetControllerForGamepadIndex(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreController.GetControllerForGamepadIndex");

	UUWorksInterfaceCoreController_GetControllerForGamepadIndex_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002A5FB0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreController.GetController
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UUWorksInterfaceCoreController*              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksInterfaceCoreController* UUWorksInterfaceCoreController::STATIC_GetController()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreController.GetController");

	UUWorksInterfaceCoreController_GetController_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002A5EF0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreController.GetConnectedControllers
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<struct FUWorksControllerHandle>             HandlesOut                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreController::GetConnectedControllers(TArray<struct FUWorksControllerHandle>* HandlesOut)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreController.GetConnectedControllers");

	UUWorksInterfaceCoreController_GetConnectedControllers_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HandlesOut != nullptr)
		*HandlesOut = params.HandlesOut;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002A5D70
//		Name   -> Function UWorksCore.UWorksInterfaceCoreController.GetAnalogActionOrigins
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FUWorksControllerHandle                     ControllerHandle                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FUWorksControllerActionSetHandle            ActionSetHandle                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FUWorksControllerAnalogActionHandle         AnalogActionHandle                                         (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		TArray<UWorksCore_EUWorksControllerActionOrigin>   OriginsOut                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreController::GetAnalogActionOrigins(const struct FUWorksControllerHandle& ControllerHandle, const struct FUWorksControllerActionSetHandle& ActionSetHandle, const struct FUWorksControllerAnalogActionHandle& AnalogActionHandle, TArray<UWorksCore_EUWorksControllerActionOrigin>* OriginsOut)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreController.GetAnalogActionOrigins");

	UUWorksInterfaceCoreController_GetAnalogActionOrigins_Params params {};
	params.ControllerHandle = ControllerHandle;
	params.ActionSetHandle = ActionSetHandle;
	params.AnalogActionHandle = AnalogActionHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OriginsOut != nullptr)
		*OriginsOut = params.OriginsOut;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002A5C80
//		Name   -> Function UWorksCore.UWorksInterfaceCoreController.GetAnalogActionHandle
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     ActionName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUWorksControllerAnalogActionHandle         ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FUWorksControllerAnalogActionHandle UUWorksInterfaceCoreController::GetAnalogActionHandle(const struct FString& ActionName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreController.GetAnalogActionHandle");

	UUWorksInterfaceCoreController_GetAnalogActionHandle_Params params {};
	params.ActionName = ActionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002A5BA0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreController.GetAnalogActionData
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksControllerHandle                     ControllerHandle                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FUWorksControllerAnalogActionHandle         AnalogActionHandle                                         (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FUWorksControllerAnalogActionData           ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FUWorksControllerAnalogActionData UUWorksInterfaceCoreController::GetAnalogActionData(const struct FUWorksControllerHandle& ControllerHandle, const struct FUWorksControllerAnalogActionHandle& AnalogActionHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreController.GetAnalogActionData");

	UUWorksInterfaceCoreController_GetAnalogActionData_Params params {};
	params.ControllerHandle = ControllerHandle;
	params.AnalogActionHandle = AnalogActionHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002A5AB0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreController.GetActionSetHandle
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     ActionSetName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUWorksControllerActionSetHandle            ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FUWorksControllerActionSetHandle UUWorksInterfaceCoreController::GetActionSetHandle(const struct FString& ActionSetName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreController.GetActionSetHandle");

	UUWorksInterfaceCoreController_GetActionSetHandle_Params params {};
	params.ActionSetName = ActionSetName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002A59F0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreController.ActivateActionSet
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksControllerHandle                     ControllerHandle                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FUWorksControllerActionSetHandle            ActionSetHandle                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreController::ActivateActionSet(const struct FUWorksControllerHandle& ControllerHandle, const struct FUWorksControllerActionSetHandle& ActionSetHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreController.ActivateActionSet");

	UUWorksInterfaceCoreController_ActivateActionSet_Params params {};
	params.ControllerHandle = ControllerHandle;
	params.ActionSetHandle = ActionSetHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002AB5D0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.SetRichPresence
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreFriends::SetRichPresence(const struct FString& Key, const struct FString& Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.SetRichPresence");

	UUWorksInterfaceCoreFriends_SetRichPresence_Params params {};
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002AB550
//		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.SetPlayedWith
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamIDUserPlayedWith                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreFriends::SetPlayedWith(const struct FUWorksSteamID& SteamIDUserPlayedWith)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.SetPlayedWith");

	UUWorksInterfaceCoreFriends_SetPlayedWith_Params params {};
	params.SteamIDUserPlayedWith = SteamIDUserPlayedWith;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002AB400
//		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.SetPersonaNameMinimal
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FScriptDelegate                             Completed                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FString                                     Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreFriends::SetPersonaNameMinimal(const struct FScriptDelegate& Completed, const struct FString& Name)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.SetPersonaNameMinimal");

	UUWorksInterfaceCoreFriends_SetPersonaNameMinimal_Params params {};
	params.Completed = Completed;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002AB3D0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.SetPersonaName
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UUWorksRequestCoreSetPersonaName*            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestCoreSetPersonaName* UUWorksInterfaceCoreFriends::SetPersonaName()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.SetPersonaName");

	UUWorksInterfaceCoreFriends_SetPersonaName_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002AB340
//		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.SetListenForFriendsMessages
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bInterceptEnabled                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreFriends::SetListenForFriendsMessages(bool bInterceptEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.SetListenForFriendsMessages");

	UUWorksInterfaceCoreFriends_SetListenForFriendsMessages_Params params {};
	params.bInterceptEnabled = bInterceptEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002AB270
//		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.SetInGameVoiceSpeaking
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamIDUser                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               bSpeaking                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreFriends::SetInGameVoiceSpeaking(const struct FUWorksSteamID& SteamIDUser, bool bSpeaking)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.SetInGameVoiceSpeaking");

	UUWorksInterfaceCoreFriends_SetInGameVoiceSpeaking_Params params {};
	params.SteamIDUser = SteamIDUser;
	params.bSpeaking = bSpeaking;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002AB140
//		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.SendClanChatMessage
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamIDClanChat                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FString                                     Text                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreFriends::SendClanChatMessage(const struct FUWorksSteamID& SteamIDClanChat, const struct FString& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.SendClanChatMessage");

	UUWorksInterfaceCoreFriends_SendClanChatMessage_Params params {};
	params.SteamIDClanChat = SteamIDClanChat;
	params.Text = Text;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002AB080
//		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.RequestUserInformation
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamIDUser                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               bRequireNameOnly                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreFriends::RequestUserInformation(const struct FUWorksSteamID& SteamIDUser, bool bRequireNameOnly)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.RequestUserInformation");

	UUWorksInterfaceCoreFriends_RequestUserInformation_Params params {};
	params.SteamIDUser = SteamIDUser;
	params.bRequireNameOnly = bRequireNameOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002AB000
//		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.RequestFriendRichPresence
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamIDFriend                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreFriends::RequestFriendRichPresence(const struct FUWorksSteamID& SteamIDFriend)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.RequestFriendRichPresence");

	UUWorksInterfaceCoreFriends_RequestFriendRichPresence_Params params {};
	params.SteamIDFriend = SteamIDFriend;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002AAF00
//		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.RequestClanOfficerListMinimal
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FScriptDelegate                             Completed                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FUWorksSteamID                              SteamID                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreFriends::RequestClanOfficerListMinimal(const struct FScriptDelegate& Completed, const struct FUWorksSteamID& SteamID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.RequestClanOfficerListMinimal");

	UUWorksInterfaceCoreFriends_RequestClanOfficerListMinimal_Params params {};
	params.Completed = Completed;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002AAED0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.RequestClanOfficerList
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UUWorksRequestCoreRequestClanOfficerList*    ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestCoreRequestClanOfficerList* UUWorksInterfaceCoreFriends::RequestClanOfficerList()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.RequestClanOfficerList");

	UUWorksInterfaceCoreFriends_RequestClanOfficerList_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002AADA0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.ReplyToFriendMessage
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamIDFriend                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FString                                     MessageToSend                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreFriends::ReplyToFriendMessage(const struct FUWorksSteamID& SteamIDFriend, const struct FString& MessageToSend)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.ReplyToFriendMessage");

	UUWorksInterfaceCoreFriends_ReplyToFriendMessage_Params params {};
	params.SteamIDFriend = SteamIDFriend;
	params.MessageToSend = MessageToSend;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002AAD10
//		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.OpenClanChatWindowInSteam
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamIDClanChat                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreFriends::OpenClanChatWindowInSteam(const struct FUWorksSteamID& SteamIDClanChat)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.OpenClanChatWindowInSteam");

	UUWorksInterfaceCoreFriends_OpenClanChatWindowInSteam_Params params {};
	params.SteamIDClanChat = SteamIDClanChat;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002AAC80
//		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.LeaveClanChatRoom
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamIDClan                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreFriends::LeaveClanChatRoom(const struct FUWorksSteamID& SteamIDClan)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.LeaveClanChatRoom");

	UUWorksInterfaceCoreFriends_LeaveClanChatRoom_Params params {};
	params.SteamIDClan = SteamIDClan;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002AAB80
//		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.JoinClanChatRoomMinimal
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FScriptDelegate                             Completed                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FUWorksSteamID                              SteamIDClan                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreFriends::JoinClanChatRoomMinimal(const struct FScriptDelegate& Completed, const struct FUWorksSteamID& SteamIDClan)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.JoinClanChatRoomMinimal");

	UUWorksInterfaceCoreFriends_JoinClanChatRoomMinimal_Params params {};
	params.Completed = Completed;
	params.SteamIDClan = SteamIDClan;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002AAB50
//		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.JoinClanChatRoom
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UUWorksRequestCoreJoinClanChatRoom*          ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestCoreJoinClanChatRoom* UUWorksInterfaceCoreFriends::JoinClanChatRoom()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.JoinClanChatRoom");

	UUWorksInterfaceCoreFriends_JoinClanChatRoom_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002AAA90
//		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.IsUserInSource
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamIDUser                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FUWorksSteamID                              SteamIDSource                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreFriends::IsUserInSource(const struct FUWorksSteamID& SteamIDUser, const struct FUWorksSteamID& SteamIDSource)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.IsUserInSource");

	UUWorksInterfaceCoreFriends_IsUserInSource_Params params {};
	params.SteamIDUser = SteamIDUser;
	params.SteamIDSource = SteamIDSource;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002AA990
//		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.IsFollowingMinimal
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FScriptDelegate                             Completed                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FUWorksSteamID                              SteamID                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreFriends::IsFollowingMinimal(const struct FScriptDelegate& Completed, const struct FUWorksSteamID& SteamID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.IsFollowingMinimal");

	UUWorksInterfaceCoreFriends_IsFollowingMinimal_Params params {};
	params.Completed = Completed;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002AA960
//		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.IsFollowing
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UUWorksRequestCoreIsFollowing*               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestCoreIsFollowing* UUWorksInterfaceCoreFriends::IsFollowing()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.IsFollowing");

	UUWorksInterfaceCoreFriends_IsFollowing_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002AA8D0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.IsClanChatWindowOpenInSteam
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamIDClanChat                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreFriends::IsClanChatWindowOpenInSteam(const struct FUWorksSteamID& SteamIDClanChat)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.IsClanChatWindowOpenInSteam");

	UUWorksInterfaceCoreFriends_IsClanChatWindowOpenInSteam_Params params {};
	params.SteamIDClanChat = SteamIDClanChat;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002AA810
//		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.IsClanChatAdmin
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamIDClanChat                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FUWorksSteamID                              SteamIDUser                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreFriends::IsClanChatAdmin(const struct FUWorksSteamID& SteamIDClanChat, const struct FUWorksSteamID& SteamIDUser)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.IsClanChatAdmin");

	UUWorksInterfaceCoreFriends_IsClanChatAdmin_Params params {};
	params.SteamIDClanChat = SteamIDClanChat;
	params.SteamIDUser = SteamIDUser;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002AA6E0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.InviteUserToGame
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamIDFriend                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FString                                     ConnectString                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreFriends::InviteUserToGame(const struct FUWorksSteamID& SteamIDFriend, const struct FString& ConnectString)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.InviteUserToGame");

	UUWorksInterfaceCoreFriends_InviteUserToGame_Params params {};
	params.SteamIDFriend = SteamIDFriend;
	params.ConnectString = ConnectString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002AA5C0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.HasFriend
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamIDFriend                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		TArray<UWorksCore_EUWorksFriendFlags>              FriendFlags                                                (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreFriends::HasFriend(const struct FUWorksSteamID& SteamIDFriend, TArray<UWorksCore_EUWorksFriendFlags> FriendFlags)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.HasFriend");

	UUWorksInterfaceCoreFriends_HasFriend_Params params {};
	params.SteamIDFriend = SteamIDFriend;
	params.FriendFlags = FriendFlags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002AA540
//		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.GetUserRestrictions
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TArray<UWorksCore_EUWorksUserRestriction>          ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<UWorksCore_EUWorksUserRestriction> UUWorksInterfaceCoreFriends::GetUserRestrictions()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetUserRestrictions");

	UUWorksInterfaceCoreFriends_GetUserRestrictions_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002AA4B0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.GetSmallFriendAvatar
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamIDFriend                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		class UTexture2D*                                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTexture2D* UUWorksInterfaceCoreFriends::GetSmallFriendAvatar(const struct FUWorksSteamID& SteamIDFriend)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetSmallFriendAvatar");

	UUWorksInterfaceCoreFriends_GetSmallFriendAvatar_Params params {};
	params.SteamIDFriend = SteamIDFriend;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002AA3D0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.GetPlayerNickname
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamIDPlayer                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UUWorksInterfaceCoreFriends::GetPlayerNickname(const struct FUWorksSteamID& SteamIDPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetPlayerNickname");

	UUWorksInterfaceCoreFriends_GetPlayerNickname_Params params {};
	params.SteamIDPlayer = SteamIDPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002AA3A0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.GetPersonaState
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		UWorksCore_EUWorksPersonaState                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UWorksCore_EUWorksPersonaState UUWorksInterfaceCoreFriends::GetPersonaState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetPersonaState");

	UUWorksInterfaceCoreFriends_GetPersonaState_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002AA320
//		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.GetPersonaName
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UUWorksInterfaceCoreFriends::GetPersonaName()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetPersonaName");

	UUWorksInterfaceCoreFriends_GetPersonaName_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002AA290
//		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.GetMediumFriendAvatar
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamIDFriend                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		class UTexture2D*                                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTexture2D* UUWorksInterfaceCoreFriends::GetMediumFriendAvatar(const struct FUWorksSteamID& SteamIDFriend)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetMediumFriendAvatar");

	UUWorksInterfaceCoreFriends_GetMediumFriendAvatar_Params params {};
	params.SteamIDFriend = SteamIDFriend;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002AA200
//		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.GetLargeFriendAvatar
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamIDFriend                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		class UTexture2D*                                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTexture2D* UUWorksInterfaceCoreFriends::GetLargeFriendAvatar(const struct FUWorksSteamID& SteamIDFriend)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetLargeFriendAvatar");

	UUWorksInterfaceCoreFriends_GetLargeFriendAvatar_Params params {};
	params.SteamIDFriend = SteamIDFriend;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002A9DE0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendSteamLevel
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamIDFriend                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreFriends::GetFriendSteamLevel(const struct FUWorksSteamID& SteamIDFriend)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendSteamLevel");

	UUWorksInterfaceCoreFriends_GetFriendSteamLevel_Params params {};
	params.SteamIDFriend = SteamIDFriend;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002AA120
//		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendsGroupName
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksFriendsGroupID                       FriendsGroupID                                             (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UUWorksInterfaceCoreFriends::GetFriendsGroupName(const struct FUWorksFriendsGroupID& FriendsGroupID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendsGroupName");

	UUWorksInterfaceCoreFriends_GetFriendsGroupName_Params params {};
	params.FriendsGroupID = FriendsGroupID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002A9FF0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendsGroupMembersList
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FUWorksFriendsGroupID                       FriendsGroupID                                             (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		TArray<struct FUWorksSteamID>                      SteamIDMembers                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
//		int                                                MembersCount                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreFriends::GetFriendsGroupMembersList(const struct FUWorksFriendsGroupID& FriendsGroupID, TArray<struct FUWorksSteamID>* SteamIDMembers, int MembersCount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendsGroupMembersList");

	UUWorksInterfaceCoreFriends_GetFriendsGroupMembersList_Params params {};
	params.FriendsGroupID = FriendsGroupID;
	params.MembersCount = MembersCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SteamIDMembers != nullptr)
		*SteamIDMembers = params.SteamIDMembers;

}


// Function:
//		Offset -> 0x002A9F60
//		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendsGroupMembersCount
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksFriendsGroupID                       FriendsGroupID                                             (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreFriends::GetFriendsGroupMembersCount(const struct FUWorksFriendsGroupID& FriendsGroupID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendsGroupMembersCount");

	UUWorksInterfaceCoreFriends_GetFriendsGroupMembersCount_Params params {};
	params.FriendsGroupID = FriendsGroupID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002A9ED0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendsGroupIDByIndex
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                FriendGroup                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUWorksFriendsGroupID                       ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FUWorksFriendsGroupID UUWorksInterfaceCoreFriends::GetFriendsGroupIDByIndex(int FriendGroup)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendsGroupIDByIndex");

	UUWorksInterfaceCoreFriends_GetFriendsGroupIDByIndex_Params params {};
	params.FriendGroup = FriendGroup;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002A9EA0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendsGroupCount
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreFriends::GetFriendsGroupCount()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendsGroupCount");

	UUWorksInterfaceCoreFriends_GetFriendsGroupCount_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002A9E70
//		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.GetFriends
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UUWorksInterfaceCoreFriends*                 ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksInterfaceCoreFriends* UUWorksInterfaceCoreFriends::STATIC_GetFriends()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetFriends");

	UUWorksInterfaceCoreFriends_GetFriends_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002A9D50
//		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendRichPresenceKeyCount
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamIDFriend                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreFriends::GetFriendRichPresenceKeyCount(const struct FUWorksSteamID& SteamIDFriend)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendRichPresenceKeyCount");

	UUWorksInterfaceCoreFriends_GetFriendRichPresenceKeyCount_Params params {};
	params.SteamIDFriend = SteamIDFriend;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002A9C50
//		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendRichPresenceKeyByIndex
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamIDFriend                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		int                                                Key                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UUWorksInterfaceCoreFriends::GetFriendRichPresenceKeyByIndex(const struct FUWorksSteamID& SteamIDFriend, int Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendRichPresenceKeyByIndex");

	UUWorksInterfaceCoreFriends_GetFriendRichPresenceKeyByIndex_Params params {};
	params.SteamIDFriend = SteamIDFriend;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002A9AE0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendRichPresence
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamIDFriend                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FString                                     Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UUWorksInterfaceCoreFriends::GetFriendRichPresence(const struct FUWorksSteamID& SteamIDFriend, const struct FString& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendRichPresence");

	UUWorksInterfaceCoreFriends_GetFriendRichPresence_Params params {};
	params.SteamIDFriend = SteamIDFriend;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002A9A50
//		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendRelationship
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamIDFriend                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		UWorksCore_EUWorksFriendRelationship               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UWorksCore_EUWorksFriendRelationship UUWorksInterfaceCoreFriends::GetFriendRelationship(const struct FUWorksSteamID& SteamIDFriend)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendRelationship");

	UUWorksInterfaceCoreFriends_GetFriendRelationship_Params params {};
	params.SteamIDFriend = SteamIDFriend;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002A99C0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendPersonaState
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamIDFriend                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		UWorksCore_EUWorksPersonaState                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UWorksCore_EUWorksPersonaState UUWorksInterfaceCoreFriends::GetFriendPersonaState(const struct FUWorksSteamID& SteamIDFriend)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendPersonaState");

	UUWorksInterfaceCoreFriends_GetFriendPersonaState_Params params {};
	params.SteamIDFriend = SteamIDFriend;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002A98C0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendPersonaNameHistory
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamIDFriend                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		int                                                PersonaName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UUWorksInterfaceCoreFriends::GetFriendPersonaNameHistory(const struct FUWorksSteamID& SteamIDFriend, int PersonaName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendPersonaNameHistory");

	UUWorksInterfaceCoreFriends_GetFriendPersonaNameHistory_Params params {};
	params.SteamIDFriend = SteamIDFriend;
	params.PersonaName = PersonaName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002A97E0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendPersonaName
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamIDFriend                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UUWorksInterfaceCoreFriends::GetFriendPersonaName(const struct FUWorksSteamID& SteamIDFriend)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendPersonaName");

	UUWorksInterfaceCoreFriends_GetFriendPersonaName_Params params {};
	params.SteamIDFriend = SteamIDFriend;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002A9600
//		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendMessage
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamIDFriend                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		int                                                MessageID                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Text                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                TextMaxLength                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		UWorksCore_EUWorksChatEntryType                    ChatEntryType                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreFriends::GetFriendMessage(const struct FUWorksSteamID& SteamIDFriend, int MessageID, struct FString* Text, int TextMaxLength, UWorksCore_EUWorksChatEntryType* ChatEntryType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendMessage");

	UUWorksInterfaceCoreFriends_GetFriendMessage_Params params {};
	params.SteamIDFriend = SteamIDFriend;
	params.MessageID = MessageID;
	params.TextMaxLength = TextMaxLength;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
	if (ChatEntryType != nullptr)
		*ChatEntryType = params.ChatEntryType;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002A93D0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendGamePlayed
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamIDFriend                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FUWorksGameID                               GameID                                                     (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FString                                     GameIP                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ConnectionPort                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                QueryPort                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUWorksSteamID                              SteamIDLobby                                               (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreFriends::GetFriendGamePlayed(const struct FUWorksSteamID& SteamIDFriend, struct FUWorksGameID* GameID, struct FString* GameIP, int* ConnectionPort, int* QueryPort, struct FUWorksSteamID* SteamIDLobby)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendGamePlayed");

	UUWorksInterfaceCoreFriends_GetFriendGamePlayed_Params params {};
	params.SteamIDFriend = SteamIDFriend;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (GameID != nullptr)
		*GameID = params.GameID;
	if (GameIP != nullptr)
		*GameIP = params.GameIP;
	if (ConnectionPort != nullptr)
		*ConnectionPort = params.ConnectionPort;
	if (QueryPort != nullptr)
		*QueryPort = params.QueryPort;
	if (SteamIDLobby != nullptr)
		*SteamIDLobby = params.SteamIDLobby;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002A9300
//		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendFromSourceByIndex
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamIDSource                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		int                                                Friend                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUWorksSteamID                              ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FUWorksSteamID UUWorksInterfaceCoreFriends::GetFriendFromSourceByIndex(const struct FUWorksSteamID& SteamIDSource, int Friend)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendFromSourceByIndex");

	UUWorksInterfaceCoreFriends_GetFriendFromSourceByIndex_Params params {};
	params.SteamIDSource = SteamIDSource;
	params.Friend = Friend;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002A9270
//		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendCountFromSource
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamIDSource                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreFriends::GetFriendCountFromSource(const struct FUWorksSteamID& SteamIDSource)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendCountFromSource");

	UUWorksInterfaceCoreFriends_GetFriendCountFromSource_Params params {};
	params.SteamIDSource = SteamIDSource;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002A9180
//		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendCount
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TArray<UWorksCore_EUWorksFriendFlags>              FriendFlags                                                (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreFriends::GetFriendCount(TArray<UWorksCore_EUWorksFriendFlags> FriendFlags)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendCount");

	UUWorksInterfaceCoreFriends_GetFriendCount_Params params {};
	params.FriendFlags = FriendFlags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002A90F0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendCoplayTime
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamIDFriend                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreFriends::GetFriendCoplayTime(const struct FUWorksSteamID& SteamIDFriend)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendCoplayTime");

	UUWorksInterfaceCoreFriends_GetFriendCoplayTime_Params params {};
	params.SteamIDFriend = SteamIDFriend;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002A9060
//		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendCoplayGame
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamIDFriend                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreFriends::GetFriendCoplayGame(const struct FUWorksSteamID& SteamIDFriend)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendCoplayGame");

	UUWorksInterfaceCoreFriends_GetFriendCoplayGame_Params params {};
	params.SteamIDFriend = SteamIDFriend;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002A8F30
//		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendByIndex
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                Friend                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<UWorksCore_EUWorksFriendFlags>              FriendFlags                                                (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
//		struct FUWorksSteamID                              ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FUWorksSteamID UUWorksInterfaceCoreFriends::GetFriendByIndex(int Friend, TArray<UWorksCore_EUWorksFriendFlags> FriendFlags)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendByIndex");

	UUWorksInterfaceCoreFriends_GetFriendByIndex_Params params {};
	params.Friend = Friend;
	params.FriendFlags = FriendFlags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002A8E30
//		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.GetFollowerCountMinimal
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FScriptDelegate                             Completed                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FUWorksSteamID                              SteamID                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreFriends::GetFollowerCountMinimal(const struct FScriptDelegate& Completed, const struct FUWorksSteamID& SteamID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetFollowerCountMinimal");

	UUWorksInterfaceCoreFriends_GetFollowerCountMinimal_Params params {};
	params.Completed = Completed;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002A8E00
//		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.GetFollowerCount
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UUWorksRequestCoreGetFollowerCount*          ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestCoreGetFollowerCount* UUWorksInterfaceCoreFriends::GetFollowerCount()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetFollowerCount");

	UUWorksInterfaceCoreFriends_GetFollowerCount_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002A8DD0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.GetCoplayFriendCount
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreFriends::GetCoplayFriendCount()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetCoplayFriendCount");

	UUWorksInterfaceCoreFriends_GetCoplayFriendCount_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002A8D40
//		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.GetCoplayFriend
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                CoplayFriend                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUWorksSteamID                              ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FUWorksSteamID UUWorksInterfaceCoreFriends::GetCoplayFriend(int CoplayFriend)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetCoplayFriend");

	UUWorksInterfaceCoreFriends_GetCoplayFriend_Params params {};
	params.CoplayFriend = CoplayFriend;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002A8C60
//		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.GetClanTag
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamIDClan                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UUWorksInterfaceCoreFriends::GetClanTag(const struct FUWorksSteamID& SteamIDClan)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetClanTag");

	UUWorksInterfaceCoreFriends_GetClanTag_Params params {};
	params.SteamIDClan = SteamIDClan;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002A8BD0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.GetClanOwner
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamIDClan                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FUWorksSteamID                              ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FUWorksSteamID UUWorksInterfaceCoreFriends::GetClanOwner(const struct FUWorksSteamID& SteamIDClan)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetClanOwner");

	UUWorksInterfaceCoreFriends_GetClanOwner_Params params {};
	params.SteamIDClan = SteamIDClan;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002A8B40
//		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.GetClanOfficerCount
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamIDClan                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreFriends::GetClanOfficerCount(const struct FUWorksSteamID& SteamIDClan)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetClanOfficerCount");

	UUWorksInterfaceCoreFriends_GetClanOfficerCount_Params params {};
	params.SteamIDClan = SteamIDClan;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002A8A70
//		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.GetClanOfficerByIndex
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamIDClan                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		int                                                Officer                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUWorksSteamID                              ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FUWorksSteamID UUWorksInterfaceCoreFriends::GetClanOfficerByIndex(const struct FUWorksSteamID& SteamIDClan, int Officer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetClanOfficerByIndex");

	UUWorksInterfaceCoreFriends_GetClanOfficerByIndex_Params params {};
	params.SteamIDClan = SteamIDClan;
	params.Officer = Officer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002A8990
//		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.GetClanName
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamIDClan                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UUWorksInterfaceCoreFriends::GetClanName(const struct FUWorksSteamID& SteamIDClan)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetClanName");

	UUWorksInterfaceCoreFriends_GetClanName_Params params {};
	params.SteamIDClan = SteamIDClan;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002A8960
//		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.GetClanCount
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreFriends::GetClanCount()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetClanCount");

	UUWorksInterfaceCoreFriends_GetClanCount_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002A8760
//		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.GetClanChatMessage
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamIDClanChat                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		int                                                MessageID                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Text                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                TextMax                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		UWorksCore_EUWorksChatEntryType                    ChatEntryType                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUWorksSteamID                              SteamIDChatter                                             (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreFriends::GetClanChatMessage(const struct FUWorksSteamID& SteamIDClanChat, int MessageID, struct FString* Text, int TextMax, UWorksCore_EUWorksChatEntryType* ChatEntryType, struct FUWorksSteamID* SteamIDChatter)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetClanChatMessage");

	UUWorksInterfaceCoreFriends_GetClanChatMessage_Params params {};
	params.SteamIDClanChat = SteamIDClanChat;
	params.MessageID = MessageID;
	params.TextMax = TextMax;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
	if (ChatEntryType != nullptr)
		*ChatEntryType = params.ChatEntryType;
	if (SteamIDChatter != nullptr)
		*SteamIDChatter = params.SteamIDChatter;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002A86D0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.GetClanChatMemberCount
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamIDClan                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreFriends::GetClanChatMemberCount(const struct FUWorksSteamID& SteamIDClan)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetClanChatMemberCount");

	UUWorksInterfaceCoreFriends_GetClanChatMemberCount_Params params {};
	params.SteamIDClan = SteamIDClan;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002A8640
//		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.GetClanByIndex
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                Clan                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUWorksSteamID                              ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FUWorksSteamID UUWorksInterfaceCoreFriends::GetClanByIndex(int Clan)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetClanByIndex");

	UUWorksInterfaceCoreFriends_GetClanByIndex_Params params {};
	params.Clan = Clan;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002A84A0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.GetClanActivityCounts
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamIDClan                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		int                                                Online                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                InGame                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Chatting                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreFriends::GetClanActivityCounts(const struct FUWorksSteamID& SteamIDClan, int* Online, int* InGame, int* Chatting)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetClanActivityCounts");

	UUWorksInterfaceCoreFriends_GetClanActivityCounts_Params params {};
	params.SteamIDClan = SteamIDClan;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Online != nullptr)
		*Online = params.Online;
	if (InGame != nullptr)
		*InGame = params.InGame;
	if (Chatting != nullptr)
		*Chatting = params.Chatting;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002A83D0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.GetChatMemberByIndex
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamIDClan                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		int                                                user                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUWorksSteamID                              ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FUWorksSteamID UUWorksInterfaceCoreFriends::GetChatMemberByIndex(const struct FUWorksSteamID& SteamIDClan, int user)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetChatMemberByIndex");

	UUWorksInterfaceCoreFriends_GetChatMemberByIndex_Params params {};
	params.SteamIDClan = SteamIDClan;
	params.user = user;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002A82D0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.EnumerateFollowingListMinimal
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FScriptDelegate                             Completed                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		int                                                StartIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreFriends::EnumerateFollowingListMinimal(const struct FScriptDelegate& Completed, int StartIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.EnumerateFollowingListMinimal");

	UUWorksInterfaceCoreFriends_EnumerateFollowingListMinimal_Params params {};
	params.Completed = Completed;
	params.StartIndex = StartIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002A82A0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.EnumerateFollowingList
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UUWorksRequestCoreEnumerateFollowingList*    ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestCoreEnumerateFollowingList* UUWorksInterfaceCoreFriends::EnumerateFollowingList()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.EnumerateFollowingList");

	UUWorksInterfaceCoreFriends_EnumerateFollowingList_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002A8150
//		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.DownloadClanActivityCountsMinimal
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FScriptDelegate                             Completed                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		TArray<struct FUWorksSteamID>                      SteamIDClans                                               (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreFriends::DownloadClanActivityCountsMinimal(const struct FScriptDelegate& Completed, TArray<struct FUWorksSteamID> SteamIDClans)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.DownloadClanActivityCountsMinimal");

	UUWorksInterfaceCoreFriends_DownloadClanActivityCountsMinimal_Params params {};
	params.Completed = Completed;
	params.SteamIDClans = SteamIDClans;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002A8120
//		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.DownloadClanActivityCounts
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UUWorksRequestCoreDownloadClanActivityCounts* ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestCoreDownloadClanActivityCounts* UUWorksInterfaceCoreFriends::DownloadClanActivityCounts()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.DownloadClanActivityCounts");

	UUWorksInterfaceCoreFriends_DownloadClanActivityCounts_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002A8090
//		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.CloseClanChatWindowInSteam
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamIDClanChat                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreFriends::CloseClanChatWindowInSteam(const struct FUWorksSteamID& SteamIDClanChat)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.CloseClanChatWindowInSteam");

	UUWorksInterfaceCoreFriends_CloseClanChatWindowInSteam_Params params {};
	params.SteamIDClanChat = SteamIDClanChat;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002A8070
//		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.ClearRichPresence
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UUWorksInterfaceCoreFriends::ClearRichPresence()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.ClearRichPresence");

	UUWorksInterfaceCoreFriends_ClearRichPresence_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002A7F90
//		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.ActivateGameOverlayToWebPage
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     URL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreFriends::ActivateGameOverlayToWebPage(const struct FString& URL)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.ActivateGameOverlayToWebPage");

	UUWorksInterfaceCoreFriends_ActivateGameOverlayToWebPage_Params params {};
	params.URL = URL;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002A7ED0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.ActivateGameOverlayToUser
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		UWorksCore_EUWorksOverlaySpecific                  Dialog                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUWorksSteamID                              SteamID                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreFriends::ActivateGameOverlayToUser(UWorksCore_EUWorksOverlaySpecific Dialog, const struct FUWorksSteamID& SteamID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.ActivateGameOverlayToUser");

	UUWorksInterfaceCoreFriends_ActivateGameOverlayToUser_Params params {};
	params.Dialog = Dialog;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002A7E10
//		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.ActivateGameOverlayToStore
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		UWorksCore_EUWorksOverlayToStoreFlag               Flag                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreFriends::ActivateGameOverlayToStore(int AppID, UWorksCore_EUWorksOverlayToStoreFlag Flag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.ActivateGameOverlayToStore");

	UUWorksInterfaceCoreFriends_ActivateGameOverlayToStore_Params params {};
	params.AppID = AppID;
	params.Flag = Flag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002A7D90
//		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.ActivateGameOverlayInviteDialog
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamIDLobby                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreFriends::ActivateGameOverlayInviteDialog(const struct FUWorksSteamID& SteamIDLobby)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.ActivateGameOverlayInviteDialog");

	UUWorksInterfaceCoreFriends_ActivateGameOverlayInviteDialog_Params params {};
	params.SteamIDLobby = SteamIDLobby;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002A7D10
//		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.ActivateGameOverlay
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		UWorksCore_EUWorksOverlayGeneric                   Dialog                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreFriends::ActivateGameOverlay(UWorksCore_EUWorksOverlayGeneric Dialog)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.ActivateGameOverlay");

	UUWorksInterfaceCoreFriends_ActivateGameOverlay_Params params {};
	params.Dialog = Dialog;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002ACDF0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreGameServer.WasRestartRequested
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreGameServer::WasRestartRequested()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServer.WasRestartRequested");

	UUWorksInterfaceCoreGameServer_WasRestartRequested_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002ACD30
//		Name   -> Function UWorksCore.UWorksInterfaceCoreGameServer.UserHasLicenseForApp
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamID                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		int                                                AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		UWorksCore_EUWorksUserHasLicenseForAppResult       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UWorksCore_EUWorksUserHasLicenseForAppResult UUWorksInterfaceCoreGameServer::UserHasLicenseForApp(const struct FUWorksSteamID& SteamID, int AppID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServer.UserHasLicenseForApp");

	UUWorksInterfaceCoreGameServer_UserHasLicenseForApp_Params params {};
	params.SteamID = SteamID;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002ACC50
//		Name   -> Function UWorksCore.UWorksInterfaceCoreGameServer.SetServerName
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     serverName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreGameServer::SetServerName(const struct FString& serverName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServer.SetServerName");

	UUWorksInterfaceCoreGameServer_SetServerName_Params params {};
	params.serverName = serverName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002ACB70
//		Name   -> Function UWorksCore.UWorksInterfaceCoreGameServer.SetRegion
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     region                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreGameServer::SetRegion(const struct FString& region)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServer.SetRegion");

	UUWorksInterfaceCoreGameServer_SetRegion_Params params {};
	params.region = region;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002ACAE0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreGameServer.SetPasswordProtected
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bPasswordProtected                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreGameServer::SetPasswordProtected(bool bPasswordProtected)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServer.SetPasswordProtected");

	UUWorksInterfaceCoreGameServer_SetPasswordProtected_Params params {};
	params.bPasswordProtected = bPasswordProtected;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002ACA60
//		Name   -> Function UWorksCore.UWorksInterfaceCoreGameServer.SetMaxPlayerCount
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                PlayersMax                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreGameServer::SetMaxPlayerCount(int PlayersMax)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServer.SetMaxPlayerCount");

	UUWorksInterfaceCoreGameServer_SetMaxPlayerCount_Params params {};
	params.PlayersMax = PlayersMax;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002AC980
//		Name   -> Function UWorksCore.UWorksInterfaceCoreGameServer.SetMapName
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     MapName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreGameServer::SetMapName(const struct FString& MapName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServer.SetMapName");

	UUWorksInterfaceCoreGameServer_SetMapName_Params params {};
	params.MapName = MapName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002AC810
//		Name   -> Function UWorksCore.UWorksInterfaceCoreGameServer.SetKeyValue
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreGameServer::SetKeyValue(const struct FString& Key, const struct FString& Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServer.SetKeyValue");

	UUWorksInterfaceCoreGameServer_SetKeyValue_Params params {};
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002AC790
//		Name   -> Function UWorksCore.UWorksInterfaceCoreGameServer.SetHeartbeatInterval
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                HeartbeatInterval                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreGameServer::SetHeartbeatInterval(int HeartbeatInterval)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServer.SetHeartbeatInterval");

	UUWorksInterfaceCoreGameServer_SetHeartbeatInterval_Params params {};
	params.HeartbeatInterval = HeartbeatInterval;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002AC6B0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreGameServer.SetGameTags
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     GameTags                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreGameServer::SetGameTags(const struct FString& GameTags)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServer.SetGameTags");

	UUWorksInterfaceCoreGameServer_SetGameTags_Params params {};
	params.GameTags = GameTags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002AC5D0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreGameServer.SetGameData
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     GameData                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreGameServer::SetGameData(const struct FString& GameData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServer.SetGameData");

	UUWorksInterfaceCoreGameServer_SetGameData_Params params {};
	params.GameData = GameData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002AC550
//		Name   -> Function UWorksCore.UWorksInterfaceCoreGameServer.SetBotPlayerCount
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                BotPlayers                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreGameServer::SetBotPlayerCount(int BotPlayers)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServer.SetBotPlayerCount");

	UUWorksInterfaceCoreGameServer_SetBotPlayerCount_Params params {};
	params.BotPlayers = BotPlayers;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002AC490
//		Name   -> Function UWorksCore.UWorksInterfaceCoreGameServer.RequestUserGroupStatus
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamIDUser                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FUWorksSteamID                              SteamIDGroup                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreGameServer::RequestUserGroupStatus(const struct FUWorksSteamID& SteamIDUser, const struct FUWorksSteamID& SteamIDGroup)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServer.RequestUserGroupStatus");

	UUWorksInterfaceCoreGameServer_RequestUserGroupStatus_Params params {};
	params.SteamIDUser = SteamIDUser;
	params.SteamIDGroup = SteamIDGroup;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002AC450
//		Name   -> Function UWorksCore.UWorksInterfaceCoreGameServer.GetSteamID
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FUWorksSteamID UUWorksInterfaceCoreGameServer::GetSteamID()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServer.GetSteamID");

	UUWorksInterfaceCoreGameServer_GetSteamID_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002AC420
//		Name   -> Function UWorksCore.UWorksInterfaceCoreGameServer.GetGameServer
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UUWorksInterfaceCoreGameServer*              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksInterfaceCoreGameServer* UUWorksInterfaceCoreGameServer::STATIC_GetGameServer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServer.GetGameServer");

	UUWorksInterfaceCoreGameServer_GetGameServer_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002AC360
//		Name   -> Function UWorksCore.UWorksInterfaceCoreGameServer.GetAuthSessionTicket
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<unsigned char>                              Ticket                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
//		struct FUWorksTicketHandle                         ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FUWorksTicketHandle UUWorksInterfaceCoreGameServer::GetAuthSessionTicket(TArray<unsigned char>* Ticket)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServer.GetAuthSessionTicket");

	UUWorksInterfaceCoreGameServer_GetAuthSessionTicket_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Ticket != nullptr)
		*Ticket = params.Ticket;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002AC340
//		Name   -> Function UWorksCore.UWorksInterfaceCoreGameServer.ForceHeartbeat
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UUWorksInterfaceCoreGameServer::ForceHeartbeat()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServer.ForceHeartbeat");

	UUWorksInterfaceCoreGameServer_ForceHeartbeat_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002AC2C0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreGameServer.EndAuthSession
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamID                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreGameServer::EndAuthSession(const struct FUWorksSteamID& SteamID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServer.EndAuthSession");

	UUWorksInterfaceCoreGameServer_EndAuthSession_Params params {};
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002AC230
//		Name   -> Function UWorksCore.UWorksInterfaceCoreGameServer.EnableHeartbeats
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bActive                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreGameServer::EnableHeartbeats(bool bActive)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServer.EnableHeartbeats");

	UUWorksInterfaceCoreGameServer_EnableHeartbeats_Params params {};
	params.bActive = bActive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002AC130
//		Name   -> Function UWorksCore.UWorksInterfaceCoreGameServer.ComputeNewPlayerCompatibilityMinimal
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FScriptDelegate                             Completed                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FUWorksSteamID                              SteamIDNewPlayer                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreGameServer::ComputeNewPlayerCompatibilityMinimal(const struct FScriptDelegate& Completed, const struct FUWorksSteamID& SteamIDNewPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServer.ComputeNewPlayerCompatibilityMinimal");

	UUWorksInterfaceCoreGameServer_ComputeNewPlayerCompatibilityMinimal_Params params {};
	params.Completed = Completed;
	params.SteamIDNewPlayer = SteamIDNewPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002AC100
//		Name   -> Function UWorksCore.UWorksInterfaceCoreGameServer.ComputeNewPlayerCompatibility
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UUWorksRequestCoreComputeNewPlayerCompatibility* ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestCoreComputeNewPlayerCompatibility* UUWorksInterfaceCoreGameServer::ComputeNewPlayerCompatibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServer.ComputeNewPlayerCompatibility");

	UUWorksInterfaceCoreGameServer_ComputeNewPlayerCompatibility_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002AC0E0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreGameServer.ClearAllKeyValues
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UUWorksInterfaceCoreGameServer::ClearAllKeyValues()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServer.ClearAllKeyValues");

	UUWorksInterfaceCoreGameServer_ClearAllKeyValues_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002AC060
//		Name   -> Function UWorksCore.UWorksInterfaceCoreGameServer.CancelAuthTicket
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksTicketHandle                         TicketHandle                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreGameServer::CancelAuthTicket(const struct FUWorksTicketHandle& TicketHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServer.CancelAuthTicket");

	UUWorksInterfaceCoreGameServer_CancelAuthTicket_Params params {};
	params.TicketHandle = TicketHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002ABF10
//		Name   -> Function UWorksCore.UWorksInterfaceCoreGameServer.BSecure
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreGameServer::BSecure()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServer.BSecure");

	UUWorksInterfaceCoreGameServer_BSecure_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002ABEE0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreGameServer.BLoggedOn
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreGameServer::BLoggedOn()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServer.BLoggedOn");

	UUWorksInterfaceCoreGameServer_BLoggedOn_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002ABF40
//		Name   -> Function UWorksCore.UWorksInterfaceCoreGameServer.BeginAuthSession
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TArray<unsigned char>                              Ticket                                                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
//		struct FUWorksSteamID                              SteamID                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		UWorksCore_EUWorksBeginAuthSessionResult           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UWorksCore_EUWorksBeginAuthSessionResult UUWorksInterfaceCoreGameServer::BeginAuthSession(TArray<unsigned char> Ticket, const struct FUWorksSteamID& SteamID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServer.BeginAuthSession");

	UUWorksInterfaceCoreGameServer_BeginAuthSession_Params params {};
	params.Ticket = Ticket;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002ABDE0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreGameServer.AssociateWithClanMinimal
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FScriptDelegate                             Completed                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FUWorksSteamID                              SteamIDClan                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreGameServer::AssociateWithClanMinimal(const struct FScriptDelegate& Completed, const struct FUWorksSteamID& SteamIDClan)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServer.AssociateWithClanMinimal");

	UUWorksInterfaceCoreGameServer_AssociateWithClanMinimal_Params params {};
	params.Completed = Completed;
	params.SteamIDClan = SteamIDClan;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002ABDB0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreGameServer.AssociateWithClan
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UUWorksRequestCoreAssociateWithClan*         ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestCoreAssociateWithClan* UUWorksInterfaceCoreGameServer::AssociateWithClan()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServer.AssociateWithClan");

	UUWorksInterfaceCoreGameServer_AssociateWithClan_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002ADE10
//		Name   -> Function UWorksCore.UWorksInterfaceCoreGameServerStats.UpdateUserAvgRateStat
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamIDUser                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FString                                     Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              CountThisSession                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              SessionLength                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreGameServerStats::UpdateUserAvgRateStat(const struct FUWorksSteamID& SteamIDUser, const struct FString& Name, float CountThisSession, float SessionLength)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServerStats.UpdateUserAvgRateStat");

	UUWorksInterfaceCoreGameServerStats_UpdateUserAvgRateStat_Params params {};
	params.SteamIDUser = SteamIDUser;
	params.Name = Name;
	params.CountThisSession = CountThisSession;
	params.SessionLength = SessionLength;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002ADD10
//		Name   -> Function UWorksCore.UWorksInterfaceCoreGameServerStats.StoreUserStatsMinimal
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FScriptDelegate                             Completed                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FUWorksSteamID                              SteamIDUser                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreGameServerStats::StoreUserStatsMinimal(const struct FScriptDelegate& Completed, const struct FUWorksSteamID& SteamIDUser)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServerStats.StoreUserStatsMinimal");

	UUWorksInterfaceCoreGameServerStats_StoreUserStatsMinimal_Params params {};
	params.Completed = Completed;
	params.SteamIDUser = SteamIDUser;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002ADCE0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreGameServerStats.StoreUserStats
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UUWorksRequestCoreStoreUserStats*            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestCoreStoreUserStats* UUWorksInterfaceCoreGameServerStats::StoreUserStats()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServerStats.StoreUserStats");

	UUWorksInterfaceCoreGameServerStats_StoreUserStats_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002ADB80
//		Name   -> Function UWorksCore.UWorksInterfaceCoreGameServerStats.SetUserStatFromInteger
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamIDUser                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FString                                     Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Data                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreGameServerStats::SetUserStatFromInteger(const struct FUWorksSteamID& SteamIDUser, const struct FString& Name, int Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServerStats.SetUserStatFromInteger");

	UUWorksInterfaceCoreGameServerStats_SetUserStatFromInteger_Params params {};
	params.SteamIDUser = SteamIDUser;
	params.Name = Name;
	params.Data = Data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002ADA10
//		Name   -> Function UWorksCore.UWorksInterfaceCoreGameServerStats.SetUserStatFromFloat
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamIDUser                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FString                                     Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Data                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreGameServerStats::SetUserStatFromFloat(const struct FUWorksSteamID& SteamIDUser, const struct FString& Name, float Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServerStats.SetUserStatFromFloat");

	UUWorksInterfaceCoreGameServerStats_SetUserStatFromFloat_Params params {};
	params.SteamIDUser = SteamIDUser;
	params.Name = Name;
	params.Data = Data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002AD8E0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreGameServerStats.SetUserAchievement
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamIDUser                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FString                                     Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreGameServerStats::SetUserAchievement(const struct FUWorksSteamID& SteamIDUser, const struct FString& Name)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServerStats.SetUserAchievement");

	UUWorksInterfaceCoreGameServerStats_SetUserAchievement_Params params {};
	params.SteamIDUser = SteamIDUser;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002AD7E0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreGameServerStats.RequestUserStatsMinimal
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FScriptDelegate                             Completed                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FUWorksSteamID                              SteamIDUser                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreGameServerStats::RequestUserStatsMinimal(const struct FScriptDelegate& Completed, const struct FUWorksSteamID& SteamIDUser)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServerStats.RequestUserStatsMinimal");

	UUWorksInterfaceCoreGameServerStats_RequestUserStatsMinimal_Params params {};
	params.Completed = Completed;
	params.SteamIDUser = SteamIDUser;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002AD7B0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreGameServerStats.RequestUserStats
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UUWorksRequestCoreRequestUserStatsGS*        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestCoreRequestUserStatsGS* UUWorksInterfaceCoreGameServerStats::RequestUserStats()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServerStats.RequestUserStats");

	UUWorksInterfaceCoreGameServerStats_RequestUserStats_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002AD630
//		Name   -> Function UWorksCore.UWorksInterfaceCoreGameServerStats.GetUserStatAsInteger
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamIDUser                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FString                                     Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Data                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreGameServerStats::GetUserStatAsInteger(const struct FUWorksSteamID& SteamIDUser, const struct FString& Name, int* Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServerStats.GetUserStatAsInteger");

	UUWorksInterfaceCoreGameServerStats_GetUserStatAsInteger_Params params {};
	params.SteamIDUser = SteamIDUser;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002AD4B0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreGameServerStats.GetUserStatAsFloat
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamIDUser                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FString                                     Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Data                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreGameServerStats::GetUserStatAsFloat(const struct FUWorksSteamID& SteamIDUser, const struct FString& Name, float* Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServerStats.GetUserStatAsFloat");

	UUWorksInterfaceCoreGameServerStats_GetUserStatAsFloat_Params params {};
	params.SteamIDUser = SteamIDUser;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002AD330
//		Name   -> Function UWorksCore.UWorksInterfaceCoreGameServerStats.GetUserAchievement
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamIDUser                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FString                                     Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bAchieved                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreGameServerStats::GetUserAchievement(const struct FUWorksSteamID& SteamIDUser, const struct FString& Name, bool* bAchieved)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServerStats.GetUserAchievement");

	UUWorksInterfaceCoreGameServerStats_GetUserAchievement_Params params {};
	params.SteamIDUser = SteamIDUser;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bAchieved != nullptr)
		*bAchieved = params.bAchieved;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002AD300
//		Name   -> Function UWorksCore.UWorksInterfaceCoreGameServerStats.GetGameServerStats
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UUWorksInterfaceCoreGameServerStats*         ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksInterfaceCoreGameServerStats* UUWorksInterfaceCoreGameServerStats::STATIC_GetGameServerStats()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServerStats.GetGameServerStats");

	UUWorksInterfaceCoreGameServerStats_GetGameServerStats_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002AD1D0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreGameServerStats.ClearUserAchievement
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamIDUser                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FString                                     Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreGameServerStats::ClearUserAchievement(const struct FUWorksSteamID& SteamIDUser, const struct FString& Name)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServerStats.ClearUserAchievement");

	UUWorksInterfaceCoreGameServerStats_ClearUserAchievement_Params params {};
	params.SteamIDUser = SteamIDUser;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B0140
//		Name   -> Function UWorksCore.UWorksInterfaceCoreInventory.TriggerItemDrop
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamInventoryResult                 Handle                                                     (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FUWorksSteamItemDef                         ItemDefinition                                             (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreInventory::TriggerItemDrop(struct FUWorksSteamInventoryResult* Handle, const struct FUWorksSteamItemDef& ItemDefinition)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreInventory.TriggerItemDrop");

	UUWorksInterfaceCoreInventory_TriggerItemDrop_Params params {};
	params.ItemDefinition = ItemDefinition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Handle != nullptr)
		*Handle = params.Handle;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002AFFD0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreInventory.TransferItemQuantity
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamInventoryResult                 Handle                                                     (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FUWorksSteamItemInstanceID                  ItemSourceInstanceID                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		int                                                ItemSourceQuantity                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUWorksSteamItemInstanceID                  ItemDestinationInstanceID                                  (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreInventory::TransferItemQuantity(struct FUWorksSteamInventoryResult* Handle, const struct FUWorksSteamItemInstanceID& ItemSourceInstanceID, int ItemSourceQuantity, const struct FUWorksSteamItemInstanceID& ItemDestinationInstanceID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreInventory.TransferItemQuantity");

	UUWorksInterfaceCoreInventory_TransferItemQuantity_Params params {};
	params.ItemSourceInstanceID = ItemSourceInstanceID;
	params.ItemSourceQuantity = ItemSourceQuantity;
	params.ItemDestinationInstanceID = ItemDestinationInstanceID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Handle != nullptr)
		*Handle = params.Handle;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002AFCB0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreInventory.TradeItems
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamInventoryResult                 Handle                                                     (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FUWorksSteamID                              SteamIDTradePartner                                        (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		TArray<struct FUWorksSteamItemInstanceID>          ItemsGiven                                                 (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
//		TArray<int>                                        ItemsGivenQuantities                                       (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
//		TArray<struct FUWorksSteamItemInstanceID>          ItemsReceived                                              (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
//		TArray<int>                                        ItemsReceivedQuantities                                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreInventory::TradeItems(struct FUWorksSteamInventoryResult* Handle, const struct FUWorksSteamID& SteamIDTradePartner, TArray<struct FUWorksSteamItemInstanceID> ItemsGiven, TArray<int> ItemsGivenQuantities, TArray<struct FUWorksSteamItemInstanceID> ItemsReceived, TArray<int> ItemsReceivedQuantities)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreInventory.TradeItems");

	UUWorksInterfaceCoreInventory_TradeItems_Params params {};
	params.SteamIDTradePartner = SteamIDTradePartner;
	params.ItemsGiven = ItemsGiven;
	params.ItemsGivenQuantities = ItemsGivenQuantities;
	params.ItemsReceived = ItemsReceived;
	params.ItemsReceivedQuantities = ItemsReceivedQuantities;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Handle != nullptr)
		*Handle = params.Handle;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002AFBB0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreInventory.SerializeResult
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamInventoryResult                 Handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		TArray<unsigned char>                              Buffer                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreInventory::SerializeResult(const struct FUWorksSteamInventoryResult& Handle, TArray<unsigned char>* Buffer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreInventory.SerializeResult");

	UUWorksInterfaceCoreInventory_SerializeResult_Params params {};
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Buffer != nullptr)
		*Buffer = params.Buffer;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002AFAB0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreInventory.RequestEligiblePromoItemDefinitionsIDsMinimal
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FScriptDelegate                             Completed                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FUWorksSteamID                              SteamID                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreInventory::RequestEligiblePromoItemDefinitionsIDsMinimal(const struct FScriptDelegate& Completed, const struct FUWorksSteamID& SteamID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreInventory.RequestEligiblePromoItemDefinitionsIDsMinimal");

	UUWorksInterfaceCoreInventory_RequestEligiblePromoItemDefinitionsIDsMinimal_Params params {};
	params.Completed = Completed;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002AFA80
//		Name   -> Function UWorksCore.UWorksInterfaceCoreInventory.RequestEligiblePromoItemDefinitionsIDs
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UUWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs* ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs* UUWorksInterfaceCoreInventory::RequestEligiblePromoItemDefinitionsIDs()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreInventory.RequestEligiblePromoItemDefinitionsIDs");

	UUWorksInterfaceCoreInventory_RequestEligiblePromoItemDefinitionsIDs_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002AFA50
//		Name   -> Function UWorksCore.UWorksInterfaceCoreInventory.LoadItemDefinitions
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreInventory::LoadItemDefinitions()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreInventory.LoadItemDefinitions");

	UUWorksInterfaceCoreInventory_LoadItemDefinitions_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002AF9A0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreInventory.GrantPromoItems
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamInventoryResult                 Handle                                                     (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreInventory::GrantPromoItems(struct FUWorksSteamInventoryResult* Handle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreInventory.GrantPromoItems");

	UUWorksInterfaceCoreInventory_GrantPromoItems_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Handle != nullptr)
		*Handle = params.Handle;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002AF910
//		Name   -> Function UWorksCore.UWorksInterfaceCoreInventory.GetResultTimestamp
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamInventoryResult                 Handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreInventory::GetResultTimestamp(const struct FUWorksSteamInventoryResult& Handle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreInventory.GetResultTimestamp");

	UUWorksInterfaceCoreInventory_GetResultTimestamp_Params params {};
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002AF880
//		Name   -> Function UWorksCore.UWorksInterfaceCoreInventory.GetResultStatus
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamInventoryResult                 Handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		UWorksCore_EUWorksResult                           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UWorksCore_EUWorksResult UUWorksInterfaceCoreInventory::GetResultStatus(const struct FUWorksSteamInventoryResult& Handle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreInventory.GetResultStatus");

	UUWorksInterfaceCoreInventory_GetResultStatus_Params params {};
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002AF760
//		Name   -> Function UWorksCore.UWorksInterfaceCoreInventory.GetResultItems
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamInventoryResult                 Handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		TArray<struct FUWorksSteamItemDetails>             items                                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreInventory::GetResultItems(const struct FUWorksSteamInventoryResult& Handle, TArray<struct FUWorksSteamItemDetails>* items)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreInventory.GetResultItems");

	UUWorksInterfaceCoreInventory_GetResultItems_Params params {};
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (items != nullptr)
		*items = params.items;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002AF610
//		Name   -> Function UWorksCore.UWorksInterfaceCoreInventory.GetItemsByID
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamInventoryResult                 Handle                                                     (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
//		TArray<struct FUWorksSteamItemInstanceID>          InstanceIDs                                                (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreInventory::GetItemsByID(struct FUWorksSteamInventoryResult* Handle, TArray<struct FUWorksSteamItemInstanceID> InstanceIDs)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreInventory.GetItemsByID");

	UUWorksInterfaceCoreInventory_GetItemsByID_Params params {};
	params.InstanceIDs = InstanceIDs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Handle != nullptr)
		*Handle = params.Handle;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002AF490
//		Name   -> Function UWorksCore.UWorksInterfaceCoreInventory.GetItemDefinitionPropertyValue
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamItemDef                         ItemDefinition                                             (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FString                                     PropertyName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     PropertyValue                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreInventory::GetItemDefinitionPropertyValue(const struct FUWorksSteamItemDef& ItemDefinition, const struct FString& PropertyName, struct FString* PropertyValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreInventory.GetItemDefinitionPropertyValue");

	UUWorksInterfaceCoreInventory_GetItemDefinitionPropertyValue_Params params {};
	params.ItemDefinition = ItemDefinition;
	params.PropertyName = PropertyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PropertyValue != nullptr)
		*PropertyValue = params.PropertyValue;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002AF370
//		Name   -> Function UWorksCore.UWorksInterfaceCoreInventory.GetItemDefinitionPropertiesNames
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamItemDef                         ItemDefinition                                             (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		TArray<struct FString>                             PropertiesNames                                            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreInventory::GetItemDefinitionPropertiesNames(const struct FUWorksSteamItemDef& ItemDefinition, TArray<struct FString>* PropertiesNames)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreInventory.GetItemDefinitionPropertiesNames");

	UUWorksInterfaceCoreInventory_GetItemDefinitionPropertiesNames_Params params {};
	params.ItemDefinition = ItemDefinition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PropertiesNames != nullptr)
		*PropertiesNames = params.PropertiesNames;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002AF2B0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreInventory.GetItemDefinitionIDs
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<struct FUWorksSteamItemDef>                 ItemDefinitions                                            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreInventory::GetItemDefinitionIDs(TArray<struct FUWorksSteamItemDef>* ItemDefinitions)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreInventory.GetItemDefinitionIDs");

	UUWorksInterfaceCoreInventory_GetItemDefinitionIDs_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ItemDefinitions != nullptr)
		*ItemDefinitions = params.ItemDefinitions;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002AF280
//		Name   -> Function UWorksCore.UWorksInterfaceCoreInventory.GetInventory
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UUWorksInterfaceCoreInventory*               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksInterfaceCoreInventory* UUWorksInterfaceCoreInventory::STATIC_GetInventory()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreInventory.GetInventory");

	UUWorksInterfaceCoreInventory_GetInventory_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002AF180
//		Name   -> Function UWorksCore.UWorksInterfaceCoreInventory.GetEligiblePromoItemDefinitionIDs
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamID                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		TArray<struct FUWorksSteamItemDef>                 ItemDefinitions                                            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreInventory::GetEligiblePromoItemDefinitionIDs(const struct FUWorksSteamID& SteamID, TArray<struct FUWorksSteamItemDef>* ItemDefinitions)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreInventory.GetEligiblePromoItemDefinitionIDs");

	UUWorksInterfaceCoreInventory_GetEligiblePromoItemDefinitionIDs_Params params {};
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ItemDefinitions != nullptr)
		*ItemDefinitions = params.ItemDefinitions;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002AF0D0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreInventory.GetAllItems
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamInventoryResult                 Handle                                                     (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreInventory::GetAllItems(struct FUWorksSteamInventoryResult* Handle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreInventory.GetAllItems");

	UUWorksInterfaceCoreInventory_GetAllItems_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Handle != nullptr)
		*Handle = params.Handle;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002AEF10
//		Name   -> Function UWorksCore.UWorksInterfaceCoreInventory.GenerateItems
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamInventoryResult                 Handle                                                     (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
//		TArray<struct FUWorksSteamItemDef>                 ItemDefinitions                                            (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
//		TArray<int>                                        ItemQuantities                                             (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreInventory::GenerateItems(struct FUWorksSteamInventoryResult* Handle, TArray<struct FUWorksSteamItemDef> ItemDefinitions, TArray<int> ItemQuantities)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreInventory.GenerateItems");

	UUWorksInterfaceCoreInventory_GenerateItems_Params params {};
	params.ItemDefinitions = ItemDefinitions;
	params.ItemQuantities = ItemQuantities;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Handle != nullptr)
		*Handle = params.Handle;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002AEC30
//		Name   -> Function UWorksCore.UWorksInterfaceCoreInventory.ExchangeItems
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamInventoryResult                 Handle                                                     (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
//		TArray<struct FUWorksSteamItemDef>                 ItemsGenerated                                             (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
//		TArray<int>                                        ItemsGeneratedQuantities                                   (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
//		TArray<struct FUWorksSteamItemInstanceID>          ItemsDestroyed                                             (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
//		TArray<int>                                        ItemsDestroyedQuantities                                   (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreInventory::ExchangeItems(struct FUWorksSteamInventoryResult* Handle, TArray<struct FUWorksSteamItemDef> ItemsGenerated, TArray<int> ItemsGeneratedQuantities, TArray<struct FUWorksSteamItemInstanceID> ItemsDestroyed, TArray<int> ItemsDestroyedQuantities)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreInventory.ExchangeItems");

	UUWorksInterfaceCoreInventory_ExchangeItems_Params params {};
	params.ItemsGenerated = ItemsGenerated;
	params.ItemsGeneratedQuantities = ItemsGeneratedQuantities;
	params.ItemsDestroyed = ItemsDestroyed;
	params.ItemsDestroyedQuantities = ItemsDestroyedQuantities;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Handle != nullptr)
		*Handle = params.Handle;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002AEBB0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreInventory.DestroyResult
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamInventoryResult                 Handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreInventory::DestroyResult(const struct FUWorksSteamInventoryResult& Handle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreInventory.DestroyResult");

	UUWorksInterfaceCoreInventory_DestroyResult_Params params {};
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002AEA10
//		Name   -> Function UWorksCore.UWorksInterfaceCoreInventory.DeserializeResult
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamInventoryResult                 Handle                                                     (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
//		TArray<unsigned char>                              Buffer                                                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
//		bool                                               bReservedMustBeFalse                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreInventory::DeserializeResult(struct FUWorksSteamInventoryResult* Handle, TArray<unsigned char> Buffer, bool bReservedMustBeFalse)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreInventory.DeserializeResult");

	UUWorksInterfaceCoreInventory_DeserializeResult_Params params {};
	params.Buffer = Buffer;
	params.bReservedMustBeFalse = bReservedMustBeFalse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Handle != nullptr)
		*Handle = params.Handle;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002AE8F0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreInventory.ConsumeItem
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamInventoryResult                 Handle                                                     (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FUWorksSteamItemInstanceID                  ItemInstanceID                                             (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		int                                                ItemQuantity                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreInventory::ConsumeItem(struct FUWorksSteamInventoryResult* Handle, const struct FUWorksSteamItemInstanceID& ItemInstanceID, int ItemQuantity)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreInventory.ConsumeItem");

	UUWorksInterfaceCoreInventory_ConsumeItem_Params params {};
	params.ItemInstanceID = ItemInstanceID;
	params.ItemQuantity = ItemQuantity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Handle != nullptr)
		*Handle = params.Handle;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002AE820
//		Name   -> Function UWorksCore.UWorksInterfaceCoreInventory.CheckResultSteamID
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamInventoryResult                 Handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FUWorksSteamID                              SteamID                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreInventory::CheckResultSteamID(const struct FUWorksSteamInventoryResult& Handle, const struct FUWorksSteamID& SteamID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreInventory.CheckResultSteamID");

	UUWorksInterfaceCoreInventory_CheckResultSteamID_Params params {};
	params.Handle = Handle;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002AE6D0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreInventory.AddPromoItems
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamInventoryResult                 Handle                                                     (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
//		TArray<struct FUWorksSteamItemDef>                 ItemDefinitions                                            (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreInventory::AddPromoItems(struct FUWorksSteamInventoryResult* Handle, TArray<struct FUWorksSteamItemDef> ItemDefinitions)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreInventory.AddPromoItems");

	UUWorksInterfaceCoreInventory_AddPromoItems_Params params {};
	params.ItemDefinitions = ItemDefinitions;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Handle != nullptr)
		*Handle = params.Handle;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002AE5E0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreInventory.AddPromoItem
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamInventoryResult                 Handle                                                     (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FUWorksSteamItemDef                         ItemDefinition                                             (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreInventory::AddPromoItem(struct FUWorksSteamInventoryResult* Handle, const struct FUWorksSteamItemDef& ItemDefinition)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreInventory.AddPromoItem");

	UUWorksInterfaceCoreInventory_AddPromoItem_Params params {};
	params.ItemDefinition = ItemDefinition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Handle != nullptr)
		*Handle = params.Handle;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B34C0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreMatchmaking.SetLobbyType
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamIDLobby                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		UWorksCore_EUWorksLobbyType                        LobbyType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreMatchmaking::SetLobbyType(const struct FUWorksSteamID& SteamIDLobby, UWorksCore_EUWorksLobbyType LobbyType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.SetLobbyType");

	UUWorksInterfaceCoreMatchmaking_SetLobbyType_Params params {};
	params.SteamIDLobby = SteamIDLobby;
	params.LobbyType = LobbyType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B3400
//		Name   -> Function UWorksCore.UWorksInterfaceCoreMatchmaking.SetLobbyOwner
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamIDLobby                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FUWorksSteamID                              SteamIDNewOwner                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreMatchmaking::SetLobbyOwner(const struct FUWorksSteamID& SteamIDLobby, const struct FUWorksSteamID& SteamIDNewOwner)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.SetLobbyOwner");

	UUWorksInterfaceCoreMatchmaking_SetLobbyOwner_Params params {};
	params.SteamIDLobby = SteamIDLobby;
	params.SteamIDNewOwner = SteamIDNewOwner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B3340
//		Name   -> Function UWorksCore.UWorksInterfaceCoreMatchmaking.SetLobbyMemberLimit
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamIDLobby                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		int                                                MaxMembers                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreMatchmaking::SetLobbyMemberLimit(const struct FUWorksSteamID& SteamIDLobby, int MaxMembers)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.SetLobbyMemberLimit");

	UUWorksInterfaceCoreMatchmaking_SetLobbyMemberLimit_Params params {};
	params.SteamIDLobby = SteamIDLobby;
	params.MaxMembers = MaxMembers;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B31A0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreMatchmaking.SetLobbyMemberData
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamIDLobby                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FString                                     Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreMatchmaking::SetLobbyMemberData(const struct FUWorksSteamID& SteamIDLobby, const struct FString& Key, const struct FString& Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.SetLobbyMemberData");

	UUWorksInterfaceCoreMatchmaking_SetLobbyMemberData_Params params {};
	params.SteamIDLobby = SteamIDLobby;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002B30E0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreMatchmaking.SetLobbyJoinable
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamIDLobby                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               bLobbyJoinable                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreMatchmaking::SetLobbyJoinable(const struct FUWorksSteamID& SteamIDLobby, bool bLobbyJoinable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.SetLobbyJoinable");

	UUWorksInterfaceCoreMatchmaking_SetLobbyJoinable_Params params {};
	params.SteamIDLobby = SteamIDLobby;
	params.bLobbyJoinable = bLobbyJoinable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B2F50
//		Name   -> Function UWorksCore.UWorksInterfaceCoreMatchmaking.SetLobbyGameServer
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamIDLobby                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FString                                     GameServerIP                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                GameServerPort                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUWorksSteamID                              SteamIDGameServer                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreMatchmaking::SetLobbyGameServer(const struct FUWorksSteamID& SteamIDLobby, const struct FString& GameServerIP, int GameServerPort, const struct FUWorksSteamID& SteamIDGameServer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.SetLobbyGameServer");

	UUWorksInterfaceCoreMatchmaking_SetLobbyGameServer_Params params {};
	params.SteamIDLobby = SteamIDLobby;
	params.GameServerIP = GameServerIP;
	params.GameServerPort = GameServerPort;
	params.SteamIDGameServer = SteamIDGameServer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002B2DA0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreMatchmaking.SetLobbyData
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamIDLobby                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FString                                     Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreMatchmaking::SetLobbyData(const struct FUWorksSteamID& SteamIDLobby, const struct FString& Key, const struct FString& Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.SetLobbyData");

	UUWorksInterfaceCoreMatchmaking_SetLobbyData_Params params {};
	params.SteamIDLobby = SteamIDLobby;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B2CE0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreMatchmaking.SetLinkedLobby
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamIDLobby                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FUWorksSteamID                              SteamIDLobbyDependent                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreMatchmaking::SetLinkedLobby(const struct FUWorksSteamID& SteamIDLobby, const struct FUWorksSteamID& SteamIDLobbyDependent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.SetLinkedLobby");

	UUWorksInterfaceCoreMatchmaking_SetLinkedLobby_Params params {};
	params.SteamIDLobby = SteamIDLobby;
	params.SteamIDLobbyDependent = SteamIDLobbyDependent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B2BB0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreMatchmaking.SendLobbyChatMsg
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamIDLobby                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FString                                     Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreMatchmaking::SendLobbyChatMsg(const struct FUWorksSteamID& SteamIDLobby, const struct FString& Message)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.SendLobbyChatMsg");

	UUWorksInterfaceCoreMatchmaking_SendLobbyChatMsg_Params params {};
	params.SteamIDLobby = SteamIDLobby;
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B2AF0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreMatchmaking.RequestLobbyListMinimal
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FScriptDelegate                             Completed                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreMatchmaking::RequestLobbyListMinimal(const struct FScriptDelegate& Completed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.RequestLobbyListMinimal");

	UUWorksInterfaceCoreMatchmaking_RequestLobbyListMinimal_Params params {};
	params.Completed = Completed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002B2AC0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreMatchmaking.RequestLobbyList
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UUWorksRequestCoreRequestLobbyList*          ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestCoreRequestLobbyList* UUWorksInterfaceCoreMatchmaking::RequestLobbyList()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.RequestLobbyList");

	UUWorksInterfaceCoreMatchmaking_RequestLobbyList_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B2A30
//		Name   -> Function UWorksCore.UWorksInterfaceCoreMatchmaking.RequestLobbyData
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamIDLobby                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreMatchmaking::RequestLobbyData(const struct FUWorksSteamID& SteamIDLobby)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.RequestLobbyData");

	UUWorksInterfaceCoreMatchmaking_RequestLobbyData_Params params {};
	params.SteamIDLobby = SteamIDLobby;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B2810
//		Name   -> Function UWorksCore.UWorksInterfaceCoreMatchmaking.RemoveFavoriteGame
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     IP                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ConnectionPort                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                QueryPort                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<UWorksCore_EUWorksFavoriteFlags>            Flags                                                      (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreMatchmaking::RemoveFavoriteGame(int AppID, const struct FString& IP, int ConnectionPort, int QueryPort, TArray<UWorksCore_EUWorksFavoriteFlags> Flags)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.RemoveFavoriteGame");

	UUWorksInterfaceCoreMatchmaking_RemoveFavoriteGame_Params params {};
	params.AppID = AppID;
	params.IP = IP;
	params.ConnectionPort = ConnectionPort;
	params.QueryPort = QueryPort;
	params.Flags = Flags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B2790
//		Name   -> Function UWorksCore.UWorksInterfaceCoreMatchmaking.LeaveLobby
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamIDLobby                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreMatchmaking::LeaveLobby(const struct FUWorksSteamID& SteamIDLobby)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.LeaveLobby");

	UUWorksInterfaceCoreMatchmaking_LeaveLobby_Params params {};
	params.SteamIDLobby = SteamIDLobby;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002B2690
//		Name   -> Function UWorksCore.UWorksInterfaceCoreMatchmaking.JoinLobbyMinimal
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FScriptDelegate                             Completed                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FUWorksSteamID                              SteamIDLobby                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreMatchmaking::JoinLobbyMinimal(const struct FScriptDelegate& Completed, const struct FUWorksSteamID& SteamIDLobby)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.JoinLobbyMinimal");

	UUWorksInterfaceCoreMatchmaking_JoinLobbyMinimal_Params params {};
	params.Completed = Completed;
	params.SteamIDLobby = SteamIDLobby;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002B2660
//		Name   -> Function UWorksCore.UWorksInterfaceCoreMatchmaking.JoinLobby
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UUWorksRequestCoreJoinLobby*                 ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestCoreJoinLobby* UUWorksInterfaceCoreMatchmaking::JoinLobby()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.JoinLobby");

	UUWorksInterfaceCoreMatchmaking_JoinLobby_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B25A0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreMatchmaking.InviteUserToLobby
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamIDLobby                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FUWorksSteamID                              SteamIDInvitee                                             (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreMatchmaking::InviteUserToLobby(const struct FUWorksSteamID& SteamIDLobby, const struct FUWorksSteamID& SteamIDInvitee)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.InviteUserToLobby");

	UUWorksInterfaceCoreMatchmaking_InviteUserToLobby_Params params {};
	params.SteamIDLobby = SteamIDLobby;
	params.SteamIDInvitee = SteamIDInvitee;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B2510
//		Name   -> Function UWorksCore.UWorksInterfaceCoreMatchmaking.GetNumLobbyMembers
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamIDLobby                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreMatchmaking::GetNumLobbyMembers(const struct FUWorksSteamID& SteamIDLobby)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.GetNumLobbyMembers");

	UUWorksInterfaceCoreMatchmaking_GetNumLobbyMembers_Params params {};
	params.SteamIDLobby = SteamIDLobby;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B24E0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreMatchmaking.GetMatchmaking
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UUWorksInterfaceCoreMatchmaking*             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksInterfaceCoreMatchmaking* UUWorksInterfaceCoreMatchmaking::STATIC_GetMatchmaking()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.GetMatchmaking");

	UUWorksInterfaceCoreMatchmaking_GetMatchmaking_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B2450
//		Name   -> Function UWorksCore.UWorksInterfaceCoreMatchmaking.GetLobbyOwner
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamIDLobby                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FUWorksSteamID                              ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FUWorksSteamID UUWorksInterfaceCoreMatchmaking::GetLobbyOwner(const struct FUWorksSteamID& SteamIDLobby)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.GetLobbyOwner");

	UUWorksInterfaceCoreMatchmaking_GetLobbyOwner_Params params {};
	params.SteamIDLobby = SteamIDLobby;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B23C0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreMatchmaking.GetLobbyMemberLimit
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamIDLobby                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreMatchmaking::GetLobbyMemberLimit(const struct FUWorksSteamID& SteamIDLobby)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.GetLobbyMemberLimit");

	UUWorksInterfaceCoreMatchmaking_GetLobbyMemberLimit_Params params {};
	params.SteamIDLobby = SteamIDLobby;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B2230
//		Name   -> Function UWorksCore.UWorksInterfaceCoreMatchmaking.GetLobbyMemberData
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamIDLobby                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FUWorksSteamID                              SteamIDUser                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FString                                     Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UUWorksInterfaceCoreMatchmaking::GetLobbyMemberData(const struct FUWorksSteamID& SteamIDLobby, const struct FUWorksSteamID& SteamIDUser, const struct FString& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.GetLobbyMemberData");

	UUWorksInterfaceCoreMatchmaking_GetLobbyMemberData_Params params {};
	params.SteamIDLobby = SteamIDLobby;
	params.SteamIDUser = SteamIDUser;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B2160
//		Name   -> Function UWorksCore.UWorksInterfaceCoreMatchmaking.GetLobbyMemberByIndex
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamIDLobby                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		int                                                Member                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUWorksSteamID                              ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FUWorksSteamID UUWorksInterfaceCoreMatchmaking::GetLobbyMemberByIndex(const struct FUWorksSteamID& SteamIDLobby, int Member)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.GetLobbyMemberByIndex");

	UUWorksInterfaceCoreMatchmaking_GetLobbyMemberByIndex_Params params {};
	params.SteamIDLobby = SteamIDLobby;
	params.Member = Member;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B1FB0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreMatchmaking.GetLobbyGameServer
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamIDLobby                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FString                                     GameServerIP                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                GameServerPort                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUWorksSteamID                              SteamIDGameServer                                          (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreMatchmaking::GetLobbyGameServer(const struct FUWorksSteamID& SteamIDLobby, struct FString* GameServerIP, int* GameServerPort, struct FUWorksSteamID* SteamIDGameServer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.GetLobbyGameServer");

	UUWorksInterfaceCoreMatchmaking_GetLobbyGameServer_Params params {};
	params.SteamIDLobby = SteamIDLobby;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (GameServerIP != nullptr)
		*GameServerIP = params.GameServerIP;
	if (GameServerPort != nullptr)
		*GameServerPort = params.GameServerPort;
	if (SteamIDGameServer != nullptr)
		*SteamIDGameServer = params.SteamIDGameServer;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B1F20
//		Name   -> Function UWorksCore.UWorksInterfaceCoreMatchmaking.GetLobbyDataCount
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamIDLobby                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreMatchmaking::GetLobbyDataCount(const struct FUWorksSteamID& SteamIDLobby)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.GetLobbyDataCount");

	UUWorksInterfaceCoreMatchmaking_GetLobbyDataCount_Params params {};
	params.SteamIDLobby = SteamIDLobby;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B1D20
//		Name   -> Function UWorksCore.UWorksInterfaceCoreMatchmaking.GetLobbyDataByIndex
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamIDLobby                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		int                                                LobbyData                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Key                                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                KeyMaxLength                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Value                                                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ValueMaxLength                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreMatchmaking::GetLobbyDataByIndex(const struct FUWorksSteamID& SteamIDLobby, int LobbyData, struct FString* Key, int KeyMaxLength, struct FString* Value, int ValueMaxLength)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.GetLobbyDataByIndex");

	UUWorksInterfaceCoreMatchmaking_GetLobbyDataByIndex_Params params {};
	params.SteamIDLobby = SteamIDLobby;
	params.LobbyData = LobbyData;
	params.KeyMaxLength = KeyMaxLength;
	params.ValueMaxLength = ValueMaxLength;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Key != nullptr)
		*Key = params.Key;
	if (Value != nullptr)
		*Value = params.Value;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B1BB0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreMatchmaking.GetLobbyData
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamIDLobby                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FString                                     Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UUWorksInterfaceCoreMatchmaking::GetLobbyData(const struct FUWorksSteamID& SteamIDLobby, const struct FString& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.GetLobbyData");

	UUWorksInterfaceCoreMatchmaking_GetLobbyData_Params params {};
	params.SteamIDLobby = SteamIDLobby;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B19B0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreMatchmaking.GetLobbyChatEntry
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamIDLobby                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		int                                                MessageID                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUWorksSteamID                              SteamIDUser                                                (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FString                                     Message                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                MessageMaxLength                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		UWorksCore_EUWorksChatEntryType                    ChatEntryType                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreMatchmaking::GetLobbyChatEntry(const struct FUWorksSteamID& SteamIDLobby, int MessageID, struct FUWorksSteamID* SteamIDUser, struct FString* Message, int MessageMaxLength, UWorksCore_EUWorksChatEntryType* ChatEntryType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.GetLobbyChatEntry");

	UUWorksInterfaceCoreMatchmaking_GetLobbyChatEntry_Params params {};
	params.SteamIDLobby = SteamIDLobby;
	params.MessageID = MessageID;
	params.MessageMaxLength = MessageMaxLength;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SteamIDUser != nullptr)
		*SteamIDUser = params.SteamIDUser;
	if (Message != nullptr)
		*Message = params.Message;
	if (ChatEntryType != nullptr)
		*ChatEntryType = params.ChatEntryType;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B1920
//		Name   -> Function UWorksCore.UWorksInterfaceCoreMatchmaking.GetLobbyByIndex
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                Lobby                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUWorksSteamID                              ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FUWorksSteamID UUWorksInterfaceCoreMatchmaking::GetLobbyByIndex(int Lobby)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.GetLobbyByIndex");

	UUWorksInterfaceCoreMatchmaking_GetLobbyByIndex_Params params {};
	params.Lobby = Lobby;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B18F0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreMatchmaking.GetFavoriteGameCount
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreMatchmaking::GetFavoriteGameCount()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.GetFavoriteGameCount");

	UUWorksInterfaceCoreMatchmaking_GetFavoriteGameCount_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B1660
//		Name   -> Function UWorksCore.UWorksInterfaceCoreMatchmaking.GetFavoriteGame
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		int                                                Game                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                AppID                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     IP                                                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ConnectionPort                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                QueryPort                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<UWorksCore_EUWorksFavoriteFlags>            Flags                                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
//		int                                                TimeLastPlayedOnServer                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreMatchmaking::GetFavoriteGame(int Game, int* AppID, struct FString* IP, int* ConnectionPort, int* QueryPort, TArray<UWorksCore_EUWorksFavoriteFlags>* Flags, int* TimeLastPlayedOnServer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.GetFavoriteGame");

	UUWorksInterfaceCoreMatchmaking_GetFavoriteGame_Params params {};
	params.Game = Game;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AppID != nullptr)
		*AppID = params.AppID;
	if (IP != nullptr)
		*IP = params.IP;
	if (ConnectionPort != nullptr)
		*ConnectionPort = params.ConnectionPort;
	if (QueryPort != nullptr)
		*QueryPort = params.QueryPort;
	if (Flags != nullptr)
		*Flags = params.Flags;
	if (TimeLastPlayedOnServer != nullptr)
		*TimeLastPlayedOnServer = params.TimeLastPlayedOnServer;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B1530
//		Name   -> Function UWorksCore.UWorksInterfaceCoreMatchmaking.DeleteLobbyData
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamIDLobby                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FString                                     Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreMatchmaking::DeleteLobbyData(const struct FUWorksSteamID& SteamIDLobby, const struct FString& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.DeleteLobbyData");

	UUWorksInterfaceCoreMatchmaking_DeleteLobbyData_Params params {};
	params.SteamIDLobby = SteamIDLobby;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B1400
//		Name   -> Function UWorksCore.UWorksInterfaceCoreMatchmaking.CreateLobbyMinimal
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FScriptDelegate                             Completed                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		UWorksCore_EUWorksLobbyType                        LobbyType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                MaxMembers                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreMatchmaking::CreateLobbyMinimal(const struct FScriptDelegate& Completed, UWorksCore_EUWorksLobbyType LobbyType, int MaxMembers)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.CreateLobbyMinimal");

	UUWorksInterfaceCoreMatchmaking_CreateLobbyMinimal_Params params {};
	params.Completed = Completed;
	params.LobbyType = LobbyType;
	params.MaxMembers = MaxMembers;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002B13D0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreMatchmaking.CreateLobby
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UUWorksRequestCoreCreateLobby*               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestCoreCreateLobby* UUWorksInterfaceCoreMatchmaking::CreateLobby()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.CreateLobby");

	UUWorksInterfaceCoreMatchmaking_CreateLobby_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B1230
//		Name   -> Function UWorksCore.UWorksInterfaceCoreMatchmaking.AddRequestLobbyListStringFilter
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     KeyToMatch                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ValueToMatch                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		UWorksCore_EUWorksLobbyComparison                  ComparisonType                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreMatchmaking::AddRequestLobbyListStringFilter(const struct FString& KeyToMatch, const struct FString& ValueToMatch, UWorksCore_EUWorksLobbyComparison ComparisonType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.AddRequestLobbyListStringFilter");

	UUWorksInterfaceCoreMatchmaking_AddRequestLobbyListStringFilter_Params params {};
	params.KeyToMatch = KeyToMatch;
	params.ValueToMatch = ValueToMatch;
	params.ComparisonType = ComparisonType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002B11B0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreMatchmaking.AddRequestLobbyListResultCountFilter
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                maxResults                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreMatchmaking::AddRequestLobbyListResultCountFilter(int maxResults)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.AddRequestLobbyListResultCountFilter");

	UUWorksInterfaceCoreMatchmaking_AddRequestLobbyListResultCountFilter_Params params {};
	params.maxResults = maxResults;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002B1060
//		Name   -> Function UWorksCore.UWorksInterfaceCoreMatchmaking.AddRequestLobbyListNumericalFilter
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     KeyToMatch                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ValueToMatch                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		UWorksCore_EUWorksLobbyComparison                  ComparisonType                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreMatchmaking::AddRequestLobbyListNumericalFilter(const struct FString& KeyToMatch, int ValueToMatch, UWorksCore_EUWorksLobbyComparison ComparisonType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.AddRequestLobbyListNumericalFilter");

	UUWorksInterfaceCoreMatchmaking_AddRequestLobbyListNumericalFilter_Params params {};
	params.KeyToMatch = KeyToMatch;
	params.ValueToMatch = ValueToMatch;
	params.ComparisonType = ComparisonType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002B0F40
//		Name   -> Function UWorksCore.UWorksInterfaceCoreMatchmaking.AddRequestLobbyListNearValueFilter
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     KeyToMatch                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ValueToBeCloseTo                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreMatchmaking::AddRequestLobbyListNearValueFilter(const struct FString& KeyToMatch, int ValueToBeCloseTo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.AddRequestLobbyListNearValueFilter");

	UUWorksInterfaceCoreMatchmaking_AddRequestLobbyListNearValueFilter_Params params {};
	params.KeyToMatch = KeyToMatch;
	params.ValueToBeCloseTo = ValueToBeCloseTo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002B0EC0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreMatchmaking.AddRequestLobbyListFilterSlotsAvailable
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                SlotsAvailable                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreMatchmaking::AddRequestLobbyListFilterSlotsAvailable(int SlotsAvailable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.AddRequestLobbyListFilterSlotsAvailable");

	UUWorksInterfaceCoreMatchmaking_AddRequestLobbyListFilterSlotsAvailable_Params params {};
	params.SlotsAvailable = SlotsAvailable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002B0E40
//		Name   -> Function UWorksCore.UWorksInterfaceCoreMatchmaking.AddRequestLobbyListDistanceFilter
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		UWorksCore_EUWorksLobbyDistanceFilter              LobbyDistanceFilter                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreMatchmaking::AddRequestLobbyListDistanceFilter(UWorksCore_EUWorksLobbyDistanceFilter LobbyDistanceFilter)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.AddRequestLobbyListDistanceFilter");

	UUWorksInterfaceCoreMatchmaking_AddRequestLobbyListDistanceFilter_Params params {};
	params.LobbyDistanceFilter = LobbyDistanceFilter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002B0DC0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreMatchmaking.AddRequestLobbyListCompatibleMembersFilter
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamIDLobby                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreMatchmaking::AddRequestLobbyListCompatibleMembersFilter(const struct FUWorksSteamID& SteamIDLobby)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.AddRequestLobbyListCompatibleMembersFilter");

	UUWorksInterfaceCoreMatchmaking_AddRequestLobbyListCompatibleMembersFilter_Params params {};
	params.SteamIDLobby = SteamIDLobby;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002B0B60
//		Name   -> Function UWorksCore.UWorksInterfaceCoreMatchmaking.AddFavoriteGame
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     IP                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ConnectionPort                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                QueryPort                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<UWorksCore_EUWorksFavoriteFlags>            Flags                                                      (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
//		int                                                TimeLastPlayedOnServer                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreMatchmaking::AddFavoriteGame(int AppID, const struct FString& IP, int ConnectionPort, int QueryPort, TArray<UWorksCore_EUWorksFavoriteFlags> Flags, int TimeLastPlayedOnServer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.AddFavoriteGame");

	UUWorksInterfaceCoreMatchmaking_AddFavoriteGame_Params params {};
	params.AppID = AppID;
	params.IP = IP;
	params.ConnectionPort = ConnectionPort;
	params.QueryPort = QueryPort;
	params.Flags = Flags;
	params.TimeLastPlayedOnServer = TimeLastPlayedOnServer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B3ED0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreMatchmakingServers.ServerListMinimal
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FScriptDelegate                             Completed                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FScriptDelegate                             Updated                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		int                                                AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		UWorksCore_EUWorksServerQueryType                  QueryType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreMatchmakingServers::ServerListMinimal(const struct FScriptDelegate& Completed, const struct FScriptDelegate& Updated, int AppID, UWorksCore_EUWorksServerQueryType QueryType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmakingServers.ServerListMinimal");

	UUWorksInterfaceCoreMatchmakingServers_ServerListMinimal_Params params {};
	params.Completed = Completed;
	params.Updated = Updated;
	params.AppID = AppID;
	params.QueryType = QueryType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002B3EA0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreMatchmakingServers.ServerList
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UUWorksRequestCoreServerList*                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestCoreServerList* UUWorksInterfaceCoreMatchmakingServers::ServerList()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmakingServers.ServerList");

	UUWorksInterfaceCoreMatchmakingServers_ServerList_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B3CA0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreMatchmakingServers.RulesMinimal
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FScriptDelegate                             Completed                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FScriptDelegate                             Updated                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FString                                     IP                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Port                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreMatchmakingServers::RulesMinimal(const struct FScriptDelegate& Completed, const struct FScriptDelegate& Updated, const struct FString& IP, int Port)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmakingServers.RulesMinimal");

	UUWorksInterfaceCoreMatchmakingServers_RulesMinimal_Params params {};
	params.Completed = Completed;
	params.Updated = Updated;
	params.IP = IP;
	params.Port = Port;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002B3C70
//		Name   -> Function UWorksCore.UWorksInterfaceCoreMatchmakingServers.Rules
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UUWorksRequestCoreRules*                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestCoreRules* UUWorksInterfaceCoreMatchmakingServers::Rules()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmakingServers.Rules");

	UUWorksInterfaceCoreMatchmakingServers_Rules_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B3A70
//		Name   -> Function UWorksCore.UWorksInterfaceCoreMatchmakingServers.PlayersMinimal
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FScriptDelegate                             Completed                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FScriptDelegate                             Updated                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FString                                     IP                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Port                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreMatchmakingServers::PlayersMinimal(const struct FScriptDelegate& Completed, const struct FScriptDelegate& Updated, const struct FString& IP, int Port)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmakingServers.PlayersMinimal");

	UUWorksInterfaceCoreMatchmakingServers_PlayersMinimal_Params params {};
	params.Completed = Completed;
	params.Updated = Updated;
	params.IP = IP;
	params.Port = Port;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002B3A40
//		Name   -> Function UWorksCore.UWorksInterfaceCoreMatchmakingServers.Players
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UUWorksRequestCorePlayers*                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestCorePlayers* UUWorksInterfaceCoreMatchmakingServers::Players()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmakingServers.Players");

	UUWorksInterfaceCoreMatchmakingServers_Players_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B38B0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreMatchmakingServers.PingMinimal
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FScriptDelegate                             Completed                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FString                                     IP                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Port                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreMatchmakingServers::PingMinimal(const struct FScriptDelegate& Completed, const struct FString& IP, int Port)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmakingServers.PingMinimal");

	UUWorksInterfaceCoreMatchmakingServers_PingMinimal_Params params {};
	params.Completed = Completed;
	params.IP = IP;
	params.Port = Port;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002B3880
//		Name   -> Function UWorksCore.UWorksInterfaceCoreMatchmakingServers.Ping
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UUWorksRequestCorePing*                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestCorePing* UUWorksInterfaceCoreMatchmakingServers::Ping()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmakingServers.Ping");

	UUWorksInterfaceCoreMatchmakingServers_Ping_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B3850
//		Name   -> Function UWorksCore.UWorksInterfaceCoreMatchmakingServers.GetMatchmakingServers
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UUWorksInterfaceCoreMatchmakingServers*      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksInterfaceCoreMatchmakingServers* UUWorksInterfaceCoreMatchmakingServers::STATIC_GetMatchmakingServers()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmakingServers.GetMatchmakingServers");

	UUWorksInterfaceCoreMatchmakingServers_GetMatchmakingServers_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B44F0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreMusic.SetVolume
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              Volume                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreMusic::SetVolume(float Volume)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMusic.SetVolume");

	UUWorksInterfaceCoreMusic_SetVolume_Params params {};
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002B44D0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreMusic.PlayPrevious
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UUWorksInterfaceCoreMusic::PlayPrevious()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMusic.PlayPrevious");

	UUWorksInterfaceCoreMusic_PlayPrevious_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002B44B0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreMusic.PlayNext
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UUWorksInterfaceCoreMusic::PlayNext()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMusic.PlayNext");

	UUWorksInterfaceCoreMusic_PlayNext_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002B4490
//		Name   -> Function UWorksCore.UWorksInterfaceCoreMusic.Play
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UUWorksInterfaceCoreMusic::Play()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMusic.Play");

	UUWorksInterfaceCoreMusic_Play_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002B4470
//		Name   -> Function UWorksCore.UWorksInterfaceCoreMusic.Pause
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UUWorksInterfaceCoreMusic::Pause()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMusic.Pause");

	UUWorksInterfaceCoreMusic_Pause_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002B4440
//		Name   -> Function UWorksCore.UWorksInterfaceCoreMusic.GetVolume
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UUWorksInterfaceCoreMusic::GetVolume()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMusic.GetVolume");

	UUWorksInterfaceCoreMusic_GetVolume_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B4410
//		Name   -> Function UWorksCore.UWorksInterfaceCoreMusic.GetPlaybackStatus
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		UWorksCore_EUWorksAudioPlaybackStatus              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UWorksCore_EUWorksAudioPlaybackStatus UUWorksInterfaceCoreMusic::GetPlaybackStatus()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMusic.GetPlaybackStatus");

	UUWorksInterfaceCoreMusic_GetPlaybackStatus_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B43E0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreMusic.GetMusic
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UUWorksInterfaceCoreMusic*                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksInterfaceCoreMusic* UUWorksInterfaceCoreMusic::STATIC_GetMusic()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMusic.GetMusic");

	UUWorksInterfaceCoreMusic_GetMusic_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B43B0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreMusic.BIsPlaying
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreMusic::BIsPlaying()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMusic.BIsPlaying");

	UUWorksInterfaceCoreMusic_BIsPlaying_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B4380
//		Name   -> Function UWorksCore.UWorksInterfaceCoreMusic.BIsEnabled
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreMusic::BIsEnabled()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMusic.BIsEnabled");

	UUWorksInterfaceCoreMusic_BIsEnabled_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B51F0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreNetworking.SendP2PPacket
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamIDRemote                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		TArray<unsigned char>                              Data                                                       (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
//		UWorksCore_EUWorksP2PSend                          P2PSendType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Channel                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreNetworking::SendP2PPacket(const struct FUWorksSteamID& SteamIDRemote, TArray<unsigned char> Data, UWorksCore_EUWorksP2PSend P2PSendType, int Channel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreNetworking.SendP2PPacket");

	UUWorksInterfaceCoreNetworking_SendP2PPacket_Params params {};
	params.SteamIDRemote = SteamIDRemote;
	params.Data = Data;
	params.P2PSendType = P2PSendType;
	params.Channel = Channel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B5060
//		Name   -> Function UWorksCore.UWorksInterfaceCoreNetworking.SendP2PMessage
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamIDRemote                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FString                                     Data                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		UWorksCore_EUWorksP2PSend                          P2PSendType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Channel                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreNetworking::SendP2PMessage(const struct FUWorksSteamID& SteamIDRemote, const struct FString& Data, UWorksCore_EUWorksP2PSend P2PSendType, int Channel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreNetworking.SendP2PMessage");

	UUWorksInterfaceCoreNetworking_SendP2PMessage_Params params {};
	params.SteamIDRemote = SteamIDRemote;
	params.Data = Data;
	params.P2PSendType = P2PSendType;
	params.Channel = Channel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B4EC0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreNetworking.ReadP2PPacket
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<unsigned char>                              Data                                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
//		int                                                DataMax                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUWorksSteamID                              SteamIDRemote                                              (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
//		int                                                Channel                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreNetworking::ReadP2PPacket(TArray<unsigned char>* Data, int DataMax, struct FUWorksSteamID* SteamIDRemote, int Channel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreNetworking.ReadP2PPacket");

	UUWorksInterfaceCoreNetworking_ReadP2PPacket_Params params {};
	params.DataMax = DataMax;
	params.Channel = Channel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;
	if (SteamIDRemote != nullptr)
		*SteamIDRemote = params.SteamIDRemote;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B4D20
//		Name   -> Function UWorksCore.UWorksInterfaceCoreNetworking.ReadP2PMessage
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FString                                     Data                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                DataMax                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUWorksSteamID                              SteamIDRemote                                              (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
//		int                                                Channel                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreNetworking::ReadP2PMessage(struct FString* Data, int DataMax, struct FUWorksSteamID* SteamIDRemote, int Channel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreNetworking.ReadP2PMessage");

	UUWorksInterfaceCoreNetworking_ReadP2PMessage_Params params {};
	params.DataMax = DataMax;
	params.Channel = Channel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;
	if (SteamIDRemote != nullptr)
		*SteamIDRemote = params.SteamIDRemote;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B4C40
//		Name   -> Function UWorksCore.UWorksInterfaceCoreNetworking.IsP2PPacketAvailable
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		int                                                DataSize                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Channel                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreNetworking::IsP2PPacketAvailable(int* DataSize, int Channel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreNetworking.IsP2PPacketAvailable");

	UUWorksInterfaceCoreNetworking_IsP2PPacketAvailable_Params params {};
	params.Channel = Channel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DataSize != nullptr)
		*DataSize = params.DataSize;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B4B50
//		Name   -> Function UWorksCore.UWorksInterfaceCoreNetworking.GetP2PSessionState
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamIDRemote                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FUWorksP2PSessionState                      ConnectionState                                            (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreNetworking::GetP2PSessionState(const struct FUWorksSteamID& SteamIDRemote, struct FUWorksP2PSessionState* ConnectionState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreNetworking.GetP2PSessionState");

	UUWorksInterfaceCoreNetworking_GetP2PSessionState_Params params {};
	params.SteamIDRemote = SteamIDRemote;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ConnectionState != nullptr)
		*ConnectionState = params.ConnectionState;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B4B20
//		Name   -> Function UWorksCore.UWorksInterfaceCoreNetworking.GetNetworking
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UUWorksInterfaceCoreNetworking*              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksInterfaceCoreNetworking* UUWorksInterfaceCoreNetworking::STATIC_GetNetworking()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreNetworking.GetNetworking");

	UUWorksInterfaceCoreNetworking_GetNetworking_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B4A90
//		Name   -> Function UWorksCore.UWorksInterfaceCoreNetworking.CloseP2PSessionWithUser
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamIDRemote                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreNetworking::CloseP2PSessionWithUser(const struct FUWorksSteamID& SteamIDRemote)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreNetworking.CloseP2PSessionWithUser");

	UUWorksInterfaceCoreNetworking_CloseP2PSessionWithUser_Params params {};
	params.SteamIDRemote = SteamIDRemote;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B49D0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreNetworking.CloseP2PChannelWithUser
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamIDRemote                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		int                                                Channel                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreNetworking::CloseP2PChannelWithUser(const struct FUWorksSteamID& SteamIDRemote, int Channel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreNetworking.CloseP2PChannelWithUser");

	UUWorksInterfaceCoreNetworking_CloseP2PChannelWithUser_Params params {};
	params.SteamIDRemote = SteamIDRemote;
	params.Channel = Channel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B4940
//		Name   -> Function UWorksCore.UWorksInterfaceCoreNetworking.AllowP2PPacketRelay
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bAllow                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreNetworking::AllowP2PPacketRelay(bool bAllow)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreNetworking.AllowP2PPacketRelay");

	UUWorksInterfaceCoreNetworking_AllowP2PPacketRelay_Params params {};
	params.bAllow = bAllow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B48B0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreNetworking.AcceptP2PSessionWithUser
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamIDRemote                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreNetworking::AcceptP2PSessionWithUser(const struct FUWorksSteamID& SteamIDRemote)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreNetworking.AcceptP2PSessionWithUser");

	UUWorksInterfaceCoreNetworking_AcceptP2PSessionWithUser_Params params {};
	params.SteamIDRemote = SteamIDRemote;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B6D90
//		Name   -> Function UWorksCore.UWorksInterfaceCoreRemoteStorage.SetSyncPlatforms
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		UWorksCore_EUWorksRemoteStoragePlatform            RemoteStoragePlatform                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreRemoteStorage::SetSyncPlatforms(const struct FString& File, UWorksCore_EUWorksRemoteStoragePlatform RemoteStoragePlatform)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreRemoteStorage.SetSyncPlatforms");

	UUWorksInterfaceCoreRemoteStorage_SetSyncPlatforms_Params params {};
	params.File = File;
	params.RemoteStoragePlatform = RemoteStoragePlatform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B6D00
//		Name   -> Function UWorksCore.UWorksInterfaceCoreRemoteStorage.SetCloudEnabledForApp
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bEnabled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreRemoteStorage::SetCloudEnabledForApp(bool bEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreRemoteStorage.SetCloudEnabledForApp");

	UUWorksInterfaceCoreRemoteStorage_SetCloudEnabledForApp_Params params {};
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002B6CD0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreRemoteStorage.IsCloudEnabledForApp
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreRemoteStorage::IsCloudEnabledForApp()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreRemoteStorage.IsCloudEnabledForApp");

	UUWorksInterfaceCoreRemoteStorage_IsCloudEnabledForApp_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B6CA0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreRemoteStorage.IsCloudEnabledForAccount
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreRemoteStorage::IsCloudEnabledForAccount()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreRemoteStorage.IsCloudEnabledForAccount");

	UUWorksInterfaceCoreRemoteStorage_IsCloudEnabledForAccount_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B6BB0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreRemoteStorage.GetSyncPlatforms
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		UWorksCore_EUWorksRemoteStoragePlatform            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UWorksCore_EUWorksRemoteStoragePlatform UUWorksInterfaceCoreRemoteStorage::GetSyncPlatforms(const struct FString& File)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreRemoteStorage.GetSyncPlatforms");

	UUWorksInterfaceCoreRemoteStorage_GetSyncPlatforms_Params params {};
	params.File = File;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B6B80
//		Name   -> Function UWorksCore.UWorksInterfaceCoreRemoteStorage.GetRemoteStorage
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UUWorksInterfaceCoreRemoteStorage*           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksInterfaceCoreRemoteStorage* UUWorksInterfaceCoreRemoteStorage::STATIC_GetRemoteStorage()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreRemoteStorage.GetRemoteStorage");

	UUWorksInterfaceCoreRemoteStorage_GetRemoteStorage_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B6A60
//		Name   -> Function UWorksCore.UWorksInterfaceCoreRemoteStorage.GetQuota
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FString                                     TotalBytes                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     AvailableBytes                                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreRemoteStorage::GetQuota(struct FString* TotalBytes, struct FString* AvailableBytes)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreRemoteStorage.GetQuota");

	UUWorksInterfaceCoreRemoteStorage_GetQuota_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TotalBytes != nullptr)
		*TotalBytes = params.TotalBytes;
	if (AvailableBytes != nullptr)
		*AvailableBytes = params.AvailableBytes;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B6970
//		Name   -> Function UWorksCore.UWorksInterfaceCoreRemoteStorage.GetFileTimestamp
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreRemoteStorage::GetFileTimestamp(const struct FString& File)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreRemoteStorage.GetFileTimestamp");

	UUWorksInterfaceCoreRemoteStorage_GetFileTimestamp_Params params {};
	params.File = File;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B6880
//		Name   -> Function UWorksCore.UWorksInterfaceCoreRemoteStorage.GetFileSize
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreRemoteStorage::GetFileSize(const struct FString& File)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreRemoteStorage.GetFileSize");

	UUWorksInterfaceCoreRemoteStorage_GetFileSize_Params params {};
	params.File = File;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B6770
//		Name   -> Function UWorksCore.UWorksInterfaceCoreRemoteStorage.GetFileNameAndSize
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		int                                                File                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                FileSizeInBytes                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UUWorksInterfaceCoreRemoteStorage::GetFileNameAndSize(int File, int* FileSizeInBytes)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreRemoteStorage.GetFileNameAndSize");

	UUWorksInterfaceCoreRemoteStorage_GetFileNameAndSize_Params params {};
	params.File = File;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FileSizeInBytes != nullptr)
		*FileSizeInBytes = params.FileSizeInBytes;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B6740
//		Name   -> Function UWorksCore.UWorksInterfaceCoreRemoteStorage.GetFileCount
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreRemoteStorage::GetFileCount()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreRemoteStorage.GetFileCount");

	UUWorksInterfaceCoreRemoteStorage_GetFileCount_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B6610
//		Name   -> Function UWorksCore.UWorksInterfaceCoreRemoteStorage.FileWriteStreamWriteChunk
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksUGCFileWriteStreamHandle             Handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		TArray<unsigned char>                              Buffer                                                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreRemoteStorage::FileWriteStreamWriteChunk(const struct FUWorksUGCFileWriteStreamHandle& Handle, TArray<unsigned char> Buffer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreRemoteStorage.FileWriteStreamWriteChunk");

	UUWorksInterfaceCoreRemoteStorage_FileWriteStreamWriteChunk_Params params {};
	params.Handle = Handle;
	params.Buffer = Buffer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B6520
//		Name   -> Function UWorksCore.UWorksInterfaceCoreRemoteStorage.FileWriteStreamOpen
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUWorksUGCFileWriteStreamHandle             ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FUWorksUGCFileWriteStreamHandle UUWorksInterfaceCoreRemoteStorage::FileWriteStreamOpen(const struct FString& File)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreRemoteStorage.FileWriteStreamOpen");

	UUWorksInterfaceCoreRemoteStorage_FileWriteStreamOpen_Params params {};
	params.File = File;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B6490
//		Name   -> Function UWorksCore.UWorksInterfaceCoreRemoteStorage.FileWriteStreamClose
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksUGCFileWriteStreamHandle             Handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreRemoteStorage::FileWriteStreamClose(const struct FUWorksUGCFileWriteStreamHandle& Handle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreRemoteStorage.FileWriteStreamClose");

	UUWorksInterfaceCoreRemoteStorage_FileWriteStreamClose_Params params {};
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B6400
//		Name   -> Function UWorksCore.UWorksInterfaceCoreRemoteStorage.FileWriteStreamCancel
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksUGCFileWriteStreamHandle             Handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreRemoteStorage::FileWriteStreamCancel(const struct FUWorksUGCFileWriteStreamHandle& Handle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreRemoteStorage.FileWriteStreamCancel");

	UUWorksInterfaceCoreRemoteStorage_FileWriteStreamCancel_Params params {};
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B6220
//		Name   -> Function UWorksCore.UWorksInterfaceCoreRemoteStorage.FileWriteAsyncMinimal
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FScriptDelegate                             Completed                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FString                                     File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<unsigned char>                              Buffer                                                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreRemoteStorage::FileWriteAsyncMinimal(const struct FScriptDelegate& Completed, const struct FString& File, TArray<unsigned char> Buffer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreRemoteStorage.FileWriteAsyncMinimal");

	UUWorksInterfaceCoreRemoteStorage_FileWriteAsyncMinimal_Params params {};
	params.Completed = Completed;
	params.File = File;
	params.Buffer = Buffer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002B61F0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreRemoteStorage.FileWriteAsync
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UUWorksRequestCoreFileWriteAsync*            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestCoreFileWriteAsync* UUWorksInterfaceCoreRemoteStorage::FileWriteAsync()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreRemoteStorage.FileWriteAsync");

	UUWorksInterfaceCoreRemoteStorage_FileWriteAsync_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B6080
//		Name   -> Function UWorksCore.UWorksInterfaceCoreRemoteStorage.FileWrite
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<unsigned char>                              Buffer                                                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreRemoteStorage::FileWrite(const struct FString& File, TArray<unsigned char> Buffer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreRemoteStorage.FileWrite");

	UUWorksInterfaceCoreRemoteStorage_FileWrite_Params params {};
	params.File = File;
	params.Buffer = Buffer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B5EC0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreRemoteStorage.FileReadAsyncMinimal
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FScriptDelegate                             Completed                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FString                                     File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Offset                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                BytesToRead                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreRemoteStorage::FileReadAsyncMinimal(const struct FScriptDelegate& Completed, const struct FString& File, int Offset, int BytesToRead)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreRemoteStorage.FileReadAsyncMinimal");

	UUWorksInterfaceCoreRemoteStorage_FileReadAsyncMinimal_Params params {};
	params.Completed = Completed;
	params.File = File;
	params.Offset = Offset;
	params.BytesToRead = BytesToRead;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002B5E90
//		Name   -> Function UWorksCore.UWorksInterfaceCoreRemoteStorage.FileReadAsync
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UUWorksRequestCoreFileReadAsync*             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestCoreFileReadAsync* UUWorksInterfaceCoreRemoteStorage::FileReadAsync()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreRemoteStorage.FileReadAsync");

	UUWorksInterfaceCoreRemoteStorage_FileReadAsync_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B5D10
//		Name   -> Function UWorksCore.UWorksInterfaceCoreRemoteStorage.FileRead
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FString                                     File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<unsigned char>                              Buffer                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
//		int                                                BufferSize                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreRemoteStorage::FileRead(const struct FString& File, TArray<unsigned char>* Buffer, int BufferSize)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreRemoteStorage.FileRead");

	UUWorksInterfaceCoreRemoteStorage_FileRead_Params params {};
	params.File = File;
	params.BufferSize = BufferSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Buffer != nullptr)
		*Buffer = params.Buffer;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B5C20
//		Name   -> Function UWorksCore.UWorksInterfaceCoreRemoteStorage.FilePersisted
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreRemoteStorage::FilePersisted(const struct FString& File)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreRemoteStorage.FilePersisted");

	UUWorksInterfaceCoreRemoteStorage_FilePersisted_Params params {};
	params.File = File;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B5B30
//		Name   -> Function UWorksCore.UWorksInterfaceCoreRemoteStorage.FileForget
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreRemoteStorage::FileForget(const struct FString& File)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreRemoteStorage.FileForget");

	UUWorksInterfaceCoreRemoteStorage_FileForget_Params params {};
	params.File = File;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B5A40
//		Name   -> Function UWorksCore.UWorksInterfaceCoreRemoteStorage.FileExists
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreRemoteStorage::FileExists(const struct FString& File)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreRemoteStorage.FileExists");

	UUWorksInterfaceCoreRemoteStorage_FileExists_Params params {};
	params.File = File;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B5950
//		Name   -> Function UWorksCore.UWorksInterfaceCoreRemoteStorage.FileDelete
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreRemoteStorage::FileDelete(const struct FString& File)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreRemoteStorage.FileDelete");

	UUWorksInterfaceCoreRemoteStorage_FileDelete_Params params {};
	params.File = File;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B7940
//		Name   -> Function UWorksCore.UWorksInterfaceCoreScreenshots.WriteScreenshot
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UTexture2D*                                  Image                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUWorksScreenshotHandle                     ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FUWorksScreenshotHandle UUWorksInterfaceCoreScreenshots::WriteScreenshot(class UTexture2D* Image)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreScreenshots.WriteScreenshot");

	UUWorksInterfaceCoreScreenshots_WriteScreenshot_Params params {};
	params.Image = Image;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B7920
//		Name   -> Function UWorksCore.UWorksInterfaceCoreScreenshots.TriggerScreenshot
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UUWorksInterfaceCoreScreenshots::TriggerScreenshot()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreScreenshots.TriggerScreenshot");

	UUWorksInterfaceCoreScreenshots_TriggerScreenshot_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002B7850
//		Name   -> Function UWorksCore.UWorksInterfaceCoreScreenshots.TagUser
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksScreenshotHandle                     Screenshot                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FUWorksSteamID                              SteamID                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreScreenshots::TagUser(const struct FUWorksScreenshotHandle& Screenshot, const struct FUWorksSteamID& SteamID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreScreenshots.TagUser");

	UUWorksInterfaceCoreScreenshots_TagUser_Params params {};
	params.Screenshot = Screenshot;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B7780
//		Name   -> Function UWorksCore.UWorksInterfaceCoreScreenshots.TagPublishedFile
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksScreenshotHandle                     Screenshot                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FUWorksPublishedFileID                      PublishedFileID                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreScreenshots::TagPublishedFile(const struct FUWorksScreenshotHandle& Screenshot, const struct FUWorksPublishedFileID& PublishedFileID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreScreenshots.TagPublishedFile");

	UUWorksInterfaceCoreScreenshots_TagPublishedFile_Params params {};
	params.Screenshot = Screenshot;
	params.PublishedFileID = PublishedFileID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B7650
//		Name   -> Function UWorksCore.UWorksInterfaceCoreScreenshots.SetLocation
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksScreenshotHandle                     Screenshot                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FString                                     Location                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreScreenshots::SetLocation(const struct FUWorksScreenshotHandle& Screenshot, const struct FString& Location)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreScreenshots.SetLocation");

	UUWorksInterfaceCoreScreenshots_SetLocation_Params params {};
	params.Screenshot = Screenshot;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B7620
//		Name   -> Function UWorksCore.UWorksInterfaceCoreScreenshots.IsScreenshotsHooked
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreScreenshots::IsScreenshotsHooked()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreScreenshots.IsScreenshotsHooked");

	UUWorksInterfaceCoreScreenshots_IsScreenshotsHooked_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B7590
//		Name   -> Function UWorksCore.UWorksInterfaceCoreScreenshots.HookScreenshots
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bHook                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreScreenshots::HookScreenshots(bool bHook)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreScreenshots.HookScreenshots");

	UUWorksInterfaceCoreScreenshots_HookScreenshots_Params params {};
	params.bHook = bHook;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002B7560
//		Name   -> Function UWorksCore.UWorksInterfaceCoreScreenshots.GetScreenshots
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UUWorksInterfaceCoreScreenshots*             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksInterfaceCoreScreenshots* UUWorksInterfaceCoreScreenshots::STATIC_GetScreenshots()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreScreenshots.GetScreenshots");

	UUWorksInterfaceCoreScreenshots_GetScreenshots_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B73B0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreScreenshots.AddVRScreenshotToLibrary
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		UWorksCore_EUWorksVRScreenshotType                 Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Filename                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     VRFileName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUWorksScreenshotHandle                     ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FUWorksScreenshotHandle UUWorksInterfaceCoreScreenshots::AddVRScreenshotToLibrary(UWorksCore_EUWorksVRScreenshotType Type, const struct FString& Filename, const struct FString& VRFileName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreScreenshots.AddVRScreenshotToLibrary");

	UUWorksInterfaceCoreScreenshots_AddVRScreenshotToLibrary_Params params {};
	params.Type = Type;
	params.Filename = Filename;
	params.VRFileName = VRFileName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B71D0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreScreenshots.AddScreenshotToLibrary
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     FileMame                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ThumbnailFileName                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Width                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Height                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUWorksScreenshotHandle                     ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FUWorksScreenshotHandle UUWorksInterfaceCoreScreenshots::AddScreenshotToLibrary(const struct FString& FileMame, const struct FString& ThumbnailFileName, int Width, int Height)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreScreenshots.AddScreenshotToLibrary");

	UUWorksInterfaceCoreScreenshots_AddScreenshotToLibrary_Params params {};
	params.FileMame = FileMame;
	params.ThumbnailFileName = ThumbnailFileName;
	params.Width = Width;
	params.Height = Height;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002BD850
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.UpdateItemPreviewVideo
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksUGCUpdateHandle                      Handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		int                                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     PreviewVideo                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUGC::UpdateItemPreviewVideo(const struct FUWorksUGCUpdateHandle& Handle, int Index, const struct FString& PreviewVideo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.UpdateItemPreviewVideo");

	UUWorksInterfaceCoreUGC_UpdateItemPreviewVideo_Params params {};
	params.Handle = Handle;
	params.Index = Index;
	params.PreviewVideo = PreviewVideo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002BD6E0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.UpdateItemPreviewFile
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksUGCUpdateHandle                      Handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		int                                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     PreviewFile                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUGC::UpdateItemPreviewFile(const struct FUWorksUGCUpdateHandle& Handle, int Index, const struct FString& PreviewFile)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.UpdateItemPreviewFile");

	UUWorksInterfaceCoreUGC_UpdateItemPreviewFile_Params params {};
	params.Handle = Handle;
	params.Index = Index;
	params.PreviewFile = PreviewFile;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002BD5E0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.UnsubscribeItemMinimal
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FScriptDelegate                             Completed                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FUWorksPublishedFileID                      PublishedFileID                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreUGC::UnsubscribeItemMinimal(const struct FScriptDelegate& Completed, const struct FUWorksPublishedFileID& PublishedFileID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.UnsubscribeItemMinimal");

	UUWorksInterfaceCoreUGC_UnsubscribeItemMinimal_Params params {};
	params.Completed = Completed;
	params.PublishedFileID = PublishedFileID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002BD5B0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.UnsubscribeItem
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UUWorksRequestCoreUnsubscribeItem*           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestCoreUnsubscribeItem* UUWorksInterfaceCoreUGC::UnsubscribeItem()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.UnsubscribeItem");

	UUWorksInterfaceCoreUGC_UnsubscribeItem_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002BD520
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.SuspendDownloads
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bSuspend                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreUGC::SuspendDownloads(bool bSuspend)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.SuspendDownloads");

	UUWorksInterfaceCoreUGC_SuspendDownloads_Params params {};
	params.bSuspend = bSuspend;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002BD420
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.SubscribeItemMinimal
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FScriptDelegate                             Completed                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FUWorksPublishedFileID                      PublishedFileID                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreUGC::SubscribeItemMinimal(const struct FScriptDelegate& Completed, const struct FUWorksPublishedFileID& PublishedFileID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.SubscribeItemMinimal");

	UUWorksInterfaceCoreUGC_SubscribeItemMinimal_Params params {};
	params.Completed = Completed;
	params.PublishedFileID = PublishedFileID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002BD3F0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.SubscribeItem
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UUWorksRequestCoreSubscribeItem*             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestCoreSubscribeItem* UUWorksInterfaceCoreUGC::SubscribeItem()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.SubscribeItem");

	UUWorksInterfaceCoreUGC_SubscribeItem_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002BD260
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.SubmitItemUpdateMinimal
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FScriptDelegate                             Completed                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FUWorksUGCUpdateHandle                      UGCUpdateHandle                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FString                                     ChangeNote                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreUGC::SubmitItemUpdateMinimal(const struct FScriptDelegate& Completed, const struct FUWorksUGCUpdateHandle& UGCUpdateHandle, const struct FString& ChangeNote)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.SubmitItemUpdateMinimal");

	UUWorksInterfaceCoreUGC_SubmitItemUpdateMinimal_Params params {};
	params.Completed = Completed;
	params.UGCUpdateHandle = UGCUpdateHandle;
	params.ChangeNote = ChangeNote;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002BD230
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.SubmitItemUpdate
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UUWorksRequestCoreSubmitItemUpdate*          ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestCoreSubmitItemUpdate* UUWorksInterfaceCoreUGC::SubmitItemUpdate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.SubmitItemUpdate");

	UUWorksInterfaceCoreUGC_SubmitItemUpdate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002BD0E0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.StopPlaytimeTrackingMinimal
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FScriptDelegate                             Completed                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		TArray<struct FUWorksPublishedFileID>              PublishedFileIDs                                           (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreUGC::StopPlaytimeTrackingMinimal(const struct FScriptDelegate& Completed, TArray<struct FUWorksPublishedFileID> PublishedFileIDs)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.StopPlaytimeTrackingMinimal");

	UUWorksInterfaceCoreUGC_StopPlaytimeTrackingMinimal_Params params {};
	params.Completed = Completed;
	params.PublishedFileIDs = PublishedFileIDs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002BD020
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.StopPlaytimeTrackingForAllItemsMinimal
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FScriptDelegate                             Completed                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreUGC::StopPlaytimeTrackingForAllItemsMinimal(const struct FScriptDelegate& Completed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.StopPlaytimeTrackingForAllItemsMinimal");

	UUWorksInterfaceCoreUGC_StopPlaytimeTrackingForAllItemsMinimal_Params params {};
	params.Completed = Completed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002BCFF0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.StopPlaytimeTrackingForAllItems
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UUWorksRequestCoreStopPlaytimeTrackingForAllItems* ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestCoreStopPlaytimeTrackingForAllItems* UUWorksInterfaceCoreUGC::StopPlaytimeTrackingForAllItems()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.StopPlaytimeTrackingForAllItems");

	UUWorksInterfaceCoreUGC_StopPlaytimeTrackingForAllItems_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002BCFC0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.StopPlaytimeTracking
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UUWorksRequestCoreStopPlaytimeTracking*      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestCoreStopPlaytimeTracking* UUWorksInterfaceCoreUGC::StopPlaytimeTracking()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.StopPlaytimeTracking");

	UUWorksInterfaceCoreUGC_StopPlaytimeTracking_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002BCE70
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.StartPlaytimeTrackingMinimal
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FScriptDelegate                             Completed                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		TArray<struct FUWorksPublishedFileID>              PublishedFileID                                            (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreUGC::StartPlaytimeTrackingMinimal(const struct FScriptDelegate& Completed, TArray<struct FUWorksPublishedFileID> PublishedFileID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.StartPlaytimeTrackingMinimal");

	UUWorksInterfaceCoreUGC_StartPlaytimeTrackingMinimal_Params params {};
	params.Completed = Completed;
	params.PublishedFileID = PublishedFileID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002BCE40
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.StartPlaytimeTracking
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UUWorksRequestCoreStartPlaytimeTracking*     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestCoreStartPlaytimeTracking* UUWorksInterfaceCoreUGC::StartPlaytimeTracking()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.StartPlaytimeTracking");

	UUWorksInterfaceCoreUGC_StartPlaytimeTracking_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002BCD70
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.StartItemUpdate
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                ConsumerAppID                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUWorksPublishedFileID                      PublishedFileID                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FUWorksUGCUpdateHandle                      ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FUWorksUGCUpdateHandle UUWorksInterfaceCoreUGC::StartItemUpdate(int ConsumerAppID, const struct FUWorksPublishedFileID& PublishedFileID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.StartItemUpdate");

	UUWorksInterfaceCoreUGC_StartItemUpdate_Params params {};
	params.ConsumerAppID = ConsumerAppID;
	params.PublishedFileID = PublishedFileID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002BCC30
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.SetUserItemVoteMinimal
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FScriptDelegate                             Completed                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FUWorksPublishedFileID                      PublishedFileID                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               bVoteUp                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreUGC::SetUserItemVoteMinimal(const struct FScriptDelegate& Completed, const struct FUWorksPublishedFileID& PublishedFileID, bool bVoteUp)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.SetUserItemVoteMinimal");

	UUWorksInterfaceCoreUGC_SetUserItemVoteMinimal_Params params {};
	params.Completed = Completed;
	params.PublishedFileID = PublishedFileID;
	params.bVoteUp = bVoteUp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002BCC00
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.SetUserItemVote
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UUWorksRequestCoreSetUserItemVote*           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestCoreSetUserItemVote* UUWorksInterfaceCoreUGC::SetUserItemVote()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.SetUserItemVote");

	UUWorksInterfaceCoreUGC_SetUserItemVote_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002BCAD0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.SetSearchText
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksUGCQueryHandle                       Handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FString                                     SearchText                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUGC::SetSearchText(const struct FUWorksUGCQueryHandle& Handle, const struct FString& SearchText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.SetSearchText");

	UUWorksInterfaceCoreUGC_SetSearchText_Params params {};
	params.Handle = Handle;
	params.SearchText = SearchText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002BCA00
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.SetReturnTotalOnly
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksUGCQueryHandle                       Handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               bReturnTotalOnly                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUGC::SetReturnTotalOnly(const struct FUWorksUGCQueryHandle& Handle, bool bReturnTotalOnly)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.SetReturnTotalOnly");

	UUWorksInterfaceCoreUGC_SetReturnTotalOnly_Params params {};
	params.Handle = Handle;
	params.bReturnTotalOnly = bReturnTotalOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002BC930
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.SetReturnOnlyIDs
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksUGCQueryHandle                       Handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               bReturnOnlyIDs                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUGC::SetReturnOnlyIDs(const struct FUWorksUGCQueryHandle& Handle, bool bReturnOnlyIDs)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.SetReturnOnlyIDs");

	UUWorksInterfaceCoreUGC_SetReturnOnlyIDs_Params params {};
	params.Handle = Handle;
	params.bReturnOnlyIDs = bReturnOnlyIDs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002BC860
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.SetReturnMetadata
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksUGCQueryHandle                       Handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               bReturnMetadata                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUGC::SetReturnMetadata(const struct FUWorksUGCQueryHandle& Handle, bool bReturnMetadata)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.SetReturnMetadata");

	UUWorksInterfaceCoreUGC_SetReturnMetadata_Params params {};
	params.Handle = Handle;
	params.bReturnMetadata = bReturnMetadata;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002BC790
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.SetReturnLongDescription
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksUGCQueryHandle                       Handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               bReturnLongDescription                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUGC::SetReturnLongDescription(const struct FUWorksUGCQueryHandle& Handle, bool bReturnLongDescription)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.SetReturnLongDescription");

	UUWorksInterfaceCoreUGC_SetReturnLongDescription_Params params {};
	params.Handle = Handle;
	params.bReturnLongDescription = bReturnLongDescription;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002BC6C0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.SetReturnKeyValueTags
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksUGCQueryHandle                       Handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               bReturnKeyValueTags                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUGC::SetReturnKeyValueTags(const struct FUWorksUGCQueryHandle& Handle, bool bReturnKeyValueTags)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.SetReturnKeyValueTags");

	UUWorksInterfaceCoreUGC_SetReturnKeyValueTags_Params params {};
	params.Handle = Handle;
	params.bReturnKeyValueTags = bReturnKeyValueTags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002BC5F0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.SetReturnChildren
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksUGCQueryHandle                       Handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               bReturnChildren                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUGC::SetReturnChildren(const struct FUWorksUGCQueryHandle& Handle, bool bReturnChildren)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.SetReturnChildren");

	UUWorksInterfaceCoreUGC_SetReturnChildren_Params params {};
	params.Handle = Handle;
	params.bReturnChildren = bReturnChildren;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002BC520
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.SetReturnAdditionalPreviews
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksUGCQueryHandle                       Handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               bReturnAdditionalPreviews                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUGC::SetReturnAdditionalPreviews(const struct FUWorksUGCQueryHandle& Handle, bool bReturnAdditionalPreviews)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.SetReturnAdditionalPreviews");

	UUWorksInterfaceCoreUGC_SetReturnAdditionalPreviews_Params params {};
	params.Handle = Handle;
	params.bReturnAdditionalPreviews = bReturnAdditionalPreviews;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002BC450
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.SetRankedByTrendDays
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksUGCQueryHandle                       Handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		int                                                Days                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUGC::SetRankedByTrendDays(const struct FUWorksUGCQueryHandle& Handle, int Days)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.SetRankedByTrendDays");

	UUWorksInterfaceCoreUGC_SetRankedByTrendDays_Params params {};
	params.Handle = Handle;
	params.Days = Days;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002BC380
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.SetMatchAnyTag
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksUGCQueryHandle                       Handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               bMatchAnyTag                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUGC::SetMatchAnyTag(const struct FUWorksUGCQueryHandle& Handle, bool bMatchAnyTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.SetMatchAnyTag");

	UUWorksInterfaceCoreUGC_SetMatchAnyTag_Params params {};
	params.Handle = Handle;
	params.bMatchAnyTag = bMatchAnyTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002BC250
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.SetLanguage
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksUGCQueryHandle                       Handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FString                                     Language                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUGC::SetLanguage(const struct FUWorksUGCQueryHandle& Handle, const struct FString& Language)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.SetLanguage");

	UUWorksInterfaceCoreUGC_SetLanguage_Params params {};
	params.Handle = Handle;
	params.Language = Language;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002BC180
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.SetItemVisibility
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksUGCUpdateHandle                      Handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		UWorksCore_EUWorksRemoteStoragePublishedFileVisibility Visibility                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUGC::SetItemVisibility(const struct FUWorksUGCUpdateHandle& Handle, UWorksCore_EUWorksRemoteStoragePublishedFileVisibility Visibility)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.SetItemVisibility");

	UUWorksInterfaceCoreUGC_SetItemVisibility_Params params {};
	params.Handle = Handle;
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002BC050
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.SetItemUpdateLanguage
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksUGCUpdateHandle                      Handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FString                                     Language                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUGC::SetItemUpdateLanguage(const struct FUWorksUGCUpdateHandle& Handle, const struct FString& Language)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.SetItemUpdateLanguage");

	UUWorksInterfaceCoreUGC_SetItemUpdateLanguage_Params params {};
	params.Handle = Handle;
	params.Language = Language;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002BBF20
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.SetItemTitle
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksUGCUpdateHandle                      Handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FString                                     Title                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUGC::SetItemTitle(const struct FUWorksUGCUpdateHandle& Handle, const struct FString& Title)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.SetItemTitle");

	UUWorksInterfaceCoreUGC_SetItemTitle_Params params {};
	params.Handle = Handle;
	params.Title = Title;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002BBD60
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.SetItemTags
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksUGCUpdateHandle                      Handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		TArray<struct FString>                             Tags                                                       (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUGC::SetItemTags(const struct FUWorksUGCUpdateHandle& Handle, TArray<struct FString> Tags)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.SetItemTags");

	UUWorksInterfaceCoreUGC_SetItemTags_Params params {};
	params.Handle = Handle;
	params.Tags = Tags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002BBC30
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.SetItemPreview
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksUGCUpdateHandle                      Handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FString                                     PreviewFile                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUGC::SetItemPreview(const struct FUWorksUGCUpdateHandle& Handle, const struct FString& PreviewFile)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.SetItemPreview");

	UUWorksInterfaceCoreUGC_SetItemPreview_Params params {};
	params.Handle = Handle;
	params.PreviewFile = PreviewFile;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002BBB00
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.SetItemMetadata
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksUGCUpdateHandle                      Handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FString                                     MetaData                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUGC::SetItemMetadata(const struct FUWorksUGCUpdateHandle& Handle, const struct FString& MetaData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.SetItemMetadata");

	UUWorksInterfaceCoreUGC_SetItemMetadata_Params params {};
	params.Handle = Handle;
	params.MetaData = MetaData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002BB9D0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.SetItemDescription
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksUGCUpdateHandle                      Handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FString                                     Description                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUGC::SetItemDescription(const struct FUWorksUGCUpdateHandle& Handle, const struct FString& Description)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.SetItemDescription");

	UUWorksInterfaceCoreUGC_SetItemDescription_Params params {};
	params.Handle = Handle;
	params.Description = Description;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002BB8A0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.SetItemContent
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksUGCUpdateHandle                      Handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FString                                     ContentFolder                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUGC::SetItemContent(const struct FUWorksUGCUpdateHandle& Handle, const struct FString& ContentFolder)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.SetItemContent");

	UUWorksInterfaceCoreUGC_SetItemContent_Params params {};
	params.Handle = Handle;
	params.ContentFolder = ContentFolder;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002BB770
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.SetCloudFileNameFilter
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksUGCQueryHandle                       Handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FString                                     MatchCloudFileName                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUGC::SetCloudFileNameFilter(const struct FUWorksUGCQueryHandle& Handle, const struct FString& MatchCloudFileName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.SetCloudFileNameFilter");

	UUWorksInterfaceCoreUGC_SetCloudFileNameFilter_Params params {};
	params.Handle = Handle;
	params.MatchCloudFileName = MatchCloudFileName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002BB6A0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.SetAllowCachedResponse
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksUGCQueryHandle                       Handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		int                                                MaxAgeSeconds                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUGC::SetAllowCachedResponse(const struct FUWorksUGCQueryHandle& Handle, int MaxAgeSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.SetAllowCachedResponse");

	UUWorksInterfaceCoreUGC_SetAllowCachedResponse_Params params {};
	params.Handle = Handle;
	params.MaxAgeSeconds = MaxAgeSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002BB590
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.SendQueryUGCRequestMinimal
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FScriptDelegate                             Completed                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FUWorksUGCQueryHandle                       UGCQueryHandle                                             (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreUGC::SendQueryUGCRequestMinimal(const struct FScriptDelegate& Completed, const struct FUWorksUGCQueryHandle& UGCQueryHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.SendQueryUGCRequestMinimal");

	UUWorksInterfaceCoreUGC_SendQueryUGCRequestMinimal_Params params {};
	params.Completed = Completed;
	params.UGCQueryHandle = UGCQueryHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002BB560
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.SendQueryUGCRequest
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UUWorksRequestCoreSendQueryUGCRequest*       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestCoreSendQueryUGCRequest* UUWorksInterfaceCoreUGC::SendQueryUGCRequest()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.SendQueryUGCRequest");

	UUWorksInterfaceCoreUGC_SendQueryUGCRequest_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002BB490
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.RemoveItemPreview
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksUGCUpdateHandle                      Handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		int                                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUGC::RemoveItemPreview(const struct FUWorksUGCUpdateHandle& Handle, int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.RemoveItemPreview");

	UUWorksInterfaceCoreUGC_RemoveItemPreview_Params params {};
	params.Handle = Handle;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002BB360
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.RemoveItemKeyValueTags
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksUGCUpdateHandle                      Handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FString                                     Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUGC::RemoveItemKeyValueTags(const struct FUWorksUGCUpdateHandle& Handle, const struct FString& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.RemoveItemKeyValueTags");

	UUWorksInterfaceCoreUGC_RemoveItemKeyValueTags_Params params {};
	params.Handle = Handle;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002BB230
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.RemoveItemFromFavoritesMinimal
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FScriptDelegate                             Completed                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		int                                                AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUWorksPublishedFileID                      PublishedFileID                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreUGC::RemoveItemFromFavoritesMinimal(const struct FScriptDelegate& Completed, int AppID, const struct FUWorksPublishedFileID& PublishedFileID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.RemoveItemFromFavoritesMinimal");

	UUWorksInterfaceCoreUGC_RemoveItemFromFavoritesMinimal_Params params {};
	params.Completed = Completed;
	params.AppID = AppID;
	params.PublishedFileID = PublishedFileID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002BB200
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.RemoveItemFromFavorites
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UUWorksRequestCoreRemoveItemFromFavorites*   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestCoreRemoveItemFromFavorites* UUWorksInterfaceCoreUGC::RemoveItemFromFavorites()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.RemoveItemFromFavorites");

	UUWorksInterfaceCoreUGC_RemoveItemFromFavorites_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002BB170
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.ReleaseQueryUGCRequest
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksUGCQueryHandle                       Handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUGC::ReleaseQueryUGCRequest(const struct FUWorksUGCQueryHandle& Handle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.ReleaseQueryUGCRequest");

	UUWorksInterfaceCoreUGC_ReleaseQueryUGCRequest_Params params {};
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002BB070
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.GetUserItemVoteMinimal
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FScriptDelegate                             Completed                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FUWorksPublishedFileID                      PublishedFileID                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreUGC::GetUserItemVoteMinimal(const struct FScriptDelegate& Completed, const struct FUWorksPublishedFileID& PublishedFileID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.GetUserItemVoteMinimal");

	UUWorksInterfaceCoreUGC_GetUserItemVoteMinimal_Params params {};
	params.Completed = Completed;
	params.PublishedFileID = PublishedFileID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002BB040
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.GetUserItemVote
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UUWorksRequestCoreGetUserItemVote*           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestCoreGetUserItemVote* UUWorksInterfaceCoreUGC::GetUserItemVote()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.GetUserItemVote");

	UUWorksInterfaceCoreUGC_GetUserItemVote_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002BB010
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.GetUGC
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UUWorksInterfaceCoreUGC*                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksInterfaceCoreUGC* UUWorksInterfaceCoreUGC::STATIC_GetUGC()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.GetUGC");

	UUWorksInterfaceCoreUGC_GetUGC_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002BAF20
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.GetSubscribedItems
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<struct FUWorksPublishedFileID>              PublishedFileIDs                                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
//		int                                                MaxEntries                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreUGC::GetSubscribedItems(TArray<struct FUWorksPublishedFileID>* PublishedFileIDs, int MaxEntries)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.GetSubscribedItems");

	UUWorksInterfaceCoreUGC_GetSubscribedItems_Params params {};
	params.MaxEntries = MaxEntries;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PublishedFileIDs != nullptr)
		*PublishedFileIDs = params.PublishedFileIDs;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002BADB0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.GetQueryUGCStatistic
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FUWorksUGCQueryHandle                       Handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		int                                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		UWorksCore_EUWorksItemStatistic                    StatType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     StatValue                                                  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUGC::GetQueryUGCStatistic(const struct FUWorksUGCQueryHandle& Handle, int Index, UWorksCore_EUWorksItemStatistic StatType, struct FString* StatValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.GetQueryUGCStatistic");

	UUWorksInterfaceCoreUGC_GetQueryUGCStatistic_Params params {};
	params.Handle = Handle;
	params.Index = Index;
	params.StatType = StatType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (StatValue != nullptr)
		*StatValue = params.StatValue;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002BAC00
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.GetQueryUGCResult
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FUWorksUGCQueryHandle                       Handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		int                                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUWorksSteamUGCDetails                      Details                                                    (Parm, OutParm, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUGC::GetQueryUGCResult(const struct FUWorksUGCQueryHandle& Handle, int Index, struct FUWorksSteamUGCDetails* Details)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.GetQueryUGCResult");

	UUWorksInterfaceCoreUGC_GetQueryUGCResult_Params params {};
	params.Handle = Handle;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Details != nullptr)
		*Details = params.Details;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002BAA80
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.GetQueryUGCPreviewURL
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FUWorksUGCQueryHandle                       Handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		int                                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     URL                                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                URLMaxLength                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUGC::GetQueryUGCPreviewURL(const struct FUWorksUGCQueryHandle& Handle, int Index, struct FString* URL, int URLMaxLength)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.GetQueryUGCPreviewURL");

	UUWorksInterfaceCoreUGC_GetQueryUGCPreviewURL_Params params {};
	params.Handle = Handle;
	params.Index = Index;
	params.URLMaxLength = URLMaxLength;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (URL != nullptr)
		*URL = params.URL;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002BA9B0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.GetQueryUGCNumKeyValueTags
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksUGCQueryHandle                       Handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		int                                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreUGC::GetQueryUGCNumKeyValueTags(const struct FUWorksUGCQueryHandle& Handle, int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.GetQueryUGCNumKeyValueTags");

	UUWorksInterfaceCoreUGC_GetQueryUGCNumKeyValueTags_Params params {};
	params.Handle = Handle;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002BA8E0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.GetQueryUGCNumAdditionalPreviews
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksUGCQueryHandle                       Handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		int                                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreUGC::GetQueryUGCNumAdditionalPreviews(const struct FUWorksUGCQueryHandle& Handle, int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.GetQueryUGCNumAdditionalPreviews");

	UUWorksInterfaceCoreUGC_GetQueryUGCNumAdditionalPreviews_Params params {};
	params.Handle = Handle;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002BA760
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.GetQueryUGCMetadata
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FUWorksUGCQueryHandle                       Handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		int                                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     MetaData                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                MetadataMaxLength                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUGC::GetQueryUGCMetadata(const struct FUWorksUGCQueryHandle& Handle, int Index, struct FString* MetaData, int MetadataMaxLength)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.GetQueryUGCMetadata");

	UUWorksInterfaceCoreUGC_GetQueryUGCMetadata_Params params {};
	params.Handle = Handle;
	params.Index = Index;
	params.MetadataMaxLength = MetadataMaxLength;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MetaData != nullptr)
		*MetaData = params.MetaData;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002BA520
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.GetQueryUGCKeyValueTag
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FUWorksUGCQueryHandle                       Handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		int                                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                KeyValueTagIndex                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Key                                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                KeyMaxLength                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Value                                                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ValueMaxLength                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUGC::GetQueryUGCKeyValueTag(const struct FUWorksUGCQueryHandle& Handle, int Index, int KeyValueTagIndex, struct FString* Key, int KeyMaxLength, struct FString* Value, int ValueMaxLength)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.GetQueryUGCKeyValueTag");

	UUWorksInterfaceCoreUGC_GetQueryUGCKeyValueTag_Params params {};
	params.Handle = Handle;
	params.Index = Index;
	params.KeyValueTagIndex = KeyValueTagIndex;
	params.KeyMaxLength = KeyMaxLength;
	params.ValueMaxLength = ValueMaxLength;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Key != nullptr)
		*Key = params.Key;
	if (Value != nullptr)
		*Value = params.Value;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002BA3A0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.GetQueryUGCChildren
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FUWorksUGCQueryHandle                       Handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		int                                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FUWorksPublishedFileID>              PublishedFileIDs                                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
//		int                                                MaxEntries                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUGC::GetQueryUGCChildren(const struct FUWorksUGCQueryHandle& Handle, int Index, TArray<struct FUWorksPublishedFileID>* PublishedFileIDs, int MaxEntries)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.GetQueryUGCChildren");

	UUWorksInterfaceCoreUGC_GetQueryUGCChildren_Params params {};
	params.Handle = Handle;
	params.Index = Index;
	params.MaxEntries = MaxEntries;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PublishedFileIDs != nullptr)
		*PublishedFileIDs = params.PublishedFileIDs;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002BA110
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.GetQueryUGCAdditionalPreview
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FUWorksUGCQueryHandle                       Handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		int                                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                PreviewIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     URLOrVideoID                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                URLOrVideoIDMaxLength                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     OriginalFileName                                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                OriginalFileNameMaxLength                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		UWorksCore_EUWorksItemPreviewType                  PreviewType                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUGC::GetQueryUGCAdditionalPreview(const struct FUWorksUGCQueryHandle& Handle, int Index, int PreviewIndex, struct FString* URLOrVideoID, int URLOrVideoIDMaxLength, struct FString* OriginalFileName, int OriginalFileNameMaxLength, UWorksCore_EUWorksItemPreviewType* PreviewType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.GetQueryUGCAdditionalPreview");

	UUWorksInterfaceCoreUGC_GetQueryUGCAdditionalPreview_Params params {};
	params.Handle = Handle;
	params.Index = Index;
	params.PreviewIndex = PreviewIndex;
	params.URLOrVideoIDMaxLength = URLOrVideoIDMaxLength;
	params.OriginalFileNameMaxLength = OriginalFileNameMaxLength;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (URLOrVideoID != nullptr)
		*URLOrVideoID = params.URLOrVideoID;
	if (OriginalFileName != nullptr)
		*OriginalFileName = params.OriginalFileName;
	if (PreviewType != nullptr)
		*PreviewType = params.PreviewType;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002BA0E0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.GetNumSubscribedItems
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreUGC::GetNumSubscribedItems()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.GetNumSubscribedItems");

	UUWorksInterfaceCoreUGC_GetNumSubscribedItems_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B9F80
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.GetItemUpdateProgress
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FUWorksUGCUpdateHandle                      Handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FString                                     BytesProcessed                                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     BytesTotal                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		UWorksCore_EUWorksItemUpdateStatus                 ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UWorksCore_EUWorksItemUpdateStatus UUWorksInterfaceCoreUGC::GetItemUpdateProgress(const struct FUWorksUGCUpdateHandle& Handle, struct FString* BytesProcessed, struct FString* BytesTotal)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.GetItemUpdateProgress");

	UUWorksInterfaceCoreUGC_GetItemUpdateProgress_Params params {};
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BytesProcessed != nullptr)
		*BytesProcessed = params.BytesProcessed;
	if (BytesTotal != nullptr)
		*BytesTotal = params.BytesTotal;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B9EF0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.GetItemState
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksPublishedFileID                      PublishedFileID                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreUGC::GetItemState(const struct FUWorksPublishedFileID& PublishedFileID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.GetItemState");

	UUWorksInterfaceCoreUGC_GetItemState_Params params {};
	params.PublishedFileID = PublishedFileID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B9D20
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.GetItemInstallInfo
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FUWorksPublishedFileID                      PublishedFileID                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FString                                     sizeOnDisk                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Path                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                PathMaxLength                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Timestamp                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUGC::GetItemInstallInfo(const struct FUWorksPublishedFileID& PublishedFileID, struct FString* sizeOnDisk, struct FString* Path, int PathMaxLength, int* Timestamp)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.GetItemInstallInfo");

	UUWorksInterfaceCoreUGC_GetItemInstallInfo_Params params {};
	params.PublishedFileID = PublishedFileID;
	params.PathMaxLength = PathMaxLength;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (sizeOnDisk != nullptr)
		*sizeOnDisk = params.sizeOnDisk;
	if (Path != nullptr)
		*Path = params.Path;
	if (Timestamp != nullptr)
		*Timestamp = params.Timestamp;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B9BC0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.GetItemDownloadInfo
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FUWorksPublishedFileID                      PublishedFileID                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FString                                     BytesDownloaded                                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     BytesTotal                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUGC::GetItemDownloadInfo(const struct FUWorksPublishedFileID& PublishedFileID, struct FString* BytesDownloaded, struct FString* BytesTotal)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.GetItemDownloadInfo");

	UUWorksInterfaceCoreUGC_GetItemDownloadInfo_Params params {};
	params.PublishedFileID = PublishedFileID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BytesDownloaded != nullptr)
		*BytesDownloaded = params.BytesDownloaded;
	if (BytesTotal != nullptr)
		*BytesTotal = params.BytesTotal;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B9B00
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.DownloadItem
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksPublishedFileID                      PublishedFileID                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               bHighPriority                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUGC::DownloadItem(const struct FUWorksPublishedFileID& PublishedFileID, bool bHighPriority)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.DownloadItem");

	UUWorksInterfaceCoreUGC_DownloadItem_Params params {};
	params.PublishedFileID = PublishedFileID;
	params.bHighPriority = bHighPriority;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B9900
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.CreateQueryUserUGCRequest
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamID                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		UWorksCore_EUWorksUserUGCList                      ListType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		UWorksCore_EUWorksUGCMatchingUGCType               MatchingUGCType                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		UWorksCore_EUWorksUserUGCListSortOrder             SortOrder                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                CreatorAppID                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ConsumerAppID                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Page                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUWorksUGCQueryHandle                       ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FUWorksUGCQueryHandle UUWorksInterfaceCoreUGC::CreateQueryUserUGCRequest(const struct FUWorksSteamID& SteamID, UWorksCore_EUWorksUserUGCList ListType, UWorksCore_EUWorksUGCMatchingUGCType MatchingUGCType, UWorksCore_EUWorksUserUGCListSortOrder SortOrder, int CreatorAppID, int ConsumerAppID, int Page)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.CreateQueryUserUGCRequest");

	UUWorksInterfaceCoreUGC_CreateQueryUserUGCRequest_Params params {};
	params.SteamID = SteamID;
	params.ListType = ListType;
	params.MatchingUGCType = MatchingUGCType;
	params.SortOrder = SortOrder;
	params.CreatorAppID = CreatorAppID;
	params.ConsumerAppID = ConsumerAppID;
	params.Page = Page;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B97D0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.CreateQueryUGCDetailsRequest
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TArray<struct FUWorksPublishedFileID>              PublishedFileIDs                                           (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
//		int                                                NumPublishedFileIDs                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUWorksUGCQueryHandle                       ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FUWorksUGCQueryHandle UUWorksInterfaceCoreUGC::CreateQueryUGCDetailsRequest(TArray<struct FUWorksPublishedFileID> PublishedFileIDs, int NumPublishedFileIDs)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.CreateQueryUGCDetailsRequest");

	UUWorksInterfaceCoreUGC_CreateQueryUGCDetailsRequest_Params params {};
	params.PublishedFileIDs = PublishedFileIDs;
	params.NumPublishedFileIDs = NumPublishedFileIDs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B9630
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.CreateQueryAllUGCRequest
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		UWorksCore_EUWorksUGCQuery                         QueryType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		UWorksCore_EUWorksUGCMatchingUGCType               MatchingUGCTypeFileType                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                CreatorAppID                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ConsumerAppID                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Page                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUWorksUGCQueryHandle                       ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FUWorksUGCQueryHandle UUWorksInterfaceCoreUGC::CreateQueryAllUGCRequest(UWorksCore_EUWorksUGCQuery QueryType, UWorksCore_EUWorksUGCMatchingUGCType MatchingUGCTypeFileType, int CreatorAppID, int ConsumerAppID, int Page)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.CreateQueryAllUGCRequest");

	UUWorksInterfaceCoreUGC_CreateQueryAllUGCRequest_Params params {};
	params.QueryType = QueryType;
	params.MatchingUGCTypeFileType = MatchingUGCTypeFileType;
	params.CreatorAppID = CreatorAppID;
	params.ConsumerAppID = ConsumerAppID;
	params.Page = Page;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B9500
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.CreateItemMinimal
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FScriptDelegate                             Completed                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		int                                                ConsumerAppID                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		UWorksCore_EUWorksWorkshopFileType                 FileType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreUGC::CreateItemMinimal(const struct FScriptDelegate& Completed, int ConsumerAppID, UWorksCore_EUWorksWorkshopFileType FileType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.CreateItemMinimal");

	UUWorksInterfaceCoreUGC_CreateItemMinimal_Params params {};
	params.Completed = Completed;
	params.ConsumerAppID = ConsumerAppID;
	params.FileType = FileType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002B94D0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.CreateItem
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UUWorksRequestCoreCreateItem*                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestCoreCreateItem* UUWorksInterfaceCoreUGC::CreateItem()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.CreateItem");

	UUWorksInterfaceCoreUGC_CreateItem_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B93B0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.BInitWorkshopForGameServer
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                WorkshopDepotID                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Folder                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUGC::BInitWorkshopForGameServer(int WorkshopDepotID, const struct FString& Folder)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.BInitWorkshopForGameServer");

	UUWorksInterfaceCoreUGC_BInitWorkshopForGameServer_Params params {};
	params.WorkshopDepotID = WorkshopDepotID;
	params.Folder = Folder;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B9280
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.AddRequiredTag
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksUGCQueryHandle                       Handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FString                                     TagName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUGC::AddRequiredTag(const struct FUWorksUGCQueryHandle& Handle, const struct FString& TagName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.AddRequiredTag");

	UUWorksInterfaceCoreUGC_AddRequiredTag_Params params {};
	params.Handle = Handle;
	params.TagName = TagName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B90D0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.AddRequiredKeyValueTag
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksUGCQueryHandle                       Handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FString                                     Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUGC::AddRequiredKeyValueTag(const struct FUWorksUGCQueryHandle& Handle, const struct FString& Key, const struct FString& Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.AddRequiredKeyValueTag");

	UUWorksInterfaceCoreUGC_AddRequiredKeyValueTag_Params params {};
	params.Handle = Handle;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B8FA0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.AddItemToFavoritesMinimal
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FScriptDelegate                             Completed                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		int                                                AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUWorksPublishedFileID                      PublishedFileID                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreUGC::AddItemToFavoritesMinimal(const struct FScriptDelegate& Completed, int AppID, const struct FUWorksPublishedFileID& PublishedFileID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.AddItemToFavoritesMinimal");

	UUWorksInterfaceCoreUGC_AddItemToFavoritesMinimal_Params params {};
	params.Completed = Completed;
	params.AppID = AppID;
	params.PublishedFileID = PublishedFileID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002B8F70
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.AddItemToFavorites
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UUWorksRequestCoreAddItemToFavorites*        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestCoreAddItemToFavorites* UUWorksInterfaceCoreUGC::AddItemToFavorites()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.AddItemToFavorites");

	UUWorksInterfaceCoreUGC_AddItemToFavorites_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B8E40
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.AddItemPreviewVideo
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksUGCUpdateHandle                      Handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FString                                     VideoID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUGC::AddItemPreviewVideo(const struct FUWorksUGCUpdateHandle& Handle, const struct FString& VideoID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.AddItemPreviewVideo");

	UUWorksInterfaceCoreUGC_AddItemPreviewVideo_Params params {};
	params.Handle = Handle;
	params.VideoID = VideoID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B8CD0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.AddItemPreviewFile
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksUGCUpdateHandle                      Handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FString                                     PreviewFile                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		UWorksCore_EUWorksItemPreviewType                  Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUGC::AddItemPreviewFile(const struct FUWorksUGCUpdateHandle& Handle, const struct FString& PreviewFile, UWorksCore_EUWorksItemPreviewType Type)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.AddItemPreviewFile");

	UUWorksInterfaceCoreUGC_AddItemPreviewFile_Params params {};
	params.Handle = Handle;
	params.PreviewFile = PreviewFile;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B8B20
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.AddItemKeyValueTag
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksUGCUpdateHandle                      Handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FString                                     Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUGC::AddItemKeyValueTag(const struct FUWorksUGCUpdateHandle& Handle, const struct FString& Key, const struct FString& Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.AddItemKeyValueTag");

	UUWorksInterfaceCoreUGC_AddItemKeyValueTag_Params params {};
	params.Handle = Handle;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B89F0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.AddExcludedTag
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksUGCQueryHandle                       Handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FString                                     TagName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUGC::AddExcludedTag(const struct FUWorksUGCQueryHandle& Handle, const struct FString& TagName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.AddExcludedTag");

	UUWorksInterfaceCoreUGC_AddExcludedTag_Params params {};
	params.Handle = Handle;
	params.TagName = TagName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002BEEF0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUser.UserHasLicenseForApp
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamID                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		int                                                AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		UWorksCore_EUWorksUserHasLicenseForAppResult       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UWorksCore_EUWorksUserHasLicenseForAppResult UUWorksInterfaceCoreUser::UserHasLicenseForApp(const struct FUWorksSteamID& SteamID, int AppID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUser.UserHasLicenseForApp");

	UUWorksInterfaceCoreUser_UserHasLicenseForApp_Params params {};
	params.SteamID = SteamID;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002BEED0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUser.StopVoiceRecording
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UUWorksInterfaceCoreUser::StopVoiceRecording()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUser.StopVoiceRecording");

	UUWorksInterfaceCoreUser_StopVoiceRecording_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002BEEB0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUser.StartVoiceRecording
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UUWorksInterfaceCoreUser::StartVoiceRecording()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUser.StartVoiceRecording");

	UUWorksInterfaceCoreUser_StartVoiceRecording_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002BED60
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUser.RequestStoreAuthURLMinimal
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FScriptDelegate                             Completed                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FString                                     URL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreUser::RequestStoreAuthURLMinimal(const struct FScriptDelegate& Completed, const struct FString& URL)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUser.RequestStoreAuthURLMinimal");

	UUWorksInterfaceCoreUser_RequestStoreAuthURLMinimal_Params params {};
	params.Completed = Completed;
	params.URL = URL;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002BED30
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUser.RequestStoreAuthURL
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UUWorksRequestCoreRequestStoreAuthURL*       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestCoreRequestStoreAuthURL* UUWorksInterfaceCoreUser::RequestStoreAuthURL()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUser.RequestStoreAuthURL");

	UUWorksInterfaceCoreUser_RequestStoreAuthURL_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002BEBE0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUser.RequestEncryptedAppTicketMinimal
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FScriptDelegate                             Completed                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		TArray<unsigned char>                              Buffer                                                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreUser::RequestEncryptedAppTicketMinimal(const struct FScriptDelegate& Completed, TArray<unsigned char> Buffer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUser.RequestEncryptedAppTicketMinimal");

	UUWorksInterfaceCoreUser_RequestEncryptedAppTicketMinimal_Params params {};
	params.Completed = Completed;
	params.Buffer = Buffer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002BEBB0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUser.RequestEncryptedAppTicket
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UUWorksRequestCoreRequestEncryptedAppTicket* ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestCoreRequestEncryptedAppTicket* UUWorksInterfaceCoreUser::RequestEncryptedAppTicket()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUser.RequestEncryptedAppTicket");

	UUWorksInterfaceCoreUser_RequestEncryptedAppTicket_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002BEB20
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUser.GetVoiceChannel
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UAudioComponent*                             ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAudioComponent* UUWorksInterfaceCoreUser::GetVoiceChannel(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUser.GetVoiceChannel");

	UUWorksInterfaceCoreUser_GetVoiceChannel_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002BEA60
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUser.GetVoice
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<unsigned char>                              Data                                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
//		UWorksCore_EUWorksVoiceResult                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UWorksCore_EUWorksVoiceResult UUWorksInterfaceCoreUser::GetVoice(TArray<unsigned char>* Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUser.GetVoice");

	UUWorksInterfaceCoreUser_GetVoice_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002BEA30
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUser.GetUser
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UUWorksInterfaceCoreUser*                    ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksInterfaceCoreUser* UUWorksInterfaceCoreUser::STATIC_GetUser()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUser.GetUser");

	UUWorksInterfaceCoreUser_GetUser_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002BE9F0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUser.GetSteamID
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FUWorksSteamID UUWorksInterfaceCoreUser::GetSteamID()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUser.GetSteamID");

	UUWorksInterfaceCoreUser_GetSteamID_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002BE9C0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUser.GetPlayerSteamLevel
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreUser::GetPlayerSteamLevel()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUser.GetPlayerSteamLevel");

	UUWorksInterfaceCoreUser_GetPlayerSteamLevel_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002BE980
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUser.GetHSteamUser
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamUser                            ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FUWorksSteamUser UUWorksInterfaceCoreUser::GetHSteamUser()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUser.GetHSteamUser");

	UUWorksInterfaceCoreUser_GetHSteamUser_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002BE8C0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUser.GetGameBadgeLevel
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                Series                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bFoil                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreUser::GetGameBadgeLevel(int Series, bool bFoil)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUser.GetGameBadgeLevel");

	UUWorksInterfaceCoreUser_GetGameBadgeLevel_Params params {};
	params.Series = Series;
	params.bFoil = bFoil;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002BE800
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUser.GetEncryptedAppTicket
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<unsigned char>                              Ticket                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUser::GetEncryptedAppTicket(TArray<unsigned char>* Ticket)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUser.GetEncryptedAppTicket");

	UUWorksInterfaceCoreUser_GetEncryptedAppTicket_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Ticket != nullptr)
		*Ticket = params.Ticket;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002BE740
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUser.GetAuthSessionTicket
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<unsigned char>                              Ticket                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
//		struct FUWorksTicketHandle                         ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FUWorksTicketHandle UUWorksInterfaceCoreUser::GetAuthSessionTicket(TArray<unsigned char>* Ticket)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUser.GetAuthSessionTicket");

	UUWorksInterfaceCoreUser_GetAuthSessionTicket_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Ticket != nullptr)
		*Ticket = params.Ticket;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002BE6C0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUser.EndAuthSession
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamID                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreUser::EndAuthSession(const struct FUWorksSteamID& SteamID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUser.EndAuthSession");

	UUWorksInterfaceCoreUser_EndAuthSession_Params params {};
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002BE560
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUser.DecompressVoice
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<unsigned char>                              CompressedBuffer                                           (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
//		TArray<unsigned char>                              UncompressedBuffer                                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
//		UWorksCore_EUWorksVoiceResult                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UWorksCore_EUWorksVoiceResult UUWorksInterfaceCoreUser::DecompressVoice(TArray<unsigned char> CompressedBuffer, TArray<unsigned char>* UncompressedBuffer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUser.DecompressVoice");

	UUWorksInterfaceCoreUser_DecompressVoice_Params params {};
	params.CompressedBuffer = CompressedBuffer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (UncompressedBuffer != nullptr)
		*UncompressedBuffer = params.UncompressedBuffer;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002BE4E0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUser.CancelAuthTicket
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksTicketHandle                         TicketHandle                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreUser::CancelAuthTicket(const struct FUWorksTicketHandle& TicketHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUser.CancelAuthTicket");

	UUWorksInterfaceCoreUser_CancelAuthTicket_Params params {};
	params.TicketHandle = TicketHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002BE390
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUser.BLoggedOn
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUser::BLoggedOn()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUser.BLoggedOn");

	UUWorksInterfaceCoreUser_BLoggedOn_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002BE360
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUser.BIsTwoFactorEnabled
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUser::BIsTwoFactorEnabled()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUser.BIsTwoFactorEnabled");

	UUWorksInterfaceCoreUser_BIsTwoFactorEnabled_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002BE330
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUser.BIsPhoneVerified
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUser::BIsPhoneVerified()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUser.BIsPhoneVerified");

	UUWorksInterfaceCoreUser_BIsPhoneVerified_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002BE300
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUser.BIsPhoneRequiringVerification
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUser::BIsPhoneRequiringVerification()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUser.BIsPhoneRequiringVerification");

	UUWorksInterfaceCoreUser_BIsPhoneRequiringVerification_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002BE2D0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUser.BIsPhoneIdentifying
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUser::BIsPhoneIdentifying()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUser.BIsPhoneIdentifying");

	UUWorksInterfaceCoreUser_BIsPhoneIdentifying_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002BE2A0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUser.BIsBehindNAT
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUser::BIsBehindNAT()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUser.BIsBehindNAT");

	UUWorksInterfaceCoreUser_BIsBehindNAT_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002BE3C0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUser.BeginAuthSession
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TArray<unsigned char>                              Ticket                                                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
//		struct FUWorksSteamID                              SteamID                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		UWorksCore_EUWorksBeginAuthSessionResult           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UWorksCore_EUWorksBeginAuthSessionResult UUWorksInterfaceCoreUser::BeginAuthSession(TArray<unsigned char> Ticket, const struct FUWorksSteamID& SteamID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUser.BeginAuthSession");

	UUWorksInterfaceCoreUser_BeginAuthSession_Params params {};
	params.Ticket = Ticket;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002BE150
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUser.AdvertiseGame
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamIDGameServer                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FString                                     ServerIP                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ServerPort                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreUser::AdvertiseGame(const struct FUWorksSteamID& SteamIDGameServer, const struct FString& ServerIP, int ServerPort)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUser.AdvertiseGame");

	UUWorksInterfaceCoreUser_AdvertiseGame_Params params {};
	params.SteamIDGameServer = SteamIDGameServer;
	params.ServerIP = ServerIP;
	params.ServerPort = ServerPort;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002BE030
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUser.AddBufferToVoiceChannel
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TArray<unsigned char>                              Buffer                                                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
//		int                                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UAudioComponent*                             ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAudioComponent* UUWorksInterfaceCoreUser::AddBufferToVoiceChannel(TArray<unsigned char> Buffer, int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUser.AddBufferToVoiceChannel");

	UUWorksInterfaceCoreUser_AddBufferToVoiceChannel_Params params {};
	params.Buffer = Buffer;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002C2F30
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.UploadLeaderboardScoreMinimal
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FScriptDelegate                             Completed                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FUWorksSteamLeaderboard                     SteamLeaderboard                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		UWorksCore_EUWorksLeaderboardUploadScoreMethod     LeaderboardUploadScoreMethod                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Score                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<int>                                        ScoreDetails                                               (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreUserStats::UploadLeaderboardScoreMinimal(const struct FScriptDelegate& Completed, const struct FUWorksSteamLeaderboard& SteamLeaderboard, UWorksCore_EUWorksLeaderboardUploadScoreMethod LeaderboardUploadScoreMethod, int Score, TArray<int> ScoreDetails)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.UploadLeaderboardScoreMinimal");

	UUWorksInterfaceCoreUserStats_UploadLeaderboardScoreMinimal_Params params {};
	params.Completed = Completed;
	params.SteamLeaderboard = SteamLeaderboard;
	params.LeaderboardUploadScoreMethod = LeaderboardUploadScoreMethod;
	params.Score = Score;
	params.ScoreDetails = ScoreDetails;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C2F00
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.UploadLeaderboardScore
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UUWorksRequestCoreUploadLeaderboardScore*    ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestCoreUploadLeaderboardScore* UUWorksInterfaceCoreUserStats::UploadLeaderboardScore()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.UploadLeaderboardScore");

	UUWorksInterfaceCoreUserStats_UploadLeaderboardScore_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002C2D90
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.UpdateAvgRateStat
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              CountThisSession                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              SessionLength                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUserStats::UpdateAvgRateStat(const struct FString& Name, float CountThisSession, float SessionLength)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.UpdateAvgRateStat");

	UUWorksInterfaceCoreUserStats_UpdateAvgRateStat_Params params {};
	params.Name = Name;
	params.CountThisSession = CountThisSession;
	params.SessionLength = SessionLength;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002C2D60
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.StoreStats
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUserStats::StoreStats()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.StoreStats");

	UUWorksInterfaceCoreUserStats_StoreStats_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002C2C30
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.SetStatAsInteger
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Data                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUserStats::SetStatAsInteger(const struct FString& Name, int Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.SetStatAsInteger");

	UUWorksInterfaceCoreUserStats_SetStatAsInteger_Params params {};
	params.Name = Name;
	params.Data = Data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002C2B00
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.SetStatAsFloat
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Data                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUserStats::SetStatAsFloat(const struct FString& Name, float Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.SetStatAsFloat");

	UUWorksInterfaceCoreUserStats_SetStatAsFloat_Params params {};
	params.Name = Name;
	params.Data = Data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002C2A10
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.SetAchievement
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUserStats::SetAchievement(const struct FString& Name)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.SetAchievement");

	UUWorksInterfaceCoreUserStats_SetAchievement_Params params {};
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002C2980
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.ResetAllStats
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bAchievementsToo                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUserStats::ResetAllStats(bool bAchievementsToo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.ResetAllStats");

	UUWorksInterfaceCoreUserStats_ResetAllStats_Params params {};
	params.bAchievementsToo = bAchievementsToo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002C2880
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.RequestUserStatsMinimal
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FScriptDelegate                             Completed                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FUWorksSteamID                              SteamID                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreUserStats::RequestUserStatsMinimal(const struct FScriptDelegate& Completed, const struct FUWorksSteamID& SteamID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.RequestUserStatsMinimal");

	UUWorksInterfaceCoreUserStats_RequestUserStatsMinimal_Params params {};
	params.Completed = Completed;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C2850
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.RequestUserStats
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UUWorksRequestCoreRequestUserStats*          ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestCoreRequestUserStats* UUWorksInterfaceCoreUserStats::RequestUserStats()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.RequestUserStats");

	UUWorksInterfaceCoreUserStats_RequestUserStats_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002C2750
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.RequestGlobalStatsMinimal
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FScriptDelegate                             Completed                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		int                                                HistoryDays                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreUserStats::RequestGlobalStatsMinimal(const struct FScriptDelegate& Completed, int HistoryDays)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.RequestGlobalStatsMinimal");

	UUWorksInterfaceCoreUserStats_RequestGlobalStatsMinimal_Params params {};
	params.Completed = Completed;
	params.HistoryDays = HistoryDays;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C2720
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.RequestGlobalStats
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UUWorksRequestCoreRequestGlobalStats*        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestCoreRequestGlobalStats* UUWorksInterfaceCoreUserStats::RequestGlobalStats()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.RequestGlobalStats");

	UUWorksInterfaceCoreUserStats_RequestGlobalStats_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002C2660
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.RequestGlobalAchievementPercentagesMinimal
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FScriptDelegate                             Completed                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreUserStats::RequestGlobalAchievementPercentagesMinimal(const struct FScriptDelegate& Completed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.RequestGlobalAchievementPercentagesMinimal");

	UUWorksInterfaceCoreUserStats_RequestGlobalAchievementPercentagesMinimal_Params params {};
	params.Completed = Completed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C2630
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.RequestGlobalAchievementPercentages
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UUWorksRequestCoreRequestGlobalAchievementPercentages* ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestCoreRequestGlobalAchievementPercentages* UUWorksInterfaceCoreUserStats::RequestGlobalAchievementPercentages()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.RequestGlobalAchievementPercentages");

	UUWorksInterfaceCoreUserStats_RequestGlobalAchievementPercentages_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002C2600
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.RequestCurrentStats
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUserStats::RequestCurrentStats()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.RequestCurrentStats");

	UUWorksInterfaceCoreUserStats_RequestCurrentStats_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002C24A0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.IndicateAchievementProgress
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                CurrentProgress                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                MaxProgress                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUserStats::IndicateAchievementProgress(const struct FString& Name, int CurrentProgress, int MaxProgress)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.IndicateAchievementProgress");

	UUWorksInterfaceCoreUserStats_IndicateAchievementProgress_Params params {};
	params.Name = Name;
	params.CurrentProgress = CurrentProgress;
	params.MaxProgress = MaxProgress;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002C2470
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.GetUserStats
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UUWorksInterfaceCoreUserStats*               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksInterfaceCoreUserStats* UUWorksInterfaceCoreUserStats::STATIC_GetUserStats()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.GetUserStats");

	UUWorksInterfaceCoreUserStats_GetUserStats_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002C22F0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.GetUserStatInteger
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamIDUser                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FString                                     Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Data                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUserStats::GetUserStatInteger(const struct FUWorksSteamID& SteamIDUser, const struct FString& Name, int* Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.GetUserStatInteger");

	UUWorksInterfaceCoreUserStats_GetUserStatInteger_Params params {};
	params.SteamIDUser = SteamIDUser;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002C2170
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.GetUserStatFloat
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamIDUser                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FString                                     Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Data                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUserStats::GetUserStatFloat(const struct FUWorksSteamID& SteamIDUser, const struct FString& Name, float* Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.GetUserStatFloat");

	UUWorksInterfaceCoreUserStats_GetUserStatFloat_Params params {};
	params.SteamIDUser = SteamIDUser;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002C1FB0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.GetUserAchievementAndUnlockTime
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamIDUser                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FString                                     Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bAchieved                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                UnlockTime                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUserStats::GetUserAchievementAndUnlockTime(const struct FUWorksSteamID& SteamIDUser, const struct FString& Name, bool* bAchieved, int* UnlockTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.GetUserAchievementAndUnlockTime");

	UUWorksInterfaceCoreUserStats_GetUserAchievementAndUnlockTime_Params params {};
	params.SteamIDUser = SteamIDUser;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bAchieved != nullptr)
		*bAchieved = params.bAchieved;
	if (UnlockTime != nullptr)
		*UnlockTime = params.UnlockTime;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002C1E30
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.GetUserAchievement
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamIDUser                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FString                                     Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bAchieved                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUserStats::GetUserAchievement(const struct FUWorksSteamID& SteamIDUser, const struct FString& Name, bool* bAchieved)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.GetUserAchievement");

	UUWorksInterfaceCoreUserStats_GetUserAchievement_Params params {};
	params.SteamIDUser = SteamIDUser;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bAchieved != nullptr)
		*bAchieved = params.bAchieved;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002C1CF0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.GetStatAsInteger
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FString                                     Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Data                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUserStats::GetStatAsInteger(const struct FString& Name, int* Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.GetStatAsInteger");

	UUWorksInterfaceCoreUserStats_GetStatAsInteger_Params params {};
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002C1BA0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.GetStatAsFloat
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FString                                     Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Data                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUserStats::GetStatAsFloat(const struct FString& Name, float* Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.GetStatAsFloat");

	UUWorksInterfaceCoreUserStats_GetStatAsFloat_Params params {};
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002C1AE0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.GetNumberOfCurrentPlayersMinimal
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FScriptDelegate                             Completed                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreUserStats::GetNumberOfCurrentPlayersMinimal(const struct FScriptDelegate& Completed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.GetNumberOfCurrentPlayersMinimal");

	UUWorksInterfaceCoreUserStats_GetNumberOfCurrentPlayersMinimal_Params params {};
	params.Completed = Completed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C1AB0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.GetNumberOfCurrentPlayers
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UUWorksRequestCoreGetNumberOfCurrentPlayers* ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestCoreGetNumberOfCurrentPlayers* UUWorksInterfaceCoreUserStats::GetNumberOfCurrentPlayers()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.GetNumberOfCurrentPlayers");

	UUWorksInterfaceCoreUserStats_GetNumberOfCurrentPlayers_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002C1A80
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.GetNumAchievements
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreUserStats::GetNumAchievements()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.GetNumAchievements");

	UUWorksInterfaceCoreUserStats_GetNumAchievements_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002C1880
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.GetNextMostAchievedAchievementInfo
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		int                                                IteratorPrevious                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Name                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                NameBufferLength                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Percent                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bAchieved                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreUserStats::GetNextMostAchievedAchievementInfo(int IteratorPrevious, struct FString* Name, int NameBufferLength, float* Percent, bool* bAchieved)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.GetNextMostAchievedAchievementInfo");

	UUWorksInterfaceCoreUserStats_GetNextMostAchievedAchievementInfo_Params params {};
	params.IteratorPrevious = IteratorPrevious;
	params.NameBufferLength = NameBufferLength;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;
	if (Percent != nullptr)
		*Percent = params.Percent;
	if (bAchieved != nullptr)
		*bAchieved = params.bAchieved;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002C16D0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.GetMostAchievedAchievementInfo
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FString                                     Name                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                NameBufferLength                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Percent                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bAchieved                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreUserStats::GetMostAchievedAchievementInfo(struct FString* Name, int NameBufferLength, float* Percent, bool* bAchieved)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.GetMostAchievedAchievementInfo");

	UUWorksInterfaceCoreUserStats_GetMostAchievedAchievementInfo_Params params {};
	params.NameBufferLength = NameBufferLength;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;
	if (Percent != nullptr)
		*Percent = params.Percent;
	if (bAchieved != nullptr)
		*bAchieved = params.bAchieved;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002C1640
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.GetLeaderboardSortMethod
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamLeaderboard                     SteamLeaderboard                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		UWorksCore_EUWorksLeaderboardSortMethod            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UWorksCore_EUWorksLeaderboardSortMethod UUWorksInterfaceCoreUserStats::GetLeaderboardSortMethod(const struct FUWorksSteamLeaderboard& SteamLeaderboard)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.GetLeaderboardSortMethod");

	UUWorksInterfaceCoreUserStats_GetLeaderboardSortMethod_Params params {};
	params.SteamLeaderboard = SteamLeaderboard;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002C1560
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.GetLeaderboardName
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamLeaderboard                     SteamLeaderboard                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UUWorksInterfaceCoreUserStats::GetLeaderboardName(const struct FUWorksSteamLeaderboard& SteamLeaderboard)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.GetLeaderboardName");

	UUWorksInterfaceCoreUserStats_GetLeaderboardName_Params params {};
	params.SteamLeaderboard = SteamLeaderboard;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002C14D0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.GetLeaderboardEntryCount
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamLeaderboard                     SteamLeaderboard                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreUserStats::GetLeaderboardEntryCount(const struct FUWorksSteamLeaderboard& SteamLeaderboard)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.GetLeaderboardEntryCount");

	UUWorksInterfaceCoreUserStats_GetLeaderboardEntryCount_Params params {};
	params.SteamLeaderboard = SteamLeaderboard;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002C1440
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.GetLeaderboardDisplayType
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamLeaderboard                     SteamLeaderboard                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		UWorksCore_EUWorksLeaderboardDisplayType           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UWorksCore_EUWorksLeaderboardDisplayType UUWorksInterfaceCoreUserStats::GetLeaderboardDisplayType(const struct FUWorksSteamLeaderboard& SteamLeaderboard)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.GetLeaderboardDisplayType");

	UUWorksInterfaceCoreUserStats_GetLeaderboardDisplayType_Params params {};
	params.SteamLeaderboard = SteamLeaderboard;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002C1290
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.GetGlobalStatHistoryFromIntegers
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FString                                     StatName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FString>                             Data                                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
//		int                                                HistoryDays                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreUserStats::GetGlobalStatHistoryFromIntegers(const struct FString& StatName, TArray<struct FString>* Data, int HistoryDays)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.GetGlobalStatHistoryFromIntegers");

	UUWorksInterfaceCoreUserStats_GetGlobalStatHistoryFromIntegers_Params params {};
	params.StatName = StatName;
	params.HistoryDays = HistoryDays;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002C10E0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.GetGlobalStatHistoryFromFloats
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FString                                     StatName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FString>                             Data                                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
//		int                                                HistoryDays                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreUserStats::GetGlobalStatHistoryFromFloats(const struct FString& StatName, TArray<struct FString>* Data, int HistoryDays)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.GetGlobalStatHistoryFromFloats");

	UUWorksInterfaceCoreUserStats_GetGlobalStatHistoryFromFloats_Params params {};
	params.StatName = StatName;
	params.HistoryDays = HistoryDays;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002C0F80
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.GetGlobalStatFromInteger
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FString                                     StatName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Data                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUserStats::GetGlobalStatFromInteger(const struct FString& StatName, struct FString* Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.GetGlobalStatFromInteger");

	UUWorksInterfaceCoreUserStats_GetGlobalStatFromInteger_Params params {};
	params.StatName = StatName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002C0E20
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.GetGlobalStatFromFloat
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FString                                     StatName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Data                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUserStats::GetGlobalStatFromFloat(const struct FString& StatName, struct FString* Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.GetGlobalStatFromFloat");

	UUWorksInterfaceCoreUserStats_GetGlobalStatFromFloat_Params params {};
	params.StatName = StatName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002C0C20
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.GetDownloadedLeaderboardEntry
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamLeaderboardEntries              SteamLeaderboardEntries                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		int                                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUWorksLeaderboardEntry                     LeaderboardEntry                                           (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
//		TArray<int>                                        Details                                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
//		int                                                DetailsMax                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUserStats::GetDownloadedLeaderboardEntry(const struct FUWorksSteamLeaderboardEntries& SteamLeaderboardEntries, int Index, struct FUWorksLeaderboardEntry* LeaderboardEntry, TArray<int>* Details, int DetailsMax)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.GetDownloadedLeaderboardEntry");

	UUWorksInterfaceCoreUserStats_GetDownloadedLeaderboardEntry_Params params {};
	params.SteamLeaderboardEntries = SteamLeaderboardEntries;
	params.Index = Index;
	params.DetailsMax = DetailsMax;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LeaderboardEntry != nullptr)
		*LeaderboardEntry = params.LeaderboardEntry;
	if (Details != nullptr)
		*Details = params.Details;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002C0B50
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.GetAchievementName
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                Achievement                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UUWorksInterfaceCoreUserStats::GetAchievementName(int Achievement)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.GetAchievementName");

	UUWorksInterfaceCoreUserStats_GetAchievementName_Params params {};
	params.Achievement = Achievement;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002C0A60
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.GetAchievementIcon
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UTexture2D*                                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTexture2D* UUWorksInterfaceCoreUserStats::GetAchievementIcon(const struct FString& Name)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.GetAchievementIcon");

	UUWorksInterfaceCoreUserStats_GetAchievementIcon_Params params {};
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002C08B0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.GetAchievementDisplayAttribute
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UUWorksInterfaceCoreUserStats::GetAchievementDisplayAttribute(const struct FString& Name, const struct FString& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.GetAchievementDisplayAttribute");

	UUWorksInterfaceCoreUserStats_GetAchievementDisplayAttribute_Params params {};
	params.Name = Name;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002C0710
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.GetAchievementAndUnlockTime
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FString                                     Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bAchieved                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                UnlockTime                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUserStats::GetAchievementAndUnlockTime(const struct FString& Name, bool* bAchieved, int* UnlockTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.GetAchievementAndUnlockTime");

	UUWorksInterfaceCoreUserStats_GetAchievementAndUnlockTime_Params params {};
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bAchieved != nullptr)
		*bAchieved = params.bAchieved;
	if (UnlockTime != nullptr)
		*UnlockTime = params.UnlockTime;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002C05C0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.GetAchievementAchievedPercent
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FString                                     Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Percent                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUserStats::GetAchievementAchievedPercent(const struct FString& Name, float* Percent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.GetAchievementAchievedPercent");

	UUWorksInterfaceCoreUserStats_GetAchievementAchievedPercent_Params params {};
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Percent != nullptr)
		*Percent = params.Percent;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002C0480
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.GetAchievement
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FString                                     Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bAchieved                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUserStats::GetAchievement(const struct FString& Name, bool* bAchieved)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.GetAchievement");

	UUWorksInterfaceCoreUserStats_GetAchievement_Params params {};
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bAchieved != nullptr)
		*bAchieved = params.bAchieved;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002C02C0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.FindOrCreateLeaderboardMinimal
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FScriptDelegate                             Completed                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FString                                     LeaderboardName                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		UWorksCore_EUWorksLeaderboardSortMethod            LeaderboardSortMethod                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		UWorksCore_EUWorksLeaderboardDisplayType           LeaderboardDisplayType                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreUserStats::FindOrCreateLeaderboardMinimal(const struct FScriptDelegate& Completed, const struct FString& LeaderboardName, UWorksCore_EUWorksLeaderboardSortMethod LeaderboardSortMethod, UWorksCore_EUWorksLeaderboardDisplayType LeaderboardDisplayType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.FindOrCreateLeaderboardMinimal");

	UUWorksInterfaceCoreUserStats_FindOrCreateLeaderboardMinimal_Params params {};
	params.Completed = Completed;
	params.LeaderboardName = LeaderboardName;
	params.LeaderboardSortMethod = LeaderboardSortMethod;
	params.LeaderboardDisplayType = LeaderboardDisplayType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C0290
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.FindOrCreateLeaderboard
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UUWorksRequestCoreFindOrCreateLeaderboard*   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestCoreFindOrCreateLeaderboard* UUWorksInterfaceCoreUserStats::FindOrCreateLeaderboard()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.FindOrCreateLeaderboard");

	UUWorksInterfaceCoreUserStats_FindOrCreateLeaderboard_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002C0140
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.FindLeaderboardMinimal
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FScriptDelegate                             Completed                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FString                                     LeaderboardName                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreUserStats::FindLeaderboardMinimal(const struct FScriptDelegate& Completed, const struct FString& LeaderboardName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.FindLeaderboardMinimal");

	UUWorksInterfaceCoreUserStats_FindLeaderboardMinimal_Params params {};
	params.Completed = Completed;
	params.LeaderboardName = LeaderboardName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C0110
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.FindLeaderboard
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UUWorksRequestCoreFindLeaderboard*           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestCoreFindLeaderboard* UUWorksInterfaceCoreUserStats::FindLeaderboard()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.FindLeaderboard");

	UUWorksInterfaceCoreUserStats_FindLeaderboard_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002BFF60
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.DownloadLeaderboardEntriesMinimal
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FScriptDelegate                             Completed                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FUWorksSteamLeaderboard                     SteamLeaderboard                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		UWorksCore_EUWorksLeaderboardDataRequest           LeaderboardDataRequest                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                RangeStart                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                RangeEnd                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreUserStats::DownloadLeaderboardEntriesMinimal(const struct FScriptDelegate& Completed, const struct FUWorksSteamLeaderboard& SteamLeaderboard, UWorksCore_EUWorksLeaderboardDataRequest LeaderboardDataRequest, int RangeStart, int RangeEnd)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.DownloadLeaderboardEntriesMinimal");

	UUWorksInterfaceCoreUserStats_DownloadLeaderboardEntriesMinimal_Params params {};
	params.Completed = Completed;
	params.SteamLeaderboard = SteamLeaderboard;
	params.LeaderboardDataRequest = LeaderboardDataRequest;
	params.RangeStart = RangeStart;
	params.RangeEnd = RangeEnd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002BFDD0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.DownloadLeaderboardEntriesForUsersMinimal
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FScriptDelegate                             Completed                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FUWorksSteamLeaderboard                     SteamLeaderboard                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		TArray<struct FUWorksSteamID>                      users                                                      (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreUserStats::DownloadLeaderboardEntriesForUsersMinimal(const struct FScriptDelegate& Completed, const struct FUWorksSteamLeaderboard& SteamLeaderboard, TArray<struct FUWorksSteamID> users)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.DownloadLeaderboardEntriesForUsersMinimal");

	UUWorksInterfaceCoreUserStats_DownloadLeaderboardEntriesForUsersMinimal_Params params {};
	params.Completed = Completed;
	params.SteamLeaderboard = SteamLeaderboard;
	params.users = users;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002BFDA0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.DownloadLeaderboardEntriesForUsers
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UUWorksRequestCoreDownloadLeaderboardEntriesForUsers* ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestCoreDownloadLeaderboardEntriesForUsers* UUWorksInterfaceCoreUserStats::DownloadLeaderboardEntriesForUsers()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.DownloadLeaderboardEntriesForUsers");

	UUWorksInterfaceCoreUserStats_DownloadLeaderboardEntriesForUsers_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002BFD70
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.DownloadLeaderboardEntries
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UUWorksRequestCoreDownloadLeaderboardEntries* ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestCoreDownloadLeaderboardEntries* UUWorksInterfaceCoreUserStats::DownloadLeaderboardEntries()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.DownloadLeaderboardEntries");

	UUWorksInterfaceCoreUserStats_DownloadLeaderboardEntries_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002BFC80
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.ClearAchievement
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUserStats::ClearAchievement(const struct FString& Name)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.ClearAchievement");

	UUWorksInterfaceCoreUserStats_ClearAchievement_Params params {};
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002BFB40
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.AttachLeaderboardUGCMinimal
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FScriptDelegate                             Completed                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FUWorksSteamLeaderboard                     SteamLeaderboard                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FUWorksUGCHandle                            UGCHandle                                                  (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreUserStats::AttachLeaderboardUGCMinimal(const struct FScriptDelegate& Completed, const struct FUWorksSteamLeaderboard& SteamLeaderboard, const struct FUWorksUGCHandle& UGCHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.AttachLeaderboardUGCMinimal");

	UUWorksInterfaceCoreUserStats_AttachLeaderboardUGCMinimal_Params params {};
	params.Completed = Completed;
	params.SteamLeaderboard = SteamLeaderboard;
	params.UGCHandle = UGCHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002BFB10
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.AttachLeaderboardUGC
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UUWorksRequestCoreAttachLeaderboardUGC*      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksRequestCoreAttachLeaderboardUGC* UUWorksInterfaceCoreUserStats::AttachLeaderboardUGC()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.AttachLeaderboardUGC");

	UUWorksInterfaceCoreUserStats_AttachLeaderboardUGC_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002C3DF0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUtils.StartVRDashboard
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UUWorksInterfaceCoreUtils::StartVRDashboard()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUtils.StartVRDashboard");

	UUWorksInterfaceCoreUtils_StartVRDashboard_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C3BD0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUtils.ShowGamepadTextInput
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		UWorksCore_EUWorksGamepadTextInputMode             InputMode                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		UWorksCore_EUWorksGamepadTextInputLineMode         LineInputMode                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Description                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                CharMax                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ExistingText                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUtils::ShowGamepadTextInput(UWorksCore_EUWorksGamepadTextInputMode InputMode, UWorksCore_EUWorksGamepadTextInputLineMode LineInputMode, const struct FString& Description, int CharMax, const struct FString& ExistingText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUtils.ShowGamepadTextInput");

	UUWorksInterfaceCoreUtils_ShowGamepadTextInput_Params params {};
	params.InputMode = InputMode;
	params.LineInputMode = LineInputMode;
	params.Description = Description;
	params.CharMax = CharMax;
	params.ExistingText = ExistingText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002C3B50
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUtils.SetOverlayNotificationPosition
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		UWorksCore_EUWorksNotificationPosition             NotificationPosition                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreUtils::SetOverlayNotificationPosition(UWorksCore_EUWorksNotificationPosition NotificationPosition)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUtils.SetOverlayNotificationPosition");

	UUWorksInterfaceCoreUtils_SetOverlayNotificationPosition_Params params {};
	params.NotificationPosition = NotificationPosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C3A90
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUtils.SetOverlayNotificationInset
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                HorizontalInset                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                VerticalInset                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreUtils::SetOverlayNotificationInset(int HorizontalInset, int VerticalInset)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUtils.SetOverlayNotificationInset");

	UUWorksInterfaceCoreUtils_SetOverlayNotificationInset_Params params {};
	params.HorizontalInset = HorizontalInset;
	params.VerticalInset = VerticalInset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C3A60
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUtils.IsSteamRunningInVR
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUtils::IsSteamRunningInVR()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUtils.IsSteamRunningInVR");

	UUWorksInterfaceCoreUtils_IsSteamRunningInVR_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002C3A30
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUtils.IsSteamInBigPictureMode
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUtils::IsSteamInBigPictureMode()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUtils.IsSteamInBigPictureMode");

	UUWorksInterfaceCoreUtils_IsSteamInBigPictureMode_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002C3A00
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUtils.IsOverlayEnabled
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUtils::IsOverlayEnabled()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUtils.IsOverlayEnabled");

	UUWorksInterfaceCoreUtils_IsOverlayEnabled_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002C39D0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUtils.GetUtils
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UUWorksInterfaceCoreUtils*                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksInterfaceCoreUtils* UUWorksInterfaceCoreUtils::STATIC_GetUtils()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUtils.GetUtils");

	UUWorksInterfaceCoreUtils_GetUtils_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002C3950
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUtils.GetSteamUILanguage
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UUWorksInterfaceCoreUtils::GetSteamUILanguage()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUtils.GetSteamUILanguage");

	UUWorksInterfaceCoreUtils_GetSteamUILanguage_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002C3920
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUtils.GetServerRealTime
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreUtils::GetServerRealTime()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUtils.GetServerRealTime");

	UUWorksInterfaceCoreUtils_GetServerRealTime_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002C38F0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUtils.GetSecondsSinceComputerActive
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreUtils::GetSecondsSinceComputerActive()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUtils.GetSecondsSinceComputerActive");

	UUWorksInterfaceCoreUtils_GetSecondsSinceComputerActive_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002C38C0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUtils.GetSecondsSinceAppActive
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreUtils::GetSecondsSinceAppActive()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUtils.GetSecondsSinceAppActive");

	UUWorksInterfaceCoreUtils_GetSecondsSinceAppActive_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002C3840
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUtils.GetIPCountry
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UUWorksInterfaceCoreUtils::GetIPCountry()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUtils.GetIPCountry");

	UUWorksInterfaceCoreUtils_GetIPCountry_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002C3810
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUtils.GetIPCCallCount
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreUtils::GetIPCCallCount()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUtils.GetIPCCallCount");

	UUWorksInterfaceCoreUtils_GetIPCCallCount_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002C37E0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUtils.GetEnteredGamepadTextLength
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreUtils::GetEnteredGamepadTextLength()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUtils.GetEnteredGamepadTextLength");

	UUWorksInterfaceCoreUtils_GetEnteredGamepadTextLength_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002C36F0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUtils.GetEnteredGamepadTextInput
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FString                                     Text                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                TextMaxLength                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUtils::GetEnteredGamepadTextInput(struct FString* Text, int TextMaxLength)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUtils.GetEnteredGamepadTextInput");

	UUWorksInterfaceCoreUtils_GetEnteredGamepadTextInput_Params params {};
	params.TextMaxLength = TextMaxLength;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002C36C0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUtils.GetCurrentBatteryPower
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		unsigned char                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
unsigned char UUWorksInterfaceCoreUtils::GetCurrentBatteryPower()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUtils.GetCurrentBatteryPower");

	UUWorksInterfaceCoreUtils_GetCurrentBatteryPower_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002C3690
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUtils.GetConnectedUniverse
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		UWorksCore_EUWorksUniverse                         ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UWorksCore_EUWorksUniverse UUWorksInterfaceCoreUtils::GetConnectedUniverse()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUtils.GetConnectedUniverse");

	UUWorksInterfaceCoreUtils_GetConnectedUniverse_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002C3660
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUtils.GetAppID
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUWorksInterfaceCoreUtils::GetAppID()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUtils.GetAppID");

	UUWorksInterfaceCoreUtils_GetAppID_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002C3630
//		Name   -> Function UWorksCore.UWorksInterfaceCoreUtils.BOverlayNeedsPresent
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreUtils::BOverlayNeedsPresent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUtils.BOverlayNeedsPresent");

	UUWorksInterfaceCoreUtils_BOverlayNeedsPresent_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002C4080
//		Name   -> Function UWorksCore.UWorksInterfaceCoreVideo.IsBroadcasting
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		int                                                NumViewers                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksInterfaceCoreVideo::IsBroadcasting(int* NumViewers)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreVideo.IsBroadcasting");

	UUWorksInterfaceCoreVideo_IsBroadcasting_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NumViewers != nullptr)
		*NumViewers = params.NumViewers;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002C4000
//		Name   -> Function UWorksCore.UWorksInterfaceCoreVideo.GetVideoURL
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                VideoAppID                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksInterfaceCoreVideo::GetVideoURL(int VideoAppID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreVideo.GetVideoURL");

	UUWorksInterfaceCoreVideo_GetVideoURL_Params params {};
	params.VideoAppID = VideoAppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C3FD0
//		Name   -> Function UWorksCore.UWorksInterfaceCoreVideo.GetVideo
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UUWorksInterfaceCoreVideo*                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUWorksInterfaceCoreVideo* UUWorksInterfaceCoreVideo::STATIC_GetVideo()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreVideo.GetVideo");

	UUWorksInterfaceCoreVideo_GetVideo_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002C4580
//		Name   -> Function UWorksCore.UWorksRequestCoreGetFileDetails.SetInput
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Filename                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreGetFileDetails::SetInput(const struct FString& Filename)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreGetFileDetails.SetInput");

	UUWorksRequestCoreGetFileDetails_SetInput_Params params {};
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C4550
//		Name   -> Function UWorksCore.UWorksRequestCoreGetFileDetails.IsActive
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksRequestCoreGetFileDetails::IsActive()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreGetFileDetails.IsActive");

	UUWorksRequestCoreGetFileDetails_IsActive_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002C4380
//		Name   -> Function UWorksCore.UWorksRequestCoreGetFileDetails.GetOutput
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		UWorksCore_EUWorksResult                           Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                FileSize                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     FileSHA                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<int>                                        FileFlags                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UUWorksRequestCoreGetFileDetails::GetOutput(UWorksCore_EUWorksResult* Result, int* FileSize, struct FString* FileSHA, TArray<int>* FileFlags)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreGetFileDetails.GetOutput");

	UUWorksRequestCoreGetFileDetails_GetOutput_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (FileSize != nullptr)
		*FileSize = params.FileSize;
	if (FileSHA != nullptr)
		*FileSHA = params.FileSHA;
	if (FileFlags != nullptr)
		*FileFlags = params.FileFlags;

}


// Function:
//		Offset -> 0x002C4360
//		Name   -> Function UWorksCore.UWorksRequestCoreGetFileDetails.Deactivate
//		Flags  -> (Native, Public, BlueprintCallable)
void UUWorksRequestCoreGetFileDetails::Deactivate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreGetFileDetails.Deactivate");

	UUWorksRequestCoreGetFileDetails_Deactivate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C4340
//		Name   -> Function UWorksCore.UWorksRequestCoreGetFileDetails.Activate
//		Flags  -> (Native, Public, BlueprintCallable)
void UUWorksRequestCoreGetFileDetails::Activate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreGetFileDetails.Activate");

	UUWorksRequestCoreGetFileDetails_Activate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C4580
//		Name   -> Function UWorksCore.UWorksRequestCoreSetPersonaName.SetInput
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreSetPersonaName::SetInput(const struct FString& Name)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreSetPersonaName.SetInput");

	UUWorksRequestCoreSetPersonaName_SetInput_Params params {};
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C4550
//		Name   -> Function UWorksCore.UWorksRequestCoreSetPersonaName.IsActive
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksRequestCoreSetPersonaName::IsActive()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreSetPersonaName.IsActive");

	UUWorksRequestCoreSetPersonaName_IsActive_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002C5C20
//		Name   -> Function UWorksCore.UWorksRequestCoreSetPersonaName.GetOutput
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               bSuccess                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bLocalSuccess                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		UWorksCore_EUWorksResult                           Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreSetPersonaName::GetOutput(bool* bSuccess, bool* bLocalSuccess, UWorksCore_EUWorksResult* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreSetPersonaName.GetOutput");

	UUWorksRequestCoreSetPersonaName_GetOutput_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
	if (bLocalSuccess != nullptr)
		*bLocalSuccess = params.bLocalSuccess;
	if (Result != nullptr)
		*Result = params.Result;

}


// Function:
//		Offset -> 0x002C4360
//		Name   -> Function UWorksCore.UWorksRequestCoreSetPersonaName.Deactivate
//		Flags  -> (Native, Public, BlueprintCallable)
void UUWorksRequestCoreSetPersonaName::Deactivate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreSetPersonaName.Deactivate");

	UUWorksRequestCoreSetPersonaName_Deactivate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C4340
//		Name   -> Function UWorksCore.UWorksRequestCoreSetPersonaName.Activate
//		Flags  -> (Native, Public, BlueprintCallable)
void UUWorksRequestCoreSetPersonaName::Activate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreSetPersonaName.Activate");

	UUWorksRequestCoreSetPersonaName_Activate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C5D60
//		Name   -> Function UWorksCore.UWorksRequestCoreDownloadClanActivityCounts.SetInput
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TArray<struct FUWorksSteamID>                      SteamIDClans                                               (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
void UUWorksRequestCoreDownloadClanActivityCounts::SetInput(TArray<struct FUWorksSteamID> SteamIDClans)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreDownloadClanActivityCounts.SetInput");

	UUWorksRequestCoreDownloadClanActivityCounts_SetInput_Params params {};
	params.SteamIDClans = SteamIDClans;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C4550
//		Name   -> Function UWorksCore.UWorksRequestCoreDownloadClanActivityCounts.IsActive
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksRequestCoreDownloadClanActivityCounts::IsActive()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreDownloadClanActivityCounts.IsActive");

	UUWorksRequestCoreDownloadClanActivityCounts_IsActive_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002C5540
//		Name   -> Function UWorksCore.UWorksRequestCoreDownloadClanActivityCounts.GetOutput
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               bSuccess                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreDownloadClanActivityCounts::GetOutput(bool* bSuccess)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreDownloadClanActivityCounts.GetOutput");

	UUWorksRequestCoreDownloadClanActivityCounts_GetOutput_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;

}


// Function:
//		Offset -> 0x002C4360
//		Name   -> Function UWorksCore.UWorksRequestCoreDownloadClanActivityCounts.Deactivate
//		Flags  -> (Native, Public, BlueprintCallable)
void UUWorksRequestCoreDownloadClanActivityCounts::Deactivate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreDownloadClanActivityCounts.Deactivate");

	UUWorksRequestCoreDownloadClanActivityCounts_Deactivate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C4340
//		Name   -> Function UWorksCore.UWorksRequestCoreDownloadClanActivityCounts.Activate
//		Flags  -> (Native, Public, BlueprintCallable)
void UUWorksRequestCoreDownloadClanActivityCounts::Activate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreDownloadClanActivityCounts.Activate");

	UUWorksRequestCoreDownloadClanActivityCounts_Activate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C5EC0
//		Name   -> Function UWorksCore.UWorksRequestCoreRequestClanOfficerList.SetInput
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamID                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksRequestCoreRequestClanOfficerList::SetInput(const struct FUWorksSteamID& SteamID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestClanOfficerList.SetInput");

	UUWorksRequestCoreRequestClanOfficerList_SetInput_Params params {};
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C4550
//		Name   -> Function UWorksCore.UWorksRequestCoreRequestClanOfficerList.IsActive
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksRequestCoreRequestClanOfficerList::IsActive()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestClanOfficerList.IsActive");

	UUWorksRequestCoreRequestClanOfficerList_IsActive_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002C5AE0
//		Name   -> Function UWorksCore.UWorksRequestCoreRequestClanOfficerList.GetOutput
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FUWorksSteamID                              SteamIDClan                                                (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
//		int                                                Officers                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bSuccess                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreRequestClanOfficerList::GetOutput(struct FUWorksSteamID* SteamIDClan, int* Officers, bool* bSuccess)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestClanOfficerList.GetOutput");

	UUWorksRequestCoreRequestClanOfficerList_GetOutput_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SteamIDClan != nullptr)
		*SteamIDClan = params.SteamIDClan;
	if (Officers != nullptr)
		*Officers = params.Officers;
	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;

}


// Function:
//		Offset -> 0x002C4360
//		Name   -> Function UWorksCore.UWorksRequestCoreRequestClanOfficerList.Deactivate
//		Flags  -> (Native, Public, BlueprintCallable)
void UUWorksRequestCoreRequestClanOfficerList::Deactivate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestClanOfficerList.Deactivate");

	UUWorksRequestCoreRequestClanOfficerList_Deactivate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C4340
//		Name   -> Function UWorksCore.UWorksRequestCoreRequestClanOfficerList.Activate
//		Flags  -> (Native, Public, BlueprintCallable)
void UUWorksRequestCoreRequestClanOfficerList::Activate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestClanOfficerList.Activate");

	UUWorksRequestCoreRequestClanOfficerList_Activate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C5EC0
//		Name   -> Function UWorksCore.UWorksRequestCoreJoinClanChatRoom.SetInput
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamIDClan                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksRequestCoreJoinClanChatRoom::SetInput(const struct FUWorksSteamID& SteamIDClan)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreJoinClanChatRoom.SetInput");

	UUWorksRequestCoreJoinClanChatRoom_SetInput_Params params {};
	params.SteamIDClan = SteamIDClan;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C4550
//		Name   -> Function UWorksCore.UWorksRequestCoreJoinClanChatRoom.IsActive
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksRequestCoreJoinClanChatRoom::IsActive()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreJoinClanChatRoom.IsActive");

	UUWorksRequestCoreJoinClanChatRoom_IsActive_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002C5A00
//		Name   -> Function UWorksCore.UWorksRequestCoreJoinClanChatRoom.GetOutput
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FUWorksSteamID                              SteamIDClanChat                                            (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
//		UWorksCore_EUWorksChatRoomEnterResponse            ChatRoomEnterResponse                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreJoinClanChatRoom::GetOutput(struct FUWorksSteamID* SteamIDClanChat, UWorksCore_EUWorksChatRoomEnterResponse* ChatRoomEnterResponse)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreJoinClanChatRoom.GetOutput");

	UUWorksRequestCoreJoinClanChatRoom_GetOutput_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SteamIDClanChat != nullptr)
		*SteamIDClanChat = params.SteamIDClanChat;
	if (ChatRoomEnterResponse != nullptr)
		*ChatRoomEnterResponse = params.ChatRoomEnterResponse;

}


// Function:
//		Offset -> 0x002C4360
//		Name   -> Function UWorksCore.UWorksRequestCoreJoinClanChatRoom.Deactivate
//		Flags  -> (Native, Public, BlueprintCallable)
void UUWorksRequestCoreJoinClanChatRoom::Deactivate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreJoinClanChatRoom.Deactivate");

	UUWorksRequestCoreJoinClanChatRoom_Deactivate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C4340
//		Name   -> Function UWorksCore.UWorksRequestCoreJoinClanChatRoom.Activate
//		Flags  -> (Native, Public, BlueprintCallable)
void UUWorksRequestCoreJoinClanChatRoom::Activate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreJoinClanChatRoom.Activate");

	UUWorksRequestCoreJoinClanChatRoom_Activate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C5EC0
//		Name   -> Function UWorksCore.UWorksRequestCoreGetFollowerCount.SetInput
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamID                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksRequestCoreGetFollowerCount::SetInput(const struct FUWorksSteamID& SteamID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreGetFollowerCount.SetInput");

	UUWorksRequestCoreGetFollowerCount_SetInput_Params params {};
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C4550
//		Name   -> Function UWorksCore.UWorksRequestCoreGetFollowerCount.IsActive
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksRequestCoreGetFollowerCount::IsActive()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreGetFollowerCount.IsActive");

	UUWorksRequestCoreGetFollowerCount_IsActive_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002C5780
//		Name   -> Function UWorksCore.UWorksRequestCoreGetFollowerCount.GetOutput
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		UWorksCore_EUWorksResult                           Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUWorksSteamID                              SteamID                                                    (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
//		int                                                Count                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreGetFollowerCount::GetOutput(UWorksCore_EUWorksResult* Result, struct FUWorksSteamID* SteamID, int* Count)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreGetFollowerCount.GetOutput");

	UUWorksRequestCoreGetFollowerCount_GetOutput_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (SteamID != nullptr)
		*SteamID = params.SteamID;
	if (Count != nullptr)
		*Count = params.Count;

}


// Function:
//		Offset -> 0x002C4360
//		Name   -> Function UWorksCore.UWorksRequestCoreGetFollowerCount.Deactivate
//		Flags  -> (Native, Public, BlueprintCallable)
void UUWorksRequestCoreGetFollowerCount::Deactivate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreGetFollowerCount.Deactivate");

	UUWorksRequestCoreGetFollowerCount_Deactivate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C4340
//		Name   -> Function UWorksCore.UWorksRequestCoreGetFollowerCount.Activate
//		Flags  -> (Native, Public, BlueprintCallable)
void UUWorksRequestCoreGetFollowerCount::Activate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreGetFollowerCount.Activate");

	UUWorksRequestCoreGetFollowerCount_Activate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C5EC0
//		Name   -> Function UWorksCore.UWorksRequestCoreIsFollowing.SetInput
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamID                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksRequestCoreIsFollowing::SetInput(const struct FUWorksSteamID& SteamID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreIsFollowing.SetInput");

	UUWorksRequestCoreIsFollowing_SetInput_Params params {};
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C4550
//		Name   -> Function UWorksCore.UWorksRequestCoreIsFollowing.IsActive
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksRequestCoreIsFollowing::IsActive()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreIsFollowing.IsActive");

	UUWorksRequestCoreIsFollowing_IsActive_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002C58C0
//		Name   -> Function UWorksCore.UWorksRequestCoreIsFollowing.GetOutput
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		UWorksCore_EUWorksResult                           Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUWorksSteamID                              SteamID                                                    (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               bIsFollowing                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreIsFollowing::GetOutput(UWorksCore_EUWorksResult* Result, struct FUWorksSteamID* SteamID, bool* bIsFollowing)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreIsFollowing.GetOutput");

	UUWorksRequestCoreIsFollowing_GetOutput_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (SteamID != nullptr)
		*SteamID = params.SteamID;
	if (bIsFollowing != nullptr)
		*bIsFollowing = params.bIsFollowing;

}


// Function:
//		Offset -> 0x002C4360
//		Name   -> Function UWorksCore.UWorksRequestCoreIsFollowing.Deactivate
//		Flags  -> (Native, Public, BlueprintCallable)
void UUWorksRequestCoreIsFollowing::Deactivate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreIsFollowing.Deactivate");

	UUWorksRequestCoreIsFollowing_Deactivate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C4340
//		Name   -> Function UWorksCore.UWorksRequestCoreIsFollowing.Activate
//		Flags  -> (Native, Public, BlueprintCallable)
void UUWorksRequestCoreIsFollowing::Activate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreIsFollowing.Activate");

	UUWorksRequestCoreIsFollowing_Activate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C5E40
//		Name   -> Function UWorksCore.UWorksRequestCoreEnumerateFollowingList.SetInput
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                StartIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreEnumerateFollowingList::SetInput(int StartIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreEnumerateFollowingList.SetInput");

	UUWorksRequestCoreEnumerateFollowingList_SetInput_Params params {};
	params.StartIndex = StartIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C4550
//		Name   -> Function UWorksCore.UWorksRequestCoreEnumerateFollowingList.IsActive
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksRequestCoreEnumerateFollowingList::IsActive()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreEnumerateFollowingList.IsActive");

	UUWorksRequestCoreEnumerateFollowingList_IsActive_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002C55D0
//		Name   -> Function UWorksCore.UWorksRequestCoreEnumerateFollowingList.GetOutput
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		UWorksCore_EUWorksResult                           Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FUWorksSteamID>                      SteamIDs                                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
//		int                                                ResultsReturned                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                TotalResultCount                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreEnumerateFollowingList::GetOutput(UWorksCore_EUWorksResult* Result, TArray<struct FUWorksSteamID>* SteamIDs, int* ResultsReturned, int* TotalResultCount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreEnumerateFollowingList.GetOutput");

	UUWorksRequestCoreEnumerateFollowingList_GetOutput_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (SteamIDs != nullptr)
		*SteamIDs = params.SteamIDs;
	if (ResultsReturned != nullptr)
		*ResultsReturned = params.ResultsReturned;
	if (TotalResultCount != nullptr)
		*TotalResultCount = params.TotalResultCount;

}


// Function:
//		Offset -> 0x002C4360
//		Name   -> Function UWorksCore.UWorksRequestCoreEnumerateFollowingList.Deactivate
//		Flags  -> (Native, Public, BlueprintCallable)
void UUWorksRequestCoreEnumerateFollowingList::Deactivate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreEnumerateFollowingList.Deactivate");

	UUWorksRequestCoreEnumerateFollowingList_Deactivate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C4340
//		Name   -> Function UWorksCore.UWorksRequestCoreEnumerateFollowingList.Activate
//		Flags  -> (Native, Public, BlueprintCallable)
void UUWorksRequestCoreEnumerateFollowingList::Activate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreEnumerateFollowingList.Activate");

	UUWorksRequestCoreEnumerateFollowingList_Activate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C5EC0
//		Name   -> Function UWorksCore.UWorksRequestCoreAssociateWithClan.SetInput
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamIDClan                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksRequestCoreAssociateWithClan::SetInput(const struct FUWorksSteamID& SteamIDClan)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreAssociateWithClan.SetInput");

	UUWorksRequestCoreAssociateWithClan_SetInput_Params params {};
	params.SteamIDClan = SteamIDClan;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C4550
//		Name   -> Function UWorksCore.UWorksRequestCoreAssociateWithClan.IsActive
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksRequestCoreAssociateWithClan::IsActive()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreAssociateWithClan.IsActive");

	UUWorksRequestCoreAssociateWithClan_IsActive_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002C6380
//		Name   -> Function UWorksCore.UWorksRequestCoreAssociateWithClan.GetOutput
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		UWorksCore_EUWorksResult                           Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreAssociateWithClan::GetOutput(UWorksCore_EUWorksResult* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreAssociateWithClan.GetOutput");

	UUWorksRequestCoreAssociateWithClan_GetOutput_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


// Function:
//		Offset -> 0x002C4360
//		Name   -> Function UWorksCore.UWorksRequestCoreAssociateWithClan.Deactivate
//		Flags  -> (Native, Public, BlueprintCallable)
void UUWorksRequestCoreAssociateWithClan::Deactivate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreAssociateWithClan.Deactivate");

	UUWorksRequestCoreAssociateWithClan_Deactivate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C4340
//		Name   -> Function UWorksCore.UWorksRequestCoreAssociateWithClan.Activate
//		Flags  -> (Native, Public, BlueprintCallable)
void UUWorksRequestCoreAssociateWithClan::Activate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreAssociateWithClan.Activate");

	UUWorksRequestCoreAssociateWithClan_Activate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C5EC0
//		Name   -> Function UWorksCore.UWorksRequestCoreComputeNewPlayerCompatibility.SetInput
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamIDNewPlayer                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksRequestCoreComputeNewPlayerCompatibility::SetInput(const struct FUWorksSteamID& SteamIDNewPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreComputeNewPlayerCompatibility.SetInput");

	UUWorksRequestCoreComputeNewPlayerCompatibility_SetInput_Params params {};
	params.SteamIDNewPlayer = SteamIDNewPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C4550
//		Name   -> Function UWorksCore.UWorksRequestCoreComputeNewPlayerCompatibility.IsActive
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksRequestCoreComputeNewPlayerCompatibility::IsActive()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreComputeNewPlayerCompatibility.IsActive");

	UUWorksRequestCoreComputeNewPlayerCompatibility_IsActive_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002C6410
//		Name   -> Function UWorksCore.UWorksRequestCoreComputeNewPlayerCompatibility.GetOutput
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		UWorksCore_EUWorksResult                           Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                PlayersThatDontLikeCandidate                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                PlayersThatCandidateDoesntLike                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ClanPlayersThatDontLikeCandidate                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUWorksSteamID                              SteamIDCandidate                                           (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksRequestCoreComputeNewPlayerCompatibility::GetOutput(UWorksCore_EUWorksResult* Result, int* PlayersThatDontLikeCandidate, int* PlayersThatCandidateDoesntLike, int* ClanPlayersThatDontLikeCandidate, struct FUWorksSteamID* SteamIDCandidate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreComputeNewPlayerCompatibility.GetOutput");

	UUWorksRequestCoreComputeNewPlayerCompatibility_GetOutput_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (PlayersThatDontLikeCandidate != nullptr)
		*PlayersThatDontLikeCandidate = params.PlayersThatDontLikeCandidate;
	if (PlayersThatCandidateDoesntLike != nullptr)
		*PlayersThatCandidateDoesntLike = params.PlayersThatCandidateDoesntLike;
	if (ClanPlayersThatDontLikeCandidate != nullptr)
		*ClanPlayersThatDontLikeCandidate = params.ClanPlayersThatDontLikeCandidate;
	if (SteamIDCandidate != nullptr)
		*SteamIDCandidate = params.SteamIDCandidate;

}


// Function:
//		Offset -> 0x002C4360
//		Name   -> Function UWorksCore.UWorksRequestCoreComputeNewPlayerCompatibility.Deactivate
//		Flags  -> (Native, Public, BlueprintCallable)
void UUWorksRequestCoreComputeNewPlayerCompatibility::Deactivate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreComputeNewPlayerCompatibility.Deactivate");

	UUWorksRequestCoreComputeNewPlayerCompatibility_Deactivate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C4340
//		Name   -> Function UWorksCore.UWorksRequestCoreComputeNewPlayerCompatibility.Activate
//		Flags  -> (Native, Public, BlueprintCallable)
void UUWorksRequestCoreComputeNewPlayerCompatibility::Activate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreComputeNewPlayerCompatibility.Activate");

	UUWorksRequestCoreComputeNewPlayerCompatibility_Activate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C5EC0
//		Name   -> Function UWorksCore.UWorksRequestCoreRequestUserStatsGS.SetInput
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamIDUser                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksRequestCoreRequestUserStatsGS::SetInput(const struct FUWorksSteamID& SteamIDUser)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestUserStatsGS.SetInput");

	UUWorksRequestCoreRequestUserStatsGS_SetInput_Params params {};
	params.SteamIDUser = SteamIDUser;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C4550
//		Name   -> Function UWorksCore.UWorksRequestCoreRequestUserStatsGS.IsActive
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksRequestCoreRequestUserStatsGS::IsActive()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestUserStatsGS.IsActive");

	UUWorksRequestCoreRequestUserStatsGS_IsActive_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002C6A50
//		Name   -> Function UWorksCore.UWorksRequestCoreRequestUserStatsGS.GetOutput
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		UWorksCore_EUWorksResult                           Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUWorksSteamID                              SteamIDUser                                                (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksRequestCoreRequestUserStatsGS::GetOutput(UWorksCore_EUWorksResult* Result, struct FUWorksSteamID* SteamIDUser)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestUserStatsGS.GetOutput");

	UUWorksRequestCoreRequestUserStatsGS_GetOutput_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (SteamIDUser != nullptr)
		*SteamIDUser = params.SteamIDUser;

}


// Function:
//		Offset -> 0x002C4360
//		Name   -> Function UWorksCore.UWorksRequestCoreRequestUserStatsGS.Deactivate
//		Flags  -> (Native, Public, BlueprintCallable)
void UUWorksRequestCoreRequestUserStatsGS::Deactivate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestUserStatsGS.Deactivate");

	UUWorksRequestCoreRequestUserStatsGS_Deactivate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C4340
//		Name   -> Function UWorksCore.UWorksRequestCoreRequestUserStatsGS.Activate
//		Flags  -> (Native, Public, BlueprintCallable)
void UUWorksRequestCoreRequestUserStatsGS::Activate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestUserStatsGS.Activate");

	UUWorksRequestCoreRequestUserStatsGS_Activate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C5EC0
//		Name   -> Function UWorksCore.UWorksRequestCoreStoreUserStats.SetInput
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamIDUser                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksRequestCoreStoreUserStats::SetInput(const struct FUWorksSteamID& SteamIDUser)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreStoreUserStats.SetInput");

	UUWorksRequestCoreStoreUserStats_SetInput_Params params {};
	params.SteamIDUser = SteamIDUser;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C4550
//		Name   -> Function UWorksCore.UWorksRequestCoreStoreUserStats.IsActive
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksRequestCoreStoreUserStats::IsActive()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreStoreUserStats.IsActive");

	UUWorksRequestCoreStoreUserStats_IsActive_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002C6A50
//		Name   -> Function UWorksCore.UWorksRequestCoreStoreUserStats.GetOutput
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		UWorksCore_EUWorksResult                           Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUWorksSteamID                              SteamIDUser                                                (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksRequestCoreStoreUserStats::GetOutput(UWorksCore_EUWorksResult* Result, struct FUWorksSteamID* SteamIDUser)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreStoreUserStats.GetOutput");

	UUWorksRequestCoreStoreUserStats_GetOutput_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (SteamIDUser != nullptr)
		*SteamIDUser = params.SteamIDUser;

}


// Function:
//		Offset -> 0x002C4360
//		Name   -> Function UWorksCore.UWorksRequestCoreStoreUserStats.Deactivate
//		Flags  -> (Native, Public, BlueprintCallable)
void UUWorksRequestCoreStoreUserStats::Deactivate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreStoreUserStats.Deactivate");

	UUWorksRequestCoreStoreUserStats_Deactivate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C4340
//		Name   -> Function UWorksCore.UWorksRequestCoreStoreUserStats.Activate
//		Flags  -> (Native, Public, BlueprintCallable)
void UUWorksRequestCoreStoreUserStats::Activate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreStoreUserStats.Activate");

	UUWorksRequestCoreStoreUserStats_Activate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C5EC0
//		Name   -> Function UWorksCore.UWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs.SetInput
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamID                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs::SetInput(const struct FUWorksSteamID& SteamID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs.SetInput");

	UUWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs_SetInput_Params params {};
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C4550
//		Name   -> Function UWorksCore.UWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs.IsActive
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs::IsActive()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs.IsActive");

	UUWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs_IsActive_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002C6D50
//		Name   -> Function UWorksCore.UWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs.GetOutput
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		UWorksCore_EUWorksResult                           Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUWorksSteamID                              SteamID                                                    (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
//		int                                                NumEligiblePromoItemsDefinitionsIDs                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bCachedData                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs::GetOutput(UWorksCore_EUWorksResult* Result, struct FUWorksSteamID* SteamID, int* NumEligiblePromoItemsDefinitionsIDs, bool* bCachedData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs.GetOutput");

	UUWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs_GetOutput_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (SteamID != nullptr)
		*SteamID = params.SteamID;
	if (NumEligiblePromoItemsDefinitionsIDs != nullptr)
		*NumEligiblePromoItemsDefinitionsIDs = params.NumEligiblePromoItemsDefinitionsIDs;
	if (bCachedData != nullptr)
		*bCachedData = params.bCachedData;

}


// Function:
//		Offset -> 0x002C4360
//		Name   -> Function UWorksCore.UWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs.Deactivate
//		Flags  -> (Native, Public, BlueprintCallable)
void UUWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs::Deactivate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs.Deactivate");

	UUWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs_Deactivate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C4340
//		Name   -> Function UWorksCore.UWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs.Activate
//		Flags  -> (Native, Public, BlueprintCallable)
void UUWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs::Activate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs.Activate");

	UUWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs_Activate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C4550
//		Name   -> Function UWorksCore.UWorksRequestCoreRequestLobbyList.IsActive
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksRequestCoreRequestLobbyList::IsActive()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestLobbyList.IsActive");

	UUWorksRequestCoreRequestLobbyList_IsActive_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002C76E0
//		Name   -> Function UWorksCore.UWorksRequestCoreRequestLobbyList.GetOutput
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		int                                                LobbiesMatching                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreRequestLobbyList::GetOutput(int* LobbiesMatching)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestLobbyList.GetOutput");

	UUWorksRequestCoreRequestLobbyList_GetOutput_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LobbiesMatching != nullptr)
		*LobbiesMatching = params.LobbiesMatching;

}


// Function:
//		Offset -> 0x002C4360
//		Name   -> Function UWorksCore.UWorksRequestCoreRequestLobbyList.Deactivate
//		Flags  -> (Native, Public, BlueprintCallable)
void UUWorksRequestCoreRequestLobbyList::Deactivate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestLobbyList.Deactivate");

	UUWorksRequestCoreRequestLobbyList_Deactivate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C4340
//		Name   -> Function UWorksCore.UWorksRequestCoreRequestLobbyList.Activate
//		Flags  -> (Native, Public, BlueprintCallable)
void UUWorksRequestCoreRequestLobbyList::Activate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestLobbyList.Activate");

	UUWorksRequestCoreRequestLobbyList_Activate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C7770
//		Name   -> Function UWorksCore.UWorksRequestCoreCreateLobby.SetInput
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		UWorksCore_EUWorksLobbyType                        LobbyType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                MaxMembers                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreCreateLobby::SetInput(UWorksCore_EUWorksLobbyType LobbyType, int MaxMembers)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreCreateLobby.SetInput");

	UUWorksRequestCoreCreateLobby_SetInput_Params params {};
	params.LobbyType = LobbyType;
	params.MaxMembers = MaxMembers;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C4550
//		Name   -> Function UWorksCore.UWorksRequestCoreCreateLobby.IsActive
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksRequestCoreCreateLobby::IsActive()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreCreateLobby.IsActive");

	UUWorksRequestCoreCreateLobby_IsActive_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002C6A50
//		Name   -> Function UWorksCore.UWorksRequestCoreCreateLobby.GetOutput
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		UWorksCore_EUWorksResult                           Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUWorksSteamID                              SteamIDLobby                                               (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksRequestCoreCreateLobby::GetOutput(UWorksCore_EUWorksResult* Result, struct FUWorksSteamID* SteamIDLobby)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreCreateLobby.GetOutput");

	UUWorksRequestCoreCreateLobby_GetOutput_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (SteamIDLobby != nullptr)
		*SteamIDLobby = params.SteamIDLobby;

}


// Function:
//		Offset -> 0x002C4360
//		Name   -> Function UWorksCore.UWorksRequestCoreCreateLobby.Deactivate
//		Flags  -> (Native, Public, BlueprintCallable)
void UUWorksRequestCoreCreateLobby::Deactivate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreCreateLobby.Deactivate");

	UUWorksRequestCoreCreateLobby_Deactivate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C4340
//		Name   -> Function UWorksCore.UWorksRequestCoreCreateLobby.Activate
//		Flags  -> (Native, Public, BlueprintCallable)
void UUWorksRequestCoreCreateLobby::Activate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreCreateLobby.Activate");

	UUWorksRequestCoreCreateLobby_Activate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C5EC0
//		Name   -> Function UWorksCore.UWorksRequestCoreJoinLobby.SetInput
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamIDLobby                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksRequestCoreJoinLobby::SetInput(const struct FUWorksSteamID& SteamIDLobby)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreJoinLobby.SetInput");

	UUWorksRequestCoreJoinLobby_SetInput_Params params {};
	params.SteamIDLobby = SteamIDLobby;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C4550
//		Name   -> Function UWorksCore.UWorksRequestCoreJoinLobby.IsActive
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksRequestCoreJoinLobby::IsActive()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreJoinLobby.IsActive");

	UUWorksRequestCoreJoinLobby_IsActive_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002C7520
//		Name   -> Function UWorksCore.UWorksRequestCoreJoinLobby.GetOutput
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FUWorksSteamID                              SteamIDLobby                                               (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
//		TArray<unsigned char>                              ChatPermissions                                            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
//		bool                                               bLocked                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		UWorksCore_EUWorksChatRoomEnterResponse            ChatRoomEnterResponse                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreJoinLobby::GetOutput(struct FUWorksSteamID* SteamIDLobby, TArray<unsigned char>* ChatPermissions, bool* bLocked, UWorksCore_EUWorksChatRoomEnterResponse* ChatRoomEnterResponse)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreJoinLobby.GetOutput");

	UUWorksRequestCoreJoinLobby_GetOutput_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SteamIDLobby != nullptr)
		*SteamIDLobby = params.SteamIDLobby;
	if (ChatPermissions != nullptr)
		*ChatPermissions = params.ChatPermissions;
	if (bLocked != nullptr)
		*bLocked = params.bLocked;
	if (ChatRoomEnterResponse != nullptr)
		*ChatRoomEnterResponse = params.ChatRoomEnterResponse;

}


// Function:
//		Offset -> 0x002C4360
//		Name   -> Function UWorksCore.UWorksRequestCoreJoinLobby.Deactivate
//		Flags  -> (Native, Public, BlueprintCallable)
void UUWorksRequestCoreJoinLobby::Deactivate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreJoinLobby.Deactivate");

	UUWorksRequestCoreJoinLobby_Deactivate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C4340
//		Name   -> Function UWorksCore.UWorksRequestCoreJoinLobby.Activate
//		Flags  -> (Native, Public, BlueprintCallable)
void UUWorksRequestCoreJoinLobby::Activate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreJoinLobby.Activate");

	UUWorksRequestCoreJoinLobby_Activate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C94C0
//		Name   -> Function UWorksCore.UWorksRequestCoreServerList.SetInput
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		UWorksCore_EUWorksServerQueryType                  QueryType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreServerList::SetInput(int AppID, UWorksCore_EUWorksServerQueryType QueryType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreServerList.SetInput");

	UUWorksRequestCoreServerList_SetInput_Params params {};
	params.AppID = AppID;
	params.QueryType = QueryType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C4550
//		Name   -> Function UWorksCore.UWorksRequestCoreServerList.IsActive
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksRequestCoreServerList::IsActive()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreServerList.IsActive");

	UUWorksRequestCoreServerList_IsActive_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002C9230
//		Name   -> Function UWorksCore.UWorksRequestCoreServerList.GetOutput
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FUWorksServerInfo                           UpdatedServer                                              (Parm, OutParm, NativeAccessSpecifierPublic)
//		TArray<struct FUWorksServerInfo>                   Servers                                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UUWorksRequestCoreServerList::GetOutput(struct FUWorksServerInfo* UpdatedServer, TArray<struct FUWorksServerInfo>* Servers)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreServerList.GetOutput");

	UUWorksRequestCoreServerList_GetOutput_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (UpdatedServer != nullptr)
		*UpdatedServer = params.UpdatedServer;
	if (Servers != nullptr)
		*Servers = params.Servers;

}


// Function:
//		Offset -> 0x002C4360
//		Name   -> Function UWorksCore.UWorksRequestCoreServerList.Deactivate
//		Flags  -> (Native, Public, BlueprintCallable)
void UUWorksRequestCoreServerList::Deactivate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreServerList.Deactivate");

	UUWorksRequestCoreServerList_Deactivate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C8E70
//		Name   -> Function UWorksCore.UWorksRequestCoreServerList.AddFilterSecure
//		Flags  -> (Native, Public, BlueprintCallable)
void UUWorksRequestCoreServerList::AddFilterSecure()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreServerList.AddFilterSecure");

	UUWorksRequestCoreServerList_AddFilterSecure_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C8DE0
//		Name   -> Function UWorksCore.UWorksRequestCoreServerList.AddFilterOr
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		int                                                Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreServerList::AddFilterOr(int Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreServerList.AddFilterOr");

	UUWorksRequestCoreServerList_AddFilterOr_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C8DC0
//		Name   -> Function UWorksCore.UWorksRequestCoreServerList.AddFilterNotFull
//		Flags  -> (Native, Public, BlueprintCallable)
void UUWorksRequestCoreServerList::AddFilterNotFull()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreServerList.AddFilterNotFull");

	UUWorksRequestCoreServerList_AddFilterNotFull_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C8D30
//		Name   -> Function UWorksCore.UWorksRequestCoreServerList.AddFilterNor
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		int                                                Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreServerList::AddFilterNor(int Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreServerList.AddFilterNor");

	UUWorksRequestCoreServerList_AddFilterNor_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C8D10
//		Name   -> Function UWorksCore.UWorksRequestCoreServerList.AddFilterNoPlayers
//		Flags  -> (Native, Public, BlueprintCallable)
void UUWorksRequestCoreServerList::AddFilterNoPlayers()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreServerList.AddFilterNoPlayers");

	UUWorksRequestCoreServerList_AddFilterNoPlayers_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C8C80
//		Name   -> Function UWorksCore.UWorksRequestCoreServerList.AddFilterNand
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		int                                                Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreServerList::AddFilterNand(int Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreServerList.AddFilterNand");

	UUWorksRequestCoreServerList_AddFilterNand_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C8B90
//		Name   -> Function UWorksCore.UWorksRequestCoreServerList.AddFilterMap
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreServerList::AddFilterMap(const struct FString& Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreServerList.AddFilterMap");

	UUWorksRequestCoreServerList_AddFilterMap_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C8B70
//		Name   -> Function UWorksCore.UWorksRequestCoreServerList.AddFilterLinux
//		Flags  -> (Native, Public, BlueprintCallable)
void UUWorksRequestCoreServerList::AddFilterLinux()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreServerList.AddFilterLinux");

	UUWorksRequestCoreServerList_AddFilterLinux_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C8B50
//		Name   -> Function UWorksCore.UWorksRequestCoreServerList.AddFilterHasPlayers
//		Flags  -> (Native, Public, BlueprintCallable)
void UUWorksRequestCoreServerList::AddFilterHasPlayers()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreServerList.AddFilterHasPlayers");

	UUWorksRequestCoreServerList_AddFilterHasPlayers_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C8A60
//		Name   -> Function UWorksCore.UWorksRequestCoreServerList.AddFilterGameTagsNor
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreServerList::AddFilterGameTagsNor(const struct FString& Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreServerList.AddFilterGameTagsNor");

	UUWorksRequestCoreServerList_AddFilterGameTagsNor_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C8970
//		Name   -> Function UWorksCore.UWorksRequestCoreServerList.AddFilterGameTagsAnd
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreServerList::AddFilterGameTagsAnd(const struct FString& Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreServerList.AddFilterGameTagsAnd");

	UUWorksRequestCoreServerList_AddFilterGameTagsAnd_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C8880
//		Name   -> Function UWorksCore.UWorksRequestCoreServerList.AddFilterGameDataOr
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreServerList::AddFilterGameDataOr(const struct FString& Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreServerList.AddFilterGameDataOr");

	UUWorksRequestCoreServerList_AddFilterGameDataOr_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C8790
//		Name   -> Function UWorksCore.UWorksRequestCoreServerList.AddFilterGameDataNor
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreServerList::AddFilterGameDataNor(const struct FString& Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreServerList.AddFilterGameDataNor");

	UUWorksRequestCoreServerList_AddFilterGameDataNor_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C86A0
//		Name   -> Function UWorksCore.UWorksRequestCoreServerList.AddFilterGameDataAnd
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreServerList::AddFilterGameDataAnd(const struct FString& Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreServerList.AddFilterGameDataAnd");

	UUWorksRequestCoreServerList_AddFilterGameDataAnd_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C85B0
//		Name   -> Function UWorksCore.UWorksRequestCoreServerList.AddFilterGameAddr
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreServerList::AddFilterGameAddr(const struct FString& Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreServerList.AddFilterGameAddr");

	UUWorksRequestCoreServerList_AddFilterGameAddr_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C8590
//		Name   -> Function UWorksCore.UWorksRequestCoreServerList.AddFilterDedicated
//		Flags  -> (Native, Public, BlueprintCallable)
void UUWorksRequestCoreServerList::AddFilterDedicated()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreServerList.AddFilterDedicated");

	UUWorksRequestCoreServerList_AddFilterDedicated_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C8500
//		Name   -> Function UWorksCore.UWorksRequestCoreServerList.AddFilterAnd
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		int                                                Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreServerList::AddFilterAnd(int Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreServerList.AddFilterAnd");

	UUWorksRequestCoreServerList_AddFilterAnd_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C8410
//		Name   -> Function UWorksCore.UWorksRequestCoreServerList.AddFilterAddr
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreServerList::AddFilterAddr(const struct FString& Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreServerList.AddFilterAddr");

	UUWorksRequestCoreServerList_AddFilterAddr_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C4340
//		Name   -> Function UWorksCore.UWorksRequestCoreServerList.Activate
//		Flags  -> (Native, Public, BlueprintCallable)
void UUWorksRequestCoreServerList::Activate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreServerList.Activate");

	UUWorksRequestCoreServerList_Activate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C93A0
//		Name   -> Function UWorksCore.UWorksRequestCorePing.SetInput
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     IP                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Port                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCorePing::SetInput(const struct FString& IP, int Port)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCorePing.SetInput");

	UUWorksRequestCorePing_SetInput_Params params {};
	params.IP = IP;
	params.Port = Port;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C4550
//		Name   -> Function UWorksCore.UWorksRequestCorePing.IsActive
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksRequestCorePing::IsActive()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCorePing.IsActive");

	UUWorksRequestCorePing_IsActive_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002C8E90
//		Name   -> Function UWorksCore.UWorksRequestCorePing.GetOutput
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FUWorksServerInfo                           Server                                                     (Parm, OutParm, NativeAccessSpecifierPublic)
void UUWorksRequestCorePing::GetOutput(struct FUWorksServerInfo* Server)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCorePing.GetOutput");

	UUWorksRequestCorePing_GetOutput_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Server != nullptr)
		*Server = params.Server;

}


// Function:
//		Offset -> 0x002C4360
//		Name   -> Function UWorksCore.UWorksRequestCorePing.Deactivate
//		Flags  -> (Native, Public, BlueprintCallable)
void UUWorksRequestCorePing::Deactivate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCorePing.Deactivate");

	UUWorksRequestCorePing_Deactivate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C4340
//		Name   -> Function UWorksCore.UWorksRequestCorePing.Activate
//		Flags  -> (Native, Public, BlueprintCallable)
void UUWorksRequestCorePing::Activate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCorePing.Activate");

	UUWorksRequestCorePing_Activate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C93A0
//		Name   -> Function UWorksCore.UWorksRequestCorePlayers.SetInput
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     IP                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Port                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCorePlayers::SetInput(const struct FString& IP, int Port)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCorePlayers.SetInput");

	UUWorksRequestCorePlayers_SetInput_Params params {};
	params.IP = IP;
	params.Port = Port;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C4550
//		Name   -> Function UWorksCore.UWorksRequestCorePlayers.IsActive
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksRequestCorePlayers::IsActive()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCorePlayers.IsActive");

	UUWorksRequestCorePlayers_IsActive_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002C8F90
//		Name   -> Function UWorksCore.UWorksRequestCorePlayers.GetOutput
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FUWorksPlayerInfo                           UpdatedPlayer                                              (Parm, OutParm, NativeAccessSpecifierPublic)
//		TArray<struct FUWorksPlayerInfo>                   Players                                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UUWorksRequestCorePlayers::GetOutput(struct FUWorksPlayerInfo* UpdatedPlayer, TArray<struct FUWorksPlayerInfo>* Players)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCorePlayers.GetOutput");

	UUWorksRequestCorePlayers_GetOutput_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (UpdatedPlayer != nullptr)
		*UpdatedPlayer = params.UpdatedPlayer;
	if (Players != nullptr)
		*Players = params.Players;

}


// Function:
//		Offset -> 0x002C4360
//		Name   -> Function UWorksCore.UWorksRequestCorePlayers.Deactivate
//		Flags  -> (Native, Public, BlueprintCallable)
void UUWorksRequestCorePlayers::Deactivate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCorePlayers.Deactivate");

	UUWorksRequestCorePlayers_Deactivate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C4340
//		Name   -> Function UWorksCore.UWorksRequestCorePlayers.Activate
//		Flags  -> (Native, Public, BlueprintCallable)
void UUWorksRequestCorePlayers::Activate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCorePlayers.Activate");

	UUWorksRequestCorePlayers_Activate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C93A0
//		Name   -> Function UWorksCore.UWorksRequestCoreRules.SetInput
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     IP                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Port                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreRules::SetInput(const struct FString& IP, int Port)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRules.SetInput");

	UUWorksRequestCoreRules_SetInput_Params params {};
	params.IP = IP;
	params.Port = Port;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C4550
//		Name   -> Function UWorksCore.UWorksRequestCoreRules.IsActive
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksRequestCoreRules::IsActive()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRules.IsActive");

	UUWorksRequestCoreRules_IsActive_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002C90D0
//		Name   -> Function UWorksCore.UWorksRequestCoreRules.GetOutput
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FUWorksRuleInfo                             UpdatedRule                                                (Parm, OutParm, NativeAccessSpecifierPublic)
//		TArray<struct FUWorksRuleInfo>                     Rules                                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UUWorksRequestCoreRules::GetOutput(struct FUWorksRuleInfo* UpdatedRule, TArray<struct FUWorksRuleInfo>* Rules)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRules.GetOutput");

	UUWorksRequestCoreRules_GetOutput_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (UpdatedRule != nullptr)
		*UpdatedRule = params.UpdatedRule;
	if (Rules != nullptr)
		*Rules = params.Rules;

}


// Function:
//		Offset -> 0x002C4360
//		Name   -> Function UWorksCore.UWorksRequestCoreRules.Deactivate
//		Flags  -> (Native, Public, BlueprintCallable)
void UUWorksRequestCoreRules::Deactivate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRules.Deactivate");

	UUWorksRequestCoreRules_Deactivate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C4340
//		Name   -> Function UWorksCore.UWorksRequestCoreRules.Activate
//		Flags  -> (Native, Public, BlueprintCallable)
void UUWorksRequestCoreRules::Activate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRules.Activate");

	UUWorksRequestCoreRules_Activate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C9CF0
//		Name   -> Function UWorksCore.UWorksRequestCoreFileWriteAsync.SetInput
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<unsigned char>                              Buffer                                                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
void UUWorksRequestCoreFileWriteAsync::SetInput(const struct FString& File, TArray<unsigned char> Buffer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreFileWriteAsync.SetInput");

	UUWorksRequestCoreFileWriteAsync_SetInput_Params params {};
	params.File = File;
	params.Buffer = Buffer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C4550
//		Name   -> Function UWorksCore.UWorksRequestCoreFileWriteAsync.IsActive
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksRequestCoreFileWriteAsync::IsActive()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreFileWriteAsync.IsActive");

	UUWorksRequestCoreFileWriteAsync_IsActive_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002C9B10
//		Name   -> Function UWorksCore.UWorksRequestCoreFileWriteAsync.GetOutput
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		UWorksCore_EUWorksResult                           Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreFileWriteAsync::GetOutput(UWorksCore_EUWorksResult* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreFileWriteAsync.GetOutput");

	UUWorksRequestCoreFileWriteAsync_GetOutput_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


// Function:
//		Offset -> 0x002C4360
//		Name   -> Function UWorksCore.UWorksRequestCoreFileWriteAsync.Deactivate
//		Flags  -> (Native, Public, BlueprintCallable)
void UUWorksRequestCoreFileWriteAsync::Deactivate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreFileWriteAsync.Deactivate");

	UUWorksRequestCoreFileWriteAsync_Deactivate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C4340
//		Name   -> Function UWorksCore.UWorksRequestCoreFileWriteAsync.Activate
//		Flags  -> (Native, Public, BlueprintCallable)
void UUWorksRequestCoreFileWriteAsync::Activate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreFileWriteAsync.Activate");

	UUWorksRequestCoreFileWriteAsync_Activate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C9BA0
//		Name   -> Function UWorksCore.UWorksRequestCoreFileReadAsync.SetInput
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Offset                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                BytesToRead                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreFileReadAsync::SetInput(const struct FString& File, int Offset, int BytesToRead)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreFileReadAsync.SetInput");

	UUWorksRequestCoreFileReadAsync_SetInput_Params params {};
	params.File = File;
	params.Offset = Offset;
	params.BytesToRead = BytesToRead;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C4550
//		Name   -> Function UWorksCore.UWorksRequestCoreFileReadAsync.IsActive
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksRequestCoreFileReadAsync::IsActive()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreFileReadAsync.IsActive");

	UUWorksRequestCoreFileReadAsync_IsActive_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002C99C0
//		Name   -> Function UWorksCore.UWorksRequestCoreFileReadAsync.GetOutput
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		UWorksCore_EUWorksResult                           Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Offset                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<unsigned char>                              Buffer                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UUWorksRequestCoreFileReadAsync::GetOutput(UWorksCore_EUWorksResult* Result, int* Offset, TArray<unsigned char>* Buffer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreFileReadAsync.GetOutput");

	UUWorksRequestCoreFileReadAsync_GetOutput_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (Offset != nullptr)
		*Offset = params.Offset;
	if (Buffer != nullptr)
		*Buffer = params.Buffer;

}


// Function:
//		Offset -> 0x002C4360
//		Name   -> Function UWorksCore.UWorksRequestCoreFileReadAsync.Deactivate
//		Flags  -> (Native, Public, BlueprintCallable)
void UUWorksRequestCoreFileReadAsync::Deactivate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreFileReadAsync.Deactivate");

	UUWorksRequestCoreFileReadAsync_Deactivate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C4340
//		Name   -> Function UWorksCore.UWorksRequestCoreFileReadAsync.Activate
//		Flags  -> (Native, Public, BlueprintCallable)
void UUWorksRequestCoreFileReadAsync::Activate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreFileReadAsync.Activate");

	UUWorksRequestCoreFileReadAsync_Activate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002CC140
//		Name   -> Function UWorksCore.UWorksRequestCoreSendQueryUGCRequest.SetInput
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksUGCQueryHandle                       UGCQueryHandle                                             (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksRequestCoreSendQueryUGCRequest::SetInput(const struct FUWorksUGCQueryHandle& UGCQueryHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreSendQueryUGCRequest.SetInput");

	UUWorksRequestCoreSendQueryUGCRequest_SetInput_Params params {};
	params.UGCQueryHandle = UGCQueryHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C4550
//		Name   -> Function UWorksCore.UWorksRequestCoreSendQueryUGCRequest.IsActive
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksRequestCoreSendQueryUGCRequest::IsActive()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreSendQueryUGCRequest.IsActive");

	UUWorksRequestCoreSendQueryUGCRequest_IsActive_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002CBC50
//		Name   -> Function UWorksCore.UWorksRequestCoreSendQueryUGCRequest.GetOutput
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FUWorksUGCQueryHandle                       UGCQueryHandle                                             (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
//		UWorksCore_EUWorksResult                           Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                NumResultsReturned                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                TotalMatchingResults                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bCachedData                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreSendQueryUGCRequest::GetOutput(struct FUWorksUGCQueryHandle* UGCQueryHandle, UWorksCore_EUWorksResult* Result, int* NumResultsReturned, int* TotalMatchingResults, bool* bCachedData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreSendQueryUGCRequest.GetOutput");

	UUWorksRequestCoreSendQueryUGCRequest_GetOutput_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (UGCQueryHandle != nullptr)
		*UGCQueryHandle = params.UGCQueryHandle;
	if (Result != nullptr)
		*Result = params.Result;
	if (NumResultsReturned != nullptr)
		*NumResultsReturned = params.NumResultsReturned;
	if (TotalMatchingResults != nullptr)
		*TotalMatchingResults = params.TotalMatchingResults;
	if (bCachedData != nullptr)
		*bCachedData = params.bCachedData;

}


// Function:
//		Offset -> 0x002C4360
//		Name   -> Function UWorksCore.UWorksRequestCoreSendQueryUGCRequest.Deactivate
//		Flags  -> (Native, Public, BlueprintCallable)
void UUWorksRequestCoreSendQueryUGCRequest::Deactivate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreSendQueryUGCRequest.Deactivate");

	UUWorksRequestCoreSendQueryUGCRequest_Deactivate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C4340
//		Name   -> Function UWorksCore.UWorksRequestCoreSendQueryUGCRequest.Activate
//		Flags  -> (Native, Public, BlueprintCallable)
void UUWorksRequestCoreSendQueryUGCRequest::Activate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreSendQueryUGCRequest.Activate");

	UUWorksRequestCoreSendQueryUGCRequest_Activate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002CC080
//		Name   -> Function UWorksCore.UWorksRequestCoreCreateItem.SetInput
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                ConsumerAppID                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		UWorksCore_EUWorksWorkshopFileType                 FileType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreCreateItem::SetInput(int ConsumerAppID, UWorksCore_EUWorksWorkshopFileType FileType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreCreateItem.SetInput");

	UUWorksRequestCoreCreateItem_SetInput_Params params {};
	params.ConsumerAppID = ConsumerAppID;
	params.FileType = FileType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C4550
//		Name   -> Function UWorksCore.UWorksRequestCoreCreateItem.IsActive
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksRequestCoreCreateItem::IsActive()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreCreateItem.IsActive");

	UUWorksRequestCoreCreateItem_IsActive_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002CB910
//		Name   -> Function UWorksCore.UWorksRequestCoreCreateItem.GetOutput
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		UWorksCore_EUWorksResult                           Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUWorksPublishedFileID                      PublishedFileID                                            (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               bUserNeedsToAcceptWorkshopLegalAgreement                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreCreateItem::GetOutput(UWorksCore_EUWorksResult* Result, struct FUWorksPublishedFileID* PublishedFileID, bool* bUserNeedsToAcceptWorkshopLegalAgreement)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreCreateItem.GetOutput");

	UUWorksRequestCoreCreateItem_GetOutput_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (PublishedFileID != nullptr)
		*PublishedFileID = params.PublishedFileID;
	if (bUserNeedsToAcceptWorkshopLegalAgreement != nullptr)
		*bUserNeedsToAcceptWorkshopLegalAgreement = params.bUserNeedsToAcceptWorkshopLegalAgreement;

}


// Function:
//		Offset -> 0x002C4360
//		Name   -> Function UWorksCore.UWorksRequestCoreCreateItem.Deactivate
//		Flags  -> (Native, Public, BlueprintCallable)
void UUWorksRequestCoreCreateItem::Deactivate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreCreateItem.Deactivate");

	UUWorksRequestCoreCreateItem_Deactivate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C4340
//		Name   -> Function UWorksCore.UWorksRequestCoreCreateItem.Activate
//		Flags  -> (Native, Public, BlueprintCallable)
void UUWorksRequestCoreCreateItem::Activate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreCreateItem.Activate");

	UUWorksRequestCoreCreateItem_Activate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002CC290
//		Name   -> Function UWorksCore.UWorksRequestCoreSubmitItemUpdate.SetInput
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksUGCUpdateHandle                      UGCUpdateHandle                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FString                                     ChangeNote                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreSubmitItemUpdate::SetInput(const struct FUWorksUGCUpdateHandle& UGCUpdateHandle, const struct FString& ChangeNote)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreSubmitItemUpdate.SetInput");

	UUWorksRequestCoreSubmitItemUpdate_SetInput_Params params {};
	params.UGCUpdateHandle = UGCUpdateHandle;
	params.ChangeNote = ChangeNote;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C4550
//		Name   -> Function UWorksCore.UWorksRequestCoreSubmitItemUpdate.IsActive
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksRequestCoreSubmitItemUpdate::IsActive()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreSubmitItemUpdate.IsActive");

	UUWorksRequestCoreSubmitItemUpdate_IsActive_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002CBEE0
//		Name   -> Function UWorksCore.UWorksRequestCoreSubmitItemUpdate.GetOutput
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		UWorksCore_EUWorksResult                           Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bUserNeedsToAcceptWorkshopLegalAgreement                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreSubmitItemUpdate::GetOutput(UWorksCore_EUWorksResult* Result, bool* bUserNeedsToAcceptWorkshopLegalAgreement)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreSubmitItemUpdate.GetOutput");

	UUWorksRequestCoreSubmitItemUpdate_GetOutput_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (bUserNeedsToAcceptWorkshopLegalAgreement != nullptr)
		*bUserNeedsToAcceptWorkshopLegalAgreement = params.bUserNeedsToAcceptWorkshopLegalAgreement;

}


// Function:
//		Offset -> 0x002C4360
//		Name   -> Function UWorksCore.UWorksRequestCoreSubmitItemUpdate.Deactivate
//		Flags  -> (Native, Public, BlueprintCallable)
void UUWorksRequestCoreSubmitItemUpdate::Deactivate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreSubmitItemUpdate.Deactivate");

	UUWorksRequestCoreSubmitItemUpdate_Deactivate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C4340
//		Name   -> Function UWorksCore.UWorksRequestCoreSubmitItemUpdate.Activate
//		Flags  -> (Native, Public, BlueprintCallable)
void UUWorksRequestCoreSubmitItemUpdate::Activate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreSubmitItemUpdate.Activate");

	UUWorksRequestCoreSubmitItemUpdate_Activate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002CC1C0
//		Name   -> Function UWorksCore.UWorksRequestCoreSetUserItemVote.SetInput
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksPublishedFileID                      PublishedFileID                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               bVoteUp                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreSetUserItemVote::SetInput(const struct FUWorksPublishedFileID& PublishedFileID, bool bVoteUp)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreSetUserItemVote.SetInput");

	UUWorksRequestCoreSetUserItemVote_SetInput_Params params {};
	params.PublishedFileID = PublishedFileID;
	params.bVoteUp = bVoteUp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C4550
//		Name   -> Function UWorksCore.UWorksRequestCoreSetUserItemVote.IsActive
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksRequestCoreSetUserItemVote::IsActive()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreSetUserItemVote.IsActive");

	UUWorksRequestCoreSetUserItemVote_IsActive_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002CB7D0
//		Name   -> Function UWorksCore.UWorksRequestCoreSetUserItemVote.GetOutput
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FUWorksPublishedFileID                      PublishedFileID                                            (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
//		UWorksCore_EUWorksResult                           Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bVoteUp                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreSetUserItemVote::GetOutput(struct FUWorksPublishedFileID* PublishedFileID, UWorksCore_EUWorksResult* Result, bool* bVoteUp)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreSetUserItemVote.GetOutput");

	UUWorksRequestCoreSetUserItemVote_GetOutput_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PublishedFileID != nullptr)
		*PublishedFileID = params.PublishedFileID;
	if (Result != nullptr)
		*Result = params.Result;
	if (bVoteUp != nullptr)
		*bVoteUp = params.bVoteUp;

}


// Function:
//		Offset -> 0x002C4360
//		Name   -> Function UWorksCore.UWorksRequestCoreSetUserItemVote.Deactivate
//		Flags  -> (Native, Public, BlueprintCallable)
void UUWorksRequestCoreSetUserItemVote::Deactivate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreSetUserItemVote.Deactivate");

	UUWorksRequestCoreSetUserItemVote_Deactivate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C4340
//		Name   -> Function UWorksCore.UWorksRequestCoreSetUserItemVote.Activate
//		Flags  -> (Native, Public, BlueprintCallable)
void UUWorksRequestCoreSetUserItemVote::Activate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreSetUserItemVote.Activate");

	UUWorksRequestCoreSetUserItemVote_Activate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C5EC0
//		Name   -> Function UWorksCore.UWorksRequestCoreGetUserItemVote.SetInput
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksPublishedFileID                      PublishedFileID                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksRequestCoreGetUserItemVote::SetInput(const struct FUWorksPublishedFileID& PublishedFileID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreGetUserItemVote.SetInput");

	UUWorksRequestCoreGetUserItemVote_SetInput_Params params {};
	params.PublishedFileID = PublishedFileID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C4550
//		Name   -> Function UWorksCore.UWorksRequestCoreGetUserItemVote.IsActive
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksRequestCoreGetUserItemVote::IsActive()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreGetUserItemVote.IsActive");

	UUWorksRequestCoreGetUserItemVote_IsActive_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002CBA50
//		Name   -> Function UWorksCore.UWorksRequestCoreGetUserItemVote.GetOutput
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FUWorksPublishedFileID                      PublishedFileID                                            (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
//		UWorksCore_EUWorksResult                           Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bVotedUp                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bVotedDown                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bVoteSkipped                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreGetUserItemVote::GetOutput(struct FUWorksPublishedFileID* PublishedFileID, UWorksCore_EUWorksResult* Result, bool* bVotedUp, bool* bVotedDown, bool* bVoteSkipped)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreGetUserItemVote.GetOutput");

	UUWorksRequestCoreGetUserItemVote_GetOutput_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PublishedFileID != nullptr)
		*PublishedFileID = params.PublishedFileID;
	if (Result != nullptr)
		*Result = params.Result;
	if (bVotedUp != nullptr)
		*bVotedUp = params.bVotedUp;
	if (bVotedDown != nullptr)
		*bVotedDown = params.bVotedDown;
	if (bVoteSkipped != nullptr)
		*bVoteSkipped = params.bVoteSkipped;

}


// Function:
//		Offset -> 0x002C4360
//		Name   -> Function UWorksCore.UWorksRequestCoreGetUserItemVote.Deactivate
//		Flags  -> (Native, Public, BlueprintCallable)
void UUWorksRequestCoreGetUserItemVote::Deactivate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreGetUserItemVote.Deactivate");

	UUWorksRequestCoreGetUserItemVote_Deactivate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C4340
//		Name   -> Function UWorksCore.UWorksRequestCoreGetUserItemVote.Activate
//		Flags  -> (Native, Public, BlueprintCallable)
void UUWorksRequestCoreGetUserItemVote::Activate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreGetUserItemVote.Activate");

	UUWorksRequestCoreGetUserItemVote_Activate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002CBFC0
//		Name   -> Function UWorksCore.UWorksRequestCoreAddItemToFavorites.SetInput
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUWorksPublishedFileID                      PublishedFileID                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksRequestCoreAddItemToFavorites::SetInput(int AppID, const struct FUWorksPublishedFileID& PublishedFileID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreAddItemToFavorites.SetInput");

	UUWorksRequestCoreAddItemToFavorites_SetInput_Params params {};
	params.AppID = AppID;
	params.PublishedFileID = PublishedFileID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C4550
//		Name   -> Function UWorksCore.UWorksRequestCoreAddItemToFavorites.IsActive
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksRequestCoreAddItemToFavorites::IsActive()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreAddItemToFavorites.IsActive");

	UUWorksRequestCoreAddItemToFavorites_IsActive_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002CB7D0
//		Name   -> Function UWorksCore.UWorksRequestCoreAddItemToFavorites.GetOutput
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FUWorksPublishedFileID                      PublishedFileID                                            (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
//		UWorksCore_EUWorksResult                           Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bWasAddRequest                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreAddItemToFavorites::GetOutput(struct FUWorksPublishedFileID* PublishedFileID, UWorksCore_EUWorksResult* Result, bool* bWasAddRequest)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreAddItemToFavorites.GetOutput");

	UUWorksRequestCoreAddItemToFavorites_GetOutput_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PublishedFileID != nullptr)
		*PublishedFileID = params.PublishedFileID;
	if (Result != nullptr)
		*Result = params.Result;
	if (bWasAddRequest != nullptr)
		*bWasAddRequest = params.bWasAddRequest;

}


// Function:
//		Offset -> 0x002C4360
//		Name   -> Function UWorksCore.UWorksRequestCoreAddItemToFavorites.Deactivate
//		Flags  -> (Native, Public, BlueprintCallable)
void UUWorksRequestCoreAddItemToFavorites::Deactivate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreAddItemToFavorites.Deactivate");

	UUWorksRequestCoreAddItemToFavorites_Deactivate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C4340
//		Name   -> Function UWorksCore.UWorksRequestCoreAddItemToFavorites.Activate
//		Flags  -> (Native, Public, BlueprintCallable)
void UUWorksRequestCoreAddItemToFavorites::Activate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreAddItemToFavorites.Activate");

	UUWorksRequestCoreAddItemToFavorites_Activate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002CBFC0
//		Name   -> Function UWorksCore.UWorksRequestCoreRemoveItemFromFavorites.SetInput
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUWorksPublishedFileID                      PublishedFileID                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksRequestCoreRemoveItemFromFavorites::SetInput(int AppID, const struct FUWorksPublishedFileID& PublishedFileID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRemoveItemFromFavorites.SetInput");

	UUWorksRequestCoreRemoveItemFromFavorites_SetInput_Params params {};
	params.AppID = AppID;
	params.PublishedFileID = PublishedFileID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C4550
//		Name   -> Function UWorksCore.UWorksRequestCoreRemoveItemFromFavorites.IsActive
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksRequestCoreRemoveItemFromFavorites::IsActive()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRemoveItemFromFavorites.IsActive");

	UUWorksRequestCoreRemoveItemFromFavorites_IsActive_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002CB7D0
//		Name   -> Function UWorksCore.UWorksRequestCoreRemoveItemFromFavorites.GetOutput
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FUWorksPublishedFileID                      PublishedFileID                                            (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
//		UWorksCore_EUWorksResult                           Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bWasAddRequest                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreRemoveItemFromFavorites::GetOutput(struct FUWorksPublishedFileID* PublishedFileID, UWorksCore_EUWorksResult* Result, bool* bWasAddRequest)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRemoveItemFromFavorites.GetOutput");

	UUWorksRequestCoreRemoveItemFromFavorites_GetOutput_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PublishedFileID != nullptr)
		*PublishedFileID = params.PublishedFileID;
	if (Result != nullptr)
		*Result = params.Result;
	if (bWasAddRequest != nullptr)
		*bWasAddRequest = params.bWasAddRequest;

}


// Function:
//		Offset -> 0x002C4360
//		Name   -> Function UWorksCore.UWorksRequestCoreRemoveItemFromFavorites.Deactivate
//		Flags  -> (Native, Public, BlueprintCallable)
void UUWorksRequestCoreRemoveItemFromFavorites::Deactivate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRemoveItemFromFavorites.Deactivate");

	UUWorksRequestCoreRemoveItemFromFavorites_Deactivate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C4340
//		Name   -> Function UWorksCore.UWorksRequestCoreRemoveItemFromFavorites.Activate
//		Flags  -> (Native, Public, BlueprintCallable)
void UUWorksRequestCoreRemoveItemFromFavorites::Activate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRemoveItemFromFavorites.Activate");

	UUWorksRequestCoreRemoveItemFromFavorites_Activate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C5EC0
//		Name   -> Function UWorksCore.UWorksRequestCoreSubscribeItem.SetInput
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksPublishedFileID                      PublishedFileID                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksRequestCoreSubscribeItem::SetInput(const struct FUWorksPublishedFileID& PublishedFileID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreSubscribeItem.SetInput");

	UUWorksRequestCoreSubscribeItem_SetInput_Params params {};
	params.PublishedFileID = PublishedFileID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C4550
//		Name   -> Function UWorksCore.UWorksRequestCoreSubscribeItem.IsActive
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksRequestCoreSubscribeItem::IsActive()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreSubscribeItem.IsActive");

	UUWorksRequestCoreSubscribeItem_IsActive_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002C6A50
//		Name   -> Function UWorksCore.UWorksRequestCoreSubscribeItem.GetOutput
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		UWorksCore_EUWorksResult                           Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUWorksPublishedFileID                      PublishedFileID                                            (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksRequestCoreSubscribeItem::GetOutput(UWorksCore_EUWorksResult* Result, struct FUWorksPublishedFileID* PublishedFileID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreSubscribeItem.GetOutput");

	UUWorksRequestCoreSubscribeItem_GetOutput_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (PublishedFileID != nullptr)
		*PublishedFileID = params.PublishedFileID;

}


// Function:
//		Offset -> 0x002C4360
//		Name   -> Function UWorksCore.UWorksRequestCoreSubscribeItem.Deactivate
//		Flags  -> (Native, Public, BlueprintCallable)
void UUWorksRequestCoreSubscribeItem::Deactivate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreSubscribeItem.Deactivate");

	UUWorksRequestCoreSubscribeItem_Deactivate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C4340
//		Name   -> Function UWorksCore.UWorksRequestCoreSubscribeItem.Activate
//		Flags  -> (Native, Public, BlueprintCallable)
void UUWorksRequestCoreSubscribeItem::Activate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreSubscribeItem.Activate");

	UUWorksRequestCoreSubscribeItem_Activate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C5EC0
//		Name   -> Function UWorksCore.UWorksRequestCoreUnsubscribeItem.SetInput
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksPublishedFileID                      PublishedFileID                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksRequestCoreUnsubscribeItem::SetInput(const struct FUWorksPublishedFileID& PublishedFileID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreUnsubscribeItem.SetInput");

	UUWorksRequestCoreUnsubscribeItem_SetInput_Params params {};
	params.PublishedFileID = PublishedFileID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C4550
//		Name   -> Function UWorksCore.UWorksRequestCoreUnsubscribeItem.IsActive
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksRequestCoreUnsubscribeItem::IsActive()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreUnsubscribeItem.IsActive");

	UUWorksRequestCoreUnsubscribeItem_IsActive_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002C6A50
//		Name   -> Function UWorksCore.UWorksRequestCoreUnsubscribeItem.GetOutput
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		UWorksCore_EUWorksResult                           Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUWorksPublishedFileID                      PublishedFileID                                            (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksRequestCoreUnsubscribeItem::GetOutput(UWorksCore_EUWorksResult* Result, struct FUWorksPublishedFileID* PublishedFileID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreUnsubscribeItem.GetOutput");

	UUWorksRequestCoreUnsubscribeItem_GetOutput_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (PublishedFileID != nullptr)
		*PublishedFileID = params.PublishedFileID;

}


// Function:
//		Offset -> 0x002C4360
//		Name   -> Function UWorksCore.UWorksRequestCoreUnsubscribeItem.Deactivate
//		Flags  -> (Native, Public, BlueprintCallable)
void UUWorksRequestCoreUnsubscribeItem::Deactivate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreUnsubscribeItem.Deactivate");

	UUWorksRequestCoreUnsubscribeItem_Deactivate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C4340
//		Name   -> Function UWorksCore.UWorksRequestCoreUnsubscribeItem.Activate
//		Flags  -> (Native, Public, BlueprintCallable)
void UUWorksRequestCoreUnsubscribeItem::Activate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreUnsubscribeItem.Activate");

	UUWorksRequestCoreUnsubscribeItem_Activate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C5D60
//		Name   -> Function UWorksCore.UWorksRequestCoreStartPlaytimeTracking.SetInput
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TArray<struct FUWorksPublishedFileID>              PublishedFileID                                            (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
void UUWorksRequestCoreStartPlaytimeTracking::SetInput(TArray<struct FUWorksPublishedFileID> PublishedFileID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreStartPlaytimeTracking.SetInput");

	UUWorksRequestCoreStartPlaytimeTracking_SetInput_Params params {};
	params.PublishedFileID = PublishedFileID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C4550
//		Name   -> Function UWorksCore.UWorksRequestCoreStartPlaytimeTracking.IsActive
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksRequestCoreStartPlaytimeTracking::IsActive()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreStartPlaytimeTracking.IsActive");

	UUWorksRequestCoreStartPlaytimeTracking_IsActive_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002C5540
//		Name   -> Function UWorksCore.UWorksRequestCoreStartPlaytimeTracking.GetOutput
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		UWorksCore_EUWorksResult                           Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreStartPlaytimeTracking::GetOutput(UWorksCore_EUWorksResult* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreStartPlaytimeTracking.GetOutput");

	UUWorksRequestCoreStartPlaytimeTracking_GetOutput_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


// Function:
//		Offset -> 0x002C4360
//		Name   -> Function UWorksCore.UWorksRequestCoreStartPlaytimeTracking.Deactivate
//		Flags  -> (Native, Public, BlueprintCallable)
void UUWorksRequestCoreStartPlaytimeTracking::Deactivate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreStartPlaytimeTracking.Deactivate");

	UUWorksRequestCoreStartPlaytimeTracking_Deactivate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C4340
//		Name   -> Function UWorksCore.UWorksRequestCoreStartPlaytimeTracking.Activate
//		Flags  -> (Native, Public, BlueprintCallable)
void UUWorksRequestCoreStartPlaytimeTracking::Activate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreStartPlaytimeTracking.Activate");

	UUWorksRequestCoreStartPlaytimeTracking_Activate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C5D60
//		Name   -> Function UWorksCore.UWorksRequestCoreStopPlaytimeTracking.SetInput
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TArray<struct FUWorksPublishedFileID>              PublishedFileIDs                                           (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
void UUWorksRequestCoreStopPlaytimeTracking::SetInput(TArray<struct FUWorksPublishedFileID> PublishedFileIDs)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreStopPlaytimeTracking.SetInput");

	UUWorksRequestCoreStopPlaytimeTracking_SetInput_Params params {};
	params.PublishedFileIDs = PublishedFileIDs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C4550
//		Name   -> Function UWorksCore.UWorksRequestCoreStopPlaytimeTracking.IsActive
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksRequestCoreStopPlaytimeTracking::IsActive()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreStopPlaytimeTracking.IsActive");

	UUWorksRequestCoreStopPlaytimeTracking_IsActive_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002C5540
//		Name   -> Function UWorksCore.UWorksRequestCoreStopPlaytimeTracking.GetOutput
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		UWorksCore_EUWorksResult                           Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreStopPlaytimeTracking::GetOutput(UWorksCore_EUWorksResult* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreStopPlaytimeTracking.GetOutput");

	UUWorksRequestCoreStopPlaytimeTracking_GetOutput_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


// Function:
//		Offset -> 0x002C4360
//		Name   -> Function UWorksCore.UWorksRequestCoreStopPlaytimeTracking.Deactivate
//		Flags  -> (Native, Public, BlueprintCallable)
void UUWorksRequestCoreStopPlaytimeTracking::Deactivate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreStopPlaytimeTracking.Deactivate");

	UUWorksRequestCoreStopPlaytimeTracking_Deactivate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C4340
//		Name   -> Function UWorksCore.UWorksRequestCoreStopPlaytimeTracking.Activate
//		Flags  -> (Native, Public, BlueprintCallable)
void UUWorksRequestCoreStopPlaytimeTracking::Activate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreStopPlaytimeTracking.Activate");

	UUWorksRequestCoreStopPlaytimeTracking_Activate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C4550
//		Name   -> Function UWorksCore.UWorksRequestCoreStopPlaytimeTrackingForAllItems.IsActive
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksRequestCoreStopPlaytimeTrackingForAllItems::IsActive()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreStopPlaytimeTrackingForAllItems.IsActive");

	UUWorksRequestCoreStopPlaytimeTrackingForAllItems_IsActive_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002CBE50
//		Name   -> Function UWorksCore.UWorksRequestCoreStopPlaytimeTrackingForAllItems.GetOutput
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		UWorksCore_EUWorksResult                           Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreStopPlaytimeTrackingForAllItems::GetOutput(UWorksCore_EUWorksResult* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreStopPlaytimeTrackingForAllItems.GetOutput");

	UUWorksRequestCoreStopPlaytimeTrackingForAllItems_GetOutput_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


// Function:
//		Offset -> 0x002C4360
//		Name   -> Function UWorksCore.UWorksRequestCoreStopPlaytimeTrackingForAllItems.Deactivate
//		Flags  -> (Native, Public, BlueprintCallable)
void UUWorksRequestCoreStopPlaytimeTrackingForAllItems::Deactivate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreStopPlaytimeTrackingForAllItems.Deactivate");

	UUWorksRequestCoreStopPlaytimeTrackingForAllItems_Deactivate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C4340
//		Name   -> Function UWorksCore.UWorksRequestCoreStopPlaytimeTrackingForAllItems.Activate
//		Flags  -> (Native, Public, BlueprintCallable)
void UUWorksRequestCoreStopPlaytimeTrackingForAllItems::Activate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreStopPlaytimeTrackingForAllItems.Activate");

	UUWorksRequestCoreStopPlaytimeTrackingForAllItems_Activate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002CC8B0
//		Name   -> Function UWorksCore.UWorksRequestCoreRequestEncryptedAppTicket.SetInput
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TArray<unsigned char>                              Buffer                                                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
void UUWorksRequestCoreRequestEncryptedAppTicket::SetInput(TArray<unsigned char> Buffer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestEncryptedAppTicket.SetInput");

	UUWorksRequestCoreRequestEncryptedAppTicket_SetInput_Params params {};
	params.Buffer = Buffer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C4550
//		Name   -> Function UWorksCore.UWorksRequestCoreRequestEncryptedAppTicket.IsActive
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksRequestCoreRequestEncryptedAppTicket::IsActive()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestEncryptedAppTicket.IsActive");

	UUWorksRequestCoreRequestEncryptedAppTicket_IsActive_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002C5540
//		Name   -> Function UWorksCore.UWorksRequestCoreRequestEncryptedAppTicket.GetOutput
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		UWorksCore_EUWorksResult                           Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreRequestEncryptedAppTicket::GetOutput(UWorksCore_EUWorksResult* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestEncryptedAppTicket.GetOutput");

	UUWorksRequestCoreRequestEncryptedAppTicket_GetOutput_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


// Function:
//		Offset -> 0x002C4360
//		Name   -> Function UWorksCore.UWorksRequestCoreRequestEncryptedAppTicket.Deactivate
//		Flags  -> (Native, Public, BlueprintCallable)
void UUWorksRequestCoreRequestEncryptedAppTicket::Deactivate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestEncryptedAppTicket.Deactivate");

	UUWorksRequestCoreRequestEncryptedAppTicket_Deactivate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C4340
//		Name   -> Function UWorksCore.UWorksRequestCoreRequestEncryptedAppTicket.Activate
//		Flags  -> (Native, Public, BlueprintCallable)
void UUWorksRequestCoreRequestEncryptedAppTicket::Activate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestEncryptedAppTicket.Activate");

	UUWorksRequestCoreRequestEncryptedAppTicket_Activate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C4580
//		Name   -> Function UWorksCore.UWorksRequestCoreRequestStoreAuthURL.SetInput
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     URL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreRequestStoreAuthURL::SetInput(const struct FString& URL)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestStoreAuthURL.SetInput");

	UUWorksRequestCoreRequestStoreAuthURL_SetInput_Params params {};
	params.URL = URL;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C4550
//		Name   -> Function UWorksCore.UWorksRequestCoreRequestStoreAuthURL.IsActive
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksRequestCoreRequestStoreAuthURL::IsActive()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestStoreAuthURL.IsActive");

	UUWorksRequestCoreRequestStoreAuthURL_IsActive_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002CC800
//		Name   -> Function UWorksCore.UWorksRequestCoreRequestStoreAuthURL.GetOutput
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     URL                                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreRequestStoreAuthURL::GetOutput(struct FString* URL)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestStoreAuthURL.GetOutput");

	UUWorksRequestCoreRequestStoreAuthURL_GetOutput_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (URL != nullptr)
		*URL = params.URL;

}


// Function:
//		Offset -> 0x002C4360
//		Name   -> Function UWorksCore.UWorksRequestCoreRequestStoreAuthURL.Deactivate
//		Flags  -> (Native, Public, BlueprintCallable)
void UUWorksRequestCoreRequestStoreAuthURL::Deactivate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestStoreAuthURL.Deactivate");

	UUWorksRequestCoreRequestStoreAuthURL_Deactivate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C4340
//		Name   -> Function UWorksCore.UWorksRequestCoreRequestStoreAuthURL.Activate
//		Flags  -> (Native, Public, BlueprintCallable)
void UUWorksRequestCoreRequestStoreAuthURL::Activate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestStoreAuthURL.Activate");

	UUWorksRequestCoreRequestStoreAuthURL_Activate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C5EC0
//		Name   -> Function UWorksCore.UWorksRequestCoreRequestUserStats.SetInput
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamID                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksRequestCoreRequestUserStats::SetInput(const struct FUWorksSteamID& SteamID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestUserStats.SetInput");

	UUWorksRequestCoreRequestUserStats_SetInput_Params params {};
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C4550
//		Name   -> Function UWorksCore.UWorksRequestCoreRequestUserStats.IsActive
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksRequestCoreRequestUserStats::IsActive()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestUserStats.IsActive");

	UUWorksRequestCoreRequestUserStats_IsActive_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002CE410
//		Name   -> Function UWorksCore.UWorksRequestCoreRequestUserStats.GetOutput
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FUWorksGameID                               GameID                                                     (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
//		UWorksCore_EUWorksResult                           Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUWorksSteamID                              SteamID                                                    (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksRequestCoreRequestUserStats::GetOutput(struct FUWorksGameID* GameID, UWorksCore_EUWorksResult* Result, struct FUWorksSteamID* SteamID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestUserStats.GetOutput");

	UUWorksRequestCoreRequestUserStats_GetOutput_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (GameID != nullptr)
		*GameID = params.GameID;
	if (Result != nullptr)
		*Result = params.Result;
	if (SteamID != nullptr)
		*SteamID = params.SteamID;

}


// Function:
//		Offset -> 0x002C4360
//		Name   -> Function UWorksCore.UWorksRequestCoreRequestUserStats.Deactivate
//		Flags  -> (Native, Public, BlueprintCallable)
void UUWorksRequestCoreRequestUserStats::Deactivate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestUserStats.Deactivate");

	UUWorksRequestCoreRequestUserStats_Deactivate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C4340
//		Name   -> Function UWorksCore.UWorksRequestCoreRequestUserStats.Activate
//		Flags  -> (Native, Public, BlueprintCallable)
void UUWorksRequestCoreRequestUserStats::Activate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestUserStats.Activate");

	UUWorksRequestCoreRequestUserStats_Activate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002CEAC0
//		Name   -> Function UWorksCore.UWorksRequestCoreFindOrCreateLeaderboard.SetInput
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     LeaderboardName                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		UWorksCore_EUWorksLeaderboardSortMethod            LeaderboardSortMethod                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		UWorksCore_EUWorksLeaderboardDisplayType           LeaderboardDisplayType                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreFindOrCreateLeaderboard::SetInput(const struct FString& LeaderboardName, UWorksCore_EUWorksLeaderboardSortMethod LeaderboardSortMethod, UWorksCore_EUWorksLeaderboardDisplayType LeaderboardDisplayType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreFindOrCreateLeaderboard.SetInput");

	UUWorksRequestCoreFindOrCreateLeaderboard_SetInput_Params params {};
	params.LeaderboardName = LeaderboardName;
	params.LeaderboardSortMethod = LeaderboardSortMethod;
	params.LeaderboardDisplayType = LeaderboardDisplayType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C4550
//		Name   -> Function UWorksCore.UWorksRequestCoreFindOrCreateLeaderboard.IsActive
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksRequestCoreFindOrCreateLeaderboard::IsActive()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreFindOrCreateLeaderboard.IsActive");

	UUWorksRequestCoreFindOrCreateLeaderboard_IsActive_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002CE170
//		Name   -> Function UWorksCore.UWorksRequestCoreFindOrCreateLeaderboard.GetOutput
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FUWorksSteamLeaderboard                     SteamLeaderboard                                           (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               bLeaderboardFound                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreFindOrCreateLeaderboard::GetOutput(struct FUWorksSteamLeaderboard* SteamLeaderboard, bool* bLeaderboardFound)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreFindOrCreateLeaderboard.GetOutput");

	UUWorksRequestCoreFindOrCreateLeaderboard_GetOutput_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SteamLeaderboard != nullptr)
		*SteamLeaderboard = params.SteamLeaderboard;
	if (bLeaderboardFound != nullptr)
		*bLeaderboardFound = params.bLeaderboardFound;

}


// Function:
//		Offset -> 0x002C4360
//		Name   -> Function UWorksCore.UWorksRequestCoreFindOrCreateLeaderboard.Deactivate
//		Flags  -> (Native, Public, BlueprintCallable)
void UUWorksRequestCoreFindOrCreateLeaderboard::Deactivate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreFindOrCreateLeaderboard.Deactivate");

	UUWorksRequestCoreFindOrCreateLeaderboard_Deactivate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C4340
//		Name   -> Function UWorksCore.UWorksRequestCoreFindOrCreateLeaderboard.Activate
//		Flags  -> (Native, Public, BlueprintCallable)
void UUWorksRequestCoreFindOrCreateLeaderboard::Activate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreFindOrCreateLeaderboard.Activate");

	UUWorksRequestCoreFindOrCreateLeaderboard_Activate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C4580
//		Name   -> Function UWorksCore.UWorksRequestCoreFindLeaderboard.SetInput
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     LeaderboardName                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreFindLeaderboard::SetInput(const struct FString& LeaderboardName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreFindLeaderboard.SetInput");

	UUWorksRequestCoreFindLeaderboard_SetInput_Params params {};
	params.LeaderboardName = LeaderboardName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C4550
//		Name   -> Function UWorksCore.UWorksRequestCoreFindLeaderboard.IsActive
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksRequestCoreFindLeaderboard::IsActive()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreFindLeaderboard.IsActive");

	UUWorksRequestCoreFindLeaderboard_IsActive_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002CE090
//		Name   -> Function UWorksCore.UWorksRequestCoreFindLeaderboard.GetOutput
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FUWorksSteamLeaderboard                     SteamLeaderboard                                           (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               bLeaderboardFound                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreFindLeaderboard::GetOutput(struct FUWorksSteamLeaderboard* SteamLeaderboard, bool* bLeaderboardFound)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreFindLeaderboard.GetOutput");

	UUWorksRequestCoreFindLeaderboard_GetOutput_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SteamLeaderboard != nullptr)
		*SteamLeaderboard = params.SteamLeaderboard;
	if (bLeaderboardFound != nullptr)
		*bLeaderboardFound = params.bLeaderboardFound;

}


// Function:
//		Offset -> 0x002C4360
//		Name   -> Function UWorksCore.UWorksRequestCoreFindLeaderboard.Deactivate
//		Flags  -> (Native, Public, BlueprintCallable)
void UUWorksRequestCoreFindLeaderboard::Deactivate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreFindLeaderboard.Deactivate");

	UUWorksRequestCoreFindLeaderboard_Deactivate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C4340
//		Name   -> Function UWorksCore.UWorksRequestCoreFindLeaderboard.Activate
//		Flags  -> (Native, Public, BlueprintCallable)
void UUWorksRequestCoreFindLeaderboard::Activate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreFindLeaderboard.Activate");

	UUWorksRequestCoreFindLeaderboard_Activate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002CE840
//		Name   -> Function UWorksCore.UWorksRequestCoreDownloadLeaderboardEntries.SetInput
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamLeaderboard                     SteamLeaderboard                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		UWorksCore_EUWorksLeaderboardDataRequest           LeaderboardDataRequest                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                RangeStart                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                RangeEnd                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreDownloadLeaderboardEntries::SetInput(const struct FUWorksSteamLeaderboard& SteamLeaderboard, UWorksCore_EUWorksLeaderboardDataRequest LeaderboardDataRequest, int RangeStart, int RangeEnd)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreDownloadLeaderboardEntries.SetInput");

	UUWorksRequestCoreDownloadLeaderboardEntries_SetInput_Params params {};
	params.SteamLeaderboard = SteamLeaderboard;
	params.LeaderboardDataRequest = LeaderboardDataRequest;
	params.RangeStart = RangeStart;
	params.RangeEnd = RangeEnd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C4550
//		Name   -> Function UWorksCore.UWorksRequestCoreDownloadLeaderboardEntries.IsActive
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksRequestCoreDownloadLeaderboardEntries::IsActive()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreDownloadLeaderboardEntries.IsActive");

	UUWorksRequestCoreDownloadLeaderboardEntries_IsActive_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002CDF50
//		Name   -> Function UWorksCore.UWorksRequestCoreDownloadLeaderboardEntries.GetOutput
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FUWorksSteamLeaderboard                     SteamLeaderboard                                           (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FUWorksSteamLeaderboardEntries              SteamLeaderboardEntries                                    (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
//		int                                                EntryCount                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreDownloadLeaderboardEntries::GetOutput(struct FUWorksSteamLeaderboard* SteamLeaderboard, struct FUWorksSteamLeaderboardEntries* SteamLeaderboardEntries, int* EntryCount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreDownloadLeaderboardEntries.GetOutput");

	UUWorksRequestCoreDownloadLeaderboardEntries_GetOutput_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SteamLeaderboard != nullptr)
		*SteamLeaderboard = params.SteamLeaderboard;
	if (SteamLeaderboardEntries != nullptr)
		*SteamLeaderboardEntries = params.SteamLeaderboardEntries;
	if (EntryCount != nullptr)
		*EntryCount = params.EntryCount;

}


// Function:
//		Offset -> 0x002C4360
//		Name   -> Function UWorksCore.UWorksRequestCoreDownloadLeaderboardEntries.Deactivate
//		Flags  -> (Native, Public, BlueprintCallable)
void UUWorksRequestCoreDownloadLeaderboardEntries::Deactivate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreDownloadLeaderboardEntries.Deactivate");

	UUWorksRequestCoreDownloadLeaderboardEntries_Deactivate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C4340
//		Name   -> Function UWorksCore.UWorksRequestCoreDownloadLeaderboardEntries.Activate
//		Flags  -> (Native, Public, BlueprintCallable)
void UUWorksRequestCoreDownloadLeaderboardEntries::Activate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreDownloadLeaderboardEntries.Activate");

	UUWorksRequestCoreDownloadLeaderboardEntries_Activate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002CE990
//		Name   -> Function UWorksCore.UWorksRequestCoreDownloadLeaderboardEntriesForUsers.SetInput
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamLeaderboard                     SteamLeaderboard                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		TArray<struct FUWorksSteamID>                      users                                                      (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
void UUWorksRequestCoreDownloadLeaderboardEntriesForUsers::SetInput(const struct FUWorksSteamLeaderboard& SteamLeaderboard, TArray<struct FUWorksSteamID> users)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreDownloadLeaderboardEntriesForUsers.SetInput");

	UUWorksRequestCoreDownloadLeaderboardEntriesForUsers_SetInput_Params params {};
	params.SteamLeaderboard = SteamLeaderboard;
	params.users = users;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C4550
//		Name   -> Function UWorksCore.UWorksRequestCoreDownloadLeaderboardEntriesForUsers.IsActive
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksRequestCoreDownloadLeaderboardEntriesForUsers::IsActive()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreDownloadLeaderboardEntriesForUsers.IsActive");

	UUWorksRequestCoreDownloadLeaderboardEntriesForUsers_IsActive_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002CDF50
//		Name   -> Function UWorksCore.UWorksRequestCoreDownloadLeaderboardEntriesForUsers.GetOutput
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FUWorksSteamLeaderboard                     SteamLeaderboard                                           (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FUWorksSteamLeaderboardEntries              SteamLeaderboardEntries                                    (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
//		int                                                EntryCount                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreDownloadLeaderboardEntriesForUsers::GetOutput(struct FUWorksSteamLeaderboard* SteamLeaderboard, struct FUWorksSteamLeaderboardEntries* SteamLeaderboardEntries, int* EntryCount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreDownloadLeaderboardEntriesForUsers.GetOutput");

	UUWorksRequestCoreDownloadLeaderboardEntriesForUsers_GetOutput_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SteamLeaderboard != nullptr)
		*SteamLeaderboard = params.SteamLeaderboard;
	if (SteamLeaderboardEntries != nullptr)
		*SteamLeaderboardEntries = params.SteamLeaderboardEntries;
	if (EntryCount != nullptr)
		*EntryCount = params.EntryCount;

}


// Function:
//		Offset -> 0x002C4360
//		Name   -> Function UWorksCore.UWorksRequestCoreDownloadLeaderboardEntriesForUsers.Deactivate
//		Flags  -> (Native, Public, BlueprintCallable)
void UUWorksRequestCoreDownloadLeaderboardEntriesForUsers::Deactivate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreDownloadLeaderboardEntriesForUsers.Deactivate");

	UUWorksRequestCoreDownloadLeaderboardEntriesForUsers_Deactivate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C4340
//		Name   -> Function UWorksCore.UWorksRequestCoreDownloadLeaderboardEntriesForUsers.Activate
//		Flags  -> (Native, Public, BlueprintCallable)
void UUWorksRequestCoreDownloadLeaderboardEntriesForUsers::Activate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreDownloadLeaderboardEntriesForUsers.Activate");

	UUWorksRequestCoreDownloadLeaderboardEntriesForUsers_Activate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002CEC10
//		Name   -> Function UWorksCore.UWorksRequestCoreUploadLeaderboardScore.SetInput
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamLeaderboard                     SteamLeaderboard                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		UWorksCore_EUWorksLeaderboardUploadScoreMethod     LeaderboardUploadScoreMethod                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Score                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<int>                                        ScoreDetails                                               (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
void UUWorksRequestCoreUploadLeaderboardScore::SetInput(const struct FUWorksSteamLeaderboard& SteamLeaderboard, UWorksCore_EUWorksLeaderboardUploadScoreMethod LeaderboardUploadScoreMethod, int Score, TArray<int> ScoreDetails)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreUploadLeaderboardScore.SetInput");

	UUWorksRequestCoreUploadLeaderboardScore_SetInput_Params params {};
	params.SteamLeaderboard = SteamLeaderboard;
	params.LeaderboardUploadScoreMethod = LeaderboardUploadScoreMethod;
	params.Score = Score;
	params.ScoreDetails = ScoreDetails;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C4550
//		Name   -> Function UWorksCore.UWorksRequestCoreUploadLeaderboardScore.IsActive
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksRequestCoreUploadLeaderboardScore::IsActive()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreUploadLeaderboardScore.IsActive");

	UUWorksRequestCoreUploadLeaderboardScore_IsActive_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002CE550
//		Name   -> Function UWorksCore.UWorksRequestCoreUploadLeaderboardScore.GetOutput
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               bSuccess                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUWorksSteamLeaderboard                     SteamLeaderboard                                           (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
//		int                                                Score                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bScoreChanged                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                GlobalRankNew                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                GlobalRankPrevious                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreUploadLeaderboardScore::GetOutput(bool* bSuccess, struct FUWorksSteamLeaderboard* SteamLeaderboard, int* Score, bool* bScoreChanged, int* GlobalRankNew, int* GlobalRankPrevious)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreUploadLeaderboardScore.GetOutput");

	UUWorksRequestCoreUploadLeaderboardScore_GetOutput_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
	if (SteamLeaderboard != nullptr)
		*SteamLeaderboard = params.SteamLeaderboard;
	if (Score != nullptr)
		*Score = params.Score;
	if (bScoreChanged != nullptr)
		*bScoreChanged = params.bScoreChanged;
	if (GlobalRankNew != nullptr)
		*GlobalRankNew = params.GlobalRankNew;
	if (GlobalRankPrevious != nullptr)
		*GlobalRankPrevious = params.GlobalRankPrevious;

}


// Function:
//		Offset -> 0x002C4360
//		Name   -> Function UWorksCore.UWorksRequestCoreUploadLeaderboardScore.Deactivate
//		Flags  -> (Native, Public, BlueprintCallable)
void UUWorksRequestCoreUploadLeaderboardScore::Deactivate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreUploadLeaderboardScore.Deactivate");

	UUWorksRequestCoreUploadLeaderboardScore_Deactivate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C4340
//		Name   -> Function UWorksCore.UWorksRequestCoreUploadLeaderboardScore.Activate
//		Flags  -> (Native, Public, BlueprintCallable)
void UUWorksRequestCoreUploadLeaderboardScore::Activate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreUploadLeaderboardScore.Activate");

	UUWorksRequestCoreUploadLeaderboardScore_Activate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002CE780
//		Name   -> Function UWorksCore.UWorksRequestCoreAttachLeaderboardUGC.SetInput
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamLeaderboard                     SteamLeaderboard                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FUWorksUGCHandle                            UGCHandle                                                  (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksRequestCoreAttachLeaderboardUGC::SetInput(const struct FUWorksSteamLeaderboard& SteamLeaderboard, const struct FUWorksUGCHandle& UGCHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreAttachLeaderboardUGC.SetInput");

	UUWorksRequestCoreAttachLeaderboardUGC_SetInput_Params params {};
	params.SteamLeaderboard = SteamLeaderboard;
	params.UGCHandle = UGCHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C4550
//		Name   -> Function UWorksCore.UWorksRequestCoreAttachLeaderboardUGC.IsActive
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksRequestCoreAttachLeaderboardUGC::IsActive()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreAttachLeaderboardUGC.IsActive");

	UUWorksRequestCoreAttachLeaderboardUGC_IsActive_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002CDE70
//		Name   -> Function UWorksCore.UWorksRequestCoreAttachLeaderboardUGC.GetOutput
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		UWorksCore_EUWorksResult                           Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUWorksSteamLeaderboard                     SteamLeaderboard                                           (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
void UUWorksRequestCoreAttachLeaderboardUGC::GetOutput(UWorksCore_EUWorksResult* Result, struct FUWorksSteamLeaderboard* SteamLeaderboard)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreAttachLeaderboardUGC.GetOutput");

	UUWorksRequestCoreAttachLeaderboardUGC_GetOutput_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (SteamLeaderboard != nullptr)
		*SteamLeaderboard = params.SteamLeaderboard;

}


// Function:
//		Offset -> 0x002C4360
//		Name   -> Function UWorksCore.UWorksRequestCoreAttachLeaderboardUGC.Deactivate
//		Flags  -> (Native, Public, BlueprintCallable)
void UUWorksRequestCoreAttachLeaderboardUGC::Deactivate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreAttachLeaderboardUGC.Deactivate");

	UUWorksRequestCoreAttachLeaderboardUGC_Deactivate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C4340
//		Name   -> Function UWorksCore.UWorksRequestCoreAttachLeaderboardUGC.Activate
//		Flags  -> (Native, Public, BlueprintCallable)
void UUWorksRequestCoreAttachLeaderboardUGC::Activate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreAttachLeaderboardUGC.Activate");

	UUWorksRequestCoreAttachLeaderboardUGC_Activate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C4550
//		Name   -> Function UWorksCore.UWorksRequestCoreGetNumberOfCurrentPlayers.IsActive
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksRequestCoreGetNumberOfCurrentPlayers::IsActive()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreGetNumberOfCurrentPlayers.IsActive");

	UUWorksRequestCoreGetNumberOfCurrentPlayers_IsActive_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002CE250
//		Name   -> Function UWorksCore.UWorksRequestCoreGetNumberOfCurrentPlayers.GetOutput
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               bSuccess                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Players                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreGetNumberOfCurrentPlayers::GetOutput(bool* bSuccess, int* Players)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreGetNumberOfCurrentPlayers.GetOutput");

	UUWorksRequestCoreGetNumberOfCurrentPlayers_GetOutput_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
	if (Players != nullptr)
		*Players = params.Players;

}


// Function:
//		Offset -> 0x002C4360
//		Name   -> Function UWorksCore.UWorksRequestCoreGetNumberOfCurrentPlayers.Deactivate
//		Flags  -> (Native, Public, BlueprintCallable)
void UUWorksRequestCoreGetNumberOfCurrentPlayers::Deactivate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreGetNumberOfCurrentPlayers.Deactivate");

	UUWorksRequestCoreGetNumberOfCurrentPlayers_Deactivate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C4340
//		Name   -> Function UWorksCore.UWorksRequestCoreGetNumberOfCurrentPlayers.Activate
//		Flags  -> (Native, Public, BlueprintCallable)
void UUWorksRequestCoreGetNumberOfCurrentPlayers::Activate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreGetNumberOfCurrentPlayers.Activate");

	UUWorksRequestCoreGetNumberOfCurrentPlayers_Activate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C4550
//		Name   -> Function UWorksCore.UWorksRequestCoreRequestGlobalAchievementPercentages.IsActive
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksRequestCoreRequestGlobalAchievementPercentages::IsActive()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestGlobalAchievementPercentages.IsActive");

	UUWorksRequestCoreRequestGlobalAchievementPercentages_IsActive_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002CE330
//		Name   -> Function UWorksCore.UWorksRequestCoreRequestGlobalAchievementPercentages.GetOutput
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FUWorksGameID                               GameID                                                     (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
//		UWorksCore_EUWorksResult                           Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreRequestGlobalAchievementPercentages::GetOutput(struct FUWorksGameID* GameID, UWorksCore_EUWorksResult* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestGlobalAchievementPercentages.GetOutput");

	UUWorksRequestCoreRequestGlobalAchievementPercentages_GetOutput_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (GameID != nullptr)
		*GameID = params.GameID;
	if (Result != nullptr)
		*Result = params.Result;

}


// Function:
//		Offset -> 0x002C4360
//		Name   -> Function UWorksCore.UWorksRequestCoreRequestGlobalAchievementPercentages.Deactivate
//		Flags  -> (Native, Public, BlueprintCallable)
void UUWorksRequestCoreRequestGlobalAchievementPercentages::Deactivate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestGlobalAchievementPercentages.Deactivate");

	UUWorksRequestCoreRequestGlobalAchievementPercentages_Deactivate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C4340
//		Name   -> Function UWorksCore.UWorksRequestCoreRequestGlobalAchievementPercentages.Activate
//		Flags  -> (Native, Public, BlueprintCallable)
void UUWorksRequestCoreRequestGlobalAchievementPercentages::Activate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestGlobalAchievementPercentages.Activate");

	UUWorksRequestCoreRequestGlobalAchievementPercentages_Activate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C5E40
//		Name   -> Function UWorksCore.UWorksRequestCoreRequestGlobalStats.SetInput
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                HistoryDays                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreRequestGlobalStats::SetInput(int HistoryDays)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestGlobalStats.SetInput");

	UUWorksRequestCoreRequestGlobalStats_SetInput_Params params {};
	params.HistoryDays = HistoryDays;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C4550
//		Name   -> Function UWorksCore.UWorksRequestCoreRequestGlobalStats.IsActive
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUWorksRequestCoreRequestGlobalStats::IsActive()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestGlobalStats.IsActive");

	UUWorksRequestCoreRequestGlobalStats_IsActive_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002C5A00
//		Name   -> Function UWorksCore.UWorksRequestCoreRequestGlobalStats.GetOutput
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FUWorksGameID                               GameID                                                     (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
//		UWorksCore_EUWorksResult                           Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUWorksRequestCoreRequestGlobalStats::GetOutput(struct FUWorksGameID* GameID, UWorksCore_EUWorksResult* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestGlobalStats.GetOutput");

	UUWorksRequestCoreRequestGlobalStats_GetOutput_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (GameID != nullptr)
		*GameID = params.GameID;
	if (Result != nullptr)
		*Result = params.Result;

}


// Function:
//		Offset -> 0x002C4360
//		Name   -> Function UWorksCore.UWorksRequestCoreRequestGlobalStats.Deactivate
//		Flags  -> (Native, Public, BlueprintCallable)
void UUWorksRequestCoreRequestGlobalStats::Deactivate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestGlobalStats.Deactivate");

	UUWorksRequestCoreRequestGlobalStats_Deactivate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C4340
//		Name   -> Function UWorksCore.UWorksRequestCoreRequestGlobalStats.Activate
//		Flags  -> (Native, Public, BlueprintCallable)
void UUWorksRequestCoreRequestGlobalStats::Activate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestGlobalStats.Activate");

	UUWorksRequestCoreRequestGlobalStats_Activate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002CF0B0
//		Name   -> Function UWorksCore.CoreGetFileDetailsNode.OnRequestCompleted
//		Flags  -> (Final, Native, Public, HasOutParms)
// Parameters:
//		bool                                               bSuccessful                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		UWorksCore_EUWorksResult                           Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                FileSize                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     FileSHA                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<int>                                        FileFlags                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UCoreGetFileDetailsNode::OnRequestCompleted(bool bSuccessful, UWorksCore_EUWorksResult Result, int FileSize, const struct FString& FileSHA, TArray<int> FileFlags)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreGetFileDetailsNode.OnRequestCompleted");

	UCoreGetFileDetailsNode_OnRequestCompleted_Params params {};
	params.bSuccessful = bSuccessful;
	params.Result = Result;
	params.FileSize = FileSize;
	params.FileSHA = FileSHA;
	params.FileFlags = FileFlags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002CEFD0
//		Name   -> Function UWorksCore.CoreGetFileDetailsNode.GetFileDetailsNode
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Filename                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UCoreGetFileDetailsNode*                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCoreGetFileDetailsNode* UCoreGetFileDetailsNode::STATIC_GetFileDetailsNode(const struct FString& Filename)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreGetFileDetailsNode.GetFileDetailsNode");

	UCoreGetFileDetailsNode_GetFileDetailsNode_Params params {};
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002D0960
//		Name   -> Function UWorksCore.CoreSetPersonaNameNode.SetPersonaNameNode
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UCoreSetPersonaNameNode*                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCoreSetPersonaNameNode* UCoreSetPersonaNameNode::STATIC_SetPersonaNameNode(const struct FString& Name)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreSetPersonaNameNode.SetPersonaNameNode");

	UCoreSetPersonaNameNode_SetPersonaNameNode_Params params {};
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002D0780
//		Name   -> Function UWorksCore.CoreSetPersonaNameNode.OnRequestCompleted
//		Flags  -> (Final, Native, Public)
// Parameters:
//		bool                                               bSuccessful                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bSuccess                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bLocalSuccess                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		UWorksCore_EUWorksResult                           Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreSetPersonaNameNode::OnRequestCompleted(bool bSuccessful, bool bSuccess, bool bLocalSuccess, UWorksCore_EUWorksResult Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreSetPersonaNameNode.OnRequestCompleted");

	UCoreSetPersonaNameNode_OnRequestCompleted_Params params {};
	params.bSuccessful = bSuccessful;
	params.bSuccess = bSuccess;
	params.bLocalSuccess = bLocalSuccess;
	params.Result = Result;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002D0010
//		Name   -> Function UWorksCore.CoreDownloadClanActivityCountsNode.OnRequestCompleted
//		Flags  -> (Final, Native, Public)
// Parameters:
//		bool                                               bSuccessful                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bSuccess                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreDownloadClanActivityCountsNode::OnRequestCompleted(bool bSuccessful, bool bSuccess)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreDownloadClanActivityCountsNode.OnRequestCompleted");

	UCoreDownloadClanActivityCountsNode_OnRequestCompleted_Params params {};
	params.bSuccessful = bSuccessful;
	params.bSuccess = bSuccess;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002CFD30
//		Name   -> Function UWorksCore.CoreDownloadClanActivityCountsNode.DownloadClanActivityCountsNode
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		TArray<struct FUWorksSteamID>                      SteamIDClans                                               (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
//		class UCoreDownloadClanActivityCountsNode*         ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCoreDownloadClanActivityCountsNode* UCoreDownloadClanActivityCountsNode::STATIC_DownloadClanActivityCountsNode(TArray<struct FUWorksSteamID> SteamIDClans)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreDownloadClanActivityCountsNode.DownloadClanActivityCountsNode");

	UCoreDownloadClanActivityCountsNode_DownloadClanActivityCountsNode_Params params {};
	params.SteamIDClans = SteamIDClans;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002D08E0
//		Name   -> Function UWorksCore.CoreRequestClanOfficerListNode.RequestClanOfficerListNode
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamID                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		class UCoreRequestClanOfficerListNode*             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCoreRequestClanOfficerListNode* UCoreRequestClanOfficerListNode::STATIC_RequestClanOfficerListNode(const struct FUWorksSteamID& SteamID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreRequestClanOfficerListNode.RequestClanOfficerListNode");

	UCoreRequestClanOfficerListNode_RequestClanOfficerListNode_Params params {};
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002D0630
//		Name   -> Function UWorksCore.CoreRequestClanOfficerListNode.OnRequestCompleted
//		Flags  -> (Final, Native, Public)
// Parameters:
//		bool                                               bSuccessful                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUWorksSteamID                              SteamIDClan                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		int                                                Officers                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bSuccess                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreRequestClanOfficerListNode::OnRequestCompleted(bool bSuccessful, const struct FUWorksSteamID& SteamIDClan, int Officers, bool bSuccess)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreRequestClanOfficerListNode.OnRequestCompleted");

	UCoreRequestClanOfficerListNode_OnRequestCompleted_Params params {};
	params.bSuccessful = bSuccessful;
	params.SteamIDClan = SteamIDClan;
	params.Officers = Officers;
	params.bSuccess = bSuccess;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002D0530
//		Name   -> Function UWorksCore.CoreJoinClanChatRoomNode.OnRequestCompleted
//		Flags  -> (Final, Native, Public)
// Parameters:
//		bool                                               bSuccessful                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUWorksSteamID                              SteamIDClanChat                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		UWorksCore_EUWorksChatRoomEnterResponse            ChatRoomEnterResponse                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreJoinClanChatRoomNode::OnRequestCompleted(bool bSuccessful, const struct FUWorksSteamID& SteamIDClanChat, UWorksCore_EUWorksChatRoomEnterResponse ChatRoomEnterResponse)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreJoinClanChatRoomNode.OnRequestCompleted");

	UCoreJoinClanChatRoomNode_OnRequestCompleted_Params params {};
	params.bSuccessful = bSuccessful;
	params.SteamIDClanChat = SteamIDClanChat;
	params.ChatRoomEnterResponse = ChatRoomEnterResponse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002CFF90
//		Name   -> Function UWorksCore.CoreJoinClanChatRoomNode.JoinClanChatRoomNode
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamIDClan                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		class UCoreJoinClanChatRoomNode*                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCoreJoinClanChatRoomNode* UCoreJoinClanChatRoomNode::STATIC_JoinClanChatRoomNode(const struct FUWorksSteamID& SteamIDClan)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreJoinClanChatRoomNode.JoinClanChatRoomNode");

	UCoreJoinClanChatRoomNode_JoinClanChatRoomNode_Params params {};
	params.SteamIDClan = SteamIDClan;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002D02A0
//		Name   -> Function UWorksCore.CoreGetFollowerCountNode.OnRequestCompleted
//		Flags  -> (Final, Native, Public)
// Parameters:
//		bool                                               bSuccessful                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		UWorksCore_EUWorksResult                           Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUWorksSteamID                              SteamID                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		int                                                Count                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreGetFollowerCountNode::OnRequestCompleted(bool bSuccessful, UWorksCore_EUWorksResult Result, const struct FUWorksSteamID& SteamID, int Count)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreGetFollowerCountNode.OnRequestCompleted");

	UCoreGetFollowerCountNode_OnRequestCompleted_Params params {};
	params.bSuccessful = bSuccessful;
	params.Result = Result;
	params.SteamID = SteamID;
	params.Count = Count;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002CFE90
//		Name   -> Function UWorksCore.CoreGetFollowerCountNode.GetFollowerCountNode
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamID                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		class UCoreGetFollowerCountNode*                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCoreGetFollowerCountNode* UCoreGetFollowerCountNode::STATIC_GetFollowerCountNode(const struct FUWorksSteamID& SteamID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreGetFollowerCountNode.GetFollowerCountNode");

	UCoreGetFollowerCountNode_GetFollowerCountNode_Params params {};
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002D03E0
//		Name   -> Function UWorksCore.CoreIsFollowingNode.OnRequestCompleted
//		Flags  -> (Final, Native, Public)
// Parameters:
//		bool                                               bSuccessful                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		UWorksCore_EUWorksResult                           Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUWorksSteamID                              SteamID                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               bIsFollowing                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreIsFollowingNode::OnRequestCompleted(bool bSuccessful, UWorksCore_EUWorksResult Result, const struct FUWorksSteamID& SteamID, bool bIsFollowing)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreIsFollowingNode.OnRequestCompleted");

	UCoreIsFollowingNode_OnRequestCompleted_Params params {};
	params.bSuccessful = bSuccessful;
	params.Result = Result;
	params.SteamID = SteamID;
	params.bIsFollowing = bIsFollowing;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002CFF10
//		Name   -> Function UWorksCore.CoreIsFollowingNode.IsFollowingNode
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamID                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		class UCoreIsFollowingNode*                        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCoreIsFollowingNode* UCoreIsFollowingNode::STATIC_IsFollowingNode(const struct FUWorksSteamID& SteamID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreIsFollowingNode.IsFollowingNode");

	UCoreIsFollowingNode_IsFollowingNode_Params params {};
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002D00E0
//		Name   -> Function UWorksCore.CoreEnumerateFollowingListNode.OnRequestCompleted
//		Flags  -> (Final, Native, Public, HasOutParms)
// Parameters:
//		bool                                               bSuccessful                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		UWorksCore_EUWorksResult                           Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FUWorksSteamID>                      SteamIDs                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		int                                                ResultsReturned                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                TotalResultCount                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreEnumerateFollowingListNode::OnRequestCompleted(bool bSuccessful, UWorksCore_EUWorksResult Result, TArray<struct FUWorksSteamID> SteamIDs, int ResultsReturned, int TotalResultCount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreEnumerateFollowingListNode.OnRequestCompleted");

	UCoreEnumerateFollowingListNode_OnRequestCompleted_Params params {};
	params.bSuccessful = bSuccessful;
	params.Result = Result;
	params.SteamIDs = SteamIDs;
	params.ResultsReturned = ResultsReturned;
	params.TotalResultCount = TotalResultCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002CFE10
//		Name   -> Function UWorksCore.CoreEnumerateFollowingListNode.EnumerateFollowingListNode
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		int                                                StartIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UCoreEnumerateFollowingListNode*             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCoreEnumerateFollowingListNode* UCoreEnumerateFollowingListNode::STATIC_EnumerateFollowingListNode(int StartIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreEnumerateFollowingListNode.EnumerateFollowingListNode");

	UCoreEnumerateFollowingListNode_EnumerateFollowingListNode_Params params {};
	params.StartIndex = StartIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002D0E40
//		Name   -> Function UWorksCore.CoreAssociateWithClanNode.OnRequestCompleted
//		Flags  -> (Final, Native, Public)
// Parameters:
//		bool                                               bSuccessful                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		UWorksCore_EUWorksResult                           Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreAssociateWithClanNode::OnRequestCompleted(bool bSuccessful, UWorksCore_EUWorksResult Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreAssociateWithClanNode.OnRequestCompleted");

	UCoreAssociateWithClanNode_OnRequestCompleted_Params params {};
	params.bSuccessful = bSuccessful;
	params.Result = Result;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002D0D40
//		Name   -> Function UWorksCore.CoreAssociateWithClanNode.AssociateWithClanNode
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamIDClan                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		class UCoreAssociateWithClanNode*                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCoreAssociateWithClanNode* UCoreAssociateWithClanNode::STATIC_AssociateWithClanNode(const struct FUWorksSteamID& SteamIDClan)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreAssociateWithClanNode.AssociateWithClanNode");

	UCoreAssociateWithClanNode_AssociateWithClanNode_Params params {};
	params.SteamIDClan = SteamIDClan;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002D0F00
//		Name   -> Function UWorksCore.CoreComputeNewPlayerCompatibilityNode.OnRequestCompleted
//		Flags  -> (Final, Native, Public)
// Parameters:
//		bool                                               bSuccessful                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		UWorksCore_EUWorksResult                           Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                PlayersThatDontLikeCandidate                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                PlayersThatCandidateDoesntLike                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ClanPlayersThatDontLikeCandidate                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUWorksSteamID                              SteamIDCandidate                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCoreComputeNewPlayerCompatibilityNode::OnRequestCompleted(bool bSuccessful, UWorksCore_EUWorksResult Result, int PlayersThatDontLikeCandidate, int PlayersThatCandidateDoesntLike, int ClanPlayersThatDontLikeCandidate, const struct FUWorksSteamID& SteamIDCandidate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreComputeNewPlayerCompatibilityNode.OnRequestCompleted");

	UCoreComputeNewPlayerCompatibilityNode_OnRequestCompleted_Params params {};
	params.bSuccessful = bSuccessful;
	params.Result = Result;
	params.PlayersThatDontLikeCandidate = PlayersThatDontLikeCandidate;
	params.PlayersThatCandidateDoesntLike = PlayersThatCandidateDoesntLike;
	params.ClanPlayersThatDontLikeCandidate = ClanPlayersThatDontLikeCandidate;
	params.SteamIDCandidate = SteamIDCandidate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002D0DC0
//		Name   -> Function UWorksCore.CoreComputeNewPlayerCompatibilityNode.ComputeNewPlayerCompatibilityNode
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamIDNewPlayer                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		class UCoreComputeNewPlayerCompatibilityNode*      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCoreComputeNewPlayerCompatibilityNode* UCoreComputeNewPlayerCompatibilityNode::STATIC_ComputeNewPlayerCompatibilityNode(const struct FUWorksSteamID& SteamIDNewPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreComputeNewPlayerCompatibilityNode.ComputeNewPlayerCompatibilityNode");

	UCoreComputeNewPlayerCompatibilityNode_ComputeNewPlayerCompatibilityNode_Params params {};
	params.SteamIDNewPlayer = SteamIDNewPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002D14C0
//		Name   -> Function UWorksCore.CoreRequestUserStatsGSNode.RequestUserStatsGSNode
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamIDUser                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		class UCoreRequestUserStatsGSNode*                 ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCoreRequestUserStatsGSNode* UCoreRequestUserStatsGSNode::STATIC_RequestUserStatsGSNode(const struct FUWorksSteamID& SteamIDUser)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreRequestUserStatsGSNode.RequestUserStatsGSNode");

	UCoreRequestUserStatsGSNode_RequestUserStatsGSNode_Params params {};
	params.SteamIDUser = SteamIDUser;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002D13C0
//		Name   -> Function UWorksCore.CoreRequestUserStatsGSNode.OnRequestCompleted
//		Flags  -> (Final, Native, Public)
// Parameters:
//		bool                                               bSuccessful                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		UWorksCore_EUWorksResult                           Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUWorksSteamID                              SteamIDUser                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCoreRequestUserStatsGSNode::OnRequestCompleted(bool bSuccessful, UWorksCore_EUWorksResult Result, const struct FUWorksSteamID& SteamIDUser)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreRequestUserStatsGSNode.OnRequestCompleted");

	UCoreRequestUserStatsGSNode_OnRequestCompleted_Params params {};
	params.bSuccessful = bSuccessful;
	params.Result = Result;
	params.SteamIDUser = SteamIDUser;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002D1540
//		Name   -> Function UWorksCore.CoreStoreUserStatsNode.StoreUserStatsNode
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamIDUser                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		class UCoreStoreUserStatsNode*                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCoreStoreUserStatsNode* UCoreStoreUserStatsNode::STATIC_StoreUserStatsNode(const struct FUWorksSteamID& SteamIDUser)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreStoreUserStatsNode.StoreUserStatsNode");

	UCoreStoreUserStatsNode_StoreUserStatsNode_Params params {};
	params.SteamIDUser = SteamIDUser;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002D13C0
//		Name   -> Function UWorksCore.CoreStoreUserStatsNode.OnRequestCompleted
//		Flags  -> (Final, Native, Public)
// Parameters:
//		bool                                               bSuccessful                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		UWorksCore_EUWorksResult                           Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUWorksSteamID                              SteamIDUser                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCoreStoreUserStatsNode::OnRequestCompleted(bool bSuccessful, UWorksCore_EUWorksResult Result, const struct FUWorksSteamID& SteamIDUser)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreStoreUserStatsNode.OnRequestCompleted");

	UCoreStoreUserStatsNode_OnRequestCompleted_Params params {};
	params.bSuccessful = bSuccessful;
	params.Result = Result;
	params.SteamIDUser = SteamIDUser;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002D18D0
//		Name   -> Function UWorksCore.CoreRequestEligiblePromoItemDefinitionsIDsNode.RequestEligiblePromoItemDefinitionsIDsNode
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamID                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		class UCoreRequestEligiblePromoItemDefinitionsIDsNode* ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCoreRequestEligiblePromoItemDefinitionsIDsNode* UCoreRequestEligiblePromoItemDefinitionsIDsNode::STATIC_RequestEligiblePromoItemDefinitionsIDsNode(const struct FUWorksSteamID& SteamID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreRequestEligiblePromoItemDefinitionsIDsNode.RequestEligiblePromoItemDefinitionsIDsNode");

	UCoreRequestEligiblePromoItemDefinitionsIDsNode_RequestEligiblePromoItemDefinitionsIDsNode_Params params {};
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002D1740
//		Name   -> Function UWorksCore.CoreRequestEligiblePromoItemDefinitionsIDsNode.OnRequestCompleted
//		Flags  -> (Final, Native, Public)
// Parameters:
//		bool                                               bSuccessful                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		UWorksCore_EUWorksResult                           Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUWorksSteamID                              SteamID                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		int                                                NumEligiblePromoItemsDefinitionsIDs                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bCachedData                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreRequestEligiblePromoItemDefinitionsIDsNode::OnRequestCompleted(bool bSuccessful, UWorksCore_EUWorksResult Result, const struct FUWorksSteamID& SteamID, int NumEligiblePromoItemsDefinitionsIDs, bool bCachedData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreRequestEligiblePromoItemDefinitionsIDsNode.OnRequestCompleted");

	UCoreRequestEligiblePromoItemDefinitionsIDsNode_OnRequestCompleted_Params params {};
	params.bSuccessful = bSuccessful;
	params.Result = Result;
	params.SteamID = SteamID;
	params.NumEligiblePromoItemsDefinitionsIDs = NumEligiblePromoItemsDefinitionsIDs;
	params.bCachedData = bCachedData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002D21A0
//		Name   -> Function UWorksCore.CoreRequestLobbyListNode.RequestLobbyListNode
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UCoreRequestLobbyListNode*                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCoreRequestLobbyListNode* UCoreRequestLobbyListNode::STATIC_RequestLobbyListNode()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreRequestLobbyListNode.RequestLobbyListNode");

	UCoreRequestLobbyListNode_RequestLobbyListNode_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002D20E0
//		Name   -> Function UWorksCore.CoreRequestLobbyListNode.OnRequestCompleted
//		Flags  -> (Final, Native, Public)
// Parameters:
//		bool                                               bSuccessful                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                LobbiesMatching                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreRequestLobbyListNode::OnRequestCompleted(bool bSuccessful, int LobbiesMatching)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreRequestLobbyListNode.OnRequestCompleted");

	UCoreRequestLobbyListNode_OnRequestCompleted_Params params {};
	params.bSuccessful = bSuccessful;
	params.LobbiesMatching = LobbiesMatching;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002D13C0
//		Name   -> Function UWorksCore.CoreCreateLobbyNode.OnRequestCompleted
//		Flags  -> (Final, Native, Public)
// Parameters:
//		bool                                               bSuccessful                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		UWorksCore_EUWorksResult                           Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUWorksSteamID                              SteamIDLobby                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCoreCreateLobbyNode::OnRequestCompleted(bool bSuccessful, UWorksCore_EUWorksResult Result, const struct FUWorksSteamID& SteamIDLobby)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreCreateLobbyNode.OnRequestCompleted");

	UCoreCreateLobbyNode_OnRequestCompleted_Params params {};
	params.bSuccessful = bSuccessful;
	params.Result = Result;
	params.SteamIDLobby = SteamIDLobby;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002D1DD0
//		Name   -> Function UWorksCore.CoreCreateLobbyNode.CreateLobbyNode
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		UWorksCore_EUWorksLobbyType                        LobbyType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                MaxMembers                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UCoreCreateLobbyNode*                        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCoreCreateLobbyNode* UCoreCreateLobbyNode::STATIC_CreateLobbyNode(UWorksCore_EUWorksLobbyType LobbyType, int MaxMembers)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreCreateLobbyNode.CreateLobbyNode");

	UCoreCreateLobbyNode_CreateLobbyNode_Params params {};
	params.LobbyType = LobbyType;
	params.MaxMembers = MaxMembers;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002D1F10
//		Name   -> Function UWorksCore.CoreJoinLobbyNode.OnRequestCompleted
//		Flags  -> (Final, Native, Public, HasOutParms)
// Parameters:
//		bool                                               bSuccessful                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUWorksSteamID                              SteamIDLobby                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		TArray<unsigned char>                              ChatPermissions                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		bool                                               bLocked                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		UWorksCore_EUWorksChatRoomEnterResponse            ChatRoomEnterResponse                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreJoinLobbyNode::OnRequestCompleted(bool bSuccessful, const struct FUWorksSteamID& SteamIDLobby, TArray<unsigned char> ChatPermissions, bool bLocked, UWorksCore_EUWorksChatRoomEnterResponse ChatRoomEnterResponse)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreJoinLobbyNode.OnRequestCompleted");

	UCoreJoinLobbyNode_OnRequestCompleted_Params params {};
	params.bSuccessful = bSuccessful;
	params.SteamIDLobby = SteamIDLobby;
	params.ChatPermissions = ChatPermissions;
	params.bLocked = bLocked;
	params.ChatRoomEnterResponse = ChatRoomEnterResponse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002D1E90
//		Name   -> Function UWorksCore.CoreJoinLobbyNode.JoinLobbyNode
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamIDLobby                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		class UCoreJoinLobbyNode*                          ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCoreJoinLobbyNode* UCoreJoinLobbyNode::STATIC_JoinLobbyNode(const struct FUWorksSteamID& SteamIDLobby)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreJoinLobbyNode.JoinLobbyNode");

	UCoreJoinLobbyNode_JoinLobbyNode_Params params {};
	params.SteamIDLobby = SteamIDLobby;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002D3100
//		Name   -> Function UWorksCore.CoreServerListNode.ServerListNode
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		int                                                AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		UWorksCore_EUWorksServerQueryType                  QueryType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                MaxUpdates                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UCoreServerListNode*                         ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCoreServerListNode* UCoreServerListNode::STATIC_ServerListNode(int AppID, UWorksCore_EUWorksServerQueryType QueryType, int MaxUpdates)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreServerListNode.ServerListNode");

	UCoreServerListNode_ServerListNode_Params params {};
	params.AppID = AppID;
	params.QueryType = QueryType;
	params.MaxUpdates = MaxUpdates;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002D2BF0
//		Name   -> Function UWorksCore.CoreServerListNode.OnRequestUpdated
//		Flags  -> (Final, Native, Public)
// Parameters:
//		bool                                               bSuccessful                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUWorksServerInfo                           Server                                                     (Parm, NativeAccessSpecifierPublic)
void UCoreServerListNode::OnRequestUpdated(bool bSuccessful, const struct FUWorksServerInfo& Server)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreServerListNode.OnRequestUpdated");

	UCoreServerListNode_OnRequestUpdated_Params params {};
	params.bSuccessful = bSuccessful;
	params.Server = Server;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002D2D40
//		Name   -> Function UWorksCore.CorePingNode.PingNode
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     IP                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Port                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UCorePingNode*                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCorePingNode* UCorePingNode::STATIC_PingNode(const struct FString& IP, int Port)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.CorePingNode.PingNode");

	UCorePingNode_PingNode_Params params {};
	params.IP = IP;
	params.Port = Port;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002D2870
//		Name   -> Function UWorksCore.CorePingNode.OnRequestCompleted
//		Flags  -> (Final, Native, Public)
// Parameters:
//		bool                                               bSuccessful                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUWorksServerInfo                           Server                                                     (Parm, NativeAccessSpecifierPublic)
void UCorePingNode::OnRequestCompleted(bool bSuccessful, const struct FUWorksServerInfo& Server)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.CorePingNode.OnRequestCompleted");

	UCorePingNode_OnRequestCompleted_Params params {};
	params.bSuccessful = bSuccessful;
	params.Server = Server;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002D2E60
//		Name   -> Function UWorksCore.CorePlayersNode.PlayersNode
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     IP                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Port                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                MaxUpdates                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UCorePlayersNode*                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCorePlayersNode* UCorePlayersNode::STATIC_PlayersNode(const struct FString& IP, int Port, int MaxUpdates)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.CorePlayersNode.PlayersNode");

	UCorePlayersNode_PlayersNode_Params params {};
	params.IP = IP;
	params.Port = Port;
	params.MaxUpdates = MaxUpdates;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002D29C0
//		Name   -> Function UWorksCore.CorePlayersNode.OnRequestUpdated
//		Flags  -> (Final, Native, Public)
// Parameters:
//		bool                                               bSuccessful                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUWorksPlayerInfo                           Player                                                     (Parm, NativeAccessSpecifierPublic)
void UCorePlayersNode::OnRequestUpdated(bool bSuccessful, const struct FUWorksPlayerInfo& Player)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.CorePlayersNode.OnRequestUpdated");

	UCorePlayersNode_OnRequestUpdated_Params params {};
	params.bSuccessful = bSuccessful;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002D2FB0
//		Name   -> Function UWorksCore.CoreRulesNode.RulesNode
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     IP                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Port                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                MaxUpdates                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UCoreRulesNode*                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCoreRulesNode* UCoreRulesNode::STATIC_RulesNode(const struct FString& IP, int Port, int MaxUpdates)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreRulesNode.RulesNode");

	UCoreRulesNode_RulesNode_Params params {};
	params.IP = IP;
	params.Port = Port;
	params.MaxUpdates = MaxUpdates;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002D2AD0
//		Name   -> Function UWorksCore.CoreRulesNode.OnRequestUpdated
//		Flags  -> (Final, Native, Public)
// Parameters:
//		bool                                               bSuccessful                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUWorksRuleInfo                             Rule                                                       (Parm, NativeAccessSpecifierPublic)
void UCoreRulesNode::OnRequestUpdated(bool bSuccessful, const struct FUWorksRuleInfo& Rule)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreRulesNode.OnRequestUpdated");

	UCoreRulesNode_OnRequestUpdated_Params params {};
	params.bSuccessful = bSuccessful;
	params.Rule = Rule;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002D0E40
//		Name   -> Function UWorksCore.CoreFileWriteAsyncNode.OnRequestCompleted
//		Flags  -> (Final, Native, Public)
// Parameters:
//		bool                                               bSuccessful                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		UWorksCore_EUWorksResult                           Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreFileWriteAsyncNode::OnRequestCompleted(bool bSuccessful, UWorksCore_EUWorksResult Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreFileWriteAsyncNode.OnRequestCompleted");

	UCoreFileWriteAsyncNode_OnRequestCompleted_Params params {};
	params.bSuccessful = bSuccessful;
	params.Result = Result;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002D3640
//		Name   -> Function UWorksCore.CoreFileWriteAsyncNode.FileWriteAsyncNode
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<unsigned char>                              Buffer                                                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
//		class UCoreFileWriteAsyncNode*                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCoreFileWriteAsyncNode* UCoreFileWriteAsyncNode::STATIC_FileWriteAsyncNode(const struct FString& File, TArray<unsigned char> Buffer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreFileWriteAsyncNode.FileWriteAsyncNode");

	UCoreFileWriteAsyncNode_FileWriteAsyncNode_Params params {};
	params.File = File;
	params.Buffer = Buffer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002D37B0
//		Name   -> Function UWorksCore.CoreFileReadAsyncNode.OnRequestCompleted
//		Flags  -> (Final, Native, Public, HasOutParms)
// Parameters:
//		bool                                               bSuccessful                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		UWorksCore_EUWorksResult                           Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Offset                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<unsigned char>                              Buffer                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UCoreFileReadAsyncNode::OnRequestCompleted(bool bSuccessful, UWorksCore_EUWorksResult Result, int Offset, TArray<unsigned char> Buffer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreFileReadAsyncNode.OnRequestCompleted");

	UCoreFileReadAsyncNode_OnRequestCompleted_Params params {};
	params.bSuccessful = bSuccessful;
	params.Result = Result;
	params.Offset = Offset;
	params.Buffer = Buffer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002D34F0
//		Name   -> Function UWorksCore.CoreFileReadAsyncNode.FileReadAsyncNode
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Offset                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                BytesToRead                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UCoreFileReadAsyncNode*                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCoreFileReadAsyncNode* UCoreFileReadAsyncNode::STATIC_FileReadAsyncNode(const struct FString& File, int Offset, int BytesToRead)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreFileReadAsyncNode.FileReadAsyncNode");

	UCoreFileReadAsyncNode_FileReadAsyncNode_Params params {};
	params.File = File;
	params.Offset = Offset;
	params.BytesToRead = BytesToRead;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002D53F0
//		Name   -> Function UWorksCore.CoreSendQueryUGCRequestNode.SendQueryUGCRequestNode
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksUGCQueryHandle                       UGCQueryHandle                                             (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		class UCoreSendQueryUGCRequestNode*                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCoreSendQueryUGCRequestNode* UCoreSendQueryUGCRequestNode::STATIC_SendQueryUGCRequestNode(const struct FUWorksUGCQueryHandle& UGCQueryHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreSendQueryUGCRequestNode.SendQueryUGCRequestNode");

	UCoreSendQueryUGCRequestNode_SendQueryUGCRequestNode_Params params {};
	params.UGCQueryHandle = UGCQueryHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002D5050
//		Name   -> Function UWorksCore.CoreSendQueryUGCRequestNode.OnRequestCompleted
//		Flags  -> (Final, Native, Public)
// Parameters:
//		bool                                               bSuccessful                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUWorksUGCQueryHandle                       UGCQueryHandle                                             (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		UWorksCore_EUWorksResult                           Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                NumResultsReturned                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                TotalMatchingResults                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bCachedData                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreSendQueryUGCRequestNode::OnRequestCompleted(bool bSuccessful, const struct FUWorksUGCQueryHandle& UGCQueryHandle, UWorksCore_EUWorksResult Result, int NumResultsReturned, int TotalMatchingResults, bool bCachedData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreSendQueryUGCRequestNode.OnRequestCompleted");

	UCoreSendQueryUGCRequestNode_OnRequestCompleted_Params params {};
	params.bSuccessful = bSuccessful;
	params.UGCQueryHandle = UGCQueryHandle;
	params.Result = Result;
	params.NumResultsReturned = NumResultsReturned;
	params.TotalMatchingResults = TotalMatchingResults;
	params.bCachedData = bCachedData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002D03E0
//		Name   -> Function UWorksCore.CoreCreateItemNode.OnRequestCompleted
//		Flags  -> (Final, Native, Public)
// Parameters:
//		bool                                               bSuccessful                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		UWorksCore_EUWorksResult                           Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUWorksPublishedFileID                      PublishedFileID                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               bUserNeedsToAcceptWorkshopLegalAgreement                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreCreateItemNode::OnRequestCompleted(bool bSuccessful, UWorksCore_EUWorksResult Result, const struct FUWorksPublishedFileID& PublishedFileID, bool bUserNeedsToAcceptWorkshopLegalAgreement)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreCreateItemNode.OnRequestCompleted");

	UCoreCreateItemNode_OnRequestCompleted_Params params {};
	params.bSuccessful = bSuccessful;
	params.Result = Result;
	params.PublishedFileID = PublishedFileID;
	params.bUserNeedsToAcceptWorkshopLegalAgreement = bUserNeedsToAcceptWorkshopLegalAgreement;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002D4BE0
//		Name   -> Function UWorksCore.CoreCreateItemNode.CreateItemNode
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		int                                                ConsumerAppID                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		UWorksCore_EUWorksWorkshopFileType                 FileType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UCoreCreateItemNode*                         ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCoreCreateItemNode* UCoreCreateItemNode::STATIC_CreateItemNode(int ConsumerAppID, UWorksCore_EUWorksWorkshopFileType FileType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreCreateItemNode.CreateItemNode");

	UCoreCreateItemNode_CreateItemNode_Params params {};
	params.ConsumerAppID = ConsumerAppID;
	params.FileType = FileType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002D5720
//		Name   -> Function UWorksCore.CoreSubmitItemUpdateNode.SubmitItemUpdateNode
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksUGCUpdateHandle                      UGCUpdateHandle                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FString                                     ChangeNote                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UCoreSubmitItemUpdateNode*                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCoreSubmitItemUpdateNode* UCoreSubmitItemUpdateNode::STATIC_SubmitItemUpdateNode(const struct FUWorksUGCUpdateHandle& UGCUpdateHandle, const struct FString& ChangeNote)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreSubmitItemUpdateNode.SubmitItemUpdateNode");

	UCoreSubmitItemUpdateNode_SubmitItemUpdateNode_Params params {};
	params.UGCUpdateHandle = UGCUpdateHandle;
	params.ChangeNote = ChangeNote;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002D5220
//		Name   -> Function UWorksCore.CoreSubmitItemUpdateNode.OnRequestCompleted
//		Flags  -> (Final, Native, Public)
// Parameters:
//		bool                                               bSuccessful                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		UWorksCore_EUWorksResult                           Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bUserNeedsToAcceptWorkshopLegalAgreement                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreSubmitItemUpdateNode::OnRequestCompleted(bool bSuccessful, UWorksCore_EUWorksResult Result, bool bUserNeedsToAcceptWorkshopLegalAgreement)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreSubmitItemUpdateNode.OnRequestCompleted");

	UCoreSubmitItemUpdateNode_OnRequestCompleted_Params params {};
	params.bSuccessful = bSuccessful;
	params.Result = Result;
	params.bUserNeedsToAcceptWorkshopLegalAgreement = bUserNeedsToAcceptWorkshopLegalAgreement;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002D5470
//		Name   -> Function UWorksCore.CoreSetUserItemVoteNode.SetUserItemVoteNode
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksPublishedFileID                      PublishedFileID                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               bVoteUp                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UCoreSetUserItemVoteNode*                    ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCoreSetUserItemVoteNode* UCoreSetUserItemVoteNode::STATIC_SetUserItemVoteNode(const struct FUWorksPublishedFileID& PublishedFileID, bool bVoteUp)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreSetUserItemVoteNode.SetUserItemVoteNode");

	UCoreSetUserItemVoteNode_SetUserItemVoteNode_Params params {};
	params.PublishedFileID = PublishedFileID;
	params.bVoteUp = bVoteUp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002D4D20
//		Name   -> Function UWorksCore.CoreSetUserItemVoteNode.OnRequestCompleted
//		Flags  -> (Final, Native, Public)
// Parameters:
//		bool                                               bSuccessful                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUWorksPublishedFileID                      PublishedFileID                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		UWorksCore_EUWorksResult                           Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bVoteUp                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreSetUserItemVoteNode::OnRequestCompleted(bool bSuccessful, const struct FUWorksPublishedFileID& PublishedFileID, UWorksCore_EUWorksResult Result, bool bVoteUp)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreSetUserItemVoteNode.OnRequestCompleted");

	UCoreSetUserItemVoteNode_OnRequestCompleted_Params params {};
	params.bSuccessful = bSuccessful;
	params.PublishedFileID = PublishedFileID;
	params.Result = Result;
	params.bVoteUp = bVoteUp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002D4E70
//		Name   -> Function UWorksCore.CoreGetUserItemVoteNode.OnRequestCompleted
//		Flags  -> (Final, Native, Public)
// Parameters:
//		bool                                               bSuccessful                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUWorksPublishedFileID                      PublishedFileID                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		UWorksCore_EUWorksResult                           Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bVotedUp                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bVotedDown                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bVoteSkipped                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreGetUserItemVoteNode::OnRequestCompleted(bool bSuccessful, const struct FUWorksPublishedFileID& PublishedFileID, UWorksCore_EUWorksResult Result, bool bVotedUp, bool bVotedDown, bool bVoteSkipped)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreGetUserItemVoteNode.OnRequestCompleted");

	UCoreGetUserItemVoteNode_OnRequestCompleted_Params params {};
	params.bSuccessful = bSuccessful;
	params.PublishedFileID = PublishedFileID;
	params.Result = Result;
	params.bVotedUp = bVotedUp;
	params.bVotedDown = bVotedDown;
	params.bVoteSkipped = bVoteSkipped;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002D4CA0
//		Name   -> Function UWorksCore.CoreGetUserItemVoteNode.GetUserItemVoteNode
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksPublishedFileID                      PublishedFileID                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		class UCoreGetUserItemVoteNode*                    ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCoreGetUserItemVoteNode* UCoreGetUserItemVoteNode::STATIC_GetUserItemVoteNode(const struct FUWorksPublishedFileID& PublishedFileID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreGetUserItemVoteNode.GetUserItemVoteNode");

	UCoreGetUserItemVoteNode_GetUserItemVoteNode_Params params {};
	params.PublishedFileID = PublishedFileID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002D4D20
//		Name   -> Function UWorksCore.CoreAddItemToFavoritesNode.OnRequestCompleted
//		Flags  -> (Final, Native, Public)
// Parameters:
//		bool                                               bSuccessful                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUWorksPublishedFileID                      PublishedFileID                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		UWorksCore_EUWorksResult                           Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bWasAddRequest                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreAddItemToFavoritesNode::OnRequestCompleted(bool bSuccessful, const struct FUWorksPublishedFileID& PublishedFileID, UWorksCore_EUWorksResult Result, bool bWasAddRequest)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreAddItemToFavoritesNode.OnRequestCompleted");

	UCoreAddItemToFavoritesNode_OnRequestCompleted_Params params {};
	params.bSuccessful = bSuccessful;
	params.PublishedFileID = PublishedFileID;
	params.Result = Result;
	params.bWasAddRequest = bWasAddRequest;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002D4B20
//		Name   -> Function UWorksCore.CoreAddItemToFavoritesNode.AddItemToFavoritesNode
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		int                                                AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUWorksPublishedFileID                      PublishedFileID                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		class UCoreAddItemToFavoritesNode*                 ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCoreAddItemToFavoritesNode* UCoreAddItemToFavoritesNode::STATIC_AddItemToFavoritesNode(int AppID, const struct FUWorksPublishedFileID& PublishedFileID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreAddItemToFavoritesNode.AddItemToFavoritesNode");

	UCoreAddItemToFavoritesNode_AddItemToFavoritesNode_Params params {};
	params.AppID = AppID;
	params.PublishedFileID = PublishedFileID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002D5330
//		Name   -> Function UWorksCore.CoreRemoveItemFromFavoritesNode.RemoveItemFromFavoritesNode
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		int                                                AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUWorksPublishedFileID                      PublishedFileID                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		class UCoreRemoveItemFromFavoritesNode*            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCoreRemoveItemFromFavoritesNode* UCoreRemoveItemFromFavoritesNode::STATIC_RemoveItemFromFavoritesNode(int AppID, const struct FUWorksPublishedFileID& PublishedFileID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreRemoveItemFromFavoritesNode.RemoveItemFromFavoritesNode");

	UCoreRemoveItemFromFavoritesNode_RemoveItemFromFavoritesNode_Params params {};
	params.AppID = AppID;
	params.PublishedFileID = PublishedFileID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002D4D20
//		Name   -> Function UWorksCore.CoreRemoveItemFromFavoritesNode.OnRequestCompleted
//		Flags  -> (Final, Native, Public)
// Parameters:
//		bool                                               bSuccessful                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUWorksPublishedFileID                      PublishedFileID                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		UWorksCore_EUWorksResult                           Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bWasAddRequest                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreRemoveItemFromFavoritesNode::OnRequestCompleted(bool bSuccessful, const struct FUWorksPublishedFileID& PublishedFileID, UWorksCore_EUWorksResult Result, bool bWasAddRequest)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreRemoveItemFromFavoritesNode.OnRequestCompleted");

	UCoreRemoveItemFromFavoritesNode_OnRequestCompleted_Params params {};
	params.bSuccessful = bSuccessful;
	params.PublishedFileID = PublishedFileID;
	params.Result = Result;
	params.bWasAddRequest = bWasAddRequest;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002D5850
//		Name   -> Function UWorksCore.CoreSubscribeItemNode.SubscribeItemNode
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksPublishedFileID                      PublishedFileID                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		class UCoreSubscribeItemNode*                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCoreSubscribeItemNode* UCoreSubscribeItemNode::STATIC_SubscribeItemNode(const struct FUWorksPublishedFileID& PublishedFileID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreSubscribeItemNode.SubscribeItemNode");

	UCoreSubscribeItemNode_SubscribeItemNode_Params params {};
	params.PublishedFileID = PublishedFileID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002D13C0
//		Name   -> Function UWorksCore.CoreSubscribeItemNode.OnRequestCompleted
//		Flags  -> (Final, Native, Public)
// Parameters:
//		bool                                               bSuccessful                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		UWorksCore_EUWorksResult                           Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUWorksPublishedFileID                      PublishedFileID                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCoreSubscribeItemNode::OnRequestCompleted(bool bSuccessful, UWorksCore_EUWorksResult Result, const struct FUWorksPublishedFileID& PublishedFileID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreSubscribeItemNode.OnRequestCompleted");

	UCoreSubscribeItemNode_OnRequestCompleted_Params params {};
	params.bSuccessful = bSuccessful;
	params.Result = Result;
	params.PublishedFileID = PublishedFileID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002D58D0
//		Name   -> Function UWorksCore.CoreUnsubscribeItemNode.UnsubscribeItemNode
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksPublishedFileID                      PublishedFileID                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		class UCoreUnsubscribeItemNode*                    ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCoreUnsubscribeItemNode* UCoreUnsubscribeItemNode::STATIC_UnsubscribeItemNode(const struct FUWorksPublishedFileID& PublishedFileID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreUnsubscribeItemNode.UnsubscribeItemNode");

	UCoreUnsubscribeItemNode_UnsubscribeItemNode_Params params {};
	params.PublishedFileID = PublishedFileID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002D13C0
//		Name   -> Function UWorksCore.CoreUnsubscribeItemNode.OnRequestCompleted
//		Flags  -> (Final, Native, Public)
// Parameters:
//		bool                                               bSuccessful                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		UWorksCore_EUWorksResult                           Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUWorksPublishedFileID                      PublishedFileID                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCoreUnsubscribeItemNode::OnRequestCompleted(bool bSuccessful, UWorksCore_EUWorksResult Result, const struct FUWorksPublishedFileID& PublishedFileID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreUnsubscribeItemNode.OnRequestCompleted");

	UCoreUnsubscribeItemNode_OnRequestCompleted_Params params {};
	params.bSuccessful = bSuccessful;
	params.Result = Result;
	params.PublishedFileID = PublishedFileID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002D5530
//		Name   -> Function UWorksCore.CoreStartPlaytimeTrackingNode.StartPlaytimeTrackingNode
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		TArray<struct FUWorksPublishedFileID>              PublishedFileID                                            (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
//		class UCoreStartPlaytimeTrackingNode*              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCoreStartPlaytimeTrackingNode* UCoreStartPlaytimeTrackingNode::STATIC_StartPlaytimeTrackingNode(TArray<struct FUWorksPublishedFileID> PublishedFileID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreStartPlaytimeTrackingNode.StartPlaytimeTrackingNode");

	UCoreStartPlaytimeTrackingNode_StartPlaytimeTrackingNode_Params params {};
	params.PublishedFileID = PublishedFileID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002D0E40
//		Name   -> Function UWorksCore.CoreStartPlaytimeTrackingNode.OnRequestCompleted
//		Flags  -> (Final, Native, Public)
// Parameters:
//		bool                                               bSuccessful                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		UWorksCore_EUWorksResult                           Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreStartPlaytimeTrackingNode::OnRequestCompleted(bool bSuccessful, UWorksCore_EUWorksResult Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreStartPlaytimeTrackingNode.OnRequestCompleted");

	UCoreStartPlaytimeTrackingNode_OnRequestCompleted_Params params {};
	params.bSuccessful = bSuccessful;
	params.Result = Result;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002D5640
//		Name   -> Function UWorksCore.CoreStopPlaytimeTrackingNode.StopPlaytimeTrackingNode
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		TArray<struct FUWorksPublishedFileID>              PublishedFileID                                            (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
//		class UCoreStopPlaytimeTrackingNode*               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCoreStopPlaytimeTrackingNode* UCoreStopPlaytimeTrackingNode::STATIC_StopPlaytimeTrackingNode(TArray<struct FUWorksPublishedFileID> PublishedFileID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreStopPlaytimeTrackingNode.StopPlaytimeTrackingNode");

	UCoreStopPlaytimeTrackingNode_StopPlaytimeTrackingNode_Params params {};
	params.PublishedFileID = PublishedFileID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002D0E40
//		Name   -> Function UWorksCore.CoreStopPlaytimeTrackingNode.OnRequestCompleted
//		Flags  -> (Final, Native, Public)
// Parameters:
//		bool                                               bSuccessful                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		UWorksCore_EUWorksResult                           Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreStopPlaytimeTrackingNode::OnRequestCompleted(bool bSuccessful, UWorksCore_EUWorksResult Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreStopPlaytimeTrackingNode.OnRequestCompleted");

	UCoreStopPlaytimeTrackingNode_OnRequestCompleted_Params params {};
	params.bSuccessful = bSuccessful;
	params.Result = Result;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002D5610
//		Name   -> Function UWorksCore.CoreStopPlaytimeTrackingForAllItemsNode.StopPlaytimeTrackingForAllItemsNode
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UCoreStopPlaytimeTrackingForAllItemsNode*    ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCoreStopPlaytimeTrackingForAllItemsNode* UCoreStopPlaytimeTrackingForAllItemsNode::STATIC_StopPlaytimeTrackingForAllItemsNode()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreStopPlaytimeTrackingForAllItemsNode.StopPlaytimeTrackingForAllItemsNode");

	UCoreStopPlaytimeTrackingForAllItemsNode_StopPlaytimeTrackingForAllItemsNode_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002D0E40
//		Name   -> Function UWorksCore.CoreStopPlaytimeTrackingForAllItemsNode.OnRequestCompleted
//		Flags  -> (Final, Native, Public)
// Parameters:
//		bool                                               bSuccessful                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		UWorksCore_EUWorksResult                           Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreStopPlaytimeTrackingForAllItemsNode::OnRequestCompleted(bool bSuccessful, UWorksCore_EUWorksResult Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreStopPlaytimeTrackingForAllItemsNode.OnRequestCompleted");

	UCoreStopPlaytimeTrackingForAllItemsNode_OnRequestCompleted_Params params {};
	params.bSuccessful = bSuccessful;
	params.Result = Result;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002D5D80
//		Name   -> Function UWorksCore.CoreRequestEncryptedAppTicketNode.RequestEncryptedAppTicketNode
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		TArray<unsigned char>                              Buffer                                                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
//		class UCoreRequestEncryptedAppTicketNode*          ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCoreRequestEncryptedAppTicketNode* UCoreRequestEncryptedAppTicketNode::STATIC_RequestEncryptedAppTicketNode(TArray<unsigned char> Buffer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreRequestEncryptedAppTicketNode.RequestEncryptedAppTicketNode");

	UCoreRequestEncryptedAppTicketNode_RequestEncryptedAppTicketNode_Params params {};
	params.Buffer = Buffer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002D0E40
//		Name   -> Function UWorksCore.CoreRequestEncryptedAppTicketNode.OnRequestCompleted
//		Flags  -> (Final, Native, Public)
// Parameters:
//		bool                                               bSuccessful                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		UWorksCore_EUWorksResult                           Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreRequestEncryptedAppTicketNode::OnRequestCompleted(bool bSuccessful, UWorksCore_EUWorksResult Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreRequestEncryptedAppTicketNode.OnRequestCompleted");

	UCoreRequestEncryptedAppTicketNode_OnRequestCompleted_Params params {};
	params.bSuccessful = bSuccessful;
	params.Result = Result;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002D5E60
//		Name   -> Function UWorksCore.CoreRequestStoreAuthURLNode.RequestStoreAuthURLNode
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     URL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UCoreRequestStoreAuthURLNode*                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCoreRequestStoreAuthURLNode* UCoreRequestStoreAuthURLNode::STATIC_RequestStoreAuthURLNode(const struct FString& URL)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreRequestStoreAuthURLNode.RequestStoreAuthURLNode");

	UCoreRequestStoreAuthURLNode_RequestStoreAuthURLNode_Params params {};
	params.URL = URL;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002D5C50
//		Name   -> Function UWorksCore.CoreRequestStoreAuthURLNode.OnRequestCompleted
//		Flags  -> (Final, Native, Public)
// Parameters:
//		bool                                               bSuccessful                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     URL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreRequestStoreAuthURLNode::OnRequestCompleted(bool bSuccessful, const struct FString& URL)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreRequestStoreAuthURLNode.OnRequestCompleted");

	UCoreRequestStoreAuthURLNode_OnRequestCompleted_Params params {};
	params.bSuccessful = bSuccessful;
	params.URL = URL;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002D7C60
//		Name   -> Function UWorksCore.CoreRequestUserStatsNode.RequestUserStatsNode
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamID                              SteamID                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		class UCoreRequestUserStatsNode*                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCoreRequestUserStatsNode* UCoreRequestUserStatsNode::STATIC_RequestUserStatsNode(const struct FUWorksSteamID& SteamID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreRequestUserStatsNode.RequestUserStatsNode");

	UCoreRequestUserStatsNode_RequestUserStatsNode_Params params {};
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002D7850
//		Name   -> Function UWorksCore.CoreRequestUserStatsNode.OnRequestCompleted
//		Flags  -> (Final, Native, Public)
// Parameters:
//		bool                                               bSuccessful                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUWorksGameID                               GameID                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		UWorksCore_EUWorksResult                           Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUWorksSteamID                              SteamID                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCoreRequestUserStatsNode::OnRequestCompleted(bool bSuccessful, const struct FUWorksGameID& GameID, UWorksCore_EUWorksResult Result, const struct FUWorksSteamID& SteamID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreRequestUserStatsNode.OnRequestCompleted");

	UCoreRequestUserStatsNode_OnRequestCompleted_Params params {};
	params.bSuccessful = bSuccessful;
	params.GameID = GameID;
	params.Result = Result;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002D7630
//		Name   -> Function UWorksCore.CoreFindOrCreateLeaderboardNode.OnRequestCompleted
//		Flags  -> (Final, Native, Public)
// Parameters:
//		bool                                               bSuccessful                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUWorksSteamLeaderboard                     SteamLeaderboard                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               bLeaderboardFound                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreFindOrCreateLeaderboardNode::OnRequestCompleted(bool bSuccessful, const struct FUWorksSteamLeaderboard& SteamLeaderboard, bool bLeaderboardFound)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreFindOrCreateLeaderboardNode.OnRequestCompleted");

	UCoreFindOrCreateLeaderboardNode_OnRequestCompleted_Params params {};
	params.bSuccessful = bSuccessful;
	params.SteamLeaderboard = SteamLeaderboard;
	params.bLeaderboardFound = bLeaderboardFound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002D7250
//		Name   -> Function UWorksCore.CoreFindOrCreateLeaderboardNode.FindOrCreateLeaderboardNode
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     LeaderboardName                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		UWorksCore_EUWorksLeaderboardSortMethod            LeaderboardSortMethod                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		UWorksCore_EUWorksLeaderboardDisplayType           LeaderboardDisplayType                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UCoreFindOrCreateLeaderboardNode*            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCoreFindOrCreateLeaderboardNode* UCoreFindOrCreateLeaderboardNode::STATIC_FindOrCreateLeaderboardNode(const struct FString& LeaderboardName, UWorksCore_EUWorksLeaderboardSortMethod LeaderboardSortMethod, UWorksCore_EUWorksLeaderboardDisplayType LeaderboardDisplayType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreFindOrCreateLeaderboardNode.FindOrCreateLeaderboardNode");

	UCoreFindOrCreateLeaderboardNode_FindOrCreateLeaderboardNode_Params params {};
	params.LeaderboardName = LeaderboardName;
	params.LeaderboardSortMethod = LeaderboardSortMethod;
	params.LeaderboardDisplayType = LeaderboardDisplayType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002D7630
//		Name   -> Function UWorksCore.CoreFindLeaderboardNode.OnRequestCompleted
//		Flags  -> (Final, Native, Public)
// Parameters:
//		bool                                               bSuccessful                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUWorksSteamLeaderboard                     SteamLeaderboard                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               bLeaderboardFound                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreFindLeaderboardNode::OnRequestCompleted(bool bSuccessful, const struct FUWorksSteamLeaderboard& SteamLeaderboard, bool bLeaderboardFound)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreFindLeaderboardNode.OnRequestCompleted");

	UCoreFindLeaderboardNode_OnRequestCompleted_Params params {};
	params.bSuccessful = bSuccessful;
	params.SteamLeaderboard = SteamLeaderboard;
	params.bLeaderboardFound = bLeaderboardFound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002D7170
//		Name   -> Function UWorksCore.CoreFindLeaderboardNode.FindLeaderboardNode
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     LeaderboardName                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UCoreFindLeaderboardNode*                    ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCoreFindLeaderboardNode* UCoreFindLeaderboardNode::STATIC_FindLeaderboardNode(const struct FString& LeaderboardName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreFindLeaderboardNode.FindLeaderboardNode");

	UCoreFindLeaderboardNode_FindLeaderboardNode_Params params {};
	params.LeaderboardName = LeaderboardName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002D74E0
//		Name   -> Function UWorksCore.CoreDownloadLeaderboardEntriesNode.OnRequestCompleted
//		Flags  -> (Final, Native, Public)
// Parameters:
//		bool                                               bSuccessful                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUWorksSteamLeaderboard                     SteamLeaderboard                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FUWorksSteamLeaderboardEntries              SteamLeaderboardEntries                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		int                                                EntryCount                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreDownloadLeaderboardEntriesNode::OnRequestCompleted(bool bSuccessful, const struct FUWorksSteamLeaderboard& SteamLeaderboard, const struct FUWorksSteamLeaderboardEntries& SteamLeaderboardEntries, int EntryCount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreDownloadLeaderboardEntriesNode.OnRequestCompleted");

	UCoreDownloadLeaderboardEntriesNode_OnRequestCompleted_Params params {};
	params.bSuccessful = bSuccessful;
	params.SteamLeaderboard = SteamLeaderboard;
	params.SteamLeaderboardEntries = SteamLeaderboardEntries;
	params.EntryCount = EntryCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002D7030
//		Name   -> Function UWorksCore.CoreDownloadLeaderboardEntriesNode.DownloadLeaderboardEntriesNode
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamLeaderboard                     SteamLeaderboard                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		UWorksCore_EUWorksLeaderboardDataRequest           LeaderboardDataRequest                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                RangeStart                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                RangeEnd                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UCoreDownloadLeaderboardEntriesNode*         ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCoreDownloadLeaderboardEntriesNode* UCoreDownloadLeaderboardEntriesNode::STATIC_DownloadLeaderboardEntriesNode(const struct FUWorksSteamLeaderboard& SteamLeaderboard, UWorksCore_EUWorksLeaderboardDataRequest LeaderboardDataRequest, int RangeStart, int RangeEnd)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreDownloadLeaderboardEntriesNode.DownloadLeaderboardEntriesNode");

	UCoreDownloadLeaderboardEntriesNode_DownloadLeaderboardEntriesNode_Params params {};
	params.SteamLeaderboard = SteamLeaderboard;
	params.LeaderboardDataRequest = LeaderboardDataRequest;
	params.RangeStart = RangeStart;
	params.RangeEnd = RangeEnd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002D74E0
//		Name   -> Function UWorksCore.CoreDownloadLeaderboardEntriesForUsersNode.OnRequestCompleted
//		Flags  -> (Final, Native, Public)
// Parameters:
//		bool                                               bSuccessful                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUWorksSteamLeaderboard                     SteamLeaderboard                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FUWorksSteamLeaderboardEntries              SteamLeaderboardEntries                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		int                                                EntryCount                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreDownloadLeaderboardEntriesForUsersNode::OnRequestCompleted(bool bSuccessful, const struct FUWorksSteamLeaderboard& SteamLeaderboard, const struct FUWorksSteamLeaderboardEntries& SteamLeaderboardEntries, int EntryCount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreDownloadLeaderboardEntriesForUsersNode.OnRequestCompleted");

	UCoreDownloadLeaderboardEntriesForUsersNode_OnRequestCompleted_Params params {};
	params.bSuccessful = bSuccessful;
	params.SteamLeaderboard = SteamLeaderboard;
	params.SteamLeaderboardEntries = SteamLeaderboardEntries;
	params.EntryCount = EntryCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002D6F00
//		Name   -> Function UWorksCore.CoreDownloadLeaderboardEntriesForUsersNode.DownloadLeaderboardEntriesForUsersNode
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamLeaderboard                     SteamLeaderboard                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		TArray<struct FUWorksSteamID>                      users                                                      (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
//		class UCoreDownloadLeaderboardEntriesForUsersNode* ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCoreDownloadLeaderboardEntriesForUsersNode* UCoreDownloadLeaderboardEntriesForUsersNode::STATIC_DownloadLeaderboardEntriesForUsersNode(const struct FUWorksSteamLeaderboard& SteamLeaderboard, TArray<struct FUWorksSteamID> users)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreDownloadLeaderboardEntriesForUsersNode.DownloadLeaderboardEntriesForUsersNode");

	UCoreDownloadLeaderboardEntriesForUsersNode_DownloadLeaderboardEntriesForUsersNode_Params params {};
	params.SteamLeaderboard = SteamLeaderboard;
	params.users = users;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002D7CE0
//		Name   -> Function UWorksCore.CoreUploadLeaderboardScoreNode.UploadLeaderboardScoreNode
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamLeaderboard                     SteamLeaderboard                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		UWorksCore_EUWorksLeaderboardUploadScoreMethod     LeaderboardUploadScoreMethod                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Score                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<int>                                        ScoreDetails                                               (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
//		class UCoreUploadLeaderboardScoreNode*             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCoreUploadLeaderboardScoreNode* UCoreUploadLeaderboardScoreNode::STATIC_UploadLeaderboardScoreNode(const struct FUWorksSteamLeaderboard& SteamLeaderboard, UWorksCore_EUWorksLeaderboardUploadScoreMethod LeaderboardUploadScoreMethod, int Score, TArray<int> ScoreDetails)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreUploadLeaderboardScoreNode.UploadLeaderboardScoreNode");

	UCoreUploadLeaderboardScoreNode_UploadLeaderboardScoreNode_Params params {};
	params.SteamLeaderboard = SteamLeaderboard;
	params.LeaderboardUploadScoreMethod = LeaderboardUploadScoreMethod;
	params.Score = Score;
	params.ScoreDetails = ScoreDetails;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002D79A0
//		Name   -> Function UWorksCore.CoreUploadLeaderboardScoreNode.OnRequestCompleted
//		Flags  -> (Final, Native, Public)
// Parameters:
//		bool                                               bSuccessful                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bSuccess                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUWorksSteamLeaderboard                     SteamLeaderboard                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		int                                                Score                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bScoreChanged                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                GlobalRankNew                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                GlobalRankPrevious                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreUploadLeaderboardScoreNode::OnRequestCompleted(bool bSuccessful, bool bSuccess, const struct FUWorksSteamLeaderboard& SteamLeaderboard, int Score, bool bScoreChanged, int GlobalRankNew, int GlobalRankPrevious)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreUploadLeaderboardScoreNode.OnRequestCompleted");

	UCoreUploadLeaderboardScoreNode_OnRequestCompleted_Params params {};
	params.bSuccessful = bSuccessful;
	params.bSuccess = bSuccess;
	params.SteamLeaderboard = SteamLeaderboard;
	params.Score = Score;
	params.bScoreChanged = bScoreChanged;
	params.GlobalRankNew = GlobalRankNew;
	params.GlobalRankPrevious = GlobalRankPrevious;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002D73D0
//		Name   -> Function UWorksCore.CoreAttachLeaderboardUGCNode.OnRequestCompleted
//		Flags  -> (Final, Native, Public)
// Parameters:
//		bool                                               bSuccessful                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		UWorksCore_EUWorksResult                           Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUWorksSteamLeaderboard                     SteamLeaderboard                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCoreAttachLeaderboardUGCNode::OnRequestCompleted(bool bSuccessful, UWorksCore_EUWorksResult Result, const struct FUWorksSteamLeaderboard& SteamLeaderboard)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreAttachLeaderboardUGCNode.OnRequestCompleted");

	UCoreAttachLeaderboardUGCNode_OnRequestCompleted_Params params {};
	params.bSuccessful = bSuccessful;
	params.Result = Result;
	params.SteamLeaderboard = SteamLeaderboard;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002D6E40
//		Name   -> Function UWorksCore.CoreAttachLeaderboardUGCNode.AttachLeaderboardUGCNode
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FUWorksSteamLeaderboard                     SteamLeaderboard                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FUWorksUGCHandle                            UGCHandle                                                  (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		class UCoreAttachLeaderboardUGCNode*               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCoreAttachLeaderboardUGCNode* UCoreAttachLeaderboardUGCNode::STATIC_AttachLeaderboardUGCNode(const struct FUWorksSteamLeaderboard& SteamLeaderboard, const struct FUWorksUGCHandle& UGCHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreAttachLeaderboardUGCNode.AttachLeaderboardUGCNode");

	UCoreAttachLeaderboardUGCNode_AttachLeaderboardUGCNode_Params params {};
	params.SteamLeaderboard = SteamLeaderboard;
	params.UGCHandle = UGCHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002D7740
//		Name   -> Function UWorksCore.CoreGetNumberOfCurrentPlayersNode.OnRequestCompleted
//		Flags  -> (Final, Native, Public)
// Parameters:
//		bool                                               bSuccessful                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bSuccess                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Players                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreGetNumberOfCurrentPlayersNode::OnRequestCompleted(bool bSuccessful, bool bSuccess, int Players)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreGetNumberOfCurrentPlayersNode.OnRequestCompleted");

	UCoreGetNumberOfCurrentPlayersNode_OnRequestCompleted_Params params {};
	params.bSuccessful = bSuccessful;
	params.bSuccess = bSuccess;
	params.Players = Players;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002D73A0
//		Name   -> Function UWorksCore.CoreGetNumberOfCurrentPlayersNode.GetNumberOfCurrentPlayersNode
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UCoreGetNumberOfCurrentPlayersNode*          ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCoreGetNumberOfCurrentPlayersNode* UCoreGetNumberOfCurrentPlayersNode::STATIC_GetNumberOfCurrentPlayersNode()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreGetNumberOfCurrentPlayersNode.GetNumberOfCurrentPlayersNode");

	UCoreGetNumberOfCurrentPlayersNode_GetNumberOfCurrentPlayersNode_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002D7BB0
//		Name   -> Function UWorksCore.CoreRequestGlobalAchievementPercentagesNode.RequestGlobalAchievementPercentagesNode
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UCoreRequestGlobalAchievementPercentagesNode* ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCoreRequestGlobalAchievementPercentagesNode* UCoreRequestGlobalAchievementPercentagesNode::STATIC_RequestGlobalAchievementPercentagesNode()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreRequestGlobalAchievementPercentagesNode.RequestGlobalAchievementPercentagesNode");

	UCoreRequestGlobalAchievementPercentagesNode_RequestGlobalAchievementPercentagesNode_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002D0530
//		Name   -> Function UWorksCore.CoreRequestGlobalAchievementPercentagesNode.OnRequestCompleted
//		Flags  -> (Final, Native, Public)
// Parameters:
//		bool                                               bSuccessful                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUWorksGameID                               GameID                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		UWorksCore_EUWorksResult                           Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreRequestGlobalAchievementPercentagesNode::OnRequestCompleted(bool bSuccessful, const struct FUWorksGameID& GameID, UWorksCore_EUWorksResult Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreRequestGlobalAchievementPercentagesNode.OnRequestCompleted");

	UCoreRequestGlobalAchievementPercentagesNode_OnRequestCompleted_Params params {};
	params.bSuccessful = bSuccessful;
	params.GameID = GameID;
	params.Result = Result;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002D7BE0
//		Name   -> Function UWorksCore.CoreRequestGlobalStatsNode.RequestGlobalStatsNode
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		int                                                HistoryDays                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UCoreRequestGlobalStatsNode*                 ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCoreRequestGlobalStatsNode* UCoreRequestGlobalStatsNode::STATIC_RequestGlobalStatsNode(int HistoryDays)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreRequestGlobalStatsNode.RequestGlobalStatsNode");

	UCoreRequestGlobalStatsNode_RequestGlobalStatsNode_Params params {};
	params.HistoryDays = HistoryDays;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002D0530
//		Name   -> Function UWorksCore.CoreRequestGlobalStatsNode.OnRequestCompleted
//		Flags  -> (Final, Native, Public)
// Parameters:
//		bool                                               bSuccessful                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUWorksGameID                               GameID                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		UWorksCore_EUWorksResult                           Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreRequestGlobalStatsNode::OnRequestCompleted(bool bSuccessful, const struct FUWorksGameID& GameID, UWorksCore_EUWorksResult Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreRequestGlobalStatsNode.OnRequestCompleted");

	UCoreRequestGlobalStatsNode_OnRequestCompleted_Params params {};
	params.bSuccessful = bSuccessful;
	params.GameID = GameID;
	params.Result = Result;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
