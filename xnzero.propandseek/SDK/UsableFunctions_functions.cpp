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
//		Name   -> Function UsableFunctions.UsableFunctions_C.shop_items_MinMax
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Datatable_Min                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Datatable_Max                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUsableFunctions_C::STATIC_shop_items_MinMax(class UObject* __WorldContext, int* Datatable_Min, int* Datatable_Max)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UsableFunctions.UsableFunctions_C.shop_items_MinMax");

	UUsableFunctions_C_shop_items_MinMax_Params params {};
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Datatable_Min != nullptr)
		*Datatable_Min = params.Datatable_Min;
	if (Datatable_Max != nullptr)
		*Datatable_Max = params.Datatable_Max;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function UsableFunctions.UsableFunctions_C.Inven_Spectators_MinMax
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Datatable_Min                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Datatable_Max                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUsableFunctions_C::STATIC_Inven_Spectators_MinMax(class UObject* __WorldContext, int* Datatable_Min, int* Datatable_Max)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UsableFunctions.UsableFunctions_C.Inven_Spectators_MinMax");

	UUsableFunctions_C_Inven_Spectators_MinMax_Params params {};
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Datatable_Min != nullptr)
		*Datatable_Min = params.Datatable_Min;
	if (Datatable_Max != nullptr)
		*Datatable_Max = params.Datatable_Max;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function UsableFunctions.UsableFunctions_C.Inven_TauntingSounds_MinMax
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Datatable_Min                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Datatable_Max                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUsableFunctions_C::STATIC_Inven_TauntingSounds_MinMax(class UObject* __WorldContext, int* Datatable_Min, int* Datatable_Max)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UsableFunctions.UsableFunctions_C.Inven_TauntingSounds_MinMax");

	UUsableFunctions_C_Inven_TauntingSounds_MinMax_Params params {};
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Datatable_Min != nullptr)
		*Datatable_Min = params.Datatable_Min;
	if (Datatable_Max != nullptr)
		*Datatable_Max = params.Datatable_Max;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function UsableFunctions.UsableFunctions_C.SessionSettings_GetVersion
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FString                                     gameSessionData                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FString                                     VersionText                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UUsableFunctions_C::STATIC_SessionSettings_GetVersion(const struct FString& gameSessionData, class UObject* __WorldContext, struct FString* VersionText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UsableFunctions.UsableFunctions_C.SessionSettings_GetVersion");

	UUsableFunctions_C_SessionSettings_GetVersion_Params params {};
	params.gameSessionData = gameSessionData;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (VersionText != nullptr)
		*VersionText = params.VersionText;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function UsableFunctions.UsableFunctions_C.SessionSettings_DisableFreecam?
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FString                                     gameSessionData                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               DisableFreecam_                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUsableFunctions_C::STATIC_SessionSettings_DisableFreecam_(const struct FString& gameSessionData, class UObject* __WorldContext, bool* DisableFreecam_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UsableFunctions.UsableFunctions_C.SessionSettings_DisableFreecam?");

	UUsableFunctions_C_SessionSettings_DisableFreecam__Params params {};
	params.gameSessionData = gameSessionData;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DisableFreecam_ != nullptr)
		*DisableFreecam_ = params.DisableFreecam_;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function UsableFunctions.UsableFunctions_C.ConvertPurchaseDate_B
//		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FDateTime                                   DateTime                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                DateInInteger                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUsableFunctions_C::STATIC_ConvertPurchaseDate_B(const struct FDateTime& DateTime, class UObject* __WorldContext, int* DateInInteger)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UsableFunctions.UsableFunctions_C.ConvertPurchaseDate_B");

	UUsableFunctions_C_ConvertPurchaseDate_B_Params params {};
	params.DateTime = DateTime;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DateInInteger != nullptr)
		*DateInInteger = params.DateInInteger;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function UsableFunctions.UsableFunctions_C.ConvertPurchaseDate_A
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		int                                                IntegerDate                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FDateTime                                   DateTime                                                   (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
//		struct FString                                     DisplayDate                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UUsableFunctions_C::STATIC_ConvertPurchaseDate_A(int IntegerDate, class UObject* __WorldContext, struct FDateTime* DateTime, struct FString* DisplayDate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UsableFunctions.UsableFunctions_C.ConvertPurchaseDate_A");

	UUsableFunctions_C_ConvertPurchaseDate_A_Params params {};
	params.IntegerDate = IntegerDate;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DateTime != nullptr)
		*DateTime = params.DateTime;
	if (DisplayDate != nullptr)
		*DisplayDate = params.DisplayDate;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function UsableFunctions.UsableFunctions_C.SetItemExpiration
//		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		int                                                Days                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                ItemIntegerDate                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                ExpirationDateReturn                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUsableFunctions_C::STATIC_SetItemExpiration(int Days, int ItemIntegerDate, class UObject* __WorldContext, int* ExpirationDateReturn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UsableFunctions.UsableFunctions_C.SetItemExpiration");

	UUsableFunctions_C_SetItemExpiration_Params params {};
	params.Days = Days;
	params.ItemIntegerDate = ItemIntegerDate;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ExpirationDateReturn != nullptr)
		*ExpirationDateReturn = params.ExpirationDateReturn;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function UsableFunctions.UsableFunctions_C.GetItemExpiration
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		int                                                IntegerDate                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<EItemExpirationReturn_EItemExpirationReturn> State                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FDateTime                                   ExpireDate                                                 (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
void UUsableFunctions_C::STATIC_GetItemExpiration(int IntegerDate, class UObject* __WorldContext, TEnumAsByte<EItemExpirationReturn_EItemExpirationReturn>* State, struct FDateTime* ExpireDate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UsableFunctions.UsableFunctions_C.GetItemExpiration");

	UUsableFunctions_C_GetItemExpiration_Params params {};
	params.IntegerDate = IntegerDate;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (State != nullptr)
		*State = params.State;
	if (ExpireDate != nullptr)
		*ExpireDate = params.ExpireDate;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function UsableFunctions.UsableFunctions_C.AddExpThumbsUp
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FSCashItemsGameInfo                         BattlePass                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Output_Exp                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Output_Points                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUsableFunctions_C::STATIC_AddExpThumbsUp(const struct FSCashItemsGameInfo& BattlePass, class UObject* __WorldContext, int* Output_Exp, int* Output_Points)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UsableFunctions.UsableFunctions_C.AddExpThumbsUp");

	UUsableFunctions_C_AddExpThumbsUp_Params params {};
	params.BattlePass = BattlePass;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Output_Exp != nullptr)
		*Output_Exp = params.Output_Exp;
	if (Output_Points != nullptr)
		*Output_Points = params.Output_Points;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function UsableFunctions.UsableFunctions_C.Report_ConvertStringTime
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FString                                     DateTime                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FString                                     DateTimeDisplayString                                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UUsableFunctions_C::STATIC_Report_ConvertStringTime(const struct FString& DateTime, class UObject* __WorldContext, struct FString* DateTimeDisplayString)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UsableFunctions.UsableFunctions_C.Report_ConvertStringTime");

	UUsableFunctions_C_Report_ConvertStringTime_Params params {};
	params.DateTime = DateTime;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DateTimeDisplayString != nullptr)
		*DateTimeDisplayString = params.DateTimeDisplayString;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function UsableFunctions.UsableFunctions_C.Report_DeleteLastLetter
