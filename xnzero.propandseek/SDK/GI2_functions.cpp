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
//		Offset -> 0x00A0CE40
//		Name   -> Function GI2.GI2_C.RetrieveCompensationInfo2
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     Content                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		TArray<struct FsCompensationInfo>                  Compensations                                              (Parm, OutParm, ZeroConstructor)
void UGI2_C::RetrieveCompensationInfo2(const struct FString& Content, TArray<struct FsCompensationInfo>* Compensations)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI2.GI2_C.RetrieveCompensationInfo2");

	UGI2_C_RetrieveCompensationInfo2_Params params {};
	params.Content = Content;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Compensations != nullptr)
		*Compensations = params.Compensations;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function GI2.GI2_C.GetQuick
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     Content                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		bool                                               Found_                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FString                                     QuickPlayerQueueNumber                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UGI2_C::GetQuick(const struct FString& Content, bool* Found_, struct FString* QuickPlayerQueueNumber)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI2.GI2_C.GetQuick");

	UGI2_C_GetQuick_Params params {};
	params.Content = Content;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Found_ != nullptr)
		*Found_ = params.Found_;
	if (QuickPlayerQueueNumber != nullptr)
		*QuickPlayerQueueNumber = params.QuickPlayerQueueNumber;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function GI2.GI2_C.RetrieveTimedOutSessions
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     Content                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		TArray<struct FString>                             GameSessionIdToDelete                                      (Parm, OutParm, ZeroConstructor)
void UGI2_C::RetrieveTimedOutSessions(const struct FString& Content, TArray<struct FString>* GameSessionIdToDelete)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI2.GI2_C.RetrieveTimedOutSessions");

	UGI2_C_RetrieveTimedOutSessions_Params params {};
	params.Content = Content;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (GameSessionIdToDelete != nullptr)
		*GameSessionIdToDelete = params.GameSessionIdToDelete;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function GI2.GI2_C.GetSessionNumberInfo
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     Content                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     SessionNumber                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UGI2_C::GetSessionNumberInfo(const struct FString& Content, struct FString* SessionNumber)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI2.GI2_C.GetSessionNumberInfo");

	UGI2_C_GetSessionNumberInfo_Params params {};
	params.Content = Content;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SessionNumber != nullptr)
		*SessionNumber = params.SessionNumber;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function GI2.GI2_C.GetGameInformation
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     Content                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     gameSessionData                                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     GameSessionInfo                                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     Creator                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     CurrentRound                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     CurrentPlayer                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     GameStatus                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     TimeCreated                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     Title                                                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     Ban                                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UGI2_C::GetGameInformation(const struct FString& Content, struct FString* gameSessionData, struct FString* GameSessionInfo, struct FString* Creator, struct FString* CurrentRound, struct FString* CurrentPlayer, struct FString* GameStatus, struct FString* TimeCreated, struct FString* Title, struct FString* Ban)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI2.GI2_C.GetGameInformation");

	UGI2_C_GetGameInformation_Params params {};
	params.Content = Content;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (gameSessionData != nullptr)
		*gameSessionData = params.gameSessionData;
	if (GameSessionInfo != nullptr)
		*GameSessionInfo = params.GameSessionInfo;
	if (Creator != nullptr)
		*Creator = params.Creator;
	if (CurrentRound != nullptr)
		*CurrentRound = params.CurrentRound;
	if (CurrentPlayer != nullptr)
		*CurrentPlayer = params.CurrentPlayer;
	if (GameStatus != nullptr)
		*GameStatus = params.GameStatus;
	if (TimeCreated != nullptr)
		*TimeCreated = params.TimeCreated;
	if (Title != nullptr)
		*Title = params.Title;
	if (Ban != nullptr)
		*Ban = params.Ban;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function GI2.GI2_C.GetJson(Sub)
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FString                                     Content                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     Value                                                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UGI2_C::GetJson_Sub_(const struct FString& Content, const struct FString& Key, struct FString* Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI2.GI2_C.GetJson(Sub)");

	UGI2_C_GetJson_Sub__Params params {};
	params.Content = Content;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function GI2.GI2_C.RetrieveGameInfo
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     Content                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     gameSessionId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		bool                                               Found_                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FString                                     FoundString                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UGI2_C::RetrieveGameInfo(const struct FString& Content, const struct FString& gameSessionId, bool* Found_, struct FString* FoundString)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI2.GI2_C.RetrieveGameInfo");

	UGI2_C_RetrieveGameInfo_Params params {};
	params.Content = Content;
	params.gameSessionId = gameSessionId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Found_ != nullptr)
		*Found_ = params.Found_;
	if (FoundString != nullptr)
		*FoundString = params.FoundString;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function GI2.GI2_C.CalculateGoldCoinBuff
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		float                                              Output_Buff                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGI2_C::CalculateGoldCoinBuff(float* Output_Buff)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI2.GI2_C.CalculateGoldCoinBuff");

	UGI2_C_CalculateGoldCoinBuff_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Output_Buff != nullptr)
		*Output_Buff = params.Output_Buff;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function GI2.GI2_C.SelectRegion2
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		TEnumAsByte<RegionList_ERegionList>                WhichRegion                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FString                                     Alias_Lobby                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     Alias_Quick                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     Alias_Competitive                                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     region                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     ConfigurationName_QuickMatch                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     ConfigurationName_CompetitiveMatch                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
//		class UGameLiftClientObject*                       GameliftObject                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGI2_C::SelectRegion2(TEnumAsByte<RegionList_ERegionList> WhichRegion, struct FString* Alias_Lobby, struct FString* Alias_Quick, struct FString* Alias_Competitive, struct FString* region, struct FString* ConfigurationName_QuickMatch, struct FString* ConfigurationName_CompetitiveMatch, class UGameLiftClientObject** GameliftObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI2.GI2_C.SelectRegion2");

	UGI2_C_SelectRegion2_Params params {};
	params.WhichRegion = WhichRegion;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Alias_Lobby != nullptr)
		*Alias_Lobby = params.Alias_Lobby;
	if (Alias_Quick != nullptr)
		*Alias_Quick = params.Alias_Quick;
	if (Alias_Competitive != nullptr)
		*Alias_Competitive = params.Alias_Competitive;
	if (region != nullptr)
		*region = params.region;
	if (ConfigurationName_QuickMatch != nullptr)
		*ConfigurationName_QuickMatch = params.ConfigurationName_QuickMatch;
	if (ConfigurationName_CompetitiveMatch != nullptr)
		*ConfigurationName_CompetitiveMatch = params.ConfigurationName_CompetitiveMatch;
	if (GameliftObject != nullptr)
		*GameliftObject = params.GameliftObject;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function GI2.GI2_C.GameFilter
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     gameSessionId                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     GameSessionInfo                                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     Creator                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     CurrentRounds                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     CurrentPlayers                                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     GameStatus                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     Time                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     Title                                                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     Ban                                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UGI2_C::GameFilter(const struct FString& Item, struct FString* gameSessionId, struct FString* GameSessionInfo, struct FString* Creator, struct FString* CurrentRounds, struct FString* CurrentPlayers, struct FString* GameStatus, struct FString* Time, struct FString* Title, struct FString* Ban)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI2.GI2_C.GameFilter");

	UGI2_C_GameFilter_Params params {};
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (gameSessionId != nullptr)
		*gameSessionId = params.gameSessionId;
	if (GameSessionInfo != nullptr)
		*GameSessionInfo = params.GameSessionInfo;
	if (Creator != nullptr)
		*Creator = params.Creator;
	if (CurrentRounds != nullptr)
		*CurrentRounds = params.CurrentRounds;
	if (CurrentPlayers != nullptr)
		*CurrentPlayers = params.CurrentPlayers;
	if (GameStatus != nullptr)
		*GameStatus = params.GameStatus;
	if (Time != nullptr)
		*Time = params.Time;
	if (Title != nullptr)
		*Title = params.Title;
	if (Ban != nullptr)
		*Ban = params.Ban;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function GI2.GI2_C.ItemFilter
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     KeyName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
struct FString UGI2_C::ItemFilter(const struct FString& Item, const struct FString& KeyName, const struct FString& Type)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI2.GI2_C.ItemFilter");

	UGI2_C_ItemFilter_Params params {};
	params.Item = Item;
	params.KeyName = KeyName;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function GI2.GI2_C.UpdateSessionInfo
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     gameSessionData                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     Title                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     Creator                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UGI2_C::UpdateSessionInfo(const struct FString& gameSessionData, const struct FString& Title, const struct FString& Creator)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI2.GI2_C.UpdateSessionInfo");

	UGI2_C_UpdateSessionInfo_Params params {};
	params.gameSessionData = gameSessionData;
	params.Title = Title;
	params.Creator = Creator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function GI2.GI2_C.UpdateAnnouncerVolume
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Volume                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGI2_C::UpdateAnnouncerVolume(float Volume)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI2.GI2_C.UpdateAnnouncerVolume");

	UGI2_C_UpdateAnnouncerVolume_Params params {};
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function GI2.GI2_C.UpdateAmbienceVolume
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Volume                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGI2_C::UpdateAmbienceVolume(float Volume)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI2.GI2_C.UpdateAmbienceVolume");

	UGI2_C_UpdateAmbienceVolume_Params params {};
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function GI2.GI2_C.DeploySessionSettings
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     Title                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     Map                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     MaxRound                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     MaxPlayer                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     Password                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		bool                                               OnlyTeamChat_                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               DisableHunterOutline_                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               DisablePropOutline_                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               DisableStartUntilFull_                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FString                                     creatorId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     SessionNumber                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		TEnumAsByte<EMatchType_EMatchType>                 matchType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<RegionList_ERegionList>                SessionRegion                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<WhichMap_EWhichMap>                    WhichMap                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               DisableFreecam_                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGI2_C::DeploySessionSettings(const struct FString& Title, const struct FString& Map, const struct FString& MaxRound, const struct FString& MaxPlayer, const struct FString& Password, bool OnlyTeamChat_, bool DisableHunterOutline_, bool DisablePropOutline_, bool DisableStartUntilFull_, const struct FString& creatorId, const struct FString& SessionNumber, TEnumAsByte<EMatchType_EMatchType> matchType, TEnumAsByte<RegionList_ERegionList> SessionRegion, TEnumAsByte<WhichMap_EWhichMap> WhichMap, bool DisableFreecam_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI2.GI2_C.DeploySessionSettings");

	UGI2_C_DeploySessionSettings_Params params {};
	params.Title = Title;
	params.Map = Map;
	params.MaxRound = MaxRound;
	params.MaxPlayer = MaxPlayer;
	params.Password = Password;
	params.OnlyTeamChat_ = OnlyTeamChat_;
	params.DisableHunterOutline_ = DisableHunterOutline_;
	params.DisablePropOutline_ = DisablePropOutline_;
	params.DisableStartUntilFull_ = DisableStartUntilFull_;
	params.creatorId = creatorId;
	params.SessionNumber = SessionNumber;
	params.matchType = matchType;
	params.SessionRegion = SessionRegion;
	params.WhichMap = WhichMap;
	params.DisableFreecam_ = DisableFreecam_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function GI2.GI2_C.CheckPlayerController
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               NoPlayersExist_                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGI2_C::CheckPlayerController(bool* NoPlayersExist_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI2.GI2_C.CheckPlayerController");

	UGI2_C_CheckPlayerController_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NoPlayersExist_ != nullptr)
		*NoPlayersExist_ = params.NoPlayersExist_;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function GI2.GI2_C.InvalidateAllTimer
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UGI2_C::InvalidateAllTimer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI2.GI2_C.InvalidateAllTimer");

	UGI2_C_InvalidateAllTimer_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function GI2.GI2_C.SelectRegion
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FString                                     Alias_Lobby                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     Alias_Quick                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     Alias_Competitive                                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     region                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     ConfigurationName_QuickMatch                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     ConfigurationName_CompetitiveMatch                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
//		class UGameLiftClientObject*                       GameliftObject                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGI2_C::SelectRegion(struct FString* Alias_Lobby, struct FString* Alias_Quick, struct FString* Alias_Competitive, struct FString* region, struct FString* ConfigurationName_QuickMatch, struct FString* ConfigurationName_CompetitiveMatch, class UGameLiftClientObject** GameliftObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI2.GI2_C.SelectRegion");

	UGI2_C_SelectRegion_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Alias_Lobby != nullptr)
		*Alias_Lobby = params.Alias_Lobby;
	if (Alias_Quick != nullptr)
		*Alias_Quick = params.Alias_Quick;
	if (Alias_Competitive != nullptr)
		*Alias_Competitive = params.Alias_Competitive;
	if (region != nullptr)
		*region = params.region;
	if (ConfigurationName_QuickMatch != nullptr)
		*ConfigurationName_QuickMatch = params.ConfigurationName_QuickMatch;
	if (ConfigurationName_CompetitiveMatch != nullptr)
		*ConfigurationName_CompetitiveMatch = params.ConfigurationName_CompetitiveMatch;
	if (GameliftObject != nullptr)
		*GameliftObject = params.GameliftObject;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function GI2.GI2_C.MessageFilter
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       Message                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FText                                       ModifiedMessage                                            (Parm, OutParm)
void UGI2_C::MessageFilter(const struct FText& Message, struct FText* ModifiedMessage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI2.GI2_C.MessageFilter");

	UGI2_C_MessageFilter_Params params {};
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ModifiedMessage != nullptr)
		*ModifiedMessage = params.ModifiedMessage;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function GI2.GI2_C.UpdateCinematicMode
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UGI2_C::UpdateCinematicMode()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI2.GI2_C.UpdateCinematicMode");

	UGI2_C_UpdateCinematicMode_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function GI2.GI2_C.MouseSensitivityOutput
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		float                                              Sensitivity                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGI2_C::MouseSensitivityOutput(float* Sensitivity)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI2.GI2_C.MouseSensitivityOutput");

	UGI2_C_MouseSensitivityOutput_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Sensitivity != nullptr)
		*Sensitivity = params.Sensitivity;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function GI2.GI2_C.UpdateUIVolume
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Volume                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGI2_C::UpdateUIVolume(float Volume)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI2.GI2_C.UpdateUIVolume");

	UGI2_C_UpdateUIVolume_Params params {};
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function GI2.GI2_C.UpdateEffectsVolume
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Volume                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGI2_C::UpdateEffectsVolume(float Volume)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI2.GI2_C.UpdateEffectsVolume");

	UGI2_C_UpdateEffectsVolume_Params params {};
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function GI2.GI2_C.UpdateMusicVolume
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Volume                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGI2_C::UpdateMusicVolume(float Volume)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI2.GI2_C.UpdateMusicVolume");

	UGI2_C_UpdateMusicVolume_Params params {};
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function GI2.GI2_C.UpdateMasterVolume
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Volume                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGI2_C::UpdateMasterVolume(float Volume)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI2.GI2_C.UpdateMasterVolume");

	UGI2_C_UpdateMasterVolume_Params params {};
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function GI2.GI2_C.OnAuthFinished
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UGI2_C::OnAuthFinished()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI2.GI2_C.OnAuthFinished");

	UGI2_C_OnAuthFinished_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function GI2.GI2_C.OnGetAllLobbies
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UGI2_C::OnGetAllLobbies()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI2.GI2_C.OnGetAllLobbies");

	UGI2_C_OnGetAllLobbies_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function GI2.GI2_C.OnGetAllGames
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UGI2_C::OnGetAllGames()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI2.GI2_C.OnGetAllGames");

	UGI2_C_OnGetAllGames_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function GI2.GI2_C.OnProcessReady
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UGI2_C::OnProcessReady()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI2.GI2_C.OnProcessReady");

	UGI2_C_OnProcessReady_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function GI2.GI2_C.GetAllGames
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ALobbyPC2_C*                                 LobbyPC                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGI2_C::GetAllGames(class ALobbyPC2_C* LobbyPC)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI2.GI2_C.GetAllGames");

	UGI2_C_GetAllGames_Params params {};
	params.LobbyPC = LobbyPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function GI2.GI2_C.JoinLobbyClient
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UGI2_C::JoinLobbyClient()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI2.GI2_C.JoinLobbyClient");

	UGI2_C_JoinLobbyClient_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function GI2.GI2_C.Trials
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UGI2_C::Trials()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI2.GI2_C.Trials");

	UGI2_C_Trials_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function GI2.GI2_C.CreatePlayerSession
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UGI2_C::CreatePlayerSession()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI2.GI2_C.CreatePlayerSession");

	UGI2_C_CreatePlayerSession_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function GI2.GI2_C.RetrieveRoomInfo
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UGI2_C::RetrieveRoomInfo()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI2.GI2_C.RetrieveRoomInfo");

	UGI2_C_RetrieveRoomInfo_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function GI2.GI2_C.OnCompletedHttpRequest(GetInfos)
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ULowEntryHttpRequestResponse*                Response                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGI2_C::OnCompletedHttpRequest_GetInfos_(class ULowEntryHttpRequestResponse* Response)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI2.GI2_C.OnCompletedHttpRequest(GetInfos)");

	UGI2_C_OnCompletedHttpRequest_GetInfos__Params params {};
	params.Response = Response;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function GI2.GI2_C.UpdateGameInfo
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<EDyGameSession_EDyGameSession>         WorkType_Key_                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FString                                     Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UGI2_C::UpdateGameInfo(TEnumAsByte<EDyGameSession_EDyGameSession> WorkType_Key_, const struct FString& Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI2.GI2_C.UpdateGameInfo");

	UGI2_C_UpdateGameInfo_Params params {};
	params.WorkType_Key_ = WorkType_Key_;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function GI2.GI2_C.OnCompletedHttpRequest(UpdateGameInfo)
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ULowEntryHttpRequestResponse*                Response                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGI2_C::OnCompletedHttpRequest_UpdateGameInfo_(class ULowEntryHttpRequestResponse* Response)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI2.GI2_C.OnCompletedHttpRequest(UpdateGameInfo)");

	UGI2_C_OnCompletedHttpRequest_UpdateGameInfo__Params params {};
	params.Response = Response;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function GI2.GI2_C.DeleteDynamoDBList
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UGI2_C::DeleteDynamoDBList()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI2.GI2_C.DeleteDynamoDBList");

	UGI2_C_DeleteDynamoDBList_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function GI2.GI2_C.OnCompletedHttpRequest(Delete)
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ULowEntryHttpRequestResponse*                Response                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGI2_C::OnCompletedHttpRequest_Delete_(class ULowEntryHttpRequestResponse* Response)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI2.GI2_C.OnCompletedHttpRequest(Delete)");

	UGI2_C_OnCompletedHttpRequest_Delete__Params params {};
	params.Response = Response;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function GI2.GI2_C.GetSessionNumber
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ALobbyPC2_C*                                 LobbyPC                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGI2_C::GetSessionNumber(class ALobbyPC2_C* LobbyPC)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI2.GI2_C.GetSessionNumber");

	UGI2_C_GetSessionNumber_Params params {};
	params.LobbyPC = LobbyPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function GI2.GI2_C.OnCompletedHttpRequest(GetSessionNumber)
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ULowEntryHttpRequestResponse*                Response                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGI2_C::OnCompletedHttpRequest_GetSessionNumber_(class ULowEntryHttpRequestResponse* Response)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI2.GI2_C.OnCompletedHttpRequest(GetSessionNumber)");

	UGI2_C_OnCompletedHttpRequest_GetSessionNumber__Params params {};
	params.Response = Response;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function GI2.GI2_C.OnCompletedHttpRequest(SetSessionNumber)
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ULowEntryHttpRequestResponse*                Response                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGI2_C::OnCompletedHttpRequest_SetSessionNumber_(class ULowEntryHttpRequestResponse* Response)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI2.GI2_C.OnCompletedHttpRequest(SetSessionNumber)");

	UGI2_C_OnCompletedHttpRequest_SetSessionNumber__Params params {};
	params.Response = Response;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function GI2.GI2_C.MakeGameSession
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     gameSessionId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     GameSessionInfo                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     Creator                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     Title                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UGI2_C::MakeGameSession(const struct FString& gameSessionId, const struct FString& GameSessionInfo, const struct FString& Creator, const struct FString& Title)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI2.GI2_C.MakeGameSession");

	UGI2_C_MakeGameSession_Params params {};
	params.gameSessionId = gameSessionId;
	params.GameSessionInfo = GameSessionInfo;
	params.Creator = Creator;
	params.Title = Title;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function GI2.GI2_C.OnCompletedHttpRequest(MakeGame)
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ULowEntryHttpRequestResponse*                Response                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGI2_C::OnCompletedHttpRequest_MakeGame_(class ULowEntryHttpRequestResponse* Response)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI2.GI2_C.OnCompletedHttpRequest(MakeGame)");

	UGI2_C_OnCompletedHttpRequest_MakeGame__Params params {};
	params.Response = Response;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function GI2.GI2_C.VerifyGameSessions
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UGI2_C::VerifyGameSessions()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI2.GI2_C.VerifyGameSessions");

	UGI2_C_VerifyGameSessions_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function GI2.GI2_C.OnCompletedHttpRequest(VerifyGameSessions)
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ULowEntryHttpRequestResponse*                Response                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGI2_C::OnCompletedHttpRequest_VerifyGameSessions_(class ULowEntryHttpRequestResponse* Response)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI2.GI2_C.OnCompletedHttpRequest(VerifyGameSessions)");

	UGI2_C_OnCompletedHttpRequest_VerifyGameSessions__Params params {};
	params.Response = Response;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function GI2.GI2_C.OnCompletedHttpRequest(DeleteQueue)
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ULowEntryHttpRequestResponse*                Response                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGI2_C::OnCompletedHttpRequest_DeleteQueue_(class ULowEntryHttpRequestResponse* Response)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI2.GI2_C.OnCompletedHttpRequest(DeleteQueue)");

	UGI2_C_OnCompletedHttpRequest_DeleteQueue__Params params {};
	params.Response = Response;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function GI2.GI2_C.AddQuickQueueNumber
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UGI2_C::AddQuickQueueNumber()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI2.GI2_C.AddQuickQueueNumber");

	UGI2_C_AddQuickQueueNumber_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function GI2.GI2_C.OnCompletedHttpRequest(GetQuickQueuePlayerNumber)
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ULowEntryHttpRequestResponse*                Response                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGI2_C::OnCompletedHttpRequest_GetQuickQueuePlayerNumber_(class ULowEntryHttpRequestResponse* Response)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI2.GI2_C.OnCompletedHttpRequest(GetQuickQueuePlayerNumber)");

	UGI2_C_OnCompletedHttpRequest_GetQuickQueuePlayerNumber__Params params {};
	params.Response = Response;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function GI2.GI2_C.OnCompletedHttpRequest(AddQuickQueue)Post
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ULowEntryHttpRequestResponse*                Response                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGI2_C::OnCompletedHttpRequest_AddQuickQueue_Post(class ULowEntryHttpRequestResponse* Response)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI2.GI2_C.OnCompletedHttpRequest(AddQuickQueue)Post");

	UGI2_C_OnCompletedHttpRequest_AddQuickQueue_Post_Params params {};
	params.Response = Response;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function GI2.GI2_C.SubtractQuickQueueNumber
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UGI2_C::SubtractQuickQueueNumber()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI2.GI2_C.SubtractQuickQueueNumber");

	UGI2_C_SubtractQuickQueueNumber_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function GI2.GI2_C.InitQuickQueueTimer
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UGI2_C::InitQuickQueueTimer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI2.GI2_C.InitQuickQueueTimer");

	UGI2_C_InitQuickQueueTimer_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function GI2.GI2_C.StartQuickQueueRender
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UGI2_C::StartQuickQueueRender()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI2.GI2_C.StartQuickQueueRender");

	UGI2_C_StartQuickQueueRender_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function GI2.GI2_C.DeleteRequestedGame
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     gameSessionId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UGI2_C::DeleteRequestedGame(const struct FString& gameSessionId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI2.GI2_C.DeleteRequestedGame");

	UGI2_C_DeleteRequestedGame_Params params {};
	params.gameSessionId = gameSessionId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function GI2.GI2_C.OnHttpRequestCompleted(DeleteRequestedGame)
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ULowEntryHttpRequestResponse*                Response                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGI2_C::OnHttpRequestCompleted_DeleteRequestedGame_(class ULowEntryHttpRequestResponse* Response)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI2.GI2_C.OnHttpRequestCompleted(DeleteRequestedGame)");

	UGI2_C_OnHttpRequestCompleted_DeleteRequestedGame__Params params {};
	params.Response = Response;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function GI2.GI2_C.RetrieveCompensationInfo
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ALobbyGM1_C*                                 GM                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGI2_C::RetrieveCompensationInfo(class ALobbyGM1_C* GM)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI2.GI2_C.RetrieveCompensationInfo");

	UGI2_C_RetrieveCompensationInfo_Params params {};
	params.GM = GM;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function GI2.GI2_C.OnCompletedHttpRequest(GetCompensationInfos)
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ULowEntryHttpRequestResponse*                Response                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGI2_C::OnCompletedHttpRequest_GetCompensationInfos_(class ULowEntryHttpRequestResponse* Response)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI2.GI2_C.OnCompletedHttpRequest(GetCompensationInfos)");

	UGI2_C_OnCompletedHttpRequest_GetCompensationInfos__Params params {};
	params.Response = Response;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function GI2.GI2_C.DeleteCompensationInfo
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     SteamIdToUpdate                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UGI2_C::DeleteCompensationInfo(const struct FString& SteamIdToUpdate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI2.GI2_C.DeleteCompensationInfo");

	UGI2_C_DeleteCompensationInfo_Params params {};
	params.SteamIdToUpdate = SteamIdToUpdate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function GI2.GI2_C.OnCompletedHttpRequest(PostCompensationInfos)
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ULowEntryHttpRequestResponse*                Response                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGI2_C::OnCompletedHttpRequest_PostCompensationInfos_(class ULowEntryHttpRequestResponse* Response)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI2.GI2_C.OnCompletedHttpRequest(PostCompensationInfos)");

	UGI2_C_OnCompletedHttpRequest_PostCompensationInfos__Params params {};
	params.Response = Response;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function GI2.GI2_C.Start_Cognito_Auth
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UGI2_C::Start_Cognito_Auth()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI2.GI2_C.Start_Cognito_Auth");

	UGI2_C_Start_Cognito_Auth_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function GI2.GI2_C.ReceiveShutdown
//		Flags  -> (Event, Public, BlueprintEvent)
void UGI2_C::ReceiveShutdown()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI2.GI2_C.ReceiveShutdown");

	UGI2_C_ReceiveShutdown_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function GI2.GI2_C.Check players
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UGI2_C::Check_players()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI2.GI2_C.Check players");

	UGI2_C_Check_players_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function GI2.GI2_C.CheckPlayerSession
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              CheckNoPlayerSession                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AGameModeBase*                               GameMode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGI2_C::CheckPlayerSession(float CheckNoPlayerSession, class AGameModeBase* GameMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI2.GI2_C.CheckPlayerSession");

	UGI2_C_CheckPlayerSession_Params params {};
	params.CheckNoPlayerSession = CheckNoPlayerSession;
	params.GameMode = GameMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function GI2.GI2_C.EndServer
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UGI2_C::EndServer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI2.GI2_C.EndServer");

	UGI2_C_EndServer_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function GI2.GI2_C.InitializeAmazonGamelift
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AGameModeBase*                               GameMode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGI2_C::InitializeAmazonGamelift(class AGameModeBase* GameMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI2.GI2_C.InitializeAmazonGamelift");

	UGI2_C_InitializeAmazonGamelift_Params params {};
	params.GameMode = GameMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function GI2.GI2_C.InitFromFPSGM
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AFPS_GM_C*                                   FPSGM                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGI2_C::InitFromFPSGM(class AFPS_GM_C* FPSGM)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI2.GI2_C.InitFromFPSGM");

	UGI2_C_InitFromFPSGM_Params params {};
	params.FPSGM = FPSGM;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function GI2.GI2_C.ExecuteUbergraph_GI2
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGI2_C::ExecuteUbergraph_GI2(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI2.GI2_C.ExecuteUbergraph_GI2");

	UGI2_C_ExecuteUbergraph_GI2_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
