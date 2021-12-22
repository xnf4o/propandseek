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
// Parameters
//---------------------------------------------------------------------------

// Function CurrencyBoxInGame.CurrencyBoxInGame_C.Beginplay_BuffA
struct UCurrencyBoxInGame_C_Beginplay_BuffA_Params
{
	struct FSCashItemsGameInfo                         CashBuffs;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CurrencyBoxInGame.CurrencyBoxInGame_C.UpdateGoldCoin
struct UCurrencyBoxInGame_C_UpdateGoldCoin_Params
{
	int                                                GoldCoin;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CurrencyBoxInGame.CurrencyBoxInGame_C.UpdateExp
struct UCurrencyBoxInGame_C_UpdateExp_Params
{
	int                                                Exp;                                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
