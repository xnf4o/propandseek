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

// UserDefinedStruct SteamGetStatsQueue.SteamGetStatsQueue
// 0x0020
struct FSteamGetStatsQueue
{
	struct FString                                     SteamID_3_669A91D64A42500697AC67B264F73779;                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	TEnumAsByte<EWhichWorkGame_EWhichWorkGame>         WhichWork__5_2EBC32774B3C78EEA1C6ADAC92D1A3E7;             // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_LD28[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AFPS_PC_C*                                   Player_8_35DF4E9141261D208CE6F69A679C98F5;                 // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
