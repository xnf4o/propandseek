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
//		Name   -> Function Prop.Prop_C.ToggleViewPerspective
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               FirstPerson_                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               Notify_                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AProp_C::ToggleViewPerspective(bool FirstPerson_, bool Notify_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Prop.Prop_C.ToggleViewPerspective");

	AProp_C_ToggleViewPerspective_Params params {};
	params.FirstPerson_ = FirstPerson_;
	params.Notify_ = Notify_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Prop.Prop_C.OnRep_BasicInfos
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AProp_C::OnRep_BasicInfos()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Prop.Prop_C.OnRep_BasicInfos");

	AProp_C_OnRep_BasicInfos_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Prop.Prop_C.AnimateDamage
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AProp_C::AnimateDamage(int Damage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Prop.Prop_C.AnimateDamage");

	AProp_C_AnimateDamage_Params params {};
	params.Damage = Damage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Prop.Prop_C.OnRep_Sync_PropInfo
//		Flags  -> (HasDefaults, BlueprintCallable, BlueprintEvent)
void AProp_C::OnRep_Sync_PropInfo()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Prop.Prop_C.OnRep_Sync_PropInfo");

	AProp_C_OnRep_Sync_PropInfo_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Prop.Prop_C.OnRep_Sync_thumbsUpCount
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AProp_C::OnRep_Sync_thumbsUpCount()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Prop.Prop_C.OnRep_Sync_thumbsUpCount");

	AProp_C_OnRep_Sync_thumbsUpCount_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Prop.Prop_C.UpdateAdjustPropVisibility
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               MyWidgetVisibility                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               WidgetVisibility                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		TEnumAsByte<EOutlineEffects_EOutlineEffects>       MyOutline                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<EOutlineEffects_EOutlineEffects>       Outline                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               IndicatorParticle                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AProp_C::UpdateAdjustPropVisibility(bool MyWidgetVisibility, bool WidgetVisibility, TEnumAsByte<EOutlineEffects_EOutlineEffects> MyOutline, TEnumAsByte<EOutlineEffects_EOutlineEffects> Outline, bool IndicatorParticle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Prop.Prop_C.UpdateAdjustPropVisibility");

	AProp_C_UpdateAdjustPropVisibility_Params params {};
	params.MyWidgetVisibility = MyWidgetVisibility;
	params.WidgetVisibility = WidgetVisibility;
	params.MyOutline = MyOutline;
	params.Outline = Outline;
	params.IndicatorParticle = IndicatorParticle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Prop.Prop_C.UpperWidgetRef
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UUpperwidget2_C*                             AsUpper_Widget2                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AProp_C::UpperWidgetRef(class UUpperwidget2_C** AsUpper_Widget2)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Prop.Prop_C.UpperWidgetRef");

	AProp_C_UpperWidgetRef_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsUpper_Widget2 != nullptr)
		*AsUpper_Widget2 = params.AsUpper_Widget2;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Prop.Prop_C.OutlineEffects
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<EOutlineEffects_EOutlineEffects>       OutlineType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AProp_C::OutlineEffects(TEnumAsByte<EOutlineEffects_EOutlineEffects> OutlineType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Prop.Prop_C.OutlineEffects");

	AProp_C_OutlineEffects_Params params {};
	params.OutlineType = OutlineType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Prop.Prop_C.FreezeCollisionWorks
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Freeze_                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AProp_C::FreezeCollisionWorks(bool Freeze_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Prop.Prop_C.FreezeCollisionWorks");

	AProp_C_FreezeCollisionWorks_Params params {};
	params.Freeze_ = Freeze_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Prop.Prop_C.GI
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UGI2_C*                                      AsGI2                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AProp_C::GI(class UGI2_C** AsGI2)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Prop.Prop_C.GI");

	AProp_C_GI_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsGI2 != nullptr)
		*AsGI2 = params.AsGI2;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Prop.Prop_C.RotationCheck
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Sync_                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              RotationOutput                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AProp_C::RotationCheck(bool* Sync_, float* RotationOutput)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Prop.Prop_C.RotationCheck");

	AProp_C_RotationCheck_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Sync_ != nullptr)
		*Sync_ = params.Sync_;
	if (RotationOutput != nullptr)
		*RotationOutput = params.RotationOutput;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Prop.Prop_C.RenderPlayerSelectParticle
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AProp_C::RenderPlayerSelectParticle()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Prop.Prop_C.RenderPlayerSelectParticle");

	AProp_C_RenderPlayerSelectParticle_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Prop.Prop_C.GM
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class AFPS_GM_C*                                   AsFPS_GM                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AProp_C::GM(class AFPS_GM_C** AsFPS_GM)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Prop.Prop_C.GM");

	AProp_C_GM_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsFPS_GM != nullptr)
		*AsFPS_GM = params.AsFPS_GM;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Prop.Prop_C.AmmoVisibility
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void AProp_C::AmmoVisibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Prop.Prop_C.AmmoVisibility");

	AProp_C_AmmoVisibility_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Prop.Prop_C.PC
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class AFPS_PC_C*                                   AsFPS_PC                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AProp_C::PC(class AFPS_PC_C** AsFPS_PC)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Prop.Prop_C.PC");

	AProp_C_PC_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsFPS_PC != nullptr)
		*AsFPS_PC = params.AsFPS_PC;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Prop.Prop_C.PS
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class AFPS_PS_C*                                   AsFPS_PS                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AProp_C::PS(class AFPS_PS_C** AsFPS_PS)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Prop.Prop_C.PS");

	AProp_C_PS_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsFPS_PS != nullptr)
		*AsFPS_PS = params.AsFPS_PS;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Prop.Prop_C.LerpTime__FinishedFunc
