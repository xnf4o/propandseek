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

// UserDefinedStruct SInputList.SInputList
// 0x0044
struct FSInputList
{
	struct FName                                       InputKeyName_2_710DCFB341A112DD07F56DA8037B6C99;           // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     KeyDisplayName_26_A012E79942309EA51DDFF3896B16C6C8;        // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	TEnumAsByte<ActionAxis_EActionAxis>                ActionOrAxis__5_31502A3041A5233343B145BBAD008473;          // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_L4OV[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FInputChord                                 DefaultKey_9_40EB01A04D0490935C8A7AB5E1DDDDE4;             // 0x0020(0x0020) (Edit, BlueprintVisible, HasGetValueTypeHash)
	float                                              InputScaleAxisOnly_17_C8E4798049470740EA94FEAEF72BF08D;    // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
