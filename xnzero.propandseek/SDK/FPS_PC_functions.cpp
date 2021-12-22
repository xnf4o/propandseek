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
//		Name   -> Function FPS_PC.FPS_PC_C.UpdateKillFeeds
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<struct FString>                             Killed                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
//		TArray<bool>                                       IsKillerHunter_                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
//		TArray<struct FString>                             Destroyed                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
//		TArray<bool>                                       IsDestroyedHunter_                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void AFPS_PC_C::UpdateKillFeeds(TArray<struct FString>* Killed, TArray<bool> IsKillerHunter_, TArray<struct FString>* Destroyed, TArray<bool>* IsDestroyedHunter_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.UpdateKillFeeds");

	AFPS_PC_C_UpdateKillFeeds_Params params {};
	params.IsKillerHunter_ = IsKillerHunter_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Killed != nullptr)
		*Killed = params.Killed;
	if (Destroyed != nullptr)
		*Destroyed = params.Destroyed;
	if (IsDestroyedHunter_ != nullptr)
		*IsDestroyedHunter_ = params.IsDestroyedHunter_;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.DeleteAllActors
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void AFPS_PC_C::DeleteAllActors()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.DeleteAllActors");

	AFPS_PC_C_DeleteAllActors_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.SyncDefaultExpGolds
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FUWorksSteamID                              SteamID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void AFPS_PC_C::SyncDefaultExpGolds(const struct FUWorksSteamID& SteamID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.SyncDefaultExpGolds");

	AFPS_PC_C_SyncDefaultExpGolds_Params params {};
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.OnHoldablePropDetected(Aim)
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Detected_                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AFPS_PC_C::OnHoldablePropDetected_Aim_(bool Detected_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.OnHoldablePropDetected(Aim)");

	AFPS_PC_C_OnHoldablePropDetected_Aim__Params params {};
	params.Detected_ = Detected_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.OnHoldablePropDetected(ComponentProp)
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AHoldableProp_C*                             PhysicsProp                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Detected_                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AFPS_PC_C::OnHoldablePropDetected_ComponentProp_(class AHoldableProp_C* PhysicsProp, bool Detected_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.OnHoldablePropDetected(ComponentProp)");

	AFPS_PC_C_OnHoldablePropDetected_ComponentProp__Params params {};
	params.PhysicsProp = PhysicsProp;
	params.Detected_ = Detected_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.CancelChat
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void AFPS_PC_C::CancelChat()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.CancelChat");

	AFPS_PC_C_CancelChat_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.UpdateWaitTime_Beginplay
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Reached0_                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AFPS_PC_C::UpdateWaitTime_Beginplay(bool* Reached0_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.UpdateWaitTime_Beginplay");

	AFPS_PC_C_UpdateWaitTime_Beginplay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Reached0_ != nullptr)
		*Reached0_ = params.Reached0_;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.UpdateHunterWaitTime
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Reached0_                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AFPS_PC_C::UpdateHunterWaitTime(bool* Reached0_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.UpdateHunterWaitTime");

	AFPS_PC_C_UpdateHunterWaitTime_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Reached0_ != nullptr)
		*Reached0_ = params.Reached0_;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.RunFocusMode
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void AFPS_PC_C::RunFocusMode()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.RunFocusMode");

	AFPS_PC_C_RunFocusMode_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.OnRep_NewRanking
//		Flags  -> (HasDefaults, BlueprintCallable, BlueprintEvent)
void AFPS_PC_C::OnRep_NewRanking()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.OnRep_NewRanking");

	AFPS_PC_C_OnRep_NewRanking_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.DestroyAllActors
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void AFPS_PC_C::DestroyAllActors()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.DestroyAllActors");

	AFPS_PC_C_DestroyAllActors_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.ProcessGameSessionData
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AFPS_PC_C::ProcessGameSessionData()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.ProcessGameSessionData");

	AFPS_PC_C_ProcessGameSessionData_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.UnfreezeWhen2:00
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_PC_C::UnfreezeWhen2_00(int Time)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.UnfreezeWhen2:00");

	AFPS_PC_C_UnfreezeWhen2_00_Params params {};
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.UpdateRankingWidget
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     Ranking1SteamID                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void AFPS_PC_C::UpdateRankingWidget(const struct FString& Ranking1SteamID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.UpdateRankingWidget");

	AFPS_PC_C_UpdateRankingWidget_Params params {};
	params.Ranking1SteamID = Ranking1SteamID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.OnRep_ExpGoldCoin
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AFPS_PC_C::OnRep_ExpGoldCoin()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.OnRep_ExpGoldCoin");

	AFPS_PC_C_OnRep_ExpGoldCoin_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.ToggleBottomInfo
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ShowMine_                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               isHunter_                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AFPS_PC_C::ToggleBottomInfo(bool ShowMine_, bool isHunter_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.ToggleBottomInfo");

	AFPS_PC_C_ToggleBottomInfo_Params params {};
	params.ShowMine_ = ShowMine_;
	params.isHunter_ = isHunter_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.AnimateHealed
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Heal                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_PC_C::AnimateHealed(int Heal)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.AnimateHealed");

	AFPS_PC_C_AnimateHealed_Params params {};
	params.Heal = Heal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.AnimateDamaged
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_PC_C::AnimateDamaged(int Damage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.AnimateDamaged");

	AFPS_PC_C_AnimateDamaged_Params params {};
	params.Damage = Damage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.KickedReasonSave
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     KickedReason                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void AFPS_PC_C::KickedReasonSave(const struct FString& KickedReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.KickedReasonSave");

	AFPS_PC_C_KickedReasonSave_Params params {};
	params.KickedReason = KickedReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.ToggleKick
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Kick_                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AFPS_PC_C::ToggleKick(bool Kick_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.ToggleKick");

	AFPS_PC_C_ToggleKick_Params params {};
	params.Kick_ = Kick_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.KickTimerFunction
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AFPS_PC_C::KickTimerFunction()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.KickTimerFunction");

	AFPS_PC_C_KickTimerFunction_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.OnRep_PropObject
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AFPS_PC_C::OnRep_PropObject()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.OnRep_PropObject");

	AFPS_PC_C_OnRep_PropObject_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.DeleteAll
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void AFPS_PC_C::DeleteAll()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.DeleteAll");

	AFPS_PC_C_DeleteAll_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.UpdateAllActorVisibility
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               HunterVisibility                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               MyHunterVisibility                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		TEnumAsByte<EOutlineEffects_EOutlineEffects>       HunterOutline                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<EOutlineEffects_EOutlineEffects>       MyHunterOutline                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               PropVIsib                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               MyPropVisib                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		TEnumAsByte<EOutlineEffects_EOutlineEffects>       PropOutline                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<EOutlineEffects_EOutlineEffects>       MyPropOutline                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               PropIndicatorParticle                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               ObserverVisib                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AFPS_PC_C::UpdateAllActorVisibility(bool HunterVisibility, bool MyHunterVisibility, TEnumAsByte<EOutlineEffects_EOutlineEffects> HunterOutline, TEnumAsByte<EOutlineEffects_EOutlineEffects> MyHunterOutline, bool PropVIsib, bool MyPropVisib, TEnumAsByte<EOutlineEffects_EOutlineEffects> PropOutline, TEnumAsByte<EOutlineEffects_EOutlineEffects> MyPropOutline, bool PropIndicatorParticle, bool ObserverVisib)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.UpdateAllActorVisibility");

	AFPS_PC_C_UpdateAllActorVisibility_Params params {};
	params.HunterVisibility = HunterVisibility;
	params.MyHunterVisibility = MyHunterVisibility;
	params.HunterOutline = HunterOutline;
	params.MyHunterOutline = MyHunterOutline;
	params.PropVIsib = PropVIsib;
	params.MyPropVisib = MyPropVisib;
	params.PropOutline = PropOutline;
	params.MyPropOutline = MyPropOutline;
	params.PropIndicatorParticle = PropIndicatorParticle;
	params.ObserverVisib = ObserverVisib;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.CrosshairVisibility
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Visible_                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AFPS_PC_C::CrosshairVisibility(bool Visible_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.CrosshairVisibility");

	AFPS_PC_C_CrosshairVisibility_Params params {};
	params.Visible_ = Visible_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.MuteWhenRoundsEnd (OnFireMusic)
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void AFPS_PC_C::MuteWhenRoundsEnd__OnFireMusic_()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.MuteWhenRoundsEnd (OnFireMusic)");

	AFPS_PC_C_MuteWhenRoundsEnd__OnFireMusic__Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.MuteWhenRoundsEnd (Ambience)
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void AFPS_PC_C::MuteWhenRoundsEnd__Ambience_()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.MuteWhenRoundsEnd (Ambience)");

	AFPS_PC_C_MuteWhenRoundsEnd__Ambience__Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.MuteWhenRoundsEnd (StartMusic)
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void AFPS_PC_C::MuteWhenRoundsEnd__StartMusic_()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.MuteWhenRoundsEnd (StartMusic)");

	AFPS_PC_C_MuteWhenRoundsEnd__StartMusic__Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.EndingTimeLeftVoice
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Sec                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_PC_C::EndingTimeLeftVoice(int Sec)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.EndingTimeLeftVoice");

	AFPS_PC_C_EndingTimeLeftVoice_Params params {};
	params.Sec = Sec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.2ndMorphVoice
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Sec                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_PC_C::_2ndMorphVoice(int Sec)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.2ndMorphVoice");

	AFPS_PC_C__2ndMorphVoice_Params params {};
	params.Sec = Sec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.AdjustOptions
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void AFPS_PC_C::AdjustOptions()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.AdjustOptions");

	AFPS_PC_C_AdjustOptions_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.SetHunterVisibility
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AFPS_Character2_C*                           HUNTER                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Visibility                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AFPS_PC_C::SetHunterVisibility(class AFPS_Character2_C* HUNTER, bool Visibility)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.SetHunterVisibility");

	AFPS_PC_C_SetHunterVisibility_Params params {};
	params.HUNTER = HUNTER;
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.SetPropVisibility
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AProp_C*                                     Prop                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Visibility                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AFPS_PC_C::SetPropVisibility(class AProp_C* Prop, bool Visibility)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.SetPropVisibility");

	AFPS_PC_C_SetPropVisibility_Params params {};
	params.Prop = Prop;
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.OnRep_IsHunter?
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AFPS_PC_C::OnRep_IsHunter_()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.OnRep_IsHunter?");

	AFPS_PC_C_OnRep_IsHunter__Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.ChangeChatMode_NoServer
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void AFPS_PC_C::ChangeChatMode_NoServer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.ChangeChatMode_NoServer");

	AFPS_PC_C_ChangeChatMode_NoServer_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.OnChatPressed
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void AFPS_PC_C::OnChatPressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.OnChatPressed");

	AFPS_PC_C_OnChatPressed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.UpdateAlivePropHunterAmount
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Prop                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                HUNTER                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_PC_C::UpdateAlivePropHunterAmount(int* Prop, int* HUNTER)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.UpdateAlivePropHunterAmount");

	AFPS_PC_C_UpdateAlivePropHunterAmount_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Prop != nullptr)
		*Prop = params.Prop;
	if (HUNTER != nullptr)
		*HUNTER = params.HUNTER;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.UpdatePlayerState(Sort)
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<struct FPlayerInfoGame>                     PlayerInfos1                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void AFPS_PC_C::UpdatePlayerState_Sort_(TArray<struct FPlayerInfoGame>* PlayerInfos1)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.UpdatePlayerState(Sort)");

	AFPS_PC_C_UpdatePlayerState_Sort__Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayerInfos1 != nullptr)
		*PlayerInfos1 = params.PlayerInfos1;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.PropSelection_RetrieveData
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPropList                                   PropInfo                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AFPS_PC_C::PropSelection_RetrieveData(const struct FPropList& PropInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.PropSelection_RetrieveData");

	AFPS_PC_C_PropSelection_RetrieveData_Params params {};
	params.PropInfo = PropInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.PropSelection_Start
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void AFPS_PC_C::PropSelection_Start()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.PropSelection_Start");

	AFPS_PC_C_PropSelection_Start_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.SortScore(Ranking)
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<struct FPlayerInfoGame>                     Array                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
//		TArray<struct FPlayerInfoGame>                     RankingSorted                                              (Parm, OutParm, ZeroConstructor)
//		bool                                               _0_length_                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AFPS_PC_C::SortScore_Ranking_(TArray<struct FPlayerInfoGame>* Array, TArray<struct FPlayerInfoGame>* RankingSorted, bool* _0_length_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.SortScore(Ranking)");

	AFPS_PC_C_SortScore_Ranking__Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
	if (RankingSorted != nullptr)
		*RankingSorted = params.RankingSorted;
	if (_0_length_ != nullptr)
		*_0_length_ = params._0_length_;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.GI
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UGI2_C*                                      AsGI2                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_PC_C::GI(class UGI2_C** AsGI2)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.GI");

	AFPS_PC_C_GI_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsGI2 != nullptr)
		*AsGI2 = params.AsGI2;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.SyncMainboard(Alives)
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<struct FSPlayerInfo>                        AliveProps                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
//		TArray<struct FSPlayerInfo>                        AliveHunters                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void AFPS_PC_C::SyncMainboard_Alives_(TArray<struct FSPlayerInfo>* AliveProps, TArray<struct FSPlayerInfo>* AliveHunters)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.SyncMainboard(Alives)");

	AFPS_PC_C_SyncMainboard_Alives__Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AliveProps != nullptr)
		*AliveProps = params.AliveProps;
	if (AliveHunters != nullptr)
		*AliveHunters = params.AliveHunters;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.PS
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class AFPS_PS_C*                                   AsFPS_PS                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_PC_C::PS(class AFPS_PS_C** AsFPS_PS)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.PS");

	AFPS_PC_C_PS_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsFPS_PS != nullptr)
		*AsFPS_PS = params.AsFPS_PS;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.GM
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class AFPS_GM_C*                                   AsFPS_GM                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_PC_C::GM(class AFPS_GM_C** AsFPS_GM)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.GM");

	AFPS_PC_C_GM_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsFPS_GM != nullptr)
		*AsFPS_GM = params.AsFPS_GM;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.RemoveAllScorebars
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void AFPS_PC_C::RemoveAllScorebars()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.RemoveAllScorebars");

	AFPS_PC_C_RemoveAllScorebars_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.SortScore
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<struct FSPlayerInfo>                        Array                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
//		TArray<struct FSPlayerInfo>                        SortedArray                                                (Parm, OutParm, ZeroConstructor)
//		bool                                               _0_length_                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AFPS_PC_C::SortScore(TArray<struct FSPlayerInfo>* Array, TArray<struct FSPlayerInfo>* SortedArray, bool* _0_length_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.SortScore");

	AFPS_PC_C_SortScore_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
	if (SortedArray != nullptr)
		*SortedArray = params.SortedArray;
	if (_0_length_ != nullptr)
		*_0_length_ = params._0_length_;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.UpdateWaitTime
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Reached0_                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AFPS_PC_C::UpdateWaitTime(bool* Reached0_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.UpdateWaitTime");

	AFPS_PC_C_UpdateWaitTime_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Reached0_ != nullptr)
		*Reached0_ = params.Reached0_;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.WidgetCreation
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void AFPS_PC_C::WidgetCreation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.WidgetCreation");

	AFPS_PC_C_WidgetCreation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.XpAnimTimeline__FinishedFunc
//		Flags  -> (BlueprintEvent)
void AFPS_PC_C::XpAnimTimeline__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.XpAnimTimeline__FinishedFunc");

	AFPS_PC_C_XpAnimTimeline__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.XpAnimTimeline__UpdateFunc
//		Flags  -> (BlueprintEvent)
void AFPS_PC_C::XpAnimTimeline__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.XpAnimTimeline__UpdateFunc");

	AFPS_PC_C_XpAnimTimeline__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.GoldAnimTimeline__FinishedFunc
//		Flags  -> (BlueprintEvent)
void AFPS_PC_C::GoldAnimTimeline__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.GoldAnimTimeline__FinishedFunc");

	AFPS_PC_C_GoldAnimTimeline__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.GoldAnimTimeline__UpdateFunc
//		Flags  -> (BlueprintEvent)
void AFPS_PC_C::GoldAnimTimeline__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.GoldAnimTimeline__UpdateFunc");

	AFPS_PC_C_GoldAnimTimeline__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.ScoreAnimTimeline__FinishedFunc
//		Flags  -> (BlueprintEvent)
void AFPS_PC_C::ScoreAnimTimeline__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.ScoreAnimTimeline__FinishedFunc");

	AFPS_PC_C_ScoreAnimTimeline__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.ScoreAnimTimeline__UpdateFunc
//		Flags  -> (BlueprintEvent)
void AFPS_PC_C::ScoreAnimTimeline__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.ScoreAnimTimeline__UpdateFunc");

	AFPS_PC_C_ScoreAnimTimeline__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.TotalScoreAnimTimeline__FinishedFunc
//		Flags  -> (BlueprintEvent)
void AFPS_PC_C::TotalScoreAnimTimeline__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.TotalScoreAnimTimeline__FinishedFunc");

	AFPS_PC_C_TotalScoreAnimTimeline__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.TotalScoreAnimTimeline__UpdateFunc
//		Flags  -> (BlueprintEvent)
void AFPS_PC_C::TotalScoreAnimTimeline__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.TotalScoreAnimTimeline__UpdateFunc");

	AFPS_PC_C_TotalScoreAnimTimeline__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.LerpHealth__FinishedFunc
//		Flags  -> (BlueprintEvent)
void AFPS_PC_C::LerpHealth__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.LerpHealth__FinishedFunc");

	AFPS_PC_C_LerpHealth__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.LerpHealth__UpdateFunc
//		Flags  -> (BlueprintEvent)
void AFPS_PC_C::LerpHealth__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.LerpHealth__UpdateFunc");

	AFPS_PC_C_LerpHealth__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.LerpExp__FinishedFunc
//		Flags  -> (BlueprintEvent)
void AFPS_PC_C::LerpExp__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.LerpExp__FinishedFunc");

	AFPS_PC_C_LerpExp__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.LerpExp__UpdateFunc
//		Flags  -> (BlueprintEvent)
void AFPS_PC_C::LerpExp__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.LerpExp__UpdateFunc");

	AFPS_PC_C_LerpExp__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.LerpGoldCoin__FinishedFunc
//		Flags  -> (BlueprintEvent)
void AFPS_PC_C::LerpGoldCoin__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.LerpGoldCoin__FinishedFunc");

	AFPS_PC_C_LerpGoldCoin__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.LerpGoldCoin__UpdateFunc
//		Flags  -> (BlueprintEvent)
void AFPS_PC_C::LerpGoldCoin__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.LerpGoldCoin__UpdateFunc");

	AFPS_PC_C_LerpGoldCoin__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.InpActEvt_Chat_K2Node_InputActionEvent_6
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AFPS_PC_C::InpActEvt_Chat_K2Node_InputActionEvent_6(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.InpActEvt_Chat_K2Node_InputActionEvent_6");

	AFPS_PC_C_InpActEvt_Chat_K2Node_InputActionEvent_6_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.InpActEvt_F1_K2Node_InputKeyEvent_4
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AFPS_PC_C::InpActEvt_F1_K2Node_InputKeyEvent_4(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.InpActEvt_F1_K2Node_InputKeyEvent_4");

	AFPS_PC_C_InpActEvt_F1_K2Node_InputKeyEvent_4_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.InpActEvt_F1_K2Node_InputKeyEvent_3
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AFPS_PC_C::InpActEvt_F1_K2Node_InputKeyEvent_3(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.InpActEvt_F1_K2Node_InputKeyEvent_3");

	AFPS_PC_C_InpActEvt_F1_K2Node_InputKeyEvent_3_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.InpActEvt_F2_K2Node_InputKeyEvent_2
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AFPS_PC_C::InpActEvt_F2_K2Node_InputKeyEvent_2(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.InpActEvt_F2_K2Node_InputKeyEvent_2");

	AFPS_PC_C_InpActEvt_F2_K2Node_InputKeyEvent_2_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.InpActEvt_F2_K2Node_InputKeyEvent_1
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AFPS_PC_C::InpActEvt_F2_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.InpActEvt_F2_K2Node_InputKeyEvent_1");

	AFPS_PC_C_InpActEvt_F2_K2Node_InputKeyEvent_1_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.InpActEvt_Back_K2Node_InputActionEvent_5
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AFPS_PC_C::InpActEvt_Back_K2Node_InputActionEvent_5(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.InpActEvt_Back_K2Node_InputActionEvent_5");

	AFPS_PC_C_InpActEvt_Back_K2Node_InputActionEvent_5_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.InpActEvt_View_K2Node_InputActionEvent_4
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AFPS_PC_C::InpActEvt_View_K2Node_InputActionEvent_4(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.InpActEvt_View_K2Node_InputActionEvent_4");

	AFPS_PC_C_InpActEvt_View_K2Node_InputActionEvent_4_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.InpActEvt_View_K2Node_InputActionEvent_3
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AFPS_PC_C::InpActEvt_View_K2Node_InputActionEvent_3(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.InpActEvt_View_K2Node_InputActionEvent_3");

	AFPS_PC_C_InpActEvt_View_K2Node_InputActionEvent_3_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.InpActEvt_VoteYes_K2Node_InputActionEvent_2
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AFPS_PC_C::InpActEvt_VoteYes_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.InpActEvt_VoteYes_K2Node_InputActionEvent_2");

	AFPS_PC_C_InpActEvt_VoteYes_K2Node_InputActionEvent_2_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.InpActEvt_VoteNo_K2Node_InputActionEvent_1
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AFPS_PC_C::InpActEvt_VoteNo_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.InpActEvt_VoteNo_K2Node_InputActionEvent_1");

	AFPS_PC_C_InpActEvt_VoteNo_K2Node_InputActionEvent_1_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.OnAuthFinished
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void AFPS_PC_C::OnAuthFinished()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.OnAuthFinished");

	AFPS_PC_C_OnAuthFinished_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.OnGetAllLobbies
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void AFPS_PC_C::OnGetAllLobbies()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.OnGetAllLobbies");

	AFPS_PC_C_OnGetAllLobbies_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.OnGetAllGames
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void AFPS_PC_C::OnGetAllGames()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.OnGetAllGames");

	AFPS_PC_C_OnGetAllGames_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.OnProcessReady
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void AFPS_PC_C::OnProcessReady()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.OnProcessReady");

	AFPS_PC_C_OnProcessReady_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.01XpAnim
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                StartXp_Display_                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                FinalXp_Display_                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                EarnedXp_Display_                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_PC_C::_01XpAnim(int StartXp_Display_, int FinalXp_Display_, int EarnedXp_Display_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.01XpAnim");

	AFPS_PC_C__01XpAnim_Params params {};
	params.StartXp_Display_ = StartXp_Display_;
	params.FinalXp_Display_ = FinalXp_Display_;
	params.EarnedXp_Display_ = EarnedXp_Display_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.02GoldAnim
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                StartG                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                FinalG                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                EarnedG                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_PC_C::_02GoldAnim(int StartG, int FinalG, int EarnedG)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.02GoldAnim");

	AFPS_PC_C__02GoldAnim_Params params {};
	params.StartG = StartG;
	params.FinalG = FinalG;
	params.EarnedG = EarnedG;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.03EarnedScoreAnim
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                EarnedAmount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_PC_C::_03EarnedScoreAnim(int EarnedAmount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.03EarnedScoreAnim");

	AFPS_PC_C__03EarnedScoreAnim_Params params {};
	params.EarnedAmount = EarnedAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.04TotalScoreAnim
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                StartS                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                FinalS                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_PC_C::_04TotalScoreAnim(int StartS, int FinalS)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.04TotalScoreAnim");

	AFPS_PC_C__04TotalScoreAnim_Params params {};
	params.StartS = StartS;
	params.FinalS = FinalS;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.05OfficialRankingAnim
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AFPS_PC_C::_05OfficialRankingAnim()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.05OfficialRankingAnim");

	AFPS_PC_C__05OfficialRankingAnim_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.UpdateRankingScore
//		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Ranking                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Score                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_PC_C::UpdateRankingScore(int Ranking, int Score)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.UpdateRankingScore");

	AFPS_PC_C_UpdateRankingScore_Params params {};
	params.Ranking = Ranking;
	params.Score = Score;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.00XpAnimInit
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                StartXp_Display_                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                EarnedXp_Display_                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_PC_C::_00XpAnimInit(int StartXp_Display_, int EarnedXp_Display_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.00XpAnimInit");

	AFPS_PC_C__00XpAnimInit_Params params {};
	params.StartXp_Display_ = StartXp_Display_;
	params.EarnedXp_Display_ = EarnedXp_Display_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void AFPS_PC_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.ReceiveBeginPlay");

	AFPS_PC_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.Init_CountDownWaitTime
//		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Seconds                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_PC_C::Init_CountDownWaitTime(int Seconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.Init_CountDownWaitTime");

	AFPS_PC_C_Init_CountDownWaitTime_Params params {};
	params.Seconds = Seconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.Bind_CountDownTimer
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AFPS_PC_C::Bind_CountDownTimer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.Bind_CountDownTimer");

	AFPS_PC_C_Bind_CountDownTimer_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.UpdatePlayerState(Scoreboard)
//		Flags  -> (Net, NetReliable, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AFPS_PC_C*                                   Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<struct FPlayerInfoGame>                     PlayerInfos                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void AFPS_PC_C::UpdatePlayerState_Scoreboard_(class AFPS_PC_C* Target, TArray<struct FPlayerInfoGame> PlayerInfos)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.UpdatePlayerState(Scoreboard)");

	AFPS_PC_C_UpdatePlayerState_Scoreboard__Params params {};
	params.Target = Target;
	params.PlayerInfos = PlayerInfos;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.UpdateRound
//		Flags  -> (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                CurrentRound                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                MaxRound                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_PC_C::UpdateRound(int CurrentRound, int MaxRound)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.UpdateRound");

	AFPS_PC_C_UpdateRound_Params params {};
	params.CurrentRound = CurrentRound;
	params.MaxRound = MaxRound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.UpdateWinSide
//		Flags  -> (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                PropWin                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                HunterWin                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_PC_C::UpdateWinSide(int PropWin, int HunterWin)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.UpdateWinSide");

	AFPS_PC_C_UpdateWinSide_Params params {};
	params.PropWin = PropWin;
	params.HunterWin = HunterWin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.SendChatToServer
//		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       Message                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
//		TEnumAsByte<EChatMode_EChatMode>                   MyChatMode                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_PC_C::SendChatToServer(const struct FText& Message, TEnumAsByte<EChatMode_EChatMode> MyChatMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.SendChatToServer");

	AFPS_PC_C_SendChatToServer_Params params {};
	params.Message = Message;
	params.MyChatMode = MyChatMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.DisplayChat
//		Flags  -> (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     userName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FText                                       Message                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
//		TEnumAsByte<EChatMode_EChatMode>                   ChatMode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               IsHunter                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FSlateColor                                 Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
void AFPS_PC_C::DisplayChat(const struct FString& userName, const struct FText& Message, TEnumAsByte<EChatMode_EChatMode> ChatMode, bool IsHunter, const struct FSlateColor& Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.DisplayChat");

	AFPS_PC_C_DisplayChat_Params params {};
	params.userName = userName;
	params.Message = Message;
	params.ChatMode = ChatMode;
	params.IsHunter = IsHunter;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.UpdateWinLose
//		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               HunterWon_                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               IsHunter                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		int                                                Update_Win_Prop                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Update_Win_Hunter                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                NextRoundWaitTime                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_PC_C::UpdateWinLose(bool HunterWon_, bool IsHunter, int Update_Win_Prop, int Update_Win_Hunter, int NextRoundWaitTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.UpdateWinLose");

	AFPS_PC_C_UpdateWinLose_Params params {};
	params.HunterWon_ = HunterWon_;
	params.IsHunter = IsHunter;
	params.Update_Win_Prop = Update_Win_Prop;
	params.Update_Win_Hunter = Update_Win_Hunter;
	params.NextRoundWaitTime = NextRoundWaitTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.JoinLobbyClient
//		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
void AFPS_PC_C::JoinLobbyClient()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.JoinLobbyClient");

	AFPS_PC_C_JoinLobbyClient_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.PropSelectionStart_Client
//		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
void AFPS_PC_C::PropSelectionStart_Client()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.PropSelectionStart_Client");

	AFPS_PC_C_PropSelectionStart_Client_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.DebugReceiver
//		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     Message                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		bool                                               Success                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AFPS_PC_C::DebugReceiver(const struct FString& Message, bool Success)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.DebugReceiver");

	AFPS_PC_C_DebugReceiver_Params params {};
	params.Message = Message;
	params.Success = Success;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.UpdateFinalboard
//		Flags  -> (Net, NetReliable, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<struct FPlayerInfoGame>                     PlayerScores                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void AFPS_PC_C::UpdateFinalboard(TArray<struct FPlayerInfoGame> PlayerScores)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.UpdateFinalboard");

	AFPS_PC_C_UpdateFinalboard_Params params {};
	params.PlayerScores = PlayerScores;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.UpdateKillFeed
//		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     Killed                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		bool                                               IsKillerHunter_                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FString                                     Destroyed                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		bool                                               IsDestroyedHunter_                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AFPS_PC_C::UpdateKillFeed(const struct FString& Killed, bool IsKillerHunter_, const struct FString& Destroyed, bool IsDestroyedHunter_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.UpdateKillFeed");

	AFPS_PC_C_UpdateKillFeed_Params params {};
	params.Killed = Killed;
	params.IsKillerHunter_ = IsKillerHunter_;
	params.Destroyed = Destroyed;
	params.IsDestroyedHunter_ = IsDestroyedHunter_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.MainNoti_01_SelfDamage
//		Flags  -> (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                DamageAmount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_PC_C::MainNoti_01_SelfDamage(int DamageAmount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.MainNoti_01_SelfDamage");

	AFPS_PC_C_MainNoti_01_SelfDamage_Params params {};
	params.DamageAmount = DamageAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.MainNoti_02_YouEliminated
//		Flags  -> (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     KilledUser                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		int                                                ObtainedScore                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_PC_C::MainNoti_02_YouEliminated(const struct FString& KilledUser, int ObtainedScore)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.MainNoti_02_YouEliminated");

	AFPS_PC_C_MainNoti_02_YouEliminated_Params params {};
	params.KilledUser = KilledUser;
	params.ObtainedScore = ObtainedScore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.MainNoti_03_YouWereEliminatedBy
//		Flags  -> (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     KilledMeUser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		int                                                LostScore                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_PC_C::MainNoti_03_YouWereEliminatedBy(const struct FString& KilledMeUser, int LostScore)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.MainNoti_03_YouWereEliminatedBy");

	AFPS_PC_C_MainNoti_03_YouWereEliminatedBy_Params params {};
	params.KilledMeUser = KilledMeUser;
	params.LostScore = LostScore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.MainNoti_04_SelfKilled
//		Flags  -> (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                LostScore                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_PC_C::MainNoti_04_SelfKilled(int LostScore)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.MainNoti_04_SelfKilled");

	AFPS_PC_C_MainNoti_04_SelfKilled_Params params {};
	params.LostScore = LostScore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.MainNoti_05_AddHealth
//		Flags  -> (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                AddedHP                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_PC_C::MainNoti_05_AddHealth(int AddedHP)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.MainNoti_05_AddHealth");

	AFPS_PC_C_MainNoti_05_AddHealth_Params params {};
	params.AddedHP = AddedHP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.MainNoti_06_DamagedBy
//		Flags  -> (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     userName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		int                                                ReceivedDamage                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_PC_C::MainNoti_06_DamagedBy(const struct FString& userName, int ReceivedDamage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.MainNoti_06_DamagedBy");

	AFPS_PC_C_MainNoti_06_DamagedBy_Params params {};
	params.userName = userName;
	params.ReceivedDamage = ReceivedDamage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.ChangeChatModeClient
//		Flags  -> (Net, NetClient, BlueprintCallable, BlueprintEvent)
void AFPS_PC_C::ChangeChatModeClient()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.ChangeChatModeClient");

	AFPS_PC_C_ChangeChatModeClient_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.PropVisibility
//		Flags  -> (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AProp_C*                                     Prop                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Visibility                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AFPS_PC_C::PropVisibility(class AProp_C* Prop, bool Visibility)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.PropVisibility");

	AFPS_PC_C_PropVisibility_Params params {};
	params.Prop = Prop;
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.HunterVisibility
//		Flags  -> (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AFPS_Character2_C*                           HUNTER                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Visibility                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AFPS_PC_C::HunterVisibility(class AFPS_Character2_C* HUNTER, bool Visibility)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.HunterVisibility");

	AFPS_PC_C_HunterVisibility_Params params {};
	params.HUNTER = HUNTER;
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.NotifyBurningTime
//		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
void AFPS_PC_C::NotifyBurningTime()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.NotifyBurningTime");

	AFPS_PC_C_NotifyBurningTime_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.Beginplay_Sounds
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AFPS_PC_C::Beginplay_Sounds()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.Beginplay_Sounds");

	AFPS_PC_C_Beginplay_Sounds_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.StartVoice_OnlyProp
//		Flags  -> (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Sec                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_PC_C::StartVoice_OnlyProp(int Sec)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.StartVoice_OnlyProp");

	AFPS_PC_C_StartVoice_OnlyProp_Params params {};
	params.Sec = Sec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.PlayStartMusic
//		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
void AFPS_PC_C::PlayStartMusic()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.PlayStartMusic");

	AFPS_PC_C_PlayStartMusic_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.UpdatePropNoti_Freezing
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               FreezingOn_                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AFPS_PC_C::UpdatePropNoti_Freezing(bool FreezingOn_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.UpdatePropNoti_Freezing");

	AFPS_PC_C_UpdatePropNoti_Freezing_Params params {};
	params.FreezingOn_ = FreezingOn_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.ResetJumpCount
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AFPS_PC_C::ResetJumpCount()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.ResetJumpCount");

	AFPS_PC_C_ResetJumpCount_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.PacketDelayStart
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AFPS_PC_C::PacketDelayStart()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.PacketDelayStart");

	AFPS_PC_C_PacketDelayStart_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.PacketDelayEnd
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AFPS_PC_C::PacketDelayEnd()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.PacketDelayEnd");

	AFPS_PC_C_PacketDelayEnd_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.SendChatToServerClient
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       Message                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
//		TEnumAsByte<EChatMode_EChatMode>                   ChatMode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UChatSystemGame_C*                           ChatWidget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_PC_C::SendChatToServerClient(const struct FText& Message, TEnumAsByte<EChatMode_EChatMode> ChatMode, class UChatSystemGame_C* ChatWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.SendChatToServerClient");

	AFPS_PC_C_SendChatToServerClient_Params params {};
	params.Message = Message;
	params.ChatMode = ChatMode;
	params.ChatWidget = ChatWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.DelaySendChat
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AFPS_PC_C::DelaySendChat()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.DelaySendChat");

	AFPS_PC_C_DelaySendChat_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.SetPlayerSession
//		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     userName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     playerSessionId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FSCashItemsGameInfo                         CashItemGameInfo                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       ClientVersion                                              (BlueprintVisible, BlueprintReadOnly, Parm)
void AFPS_PC_C::SetPlayerSession(const struct FString& userName, const struct FString& playerSessionId, const struct FSCashItemsGameInfo& CashItemGameInfo, const struct FText& ClientVersion)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.SetPlayerSession");

	AFPS_PC_C_SetPlayerSession_Params params {};
	params.userName = userName;
	params.playerSessionId = playerSessionId;
	params.CashItemGameInfo = CashItemGameInfo;
	params.ClientVersion = ClientVersion;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.AddToQueueServer
//		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     SteamID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		TEnumAsByte<EWhichWorkGame_EWhichWorkGame>         Work                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_PC_C::AddToQueueServer(const struct FString& SteamID, TEnumAsByte<EWhichWorkGame_EWhichWorkGame> Work)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.AddToQueueServer");

	AFPS_PC_C_AddToQueueServer_Params params {};
	params.SteamID = SteamID;
	params.Work = Work;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.GetSteamId_Event
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AFPS_PC_C::GetSteamId_Event()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.GetSteamId_Event");

	AFPS_PC_C_GetSteamId_Event_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.SetSteamId_Event
//		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     SteamID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void AFPS_PC_C::SetSteamId_Event(const struct FString& SteamID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.SetSteamId_Event");

	AFPS_PC_C_SetSteamId_Event_Params params {};
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.BeginAuthProcess_Event
//		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
void AFPS_PC_C::BeginAuthProcess_Event()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.BeginAuthProcess_Event");

	AFPS_PC_C_BeginAuthProcess_Event_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.AuthTicketResponse
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FUWorksTicketHandle                         AuthTicket                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
//		UWorksCore_EUWorksResult                           Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_PC_C::AuthTicketResponse(const struct FUWorksTicketHandle& AuthTicket, UWorksCore_EUWorksResult Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.AuthTicketResponse");

	AFPS_PC_C_AuthTicketResponse_Params params {};
	params.AuthTicket = AuthTicket;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.AuthTicketOnServer_Event
//		Flags  -> (Net, NetReliable, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<unsigned char>                              Ticket                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void AFPS_PC_C::AuthTicketOnServer_Event(TArray<unsigned char> Ticket)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.AuthTicketOnServer_Event");

	AFPS_PC_C_AuthTicketOnServer_Event_Params params {};
	params.Ticket = Ticket;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.AuthTicketServerResponse
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FUWorksSteamID                              SteamID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
//		UWorksCore_EUWorksAuthSessionResponse              AuthSessionResponse                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FUWorksSteamID                              OwnerSteamID                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void AFPS_PC_C::AuthTicketServerResponse(const struct FUWorksSteamID& SteamID, UWorksCore_EUWorksAuthSessionResponse AuthSessionResponse, const struct FUWorksSteamID& OwnerSteamID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.AuthTicketServerResponse");

	AFPS_PC_C_AuthTicketServerResponse_Params params {};
	params.SteamID = SteamID;
	params.AuthSessionResponse = AuthSessionResponse;
	params.OwnerSteamID = OwnerSteamID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.KickClient
//		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     KickedReason                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void AFPS_PC_C::KickClient(const struct FString& KickedReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.KickClient");

	AFPS_PC_C_KickClient_Params params {};
	params.KickedReason = KickedReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.Mute_StartMusic
//		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
void AFPS_PC_C::Mute_StartMusic()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.Mute_StartMusic");

	AFPS_PC_C_Mute_StartMusic_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.Mute_Ambience
//		Flags  -> (Net, NetClient, BlueprintCallable, BlueprintEvent)
void AFPS_PC_C::Mute_Ambience()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.Mute_Ambience");

	AFPS_PC_C_Mute_Ambience_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.Mute_OnFireMusic
//		Flags  -> (Net, NetClient, BlueprintCallable, BlueprintEvent)
void AFPS_PC_C::Mute_OnFireMusic()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.Mute_OnFireMusic");

	AFPS_PC_C_Mute_OnFireMusic_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.DebugSyncStat
//		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void AFPS_PC_C::DebugSyncStat()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.DebugSyncStat");

	AFPS_PC_C_DebugSyncStat_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.InfoCheck
//		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void AFPS_PC_C::InfoCheck()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.InfoCheck");

	AFPS_PC_C_InfoCheck_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.Debug_ForceStartGame
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AFPS_PC_C::Debug_ForceStartGame()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.Debug_ForceStartGame");

	AFPS_PC_C_Debug_ForceStartGame_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.TogglePropPic
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Show_                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AFPS_PC_C::TogglePropPic(bool Show_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.TogglePropPic");

	AFPS_PC_C_TogglePropPic_Params params {};
	params.Show_ = Show_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.2ndMorphStartSoundEffect
//		Flags  -> (Net, NetClient, BlueprintCallable, BlueprintEvent)
void AFPS_PC_C::_2ndMorphStartSoundEffect()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.2ndMorphStartSoundEffect");

	AFPS_PC_C__2ndMorphStartSoundEffect_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.WinLoseAnnouncer
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Win_                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AFPS_PC_C::WinLoseAnnouncer(bool Win_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.WinLoseAnnouncer");

	AFPS_PC_C_WinLoseAnnouncer_Params params {};
	params.Win_ = Win_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.PeekingNoti
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               On_                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AFPS_PC_C::PeekingNoti(bool On_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.PeekingNoti");

	AFPS_PC_C_PeekingNoti_Params params {};
	params.On_ = On_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.EventDeath(Prop)
//		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
void AFPS_PC_C::EventDeath_Prop_()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.EventDeath(Prop)");

	AFPS_PC_C_EventDeath_Prop__Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.EventDeath(Hunter)
//		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
void AFPS_PC_C::EventDeath_Hunter_()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.EventDeath(Hunter)");

	AFPS_PC_C_EventDeath_Hunter__Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.DelayPkt
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AFPS_PC_C::DelayPkt()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.DelayPkt");

	AFPS_PC_C_DelayPkt_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.DelayFreezePeek
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AFPS_PC_C::DelayFreezePeek()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.DelayFreezePeek");

	AFPS_PC_C_DelayFreezePeek_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.UpdatePropNoti_Peeking
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               PeekingOn_                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AFPS_PC_C::UpdatePropNoti_Peeking(bool PeekingOn_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.UpdatePropNoti_Peeking");

	AFPS_PC_C_UpdatePropNoti_Peeking_Params params {};
	params.PeekingOn_ = PeekingOn_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.AnimateMyHealth
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                from                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                To                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               _Buffer                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AFPS_PC_C::AnimateMyHealth(int from, int To, bool _Buffer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.AnimateMyHealth");

	AFPS_PC_C_AnimateMyHealth_Params params {};
	params.from = from;
	params.To = To;
	params._Buffer = _Buffer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.AnimateMyExp
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                from                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                To                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_PC_C::AnimateMyExp(int from, int To)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.AnimateMyExp");

	AFPS_PC_C_AnimateMyExp_Params params {};
	params.from = from;
	params.To = To;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.AnimateMyGoldCoin
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                from                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                To                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_PC_C::AnimateMyGoldCoin(int from, int To)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.AnimateMyGoldCoin");

	AFPS_PC_C_AnimateMyGoldCoin_Params params {};
	params.from = from;
	params.To = To;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.DeductGoldCoins
//		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                DeductionAmount                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_PC_C::DeductGoldCoins(int DeductionAmount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.DeductGoldCoins");

	AFPS_PC_C_DeductGoldCoins_Params params {};
	params.DeductionAmount = DeductionAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.DeductStokens
//		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                DeductionAmount                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_PC_C::DeductStokens(int DeductionAmount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.DeductStokens");

	AFPS_PC_C_DeductStokens_Params params {};
	params.DeductionAmount = DeductionAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.PlayPropSelectionMusic
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Stop_                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AFPS_PC_C::PlayPropSelectionMusic(bool Stop_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.PlayPropSelectionMusic");

	AFPS_PC_C_PlayPropSelectionMusic_Params params {};
	params.Stop_ = Stop_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.Count
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AFPS_PC_C::Count()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.Count");

	AFPS_PC_C_Count_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.BeginCountDown
//		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                CountDownSec                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_PC_C::BeginCountDown(int CountDownSec)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.BeginCountDown");

	AFPS_PC_C_BeginCountDown_Params params {};
	params.CountDownSec = CountDownSec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.CountDownWaitTimeTick
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AFPS_PC_C::CountDownWaitTimeTick()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.CountDownWaitTimeTick");

	AFPS_PC_C_CountDownWaitTimeTick_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.Init_CountDownHunterWaitTime
//		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Seconds                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_PC_C::Init_CountDownHunterWaitTime(int Seconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.Init_CountDownHunterWaitTime");

	AFPS_PC_C_Init_CountDownHunterWaitTime_Params params {};
	params.Seconds = Seconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.CountDownHunterWaitTimeTick
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AFPS_PC_C::CountDownHunterWaitTimeTick()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.CountDownHunterWaitTimeTick");

	AFPS_PC_C_CountDownHunterWaitTimeTick_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.CheckCurrentServerState
//		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void AFPS_PC_C::CheckCurrentServerState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.CheckCurrentServerState");

	AFPS_PC_C_CheckCurrentServerState_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.ShowWaitingScreen
//		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
void AFPS_PC_C::ShowWaitingScreen()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.ShowWaitingScreen");

	AFPS_PC_C_ShowWaitingScreen_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.KickNoVersionMatch
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       Server_Version                                             (BlueprintVisible, BlueprintReadOnly, Parm)
void AFPS_PC_C::KickNoVersionMatch(const struct FText& Server_Version)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.KickNoVersionMatch");

	AFPS_PC_C_KickNoVersionMatch_Params params {};
	params.Server_Version = Server_Version;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.OnVoteKickButtonPressed
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     SteamIdToKick                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     UsernameToKick                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void AFPS_PC_C::OnVoteKickButtonPressed(const struct FString& SteamIdToKick, const struct FString& UsernameToKick)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.OnVoteKickButtonPressed");

	AFPS_PC_C_OnVoteKickButtonPressed_Params params {};
	params.SteamIdToKick = SteamIdToKick;
	params.UsernameToKick = UsernameToKick;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.ExecuteVoteKickOnServer
//		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AFPS_PC_C*                                   RequestedPlayer                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FString                                     PlayerToKickSteamID                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     PlayerToKickUsername                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void AFPS_PC_C::ExecuteVoteKickOnServer(class AFPS_PC_C* RequestedPlayer, const struct FString& PlayerToKickSteamID, const struct FString& PlayerToKickUsername)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.ExecuteVoteKickOnServer");

	AFPS_PC_C_ExecuteVoteKickOnServer_Params params {};
	params.RequestedPlayer = RequestedPlayer;
	params.PlayerToKickSteamID = PlayerToKickSteamID;
	params.PlayerToKickUsername = PlayerToKickUsername;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.StartVoteKick
//		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     userName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     SteamID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void AFPS_PC_C::StartVoteKick(const struct FString& userName, const struct FString& SteamID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.StartVoteKick");

	AFPS_PC_C_StartVoteKick_Params params {};
	params.userName = userName;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.SendVoteYes
//		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void AFPS_PC_C::SendVoteYes()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.SendVoteYes");

	AFPS_PC_C_SendVoteYes_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.SendVoteNo
//		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void AFPS_PC_C::SendVoteNo()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.SendVoteNo");

	AFPS_PC_C_SendVoteNo_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.BanThisPlayer
//		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AFPS_PC_C*                                   RequestedPlayer                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FString                                     ToBanSteamID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void AFPS_PC_C::BanThisPlayer(class AFPS_PC_C* RequestedPlayer, const struct FString& ToBanSteamID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.BanThisPlayer");

	AFPS_PC_C_BanThisPlayer_Params params {};
	params.RequestedPlayer = RequestedPlayer;
	params.ToBanSteamID = ToBanSteamID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.CustomEvent_1
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bSuccessful                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FString                                     Content                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void AFPS_PC_C::CustomEvent_1(bool bSuccessful, const struct FString& Content)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.CustomEvent_1");

	AFPS_PC_C_CustomEvent_1_Params params {};
	params.bSuccessful = bSuccessful;
	params.Content = Content;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.BanResult
//		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Success_                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FString                                     Content                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void AFPS_PC_C::BanResult(bool Success_, const struct FString& Content)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.BanResult");

	AFPS_PC_C_BanResult_Params params {};
	params.Success_ = Success_;
	params.Content = Content;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.PlayTauntSound
//		Flags  -> (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AProp_C*                                     PropActor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                TauntSoundNumber                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_PC_C::PlayTauntSound(class AProp_C* PropActor, int TauntSoundNumber)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.PlayTauntSound");

	AFPS_PC_C_PlayTauntSound_Params params {};
	params.PropActor = PropActor;
	params.TauntSoundNumber = TauntSoundNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.InitKickCheck
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AFPS_PC_C::InitKickCheck()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.InitKickCheck");

	AFPS_PC_C_InitKickCheck_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.KickCount
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AFPS_PC_C::KickCount()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.KickCount");

	AFPS_PC_C_KickCount_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.KickStop
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AFPS_PC_C::KickStop()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.KickStop");

	AFPS_PC_C_KickStop_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.PropsToRevertToStatic
//		Flags  -> (Net, NetMulticast, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<class UPrimitiveComponent*>                 PropsToRevert                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void AFPS_PC_C::PropsToRevertToStatic(TArray<class UPrimitiveComponent*> PropsToRevert)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.PropsToRevertToStatic");

	AFPS_PC_C_PropsToRevertToStatic_Params params {};
	params.PropsToRevert = PropsToRevert;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.KickOutPlayer
//		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
void AFPS_PC_C::KickOutPlayer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.KickOutPlayer");

	AFPS_PC_C_KickOutPlayer_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.RocketExplosionEffect_Client
//		Flags  -> (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_PC_C::RocketExplosionEffect_Client(const struct FVector& Location)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.RocketExplosionEffect_Client");

	AFPS_PC_C_RocketExplosionEffect_Client_Params params {};
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.GrenadeExplosionEffect_Client
//		Flags  -> (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_PC_C::GrenadeExplosionEffect_Client(const struct FVector& Location)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.GrenadeExplosionEffect_Client");

	AFPS_PC_C_GrenadeExplosionEffect_Client_Params params {};
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.UpdateMultipleKillFeeds
//		Flags  -> (Net, NetReliable, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<struct FString>                             Killed                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
//		TArray<bool>                                       IsKillerHunter_                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
//		TArray<struct FString>                             Destroyed                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
//		TArray<bool>                                       IsDestroyedHunter_                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void AFPS_PC_C::UpdateMultipleKillFeeds(TArray<struct FString> Killed, TArray<bool> IsKillerHunter_, TArray<struct FString> Destroyed, TArray<bool> IsDestroyedHunter_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.UpdateMultipleKillFeeds");

	AFPS_PC_C_UpdateMultipleKillFeeds_Params params {};
	params.Killed = Killed;
	params.IsKillerHunter_ = IsKillerHunter_;
	params.Destroyed = Destroyed;
	params.IsDestroyedHunter_ = IsDestroyedHunter_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.StealthView_Widget_Off
//		Flags  -> (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Notify_                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AFPS_PC_C::StealthView_Widget_Off(bool Notify_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.StealthView_Widget_Off");

	AFPS_PC_C_StealthView_Widget_Off_Params params {};
	params.Notify_ = Notify_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.CheckedValidCurrencyForRerolling
//		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                TrialNumber                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_PC_C::CheckedValidCurrencyForRerolling(int TrialNumber)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.CheckedValidCurrencyForRerolling");

	AFPS_PC_C_CheckedValidCurrencyForRerolling_Params params {};
	params.TrialNumber = TrialNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.RunObserverPossession
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTransform                                  Transform                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
void AFPS_PC_C::RunObserverPossession(const struct FTransform& Transform)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.RunObserverPossession");

	AFPS_PC_C_RunObserverPossession_Params params {};
	params.Transform = Transform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.RunPropPossession
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AFPS_PC_C::RunPropPossession()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.RunPropPossession");

	AFPS_PC_C_RunPropPossession_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.EventOnPropDestroyed
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AFPS_PC_C::EventOnPropDestroyed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.EventOnPropDestroyed");

	AFPS_PC_C_EventOnPropDestroyed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.VotekickClient
//		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
void AFPS_PC_C::VotekickClient()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.VotekickClient");

	AFPS_PC_C_VotekickClient_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.SendReportInfoToServer
//		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<Ereport_Ereport>                       ReportType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FString                                     ReportedSteamID                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void AFPS_PC_C::SendReportInfoToServer(TEnumAsByte<Ereport_Ereport> ReportType, const struct FString& ReportedSteamID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.SendReportInfoToServer");

	AFPS_PC_C_SendReportInfoToServer_Params params {};
	params.ReportType = ReportType;
	params.ReportedSteamID = ReportedSteamID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FPS_PC.FPS_PC_C.ExecuteUbergraph_FPS_PC
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFPS_PC_C::ExecuteUbergraph_FPS_PC(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FPS_PC.FPS_PC_C.ExecuteUbergraph_FPS_PC");

	AFPS_PC_C_ExecuteUbergraph_FPS_PC_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
