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

// UserDefinedStruct SShopItems.SShopItems
// 0x00B9
struct FSShopItems
{
	struct FString                                     FirstIntroduced_43_D76328224FF6D663ED1AB99812FC90FD;       // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	TEnumAsByte<EShopItemType_EShopItemType>           ShopItemType_7_AB77C2B04378D64EB67F45BD4444D3B2;           // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_2HBO[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FSShopDateTime>                      DisplayPeriodDurationOnly_41_78C8C2D74C848C432F96B7B8A853AC0C; // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<TEnumAsByte<EShopItemMark_EShopItemMark>>   ShopItemMark_23_775684F64FCECF385F58558FB9A63A0D;          // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FSShopItemCost                              CostOptions_53_F6F6456942C00EC07BCC2AA6A6F65881;           // 0x0038(0x0020) (Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FString                                     ShopItemName_36_2B181B404B241CB2B2E957ADB6D7097B;          // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     ShopItemShortSummary_49_36E33F164810F417229615848BAF0797;  // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FSShopItemDescription                       ShopItemHintboxDescription_45_50747700425619C5DB8ADB957AA01722; // 0x0078(0x0020) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class UTexture2D*                                  ShopItemIcon_39_0C3237DD4620AC3F3B9162998BCC352B;          // 0x0098(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<EshopItemLevel_EshopItemLevel>         ShopItemLevel_52_2BECB7A743D180EFD045029F2C49C5A0;         // 0x00A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ExternalItem_LikeDLC_56_7A39343E499777DCE9BCBCABFD6CBC43;  // 0x00A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_WR87[0x6];                                     // 0x00A2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ExternalItemLink_59_7E5D7D324A423A6921E0D6AF3627E929;      // 0x00A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	TEnumAsByte<EShopItemList_EShopItemList>           Item_62_F0319E894B0461FD264424BFBC5AEA6C;                  // 0x00B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
