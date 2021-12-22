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
//		Name   -> Function VariableFunctionLibrary.VariableFunctionLibrary_C.CalculateTier2
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		int                                                Ranking                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                TierScore                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FString                                     TierName                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
//		class UTexture2D*                                  TierImage                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UVariableFunctionLibrary_C::STATIC_CalculateTier2(int Ranking, int TierScore, class UObject* __WorldContext, struct FString* TierName, class UTexture2D** TierImage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VariableFunctionLibrary.VariableFunctionLibrary_C.CalculateTier2");

	UVariableFunctionLibrary_C_CalculateTier2_Params params {};
	params.Ranking = Ranking;
	params.TierScore = TierScore;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TierName != nullptr)
		*TierName = params.TierName;
	if (TierImage != nullptr)
		*TierImage = params.TierImage;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function VariableFunctionLibrary.VariableFunctionLibrary_C.EndTimer
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FDateTime                                   EndDateTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Finished_                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FString                                     TimeLeft                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UVariableFunctionLibrary_C::STATIC_EndTimer(const struct FDateTime& EndDateTime, class UObject* __WorldContext, bool* Finished_, struct FString* TimeLeft)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VariableFunctionLibrary.VariableFunctionLibrary_C.EndTimer");

	UVariableFunctionLibrary_C_EndTimer_Params params {};
	params.EndDateTime = EndDateTime;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Finished_ != nullptr)
		*Finished_ = params.Finished_;
	if (TimeLeft != nullptr)
		*TimeLeft = params.TimeLeft;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function VariableFunctionLibrary.VariableFunctionLibrary_C.CalculateTier
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		bool                                               Ranker                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		int                                                TierScore                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Tier                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FString                                     TierName                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
//		class UTexture2D*                                  TierImage                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UVariableFunctionLibrary_C::STATIC_CalculateTier(bool Ranker, int TierScore, class UObject* __WorldContext, int* Tier, struct FString* TierName, class UTexture2D** TierImage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VariableFunctionLibrary.VariableFunctionLibrary_C.CalculateTier");

	UVariableFunctionLibrary_C_CalculateTier_Params params {};
	params.Ranker = Ranker;
	params.TierScore = TierScore;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Tier != nullptr)
		*Tier = params.Tier;
	if (TierName != nullptr)
		*TierName = params.TierName;
	if (TierImage != nullptr)
		*TierImage = params.TierImage;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
