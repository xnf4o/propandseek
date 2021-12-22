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

// Function MenuWeaponBox.MenuWeaponBox_C.PC
struct UMenuWeaponBox_C_PC_Params
{
	class AFPS_PC_C*                                   AsFPS_PC;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MenuWeaponBox.MenuWeaponBox_C.Construct
struct UMenuWeaponBox_C_Construct_Params
{
};

// Function MenuWeaponBox.MenuWeaponBox_C.UpdateWeaponNumber
struct UMenuWeaponBox_C_UpdateWeaponNumber_Params
{
	int                                                RequestedWeaponNumber;                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MenuWeaponBox.MenuWeaponBox_C.ExecuteUbergraph_MenuWeaponBox
struct UMenuWeaponBox_C_ExecuteUbergraph_MenuWeaponBox_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
