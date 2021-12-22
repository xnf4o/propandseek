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

// UserDefinedStruct PlayerInfoGame.PlayerInfoGame
// 0x0084
struct FPlayerInfoGame
{
	class AFPS_PC_C*                                   PlayerFPSPCOnly_173_DA0DD4E14A0D825967364ABB833ED3AD;      // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     SteamID_103_4BAFCE79452A6FD384553790E91287F8;              // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Username_104_D56807ED43E4E4DC48B29D8264BAEB38;             // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int                                                Exp_107_94D2208D4F86DD3BB403A8AE4F5F920E;                  // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CompetitiveScore_109_B074410A4F1121F20E81338C6F3D9830;     // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Top100__112_700A609E4D3C9063697328ACC8618745;              // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_YDRZ[0x3];                                     // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Prop_Win_115_A7AA14F64C59768DA64A2992204EB937;             // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Prop_Lose_120_597F3BBF4B466D20EEB3789BE5FFDB1A;            // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Prop_Survival_121_4E39C0924601F8E1B4D682AF250E28AB;        // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Prop_Death_122_4E44D613468A31538697D89EF651406E;           // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Hunter_Win_123_8EEE77D649CEC56C179779A0AEF81D02;           // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Hunter_Lose_125_B60EC4194C8DA4C6D43D7EB963C9C02A;          // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Hunter_Kill_130_8C7ABD5E4DFF78AE76CDEE9E9056D9DC;          // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Hunter_Death_131_9216187A41E578BBEBBFBD92A37BDD6D;         // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Default_Hunter_132_D245838F481EF60429855A96BD5DB704;       // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                DefaultSpectator_179_7863759A437AAFFACF75FAB5001C5AEE;     // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Default_Ornament_133_7CC61B1D44672838D57E009FA5E4FA93;     // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Default_Effect_136_EB7C992D47A7FD72307333B720E3F0A6;       // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Default_Alias_137_835B864D4A5F542B8AF166B30050D114;        // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                DefaultTauntingSounds_176_A415D75F48B1A77A2BE1E8BA097E23D7; // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CompetitiveWin_150_3920298F457BB9D43A022F819D5B5A79;       // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CompetitiveLose_151_F0BE26964B2CA3F25DFCACB341FDD2DD;      // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CustomIn_GameScoreFPS_GMonly_156_F672C68B4CAE805567F8AE8312E40FDA; // 0x0074(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                RankingIn_GameFPS_GMonly_158_CACE8AC04C7549BD1B170AA04CAF6202; // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsDead_FPS_GMonly_163_1A6899ED48FDD1BF215618A52F6EBB64;    // 0x007C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsHunter_FPS_GMonly_164_E13FA43642082E754EF72593E30CB398;  // 0x007D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_AAES[0x2];                                     // 0x007E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                CurrentCompetitiveScoreFPS_GMonly_167_E3A4B326465677171DAC6989B0D9CD14; // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
