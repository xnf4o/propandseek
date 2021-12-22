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
//		Name   -> Function ObserverA.ObserverA_C.DistanceCheck
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Return_                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AObserverA_C::DistanceCheck(bool* Return_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ObserverA.ObserverA_C.DistanceCheck");

	AObserverA_C_DistanceCheck_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return_ != nullptr)
		*Return_ = params.Return_;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ObserverA.ObserverA_C.Sync_SpectatorCharacter
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AObserverA_C::Sync_SpectatorCharacter()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ObserverA.ObserverA_C.Sync_SpectatorCharacter");

	AObserverA_C_Sync_SpectatorCharacter_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ObserverA.ObserverA_C.OnRep_DefaultSpectatorCharacter
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AObserverA_C::OnRep_DefaultSpectatorCharacter()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ObserverA.ObserverA_C.OnRep_DefaultSpectatorCharacter");

	AObserverA_C_OnRep_DefaultSpectatorCharacter_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ObserverA.ObserverA_C.OnRep_Sync_VisibilityToHunter
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AObserverA_C::OnRep_Sync_VisibilityToHunter()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ObserverA.ObserverA_C.OnRep_Sync_VisibilityToHunter");

	AObserverA_C_OnRep_Sync_VisibilityToHunter_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ObserverA.ObserverA_C.OnRep_ObserverHiddenInGame
//		Flags  -> (HasDefaults, BlueprintCallable, BlueprintEvent)
void AObserverA_C::OnRep_ObserverHiddenInGame()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ObserverA.ObserverA_C.OnRep_ObserverHiddenInGame");

	AObserverA_C_OnRep_ObserverHiddenInGame_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ObserverA.ObserverA_C.OnRep_BasicInfo
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AObserverA_C::OnRep_BasicInfo()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ObserverA.ObserverA_C.OnRep_BasicInfo");

	AObserverA_C_OnRep_BasicInfo_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ObserverA.ObserverA_C.SetToFreeMode
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AObserverA_C::SetToFreeMode()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ObserverA.ObserverA_C.SetToFreeMode");

	AObserverA_C_SetToFreeMode_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ObserverA.ObserverA_C.ChangeViewTargets
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Add                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AObserverA_C::ChangeViewTargets(int Add)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ObserverA.ObserverA_C.ChangeViewTargets");

	AObserverA_C_ChangeViewTargets_Params params {};
	params.Add = Add;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ObserverA.ObserverA_C.CollectViewTargetActors
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void AObserverA_C::CollectViewTargetActors()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ObserverA.ObserverA_C.CollectViewTargetActors");

	AObserverA_C_CollectViewTargetActors_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ObserverA.ObserverA_C.ToggleController
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Use_                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AObserverA_C::ToggleController(bool Use_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ObserverA.ObserverA_C.ToggleController");

	AObserverA_C_ToggleController_Params params {};
	params.Use_ = Use_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ObserverA.ObserverA_C.GM
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class AFPS_GM_C*                                   AsFPS_GM                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AObserverA_C::GM(class AFPS_GM_C** AsFPS_GM)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ObserverA.ObserverA_C.GM");

	AObserverA_C_GM_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsFPS_GM != nullptr)
		*AsFPS_GM = params.AsFPS_GM;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ObserverA.ObserverA_C.UpdateDisplayThumbsUp
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AProp_C*                                     PropActor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Count                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AObserverA_C::UpdateDisplayThumbsUp(class AProp_C* PropActor, int Count)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ObserverA.ObserverA_C.UpdateDisplayThumbsUp");

	AObserverA_C_UpdateDisplayThumbsUp_Params params {};
	params.PropActor = PropActor;
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ObserverA.ObserverA_C.UpdateBeginOverlap
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AProp_C*                                     OverlappedProp                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AObserverA_C::UpdateBeginOverlap(class AProp_C* OverlappedProp)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ObserverA.ObserverA_C.UpdateBeginOverlap");

	AObserverA_C_UpdateBeginOverlap_Params params {};
	params.OverlappedProp = OverlappedProp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ObserverA.ObserverA_C.UpdatePlayerInfo
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPropList                                   PlayerInfo                                                 (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
//		int                                                ThumbsUpCount                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                CurrentHealth                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                MaxHealth                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               AbleToCompliment_                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FString                                     userName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		int                                                Alias                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FSCashItemsGameInfo                         CashInfo                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AObserverA_C::UpdatePlayerInfo(const struct FPropList& PlayerInfo, int ThumbsUpCount, int CurrentHealth, int MaxHealth, bool AbleToCompliment_, const struct FString& userName, int Alias, const struct FSCashItemsGameInfo& CashInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ObserverA.ObserverA_C.UpdatePlayerInfo");

	AObserverA_C_UpdatePlayerInfo_Params params {};
	params.PlayerInfo = PlayerInfo;
	params.ThumbsUpCount = ThumbsUpCount;
	params.CurrentHealth = CurrentHealth;
	params.MaxHealth = MaxHealth;
	params.AbleToCompliment_ = AbleToCompliment_;
	params.userName = userName;
	params.Alias = Alias;
	params.CashInfo = CashInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ObserverA.ObserverA_C.UpdateAdjustSpectatorHiddenGame
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Visibility                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AObserverA_C::UpdateAdjustSpectatorHiddenGame(bool Visibility)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ObserverA.ObserverA_C.UpdateAdjustSpectatorHiddenGame");

	AObserverA_C_UpdateAdjustSpectatorHiddenGame_Params params {};
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ObserverA.ObserverA_C.UpdateAdjustSpectatorVisibility
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Visibility                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               MyVisib                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AObserverA_C::UpdateAdjustSpectatorVisibility(bool Visibility, bool MyVisib)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ObserverA.ObserverA_C.UpdateAdjustSpectatorVisibility");

	AObserverA_C_UpdateAdjustSpectatorVisibility_Params params {};
	params.Visibility = Visibility;
	params.MyVisib = MyVisib;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ObserverA.ObserverA_C.UpperWidget
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class USpecUpWidget_C*                             AsSpec_Up_Widget                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AObserverA_C::UpperWidget(class USpecUpWidget_C** AsSpec_Up_Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ObserverA.ObserverA_C.UpperWidget");

	AObserverA_C_UpperWidget_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsSpec_Up_Widget != nullptr)
		*AsSpec_Up_Widget = params.AsSpec_Up_Widget;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ObserverA.ObserverA_C.PS
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class AFPS_PS_C*                                   AsFPS_PS                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AObserverA_C::PS(class AFPS_PS_C** AsFPS_PS)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ObserverA.ObserverA_C.PS");

	AObserverA_C_PS_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsFPS_PS != nullptr)
		*AsFPS_PS = params.AsFPS_PS;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ObserverA.ObserverA_C.PC
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class AFPS_PC_C*                                   AsFPS_PC                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AObserverA_C::PC(class AFPS_PC_C** AsFPS_PC)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ObserverA.ObserverA_C.PC");

	AObserverA_C_PC_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsFPS_PC != nullptr)
		*AsFPS_PC = params.AsFPS_PC;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ObserverA.ObserverA_C.GI
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UGI2_C*                                      AsGI2                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AObserverA_C::GI(class UGI2_C** AsGI2)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ObserverA.ObserverA_C.GI");

	AObserverA_C_GI_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsGI2 != nullptr)
		*AsGI2 = params.AsGI2;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ObserverA.ObserverA_C.WheelDownLerp__FinishedFunc
