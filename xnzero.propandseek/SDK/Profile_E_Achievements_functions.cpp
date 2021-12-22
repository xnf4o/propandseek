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
//		Name   -> Function Profile_E_Achievements.Profile_E_Achievements_C.UpdateLockUnLockAmount
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Total                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Unlock                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UProfile_E_Achievements_C::UpdateLockUnLockAmount(int Total, int Unlock)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Profile_E_Achievements.Profile_E_Achievements_C.UpdateLockUnLockAmount");

	UProfile_E_Achievements_C_UpdateLockUnLockAmount_Params params {};
	params.Total = Total;
	params.Unlock = Unlock;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Profile_E_Achievements.Profile_E_Achievements_C.UpdateAchievementGrid
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FString                                     Header                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     Description                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		int                                                CurrentValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                MaxValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Achieved_                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UTexture2D*                                  Icon                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Hidden_                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UProfile_E_Achievements_C::UpdateAchievementGrid(int Index, const struct FString& Header, const struct FString& Description, int CurrentValue, int MaxValue, bool Achieved_, class UTexture2D* Icon, bool Hidden_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Profile_E_Achievements.Profile_E_Achievements_C.UpdateAchievementGrid");

	UProfile_E_Achievements_C_UpdateAchievementGrid_Params params {};
	params.Index = Index;
	params.Header = Header;
	params.Description = Description;
	params.CurrentValue = CurrentValue;
	params.MaxValue = MaxValue;
	params.Achieved_ = Achieved_;
	params.Icon = Icon;
	params.Hidden_ = Hidden_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
