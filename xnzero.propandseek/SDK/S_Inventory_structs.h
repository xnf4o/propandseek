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

// UserDefinedStruct S_Inventory.S_Inventory
// 0x0050
struct FS_Inventory
{
	TArray<int>                                        OwningCharacters_3_7F9F5BCB4BAB5A342752D399ECD2D76A;       // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        OwningSpectators_20_83A316A74A17E48ABD0D59801E7A37C1;      // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        OwningItems_12_00E39C6D48649D09FC2012A462C7A812;           // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        OwningAliases_8_D5BB01064096687265714998F0A902E8;          // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        OwningTauntingSounds_16_A9D96BA04EB00C4FF294F5A6D50031C9;  // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
