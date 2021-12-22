// Name: pns, Version: 1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.OnRep_CurrentWeapon
//		Flags  -> (HasDefaults, BlueprintCallable, BlueprintEvent)
void AFPS_Character2_C::OnRep_CurrentWeapon()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.OnRep_CurrentWeapon");

	AFPS_Character2_C_OnRep_CurrentWeapon_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.HideShadows
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void AFPS_Character2_C::HideShadows()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.HideShadows");

	AFPS_Character2_C_HideShadows_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.JetpackEffect
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               JetpackOn_                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AFPS_Character2_C::JetpackEffect(bool JetpackOn_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.JetpackEffect");

	AFPS_Character2_C_JetpackEffect_Params params {};
	params.JetpackOn_ = JetpackOn_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.CanBeReloaded?
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		TEnumAsByte<WeaponList_EWeaponList>                WhichWeapon_                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               CanBeReloaded_                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AFPS_Character2_C::CanBeReloaded_(TEnumAsByte<WeaponList_EWeaponList> WhichWeapon_, bool* CanBeReloaded_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.CanBeReloaded?");

	AFPS_Character2_C_CanBeReloaded__Params params {};
	params.WhichWeapon_ = WhichWeapon_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CanBeReloaded_ != nullptr)
		*CanBeReloaded_ = params.CanBeReloaded_;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.FPP_Shoot_Grenade
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void AFPS_Character2_C::FPP_Shoot_Grenade()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.FPP_Shoot_Grenade");

	AFPS_Character2_C_FPP_Shoot_Grenade_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.TPP_Shoot_Grenade
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AFPS_Character2_C::TPP_Shoot_Grenade()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.TPP_Shoot_Grenade");

	AFPS_Character2_C_TPP_Shoot_Grenade_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.OnRep_IsGrenadeLoaded?
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AFPS_Character2_C::OnRep_IsGrenadeLoaded_()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.OnRep_IsGrenadeLoaded?");

	AFPS_Character2_C_OnRep_IsGrenadeLoaded__Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.OnRep_IsRocketLoaded?
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AFPS_Character2_C::OnRep_IsRocketLoaded_()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.OnRep_IsRocketLoaded?");

	AFPS_Character2_C_OnRep_IsRocketLoaded__Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.OnRep_DefaultHunter
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AFPS_Character2_C::OnRep_DefaultHunter()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.OnRep_DefaultHunter");

	AFPS_Character2_C_OnRep_DefaultHunter_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.Update_WeaponAmmos
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void AFPS_Character2_C::Update_WeaponAmmos()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.Update_WeaponAmmos");

	AFPS_Character2_C_Update_WeaponAmmos_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.OnRep_BasicInfo
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AFPS_Character2_C::OnRep_BasicInfo()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.OnRep_BasicInfo");

	AFPS_Character2_C_OnRep_BasicInfo_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.AnimateHeal
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_Character2_C::AnimateHeal(int Damage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.AnimateHeal");

	AFPS_Character2_C_AnimateHeal_Params params {};
	params.Damage = Damage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.AnimateDamage
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_Character2_C::AnimateDamage(int Damage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.AnimateDamage");

	AFPS_Character2_C_AnimateDamage_Params params {};
	params.Damage = Damage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.OnRep_DefaultRotation
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AFPS_Character2_C::OnRep_DefaultRotation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.OnRep_DefaultRotation");

	AFPS_Character2_C_OnRep_DefaultRotation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.UpperWidgetRef
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UUpperwidget2_C*                             AsUpper_Widget2                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_Character2_C::UpperWidgetRef(class UUpperwidget2_C** AsUpper_Widget2)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.UpperWidgetRef");

	AFPS_Character2_C_UpperWidgetRef_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsUpper_Widget2 != nullptr)
		*AsUpper_Widget2 = params.AsUpper_Widget2;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.UpdateAdjustHunterVisiblity
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               MyWidgetVisibility                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               WidgetVisibility                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		TEnumAsByte<EOutlineEffects_EOutlineEffects>       MyOutlineType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<EOutlineEffects_EOutlineEffects>       OutlineType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_Character2_C::UpdateAdjustHunterVisiblity(bool MyWidgetVisibility, bool WidgetVisibility, TEnumAsByte<EOutlineEffects_EOutlineEffects> MyOutlineType, TEnumAsByte<EOutlineEffects_EOutlineEffects> OutlineType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.UpdateAdjustHunterVisiblity");

	AFPS_Character2_C_UpdateAdjustHunterVisiblity_Params params {};
	params.MyWidgetVisibility = MyWidgetVisibility;
	params.WidgetVisibility = WidgetVisibility;
	params.MyOutlineType = MyOutlineType;
	params.OutlineType = OutlineType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.OutlineEffects
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<EOutlineEffects_EOutlineEffects>       OutlineType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_Character2_C::OutlineEffects(TEnumAsByte<EOutlineEffects_EOutlineEffects> OutlineType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.OutlineEffects");

	AFPS_Character2_C_OutlineEffects_Params params {};
	params.OutlineType = OutlineType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.OnRep_Sync_IsDead
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AFPS_Character2_C::OnRep_Sync_IsDead()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.OnRep_Sync_IsDead");

	AFPS_Character2_C_OnRep_Sync_IsDead_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.MatchDefaultHunter
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                DefaultHunter                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_Character2_C::MatchDefaultHunter(int DefaultHunter)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.MatchDefaultHunter");

	AFPS_Character2_C_MatchDefaultHunter_Params params {};
	params.DefaultHunter = DefaultHunter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.GI
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UGI2_C*                                      AsGI2                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_Character2_C::GI(class UGI2_C** AsGI2)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.GI");

	AFPS_Character2_C_GI_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsGI2 != nullptr)
		*AsGI2 = params.AsGI2;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.BulletDecalDisplay
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector                                     TraceStart                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     TraceEnd                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_Character2_C::BulletDecalDisplay(const struct FVector& TraceStart, const struct FVector& TraceEnd)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.BulletDecalDisplay");

	AFPS_Character2_C_BulletDecalDisplay_Params params {};
	params.TraceStart = TraceStart;
	params.TraceEnd = TraceEnd;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.SniperModeToDefault
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void AFPS_Character2_C::SniperModeToDefault()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.SniperModeToDefault");

	AFPS_Character2_C_SniperModeToDefault_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.OnSniperZoomed
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void AFPS_Character2_C::OnSniperZoomed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.OnSniperZoomed");

	AFPS_Character2_C_OnSniperZoomed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.WeaponSwap_CrosshairChange
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void AFPS_Character2_C::WeaponSwap_CrosshairChange()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.WeaponSwap_CrosshairChange");

	AFPS_Character2_C_WeaponSwap_CrosshairChange_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.MakeMyUpperWidgetInvisible
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void AFPS_Character2_C::MakeMyUpperWidgetInvisible()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.MakeMyUpperWidgetInvisible");

	AFPS_Character2_C_MakeMyUpperWidgetInvisible_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.GM
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class AFPS_GM_C*                                   AsFPS_GM                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_Character2_C::GM(class AFPS_GM_C** AsFPS_GM)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.GM");

	AFPS_Character2_C_GM_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsFPS_GM != nullptr)
		*AsFPS_GM = params.AsFPS_GM;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.ReloadAmmo_Server
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void AFPS_Character2_C::ReloadAmmo_Server()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.ReloadAmmo_Server");

	AFPS_Character2_C_ReloadAmmo_Server_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.UpdateAmmoStatus(SearchArray)
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void AFPS_Character2_C::UpdateAmmoStatus_SearchArray_()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.UpdateAmmoStatus(SearchArray)");

	AFPS_Character2_C_UpdateAmmoStatus_SearchArray__Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.AmmoCheck_Server
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               CanShoot_                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               CanReload_                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AFPS_Character2_C::AmmoCheck_Server(bool* CanShoot_, bool* CanReload_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.AmmoCheck_Server");

	AFPS_Character2_C_AmmoCheck_Server_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CanShoot_ != nullptr)
		*CanShoot_ = params.CanShoot_;
	if (CanReload_ != nullptr)
		*CanReload_ = params.CanReload_;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.UpdateAmmoStatus
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<WeaponList_EWeaponList>                CurrentWeapon                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                CurrentAmmo                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                MaxAmmo                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               AmmoStatusVisibility                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               HasReloadLimit_                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		int                                                ReloadAmount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ApplyBurningTime_                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AFPS_Character2_C::UpdateAmmoStatus(TEnumAsByte<WeaponList_EWeaponList> CurrentWeapon, int CurrentAmmo, int MaxAmmo, bool AmmoStatusVisibility, bool HasReloadLimit_, int ReloadAmount, bool ApplyBurningTime_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.UpdateAmmoStatus");

	AFPS_Character2_C_UpdateAmmoStatus_Params params {};
	params.CurrentWeapon = CurrentWeapon;
	params.CurrentAmmo = CurrentAmmo;
	params.MaxAmmo = MaxAmmo;
	params.AmmoStatusVisibility = AmmoStatusVisibility;
	params.HasReloadLimit_ = HasReloadLimit_;
	params.ReloadAmount = ReloadAmount;
	params.ApplyBurningTime_ = ApplyBurningTime_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.Initialization
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void AFPS_Character2_C::Initialization()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.Initialization");

	AFPS_Character2_C_Initialization_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.UpperWidgetVisibilitySetting
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Visible_                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AFPS_Character2_C::UpperWidgetVisibilitySetting(bool Visible_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.UpperWidgetVisibilitySetting");

	AFPS_Character2_C_UpperWidgetVisibilitySetting_Params params {};
	params.Visible_ = Visible_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.PC
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class AFPS_PC_C*                                   AsFPS_PC                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_Character2_C::PC(class AFPS_PC_C** AsFPS_PC)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.PC");

	AFPS_Character2_C_PC_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsFPS_PC != nullptr)
		*AsFPS_PC = params.AsFPS_PC;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.PS
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class AFPS_PS_C*                                   PlayerState                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_Character2_C::PS(class AFPS_PS_C** PlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.PS");

	AFPS_Character2_C_PS_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayerState != nullptr)
		*PlayerState = params.PlayerState;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.TPP_Shadow_Reload
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void AFPS_Character2_C::TPP_Shadow_Reload()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.TPP_Shadow_Reload");

	AFPS_Character2_C_TPP_Shadow_Reload_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.TPP_Shadow_Shoot
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void AFPS_Character2_C::TPP_Shadow_Shoot()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.TPP_Shadow_Shoot");

	AFPS_Character2_C_TPP_Shadow_Shoot_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.OnKnifeShoot
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AFPS_Character2_C::OnKnifeShoot()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.OnKnifeShoot");

	AFPS_Character2_C_OnKnifeShoot_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.OnGunShoot
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AFPS_Character2_C::OnGunShoot()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.OnGunShoot");

	AFPS_Character2_C_OnGunShoot_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.TPP_Shotgun
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class ATPP_Shotgun_C*                              AsTPP_Shotgun                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class USkeletalMeshComponent*                      SkeletalMesh                                               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UStaticMeshComponent*                        StaticMesh                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_Character2_C::TPP_Shotgun(class ATPP_Shotgun_C** AsTPP_Shotgun, class USkeletalMeshComponent** SkeletalMesh, class UStaticMeshComponent** StaticMesh)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.TPP_Shotgun");

	AFPS_Character2_C_TPP_Shotgun_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsTPP_Shotgun != nullptr)
		*AsTPP_Shotgun = params.AsTPP_Shotgun;
	if (SkeletalMesh != nullptr)
		*SkeletalMesh = params.SkeletalMesh;
	if (StaticMesh != nullptr)
		*StaticMesh = params.StaticMesh;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.TPP_Weapon_Visibility
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<WeaponList_EWeaponList>                WhichWeapon_                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_Character2_C::TPP_Weapon_Visibility(TEnumAsByte<WeaponList_EWeaponList> WhichWeapon_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.TPP_Weapon_Visibility");

	AFPS_Character2_C_TPP_Weapon_Visibility_Params params {};
	params.WhichWeapon_ = WhichWeapon_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.TPP_Weapon_Shadow
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<WeaponList_EWeaponList>                WhichWeapon_                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_Character2_C::TPP_Weapon_Shadow(TEnumAsByte<WeaponList_EWeaponList> WhichWeapon_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.TPP_Weapon_Shadow");

	AFPS_Character2_C_TPP_Weapon_Shadow_Params params {};
	params.WhichWeapon_ = WhichWeapon_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.TPP_Reload
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void AFPS_Character2_C::TPP_Reload()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.TPP_Reload");

	AFPS_Character2_C_TPP_Reload_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.TPP_Shoot
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AFPS_Character2_C::TPP_Shoot()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.TPP_Shoot");

	AFPS_Character2_C_TPP_Shoot_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.FPP_Reload
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void AFPS_Character2_C::FPP_Reload()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.FPP_Reload");

	AFPS_Character2_C_FPP_Reload_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.FPP_Shoot
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void AFPS_Character2_C::FPP_Shoot()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.FPP_Shoot");

	AFPS_Character2_C_FPP_Shoot_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.Client_WeaponSwap
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<WeaponList_EWeaponList>                Which_Weapon_                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_Character2_C::Client_WeaponSwap(TEnumAsByte<WeaponList_EWeaponList> Which_Weapon_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.Client_WeaponSwap");

	AFPS_Character2_C_Client_WeaponSwap_Params params {};
	params.Which_Weapon_ = Which_Weapon_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.GetWeaponRowName
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		TEnumAsByte<WeaponList_EWeaponList>                Weapon                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FName                                       RowName                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_Character2_C::GetWeaponRowName(TEnumAsByte<WeaponList_EWeaponList> Weapon, struct FName* RowName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.GetWeaponRowName");

	AFPS_Character2_C_GetWeaponRowName_Params params {};
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RowName != nullptr)
		*RowName = params.RowName;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.CameraShake_FPS__FinishedFunc
//		Flags  -> (BlueprintEvent)
void AFPS_Character2_C::CameraShake_FPS__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.CameraShake_FPS__FinishedFunc");

	AFPS_Character2_C_CameraShake_FPS__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.CameraShake_FPS__UpdateFunc
//		Flags  -> (BlueprintEvent)
void AFPS_Character2_C::CameraShake_FPS__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.CameraShake_FPS__UpdateFunc");

	AFPS_Character2_C_CameraShake_FPS__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.Timeline_0__FinishedFunc
//		Flags  -> (BlueprintEvent)
void AFPS_Character2_C::Timeline_0__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.Timeline_0__FinishedFunc");

	AFPS_Character2_C_Timeline_0__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.Timeline_0__UpdateFunc
//		Flags  -> (BlueprintEvent)
void AFPS_Character2_C::Timeline_0__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.Timeline_0__UpdateFunc");

	AFPS_Character2_C_Timeline_0__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.JetpackTimeline__FinishedFunc
//		Flags  -> (BlueprintEvent)
void AFPS_Character2_C::JetpackTimeline__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.JetpackTimeline__FinishedFunc");

	AFPS_Character2_C_JetpackTimeline__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.JetpackTimeline__UpdateFunc
//		Flags  -> (BlueprintEvent)
void AFPS_Character2_C::JetpackTimeline__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.JetpackTimeline__UpdateFunc");

	AFPS_Character2_C_JetpackTimeline__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.JetpackTimeline_Reverse__FinishedFunc
//		Flags  -> (BlueprintEvent)
void AFPS_Character2_C::JetpackTimeline_Reverse__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.JetpackTimeline_Reverse__FinishedFunc");

	AFPS_Character2_C_JetpackTimeline_Reverse__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.JetpackTimeline_Reverse__UpdateFunc
//		Flags  -> (BlueprintEvent)
void AFPS_Character2_C::JetpackTimeline_Reverse__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.JetpackTimeline_Reverse__UpdateFunc");

	AFPS_Character2_C_JetpackTimeline_Reverse__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.InpActEvt_Jump_K2Node_InputActionEvent_15
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AFPS_Character2_C::InpActEvt_Jump_K2Node_InputActionEvent_15(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.InpActEvt_Jump_K2Node_InputActionEvent_15");

	AFPS_Character2_C_InpActEvt_Jump_K2Node_InputActionEvent_15_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.InpActEvt_Flash_K2Node_InputActionEvent_14
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AFPS_Character2_C::InpActEvt_Flash_K2Node_InputActionEvent_14(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.InpActEvt_Flash_K2Node_InputActionEvent_14");

	AFPS_Character2_C_InpActEvt_Flash_K2Node_InputActionEvent_14_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.InpActEvt_Shoot_K2Node_InputActionEvent_13
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AFPS_Character2_C::InpActEvt_Shoot_K2Node_InputActionEvent_13(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.InpActEvt_Shoot_K2Node_InputActionEvent_13");

	AFPS_Character2_C_InpActEvt_Shoot_K2Node_InputActionEvent_13_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.InpActEvt_Shoot_K2Node_InputActionEvent_12
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AFPS_Character2_C::InpActEvt_Shoot_K2Node_InputActionEvent_12(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.InpActEvt_Shoot_K2Node_InputActionEvent_12");

	AFPS_Character2_C_InpActEvt_Shoot_K2Node_InputActionEvent_12_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.InpActEvt_Reload_K2Node_InputActionEvent_11
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AFPS_Character2_C::InpActEvt_Reload_K2Node_InputActionEvent_11(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.InpActEvt_Reload_K2Node_InputActionEvent_11");

	AFPS_Character2_C_InpActEvt_Reload_K2Node_InputActionEvent_11_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.InpActEvt_Crouch_K2Node_InputActionEvent_10
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AFPS_Character2_C::InpActEvt_Crouch_K2Node_InputActionEvent_10(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.InpActEvt_Crouch_K2Node_InputActionEvent_10");

	AFPS_Character2_C_InpActEvt_Crouch_K2Node_InputActionEvent_10_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.InpActEvt_Crouch_K2Node_InputActionEvent_9
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AFPS_Character2_C::InpActEvt_Crouch_K2Node_InputActionEvent_9(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.InpActEvt_Crouch_K2Node_InputActionEvent_9");

	AFPS_Character2_C_InpActEvt_Crouch_K2Node_InputActionEvent_9_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.InpActEvt_ZoomIn_K2Node_InputActionEvent_8
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AFPS_Character2_C::InpActEvt_ZoomIn_K2Node_InputActionEvent_8(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.InpActEvt_ZoomIn_K2Node_InputActionEvent_8");

	AFPS_Character2_C_InpActEvt_ZoomIn_K2Node_InputActionEvent_8_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.InpActEvt_Weapon1_K2Node_InputActionEvent_7
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AFPS_Character2_C::InpActEvt_Weapon1_K2Node_InputActionEvent_7(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.InpActEvt_Weapon1_K2Node_InputActionEvent_7");

	AFPS_Character2_C_InpActEvt_Weapon1_K2Node_InputActionEvent_7_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.InpActEvt_Weapon2_K2Node_InputActionEvent_6
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AFPS_Character2_C::InpActEvt_Weapon2_K2Node_InputActionEvent_6(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.InpActEvt_Weapon2_K2Node_InputActionEvent_6");

	AFPS_Character2_C_InpActEvt_Weapon2_K2Node_InputActionEvent_6_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.InpActEvt_Weapon3_K2Node_InputActionEvent_5
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AFPS_Character2_C::InpActEvt_Weapon3_K2Node_InputActionEvent_5(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.InpActEvt_Weapon3_K2Node_InputActionEvent_5");

	AFPS_Character2_C_InpActEvt_Weapon3_K2Node_InputActionEvent_5_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.InpActEvt_Weapon4_K2Node_InputActionEvent_4
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AFPS_Character2_C::InpActEvt_Weapon4_K2Node_InputActionEvent_4(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.InpActEvt_Weapon4_K2Node_InputActionEvent_4");

	AFPS_Character2_C_InpActEvt_Weapon4_K2Node_InputActionEvent_4_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.InpActEvt_Weapon5_K2Node_InputActionEvent_3
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AFPS_Character2_C::InpActEvt_Weapon5_K2Node_InputActionEvent_3(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.InpActEvt_Weapon5_K2Node_InputActionEvent_3");

	AFPS_Character2_C_InpActEvt_Weapon5_K2Node_InputActionEvent_3_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.InpActEvt_Weapon6_K2Node_InputActionEvent_2
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AFPS_Character2_C::InpActEvt_Weapon6_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.InpActEvt_Weapon6_K2Node_InputActionEvent_2");

	AFPS_Character2_C_InpActEvt_Weapon6_K2Node_InputActionEvent_2_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.InpActEvt_Jetpack_K2Node_InputActionEvent_1
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AFPS_Character2_C::InpActEvt_Jetpack_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.InpActEvt_Jetpack_K2Node_InputActionEvent_1");

	AFPS_Character2_C_InpActEvt_Jetpack_K2Node_InputActionEvent_1_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_41
//		Flags  -> (BlueprintEvent)
// Parameters:
//		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_Character2_C::InpAxisEvt_LookUp_K2Node_InputAxisEvent_41(float AxisValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_41");

	AFPS_Character2_C_InpAxisEvt_LookUp_K2Node_InputAxisEvent_41_Params params {};
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_48
//		Flags  -> (BlueprintEvent)
// Parameters:
//		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_Character2_C::InpAxisEvt_Turn_K2Node_InputAxisEvent_48(float AxisValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_48");

	AFPS_Character2_C_InpAxisEvt_Turn_K2Node_InputAxisEvent_48_Params params {};
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_80
//		Flags  -> (BlueprintEvent)
// Parameters:
//		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_Character2_C::InpAxisEvt_MoveForward_K2Node_InputAxisEvent_80(float AxisValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_80");

	AFPS_Character2_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_80_Params params {};
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_91
//		Flags  -> (BlueprintEvent)
// Parameters:
//		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_Character2_C::InpAxisEvt_MoveRight_K2Node_InputAxisEvent_91(float AxisValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_91");

	AFPS_Character2_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_91_Params params {};
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.InpAxisEvt_TurnRate_K2Node_InputAxisEvent_39
//		Flags  -> (BlueprintEvent)
// Parameters:
//		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_Character2_C::InpAxisEvt_TurnRate_K2Node_InputAxisEvent_39(float AxisValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.InpAxisEvt_TurnRate_K2Node_InputAxisEvent_39");

	AFPS_Character2_C_InpAxisEvt_TurnRate_K2Node_InputAxisEvent_39_Params params {};
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_54
//		Flags  -> (BlueprintEvent)
// Parameters:
//		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_Character2_C::InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_54(float AxisValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_54");

	AFPS_Character2_C_InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_54_Params params {};
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void AFPS_Character2_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.ReceiveBeginPlay");

	AFPS_Character2_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.Multi_Fire
//		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
void AFPS_Character2_C::Multi_Fire()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.Multi_Fire");

	AFPS_Character2_C_Multi_Fire_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.Server_Fire
//		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
void AFPS_Character2_C::Server_Fire()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.Server_Fire");

	AFPS_Character2_C_Server_Fire_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.Server_Reload
//		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
void AFPS_Character2_C::Server_Reload()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.Server_Reload");

	AFPS_Character2_C_Server_Reload_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.Multi_Reload
//		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
void AFPS_Character2_C::Multi_Reload()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.Multi_Reload");

	AFPS_Character2_C_Multi_Reload_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.Server_ControllerPitch
//		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              PitchValue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_Character2_C::Server_ControllerPitch(float PitchValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.Server_ControllerPitch");

	AFPS_Character2_C_Server_ControllerPitch_Params params {};
	params.PitchValue = PitchValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.Server Weapon_Swap
//		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<WeaponList_EWeaponList>                WhichWeapon_                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              ShootDelay                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              ReloadDelay                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_Character2_C::Server_Weapon_Swap(TEnumAsByte<WeaponList_EWeaponList> WhichWeapon_, float ShootDelay, float ReloadDelay)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.Server Weapon_Swap");

	AFPS_Character2_C_Server_Weapon_Swap_Params params {};
	params.WhichWeapon_ = WhichWeapon_;
	params.ShootDelay = ShootDelay;
	params.ReloadDelay = ReloadDelay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.Server_Croaching
//		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Croaching_                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AFPS_Character2_C::Server_Croaching(bool Croaching_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.Server_Croaching");

	AFPS_Character2_C_Server_Croaching_Params params {};
	params.Croaching_ = Croaching_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.ServerDelayStart
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AFPS_Character2_C::ServerDelayStart()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.ServerDelayStart");

	AFPS_Character2_C_ServerDelayStart_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.ShootDelayStart
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AFPS_Character2_C::ShootDelayStart()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.ShootDelayStart");

	AFPS_Character2_C_ShootDelayStart_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.ReloadDelayStart
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AFPS_Character2_C::ReloadDelayStart()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.ReloadDelayStart");

	AFPS_Character2_C_ReloadDelayStart_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.RekiadDelayEnd
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AFPS_Character2_C::RekiadDelayEnd()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.RekiadDelayEnd");

	AFPS_Character2_C_RekiadDelayEnd_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.PacketCheck_WeaponSwap
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<WeaponList_EWeaponList>                Weapon                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_Character2_C::PacketCheck_WeaponSwap(TEnumAsByte<WeaponList_EWeaponList> Weapon)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.PacketCheck_WeaponSwap");

	AFPS_Character2_C_PacketCheck_WeaponSwap_Params params {};
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.PacketCheck_WeaponSwap_End
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<WeaponList_EWeaponList>                Weapon                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_Character2_C::PacketCheck_WeaponSwap_End(TEnumAsByte<WeaponList_EWeaponList> Weapon)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.PacketCheck_WeaponSwap_End");

	AFPS_Character2_C_PacketCheck_WeaponSwap_End_Params params {};
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.PacketCheck_Shoot
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AFPS_Character2_C::PacketCheck_Shoot()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.PacketCheck_Shoot");

	AFPS_Character2_C_PacketCheck_Shoot_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.PacketCheck_Reload
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AFPS_Character2_C::PacketCheck_Reload()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.PacketCheck_Reload");

	AFPS_Character2_C_PacketCheck_Reload_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.PacketCheck_Reload_End
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AFPS_Character2_C::PacketCheck_Reload_End()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.PacketCheck_Reload_End");

	AFPS_Character2_C_PacketCheck_Reload_End_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.Impact_Rep
//		Flags  -> (Net, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<struct FHitResult>                          Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
//		struct FHitResult                                  FloorLocation                                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
//		TEnumAsByte<WeaponList_EWeaponList>                Weapon                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AFPS_Character2_C*                           Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<struct FHitResult>                          PenetratedHit                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
void AFPS_Character2_C::Impact_Rep(TArray<struct FHitResult> Hit, const struct FHitResult& FloorLocation, TEnumAsByte<WeaponList_EWeaponList> Weapon, class AFPS_Character2_C* Character, TArray<struct FHitResult> PenetratedHit)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.Impact_Rep");

	AFPS_Character2_C_Impact_Rep_Params params {};
	params.Hit = Hit;
	params.FloorLocation = FloorLocation;
	params.Weapon = Weapon;
	params.Character = Character;
	params.PenetratedHit = PenetratedHit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.Impact_Multi
//		Flags  -> (Net, NetMulticast, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<struct FHitResult>                          Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
//		struct FHitResult                                  FloorLocation                                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
//		TEnumAsByte<WeaponList_EWeaponList>                Weapon                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AFPS_Character2_C*                           Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<struct FHitResult>                          PenetratedHit                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
void AFPS_Character2_C::Impact_Multi(TArray<struct FHitResult> Hit, const struct FHitResult& FloorLocation, TEnumAsByte<WeaponList_EWeaponList> Weapon, class AFPS_Character2_C* Character, TArray<struct FHitResult> PenetratedHit)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.Impact_Multi");

	AFPS_Character2_C_Impact_Multi_Params params {};
	params.Hit = Hit;
	params.FloorLocation = FloorLocation;
	params.Weapon = Weapon;
	params.Character = Character;
	params.PenetratedHit = PenetratedHit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.AddDamageToSelf
//		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_Character2_C::AddDamageToSelf(int Damage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.AddDamageToSelf");

	AFPS_Character2_C_AddDamageToSelf_Params params {};
	params.Damage = Damage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.AmmoCheck
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AFPS_Character2_C::AmmoCheck()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.AmmoCheck");

	AFPS_Character2_C_AmmoCheck_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.OnShoot
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AFPS_Character2_C::OnShoot()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.OnShoot");

	AFPS_Character2_C_OnShoot_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.ReloadAmmo
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AFPS_Character2_C::ReloadAmmo()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.ReloadAmmo");

	AFPS_Character2_C_ReloadAmmo_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.OnWaitingMode?
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsWaiting_                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AFPS_Character2_C::OnWaitingMode_(bool IsWaiting_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.OnWaitingMode?");

	AFPS_Character2_C_OnWaitingMode__Params params {};
	params.IsWaiting_ = IsWaiting_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.OnOffFlash_Server
//		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               On_                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AFPS_Character2_C::OnOffFlash_Server(bool On_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.OnOffFlash_Server");

	AFPS_Character2_C_OnOffFlash_Server_Params params {};
	params.On_ = On_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.OnOffFlash_Multi
//		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               On_                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AFPS_Character2_C::OnOffFlash_Multi(bool On_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.OnOffFlash_Multi");

	AFPS_Character2_C_OnOffFlash_Multi_Params params {};
	params.On_ = On_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.OnLanded
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void AFPS_Character2_C::OnLanded(const struct FHitResult& Hit)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.OnLanded");

	AFPS_Character2_C_OnLanded_Params params {};
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.Jump_Multi
//		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void AFPS_Character2_C::Jump_Multi()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.Jump_Multi");

	AFPS_Character2_C_Jump_Multi_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.Jump_Server
//		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void AFPS_Character2_C::Jump_Server()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.Jump_Server");

	AFPS_Character2_C_Jump_Server_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.AddHealthToSelf
//		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                HealthToAdd                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_Character2_C::AddHealthToSelf(int HealthToAdd)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.AddHealthToSelf");

	AFPS_Character2_C_AddHealthToSelf_Params params {};
	params.HealthToAdd = HealthToAdd;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.UpdateMainKillFeed
//		Flags  -> (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                KillCount                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_Character2_C::UpdateMainKillFeed(int KillCount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.UpdateMainKillFeed");

	AFPS_Character2_C_UpdateMainKillFeed_Params params {};
	params.KillCount = KillCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.ReceiveDestroyed
//		Flags  -> (Event, Public, BlueprintEvent)
void AFPS_Character2_C::ReceiveDestroyed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.ReceiveDestroyed");

	AFPS_Character2_C_ReceiveDestroyed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.ClientLogicSwapWeapon
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTransform                                  FppArmTransform                                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
void AFPS_Character2_C::ClientLogicSwapWeapon(const struct FTransform& FppArmTransform)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.ClientLogicSwapWeapon");

	AFPS_Character2_C_ClientLogicSwapWeapon_Params params {};
	params.FppArmTransform = FppArmTransform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.InpAxisEvt_MoveBackward_K2Node_InputAxisEvent_1
//		Flags  -> (BlueprintEvent)
// Parameters:
//		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_Character2_C::InpAxisEvt_MoveBackward_K2Node_InputAxisEvent_1(float AxisValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.InpAxisEvt_MoveBackward_K2Node_InputAxisEvent_1");

	AFPS_Character2_C_InpAxisEvt_MoveBackward_K2Node_InputAxisEvent_1_Params params {};
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.InpAxisEvt_MoveLeft_K2Node_InputAxisEvent_2
//		Flags  -> (BlueprintEvent)
// Parameters:
//		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_Character2_C::InpAxisEvt_MoveLeft_K2Node_InputAxisEvent_2(float AxisValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.InpAxisEvt_MoveLeft_K2Node_InputAxisEvent_2");

	AFPS_Character2_C_InpAxisEvt_MoveLeft_K2Node_InputAxisEvent_2_Params params {};
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.IncreaseMovementSpeed
//		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
void AFPS_Character2_C::IncreaseMovementSpeed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.IncreaseMovementSpeed");

	AFPS_Character2_C_IncreaseMovementSpeed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.Auto_Crouch
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AFPS_Character2_C::Auto_Crouch()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.Auto_Crouch");

	AFPS_Character2_C_Auto_Crouch_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.Recoil_and_Shake
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              ScaleShake                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              ScaleRecoil                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_Character2_C::Recoil_and_Shake(float ScaleShake, float ScaleRecoil)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.Recoil_and_Shake");

	AFPS_Character2_C_Recoil_and_Shake_Params params {};
	params.ScaleShake = ScaleShake;
	params.ScaleRecoil = ScaleRecoil;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.DeliverImpactToVolleyball
//		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AVolleyBall_Neutual_C*                       Volleyball                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<WeaponList_EWeaponList>                WhichWeapon_                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     ImpactLocation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_Character2_C::DeliverImpactToVolleyball(class AVolleyBall_Neutual_C* Volleyball, TEnumAsByte<WeaponList_EWeaponList> WhichWeapon_, const struct FVector& ImpactLocation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.DeliverImpactToVolleyball");

	AFPS_Character2_C_DeliverImpactToVolleyball_Params params {};
	params.Volleyball = Volleyball;
	params.WhichWeapon_ = WhichWeapon_;
	params.ImpactLocation = ImpactLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.Multi_AnimateHealth
//		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Subtract_Amount                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               _Subtract                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AFPS_Character2_C::Multi_AnimateHealth(int Subtract_Amount, bool _Subtract)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.Multi_AnimateHealth");

	AFPS_Character2_C_Multi_AnimateHealth_Params params {};
	params.Subtract_Amount = Subtract_Amount;
	params._Subtract = _Subtract;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.AnimateMyHealth
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                from                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                To                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               _Buffer                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AFPS_Character2_C::AnimateMyHealth(int from, int To, bool _Buffer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.AnimateMyHealth");

	AFPS_Character2_C_AnimateMyHealth_Params params {};
	params.from = from;
	params.To = To;
	params._Buffer = _Buffer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.SyncBasicInfo
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AFPS_Character2_C::SyncBasicInfo()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.SyncBasicInfo");

	AFPS_Character2_C_SyncBasicInfo_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.SyncDefaultHunter
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AFPS_Character2_C::SyncDefaultHunter()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.SyncDefaultHunter");

	AFPS_Character2_C_SyncDefaultHunter_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.OnRocketLauncherReloaded
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AFPS_Character2_C::OnRocketLauncherReloaded()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.OnRocketLauncherReloaded");

	AFPS_Character2_C_OnRocketLauncherReloaded_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.OnRocketLauncherReloaded_Server
//		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
void AFPS_Character2_C::OnRocketLauncherReloaded_Server()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.OnRocketLauncherReloaded_Server");

	AFPS_Character2_C_OnRocketLauncherReloaded_Server_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.LaunchRocketProjectile
//		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FRotator                                    Rotation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AFPS_Character2_C::LaunchRocketProjectile(const struct FVector& Location, const struct FRotator& Rotation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.LaunchRocketProjectile");

	AFPS_Character2_C_LaunchRocketProjectile_Params params {};
	params.Location = Location;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.GrenadeFire_Server
//		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FRotator                                    Rotation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AFPS_Character2_C::GrenadeFire_Server(const struct FVector& Location, const struct FRotator& Rotation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.GrenadeFire_Server");

	AFPS_Character2_C_GrenadeFire_Server_Params params {};
	params.Location = Location;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.OnGrenadeReloaded_Server
//		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Reloaded_                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AFPS_Character2_C::OnGrenadeReloaded_Server(bool Reloaded_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.OnGrenadeReloaded_Server");

	AFPS_Character2_C_OnGrenadeReloaded_Server_Params params {};
	params.Reloaded_ = Reloaded_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.GrenadeFireMontage
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AFPS_Character2_C::GrenadeFireMontage()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.GrenadeFireMontage");

	AFPS_Character2_C_GrenadeFireMontage_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.GrenadeFireMontage_Server
//		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
void AFPS_Character2_C::GrenadeFireMontage_Server()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.GrenadeFireMontage_Server");

	AFPS_Character2_C_GrenadeFireMontage_Server_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.GrenadeFireMontage_Multi
//		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
void AFPS_Character2_C::GrenadeFireMontage_Multi()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.GrenadeFireMontage_Multi");

	AFPS_Character2_C_GrenadeFireMontage_Multi_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.OnGrenadeThrow
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AFPS_Character2_C::OnGrenadeThrow()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.OnGrenadeThrow");

	AFPS_Character2_C_OnGrenadeThrow_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.Jetpack_Server
//		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
void AFPS_Character2_C::Jetpack_Server()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.Jetpack_Server");

	AFPS_Character2_C_Jetpack_Server_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.Jetpack_Multi
//		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               JetpackOn_                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              SyncValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_Character2_C::Jetpack_Multi(bool JetpackOn_, float SyncValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.Jetpack_Multi");

	AFPS_Character2_C_Jetpack_Multi_Params params {};
	params.JetpackOn_ = JetpackOn_;
	params.SyncValue = SyncValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.InpAxisEvt_FlyUp_K2Node_InputAxisEvent_3
//		Flags  -> (BlueprintEvent)
// Parameters:
//		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_Character2_C::InpAxisEvt_FlyUp_K2Node_InputAxisEvent_3(float AxisValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.InpAxisEvt_FlyUp_K2Node_InputAxisEvent_3");

	AFPS_Character2_C_InpAxisEvt_FlyUp_K2Node_InputAxisEvent_3_Params params {};
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.InpAxisEvt_FlyDown_K2Node_InputAxisEvent_4
//		Flags  -> (BlueprintEvent)
// Parameters:
//		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_Character2_C::InpAxisEvt_FlyDown_K2Node_InputAxisEvent_4(float AxisValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.InpAxisEvt_FlyDown_K2Node_InputAxisEvent_4");

	AFPS_Character2_C_InpAxisEvt_FlyDown_K2Node_InputAxisEvent_4_Params params {};
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.InitJetpackSound
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AFPS_Character2_C::InitJetpackSound()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.InitJetpackSound");

	AFPS_Character2_C_InitJetpackSound_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.ToggleJetpackSound
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               JetpackSoundOn_                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AFPS_Character2_C::ToggleJetpackSound(bool JetpackSoundOn_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.ToggleJetpackSound");

	AFPS_Character2_C_ToggleJetpackSound_Params params {};
	params.JetpackSoundOn_ = JetpackSoundOn_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.JetpackSoundLoop
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AFPS_Character2_C::JetpackSoundLoop()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.JetpackSoundLoop");

	AFPS_Character2_C_JetpackSoundLoop_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.fJetpackDelay
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AFPS_Character2_C::fJetpackDelay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.fJetpackDelay");

	AFPS_Character2_C_fJetpackDelay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.ConsumeJetpack
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Consume_                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AFPS_Character2_C::ConsumeJetpack(bool Consume_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.ConsumeJetpack");

	AFPS_Character2_C_ConsumeJetpack_Params params {};
	params.Consume_ = Consume_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.StopAllJetpackTimeline
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AFPS_Character2_C::StopAllJetpackTimeline()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.StopAllJetpackTimeline");

	AFPS_Character2_C_StopAllJetpackTimeline_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_Character2.FPS_Character2_C.ExecuteUbergraph_FPS_Character2
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_Character2_C::ExecuteUbergraph_FPS_Character2(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_Character2.FPS_Character2_C.ExecuteUbergraph_FPS_Character2");

	AFPS_Character2_C_ExecuteUbergraph_FPS_Character2_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
