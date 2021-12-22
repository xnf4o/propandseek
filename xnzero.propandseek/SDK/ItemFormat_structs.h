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

// UserDefinedStruct ItemFormat.ItemFormat
// 0x0060
struct FItemFormat
{
	int                                                ItemNumber_4_DD6B16554DE12FA70C2BB88DBC86E958;             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<ItemSection_EItemSection>              Section_22_120A04CE4C5E14C71453408065C205A1;               // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_EC4B[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ItemName_6_E13EAA6C415444927DADB5BBC1FFD51A;               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     ItemDescription_8_1E8180834CE564C7A76CF9BDDFB47B23;        // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	TEnumAsByte<ItemUnlockType_EItemUnlockType>        UnlockType_28_8053F7974EE6DA25B755EB8BB0C87988;            // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_AHXP[0x3];                                     // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                ItemPrice_30_AF58D5CB4B5EBE9F820346858C1FFC91;             // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<ItemLevel_EItemLevel>                  ItemLevel_33_25AED82A42E420F85246B188D5D84768;             // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_YGAV[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     DatabaseVariableName_61_593B62654E3D62F9C17E51800B858ED7;  // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class UTexture2D*                                  IconImage_36_33954012407C844C86C597A41092486A;             // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               HasExpirationDate__38_294BE1C542630CAAC218EBB510A78AD7;    // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<EShopItemList_EShopItemList>           WhichItemWithExpirationDate__44_B9CBABD24327B0AE08DA9FB9ADDD4A4E; // 0x0051(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               HasQuantity__46_D238B8EC499EC49F39032CA2227C4810;          // 0x0052(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<EShopItemList_EShopItemList>           WhichItemWithQuantity__49_7442BD954B22F2B35F6598A4DDFDB360; // 0x0053(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsConsumable__63_4CB6850D4FE8727149B40FBAC44EC887;         // 0x0054(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               HasSound__52_5FB50C814B34705D78E0A494F75FD3F2;             // 0x0055(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_Z6AU[0x2];                                     // 0x0056(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundBase*                                  Sound_58_ED5C2E5C402606573F52139E8C3693D7;                 // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