//		Flags  -> (BlueprintEvent)
void AProp_C::LerpTime__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Prop.Prop_C.LerpTime__FinishedFunc");

	AProp_C_LerpTime__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Prop.Prop_C.LerpTime__UpdateFunc
//		Flags  -> (BlueprintEvent)
void AProp_C::LerpTime__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Prop.Prop_C.LerpTime__UpdateFunc");

	AProp_C_LerpTime__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Prop.Prop_C.Self_Rotation__FinishedFunc
//		Flags  -> (BlueprintEvent)
void AProp_C::Self_Rotation__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Prop.Prop_C.Self_Rotation__FinishedFunc");

	AProp_C_Self_Rotation__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Prop.Prop_C.Self_Rotation__UpdateFunc
//		Flags  -> (BlueprintEvent)
void AProp_C::Self_Rotation__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Prop.Prop_C.Self_Rotation__UpdateFunc");

	AProp_C_Self_Rotation__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Prop.Prop_C.LerpHealth__FinishedFunc
//		Flags  -> (BlueprintEvent)
void AProp_C::LerpHealth__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Prop.Prop_C.LerpHealth__FinishedFunc");

	AProp_C_LerpHealth__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Prop.Prop_C.LerpHealth__UpdateFunc
//		Flags  -> (BlueprintEvent)
void AProp_C::LerpHealth__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Prop.Prop_C.LerpHealth__UpdateFunc");

	AProp_C_LerpHealth__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Prop.Prop_C.SwitchViewModeTL__FinishedFunc
//		Flags  -> (BlueprintEvent)
void AProp_C::SwitchViewModeTL__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Prop.Prop_C.SwitchViewModeTL__FinishedFunc");

	AProp_C_SwitchViewModeTL__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Prop.Prop_C.SwitchViewModeTL__UpdateFunc
//		Flags  -> (BlueprintEvent)
void AProp_C::SwitchViewModeTL__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Prop.Prop_C.SwitchViewModeTL__UpdateFunc");

	AProp_C_SwitchViewModeTL__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Prop.Prop_C.LerpStopProp__FinishedFunc
//		Flags  -> (BlueprintEvent)
void AProp_C::LerpStopProp__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Prop.Prop_C.LerpStopProp__FinishedFunc");

	AProp_C_LerpStopProp__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Prop.Prop_C.LerpStopProp__UpdateFunc
//		Flags  -> (BlueprintEvent)
void AProp_C::LerpStopProp__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Prop.Prop_C.LerpStopProp__UpdateFunc");

	AProp_C_LerpStopProp__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Prop.Prop_C.ZoomingTimeline__FinishedFunc
//		Flags  -> (BlueprintEvent)
void AProp_C::ZoomingTimeline__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Prop.Prop_C.ZoomingTimeline__FinishedFunc");

	AProp_C_ZoomingTimeline__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Prop.Prop_C.ZoomingTimeline__UpdateFunc