//		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       Content                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
//		int                                                TextLimit                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       CutOff_Content                                             (Parm, OutParm)
void UUsableFunctions_C::STATIC_Report_DeleteLastLetter(const struct FText& Content, int TextLimit, class UObject* __WorldContext, struct FText* CutOff_Content)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UsableFunctions.UsableFunctions_C.Report_DeleteLastLetter");

	UUsableFunctions_C_Report_DeleteLastLetter_Params params {};
	params.Content = Content;
	params.TextLimit = TextLimit;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CutOff_Content != nullptr)
		*CutOff_Content = params.CutOff_Content;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function UsableFunctions.UsableFunctions_C.ReportListConverter
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		TEnumAsByte<EReportList_EReportList>               WhichReportSection_                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FString                                     FirebaseChildName                                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UUsableFunctions_C::STATIC_ReportListConverter(TEnumAsByte<EReportList_EReportList> WhichReportSection_, class UObject* __WorldContext, struct FString* FirebaseChildName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UsableFunctions.UsableFunctions_C.ReportListConverter");

	UUsableFunctions_C_ReportListConverter_Params params {};
	params.WhichReportSection_ = WhichReportSection_;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FirebaseChildName != nullptr)
		*FirebaseChildName = params.FirebaseChildName;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function UsableFunctions.UsableFunctions_C.Report_RetrievePlayer
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     SourceString                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FString                                     Player                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UUsableFunctions_C::STATIC_Report_RetrievePlayer(const struct FString& SourceString, class UObject* __WorldContext, struct FString* Player)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UsableFunctions.UsableFunctions_C.Report_RetrievePlayer");

	UUsableFunctions_C_Report_RetrievePlayer_Params params {};
	params.SourceString = SourceString;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Player != nullptr)
		*Player = params.Player;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function UsableFunctions.UsableFunctions_C.Report_RetrieveContent
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     SourceString                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FString                                     Content                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UUsableFunctions_C::STATIC_Report_RetrieveContent(const struct FString& SourceString, class UObject* __WorldContext, struct FString* Content)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UsableFunctions.UsableFunctions_C.Report_RetrieveContent");

	UUsableFunctions_C_Report_RetrieveContent_Params params {};
	params.SourceString = SourceString;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function UsableFunctions.UsableFunctions_C.Report_RetrieveReplyBool
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     SourceString                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Replied_                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUsableFunctions_C::STATIC_Report_RetrieveReplyBool(const struct FString& SourceString, class UObject* __WorldContext, bool* Replied_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UsableFunctions.UsableFunctions_C.Report_RetrieveReplyBool");

	UUsableFunctions_C_Report_RetrieveReplyBool_Params params {};
	params.SourceString = SourceString;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Replied_ != nullptr)
		*Replied_ = params.Replied_;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function UsableFunctions.UsableFunctions_C.Report_RetrieveTime
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     SourceString                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FString                                     Time                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UUsableFunctions_C::STATIC_Report_RetrieveTime(const struct FString& SourceString, class UObject* __WorldContext, struct FString* Time)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UsableFunctions.UsableFunctions_C.Report_RetrieveTime");

	UUsableFunctions_C_Report_RetrieveTime_Params params {};
	params.SourceString = SourceString;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Time != nullptr)
		*Time = params.Time;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function UsableFunctions.UsableFunctions_C.SessionStatusConverter
