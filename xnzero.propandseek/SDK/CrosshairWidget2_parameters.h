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

// Function CrosshairWidget2.CrosshairWidget2_C.Get_Grenade_Visibility_1
struct UCrosshairWidget2_C_Get_Grenade_Visibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CrosshairWidget2.CrosshairWidget2_C.Get_RocketLauncher_Visibility_1
struct UCrosshairWidget2_C_Get_RocketLauncher_Visibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CrosshairWidget2.CrosshairWidget2_C.Get_SniperScreen_Visibility_1
struct UCrosshairWidget2_C_Get_SniperScreen_Visibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CrosshairWidget2.CrosshairWidget2_C.Get_Pistol_Visibility_1
struct UCrosshairWidget2_C_Get_Pistol_Visibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CrosshairWidget2.CrosshairWidget2_C.Get_Shotgun_Visibility_1
struct UCrosshairWidget2_C_Get_Shotgun_Visibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CrosshairWidget2.CrosshairWidget2_C.Get_Knife_Visibility_1
struct UCrosshairWidget2_C_Get_Knife_Visibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CrosshairWidget2.CrosshairWidget2_C.Get_Sniper_Visibility_1
struct UCrosshairWidget2_C_Get_Sniper_Visibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CrosshairWidget2.CrosshairWidget2_C.Construct
struct UCrosshairWidget2_C_Construct_Params
{
};

// Function CrosshairWidget2.CrosshairWidget2_C.SetupCrosshair
struct UCrosshairWidget2_C_SetupCrosshair_Params
{
	TEnumAsByte<WeaponList_EWeaponList>                WhichWeapon_;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CrosshairWidget2.CrosshairWidget2_C.OnCharacterMove
struct UCrosshairWidget2_C_OnCharacterMove_Params
{
};

// Function CrosshairWidget2.CrosshairWidget2_C.Tick
struct UCrosshairWidget2_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CrosshairWidget2.CrosshairWidget2_C.ExecuteUbergraph_CrosshairWidget2
struct UCrosshairWidget2_C_ExecuteUbergraph_CrosshairWidget2_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
