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

// UserDefinedStruct sLobbySession.sLobbySession
// 0x0071
struct FsLobbySession
{
	struct FString                                     SessionTitle_61_A4E9453A4B8D6FDB8B8D96BFAD663AE9;          // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     CreatorUsername_75_EF8FB770470D7B952BD8D0833FFFAD56;       // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int                                                MaxPlayer_26_C42CF8D64945DFF971BE36AA7BC0D857;             // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CurrentPlayer_72_E0EB7364436F1D7895067294BD263C95;         // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxRound_42_A1751C6E4D5DAEF9DCFA6E8F3573179B;              // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MapNumber_43_0BD6DD94403AEAAE631B67B8BA6B8F8D;             // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Password__32_BF99AA024B2EC0E508E92AAAB59FCE0E;             // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_154M[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       Password_35_BE75223A4AD65375767075B1D22DCCA1;              // 0x0038(0x0018) (Edit, BlueprintVisible)
	struct FString                                     SessionUUID_66_74F1C1E64C557A76F68E3F8B11C459CF;           // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     GameSessionID_69_199A826244D6346C1B66E8B8171FB212;         // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	TEnumAsByte<ELobbySessionStatus_ELobbySessionStatus> SessionStatus_78_2AFD56904F9855BDCAA7809B3C23C4AA;         // 0x0070(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