//		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		int                                                currentPlayerSessionCount                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<AmazonStatus_EAmazonStatus>            playerSessionCreationPolicy                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       status                                                     (ConstParm, Parm, OutParm)
void UUsableFunctions_C::STATIC_SessionStatusConverter(int currentPlayerSessionCount, TEnumAsByte<AmazonStatus_EAmazonStatus> playerSessionCreationPolicy, class UObject* __WorldContext, const struct FText& status)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UsableFunctions.UsableFunctions_C.SessionStatusConverter");

	UUsableFunctions_C_SessionStatusConverter_Params params {};
	params.currentPlayerSessionCount = currentPlayerSessionCount;
	params.playerSessionCreationPolicy = playerSessionCreationPolicy;
	params.__WorldContext = __WorldContext;
	params.status = status;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function UsableFunctions.UsableFunctions_C.SessionDataNameConverter
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FString                                     Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FString                                     Data1                                                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UUsableFunctions_C::STATIC_SessionDataNameConverter(const struct FString& Name, class UObject* __WorldContext, struct FString* Data1)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UsableFunctions.UsableFunctions_C.SessionDataNameConverter");

	UUsableFunctions_C_SessionDataNameConverter_Params params {};
	params.Name = Name;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Data1 != nullptr)
		*Data1 = params.Data1;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function UsableFunctions.UsableFunctions_C.LatestPlayerVersion
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                CurrentVersion                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUsableFunctions_C::STATIC_LatestPlayerVersion(class UObject* __WorldContext, int* CurrentVersion)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UsableFunctions.UsableFunctions_C.LatestPlayerVersion");

	UUsableFunctions_C_LatestPlayerVersion_Params params {};
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CurrentVersion != nullptr)
		*CurrentVersion = params.CurrentVersion;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function UsableFunctions.UsableFunctions_C.ExpPointsPenalty
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                ExpPenalty                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                GoldCoinsPenalty                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUsableFunctions_C::STATIC_ExpPointsPenalty(class UObject* __WorldContext, int* ExpPenalty, int* GoldCoinsPenalty)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UsableFunctions.UsableFunctions_C.ExpPointsPenalty");

	UUsableFunctions_C_ExpPointsPenalty_Params params {};
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ExpPenalty != nullptr)
		*ExpPenalty = params.ExpPenalty;
	if (GoldCoinsPenalty != nullptr)
		*GoldCoinsPenalty = params.GoldCoinsPenalty;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function UsableFunctions.UsableFunctions_C.SessionSettings_DisableStartUntilFull?
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FString                                     gameSessionData                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               DisableStartUntilFull                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUsableFunctions_C::STATIC_SessionSettings_DisableStartUntilFull_(const struct FString& gameSessionData, class UObject* __WorldContext, bool* DisableStartUntilFull)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UsableFunctions.UsableFunctions_C.SessionSettings_DisableStartUntilFull?");

	UUsableFunctions_C_SessionSettings_DisableStartUntilFull__Params params {};
	params.gameSessionData = gameSessionData;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DisableStartUntilFull != nullptr)
		*DisableStartUntilFull = params.DisableStartUntilFull;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function UsableFunctions.UsableFunctions_C.SessionSettings_DisableHunter?
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FString                                     gameSessionData                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               DisableHunter_                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUsableFunctions_C::STATIC_SessionSettings_DisableHunter_(const struct FString& gameSessionData, class UObject* __WorldContext, bool* DisableHunter_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UsableFunctions.UsableFunctions_C.SessionSettings_DisableHunter?");

	UUsableFunctions_C_SessionSettings_DisableHunter__Params params {};
	params.gameSessionData = gameSessionData;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DisableHunter_ != nullptr)
		*DisableHunter_ = params.DisableHunter_;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function UsableFunctions.UsableFunctions_C.AddExpPoints(WinRound)
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FSCashItemsGameInfo                         SCashItemsGameInfo                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Output_Exp                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Output_Points                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUsableFunctions_C::STATIC_AddExpPoints_WinRound_(const struct FSCashItemsGameInfo& SCashItemsGameInfo, class UObject* __WorldContext, int* Output_Exp, int* Output_Points)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UsableFunctions.UsableFunctions_C.AddExpPoints(WinRound)");

	UUsableFunctions_C_AddExpPoints_WinRound__Params params {};
	params.SCashItemsGameInfo = SCashItemsGameInfo;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Output_Exp != nullptr)
		*Output_Exp = params.Output_Exp;
	if (Output_Points != nullptr)
		*Output_Points = params.Output_Points;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function UsableFunctions.UsableFunctions_C.AddExpPoints(LostRound)
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FSCashItemsGameInfo                         SCashItemsGameInfo                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Output_Exp                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Output_Points                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUsableFunctions_C::STATIC_AddExpPoints_LostRound_(const struct FSCashItemsGameInfo& SCashItemsGameInfo, class UObject* __WorldContext, int* Output_Exp, int* Output_Points)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UsableFunctions.UsableFunctions_C.AddExpPoints(LostRound)");

	UUsableFunctions_C_AddExpPoints_LostRound__Params params {};
	params.SCashItemsGameInfo = SCashItemsGameInfo;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Output_Exp != nullptr)
		*Output_Exp = params.Output_Exp;
	if (Output_Points != nullptr)
		*Output_Points = params.Output_Points;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function UsableFunctions.UsableFunctions_C.AddExpPoints(PropSurvival)
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FSCashItemsGameInfo                         SCashItemsGameInfo                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Output_Exp                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Output_Points                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUsableFunctions_C::STATIC_AddExpPoints_PropSurvival_(const struct FSCashItemsGameInfo& SCashItemsGameInfo, class UObject* __WorldContext, int* Output_Exp, int* Output_Points)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UsableFunctions.UsableFunctions_C.AddExpPoints(PropSurvival)");

	UUsableFunctions_C_AddExpPoints_PropSurvival__Params params {};
	params.SCashItemsGameInfo = SCashItemsGameInfo;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Output_Exp != nullptr)
		*Output_Exp = params.Output_Exp;
	if (Output_Points != nullptr)
		*Output_Points = params.Output_Points;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function UsableFunctions.UsableFunctions_C.AddExpPoints(HunterKill)
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FSCashItemsGameInfo                         BattlePass                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Output_Exp                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Output_Points                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUsableFunctions_C::STATIC_AddExpPoints_HunterKill_(const struct FSCashItemsGameInfo& BattlePass, class UObject* __WorldContext, int* Output_Exp, int* Output_Points)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UsableFunctions.UsableFunctions_C.AddExpPoints(HunterKill)");

	UUsableFunctions_C_AddExpPoints_HunterKill__Params params {};
	params.BattlePass = BattlePass;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Output_Exp != nullptr)
		*Output_Exp = params.Output_Exp;
	if (Output_Points != nullptr)
		*Output_Points = params.Output_Points;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function UsableFunctions.UsableFunctions_C.ConvertMatchType
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FString                                     Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<EMatchType_EMatchType>                 matchType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUsableFunctions_C::STATIC_ConvertMatchType(const struct FString& Text, class UObject* __WorldContext, TEnumAsByte<EMatchType_EMatchType>* matchType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UsableFunctions.UsableFunctions_C.ConvertMatchType");

	UUsableFunctions_C_ConvertMatchType_Params params {};
	params.Text = Text;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (matchType != nullptr)
		*matchType = params.matchType;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function UsableFunctions.UsableFunctions_C.ShotgunSpreadRange
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Min                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Max                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUsableFunctions_C::STATIC_ShotgunSpreadRange(class UObject* __WorldContext, float* Min, float* Max)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UsableFunctions.UsableFunctions_C.ShotgunSpreadRange");

	UUsableFunctions_C_ShotgunSpreadRange_Params params {};
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Min != nullptr)
		*Min = params.Min;
	if (Max != nullptr)
		*Max = params.Max;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function UsableFunctions.UsableFunctions_C.ServerRegionNameConverter
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FString                                     Input_ServerRegionName                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FString                                     RegionDisplayName                                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
//		TEnumAsByte<RegionList_ERegionList>                RegionEnum                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUsableFunctions_C::STATIC_ServerRegionNameConverter(const struct FString& Input_ServerRegionName, class UObject* __WorldContext, struct FString* RegionDisplayName, TEnumAsByte<RegionList_ERegionList>* RegionEnum)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UsableFunctions.UsableFunctions_C.ServerRegionNameConverter");

	UUsableFunctions_C_ServerRegionNameConverter_Params params {};
	params.Input_ServerRegionName = Input_ServerRegionName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RegionDisplayName != nullptr)
		*RegionDisplayName = params.RegionDisplayName;
	if (RegionEnum != nullptr)
		*RegionEnum = params.RegionEnum;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function UsableFunctions.UsableFunctions_C.MapNameConverter
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		TEnumAsByte<WhichMap_EWhichMap>                    MapName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FString                                     MapNameTxt                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UUsableFunctions_C::STATIC_MapNameConverter(TEnumAsByte<WhichMap_EWhichMap> MapName, class UObject* __WorldContext, struct FString* MapNameTxt)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UsableFunctions.UsableFunctions_C.MapNameConverter");

	UUsableFunctions_C_MapNameConverter_Params params {};
	params.MapName = MapName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MapNameTxt != nullptr)
		*MapNameTxt = params.MapNameTxt;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function UsableFunctions.UsableFunctions_C.SessionSettings_TeamChatOnly?
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FString                                     gameSessionData                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               OnlyTeamChat_                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUsableFunctions_C::STATIC_SessionSettings_TeamChatOnly_(const struct FString& gameSessionData, class UObject* __WorldContext, bool* OnlyTeamChat_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UsableFunctions.UsableFunctions_C.SessionSettings_TeamChatOnly?");

	UUsableFunctions_C_SessionSettings_TeamChatOnly__Params params {};
	params.gameSessionData = gameSessionData;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OnlyTeamChat_ != nullptr)
		*OnlyTeamChat_ = params.OnlyTeamChat_;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function UsableFunctions.UsableFunctions_C.KickTime
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FTimespan                                   KickTime                                                   (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
void UUsableFunctions_C::STATIC_KickTime(class UObject* __WorldContext, struct FTimespan* KickTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UsableFunctions.UsableFunctions_C.KickTime");

	UUsableFunctions_C_KickTime_Params params {};
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (KickTime != nullptr)
		*KickTime = params.KickTime;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function UsableFunctions.UsableFunctions_C.SessionSettings_DisableProp?
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FString                                     gameSessionData                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               DisableView_                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUsableFunctions_C::STATIC_SessionSettings_DisableProp_(const struct FString& gameSessionData, class UObject* __WorldContext, bool* DisableView_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UsableFunctions.UsableFunctions_C.SessionSettings_DisableProp?");

	UUsableFunctions_C_SessionSettings_DisableProp__Params params {};
	params.gameSessionData = gameSessionData;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DisableView_ != nullptr)
		*DisableView_ = params.DisableView_;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function UsableFunctions.UsableFunctions_C.NewUsername_ToString
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<int>                                        Int                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<unsigned char>                              Bytes                                                      (Parm, OutParm, ZeroConstructor)
void UUsableFunctions_C::STATIC_NewUsername_ToString(TArray<int>* Int, class UObject* __WorldContext, TArray<unsigned char>* Bytes)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UsableFunctions.UsableFunctions_C.NewUsername_ToString");

	UUsableFunctions_C_NewUsername_ToString_Params params {};
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Int != nullptr)
		*Int = params.Int;
	if (Bytes != nullptr)
		*Bytes = params.Bytes;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function UsableFunctions.UsableFunctions_C.NewUsername_ToInt
//		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<unsigned char>                              Bytes                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<int>                                        Int                                                        (Parm, OutParm, ZeroConstructor)
void UUsableFunctions_C::STATIC_NewUsername_ToInt(TArray<unsigned char>* Bytes, class UObject* __WorldContext, TArray<int>* Int)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UsableFunctions.UsableFunctions_C.NewUsername_ToInt");

	UUsableFunctions_C_NewUsername_ToInt_Params params {};
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Bytes != nullptr)
		*Bytes = params.Bytes;
	if (Int != nullptr)
		*Int = params.Int;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function UsableFunctions.UsableFunctions_C.RefundContent
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     Content                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Success_                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FString                                     OrderID                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UUsableFunctions_C::STATIC_RefundContent(const struct FString& Content, class UObject* __WorldContext, bool* Success_, struct FString* OrderID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UsableFunctions.UsableFunctions_C.RefundContent");

	UUsableFunctions_C_RefundContent_Params params {};
	params.Content = Content;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success_ != nullptr)
		*Success_ = params.Success_;
	if (OrderID != nullptr)
		*OrderID = params.OrderID;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function UsableFunctions.UsableFunctions_C.RefundPolicy
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FTimespan                                   Timespan                                                   (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
void UUsableFunctions_C::STATIC_RefundPolicy(class UObject* __WorldContext, struct FTimespan* Timespan)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UsableFunctions.UsableFunctions_C.RefundPolicy");

	UUsableFunctions_C_RefundPolicy_Params params {};
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Timespan != nullptr)
		*Timespan = params.Timespan;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function UsableFunctions.UsableFunctions_C.ConvertShopItemAmount
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		TEnumAsByte<TxnType_ETxnType>                      ItemType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                ActualAmount                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUsableFunctions_C::STATIC_ConvertShopItemAmount(TEnumAsByte<TxnType_ETxnType> ItemType, class UObject* __WorldContext, int* ActualAmount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UsableFunctions.UsableFunctions_C.ConvertShopItemAmount");

	UUsableFunctions_C_ConvertShopItemAmount_Params params {};
	params.ItemType = ItemType;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ActualAmount != nullptr)
		*ActualAmount = params.ActualAmount;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function UsableFunctions.UsableFunctions_C.ConvertShopItemName
