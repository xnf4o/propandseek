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

// Function Profile_B_Friends.Profile_B_Friends_C.GI
struct UProfile_B_Friends_C_GI_Params
{
	class UGI2_C*                                      AsGI2;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Profile_B_Friends.Profile_B_Friends_C.PC
struct UProfile_B_Friends_C_PC_Params
{
	class ALobbyPC2_C*                                 AsLobby_PC;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Profile_B_Friends.Profile_B_Friends_C.Update
struct UProfile_B_Friends_C_Update_Params
{
	TArray<struct FsFriends>                           SortedFriendList;                                          // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Profile_B_Friends.Profile_B_Friends_C.ExecuteUbergraph_Profile_B_Friends
struct UProfile_B_Friends_C_ExecuteUbergraph_Profile_B_Friends_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