//		Flags  -> (BlueprintEvent)
void AObserverA_C::WheelDownLerp__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ObserverA.ObserverA_C.WheelDownLerp__FinishedFunc");

	AObserverA_C_WheelDownLerp__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ObserverA.ObserverA_C.WheelDownLerp__UpdateFunc
//		Flags  -> (BlueprintEvent)
void AObserverA_C::WheelDownLerp__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ObserverA.ObserverA_C.WheelDownLerp__UpdateFunc");

	AObserverA_C_WheelDownLerp__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ObserverA.ObserverA_C.ViewTargetFollower__FinishedFunc
//		Flags  -> (BlueprintEvent)
void AObserverA_C::ViewTargetFollower__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ObserverA.ObserverA_C.ViewTargetFollower__FinishedFunc");

	AObserverA_C_ViewTargetFollower__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ObserverA.ObserverA_C.ViewTargetFollower__UpdateFunc
//		Flags  -> (BlueprintEvent)
void AObserverA_C::ViewTargetFollower__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ObserverA.ObserverA_C.ViewTargetFollower__UpdateFunc");

	AObserverA_C_ViewTargetFollower__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ObserverA.ObserverA_C.Timeline_0__FinishedFunc
//		Flags  -> (BlueprintEvent)
void AObserverA_C::Timeline_0__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ObserverA.ObserverA_C.Timeline_0__FinishedFunc");

	AObserverA_C_Timeline_0__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ObserverA.ObserverA_C.Timeline_0__UpdateFunc
