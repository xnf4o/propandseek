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
// Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct SShopItemCost.SShopItemCost
// 0x0020
struct FSShopItemCost
{
	TEnumAsByte<EShopItemCostType_EShopItemCostType>   CostType_3_457191CF47894115279748B2CD054A2C;               // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_WK6L[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                ActualCost_6_B9C0E1E141B2C930994B00889BA284AB;             // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Permanent_OrHasUsageDuration__19_F2BC6F3A445C357A2FB2A2B665E777C5; // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_AA3G[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FSUsageDuration>                     UsageDurationDurationOnly_20_5989F7E3446E2D21B59CAE8499F86AA8; // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
