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

// UserDefinedStruct SDyGameSessions.SDyGameSessions
// 0x0070
struct FSDyGameSessions
{
	struct FString                                     GameSessionID_3_6E09ED744B8B6AC5D93A2281A4D09EBA;          // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     GameSessionData_30_8D8C02EF410E9151AC5CFF8FD3242B7D;       // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int                                                CurrentRound_18_9F3CAEDB4FC1151A7180608AB037B6D0;          // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CurrentPlayer_20_20B157F647CFEEBEA026A09E42870815;         // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     Status_25_6A7F341742CADC26D649F0983E7FB353;                // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     BannedPlayer_44_1078CA384169489C4D5EE7B4D548E5EC;          // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Title_38_0EE4D3C7497B4140C89F0A9FFDD040B3;                 // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Creator_40_1A59BDB644C2F2CD4140A7AE4413C289;               // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FDateTime                                   Time_43_0C1C54724DA50A0EFEAB14A181D145DD;                  // 0x0068(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