//		Flags  -> (BlueprintEvent)
void AProp_C::ZoomingTimeline__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Prop.Prop_C.ZoomingTimeline__UpdateFunc");

	AProp_C_ZoomingTimeline__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Prop.Prop_C.InpActEvt_Jump_K2Node_InputActionEvent_9
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AProp_C::InpActEvt_Jump_K2Node_InputActionEvent_9(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Prop.Prop_C.InpActEvt_Jump_K2Node_InputActionEvent_9");

	AProp_C_InpActEvt_Jump_K2Node_InputActionEvent_9_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Prop.Prop_C.InpActEvt_Freeze_K2Node_InputActionEvent_8
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AProp_C::InpActEvt_Freeze_K2Node_InputActionEvent_8(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Prop.Prop_C.InpActEvt_Freeze_K2Node_InputActionEvent_8");

	AProp_C_InpActEvt_Freeze_K2Node_InputActionEvent_8_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Prop.Prop_C.InpActEvt_Flash_K2Node_InputActionEvent_7
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AProp_C::InpActEvt_Flash_K2Node_InputActionEvent_7(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Prop.Prop_C.InpActEvt_Flash_K2Node_InputActionEvent_7");

	AProp_C_InpActEvt_Flash_K2Node_InputActionEvent_7_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Prop.Prop_C.InpActEvt_Peek_K2Node_InputActionEvent_6
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AProp_C::InpActEvt_Peek_K2Node_InputActionEvent_6(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Prop.Prop_C.InpActEvt_Peek_K2Node_InputActionEvent_6");

	AProp_C_InpActEvt_Peek_K2Node_InputActionEvent_6_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Prop.Prop_C.InpActEvt_MakeTauntingSound_K2Node_InputActionEvent_5
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AProp_C::InpActEvt_MakeTauntingSound_K2Node_InputActionEvent_5(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Prop.Prop_C.InpActEvt_MakeTauntingSound_K2Node_InputActionEvent_5");

	AProp_C_InpActEvt_MakeTauntingSound_K2Node_InputActionEvent_5_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Prop.Prop_C.InpActEvt_TogglePerspective_K2Node_InputActionEvent_4
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AProp_C::InpActEvt_TogglePerspective_K2Node_InputActionEvent_4(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Prop.Prop_C.InpActEvt_TogglePerspective_K2Node_InputActionEvent_4");

	AProp_C_InpActEvt_TogglePerspective_K2Node_InputActionEvent_4_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Prop.Prop_C.InpActEvt_HoldProp_K2Node_InputActionEvent_3
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AProp_C::InpActEvt_HoldProp_K2Node_InputActionEvent_3(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Prop.Prop_C.InpActEvt_HoldProp_K2Node_InputActionEvent_3");

	AProp_C_InpActEvt_HoldProp_K2Node_InputActionEvent_3_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Prop.Prop_C.InpActEvt_HoldProp_K2Node_InputActionEvent_2
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AProp_C::InpActEvt_HoldProp_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Prop.Prop_C.InpActEvt_HoldProp_K2Node_InputActionEvent_2");

	AProp_C_InpActEvt_HoldProp_K2Node_InputActionEvent_2_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Prop.Prop_C.InpActEvt_Toggle Outline_K2Node_InputActionEvent_1
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AProp_C::InpActEvt_Toggle_Outline_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Prop.Prop_C.InpActEvt_Toggle Outline_K2Node_InputActionEvent_1");

	AProp_C_InpActEvt_Toggle_Outline_K2Node_InputActionEvent_1_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Prop.Prop_C.InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_2
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AProp_C::InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_2(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Prop.Prop_C.InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_2");

	AProp_C_InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_2_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Prop.Prop_C.InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_1
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AProp_C::InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Prop.Prop_C.InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_1");

	AProp_C_InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_1_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Prop.Prop_C.ReceiveAnyDamage
//		Flags  -> (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
//		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UDamageType*                                 DamageType                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AController*                                 InstigatedBy                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AProp_C::ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Prop.Prop_C.ReceiveAnyDamage");

	AProp_C_ReceiveAnyDamage_Params params {};
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Prop.Prop_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void AProp_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Prop.Prop_C.ReceiveBeginPlay");

	AProp_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Prop.Prop_C.AddDamageToSelf
//		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      FpsCharacter                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AProp_C::AddDamageToSelf(int Damage, class AActor* FpsCharacter)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Prop.Prop_C.AddDamageToSelf");

	AProp_C_AddDamageToSelf_Params params {};
	params.Damage = Damage;
	params.FpsCharacter = FpsCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Prop.Prop_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_80
//		Flags  -> (BlueprintEvent)
// Parameters:
//		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AProp_C::InpAxisEvt_MoveForward_K2Node_InputAxisEvent_80(float AxisValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Prop.Prop_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_80");

	AProp_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_80_Params params {};
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Prop.Prop_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_91
//		Flags  -> (BlueprintEvent)
// Parameters:
//		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AProp_C::InpAxisEvt_MoveRight_K2Node_InputAxisEvent_91(float AxisValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Prop.Prop_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_91");

	AProp_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_91_Params params {};
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Prop.Prop_C.OnOffFlash_Server
//		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               On_                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AProp_C::OnOffFlash_Server(bool On_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Prop.Prop_C.OnOffFlash_Server");

	AProp_C_OnOffFlash_Server_Params params {};
	params.On_ = On_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Prop.Prop_C.OnOffFlash_Multi
//		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               On_                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AProp_C::OnOffFlash_Multi(bool On_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Prop.Prop_C.OnOffFlash_Multi");

	AProp_C_OnOffFlash_Multi_Params params {};
	params.On_ = On_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Prop.Prop_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_41
//		Flags  -> (BlueprintEvent)
// Parameters:
//		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AProp_C::InpAxisEvt_LookUp_K2Node_InputAxisEvent_41(float AxisValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Prop.Prop_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_41");

	AProp_C_InpAxisEvt_LookUp_K2Node_InputAxisEvent_41_Params params {};
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Prop.Prop_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_48
//		Flags  -> (BlueprintEvent)
// Parameters:
//		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AProp_C::InpAxisEvt_Turn_K2Node_InputAxisEvent_48(float AxisValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Prop.Prop_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_48");

	AProp_C_InpAxisEvt_Turn_K2Node_InputAxisEvent_48_Params params {};
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Prop.Prop_C.Server_ControllerPitch
//		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              PitchValue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AProp_C::Server_ControllerPitch(float PitchValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Prop.Prop_C.Server_ControllerPitch");

	AProp_C_Server_ControllerPitch_Params params {};
	params.PitchValue = PitchValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Prop.Prop_C.Controller_Pitch_Multi
//		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              PitchValue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AProp_C::Controller_Pitch_Multi(float PitchValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Prop.Prop_C.Controller_Pitch_Multi");

	AProp_C_Controller_Pitch_Multi_Params params {};
	params.PitchValue = PitchValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Prop.Prop_C.OnLanded
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void AProp_C::OnLanded(const struct FHitResult& Hit)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Prop.Prop_C.OnLanded");

	AProp_C_OnLanded_Params params {};
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Prop.Prop_C.Jump_Server
//		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
void AProp_C::Jump_Server()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Prop.Prop_C.Jump_Server");

	AProp_C_Jump_Server_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Prop.Prop_C.ChangePropMesh
//		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPropList                                   PropInfo                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AProp_C::ChangePropMesh(const struct FPropList& PropInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Prop.Prop_C.ChangePropMesh");

	AProp_C_ChangePropMesh_Params params {};
	params.PropInfo = PropInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Prop.Prop_C.Rotate_Multi
//		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AFPS_PC_C*                                   TriggeredPlayer                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AProp_C::Rotate_Multi(class AFPS_PC_C* TriggeredPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Prop.Prop_C.Rotate_Multi");

	AProp_C_Rotate_Multi_Params params {};
	params.TriggeredPlayer = TriggeredPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Prop.Prop_C.Rotate_Server
//		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              RotationToSync                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AFPS_PC_C*                                   TriggeredPlayer                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AProp_C::Rotate_Server(float RotationToSync, class AFPS_PC_C* TriggeredPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Prop.Prop_C.Rotate_Server");

	AProp_C_Rotate_Server_Params params {};
	params.RotationToSync = RotationToSync;
	params.TriggeredPlayer = TriggeredPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Prop.Prop_C.ClientOnlyRotation
//		Flags  -> (Net, NetClient, BlueprintCallable, BlueprintEvent)
void AProp_C::ClientOnlyRotation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Prop.Prop_C.ClientOnlyRotation");

	AProp_C_ClientOnlyRotation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Prop.Prop_C.InpAxisEvt_MoveBackward_K2Node_InputAxisEvent_2
//		Flags  -> (BlueprintEvent)
// Parameters:
//		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AProp_C::InpAxisEvt_MoveBackward_K2Node_InputAxisEvent_2(float AxisValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Prop.Prop_C.InpAxisEvt_MoveBackward_K2Node_InputAxisEvent_2");

	AProp_C_InpAxisEvt_MoveBackward_K2Node_InputAxisEvent_2_Params params {};
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Prop.Prop_C.InpAxisEvt_MoveLeft_K2Node_InputAxisEvent_4
//		Flags  -> (BlueprintEvent)
// Parameters:
//		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AProp_C::InpAxisEvt_MoveLeft_K2Node_InputAxisEvent_4(float AxisValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Prop.Prop_C.InpAxisEvt_MoveLeft_K2Node_InputAxisEvent_4");

	AProp_C_InpAxisEvt_MoveLeft_K2Node_InputAxisEvent_4_Params params {};
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Prop.Prop_C.PacketDelayStart
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AProp_C::PacketDelayStart()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Prop.Prop_C.PacketDelayStart");

	AProp_C_PacketDelayStart_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Prop.Prop_C.Multi_AnimateHealth
//		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AProp_C::Multi_AnimateHealth(int Damage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Prop.Prop_C.Multi_AnimateHealth");

	AProp_C_Multi_AnimateHealth_Params params {};
	params.Damage = Damage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Prop.Prop_C.AnimateMyHealth
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                from                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                To                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               _Buffer                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AProp_C::AnimateMyHealth(int from, int To, bool _Buffer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Prop.Prop_C.AnimateMyHealth");

	AProp_C_AnimateMyHealth_Params params {};
	params.from = from;
	params.To = To;
	params._Buffer = _Buffer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Prop.Prop_C.ToggleMovementMode
//		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               EnableMovement_                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               Boost_                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AProp_C::ToggleMovementMode(bool EnableMovement_, bool Boost_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Prop.Prop_C.ToggleMovementMode");

	AProp_C_ToggleMovementMode_Params params {};
	params.EnableMovement_ = EnableMovement_;
	params.Boost_ = Boost_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Prop.Prop_C.SyncBasicInfos
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FBasicInfo                                  BasicInfo                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void AProp_C::SyncBasicInfos(const struct FBasicInfo& BasicInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Prop.Prop_C.SyncBasicInfos");

	AProp_C_SyncBasicInfos_Params params {};
	params.BasicInfo = BasicInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Prop.Prop_C.ReceiveDestroyed
//		Flags  -> (Event, Public, BlueprintEvent)
void AProp_C::ReceiveDestroyed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Prop.Prop_C.ReceiveDestroyed");

	AProp_C_ReceiveDestroyed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Prop.Prop_C.Init Booster
//		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               On_                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AProp_C::Init_Booster(bool On_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Prop.Prop_C.Init Booster");

	AProp_C_Init_Booster_Params params {};
	params.On_ = On_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Prop.Prop_C.BoosterMulti
//		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               On_                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AProp_C::BoosterMulti(bool On_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Prop.Prop_C.BoosterMulti");

	AProp_C_BoosterMulti_Params params {};
	params.On_ = On_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Prop.Prop_C.Multi_DestroyEffect
//		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
void AProp_C::Multi_DestroyEffect()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Prop.Prop_C.Multi_DestroyEffect");

	AProp_C_Multi_DestroyEffect_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Prop.Prop_C.DeliverTauntSoundToServer
//		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AProp_C*                                     Prop                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AProp_C::DeliverTauntSoundToServer(class AProp_C* Prop)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Prop.Prop_C.DeliverTauntSoundToServer");

	AProp_C_DeliverTauntSoundToServer_Params params {};
	params.Prop = Prop;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Prop.Prop_C.Drop
//		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void AProp_C::Drop()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Prop.Prop_C.Drop");

	AProp_C_Drop_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Prop.Prop_C.SwitchViewModeLerp
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              from                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              To                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               SetOwnerNoSee                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AProp_C::SwitchViewModeLerp(float from, float To, bool SetOwnerNoSee)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Prop.Prop_C.SwitchViewModeLerp");

	AProp_C_SwitchViewModeLerp_Params params {};
	params.from = from;
	params.To = To;
	params.SetOwnerNoSee = SetOwnerNoSee;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Prop.Prop_C.ReceiveTick
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AProp_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Prop.Prop_C.ReceiveTick");

	AProp_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Prop.Prop_C.GrabServer
//		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AHoldableProp_C*                             Prop                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     GrabLocation                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AProp_C::GrabServer(class AHoldableProp_C* Prop, const struct FVector& GrabLocation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Prop.Prop_C.GrabServer");

	AProp_C_GrabServer_Params params {};
	params.Prop = Prop;
	params.GrabLocation = GrabLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Prop.Prop_C.GrabMulticast
//		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AHoldableProp_C*                             Prop                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     GrabLocation                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AProp_C::GrabMulticast(class AHoldableProp_C* Prop, const struct FVector& GrabLocation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Prop.Prop_C.GrabMulticast");

	AProp_C_GrabMulticast_Params params {};
	params.Prop = Prop;
	params.GrabLocation = GrabLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Prop.Prop_C.DropServer
//		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void AProp_C::DropServer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Prop.Prop_C.DropServer");

	AProp_C_DropServer_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Prop.Prop_C.CustomSwitchViewMode
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AProp_C::CustomSwitchViewMode()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Prop.Prop_C.CustomSwitchViewMode");

	AProp_C_CustomSwitchViewMode_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Prop.Prop_C.OnAsyncLineTraced
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     Handle                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		TArray<struct FHitResult>                          outHits                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
void AProp_C::OnAsyncLineTraced(const struct FString& Handle, TArray<struct FHitResult> outHits)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Prop.Prop_C.OnAsyncLineTraced");

	AProp_C_OnAsyncLineTraced_Params params {};
	params.Handle = Handle;
	params.outHits = outHits;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Prop.Prop_C.OnAsyncLineTraced(Particle)
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     Handle                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		TArray<struct FHitResult>                          outHits                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
void AProp_C::OnAsyncLineTraced_Particle_(const struct FString& Handle, TArray<struct FHitResult> outHits)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Prop.Prop_C.OnAsyncLineTraced(Particle)");

	AProp_C_OnAsyncLineTraced_Particle__Params params {};
	params.Handle = Handle;
	params.outHits = outHits;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Prop.Prop_C.Jump_Multi
//		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void AProp_C::Jump_Multi()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Prop.Prop_C.Jump_Multi");

	AProp_C_Jump_Multi_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Prop.Prop_C.Cough_Server
//		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
void AProp_C::Cough_Server()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Prop.Prop_C.Cough_Server");

	AProp_C_Cough_Server_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Prop.Prop_C.Cough_Multi
//		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
void AProp_C::Cough_Multi()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Prop.Prop_C.Cough_Multi");

	AProp_C_Cough_Multi_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Prop.Prop_C.SyncCashInfo
//		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FSCashItemsGameInfo                         CashInfo                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AProp_C::SyncCashInfo(const struct FSCashItemsGameInfo& CashInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Prop.Prop_C.SyncCashInfo");

	AProp_C_SyncCashInfo_Params params {};
	params.CashInfo = CashInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Prop.Prop_C.OnFreezePressed
//		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
void AProp_C::OnFreezePressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Prop.Prop_C.OnFreezePressed");

	AProp_C_OnFreezePressed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Prop.Prop_C.StealthView_On
//		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTransform                                  CurrentCameraTransform__PropOnly_                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
void AProp_C::StealthView_On(const struct FTransform& CurrentCameraTransform__PropOnly_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Prop.Prop_C.StealthView_On");

	AProp_C_StealthView_On_Params params {};
	params.CurrentCameraTransform__PropOnly_ = CurrentCameraTransform__PropOnly_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Prop.Prop_C.ToggleOriginalMovement?
//		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Enable_                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AProp_C::ToggleOriginalMovement_(bool Enable_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Prop.Prop_C.ToggleOriginalMovement?");

	AProp_C_ToggleOriginalMovement__Params params {};
	params.Enable_ = Enable_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Prop.Prop_C.ReceivePossessed
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class AController*                                 NewController                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AProp_C::ReceivePossessed(class AController* NewController)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Prop.Prop_C.ReceivePossessed");

	AProp_C_ReceivePossessed_Params params {};
	params.NewController = NewController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Prop.Prop_C.EnableInputOnClient
//		Flags  -> (Net, NetClient, BlueprintCallable, BlueprintEvent)
void AProp_C::EnableInputOnClient()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Prop.Prop_C.EnableInputOnClient");

	AProp_C_EnableInputOnClient_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Prop.Prop_C.ExecuteUbergraph_Prop
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AProp_C::ExecuteUbergraph_Prop(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Prop.Prop_C.ExecuteUbergraph_Prop");

	AProp_C_ExecuteUbergraph_Prop_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
