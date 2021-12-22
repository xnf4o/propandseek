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
//		Name   -> Function CurrencyBoxInGame_Side.CurrencyBoxInGame_Side_C.Beginplay_Buff
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FSCashItemsGameInfo                         CashBuffs                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCurrencyBoxInGame_Side_C::Beginplay_Buff(const struct FSCashItemsGameInfo& CashBuffs)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CurrencyBoxInGame_Side.CurrencyBoxInGame_Side_C.Beginplay_Buff");

	UCurrencyBoxInGame_Side_C_Beginplay_Buff_Params params {};
	params.CashBuffs = CashBuffs;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function CurrencyBoxInGame_Side.CurrencyBoxInGame_Side_C.UpdateGoldCoin
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                GoldCoin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCurrencyBoxInGame_Side_C::UpdateGoldCoin(int GoldCoin)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CurrencyBoxInGame_Side.CurrencyBoxInGame_Side_C.UpdateGoldCoin");

	UCurrencyBoxInGame_Side_C_UpdateGoldCoin_Params params {};
	params.GoldCoin = GoldCoin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function CurrencyBoxInGame_Side.CurrencyBoxInGame_Side_C.UpdateExp
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Exp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCurrencyBoxInGame_Side_C::UpdateExp(int Exp)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CurrencyBoxInGame_Side.CurrencyBoxInGame_Side_C.UpdateExp");

	UCurrencyBoxInGame_Side_C_UpdateExp_Params params {};
	params.Exp = Exp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
