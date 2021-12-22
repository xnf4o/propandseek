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
//		Name   -> Function Noti.Noti_C.Update_07_Perspective
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     PerspectiveName                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UNoti_C::Update_07_Perspective(const struct FString& PerspectiveName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Noti.Noti_C.Update_07_Perspective");

	UNoti_C_Update_07_Perspective_Params params {};
	params.PerspectiveName = PerspectiveName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Noti.Noti_C.Update_06_DamagedBy
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     PlayerDamagedYou                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		int                                                DamageInput                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UNoti_C::Update_06_DamagedBy(const struct FString& PlayerDamagedYou, int DamageInput)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Noti.Noti_C.Update_06_DamagedBy");

	UNoti_C_Update_06_DamagedBy_Params params {};
	params.PlayerDamagedYou = PlayerDamagedYou;
	params.DamageInput = DamageInput;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Noti.Noti_C.Update_05_AddHealth
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                AddedHealthAmount                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UNoti_C::Update_05_AddHealth(int AddedHealthAmount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Noti.Noti_C.Update_05_AddHealth");

	UNoti_C_Update_05_AddHealth_Params params {};
	params.AddedHealthAmount = AddedHealthAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Noti.Noti_C.Update_04_SelfKilled
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Score                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UNoti_C::Update_04_SelfKilled(int Score)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Noti.Noti_C.Update_04_SelfKilled");

	UNoti_C_Update_04_SelfKilled_Params params {};
	params.Score = Score;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Noti.Noti_C.Update_03_YouwereEliminatedBy
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     Username_YouWereKilledBy_                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		int                                                Score                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UNoti_C::Update_03_YouwereEliminatedBy(const struct FString& Username_YouWereKilledBy_, int Score)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Noti.Noti_C.Update_03_YouwereEliminatedBy");

	UNoti_C_Update_03_YouwereEliminatedBy_Params params {};
	params.Username_YouWereKilledBy_ = Username_YouWereKilledBy_;
	params.Score = Score;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Noti.Noti_C.Update_02_YouEliminated
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     Username_YouKilled_                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		int                                                Score                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UNoti_C::Update_02_YouEliminated(const struct FString& Username_YouKilled_, int Score)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Noti.Noti_C.Update_02_YouEliminated");

	UNoti_C_Update_02_YouEliminated_Params params {};
	params.Username_YouKilled_ = Username_YouKilled_;
	params.Score = Score;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Noti.Noti_C.Update_01_SelfDamage
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                SelfDamageAmount                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UNoti_C::Update_01_SelfDamage(int SelfDamageAmount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Noti.Noti_C.Update_01_SelfDamage");

	UNoti_C_Update_01_SelfDamage_Params params {};
	params.SelfDamageAmount = SelfDamageAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
