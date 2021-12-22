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

// UserDefinedStruct SLootboxItemCards.SLootboxItemCards
// 0x0031
struct FSLootboxItemCards
{
	struct FString                                     LootboxItemDisplayName_15_6C54D96046B22979524ACCBFFA54B80F; // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     SteamVariableNameToIncrement_12_696D28044CBF73712CB1C78832CB9606; // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int                                                Amount_23_3FDB96724B5E2CA970FEE896FAF93F95;                // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               SetTo_Oraddup_31_E661A4A2493265A3A9885581498A515F;         // 0x0024(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               HasExpirationDate__30_C83F06FE44440CC99AB8D382934E4B6C;    // 0x0025(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_JXKI[0x2];                                     // 0x0026(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterial*                                   CardMaterial_34_D6314ADA47BBECA1C2449A9730536ADD;          // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<ELootboxGrades_ELootboxGrades>         CardGrade_38_F9282DC14FFB57597EF7EAB51C45BDB3;             // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
