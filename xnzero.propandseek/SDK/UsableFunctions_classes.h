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

// BlueprintGeneratedClass UsableFunctions.UsableFunctions_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UUsableFunctions_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass UsableFunctions.UsableFunctions_C");
		return ptr;
	}



	void STATIC_shop_items_MinMax(class UObject* __WorldContext, int* Datatable_Min, int* Datatable_Max);
	void STATIC_Inven_Spectators_MinMax(class UObject* __WorldContext, int* Datatable_Min, int* Datatable_Max);
	void STATIC_Inven_TauntingSounds_MinMax(class UObject* __WorldContext, int* Datatable_Min, int* Datatable_Max);
	void STATIC_SessionSettings_GetVersion(const struct FString& gameSessionData, class UObject* __WorldContext, struct FString* VersionText);
	void STATIC_SessionSettings_DisableFreecam_(const struct FString& gameSessionData, class UObject* __WorldContext, bool* DisableFreecam_);
	void STATIC_ConvertPurchaseDate_B(const struct FDateTime& DateTime, class UObject* __WorldContext, int* DateInInteger);
	void STATIC_ConvertPurchaseDate_A(int IntegerDate, class UObject* __WorldContext, struct FDateTime* DateTime, struct FString* DisplayDate);
	void STATIC_SetItemExpiration(int Days, int ItemIntegerDate, class UObject* __WorldContext, int* ExpirationDateReturn);
	void STATIC_GetItemExpiration(int IntegerDate, class UObject* __WorldContext, TEnumAsByte<EItemExpirationReturn_EItemExpirationReturn>* State, struct FDateTime* ExpireDate);
	void STATIC_AddExpThumbsUp(const struct FSCashItemsGameInfo& BattlePass, class UObject* __WorldContext, int* Output_Exp, int* Output_Points);
	void STATIC_Report_ConvertStringTime(const struct FString& DateTime, class UObject* __WorldContext, struct FString* DateTimeDisplayString);
	void STATIC_Report_DeleteLastLetter(const struct FText& Content, int TextLimit, class UObject* __WorldContext, struct FText* CutOff_Content);
	void STATIC_ReportListConverter(TEnumAsByte<EReportList_EReportList> WhichReportSection_, class UObject* __WorldContext, struct FString* FirebaseChildName);
	void STATIC_Report_RetrievePlayer(const struct FString& SourceString, class UObject* __WorldContext, struct FString* Player);
	void STATIC_Report_RetrieveContent(const struct FString& SourceString, class UObject* __WorldContext, struct FString* Content);
	void STATIC_Report_RetrieveReplyBool(const struct FString& SourceString, class UObject* __WorldContext, bool* Replied_);
	void STATIC_Report_RetrieveTime(const struct FString& SourceString, class UObject* __WorldContext, struct FString* Time);
	void STATIC_SessionStatusConverter(int currentPlayerSessionCount, TEnumAsByte<AmazonStatus_EAmazonStatus> playerSessionCreationPolicy, class UObject* __WorldContext, const struct FText& status);
	void STATIC_SessionDataNameConverter(const struct FString& Name, class UObject* __WorldContext, struct FString* Data1);
	void STATIC_LatestPlayerVersion(class UObject* __WorldContext, int* CurrentVersion);
	void STATIC_ExpPointsPenalty(class UObject* __WorldContext, int* ExpPenalty, int* GoldCoinsPenalty);
	void STATIC_SessionSettings_DisableStartUntilFull_(const struct FString& gameSessionData, class UObject* __WorldContext, bool* DisableStartUntilFull);
	void STATIC_SessionSettings_DisableHunter_(const struct FString& gameSessionData, class UObject* __WorldContext, bool* DisableHunter_);
	void STATIC_AddExpPoints_WinRound_(const struct FSCashItemsGameInfo& SCashItemsGameInfo, class UObject* __WorldContext, int* Output_Exp, int* Output_Points);
	void STATIC_AddExpPoints_LostRound_(const struct FSCashItemsGameInfo& SCashItemsGameInfo, class UObject* __WorldContext, int* Output_Exp, int* Output_Points);
	void STATIC_AddExpPoints_PropSurvival_(const struct FSCashItemsGameInfo& SCashItemsGameInfo, class UObject* __WorldContext, int* Output_Exp, int* Output_Points);
	void STATIC_AddExpPoints_HunterKill_(const struct FSCashItemsGameInfo& BattlePass, class UObject* __WorldContext, int* Output_Exp, int* Output_Points);
	void STATIC_ConvertMatchType(const struct FString& Text, class UObject* __WorldContext, TEnumAsByte<EMatchType_EMatchType>* matchType);
	void STATIC_ShotgunSpreadRange(class UObject* __WorldContext, float* Min, float* Max);
	void STATIC_ServerRegionNameConverter(const struct FString& Input_ServerRegionName, class UObject* __WorldContext, struct FString* RegionDisplayName, TEnumAsByte<RegionList_ERegionList>* RegionEnum);
	void STATIC_MapNameConverter(TEnumAsByte<WhichMap_EWhichMap> MapName, class UObject* __WorldContext, struct FString* MapNameTxt);
	void STATIC_SessionSettings_TeamChatOnly_(const struct FString& gameSessionData, class UObject* __WorldContext, bool* OnlyTeamChat_);
	void STATIC_KickTime(class UObject* __WorldContext, struct FTimespan* KickTime);
	void STATIC_SessionSettings_DisableProp_(const struct FString& gameSessionData, class UObject* __WorldContext, bool* DisableView_);
	void STATIC_NewUsername_ToString(TArray<int>* Int, class UObject* __WorldContext, TArray<unsigned char>* Bytes);
	void STATIC_NewUsername_ToInt(TArray<unsigned char>* Bytes, class UObject* __WorldContext, TArray<int>* Int);
	void STATIC_RefundContent(const struct FString& Content, class UObject* __WorldContext, bool* Success_, struct FString* OrderID);
	void STATIC_RefundPolicy(class UObject* __WorldContext, struct FTimespan* Timespan);
	void STATIC_ConvertShopItemAmount(TEnumAsByte<TxnType_ETxnType> ItemType, class UObject* __WorldContext, int* ActualAmount);
	void STATIC_ConvertShopItemName(TEnumAsByte<TxnType_ETxnType> ItemType, class UObject* __WorldContext, struct FText* ItemTypeToText);
	void STATIC__64bitUniqueIDGenerator(class UObject* __WorldContext, struct FText* _64bitUniqueID);
	void STATIC_MicrotxnResult(const struct FString& Context, class UObject* __WorldContext, bool* Success_);
	void STATIC_MicrotxnOrderID(const struct FString& Context, class UObject* __WorldContext, struct FString* OrderID);
	void STATIC_Finishing_Points(bool Competitive_, class UObject* __WorldContext, int* FinishingPoints);
	void STATIC_Finishing_Exp(bool Competitive_, class UObject* __WorldContext, int* FinishingExp);
	void STATIC_CalculatePoints(int Prop_Win, int Prop_Survival, int Hunter_Win, int Hunter_Kill, class UObject* __WorldContext, int* TotalPointsEarned);
	void STATIC_CalculateExp(int Prop_Win, int Prop_Survival, int Hunter_Win, int Hunter_Kill, class UObject* __WorldContext, int* TotalExpEarned);
	void STATIC_ItemLevelColor(TEnumAsByte<ItemLevel_EItemLevel> ItemLevel, class UObject* __WorldContext, struct FLinearColor* Color);
	void STATIC_GraphicSettingsLength(class UObject* __WorldContext, int* Min, int* Max);
	void STATIC_HealthSystem_OnSelf_(TEnumAsByte<WeaponList_EWeaponList> Weapon, class UObject* __WorldContext, float* Health);
	void STATIC_DamageSystem_OnSelf_(TEnumAsByte<WeaponList_EWeaponList> Weapon, class UObject* __WorldContext, float* Damage);
	void STATIC_DamageSystem_OnEnemy_(TEnumAsByte<WeaponList_EWeaponList> Weapon, class UObject* __WorldContext, float* Damage);
	void STATIC_SessionSettings_RetrieveNumber(const struct FString& gameSessionData, class UObject* __WorldContext, struct FString* SessionNumber);
	void STATIC_Event_Gandalv_Answer(class UObject* __WorldContext, struct FString* Answer_in_upper_case);
	void STATIC_SessionSettings_RetrieveRegion(const struct FString& gameSessionData, class UObject* __WorldContext, struct FString* region);
	void STATIC_StringDivider(const struct FString& Content, const struct FString& Divider, int DividerAmount, class UObject* __WorldContext, TArray<struct FString>* DividedContent);
	void STATIC_Inven_Items_MinMax(class UObject* __WorldContext, int* Datatable_Min, int* Datatable_Max);
	void STATIC_Inven_Effects_MinMax(class UObject* __WorldContext, int* Datatable_Min, int* Datatable_Max);
	void STATIC_Inven_Ornament_MinMax(class UObject* __WorldContext, int* Datatable_Min, int* Datatable_Max);
	void STATIC_Inven_Alias_MinMax(class UObject* __WorldContext, int* Datatable_Min, int* Datatable_Max);
	void STATIC_SessionSettings_RetrieveCreatorID(const struct FString& gameSessionData, class UObject* __WorldContext, struct FString* creatorId);
	void STATIC_Inven_Character_MinMax(class UObject* __WorldContext, int* Datatable_Min, int* Datatable_Max);
	void STATIC_HowManyPropsPerMap_(TEnumAsByte<WhichMap_EWhichMap> WhichMap_, class UObject* __WorldContext, int* MaxProps);
	void STATIC_MapNameToImage(const struct FString& MapName, class UObject* __WorldContext, class UTexture2D** MapImage);
	void STATIC_SessionSettings_RetrieveTitle(const struct FString& gameSessionData, class UObject* __WorldContext, struct FString* Title);
	void STATIC_SessionSettings_RetrieveMatchType(const struct FString& gameSessionData, class UObject* __WorldContext, struct FString* MatchName);
	void STATIC_SessionSettings_RetrievePassword(const struct FString& gameSessionData, class UObject* __WorldContext, bool* HasPassword_, struct FString* Password);
	void STATIC_SessionSettings_RetrieveMaxPlayer(const struct FString& gameSessionData, class UObject* __WorldContext, struct FString* MaxPlayer);
	void STATIC_SessionSettings_RetrieveMaxRound(const struct FString& gameSessionData, class UObject* __WorldContext, struct FString* MaxRound);
	void STATIC_SessionSettings_RetrieveMap(const struct FString& gameSessionData, class UObject* __WorldContext, struct FString* MapFileName, struct FString* MapDisplayName, TEnumAsByte<WhichMap_EWhichMap>* WhichMap);
	void STATIC_MapNameToFile(const struct FString& MapName, class UObject* __WorldContext, struct FString* MapFileName, TEnumAsByte<WhichMap_EWhichMap>* WhichMap);
	void STATIC_ChatFilter(const struct FString& Chat, class UObject* __WorldContext, bool* Valid_);
	void STATIC_SteamErrorMessageToText(UWorksCore_EUWorksAuthSessionResponse Message, class UObject* __WorldContext, struct FString* Output_Message);
	void STATIC_FitTextureSize(class UTexture2D* InputImage, int limit, class UObject* __WorldContext, struct FVector2D* OutputVector2D);
	void STATIC_RssFeederDateTransition(const struct FString& Input_Date, const struct FString& Input_HrMin, class UObject* __WorldContext, struct FDateTime* Output_DateTime);
	void STATIC_RssFeederLoop(TArray<class UObject*>* RssFeederObject, class UObject* __WorldContext, struct FString* Title1, struct FString* Link1, bool* DisplayFeeder_, struct FString* Date, struct FString* HrMin, struct FString* ActualContent, struct FString* Version);
	void STATIC_WhichDatatable_(TEnumAsByte<WhichMap_EWhichMap> WhichMap_, class UObject* __WorldContext, class UDataTable** DataTable);
	void STATIC_PropSelection_Random(TEnumAsByte<WhichMap_EWhichMap> Map, class UObject* __WorldContext, TArray<int>* _3_Random_1_100);
	void STATIC_ExpToLevel(int Exp_Raw_, class UObject* __WorldContext, int* Level_Raw_, float* Leftovers_Raw_);
	void STATIC_CreateUsernameFilter(const struct FString& userName, class UObject* __WorldContext, bool* Valid_);
	void STATIC_ClampScore_0_5000_(int Score, class UObject* __WorldContext, int* Output_Score);
	void STATIC_MakeStringUsername_StringToNumb(const struct FString& Input__Username_, class UObject* __WorldContext, TArray<int>* Output__ArrayOfNumbers_);
	void STATIC_MakeStringUsername_NumToString(TArray<int>* Input__ArrayOfNumbers_, class UObject* __WorldContext, struct FString* Output__Username1_);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
