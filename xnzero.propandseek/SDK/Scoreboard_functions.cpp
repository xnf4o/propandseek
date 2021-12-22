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
//		Name   -> Function Scoreboard.Scoreboard_C.UpdateGameSessionInfo
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     Title                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     SessionNumber                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     Creator                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     Password                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     MaxPlayer                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		TEnumAsByte<EMatchType_EMatchType>                 matchType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FString                                     MapName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		bool                                               PropOutline_                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               ChatForall                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		TEnumAsByte<RegionList_ERegionList>                ServerRegion                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               DisableHunter_                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               StartFull_                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               DisableFreecamMode_                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UScoreboard_C::UpdateGameSessionInfo(const struct FString& Title, const struct FString& SessionNumber, const struct FString& Creator, const struct FString& Password, const struct FString& MaxPlayer, TEnumAsByte<EMatchType_EMatchType> matchType, const struct FString& MapName, bool PropOutline_, bool ChatForall, TEnumAsByte<RegionList_ERegionList> ServerRegion, bool DisableHunter_, bool StartFull_, bool DisableFreecamMode_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Scoreboard.Scoreboard_C.UpdateGameSessionInfo");

	UScoreboard_C_UpdateGameSessionInfo_Params params {};
	params.Title = Title;
	params.SessionNumber = SessionNumber;
	params.Creator = Creator;
	params.Password = Password;
	params.MaxPlayer = MaxPlayer;
	params.matchType = matchType;
	params.MapName = MapName;
	params.PropOutline_ = PropOutline_;
	params.ChatForall = ChatForall;
	params.ServerRegion = ServerRegion;
	params.DisableHunter_ = DisableHunter_;
	params.StartFull_ = StartFull_;
	params.DisableFreecamMode_ = DisableFreecamMode_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Scoreboard.Scoreboard_C.PC
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class AFPS_PC_C*                                   AsFPS_PC                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UScoreboard_C::PC(class AFPS_PC_C** AsFPS_PC)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Scoreboard.Scoreboard_C.PC");

	UScoreboard_C_PC_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsFPS_PC != nullptr)
		*AsFPS_PC = params.AsFPS_PC;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
