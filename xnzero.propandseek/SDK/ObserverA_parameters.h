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

// Function ObserverA.ObserverA_C.DistanceCheck
struct AObserverA_C_DistanceCheck_Params
{
	bool                                               Return_;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ObserverA.ObserverA_C.Sync_SpectatorCharacter
struct AObserverA_C_Sync_SpectatorCharacter_Params
{
};

// Function ObserverA.ObserverA_C.OnRep_DefaultSpectatorCharacter
struct AObserverA_C_OnRep_DefaultSpectatorCharacter_Params
{
};

// Function ObserverA.ObserverA_C.OnRep_Sync_VisibilityToHunter
struct AObserverA_C_OnRep_Sync_VisibilityToHunter_Params
{
};

// Function ObserverA.ObserverA_C.OnRep_ObserverHiddenInGame
struct AObserverA_C_OnRep_ObserverHiddenInGame_Params
{
};

// Function ObserverA.ObserverA_C.OnRep_BasicInfo
struct AObserverA_C_OnRep_BasicInfo_Params
{
};

// Function ObserverA.ObserverA_C.SetToFreeMode
struct AObserverA_C_SetToFreeMode_Params
{
};

// Function ObserverA.ObserverA_C.ChangeViewTargets
struct AObserverA_C_ChangeViewTargets_Params
{
	int                                                Add;                                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ObserverA.ObserverA_C.CollectViewTargetActors
struct AObserverA_C_CollectViewTargetActors_Params
{
};

// Function ObserverA.ObserverA_C.ToggleController
struct AObserverA_C_ToggleController_Params
{
	bool                                               Use_;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ObserverA.ObserverA_C.GM
struct AObserverA_C_GM_Params
{
	class AFPS_GM_C*                                   AsFPS_GM;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ObserverA.ObserverA_C.UpdateDisplayThumbsUp
struct AObserverA_C_UpdateDisplayThumbsUp_Params
{
	class AProp_C*                                     PropActor;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Count;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ObserverA.ObserverA_C.UpdateBeginOverlap
struct AObserverA_C_UpdateBeginOverlap_Params
{
	class AProp_C*                                     OverlappedProp;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ObserverA.ObserverA_C.UpdatePlayerInfo
struct AObserverA_C_UpdatePlayerInfo_Params
{
	struct FPropList                                   PlayerInfo;                                                // 0x0000(0x0060)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	int                                                ThumbsUpCount;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CurrentHealth;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxHealth;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               AbleToCompliment_;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     userName;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int                                                Alias;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSCashItemsGameInfo                         CashInfo;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ObserverA.ObserverA_C.UpdateAdjustSpectatorHiddenGame
struct AObserverA_C_UpdateAdjustSpectatorHiddenGame_Params
{
	bool                                               Visibility;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ObserverA.ObserverA_C.UpdateAdjustSpectatorVisibility
struct AObserverA_C_UpdateAdjustSpectatorVisibility_Params
{
	bool                                               Visibility;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               MyVisib;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ObserverA.ObserverA_C.UpperWidget
struct AObserverA_C_UpperWidget_Params
{
	class USpecUpWidget_C*                             AsSpec_Up_Widget;                                          // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ObserverA.ObserverA_C.PS
struct AObserverA_C_PS_Params
{
	class AFPS_PS_C*                                   AsFPS_PS;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ObserverA.ObserverA_C.PC
struct AObserverA_C_PC_Params
{
	class AFPS_PC_C*                                   AsFPS_PC;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ObserverA.ObserverA_C.GI
struct AObserverA_C_GI_Params
{
	class UGI2_C*                                      AsGI2;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ObserverA.ObserverA_C.WheelDownLerp__FinishedFunc
struct AObserverA_C_WheelDownLerp__FinishedFunc_Params
{
};

// Function ObserverA.ObserverA_C.WheelDownLerp__UpdateFunc
struct AObserverA_C_WheelDownLerp__UpdateFunc_Params
{
};

// Function ObserverA.ObserverA_C.ViewTargetFollower__FinishedFunc
struct AObserverA_C_ViewTargetFollower__FinishedFunc_Params
{
};

// Function ObserverA.ObserverA_C.ViewTargetFollower__UpdateFunc
struct AObserverA_C_ViewTargetFollower__UpdateFunc_Params
{
};

// Function ObserverA.ObserverA_C.Timeline_0__FinishedFunc
struct AObserverA_C_Timeline_0__FinishedFunc_Params
{
};

// Function ObserverA.ObserverA_C.Timeline_0__UpdateFunc
struct AObserverA_C_Timeline_0__UpdateFunc_Params
{
};

// Function ObserverA.ObserverA_C.InpActEvt_Freeze_K2Node_InputActionEvent_7
struct AObserverA_C_InpActEvt_Freeze_K2Node_InputActionEvent_7_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function ObserverA.ObserverA_C.InpActEvt_Peek_K2Node_InputActionEvent_6
struct AObserverA_C_InpActEvt_Peek_K2Node_InputActionEvent_6_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function ObserverA.ObserverA_C.InpActEvt_Compliment_K2Node_InputActionEvent_5
struct AObserverA_C_InpActEvt_Compliment_K2Node_InputActionEvent_5_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function ObserverA.ObserverA_C.InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_2
struct AObserverA_C_InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_2_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function ObserverA.ObserverA_C.InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_1
struct AObserverA_C_InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_1_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function ObserverA.ObserverA_C.InpActEvt_LockedViewForward_K2Node_InputActionEvent_4
struct AObserverA_C_InpActEvt_LockedViewForward_K2Node_InputActionEvent_4_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function ObserverA.ObserverA_C.InpActEvt_LockedViewReverse_K2Node_InputActionEvent_3
struct AObserverA_C_InpActEvt_LockedViewReverse_K2Node_InputActionEvent_3_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function ObserverA.ObserverA_C.InpActEvt_FreeCam_K2Node_InputActionEvent_2
struct AObserverA_C_InpActEvt_FreeCam_K2Node_InputActionEvent_2_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function ObserverA.ObserverA_C.InpActEvt_Toggle Outline_K2Node_InputActionEvent_1
struct AObserverA_C_InpActEvt_Toggle_Outline_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function ObserverA.ObserverA_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_80
struct AObserverA_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_80_Params
{
	float                                              AxisValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ObserverA.ObserverA_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_91
struct AObserverA_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_91_Params
{
	float                                              AxisValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ObserverA.ObserverA_C.InpAxisEvt_MoveBackward_K2Node_InputAxisEvent_2
struct AObserverA_C_InpAxisEvt_MoveBackward_K2Node_InputAxisEvent_2_Params
{
	float                                              AxisValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ObserverA.ObserverA_C.InpAxisEvt_MoveLeft_K2Node_InputAxisEvent_4
struct AObserverA_C_InpAxisEvt_MoveLeft_K2Node_InputAxisEvent_4_Params
{
	float                                              AxisValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ObserverA.ObserverA_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_41
struct AObserverA_C_InpAxisEvt_LookUp_K2Node_InputAxisEvent_41_Params
{
	float                                              AxisValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ObserverA.ObserverA_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_48
struct AObserverA_C_InpAxisEvt_Turn_K2Node_InputAxisEvent_48_Params
{
	float                                              AxisValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ObserverA.ObserverA_C.ReceiveBeginPlay
struct AObserverA_C_ReceiveBeginPlay_Params
{
};

// Function ObserverA.ObserverA_C.DelayPkt
struct AObserverA_C_DelayPkt_Params
{
};

// Function ObserverA.ObserverA_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct AObserverA_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bFromSweep;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  SweepResult;                                               // 0x0000(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function ObserverA.ObserverA_C.ToggleHideInGame
struct AObserverA_C_ToggleHideInGame_Params
{
	bool                                               Visible_;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FTransform                                  Transform;                                                 // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
};

// Function ObserverA.ObserverA_C.IncrementThumbsUp_Server
struct AObserverA_C_IncrementThumbsUp_Server_Params
{
	class AProp_C*                                     ThumbReceivedPropActor;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ObserverA.ObserverA_C.UpdateThumbsUpDisplay
struct AObserverA_C_UpdateThumbsUpDisplay_Params
{
	class AProp_C*                                     PropActor;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Count;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ObserverA.ObserverA_C.ClearPropInfo
struct AObserverA_C_ClearPropInfo_Params
{
};

// Function ObserverA.ObserverA_C.CustomInput_Shoot
struct AObserverA_C_CustomInput_Shoot_Params
{
};

// Function ObserverA.ObserverA_C.ViewTargetTick
struct AObserverA_C_ViewTargetTick_Params
{
};

// Function ObserverA.ObserverA_C.InpAxisEvt_MoveUp_K2Node_InputAxisEvent_7
struct AObserverA_C_InpAxisEvt_MoveUp_K2Node_InputAxisEvent_7_Params
{
	float                                              AxisValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ObserverA.ObserverA_C.InpAxisEvt_MoveDown_K2Node_InputAxisEvent_8
struct AObserverA_C_InpAxisEvt_MoveDown_K2Node_InputAxisEvent_8_Params
{
	float                                              AxisValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ObserverA.ObserverA_C.ToggleVisib
struct AObserverA_C_ToggleVisib_Params
{
	bool                                               HasTransform_;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FTransform                                  Transform;                                                 // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              SpringArmLength;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ObserverA.ObserverA_C.SyncBasicInfos
struct AObserverA_C_SyncBasicInfos_Params
{
	struct FBasicInfo                                  BasicInfo;                                                 // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function ObserverA.ObserverA_C.ToggleVisib_Multi
struct AObserverA_C_ToggleVisib_Multi_Params
{
	bool                                               HasTransform_;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FTransform                                  Transform;                                                 // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              SpringArmLength;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ObserverA.ObserverA_C.ArmLengthServer
struct AObserverA_C_ArmLengthServer_Params
{
	float                                              from;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              To;                                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ObserverA.ObserverA_C.ArmLengthMulti
struct AObserverA_C_ArmLengthMulti_Params
{
	float                                              from;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              To;                                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ObserverA.ObserverA_C.StealthView_Off
struct AObserverA_C_StealthView_Off_Params
{
};

// Function ObserverA.ObserverA_C.StealthView&Freeze_Off
struct AObserverA_C_StealthView_Freeze_Off_Params
{
};

// Function ObserverA.ObserverA_C.StealthView_Off_NoNotify
struct AObserverA_C_StealthView_Off_NoNotify_Params
{
};

// Function ObserverA.ObserverA_C.ResetLocation
struct AObserverA_C_ResetLocation_Params
{
};

// Function ObserverA.ObserverA_C.DistanceCheckTimer
struct AObserverA_C_DistanceCheckTimer_Params
{
};

// Function ObserverA.ObserverA_C.InitDistanceCheck
struct AObserverA_C_InitDistanceCheck_Params
{
};

// Function ObserverA.ObserverA_C.ResetLocation_Multi
struct AObserverA_C_ResetLocation_Multi_Params
{
};

// Function ObserverA.ObserverA_C.ReceivePossessed
struct AObserverA_C_ReceivePossessed_Params
{
	class AController*                                 NewController;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ObserverA.ObserverA_C.EnableInputOnClient
struct AObserverA_C_EnableInputOnClient_Params
{
};

// Function ObserverA.ObserverA_C.ExecuteUbergraph_ObserverA
struct AObserverA_C_ExecuteUbergraph_ObserverA_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
