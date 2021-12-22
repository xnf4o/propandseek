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
// Parameters
//---------------------------------------------------------------------------

// Function VoteKickUMG.VoteKickUMG_C.PC
struct UVoteKickUMG_C_PC_Params
{
	class AFPS_PC_C*                                   AsFPS_PC;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function VoteKickUMG.VoteKickUMG_C.InitVoteKick
struct UVoteKickUMG_C_InitVoteKick_Params
{
	int                                                TimeGiven;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     userName;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     SteamID;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function VoteKickUMG.VoteKickUMG_C.Countdown
struct UVoteKickUMG_C_Countdown_Params
{
};

// Function VoteKickUMG.VoteKickUMG_C.Reset
struct UVoteKickUMG_C_Reset_Params
{
};

// Function VoteKickUMG.VoteKickUMG_C.ExecuteUbergraph_VoteKickUMG
struct UVoteKickUMG_C_ExecuteUbergraph_VoteKickUMG_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