//		Flags  -> (BlueprintEvent)
void AObserverA_C::Timeline_0__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ObserverA.ObserverA_C.Timeline_0__UpdateFunc");

	AObserverA_C_Timeline_0__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ObserverA.ObserverA_C.InpActEvt_Freeze_K2Node_InputActionEvent_7
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AObserverA_C::InpActEvt_Freeze_K2Node_InputActionEvent_7(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ObserverA.ObserverA_C.InpActEvt_Freeze_K2Node_InputActionEvent_7");

	AObserverA_C_InpActEvt_Freeze_K2Node_InputActionEvent_7_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ObserverA.ObserverA_C.InpActEvt_Peek_K2Node_InputActionEvent_6
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AObserverA_C::InpActEvt_Peek_K2Node_InputActionEvent_6(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ObserverA.ObserverA_C.InpActEvt_Peek_K2Node_InputActionEvent_6");

	AObserverA_C_InpActEvt_Peek_K2Node_InputActionEvent_6_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ObserverA.ObserverA_C.InpActEvt_Compliment_K2Node_InputActionEvent_5
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AObserverA_C::InpActEvt_Compliment_K2Node_InputActionEvent_5(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ObserverA.ObserverA_C.InpActEvt_Compliment_K2Node_InputActionEvent_5");

	AObserverA_C_InpActEvt_Compliment_K2Node_InputActionEvent_5_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ObserverA.ObserverA_C.InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_2
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AObserverA_C::InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_2(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ObserverA.ObserverA_C.InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_2");

	AObserverA_C_InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_2_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ObserverA.ObserverA_C.InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_1
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AObserverA_C::InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ObserverA.ObserverA_C.InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_1");

	AObserverA_C_InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_1_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ObserverA.ObserverA_C.InpActEvt_LockedViewForward_K2Node_InputActionEvent_4
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AObserverA_C::InpActEvt_LockedViewForward_K2Node_InputActionEvent_4(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ObserverA.ObserverA_C.InpActEvt_LockedViewForward_K2Node_InputActionEvent_4");

	AObserverA_C_InpActEvt_LockedViewForward_K2Node_InputActionEvent_4_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ObserverA.ObserverA_C.InpActEvt_LockedViewReverse_K2Node_InputActionEvent_3
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AObserverA_C::InpActEvt_LockedViewReverse_K2Node_InputActionEvent_3(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ObserverA.ObserverA_C.InpActEvt_LockedViewReverse_K2Node_InputActionEvent_3");

	AObserverA_C_InpActEvt_LockedViewReverse_K2Node_InputActionEvent_3_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ObserverA.ObserverA_C.InpActEvt_FreeCam_K2Node_InputActionEvent_2
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AObserverA_C::InpActEvt_FreeCam_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ObserverA.ObserverA_C.InpActEvt_FreeCam_K2Node_InputActionEvent_2");

	AObserverA_C_InpActEvt_FreeCam_K2Node_InputActionEvent_2_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ObserverA.ObserverA_C.InpActEvt_Toggle Outline_K2Node_InputActionEvent_1
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AObserverA_C::InpActEvt_Toggle_Outline_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ObserverA.ObserverA_C.InpActEvt_Toggle Outline_K2Node_InputActionEvent_1");

	AObserverA_C_InpActEvt_Toggle_Outline_K2Node_InputActionEvent_1_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ObserverA.ObserverA_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_80
//		Flags  -> (BlueprintEvent)
// Parameters:
//		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AObserverA_C::InpAxisEvt_MoveForward_K2Node_InputAxisEvent_80(float AxisValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ObserverA.ObserverA_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_80");

	AObserverA_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_80_Params params {};
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ObserverA.ObserverA_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_91
//		Flags  -> (BlueprintEvent)
// Parameters:
//		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AObserverA_C::InpAxisEvt_MoveRight_K2Node_InputAxisEvent_91(float AxisValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ObserverA.ObserverA_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_91");

	AObserverA_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_91_Params params {};
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ObserverA.ObserverA_C.InpAxisEvt_MoveBackward_K2Node_InputAxisEvent_2
//		Flags  -> (BlueprintEvent)
// Parameters:
//		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AObserverA_C::InpAxisEvt_MoveBackward_K2Node_InputAxisEvent_2(float AxisValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ObserverA.ObserverA_C.InpAxisEvt_MoveBackward_K2Node_InputAxisEvent_2");

	AObserverA_C_InpAxisEvt_MoveBackward_K2Node_InputAxisEvent_2_Params params {};
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ObserverA.ObserverA_C.InpAxisEvt_MoveLeft_K2Node_InputAxisEvent_4
//		Flags  -> (BlueprintEvent)
// Parameters:
//		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AObserverA_C::InpAxisEvt_MoveLeft_K2Node_InputAxisEvent_4(float AxisValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ObserverA.ObserverA_C.InpAxisEvt_MoveLeft_K2Node_InputAxisEvent_4");

	AObserverA_C_InpAxisEvt_MoveLeft_K2Node_InputAxisEvent_4_Params params {};
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ObserverA.ObserverA_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_41
//		Flags  -> (BlueprintEvent)
// Parameters:
//		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AObserverA_C::InpAxisEvt_LookUp_K2Node_InputAxisEvent_41(float AxisValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ObserverA.ObserverA_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_41");

	AObserverA_C_InpAxisEvt_LookUp_K2Node_InputAxisEvent_41_Params params {};
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ObserverA.ObserverA_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_48
//		Flags  -> (BlueprintEvent)
// Parameters:
//		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AObserverA_C::InpAxisEvt_Turn_K2Node_InputAxisEvent_48(float AxisValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ObserverA.ObserverA_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_48");

	AObserverA_C_InpAxisEvt_Turn_K2Node_InputAxisEvent_48_Params params {};
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ObserverA.ObserverA_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void AObserverA_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ObserverA.ObserverA_C.ReceiveBeginPlay");

	AObserverA_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ObserverA.ObserverA_C.DelayPkt
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AObserverA_C::DelayPkt()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ObserverA.ObserverA_C.DelayPkt");

	AObserverA_C_DelayPkt_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ObserverA.ObserverA_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
//		Flags  -> (HasOutParms, BlueprintEvent)
// Parameters:
//		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void AObserverA_C::BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ObserverA.ObserverA_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	AObserverA_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ObserverA.ObserverA_C.ToggleHideInGame
//		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Visible_                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FTransform                                  Transform                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
void AObserverA_C::ToggleHideInGame(bool Visible_, const struct FTransform& Transform)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ObserverA.ObserverA_C.ToggleHideInGame");

	AObserverA_C_ToggleHideInGame_Params params {};
	params.Visible_ = Visible_;
	params.Transform = Transform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ObserverA.ObserverA_C.IncrementThumbsUp_Server
//		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AProp_C*                                     ThumbReceivedPropActor                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AObserverA_C::IncrementThumbsUp_Server(class AProp_C* ThumbReceivedPropActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ObserverA.ObserverA_C.IncrementThumbsUp_Server");

	AObserverA_C_IncrementThumbsUp_Server_Params params {};
	params.ThumbReceivedPropActor = ThumbReceivedPropActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ObserverA.ObserverA_C.UpdateThumbsUpDisplay
//		Flags  -> (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AProp_C*                                     PropActor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Count                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AObserverA_C::UpdateThumbsUpDisplay(class AProp_C* PropActor, int Count)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ObserverA.ObserverA_C.UpdateThumbsUpDisplay");

	AObserverA_C_UpdateThumbsUpDisplay_Params params {};
	params.PropActor = PropActor;
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ObserverA.ObserverA_C.ClearPropInfo
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AObserverA_C::ClearPropInfo()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ObserverA.ObserverA_C.ClearPropInfo");

	AObserverA_C_ClearPropInfo_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ObserverA.ObserverA_C.CustomInput_Shoot
//		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
void AObserverA_C::CustomInput_Shoot()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ObserverA.ObserverA_C.CustomInput_Shoot");

	AObserverA_C_CustomInput_Shoot_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ObserverA.ObserverA_C.ViewTargetTick
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AObserverA_C::ViewTargetTick()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ObserverA.ObserverA_C.ViewTargetTick");

	AObserverA_C_ViewTargetTick_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ObserverA.ObserverA_C.InpAxisEvt_MoveUp_K2Node_InputAxisEvent_7
//		Flags  -> (BlueprintEvent)
// Parameters:
//		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AObserverA_C::InpAxisEvt_MoveUp_K2Node_InputAxisEvent_7(float AxisValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ObserverA.ObserverA_C.InpAxisEvt_MoveUp_K2Node_InputAxisEvent_7");

	AObserverA_C_InpAxisEvt_MoveUp_K2Node_InputAxisEvent_7_Params params {};
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ObserverA.ObserverA_C.InpAxisEvt_MoveDown_K2Node_InputAxisEvent_8
//		Flags  -> (BlueprintEvent)
// Parameters:
//		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AObserverA_C::InpAxisEvt_MoveDown_K2Node_InputAxisEvent_8(float AxisValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ObserverA.ObserverA_C.InpAxisEvt_MoveDown_K2Node_InputAxisEvent_8");

	AObserverA_C_InpAxisEvt_MoveDown_K2Node_InputAxisEvent_8_Params params {};
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ObserverA.ObserverA_C.ToggleVisib
//		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               HasTransform_                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FTransform                                  Transform                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              SpringArmLength                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AObserverA_C::ToggleVisib(bool HasTransform_, const struct FTransform& Transform, float SpringArmLength)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ObserverA.ObserverA_C.ToggleVisib");

	AObserverA_C_ToggleVisib_Params params {};
	params.HasTransform_ = HasTransform_;
	params.Transform = Transform;
	params.SpringArmLength = SpringArmLength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ObserverA.ObserverA_C.SyncBasicInfos
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FBasicInfo                                  BasicInfo                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void AObserverA_C::SyncBasicInfos(const struct FBasicInfo& BasicInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ObserverA.ObserverA_C.SyncBasicInfos");

	AObserverA_C_SyncBasicInfos_Params params {};
	params.BasicInfo = BasicInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ObserverA.ObserverA_C.ToggleVisib_Multi
//		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               HasTransform_                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FTransform                                  Transform                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              SpringArmLength                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AObserverA_C::ToggleVisib_Multi(bool HasTransform_, const struct FTransform& Transform, float SpringArmLength)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ObserverA.ObserverA_C.ToggleVisib_Multi");

	AObserverA_C_ToggleVisib_Multi_Params params {};
	params.HasTransform_ = HasTransform_;
	params.Transform = Transform;
	params.SpringArmLength = SpringArmLength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ObserverA.ObserverA_C.ArmLengthServer
//		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              from                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              To                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AObserverA_C::ArmLengthServer(float from, float To)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ObserverA.ObserverA_C.ArmLengthServer");

	AObserverA_C_ArmLengthServer_Params params {};
	params.from = from;
	params.To = To;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ObserverA.ObserverA_C.ArmLengthMulti
//		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              from                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              To                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AObserverA_C::ArmLengthMulti(float from, float To)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ObserverA.ObserverA_C.ArmLengthMulti");

	AObserverA_C_ArmLengthMulti_Params params {};
	params.from = from;
	params.To = To;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ObserverA.ObserverA_C.StealthView_Off
//		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
void AObserverA_C::StealthView_Off()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ObserverA.ObserverA_C.StealthView_Off");

	AObserverA_C_StealthView_Off_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ObserverA.ObserverA_C.StealthView&Freeze_Off
//		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
void AObserverA_C::StealthView_Freeze_Off()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ObserverA.ObserverA_C.StealthView&Freeze_Off");

	AObserverA_C_StealthView_Freeze_Off_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ObserverA.ObserverA_C.StealthView_Off_NoNotify
//		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
void AObserverA_C::StealthView_Off_NoNotify()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ObserverA.ObserverA_C.StealthView_Off_NoNotify");

	AObserverA_C_StealthView_Off_NoNotify_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ObserverA.ObserverA_C.ResetLocation
//		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
void AObserverA_C::ResetLocation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ObserverA.ObserverA_C.ResetLocation");

	AObserverA_C_ResetLocation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ObserverA.ObserverA_C.DistanceCheckTimer
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AObserverA_C::DistanceCheckTimer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ObserverA.ObserverA_C.DistanceCheckTimer");

	AObserverA_C_DistanceCheckTimer_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ObserverA.ObserverA_C.InitDistanceCheck
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AObserverA_C::InitDistanceCheck()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ObserverA.ObserverA_C.InitDistanceCheck");

	AObserverA_C_InitDistanceCheck_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ObserverA.ObserverA_C.ResetLocation_Multi
//		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
void AObserverA_C::ResetLocation_Multi()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ObserverA.ObserverA_C.ResetLocation_Multi");

	AObserverA_C_ResetLocation_Multi_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ObserverA.ObserverA_C.ReceivePossessed
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class AController*                                 NewController                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AObserverA_C::ReceivePossessed(class AController* NewController)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ObserverA.ObserverA_C.ReceivePossessed");

	AObserverA_C_ReceivePossessed_Params params {};
	params.NewController = NewController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ObserverA.ObserverA_C.EnableInputOnClient
//		Flags  -> (Net, NetClient, BlueprintCallable, BlueprintEvent)
void AObserverA_C::EnableInputOnClient()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ObserverA.ObserverA_C.EnableInputOnClient");

	AObserverA_C_EnableInputOnClient_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ObserverA.ObserverA_C.ExecuteUbergraph_ObserverA
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AObserverA_C::ExecuteUbergraph_ObserverA(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ObserverA.ObserverA_C.ExecuteUbergraph_ObserverA");

	AObserverA_C_ExecuteUbergraph_ObserverA_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
