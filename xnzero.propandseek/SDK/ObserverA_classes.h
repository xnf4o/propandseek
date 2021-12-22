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

// BlueprintGeneratedClass ObserverA.ObserverA_C
// 0x01F0 (FullSize[0x0938] - InheritedSize[0x0748])
class AObserverA_C : public ACharacter
{
public:
	unsigned char                                      UnknownData_VP48[0x8];                                     // 0x0748(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0750(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                      SkeletalMesh;                                              // 0x0758(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                            Widget;                                                    // 0x0760(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        StaticMesh;                                                // 0x0768(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                            Camera;                                                    // 0x0770(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpringArmComponent*                         SpringArm;                                                 // 0x0778(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                           DetectProps;                                               // 0x0780(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USmoothSync*                                 SmoothSync;                                                // 0x0788(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_0_Value_BB6CCF864090BF4714754DBC7C9771F4;         // 0x0790(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_0__Direction_BB6CCF864090BF4714754DBC7C9771F4;    // 0x0794(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_ZWIY[0x3];                                     // 0x0795(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_1;                                                // 0x0798(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ViewTargetFollower_Value_A25F33E64DB572C6054D7E9DCFAAAEFE; // 0x07A0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             ViewTargetFollower__Direction_A25F33E64DB572C6054D7E9DCFAAAEFE; // 0x07A4(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_HO71[0x3];                                     // 0x07A5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          ViewTargetFollower;                                        // 0x07A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WheelDownLerp_Value_E767EDF84705F3B792E048B583446F1F;      // 0x07B0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             WheelDownLerp__Direction_E767EDF84705F3B792E048B583446F1F; // 0x07B4(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_3EAL[0x3];                                     // 0x07B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          WheelDownLerp;                                             // 0x07B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MoveForward_1;                                             // 0x07C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MoveRight_1;                                               // 0x07C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CanSendPkt_;                                               // 0x07C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Visible_;                                                  // 0x07C9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_PFXD[0x2];                                     // 0x07CA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                BeginplayLoopLimit;                                        // 0x07CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                              AllPlayerActors;                                           // 0x07D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	int                                                SwitchIndex;                                               // 0x07E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_NJG6[0x4];                                     // 0x07E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AProp_C*                                     CurrentViewingProp;                                        // 0x07E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CurrentThumbsUpCount;                                      // 0x07F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_3VKY[0x4];                                     // 0x07F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       ThumbedUpPlayer;                                           // 0x07F8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AProp_C*                                     PropToCompliment;                                          // 0x0810(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                              ViewTargets;                                               // 0x0818(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	int                                                ViewTargetIndex;                                           // 0x0828(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_8SDL[0x4];                                     // 0x082C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      CurrentViewTarget;                                         // 0x0830(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsViewingHunter_;                                          // 0x0838(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_K1NA[0x3];                                     // 0x0839(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TempTargetArmLength;                                       // 0x083C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TempTargetArmValue;                                        // 0x0840(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_Y3RK[0x4];                                     // 0x0844(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                ViewTargetTimer;                                           // 0x0848(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     PreviousViewTargetLocation;                                // 0x0850(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     CurrentViewTargetLocation;                                 // 0x085C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SavedTargetArmLength;                                      // 0x0868(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_QXSV[0x4];                                     // 0x086C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBasicInfo                                  BasicInfo;                                                 // 0x0870(0x0028) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, RepNotify, HasGetValueTypeHash)
	unsigned char                                      UnknownData_8WRR[0x8];                                     // 0x0898(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FObserverHidden                             ObserverHiddenInGame;                                      // 0x08A0(0x0050) (Edit, BlueprintVisible, Net, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	bool                                               FreecamMode_;                                              // 0x08F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               PressedViewForward_;                                       // 0x08F1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_RGB2[0x2];                                     // 0x08F2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                DefaultSpectatorCharacter;                                 // 0x08F4(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	class AFPS_PC_C*                                   Server_OriginalController;                                 // 0x08F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CanRunFreezePeek_;                                         // 0x0900(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_S0NZ[0x7];                                     // 0x0901(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      ViewingProp;                                               // 0x0908(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     AnchoringLocation;                                         // 0x0910(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_CHCD[0x4];                                     // 0x091C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                DistanceCheckTimer1;                                       // 0x0920(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AFPS_PC_C*                                   MasterController;                                          // 0x0928(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      EndViewingProp;                                            // 0x0930(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass ObserverA.ObserverA_C");
		return ptr;
	}



	void DistanceCheck(bool* Return_);
	void Sync_SpectatorCharacter();
	void OnRep_DefaultSpectatorCharacter();
	void OnRep_Sync_VisibilityToHunter();
	void OnRep_ObserverHiddenInGame();
	void OnRep_BasicInfo();
	void SetToFreeMode();
	void ChangeViewTargets(int Add);
	void CollectViewTargetActors();
	void ToggleController(bool Use_);
	void GM(class AFPS_GM_C** AsFPS_GM);
	void UpdateDisplayThumbsUp(class AProp_C* PropActor, int Count);
	void UpdateBeginOverlap(class AProp_C* OverlappedProp);
	void UpdatePlayerInfo(const struct FPropList& PlayerInfo, int ThumbsUpCount, int CurrentHealth, int MaxHealth, bool AbleToCompliment_, const struct FString& userName, int Alias, const struct FSCashItemsGameInfo& CashInfo);
	void UpdateAdjustSpectatorHiddenGame(bool Visibility);
	void UpdateAdjustSpectatorVisibility(bool Visibility, bool MyVisib);
	void UpperWidget(class USpecUpWidget_C** AsSpec_Up_Widget);
	void PS(class AFPS_PS_C** AsFPS_PS);
	void PC(class AFPS_PC_C** AsFPS_PC);
	void GI(class UGI2_C** AsGI2);
	void WheelDownLerp__FinishedFunc();
	void WheelDownLerp__UpdateFunc();
	void ViewTargetFollower__FinishedFunc();
	void ViewTargetFollower__UpdateFunc();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void InpActEvt_Freeze_K2Node_InputActionEvent_7(const struct FKey& Key);
	void InpActEvt_Peek_K2Node_InputActionEvent_6(const struct FKey& Key);
	void InpActEvt_Compliment_K2Node_InputActionEvent_5(const struct FKey& Key);
	void InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void InpActEvt_LockedViewForward_K2Node_InputActionEvent_4(const struct FKey& Key);
	void InpActEvt_LockedViewReverse_K2Node_InputActionEvent_3(const struct FKey& Key);
	void InpActEvt_FreeCam_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_Toggle_Outline_K2Node_InputActionEvent_1(const struct FKey& Key);
	void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_80(float AxisValue);
	void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_91(float AxisValue);
	void InpAxisEvt_MoveBackward_K2Node_InputAxisEvent_2(float AxisValue);
	void InpAxisEvt_MoveLeft_K2Node_InputAxisEvent_4(float AxisValue);
	void InpAxisEvt_LookUp_K2Node_InputAxisEvent_41(float AxisValue);
	void InpAxisEvt_Turn_K2Node_InputAxisEvent_48(float AxisValue);
	void ReceiveBeginPlay();
	void DelayPkt();
	void BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ToggleHideInGame(bool Visible_, const struct FTransform& Transform);
	void IncrementThumbsUp_Server(class AProp_C* ThumbReceivedPropActor);
	void UpdateThumbsUpDisplay(class AProp_C* PropActor, int Count);
	void ClearPropInfo();
	void CustomInput_Shoot();
	void ViewTargetTick();
	void InpAxisEvt_MoveUp_K2Node_InputAxisEvent_7(float AxisValue);
	void InpAxisEvt_MoveDown_K2Node_InputAxisEvent_8(float AxisValue);
	void ToggleVisib(bool HasTransform_, const struct FTransform& Transform, float SpringArmLength);
	void SyncBasicInfos(const struct FBasicInfo& BasicInfo);
	void ToggleVisib_Multi(bool HasTransform_, const struct FTransform& Transform, float SpringArmLength);
	void ArmLengthServer(float from, float To);
	void ArmLengthMulti(float from, float To);
	void StealthView_Off();
	void StealthView_Freeze_Off();
	void StealthView_Off_NoNotify();
	void ResetLocation();
	void DistanceCheckTimer();
	void InitDistanceCheck();
	void ResetLocation_Multi();
	void ReceivePossessed(class AController* NewController);
	void EnableInputOnClient();
	void ExecuteUbergraph_ObserverA(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
