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

// Function ProfileUMG.ProfileUMG_C.PC
struct UProfileUMG_C_PC_Params
{
	class ALobbyPC2_C*                                 AsLobby_PC;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ProfileUMG.ProfileUMG_C.UpdateProfileClicked
struct UProfileUMG_C_UpdateProfileClicked_Params
{
	TEnumAsByte<EProfileMode_EProfileMode>             To;                                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ProfileUMG.ProfileUMG_C.ButtonSwitcher
struct UProfileUMG_C_ButtonSwitcher_Params
{
	TEnumAsByte<EProfileMode_EProfileMode>             To;                                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ProfileUMG.ProfileUMG_C.Switcher
struct UProfileUMG_C_Switcher_Params
{
	TEnumAsByte<EProfileMode_EProfileMode>             To;                                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ProfileUMG.ProfileUMG_C.VisibleClickedProfileMode
struct UProfileUMG_C_VisibleClickedProfileMode_Params
{
	TEnumAsByte<EProfileMode_EProfileMode>             To;                                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ProfileUMG.ProfileUMG_C.HideCurrentProfileMode
struct UProfileUMG_C_HideCurrentProfileMode_Params
{
	TEnumAsByte<EProfileMode_EProfileMode>             To;                                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               SameWidgetClicked_;                                        // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ProfileUMG.ProfileUMG_C.OnAchievementsButtonClicked
struct UProfileUMG_C_OnAchievementsButtonClicked_Params
{
};

// Function ProfileUMG.ProfileUMG_C.OnRankingButtonClicked
struct UProfileUMG_C_OnRankingButtonClicked_Params
{
};

// Function ProfileUMG.ProfileUMG_C.OnFriendRequestButtonClicked
struct UProfileUMG_C_OnFriendRequestButtonClicked_Params
{
};

// Function ProfileUMG.ProfileUMG_C.OnFriendButtonClicked
struct UProfileUMG_C_OnFriendButtonClicked_Params
{
};

// Function ProfileUMG.ProfileUMG_C.OnProfileButtonClicked
struct UProfileUMG_C_OnProfileButtonClicked_Params
{
};

// Function ProfileUMG.ProfileUMG_C.InitRef
struct UProfileUMG_C_InitRef_Params
{
};

// Function ProfileUMG.ProfileUMG_C.Construct
struct UProfileUMG_C_Construct_Params
{
};

// Function ProfileUMG.ProfileUMG_C.ExecuteUbergraph_ProfileUMG
struct UProfileUMG_C_ExecuteUbergraph_ProfileUMG_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
