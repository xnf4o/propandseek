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

// Function Noti.Noti_C.Update_07_Perspective
struct UNoti_C_Update_07_Perspective_Params
{
	struct FString                                     PerspectiveName;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function Noti.Noti_C.Update_06_DamagedBy
struct UNoti_C_Update_06_DamagedBy_Params
{
	struct FString                                     PlayerDamagedYou;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int                                                DamageInput;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Noti.Noti_C.Update_05_AddHealth
struct UNoti_C_Update_05_AddHealth_Params
{
	int                                                AddedHealthAmount;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Noti.Noti_C.Update_04_SelfKilled
struct UNoti_C_Update_04_SelfKilled_Params
{
	int                                                Score;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Noti.Noti_C.Update_03_YouwereEliminatedBy
struct UNoti_C_Update_03_YouwereEliminatedBy_Params
{
	struct FString                                     Username_YouWereKilledBy_;                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int                                                Score;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Noti.Noti_C.Update_02_YouEliminated
struct UNoti_C_Update_02_YouEliminated_Params
{
	struct FString                                     Username_YouKilled_;                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int                                                Score;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Noti.Noti_C.Update_01_SelfDamage
struct UNoti_C_Update_01_SelfDamage_Params
{
	int                                                SelfDamageAmount;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
