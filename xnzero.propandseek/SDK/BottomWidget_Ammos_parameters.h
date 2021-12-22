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

// Function BottomWidget_Ammos.BottomWidget_Ammos_C.PC
struct UBottomWidget_Ammos_C_PC_Params
{
	class AFPS_PC_C*                                   AsFPS_PC;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BottomWidget_Ammos.BottomWidget_Ammos_C.StartFuel
struct UBottomWidget_Ammos_C_StartFuel_Params
{
	bool                                               Increase_;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BottomWidget_Ammos.BottomWidget_Ammos_C.GI
struct UBottomWidget_Ammos_C_GI_Params
{
	class UGI2_C*                                      AsGI2;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BottomWidget_Ammos.BottomWidget_Ammos_C.ToggleJetpackIcon
struct UBottomWidget_Ammos_C_ToggleJetpackIcon_Params
{
	bool                                               JetpackOn_;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BottomWidget_Ammos.BottomWidget_Ammos_C.UpdateBurningTime
struct UBottomWidget_Ammos_C_UpdateBurningTime_Params
{
	bool                                               BurningTime;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BottomWidget_Ammos.BottomWidget_Ammos_C.UpdateAmmos
struct UBottomWidget_Ammos_C_UpdateAmmos_Params
{
	TEnumAsByte<WeaponList_EWeaponList>                Weapon;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CurrentAmmo;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxAmmo;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ApplyBurningTime_;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BottomWidget_Ammos.BottomWidget_Ammos_C.Construct
struct UBottomWidget_Ammos_C_Construct_Params
{
};

// Function BottomWidget_Ammos.BottomWidget_Ammos_C.StartFuelingJetpack
struct UBottomWidget_Ammos_C_StartFuelingJetpack_Params
{
	bool                                               Consume_;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Value;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BottomWidget_Ammos.BottomWidget_Ammos_C.ExecuteUbergraph_BottomWidget_Ammos
struct UBottomWidget_Ammos_C_ExecuteUbergraph_BottomWidget_Ammos_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
