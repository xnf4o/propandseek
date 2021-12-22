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

// Function Prop.Prop_C.ToggleViewPerspective
struct AProp_C_ToggleViewPerspective_Params
{
	bool                                               FirstPerson_;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Notify_;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Prop.Prop_C.OnRep_BasicInfos
struct AProp_C_OnRep_BasicInfos_Params
{
};

// Function Prop.Prop_C.AnimateDamage
struct AProp_C_AnimateDamage_Params
{
	int                                                Damage;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Prop.Prop_C.OnRep_Sync_PropInfo
struct AProp_C_OnRep_Sync_PropInfo_Params
{
};

// Function Prop.Prop_C.OnRep_Sync_thumbsUpCount
struct AProp_C_OnRep_Sync_thumbsUpCount_Params
{
};

// Function Prop.Prop_C.UpdateAdjustPropVisibility
struct AProp_C_UpdateAdjustPropVisibility_Params
{
	bool                                               MyWidgetVisibility;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               WidgetVisibility;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<EOutlineEffects_EOutlineEffects>       MyOutline;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<EOutlineEffects_EOutlineEffects>       Outline;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IndicatorParticle;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Prop.Prop_C.UpperWidgetRef
struct AProp_C_UpperWidgetRef_Params
{
	class UUpperwidget2_C*                             AsUpper_Widget2;                                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Prop.Prop_C.OutlineEffects
struct AProp_C_OutlineEffects_Params
{
	TEnumAsByte<EOutlineEffects_EOutlineEffects>       OutlineType;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Prop.Prop_C.FreezeCollisionWorks
struct AProp_C_FreezeCollisionWorks_Params
{
	bool                                               Freeze_;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Prop.Prop_C.GI
struct AProp_C_GI_Params
{
	class UGI2_C*                                      AsGI2;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Prop.Prop_C.RotationCheck
struct AProp_C_RotationCheck_Params
{
	bool                                               Sync_;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              RotationOutput;                                            // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Prop.Prop_C.RenderPlayerSelectParticle
struct AProp_C_RenderPlayerSelectParticle_Params
{
};

// Function Prop.Prop_C.GM
struct AProp_C_GM_Params
{
	class AFPS_GM_C*                                   AsFPS_GM;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Prop.Prop_C.AmmoVisibility
struct AProp_C_AmmoVisibility_Params
{
};

// Function Prop.Prop_C.PC
struct AProp_C_PC_Params
{
	class AFPS_PC_C*                                   AsFPS_PC;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Prop.Prop_C.PS
struct AProp_C_PS_Params
{
	class AFPS_PS_C*                                   AsFPS_PS;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Prop.Prop_C.LerpTime__FinishedFunc
struct AProp_C_LerpTime__FinishedFunc_Params
{
};

// Function Prop.Prop_C.LerpTime__UpdateFunc
struct AProp_C_LerpTime__UpdateFunc_Params
{
};

// Function Prop.Prop_C.Self_Rotation__FinishedFunc
struct AProp_C_Self_Rotation__FinishedFunc_Params
{
};

// Function Prop.Prop_C.Self_Rotation__UpdateFunc
struct AProp_C_Self_Rotation__UpdateFunc_Params
{
};

// Function Prop.Prop_C.LerpHealth__FinishedFunc
struct AProp_C_LerpHealth__FinishedFunc_Params
{
};

// Function Prop.Prop_C.LerpHealth__UpdateFunc
struct AProp_C_LerpHealth__UpdateFunc_Params
{
};

// Function Prop.Prop_C.SwitchViewModeTL__FinishedFunc
struct AProp_C_SwitchViewModeTL__FinishedFunc_Params
{
};

// Function Prop.Prop_C.SwitchViewModeTL__UpdateFunc
struct AProp_C_SwitchViewModeTL__UpdateFunc_Params
{
};

// Function Prop.Prop_C.LerpStopProp__FinishedFunc
struct AProp_C_LerpStopProp__FinishedFunc_Params
{
};

// Function Prop.Prop_C.LerpStopProp__UpdateFunc
struct AProp_C_LerpStopProp__UpdateFunc_Params
{
};

// Function Prop.Prop_C.ZoomingTimeline__FinishedFunc
struct AProp_C_ZoomingTimeline__FinishedFunc_Params
{
};

// Function Prop.Prop_C.ZoomingTimeline__UpdateFunc
struct AProp_C_ZoomingTimeline__UpdateFunc_Params
{
};

// Function Prop.Prop_C.InpActEvt_Jump_K2Node_InputActionEvent_9
struct AProp_C_InpActEvt_Jump_K2Node_InputActionEvent_9_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Prop.Prop_C.InpActEvt_Freeze_K2Node_InputActionEvent_8
struct AProp_C_InpActEvt_Freeze_K2Node_InputActionEvent_8_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Prop.Prop_C.InpActEvt_Flash_K2Node_InputActionEvent_7
struct AProp_C_InpActEvt_Flash_K2Node_InputActionEvent_7_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Prop.Prop_C.InpActEvt_Peek_K2Node_InputActionEvent_6
struct AProp_C_InpActEvt_Peek_K2Node_InputActionEvent_6_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Prop.Prop_C.InpActEvt_MakeTauntingSound_K2Node_InputActionEvent_5
struct AProp_C_InpActEvt_MakeTauntingSound_K2Node_InputActionEvent_5_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Prop.Prop_C.InpActEvt_TogglePerspective_K2Node_InputActionEvent_4
struct AProp_C_InpActEvt_TogglePerspective_K2Node_InputActionEvent_4_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Prop.Prop_C.InpActEvt_HoldProp_K2Node_InputActionEvent_3
struct AProp_C_InpActEvt_HoldProp_K2Node_InputActionEvent_3_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Prop.Prop_C.InpActEvt_HoldProp_K2Node_InputActionEvent_2
struct AProp_C_InpActEvt_HoldProp_K2Node_InputActionEvent_2_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Prop.Prop_C.InpActEvt_Toggle Outline_K2Node_InputActionEvent_1
struct AProp_C_InpActEvt_Toggle_Outline_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Prop.Prop_C.InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_2
struct AProp_C_InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_2_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Prop.Prop_C.InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_1
struct AProp_C_InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_1_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Prop.Prop_C.ReceiveAnyDamage
struct AProp_C_ReceiveAnyDamage_Params
{
	float                                              Damage;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDamageType*                                 DamageType;                                                // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                                 InstigatedBy;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      DamageCauser;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Prop.Prop_C.ReceiveBeginPlay
struct AProp_C_ReceiveBeginPlay_Params
{
};

// Function Prop.Prop_C.AddDamageToSelf
struct AProp_C_AddDamageToSelf_Params
{
	int                                                Damage;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      FpsCharacter;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Prop.Prop_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_80
struct AProp_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_80_Params
{
	float                                              AxisValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Prop.Prop_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_91
struct AProp_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_91_Params
{
	float                                              AxisValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Prop.Prop_C.OnOffFlash_Server
struct AProp_C_OnOffFlash_Server_Params
{
	bool                                               On_;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Prop.Prop_C.OnOffFlash_Multi
struct AProp_C_OnOffFlash_Multi_Params
{
	bool                                               On_;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Prop.Prop_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_41
struct AProp_C_InpAxisEvt_LookUp_K2Node_InputAxisEvent_41_Params
{
	float                                              AxisValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Prop.Prop_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_48
struct AProp_C_InpAxisEvt_Turn_K2Node_InputAxisEvent_48_Params
{
	float                                              AxisValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Prop.Prop_C.Server_ControllerPitch
struct AProp_C_Server_ControllerPitch_Params
{
	float                                              PitchValue;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Prop.Prop_C.Controller_Pitch_Multi
struct AProp_C_Controller_Pitch_Multi_Params
{
	float                                              PitchValue;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Prop.Prop_C.OnLanded
struct AProp_C_OnLanded_Params
{
	struct FHitResult                                  Hit;                                                       // 0x0000(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function Prop.Prop_C.Jump_Server
struct AProp_C_Jump_Server_Params
{
};

// Function Prop.Prop_C.ChangePropMesh
struct AProp_C_ChangePropMesh_Params
{
	struct FPropList                                   PropInfo;                                                  // 0x0000(0x0060)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Prop.Prop_C.Rotate_Multi
struct AProp_C_Rotate_Multi_Params
{
	class AFPS_PC_C*                                   TriggeredPlayer;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Prop.Prop_C.Rotate_Server
struct AProp_C_Rotate_Server_Params
{
	float                                              RotationToSync;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFPS_PC_C*                                   TriggeredPlayer;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Prop.Prop_C.ClientOnlyRotation
struct AProp_C_ClientOnlyRotation_Params
{
};

// Function Prop.Prop_C.InpAxisEvt_MoveBackward_K2Node_InputAxisEvent_2
struct AProp_C_InpAxisEvt_MoveBackward_K2Node_InputAxisEvent_2_Params
{
	float                                              AxisValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Prop.Prop_C.InpAxisEvt_MoveLeft_K2Node_InputAxisEvent_4
struct AProp_C_InpAxisEvt_MoveLeft_K2Node_InputAxisEvent_4_Params
{
	float                                              AxisValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Prop.Prop_C.PacketDelayStart
struct AProp_C_PacketDelayStart_Params
{
};

// Function Prop.Prop_C.Multi_AnimateHealth
struct AProp_C_Multi_AnimateHealth_Params
{
	int                                                Damage;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Prop.Prop_C.AnimateMyHealth
struct AProp_C_AnimateMyHealth_Params
{
	int                                                from;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                To;                                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               _Buffer;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Prop.Prop_C.ToggleMovementMode
struct AProp_C_ToggleMovementMode_Params
{
	bool                                               EnableMovement_;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Boost_;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Prop.Prop_C.SyncBasicInfos
struct AProp_C_SyncBasicInfos_Params
{
	struct FBasicInfo                                  BasicInfo;                                                 // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function Prop.Prop_C.ReceiveDestroyed
struct AProp_C_ReceiveDestroyed_Params
{
};

// Function Prop.Prop_C.Init Booster
struct AProp_C_Init_Booster_Params
{
	bool                                               On_;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Prop.Prop_C.BoosterMulti
struct AProp_C_BoosterMulti_Params
{
	bool                                               On_;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Prop.Prop_C.Multi_DestroyEffect
struct AProp_C_Multi_DestroyEffect_Params
{
};

// Function Prop.Prop_C.DeliverTauntSoundToServer
struct AProp_C_DeliverTauntSoundToServer_Params
{
	class AProp_C*                                     Prop;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Prop.Prop_C.Drop
struct AProp_C_Drop_Params
{
};

// Function Prop.Prop_C.SwitchViewModeLerp
struct AProp_C_SwitchViewModeLerp_Params
{
	float                                              from;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              To;                                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               SetOwnerNoSee;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Prop.Prop_C.ReceiveTick
struct AProp_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Prop.Prop_C.GrabServer
struct AProp_C_GrabServer_Params
{
	class AHoldableProp_C*                             Prop;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     GrabLocation;                                              // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Prop.Prop_C.GrabMulticast
struct AProp_C_GrabMulticast_Params
{
	class AHoldableProp_C*                             Prop;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     GrabLocation;                                              // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Prop.Prop_C.DropServer
struct AProp_C_DropServer_Params
{
};

// Function Prop.Prop_C.CustomSwitchViewMode
struct AProp_C_CustomSwitchViewMode_Params
{
};

// Function Prop.Prop_C.OnAsyncLineTraced
struct AProp_C_OnAsyncLineTraced_Params
{
	struct FString                                     Handle;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FHitResult>                          outHits;                                                   // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
};

// Function Prop.Prop_C.OnAsyncLineTraced(Particle)
struct AProp_C_OnAsyncLineTraced_Particle__Params
{
	struct FString                                     Handle;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FHitResult>                          outHits;                                                   // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
};

// Function Prop.Prop_C.Jump_Multi
struct AProp_C_Jump_Multi_Params
{
};

// Function Prop.Prop_C.Cough_Server
struct AProp_C_Cough_Server_Params
{
};

// Function Prop.Prop_C.Cough_Multi
struct AProp_C_Cough_Multi_Params
{
};

// Function Prop.Prop_C.SyncCashInfo
struct AProp_C_SyncCashInfo_Params
{
	struct FSCashItemsGameInfo                         CashInfo;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Prop.Prop_C.OnFreezePressed
struct AProp_C_OnFreezePressed_Params
{
};

// Function Prop.Prop_C.StealthView_On
struct AProp_C_StealthView_On_Params
{
	struct FTransform                                  CurrentCameraTransform__PropOnly_;                         // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
};

// Function Prop.Prop_C.ToggleOriginalMovement?
struct AProp_C_ToggleOriginalMovement__Params
{
	bool                                               Enable_;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Prop.Prop_C.ReceivePossessed
struct AProp_C_ReceivePossessed_Params
{
	class AController*                                 NewController;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Prop.Prop_C.EnableInputOnClient
struct AProp_C_EnableInputOnClient_Params
{
};

// Function Prop.Prop_C.ExecuteUbergraph_Prop
struct AProp_C_ExecuteUbergraph_Prop_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
