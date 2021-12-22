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

// Function CurrencyBoxInGame_Side.CurrencyBoxInGame_Side_C.Beginplay_Buff
struct UCurrencyBoxInGame_Side_C_Beginplay_Buff_Params
{
	struct FSCashItemsGameInfo                         CashBuffs;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CurrencyBoxInGame_Side.CurrencyBoxInGame_Side_C.UpdateGoldCoin
struct UCurrencyBoxInGame_Side_C_UpdateGoldCoin_Params
{
	int                                                GoldCoin;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CurrencyBoxInGame_Side.CurrencyBoxInGame_Side_C.UpdateExp
struct UCurrencyBoxInGame_Side_C_UpdateExp_Params
{
	int                                                Exp;                                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
