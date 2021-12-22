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
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass FPS_Character2.FPS_Character2_C
// 0x0358 (FullSize[0x0AA0] - InheritedSize[0x0748])
class AFPS_Character2_C : public ACharacter
{
public:
	unsigned char                                      UnknownData_O7L6[0x8];                                     // 0x0748(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0750(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USpotLightComponent*                         SpotLight;                                                 // 0x0758(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                         SpotLight1;                                                // 0x0760(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    JetFire_Right_Smoke;                                       // 0x0768(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    JetFire_Left_Smoke;                                        // 0x0770(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                             Arrow2;                                                    // 0x0778(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    JetFire_Right;                                             // 0x0780(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    JetFire_Left;                                              // 0x0788(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        M_Jetpack;                                                 // 0x0790(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      FPP_RocketLauncherMissle_Hand;                             // 0x0798(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      RocketLauncherMissle_Hand;                                 // 0x07A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      RocketLauncherMissle;                                      // 0x07A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                             FPP_MissleTipLocation;                                     // 0x07B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      FPP_RocketLauncherMissle;                                  // 0x07B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        FPP_Grenade;                                               // 0x07C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      FPP_RocketLauncher;                                        // 0x07C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        Grenade;                                                   // 0x07D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      RocketLauncher;                                            // 0x07D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      FPP_Sniper;                                                // 0x07E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      Sniper;                                                    // 0x07E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                            UpperWidget;                                               // 0x07F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                            FirstPersonCamera;                                         // 0x07F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpringArmComponent*                         SpringArm_FPP;                                             // 0x0800(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      TPP_Knife;                                                 // 0x0808(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      FPP_Knife;                                                 // 0x0810(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        Pistol_Magazine;                                           // 0x0818(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      FPP_Pistol;                                                // 0x0820(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      Pistol;                                                    // 0x0828(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        Shotgun_Magazine;                                          // 0x0830(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      FirstPersonMesh;                                           // 0x0838(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      FPP_Shotgun;                                               // 0x0840(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                            ThirdPersonCamera;                                         // 0x0848(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpringArmComponent*                         SpringArm_TPP;                                             // 0x0850(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                        Shotgun;                                                   // 0x0858(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              JetpackTimeline_Reverse_Fuel_reverse_7D3D9C8C4E0171AC11FE95B29DD30272; // 0x0860(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             JetpackTimeline_Reverse__Direction_7D3D9C8C4E0171AC11FE95B29DD30272; // 0x0864(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_X9RA[0x3];                                     // 0x0865(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          JetpackTimeline_Reverse;                                   // 0x0868(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              JetpackTimeline_Fuel_A5710C95494A46EFA2EFD79B55DC6C87;     // 0x0870(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             JetpackTimeline__Direction_A5710C95494A46EFA2EFD79B55DC6C87; // 0x0874(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_CDOY[0x3];                                     // 0x0875(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          JetpackTimeline;                                           // 0x0878(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_0_Value_A53173434222911145A0BFBCD73EAE33;         // 0x0880(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_0__Direction_A53173434222911145A0BFBCD73EAE33;    // 0x0884(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_B55V[0x3];                                     // 0x0885(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_1;                                                // 0x0888(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CameraShake_FPS_CamShaker_B4BB2ADE4C6806923DAB939C6B34FAF2; // 0x0890(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             CameraShake_FPS__Direction_B4BB2ADE4C6806923DAB939C6B34FAF2; // 0x0894(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_WYHH[0x3];                                     // 0x0895(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          CameraShake_FPS;                                           // 0x0898(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BaseTurnRate;                                              // 0x08A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BaseLookUpRate;                                            // 0x08A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsCroaching_;                                              // 0x08A8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               PreviousIsCrouching_;                                      // 0x08A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_C6PF[0x6];                                     // 0x08AA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FWeapons                                    CurrentWeaponStructure;                                    // 0x08B0(0x00D0) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ControllerPitch;                                           // 0x0980(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PreviousControllerPitch;                                   // 0x0984(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<WeaponList_EWeaponList>                CurrentWeapon;                                             // 0x0988(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	bool                                               CanSendPacket_;                                            // 0x0989(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_V6WM[0x6];                                     // 0x098A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                Debug;                                                     // 0x0990(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                              MoveForward;                                               // 0x0998(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MoveRight;                                                 // 0x099C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PreviousMoveForward;                                       // 0x09A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PreviousMoveRight;                                         // 0x09A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CanShoot_;                                                 // 0x09A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_OHRH[0x3];                                     // 0x09A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ShootTime;                                                 // 0x09AC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsReloading_;                                              // 0x09B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_EC17[0x3];                                     // 0x09B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ReloadingTime;                                             // 0x09B4(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSAmmo>                              WeaponAmmos;                                               // 0x09B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               WaitingTime_;                                              // 0x09C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_LY3X[0x3];                                     // 0x09C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                KillCount;                                                 // 0x09CC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ZoomMode;                                                  // 0x09D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_4DD1[0x4];                                     // 0x09D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     userName;                                                  // 0x09D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	int                                                DefaultAlias;                                              // 0x09E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                DefaultHunter;                                             // 0x09EC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	int                                                Server_CurrentHealth;                                      // 0x09F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Server_MaxHealth;                                          // 0x09F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Sync_IsDead;                                               // 0x09F8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                               IsShooting_;                                               // 0x09F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_U5GJ[0x2];                                     // 0x09FA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRotator                                    DefaultRotation;                                           // 0x09FC(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	float                                              Temp_Pitch;                                                // 0x0A08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                HealthFrom;                                                // 0x0A0C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                HealthTo;                                                  // 0x0A10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_GOKZ[0x4];                                     // 0x0A14(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBasicInfo                                  BasicInfo;                                                 // 0x0A18(0x0028) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, RepNotify, HasGetValueTypeHash)
	int                                                Server_HunterKill_OneRound_;                               // 0x0A40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsRocketLoaded_;                                           // 0x0A44(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                               IsGrenadeReloaded_;                                        // 0x0A45(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	unsigned char                                      UnknownData_DJJL[0x2];                                     // 0x0A46(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAudioComponent*                             JetpackSfx;                                                // 0x0A48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                                JetpackSoundLoopTimer;                                     // 0x0A50(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             JetpackSfx2;                                               // 0x0A58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ToggleJetpackSfx;                                          // 0x0A60(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               FuelDepleted_;                                             // 0x0A61(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsUsingJetpack_;                                           // 0x0A62(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bJetpackDelay;                                             // 0x0A63(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              JetpackFuel;                                               // 0x0A64(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_O8U0[0x8];                                     // 0x0A68(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  PawnTransform_Death_;                                      // 0x0A70(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass FPS_Character2.FPS_Character2_C");
		return ptr;
	}



	void OnRep_CurrentWeapon();
	void HideShadows();
	void JetpackEffect(bool JetpackOn_);
	void CanBeReloaded_(TEnumAsByte<WeaponList_EWeaponList> WhichWeapon_, bool* CanBeReloaded_);
	void FPP_Shoot_Grenade();
	void TPP_Shoot_Grenade();
	void OnRep_IsGrenadeLoaded_();
	void OnRep_IsRocketLoaded_();
	void OnRep_DefaultHunter();
	void Update_WeaponAmmos();
	void OnRep_BasicInfo();
	void AnimateHeal(int Damage);
	void AnimateDamage(int Damage);
	void OnRep_DefaultRotation();
	void UpperWidgetRef(class UUpperwidget2_C** AsUpper_Widget2);
	void UpdateAdjustHunterVisiblity(bool MyWidgetVisibility, bool WidgetVisibility, TEnumAsByte<EOutlineEffects_EOutlineEffects> MyOutlineType, TEnumAsByte<EOutlineEffects_EOutlineEffects> OutlineType);
	void OutlineEffects(TEnumAsByte<EOutlineEffects_EOutlineEffects> OutlineType);
	void OnRep_Sync_IsDead();
	void MatchDefaultHunter(int DefaultHunter);
	void GI(class UGI2_C** AsGI2);
	void BulletDecalDisplay(const struct FVector& TraceStart, const struct FVector& TraceEnd);
	void SniperModeToDefault();
	void OnSniperZoomed();
	void WeaponSwap_CrosshairChange();
	void MakeMyUpperWidgetInvisible();
	void GM(class AFPS_GM_C** AsFPS_GM);
	void ReloadAmmo_Server();
	void UpdateAmmoStatus_SearchArray_();
	void AmmoCheck_Server(bool* CanShoot_, bool* CanReload_);
	void UpdateAmmoStatus(TEnumAsByte<WeaponList_EWeaponList> CurrentWeapon, int CurrentAmmo, int MaxAmmo, bool AmmoStatusVisibility, bool HasReloadLimit_, int ReloadAmount, bool ApplyBurningTime_);
	void Initialization();
	void UpperWidgetVisibilitySetting(bool Visible_);
	void PC(class AFPS_PC_C** AsFPS_PC);
	void PS(class AFPS_PS_C** PlayerState);
	void TPP_Shadow_Reload();
	void TPP_Shadow_Shoot();
	void OnKnifeShoot();
	void OnGunShoot();
	void TPP_Shotgun(class ATPP_Shotgun_C** AsTPP_Shotgun, class USkeletalMeshComponent** SkeletalMesh, class UStaticMeshComponent** StaticMesh);
	void TPP_Weapon_Visibility(TEnumAsByte<WeaponList_EWeaponList> WhichWeapon_);
	void TPP_Weapon_Shadow(TEnumAsByte<WeaponList_EWeaponList> WhichWeapon_);
	void TPP_Reload();
	void TPP_Shoot();
	void FPP_Reload();
	void FPP_Shoot();
	void Client_WeaponSwap(TEnumAsByte<WeaponList_EWeaponList> Which_Weapon_);
	void GetWeaponRowName(TEnumAsByte<WeaponList_EWeaponList> Weapon, struct FName* RowName);
	void CameraShake_FPS__FinishedFunc();
	void CameraShake_FPS__UpdateFunc();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void JetpackTimeline__FinishedFunc();
	void JetpackTimeline__UpdateFunc();
	void JetpackTimeline_Reverse__FinishedFunc();
	void JetpackTimeline_Reverse__UpdateFunc();
	void InpActEvt_Jump_K2Node_InputActionEvent_15(const struct FKey& Key);
	void InpActEvt_Flash_K2Node_InputActionEvent_14(const struct FKey& Key);
	void InpActEvt_Shoot_K2Node_InputActionEvent_13(const struct FKey& Key);
	void InpActEvt_Shoot_K2Node_InputActionEvent_12(const struct FKey& Key);
	void InpActEvt_Reload_K2Node_InputActionEvent_11(const struct FKey& Key);
	void InpActEvt_Crouch_K2Node_InputActionEvent_10(const struct FKey& Key);
	void InpActEvt_Crouch_K2Node_InputActionEvent_9(const struct FKey& Key);
	void InpActEvt_ZoomIn_K2Node_InputActionEvent_8(const struct FKey& Key);
	void InpActEvt_Weapon1_K2Node_InputActionEvent_7(const struct FKey& Key);
	void InpActEvt_Weapon2_K2Node_InputActionEvent_6(const struct FKey& Key);
	void InpActEvt_Weapon3_K2Node_InputActionEvent_5(const struct FKey& Key);
	void InpActEvt_Weapon4_K2Node_InputActionEvent_4(const struct FKey& Key);
	void InpActEvt_Weapon5_K2Node_InputActionEvent_3(const struct FKey& Key);
	void InpActEvt_Weapon6_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_Jetpack_K2Node_InputActionEvent_1(const struct FKey& Key);
	void InpAxisEvt_LookUp_K2Node_InputAxisEvent_41(float AxisValue);
	void InpAxisEvt_Turn_K2Node_InputAxisEvent_48(float AxisValue);
	void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_80(float AxisValue);
	void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_91(float AxisValue);
	void InpAxisEvt_TurnRate_K2Node_InputAxisEvent_39(float AxisValue);
	void InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_54(float AxisValue);
	void ReceiveBeginPlay();
	void Multi_Fire();
	void Server_Fire();
	void Server_Reload();
	void Multi_Reload();
	void Server_ControllerPitch(float PitchValue);
	void Server_Weapon_Swap(TEnumAsByte<WeaponList_EWeaponList> WhichWeapon_, float ShootDelay, float ReloadDelay);
	void Server_Croaching(bool Croaching_);
	void ServerDelayStart();
	void ShootDelayStart();
	void ReloadDelayStart();
	void RekiadDelayEnd();
	void PacketCheck_WeaponSwap(TEnumAsByte<WeaponList_EWeaponList> Weapon);
	void PacketCheck_WeaponSwap_End(TEnumAsByte<WeaponList_EWeaponList> Weapon);
	void PacketCheck_Shoot();
	void PacketCheck_Reload();
	void PacketCheck_Reload_End();
	void Impact_Rep(TArray<struct FHitResult> Hit, const struct FHitResult& FloorLocation, TEnumAsByte<WeaponList_EWeaponList> Weapon, class AFPS_Character2_C* Character, TArray<struct FHitResult> PenetratedHit);
	void Impact_Multi(TArray<struct FHitResult> Hit, const struct FHitResult& FloorLocation, TEnumAsByte<WeaponList_EWeaponList> Weapon, class AFPS_Character2_C* Character, TArray<struct FHitResult> PenetratedHit);
	void AddDamageToSelf(int Damage);
	void AmmoCheck();
	void OnShoot();
	void ReloadAmmo();
	void OnWaitingMode_(bool IsWaiting_);
	void OnOffFlash_Server(bool On_);
	void OnOffFlash_Multi(bool On_);
	void OnLanded(const struct FHitResult& Hit);
	void Jump_Multi();
	void Jump_Server();
	void AddHealthToSelf(int HealthToAdd);
	void UpdateMainKillFeed(int KillCount);
	void ReceiveDestroyed();
	void ClientLogicSwapWeapon(const struct FTransform& FppArmTransform);
	void InpAxisEvt_MoveBackward_K2Node_InputAxisEvent_1(float AxisValue);
	void InpAxisEvt_MoveLeft_K2Node_InputAxisEvent_2(float AxisValue);
	void IncreaseMovementSpeed();
	void Auto_Crouch();
	void Recoil_and_Shake(float ScaleShake, float ScaleRecoil);
	void DeliverImpactToVolleyball(class AVolleyBall_Neutual_C* Volleyball, TEnumAsByte<WeaponList_EWeaponList> WhichWeapon_, const struct FVector& ImpactLocation);
	void Multi_AnimateHealth(int Subtract_Amount, bool _Subtract);
	void AnimateMyHealth(int from, int To, bool _Buffer);
	void SyncBasicInfo();
	void SyncDefaultHunter();
	void OnRocketLauncherReloaded();
	void OnRocketLauncherReloaded_Server();
	void LaunchRocketProjectile(const struct FVector& Location, const struct FRotator& Rotation);
	void GrenadeFire_Server(const struct FVector& Location, const struct FRotator& Rotation);
	void OnGrenadeReloaded_Server(bool Reloaded_);
	void GrenadeFireMontage();
	void GrenadeFireMontage_Server();
	void GrenadeFireMontage_Multi();
	void OnGrenadeThrow();
	void Jetpack_Server();
	void Jetpack_Multi(bool JetpackOn_, float SyncValue);
	void InpAxisEvt_FlyUp_K2Node_InputAxisEvent_3(float AxisValue);
	void InpAxisEvt_FlyDown_K2Node_InputAxisEvent_4(float AxisValue);
	void InitJetpackSound();
	void ToggleJetpackSound(bool JetpackSoundOn_);
	void JetpackSoundLoop();
	void fJetpackDelay();
	void ConsumeJetpack(bool Consume_);
	void StopAllJetpackTimeline();
	void ExecuteUbergraph_FPS_Character2(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
