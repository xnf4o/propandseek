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
//		Name   -> Function BottomWidget_UserInfo.BottomWidget_UserInfo_C.UpdatePlayerInfo
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     userName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		int                                                Alias                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                CurrentHP                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                MaxHP                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FSCashItemsGameInfo                         CashInfo                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBottomWidget_UserInfo_C::UpdatePlayerInfo(const struct FString& userName, int Alias, int CurrentHP, int MaxHP, const struct FSCashItemsGameInfo& CashInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BottomWidget_UserInfo.BottomWidget_UserInfo_C.UpdatePlayerInfo");

	UBottomWidget_UserInfo_C_UpdatePlayerInfo_Params params {};
	params.userName = userName;
	params.Alias = Alias;
	params.CurrentHP = CurrentHP;
	params.MaxHP = MaxHP;
	params.CashInfo = CashInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