//		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		TEnumAsByte<TxnType_ETxnType>                      ItemType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       ItemTypeToText                                             (Parm, OutParm)
void UUsableFunctions_C::STATIC_ConvertShopItemName(TEnumAsByte<TxnType_ETxnType> ItemType, class UObject* __WorldContext, struct FText* ItemTypeToText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UsableFunctions.UsableFunctions_C.ConvertShopItemName");

	UUsableFunctions_C_ConvertShopItemName_Params params {};
	params.ItemType = ItemType;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ItemTypeToText != nullptr)
		*ItemTypeToText = params.ItemTypeToText;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function UsableFunctions.UsableFunctions_C.64bitUniqueIDGenerator
//		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       _64bitUniqueID                                             (Parm, OutParm)
void UUsableFunctions_C::STATIC__64bitUniqueIDGenerator(class UObject* __WorldContext, struct FText* _64bitUniqueID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UsableFunctions.UsableFunctions_C.64bitUniqueIDGenerator");

	UUsableFunctions_C__64bitUniqueIDGenerator_Params params {};
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (_64bitUniqueID != nullptr)
		*_64bitUniqueID = params._64bitUniqueID;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function UsableFunctions.UsableFunctions_C.MicrotxnResult
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FString                                     Context                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Success_                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUsableFunctions_C::STATIC_MicrotxnResult(const struct FString& Context, class UObject* __WorldContext, bool* Success_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UsableFunctions.UsableFunctions_C.MicrotxnResult");

	UUsableFunctions_C_MicrotxnResult_Params params {};
	params.Context = Context;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success_ != nullptr)
		*Success_ = params.Success_;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function UsableFunctions.UsableFunctions_C.MicrotxnOrderID
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FString                                     Context                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FString                                     OrderID                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UUsableFunctions_C::STATIC_MicrotxnOrderID(const struct FString& Context, class UObject* __WorldContext, struct FString* OrderID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UsableFunctions.UsableFunctions_C.MicrotxnOrderID");

	UUsableFunctions_C_MicrotxnOrderID_Params params {};
	params.Context = Context;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OrderID != nullptr)
		*OrderID = params.OrderID;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function UsableFunctions.UsableFunctions_C.Finishing_Points
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		bool                                               Competitive_                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                FinishingPoints                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUsableFunctions_C::STATIC_Finishing_Points(bool Competitive_, class UObject* __WorldContext, int* FinishingPoints)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UsableFunctions.UsableFunctions_C.Finishing_Points");

	UUsableFunctions_C_Finishing_Points_Params params {};
	params.Competitive_ = Competitive_;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FinishingPoints != nullptr)
		*FinishingPoints = params.FinishingPoints;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function UsableFunctions.UsableFunctions_C.Finishing_Exp
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		bool                                               Competitive_                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                FinishingExp                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUsableFunctions_C::STATIC_Finishing_Exp(bool Competitive_, class UObject* __WorldContext, int* FinishingExp)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UsableFunctions.UsableFunctions_C.Finishing_Exp");

	UUsableFunctions_C_Finishing_Exp_Params params {};
	params.Competitive_ = Competitive_;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FinishingExp != nullptr)
		*FinishingExp = params.FinishingExp;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function UsableFunctions.UsableFunctions_C.CalculatePoints
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		int                                                Prop_Win                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Prop_Survival                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Hunter_Win                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Hunter_Kill                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                TotalPointsEarned                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUsableFunctions_C::STATIC_CalculatePoints(int Prop_Win, int Prop_Survival, int Hunter_Win, int Hunter_Kill, class UObject* __WorldContext, int* TotalPointsEarned)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UsableFunctions.UsableFunctions_C.CalculatePoints");

	UUsableFunctions_C_CalculatePoints_Params params {};
	params.Prop_Win = Prop_Win;
	params.Prop_Survival = Prop_Survival;
	params.Hunter_Win = Hunter_Win;
	params.Hunter_Kill = Hunter_Kill;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TotalPointsEarned != nullptr)
		*TotalPointsEarned = params.TotalPointsEarned;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function UsableFunctions.UsableFunctions_C.CalculateExp
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		int                                                Prop_Win                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Prop_Survival                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Hunter_Win                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Hunter_Kill                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                TotalExpEarned                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUsableFunctions_C::STATIC_CalculateExp(int Prop_Win, int Prop_Survival, int Hunter_Win, int Hunter_Kill, class UObject* __WorldContext, int* TotalExpEarned)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UsableFunctions.UsableFunctions_C.CalculateExp");

	UUsableFunctions_C_CalculateExp_Params params {};
	params.Prop_Win = Prop_Win;
	params.Prop_Survival = Prop_Survival;
	params.Hunter_Win = Hunter_Win;
	params.Hunter_Kill = Hunter_Kill;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TotalExpEarned != nullptr)
		*TotalExpEarned = params.TotalExpEarned;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function UsableFunctions.UsableFunctions_C.ItemLevelColor
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		TEnumAsByte<ItemLevel_EItemLevel>                  ItemLevel                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                Color                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUsableFunctions_C::STATIC_ItemLevelColor(TEnumAsByte<ItemLevel_EItemLevel> ItemLevel, class UObject* __WorldContext, struct FLinearColor* Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UsableFunctions.UsableFunctions_C.ItemLevelColor");

	UUsableFunctions_C_ItemLevelColor_Params params {};
	params.ItemLevel = ItemLevel;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function UsableFunctions.UsableFunctions_C.GraphicSettingsLength
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Min                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Max                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUsableFunctions_C::STATIC_GraphicSettingsLength(class UObject* __WorldContext, int* Min, int* Max)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UsableFunctions.UsableFunctions_C.GraphicSettingsLength");

	UUsableFunctions_C_GraphicSettingsLength_Params params {};
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Min != nullptr)
		*Min = params.Min;
	if (Max != nullptr)
		*Max = params.Max;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function UsableFunctions.UsableFunctions_C.HealthSystem(OnSelf)
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		TEnumAsByte<WeaponList_EWeaponList>                Weapon                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Health                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUsableFunctions_C::STATIC_HealthSystem_OnSelf_(TEnumAsByte<WeaponList_EWeaponList> Weapon, class UObject* __WorldContext, float* Health)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UsableFunctions.UsableFunctions_C.HealthSystem(OnSelf)");

	UUsableFunctions_C_HealthSystem_OnSelf__Params params {};
	params.Weapon = Weapon;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Health != nullptr)
		*Health = params.Health;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function UsableFunctions.UsableFunctions_C.DamageSystem(OnSelf)
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		TEnumAsByte<WeaponList_EWeaponList>                Weapon                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Damage                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUsableFunctions_C::STATIC_DamageSystem_OnSelf_(TEnumAsByte<WeaponList_EWeaponList> Weapon, class UObject* __WorldContext, float* Damage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UsableFunctions.UsableFunctions_C.DamageSystem(OnSelf)");

	UUsableFunctions_C_DamageSystem_OnSelf__Params params {};
	params.Weapon = Weapon;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Damage != nullptr)
		*Damage = params.Damage;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function UsableFunctions.UsableFunctions_C.DamageSystem(OnEnemy)
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		TEnumAsByte<WeaponList_EWeaponList>                Weapon                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Damage                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUsableFunctions_C::STATIC_DamageSystem_OnEnemy_(TEnumAsByte<WeaponList_EWeaponList> Weapon, class UObject* __WorldContext, float* Damage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UsableFunctions.UsableFunctions_C.DamageSystem(OnEnemy)");

	UUsableFunctions_C_DamageSystem_OnEnemy__Params params {};
	params.Weapon = Weapon;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Damage != nullptr)
		*Damage = params.Damage;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function UsableFunctions.UsableFunctions_C.SessionSettings_RetrieveNumber
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FString                                     gameSessionData                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FString                                     SessionNumber                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UUsableFunctions_C::STATIC_SessionSettings_RetrieveNumber(const struct FString& gameSessionData, class UObject* __WorldContext, struct FString* SessionNumber)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UsableFunctions.UsableFunctions_C.SessionSettings_RetrieveNumber");

	UUsableFunctions_C_SessionSettings_RetrieveNumber_Params params {};
	params.gameSessionData = gameSessionData;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SessionNumber != nullptr)
		*SessionNumber = params.SessionNumber;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function UsableFunctions.UsableFunctions_C.Event_Gandalv_Answer
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FString                                     Answer_in_upper_case                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UUsableFunctions_C::STATIC_Event_Gandalv_Answer(class UObject* __WorldContext, struct FString* Answer_in_upper_case)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UsableFunctions.UsableFunctions_C.Event_Gandalv_Answer");

	UUsableFunctions_C_Event_Gandalv_Answer_Params params {};
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Answer_in_upper_case != nullptr)
		*Answer_in_upper_case = params.Answer_in_upper_case;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function UsableFunctions.UsableFunctions_C.SessionSettings_RetrieveRegion
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FString                                     gameSessionData                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FString                                     region                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UUsableFunctions_C::STATIC_SessionSettings_RetrieveRegion(const struct FString& gameSessionData, class UObject* __WorldContext, struct FString* region)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UsableFunctions.UsableFunctions_C.SessionSettings_RetrieveRegion");

	UUsableFunctions_C_SessionSettings_RetrieveRegion_Params params {};
	params.gameSessionData = gameSessionData;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (region != nullptr)
		*region = params.region;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function UsableFunctions.UsableFunctions_C.StringDivider
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     Content                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     Divider                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		int                                                DividerAmount                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<struct FString>                             DividedContent                                             (Parm, OutParm, ZeroConstructor)
void UUsableFunctions_C::STATIC_StringDivider(const struct FString& Content, const struct FString& Divider, int DividerAmount, class UObject* __WorldContext, TArray<struct FString>* DividedContent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UsableFunctions.UsableFunctions_C.StringDivider");

	UUsableFunctions_C_StringDivider_Params params {};
	params.Content = Content;
	params.Divider = Divider;
	params.DividerAmount = DividerAmount;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DividedContent != nullptr)
		*DividedContent = params.DividedContent;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function UsableFunctions.UsableFunctions_C.Inven_Items_MinMax
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Datatable_Min                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Datatable_Max                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUsableFunctions_C::STATIC_Inven_Items_MinMax(class UObject* __WorldContext, int* Datatable_Min, int* Datatable_Max)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UsableFunctions.UsableFunctions_C.Inven_Items_MinMax");

	UUsableFunctions_C_Inven_Items_MinMax_Params params {};
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Datatable_Min != nullptr)
		*Datatable_Min = params.Datatable_Min;
	if (Datatable_Max != nullptr)
		*Datatable_Max = params.Datatable_Max;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function UsableFunctions.UsableFunctions_C.Inven_Effects_MinMax
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Datatable_Min                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Datatable_Max                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUsableFunctions_C::STATIC_Inven_Effects_MinMax(class UObject* __WorldContext, int* Datatable_Min, int* Datatable_Max)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UsableFunctions.UsableFunctions_C.Inven_Effects_MinMax");

	UUsableFunctions_C_Inven_Effects_MinMax_Params params {};
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Datatable_Min != nullptr)
		*Datatable_Min = params.Datatable_Min;
	if (Datatable_Max != nullptr)
		*Datatable_Max = params.Datatable_Max;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function UsableFunctions.UsableFunctions_C.Inven_Ornament_MinMax
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Datatable_Min                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Datatable_Max                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUsableFunctions_C::STATIC_Inven_Ornament_MinMax(class UObject* __WorldContext, int* Datatable_Min, int* Datatable_Max)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UsableFunctions.UsableFunctions_C.Inven_Ornament_MinMax");

	UUsableFunctions_C_Inven_Ornament_MinMax_Params params {};
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Datatable_Min != nullptr)
		*Datatable_Min = params.Datatable_Min;
	if (Datatable_Max != nullptr)
		*Datatable_Max = params.Datatable_Max;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function UsableFunctions.UsableFunctions_C.Inven_Alias_MinMax
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Datatable_Min                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Datatable_Max                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUsableFunctions_C::STATIC_Inven_Alias_MinMax(class UObject* __WorldContext, int* Datatable_Min, int* Datatable_Max)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UsableFunctions.UsableFunctions_C.Inven_Alias_MinMax");

	UUsableFunctions_C_Inven_Alias_MinMax_Params params {};
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Datatable_Min != nullptr)
		*Datatable_Min = params.Datatable_Min;
	if (Datatable_Max != nullptr)
		*Datatable_Max = params.Datatable_Max;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function UsableFunctions.UsableFunctions_C.SessionSettings_RetrieveCreatorID
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FString                                     gameSessionData                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FString                                     creatorId                                                  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UUsableFunctions_C::STATIC_SessionSettings_RetrieveCreatorID(const struct FString& gameSessionData, class UObject* __WorldContext, struct FString* creatorId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UsableFunctions.UsableFunctions_C.SessionSettings_RetrieveCreatorID");

	UUsableFunctions_C_SessionSettings_RetrieveCreatorID_Params params {};
	params.gameSessionData = gameSessionData;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (creatorId != nullptr)
		*creatorId = params.creatorId;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function UsableFunctions.UsableFunctions_C.Inven_Character_MinMax
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Datatable_Min                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Datatable_Max                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUsableFunctions_C::STATIC_Inven_Character_MinMax(class UObject* __WorldContext, int* Datatable_Min, int* Datatable_Max)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UsableFunctions.UsableFunctions_C.Inven_Character_MinMax");

	UUsableFunctions_C_Inven_Character_MinMax_Params params {};
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Datatable_Min != nullptr)
		*Datatable_Min = params.Datatable_Min;
	if (Datatable_Max != nullptr)
		*Datatable_Max = params.Datatable_Max;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function UsableFunctions.UsableFunctions_C.HowManyPropsPerMap?
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		TEnumAsByte<WhichMap_EWhichMap>                    WhichMap_                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                MaxProps                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUsableFunctions_C::STATIC_HowManyPropsPerMap_(TEnumAsByte<WhichMap_EWhichMap> WhichMap_, class UObject* __WorldContext, int* MaxProps)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UsableFunctions.UsableFunctions_C.HowManyPropsPerMap?");

	UUsableFunctions_C_HowManyPropsPerMap__Params params {};
	params.WhichMap_ = WhichMap_;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MaxProps != nullptr)
		*MaxProps = params.MaxProps;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function UsableFunctions.UsableFunctions_C.MapNameToImage
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FString                                     MapName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UTexture2D*                                  MapImage                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUsableFunctions_C::STATIC_MapNameToImage(const struct FString& MapName, class UObject* __WorldContext, class UTexture2D** MapImage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UsableFunctions.UsableFunctions_C.MapNameToImage");

	UUsableFunctions_C_MapNameToImage_Params params {};
	params.MapName = MapName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MapImage != nullptr)
		*MapImage = params.MapImage;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function UsableFunctions.UsableFunctions_C.SessionSettings_RetrieveTitle
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FString                                     gameSessionData                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FString                                     Title                                                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UUsableFunctions_C::STATIC_SessionSettings_RetrieveTitle(const struct FString& gameSessionData, class UObject* __WorldContext, struct FString* Title)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UsableFunctions.UsableFunctions_C.SessionSettings_RetrieveTitle");

	UUsableFunctions_C_SessionSettings_RetrieveTitle_Params params {};
	params.gameSessionData = gameSessionData;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Title != nullptr)
		*Title = params.Title;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function UsableFunctions.UsableFunctions_C.SessionSettings_RetrieveMatchType
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FString                                     gameSessionData                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FString                                     MatchName                                                  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UUsableFunctions_C::STATIC_SessionSettings_RetrieveMatchType(const struct FString& gameSessionData, class UObject* __WorldContext, struct FString* MatchName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UsableFunctions.UsableFunctions_C.SessionSettings_RetrieveMatchType");

	UUsableFunctions_C_SessionSettings_RetrieveMatchType_Params params {};
	params.gameSessionData = gameSessionData;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MatchName != nullptr)
		*MatchName = params.MatchName;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function UsableFunctions.UsableFunctions_C.SessionSettings_RetrievePassword
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FString                                     gameSessionData                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               HasPassword_                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FString                                     Password                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UUsableFunctions_C::STATIC_SessionSettings_RetrievePassword(const struct FString& gameSessionData, class UObject* __WorldContext, bool* HasPassword_, struct FString* Password)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UsableFunctions.UsableFunctions_C.SessionSettings_RetrievePassword");

	UUsableFunctions_C_SessionSettings_RetrievePassword_Params params {};
	params.gameSessionData = gameSessionData;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HasPassword_ != nullptr)
		*HasPassword_ = params.HasPassword_;
	if (Password != nullptr)
		*Password = params.Password;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function UsableFunctions.UsableFunctions_C.SessionSettings_RetrieveMaxPlayer
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FString                                     gameSessionData                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FString                                     MaxPlayer                                                  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UUsableFunctions_C::STATIC_SessionSettings_RetrieveMaxPlayer(const struct FString& gameSessionData, class UObject* __WorldContext, struct FString* MaxPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UsableFunctions.UsableFunctions_C.SessionSettings_RetrieveMaxPlayer");

	UUsableFunctions_C_SessionSettings_RetrieveMaxPlayer_Params params {};
	params.gameSessionData = gameSessionData;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MaxPlayer != nullptr)
		*MaxPlayer = params.MaxPlayer;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function UsableFunctions.UsableFunctions_C.SessionSettings_RetrieveMaxRound
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FString                                     gameSessionData                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FString                                     MaxRound                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UUsableFunctions_C::STATIC_SessionSettings_RetrieveMaxRound(const struct FString& gameSessionData, class UObject* __WorldContext, struct FString* MaxRound)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UsableFunctions.UsableFunctions_C.SessionSettings_RetrieveMaxRound");

	UUsableFunctions_C_SessionSettings_RetrieveMaxRound_Params params {};
	params.gameSessionData = gameSessionData;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MaxRound != nullptr)
		*MaxRound = params.MaxRound;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function UsableFunctions.UsableFunctions_C.SessionSettings_RetrieveMap
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FString                                     gameSessionData                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FString                                     MapFileName                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     MapDisplayName                                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
//		TEnumAsByte<WhichMap_EWhichMap>                    WhichMap                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUsableFunctions_C::STATIC_SessionSettings_RetrieveMap(const struct FString& gameSessionData, class UObject* __WorldContext, struct FString* MapFileName, struct FString* MapDisplayName, TEnumAsByte<WhichMap_EWhichMap>* WhichMap)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UsableFunctions.UsableFunctions_C.SessionSettings_RetrieveMap");

	UUsableFunctions_C_SessionSettings_RetrieveMap_Params params {};
	params.gameSessionData = gameSessionData;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MapFileName != nullptr)
		*MapFileName = params.MapFileName;
	if (MapDisplayName != nullptr)
		*MapDisplayName = params.MapDisplayName;
	if (WhichMap != nullptr)
		*WhichMap = params.WhichMap;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function UsableFunctions.UsableFunctions_C.MapNameToFile
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FString                                     MapName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FString                                     MapFileName                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
//		TEnumAsByte<WhichMap_EWhichMap>                    WhichMap                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUsableFunctions_C::STATIC_MapNameToFile(const struct FString& MapName, class UObject* __WorldContext, struct FString* MapFileName, TEnumAsByte<WhichMap_EWhichMap>* WhichMap)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UsableFunctions.UsableFunctions_C.MapNameToFile");

	UUsableFunctions_C_MapNameToFile_Params params {};
	params.MapName = MapName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MapFileName != nullptr)
		*MapFileName = params.MapFileName;
	if (WhichMap != nullptr)
		*WhichMap = params.WhichMap;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function UsableFunctions.UsableFunctions_C.ChatFilter
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FString                                     Chat                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Valid_                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUsableFunctions_C::STATIC_ChatFilter(const struct FString& Chat, class UObject* __WorldContext, bool* Valid_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UsableFunctions.UsableFunctions_C.ChatFilter");

	UUsableFunctions_C_ChatFilter_Params params {};
	params.Chat = Chat;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Valid_ != nullptr)
		*Valid_ = params.Valid_;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function UsableFunctions.UsableFunctions_C.SteamErrorMessageToText
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		UWorksCore_EUWorksAuthSessionResponse              Message                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FString                                     Output_Message                                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UUsableFunctions_C::STATIC_SteamErrorMessageToText(UWorksCore_EUWorksAuthSessionResponse Message, class UObject* __WorldContext, struct FString* Output_Message)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UsableFunctions.UsableFunctions_C.SteamErrorMessageToText");

	UUsableFunctions_C_SteamErrorMessageToText_Params params {};
	params.Message = Message;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Output_Message != nullptr)
		*Output_Message = params.Output_Message;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function UsableFunctions.UsableFunctions_C.FitTextureSize
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UTexture2D*                                  InputImage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                limit                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector2D                                   OutputVector2D                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUsableFunctions_C::STATIC_FitTextureSize(class UTexture2D* InputImage, int limit, class UObject* __WorldContext, struct FVector2D* OutputVector2D)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UsableFunctions.UsableFunctions_C.FitTextureSize");

	UUsableFunctions_C_FitTextureSize_Params params {};
	params.InputImage = InputImage;
	params.limit = limit;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutputVector2D != nullptr)
		*OutputVector2D = params.OutputVector2D;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function UsableFunctions.UsableFunctions_C.RssFeederDateTransition
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FString                                     Input_Date                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     Input_HrMin                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FDateTime                                   Output_DateTime                                            (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
void UUsableFunctions_C::STATIC_RssFeederDateTransition(const struct FString& Input_Date, const struct FString& Input_HrMin, class UObject* __WorldContext, struct FDateTime* Output_DateTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UsableFunctions.UsableFunctions_C.RssFeederDateTransition");

	UUsableFunctions_C_RssFeederDateTransition_Params params {};
	params.Input_Date = Input_Date;
	params.Input_HrMin = Input_HrMin;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Output_DateTime != nullptr)
		*Output_DateTime = params.Output_DateTime;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function UsableFunctions.UsableFunctions_C.RssFeederLoop
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<class UObject*>                             RssFeederObject                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FString                                     Title1                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     Link1                                                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
//		bool                                               DisplayFeeder_                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FString                                     Date                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     HrMin                                                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     ActualContent                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     Version                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UUsableFunctions_C::STATIC_RssFeederLoop(TArray<class UObject*>* RssFeederObject, class UObject* __WorldContext, struct FString* Title1, struct FString* Link1, bool* DisplayFeeder_, struct FString* Date, struct FString* HrMin, struct FString* ActualContent, struct FString* Version)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UsableFunctions.UsableFunctions_C.RssFeederLoop");

	UUsableFunctions_C_RssFeederLoop_Params params {};
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RssFeederObject != nullptr)
		*RssFeederObject = params.RssFeederObject;
	if (Title1 != nullptr)
		*Title1 = params.Title1;
	if (Link1 != nullptr)
		*Link1 = params.Link1;
	if (DisplayFeeder_ != nullptr)
		*DisplayFeeder_ = params.DisplayFeeder_;
	if (Date != nullptr)
		*Date = params.Date;
	if (HrMin != nullptr)
		*HrMin = params.HrMin;
	if (ActualContent != nullptr)
		*ActualContent = params.ActualContent;
	if (Version != nullptr)
		*Version = params.Version;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function UsableFunctions.UsableFunctions_C.WhichDatatable?
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		TEnumAsByte<WhichMap_EWhichMap>                    WhichMap_                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UDataTable*                                  DataTable                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUsableFunctions_C::STATIC_WhichDatatable_(TEnumAsByte<WhichMap_EWhichMap> WhichMap_, class UObject* __WorldContext, class UDataTable** DataTable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UsableFunctions.UsableFunctions_C.WhichDatatable?");

	UUsableFunctions_C_WhichDatatable__Params params {};
	params.WhichMap_ = WhichMap_;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DataTable != nullptr)
		*DataTable = params.DataTable;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function UsableFunctions.UsableFunctions_C.PropSelection_Random
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		TEnumAsByte<WhichMap_EWhichMap>                    Map                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<int>                                        _3_Random_1_100                                            (Parm, OutParm, ZeroConstructor)
void UUsableFunctions_C::STATIC_PropSelection_Random(TEnumAsByte<WhichMap_EWhichMap> Map, class UObject* __WorldContext, TArray<int>* _3_Random_1_100)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UsableFunctions.UsableFunctions_C.PropSelection_Random");

	UUsableFunctions_C_PropSelection_Random_Params params {};
	params.Map = Map;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (_3_Random_1_100 != nullptr)
		*_3_Random_1_100 = params._3_Random_1_100;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function UsableFunctions.UsableFunctions_C.ExpToLevel
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		int                                                Exp_Raw_                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Level_Raw_                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Leftovers_Raw_                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUsableFunctions_C::STATIC_ExpToLevel(int Exp_Raw_, class UObject* __WorldContext, int* Level_Raw_, float* Leftovers_Raw_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UsableFunctions.UsableFunctions_C.ExpToLevel");

	UUsableFunctions_C_ExpToLevel_Params params {};
	params.Exp_Raw_ = Exp_Raw_;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Level_Raw_ != nullptr)
		*Level_Raw_ = params.Level_Raw_;
	if (Leftovers_Raw_ != nullptr)
		*Leftovers_Raw_ = params.Leftovers_Raw_;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function UsableFunctions.UsableFunctions_C.CreateUsernameFilter
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FString                                     userName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Valid_                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUsableFunctions_C::STATIC_CreateUsernameFilter(const struct FString& userName, class UObject* __WorldContext, bool* Valid_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UsableFunctions.UsableFunctions_C.CreateUsernameFilter");

	UUsableFunctions_C_CreateUsernameFilter_Params params {};
	params.userName = userName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Valid_ != nullptr)
		*Valid_ = params.Valid_;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function UsableFunctions.UsableFunctions_C.ClampScore(0-5000)
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		int                                                Score                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Output_Score                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUsableFunctions_C::STATIC_ClampScore_0_5000_(int Score, class UObject* __WorldContext, int* Output_Score)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UsableFunctions.UsableFunctions_C.ClampScore(0-5000)");

	UUsableFunctions_C_ClampScore_0_5000__Params params {};
	params.Score = Score;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Output_Score != nullptr)
		*Output_Score = params.Output_Score;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function UsableFunctions.UsableFunctions_C.MakeStringUsername_StringToNumb
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     Input__Username_                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<int>                                        Output__ArrayOfNumbers_                                    (Parm, OutParm, ZeroConstructor)
void UUsableFunctions_C::STATIC_MakeStringUsername_StringToNumb(const struct FString& Input__Username_, class UObject* __WorldContext, TArray<int>* Output__ArrayOfNumbers_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UsableFunctions.UsableFunctions_C.MakeStringUsername_StringToNumb");

	UUsableFunctions_C_MakeStringUsername_StringToNumb_Params params {};
	params.Input__Username_ = Input__Username_;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Output__ArrayOfNumbers_ != nullptr)
		*Output__ArrayOfNumbers_ = params.Output__ArrayOfNumbers_;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function UsableFunctions.UsableFunctions_C.MakeStringUsername_NumToString
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<int>                                        Input__ArrayOfNumbers_                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FString                                     Output__Username1_                                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UUsableFunctions_C::STATIC_MakeStringUsername_NumToString(TArray<int>* Input__ArrayOfNumbers_, class UObject* __WorldContext, struct FString* Output__Username1_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UsableFunctions.UsableFunctions_C.MakeStringUsername_NumToString");

	UUsableFunctions_C_MakeStringUsername_NumToString_Params params {};
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Input__ArrayOfNumbers_ != nullptr)
		*Input__ArrayOfNumbers_ = params.Input__ArrayOfNumbers_;
	if (Output__Username1_ != nullptr)
		*Output__Username1_ = params.Output__Username1_;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
