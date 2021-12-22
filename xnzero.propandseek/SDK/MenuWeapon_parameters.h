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

// Function MenuWeapon.MenuWeapon_C.UpdateWeapon
struct UMenuWeapon_C_UpdateWeapon_Params
{
	int                                                RequestedWeaponNumber;                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MenuWeapon.MenuWeapon_C.GI
struct UMenuWeapon_C_GI_Params
{
	class UGI2_C*                                      AsGI2;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MenuWeapon.MenuWeapon_C.Construct
struct UMenuWeapon_C_Construct_Params
{
};

// Function MenuWeapon.MenuWeapon_C.ExecuteUbergraph_MenuWeapon
struct UMenuWeapon_C_ExecuteUbergraph_MenuWeapon_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
