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

// Function FPS_Character2.FPS_Character2_C.OnRep_CurrentWeapon
struct AFPS_Character2_C_OnRep_CurrentWeapon_Params
{
};

// Function FPS_Character2.FPS_Character2_C.HideShadows
struct AFPS_Character2_C_HideShadows_Params
{
};

// Function FPS_Character2.FPS_Character2_C.JetpackEffect
struct AFPS_Character2_C_JetpackEffect_Params
{
	bool                                               JetpackOn_;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FPS_Character2.FPS_Character2_C.CanBeReloaded?
struct AFPS_Character2_C_CanBeReloaded__Params
{
	TEnumAsByte<WeaponList_EWeaponList>                WhichWeapon_;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CanBeReloaded_;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FPS_Character2.FPS_Character2_C.FPP_Shoot_Grenade
struct AFPS_Character2_C_FPP_Shoot_Grenade_Params
{
};

// Function FPS_Character2.FPS_Character2_C.TPP_Shoot_Grenade
struct AFPS_Character2_C_TPP_Shoot_Grenade_Params
{
};

// Function FPS_Character2.FPS_Character2_C.OnRep_IsGrenadeLoaded?
struct AFPS_Character2_C_OnRep_IsGrenadeLoaded__Params
{
};

// Function FPS_Character2.FPS_Character2_C.OnRep_IsRocketLoaded?
struct AFPS_Character2_C_OnRep_IsRocketLoaded__Params
{
};

// Function FPS_Character2.FPS_Character2_C.OnRep_DefaultHunter
struct AFPS_Character2_C_OnRep_DefaultHunter_Params
{
};

// Function FPS_Character2.FPS_Character2_C.Update_WeaponAmmos
struct AFPS_Character2_C_Update_WeaponAmmos_Params
{
};

// Function FPS_Character2.FPS_Character2_C.OnRep_BasicInfo
struct AFPS_Character2_C_OnRep_BasicInfo_Params
{
};

// Function FPS_Character2.FPS_Character2_C.AnimateHeal
struct AFPS_Character2_C_AnimateHeal_Params
{
	int                                                Damage;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_Character2.FPS_Character2_C.AnimateDamage
struct AFPS_Character2_C_AnimateDamage_Params
{
	int                                                Damage;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_Character2.FPS_Character2_C.OnRep_DefaultRotation
struct AFPS_Character2_C_OnRep_DefaultRotation_Params
{
};

// Function FPS_Character2.FPS_Character2_C.UpperWidgetRef
struct AFPS_Character2_C_UpperWidgetRef_Params
{
	class UUpperwidget2_C*                             AsUpper_Widget2;                                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_Character2.FPS_Character2_C.UpdateAdjustHunterVisiblity
struct AFPS_Character2_C_UpdateAdjustHunterVisiblity_Params
{
	bool                                               MyWidgetVisibility;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               WidgetVisibility;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<EOutlineEffects_EOutlineEffects>       MyOutlineType;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<EOutlineEffects_EOutlineEffects>       OutlineType;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_Character2.FPS_Character2_C.OutlineEffects
struct AFPS_Character2_C_OutlineEffects_Params
{
	TEnumAsByte<EOutlineEffects_EOutlineEffects>       OutlineType;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_Character2.FPS_Character2_C.OnRep_Sync_IsDead
struct AFPS_Character2_C_OnRep_Sync_IsDead_Params
{
};

// Function FPS_Character2.FPS_Character2_C.MatchDefaultHunter
struct AFPS_Character2_C_MatchDefaultHunter_Params
{
	int                                                DefaultHunter;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_Character2.FPS_Character2_C.GI
struct AFPS_Character2_C_GI_Params
{
	class UGI2_C*                                      AsGI2;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_Character2.FPS_Character2_C.BulletDecalDisplay
struct AFPS_Character2_C_BulletDecalDisplay_Params
{
	struct FVector                                     TraceStart;                                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     TraceEnd;                                                  // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_Character2.FPS_Character2_C.SniperModeToDefault
struct AFPS_Character2_C_SniperModeToDefault_Params
{
};

// Function FPS_Character2.FPS_Character2_C.OnSniperZoomed
struct AFPS_Character2_C_OnSniperZoomed_Params
{
};

// Function FPS_Character2.FPS_Character2_C.WeaponSwap_CrosshairChange
struct AFPS_Character2_C_WeaponSwap_CrosshairChange_Params
{
};

// Function FPS_Character2.FPS_Character2_C.MakeMyUpperWidgetInvisible
struct AFPS_Character2_C_MakeMyUpperWidgetInvisible_Params
{
};

// Function FPS_Character2.FPS_Character2_C.GM
struct AFPS_Character2_C_GM_Params
{
	class AFPS_GM_C*                                   AsFPS_GM;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_Character2.FPS_Character2_C.ReloadAmmo_Server
struct AFPS_Character2_C_ReloadAmmo_Server_Params
{
};

// Function FPS_Character2.FPS_Character2_C.UpdateAmmoStatus(SearchArray)
struct AFPS_Character2_C_UpdateAmmoStatus_SearchArray__Params
{
};

// Function FPS_Character2.FPS_Character2_C.AmmoCheck_Server
struct AFPS_Character2_C_AmmoCheck_Server_Params
{
	bool                                               CanShoot_;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               CanReload_;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FPS_Character2.FPS_Character2_C.UpdateAmmoStatus
struct AFPS_Character2_C_UpdateAmmoStatus_Params
{
	TEnumAsByte<WeaponList_EWeaponList>                CurrentWeapon;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CurrentAmmo;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxAmmo;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               AmmoStatusVisibility;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               HasReloadLimit_;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                ReloadAmount;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ApplyBurningTime_;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FPS_Character2.FPS_Character2_C.Initialization
struct AFPS_Character2_C_Initialization_Params
{
};

// Function FPS_Character2.FPS_Character2_C.UpperWidgetVisibilitySetting
struct AFPS_Character2_C_UpperWidgetVisibilitySetting_Params
{
	bool                                               Visible_;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FPS_Character2.FPS_Character2_C.PC
struct AFPS_Character2_C_PC_Params
{
	class AFPS_PC_C*                                   AsFPS_PC;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_Character2.FPS_Character2_C.PS
struct AFPS_Character2_C_PS_Params
{
	class AFPS_PS_C*                                   PlayerState;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_Character2.FPS_Character2_C.TPP_Shadow_Reload
struct AFPS_Character2_C_TPP_Shadow_Reload_Params
{
};

// Function FPS_Character2.FPS_Character2_C.TPP_Shadow_Shoot
struct AFPS_Character2_C_TPP_Shadow_Shoot_Params
{
};

// Function FPS_Character2.FPS_Character2_C.OnKnifeShoot
struct AFPS_Character2_C_OnKnifeShoot_Params
{
};

// Function FPS_Character2.FPS_Character2_C.OnGunShoot
struct AFPS_Character2_C_OnGunShoot_Params
{
};

// Function FPS_Character2.FPS_Character2_C.TPP_Shotgun
struct AFPS_Character2_C_TPP_Shotgun_Params
{
	class ATPP_Shotgun_C*                              AsTPP_Shotgun;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      SkeletalMesh;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        StaticMesh;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_Character2.FPS_Character2_C.TPP_Weapon_Visibility
struct AFPS_Character2_C_TPP_Weapon_Visibility_Params
{
	TEnumAsByte<WeaponList_EWeaponList>                WhichWeapon_;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_Character2.FPS_Character2_C.TPP_Weapon_Shadow
struct AFPS_Character2_C_TPP_Weapon_Shadow_Params
{
	TEnumAsByte<WeaponList_EWeaponList>                WhichWeapon_;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_Character2.FPS_Character2_C.TPP_Reload
struct AFPS_Character2_C_TPP_Reload_Params
{
};

// Function FPS_Character2.FPS_Character2_C.TPP_Shoot
struct AFPS_Character2_C_TPP_Shoot_Params
{
};

// Function FPS_Character2.FPS_Character2_C.FPP_Reload
struct AFPS_Character2_C_FPP_Reload_Params
{
};

// Function FPS_Character2.FPS_Character2_C.FPP_Shoot
struct AFPS_Character2_C_FPP_Shoot_Params
{
};

// Function FPS_Character2.FPS_Character2_C.Client_WeaponSwap
struct AFPS_Character2_C_Client_WeaponSwap_Params
{
	TEnumAsByte<WeaponList_EWeaponList>                Which_Weapon_;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_Character2.FPS_Character2_C.GetWeaponRowName
struct AFPS_Character2_C_GetWeaponRowName_Params
{
	TEnumAsByte<WeaponList_EWeaponList>                Weapon;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       RowName;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_Character2.FPS_Character2_C.CameraShake_FPS__FinishedFunc
struct AFPS_Character2_C_CameraShake_FPS__FinishedFunc_Params
{
};

// Function FPS_Character2.FPS_Character2_C.CameraShake_FPS__UpdateFunc
struct AFPS_Character2_C_CameraShake_FPS__UpdateFunc_Params
{
};

// Function FPS_Character2.FPS_Character2_C.Timeline_0__FinishedFunc
struct AFPS_Character2_C_Timeline_0__FinishedFunc_Params
{
};

// Function FPS_Character2.FPS_Character2_C.Timeline_0__UpdateFunc
struct AFPS_Character2_C_Timeline_0__UpdateFunc_Params
{
};

// Function FPS_Character2.FPS_Character2_C.JetpackTimeline__FinishedFunc
struct AFPS_Character2_C_JetpackTimeline__FinishedFunc_Params
{
};

// Function FPS_Character2.FPS_Character2_C.JetpackTimeline__UpdateFunc
struct AFPS_Character2_C_JetpackTimeline__UpdateFunc_Params
{
};

// Function FPS_Character2.FPS_Character2_C.JetpackTimeline_Reverse__FinishedFunc
struct AFPS_Character2_C_JetpackTimeline_Reverse__FinishedFunc_Params
{
};

// Function FPS_Character2.FPS_Character2_C.JetpackTimeline_Reverse__UpdateFunc
struct AFPS_Character2_C_JetpackTimeline_Reverse__UpdateFunc_Params
{
};

// Function FPS_Character2.FPS_Character2_C.InpActEvt_Jump_K2Node_InputActionEvent_15
struct AFPS_Character2_C_InpActEvt_Jump_K2Node_InputActionEvent_15_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function FPS_Character2.FPS_Character2_C.InpActEvt_Flash_K2Node_InputActionEvent_14
struct AFPS_Character2_C_InpActEvt_Flash_K2Node_InputActionEvent_14_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function FPS_Character2.FPS_Character2_C.InpActEvt_Shoot_K2Node_InputActionEvent_13
struct AFPS_Character2_C_InpActEvt_Shoot_K2Node_InputActionEvent_13_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function FPS_Character2.FPS_Character2_C.InpActEvt_Shoot_K2Node_InputActionEvent_12
struct AFPS_Character2_C_InpActEvt_Shoot_K2Node_InputActionEvent_12_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function FPS_Character2.FPS_Character2_C.InpActEvt_Reload_K2Node_InputActionEvent_11
struct AFPS_Character2_C_InpActEvt_Reload_K2Node_InputActionEvent_11_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function FPS_Character2.FPS_Character2_C.InpActEvt_Crouch_K2Node_InputActionEvent_10
struct AFPS_Character2_C_InpActEvt_Crouch_K2Node_InputActionEvent_10_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function FPS_Character2.FPS_Character2_C.InpActEvt_Crouch_K2Node_InputActionEvent_9
struct AFPS_Character2_C_InpActEvt_Crouch_K2Node_InputActionEvent_9_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function FPS_Character2.FPS_Character2_C.InpActEvt_ZoomIn_K2Node_InputActionEvent_8
struct AFPS_Character2_C_InpActEvt_ZoomIn_K2Node_InputActionEvent_8_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function FPS_Character2.FPS_Character2_C.InpActEvt_Weapon1_K2Node_InputActionEvent_7
struct AFPS_Character2_C_InpActEvt_Weapon1_K2Node_InputActionEvent_7_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function FPS_Character2.FPS_Character2_C.InpActEvt_Weapon2_K2Node_InputActionEvent_6
struct AFPS_Character2_C_InpActEvt_Weapon2_K2Node_InputActionEvent_6_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function FPS_Character2.FPS_Character2_C.InpActEvt_Weapon3_K2Node_InputActionEvent_5
struct AFPS_Character2_C_InpActEvt_Weapon3_K2Node_InputActionEvent_5_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function FPS_Character2.FPS_Character2_C.InpActEvt_Weapon4_K2Node_InputActionEvent_4
struct AFPS_Character2_C_InpActEvt_Weapon4_K2Node_InputActionEvent_4_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function FPS_Character2.FPS_Character2_C.InpActEvt_Weapon5_K2Node_InputActionEvent_3
struct AFPS_Character2_C_InpActEvt_Weapon5_K2Node_InputActionEvent_3_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function FPS_Character2.FPS_Character2_C.InpActEvt_Weapon6_K2Node_InputActionEvent_2
struct AFPS_Character2_C_InpActEvt_Weapon6_K2Node_InputActionEvent_2_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function FPS_Character2.FPS_Character2_C.InpActEvt_Jetpack_K2Node_InputActionEvent_1
struct AFPS_Character2_C_InpActEvt_Jetpack_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function FPS_Character2.FPS_Character2_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_41
struct AFPS_Character2_C_InpAxisEvt_LookUp_K2Node_InputAxisEvent_41_Params
{
	float                                              AxisValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_Character2.FPS_Character2_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_48
struct AFPS_Character2_C_InpAxisEvt_Turn_K2Node_InputAxisEvent_48_Params
{
	float                                              AxisValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_Character2.FPS_Character2_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_80
struct AFPS_Character2_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_80_Params
{
	float                                              AxisValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_Character2.FPS_Character2_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_91
struct AFPS_Character2_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_91_Params
{
	float                                              AxisValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_Character2.FPS_Character2_C.InpAxisEvt_TurnRate_K2Node_InputAxisEvent_39
struct AFPS_Character2_C_InpAxisEvt_TurnRate_K2Node_InputAxisEvent_39_Params
{
	float                                              AxisValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_Character2.FPS_Character2_C.InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_54
struct AFPS_Character2_C_InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_54_Params
{
	float                                              AxisValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_Character2.FPS_Character2_C.ReceiveBeginPlay
struct AFPS_Character2_C_ReceiveBeginPlay_Params
{
};

// Function FPS_Character2.FPS_Character2_C.Multi_Fire
struct AFPS_Character2_C_Multi_Fire_Params
{
};

// Function FPS_Character2.FPS_Character2_C.Server_Fire
struct AFPS_Character2_C_Server_Fire_Params
{
};

// Function FPS_Character2.FPS_Character2_C.Server_Reload
struct AFPS_Character2_C_Server_Reload_Params
{
};

// Function FPS_Character2.FPS_Character2_C.Multi_Reload
struct AFPS_Character2_C_Multi_Reload_Params
{
};

// Function FPS_Character2.FPS_Character2_C.Server_ControllerPitch
struct AFPS_Character2_C_Server_ControllerPitch_Params
{
	float                                              PitchValue;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_Character2.FPS_Character2_C.Server Weapon_Swap
struct AFPS_Character2_C_Server_Weapon_Swap_Params
{
	TEnumAsByte<WeaponList_EWeaponList>                WhichWeapon_;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ShootDelay;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ReloadDelay;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_Character2.FPS_Character2_C.Server_Croaching
struct AFPS_Character2_C_Server_Croaching_Params
{
	bool                                               Croaching_;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FPS_Character2.FPS_Character2_C.ServerDelayStart
struct AFPS_Character2_C_ServerDelayStart_Params
{
};

// Function FPS_Character2.FPS_Character2_C.ShootDelayStart
struct AFPS_Character2_C_ShootDelayStart_Params
{
};

// Function FPS_Character2.FPS_Character2_C.ReloadDelayStart
struct AFPS_Character2_C_ReloadDelayStart_Params
{
};

// Function FPS_Character2.FPS_Character2_C.RekiadDelayEnd
struct AFPS_Character2_C_RekiadDelayEnd_Params
{
};

// Function FPS_Character2.FPS_Character2_C.PacketCheck_WeaponSwap
struct AFPS_Character2_C_PacketCheck_WeaponSwap_Params
{
	TEnumAsByte<WeaponList_EWeaponList>                Weapon;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_Character2.FPS_Character2_C.PacketCheck_WeaponSwap_End
struct AFPS_Character2_C_PacketCheck_WeaponSwap_End_Params
{
	TEnumAsByte<WeaponList_EWeaponList>                Weapon;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_Character2.FPS_Character2_C.PacketCheck_Shoot
struct AFPS_Character2_C_PacketCheck_Shoot_Params
{
};

// Function FPS_Character2.FPS_Character2_C.PacketCheck_Reload
struct AFPS_Character2_C_PacketCheck_Reload_Params
{
};

// Function FPS_Character2.FPS_Character2_C.PacketCheck_Reload_End
struct AFPS_Character2_C_PacketCheck_Reload_End_Params
{
};

// Function FPS_Character2.FPS_Character2_C.Impact_Rep
struct AFPS_Character2_C_Impact_Rep_Params
{
	TArray<struct FHitResult>                          Hit;                                                       // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
	struct FHitResult                                  FloorLocation;                                             // 0x0000(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	TEnumAsByte<WeaponList_EWeaponList>                Weapon;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFPS_Character2_C*                           Character;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FHitResult>                          PenetratedHit;                                             // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
};

// Function FPS_Character2.FPS_Character2_C.Impact_Multi
struct AFPS_Character2_C_Impact_Multi_Params
{
	TArray<struct FHitResult>                          Hit;                                                       // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
	struct FHitResult                                  FloorLocation;                                             // 0x0000(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	TEnumAsByte<WeaponList_EWeaponList>                Weapon;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFPS_Character2_C*                           Character;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FHitResult>                          PenetratedHit;                                             // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
};

// Function FPS_Character2.FPS_Character2_C.AddDamageToSelf
struct AFPS_Character2_C_AddDamageToSelf_Params
{
	int                                                Damage;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_Character2.FPS_Character2_C.AmmoCheck
struct AFPS_Character2_C_AmmoCheck_Params
{
};

// Function FPS_Character2.FPS_Character2_C.OnShoot
struct AFPS_Character2_C_OnShoot_Params
{
};

// Function FPS_Character2.FPS_Character2_C.ReloadAmmo
struct AFPS_Character2_C_ReloadAmmo_Params
{
};

// Function FPS_Character2.FPS_Character2_C.OnWaitingMode?
struct AFPS_Character2_C_OnWaitingMode__Params
{
	bool                                               IsWaiting_;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FPS_Character2.FPS_Character2_C.OnOffFlash_Server
struct AFPS_Character2_C_OnOffFlash_Server_Params
{
	bool                                               On_;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FPS_Character2.FPS_Character2_C.OnOffFlash_Multi
struct AFPS_Character2_C_OnOffFlash_Multi_Params
{
	bool                                               On_;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FPS_Character2.FPS_Character2_C.OnLanded
struct AFPS_Character2_C_OnLanded_Params
{
	struct FHitResult                                  Hit;                                                       // 0x0000(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function FPS_Character2.FPS_Character2_C.Jump_Multi
struct AFPS_Character2_C_Jump_Multi_Params
{
};

// Function FPS_Character2.FPS_Character2_C.Jump_Server
struct AFPS_Character2_C_Jump_Server_Params
{
};

// Function FPS_Character2.FPS_Character2_C.AddHealthToSelf
struct AFPS_Character2_C_AddHealthToSelf_Params
{
	int                                                HealthToAdd;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_Character2.FPS_Character2_C.UpdateMainKillFeed
struct AFPS_Character2_C_UpdateMainKillFeed_Params
{
	int                                                KillCount;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_Character2.FPS_Character2_C.ReceiveDestroyed
struct AFPS_Character2_C_ReceiveDestroyed_Params
{
};

// Function FPS_Character2.FPS_Character2_C.ClientLogicSwapWeapon
struct AFPS_Character2_C_ClientLogicSwapWeapon_Params
{
	struct FTransform                                  FppArmTransform;                                           // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
};

// Function FPS_Character2.FPS_Character2_C.InpAxisEvt_MoveBackward_K2Node_InputAxisEvent_1
struct AFPS_Character2_C_InpAxisEvt_MoveBackward_K2Node_InputAxisEvent_1_Params
{
	float                                              AxisValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_Character2.FPS_Character2_C.InpAxisEvt_MoveLeft_K2Node_InputAxisEvent_2
struct AFPS_Character2_C_InpAxisEvt_MoveLeft_K2Node_InputAxisEvent_2_Params
{
	float                                              AxisValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_Character2.FPS_Character2_C.IncreaseMovementSpeed
struct AFPS_Character2_C_IncreaseMovementSpeed_Params
{
};

// Function FPS_Character2.FPS_Character2_C.Auto_Crouch
struct AFPS_Character2_C_Auto_Crouch_Params
{
};

// Function FPS_Character2.FPS_Character2_C.Recoil_and_Shake
struct AFPS_Character2_C_Recoil_and_Shake_Params
{
	float                                              ScaleShake;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ScaleRecoil;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_Character2.FPS_Character2_C.DeliverImpactToVolleyball
struct AFPS_Character2_C_DeliverImpactToVolleyball_Params
{
	class AVolleyBall_Neutual_C*                       Volleyball;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<WeaponList_EWeaponList>                WhichWeapon_;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     ImpactLocation;                                            // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_Character2.FPS_Character2_C.Multi_AnimateHealth
struct AFPS_Character2_C_Multi_AnimateHealth_Params
{
	int                                                Subtract_Amount;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               _Subtract;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FPS_Character2.FPS_Character2_C.AnimateMyHealth
struct AFPS_Character2_C_AnimateMyHealth_Params
{
	int                                                from;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                To;                                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               _Buffer;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FPS_Character2.FPS_Character2_C.SyncBasicInfo
struct AFPS_Character2_C_SyncBasicInfo_Params
{
};

// Function FPS_Character2.FPS_Character2_C.SyncDefaultHunter
struct AFPS_Character2_C_SyncDefaultHunter_Params
{
};

// Function FPS_Character2.FPS_Character2_C.OnRocketLauncherReloaded
struct AFPS_Character2_C_OnRocketLauncherReloaded_Params
{
};

// Function FPS_Character2.FPS_Character2_C.OnRocketLauncherReloaded_Server
struct AFPS_Character2_C_OnRocketLauncherReloaded_Server_Params
{
};

// Function FPS_Character2.FPS_Character2_C.LaunchRocketProjectile
struct AFPS_Character2_C_LaunchRocketProjectile_Params
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    Rotation;                                                  // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FPS_Character2.FPS_Character2_C.GrenadeFire_Server
struct AFPS_Character2_C_GrenadeFire_Server_Params
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    Rotation;                                                  // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FPS_Character2.FPS_Character2_C.OnGrenadeReloaded_Server
struct AFPS_Character2_C_OnGrenadeReloaded_Server_Params
{
	bool                                               Reloaded_;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FPS_Character2.FPS_Character2_C.GrenadeFireMontage
struct AFPS_Character2_C_GrenadeFireMontage_Params
{
};

// Function FPS_Character2.FPS_Character2_C.GrenadeFireMontage_Server
struct AFPS_Character2_C_GrenadeFireMontage_Server_Params
{
};

// Function FPS_Character2.FPS_Character2_C.GrenadeFireMontage_Multi
struct AFPS_Character2_C_GrenadeFireMontage_Multi_Params
{
};

// Function FPS_Character2.FPS_Character2_C.OnGrenadeThrow
struct AFPS_Character2_C_OnGrenadeThrow_Params
{
};

// Function FPS_Character2.FPS_Character2_C.Jetpack_Server
struct AFPS_Character2_C_Jetpack_Server_Params
{
};

// Function FPS_Character2.FPS_Character2_C.Jetpack_Multi
struct AFPS_Character2_C_Jetpack_Multi_Params
{
	bool                                               JetpackOn_;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              SyncValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_Character2.FPS_Character2_C.InpAxisEvt_FlyUp_K2Node_InputAxisEvent_3
struct AFPS_Character2_C_InpAxisEvt_FlyUp_K2Node_InputAxisEvent_3_Params
{
	float                                              AxisValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_Character2.FPS_Character2_C.InpAxisEvt_FlyDown_K2Node_InputAxisEvent_4
struct AFPS_Character2_C_InpAxisEvt_FlyDown_K2Node_InputAxisEvent_4_Params
{
	float                                              AxisValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_Character2.FPS_Character2_C.InitJetpackSound
struct AFPS_Character2_C_InitJetpackSound_Params
{
};

// Function FPS_Character2.FPS_Character2_C.ToggleJetpackSound
struct AFPS_Character2_C_ToggleJetpackSound_Params
{
	bool                                               JetpackSoundOn_;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FPS_Character2.FPS_Character2_C.JetpackSoundLoop
struct AFPS_Character2_C_JetpackSoundLoop_Params
{
};

// Function FPS_Character2.FPS_Character2_C.fJetpackDelay
struct AFPS_Character2_C_fJetpackDelay_Params
{
};

// Function FPS_Character2.FPS_Character2_C.ConsumeJetpack
struct AFPS_Character2_C_ConsumeJetpack_Params
{
	bool                                               Consume_;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FPS_Character2.FPS_Character2_C.StopAllJetpackTimeline
struct AFPS_Character2_C_StopAllJetpackTimeline_Params
{
};

// Function FPS_Character2.FPS_Character2_C.ExecuteUbergraph_FPS_Character2
struct AFPS_Character2_C_ExecuteUbergraph_FPS_Character2_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
