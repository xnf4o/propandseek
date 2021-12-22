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

// BlueprintGeneratedClass Prop.Prop_C
// 0x029D (FullSize[0x09E5] - InheritedSize[0x0748])
class AProp_C : public ACharacter
{
public:
	unsigned char                                      UnknownData_OLS2[0x8];                                     // 0x0748(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0750(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USmoothSync*                                 SmoothSync;                                                // 0x0758(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAsyncComponent*                             Async;                                                     // 0x0760(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             GrabLocation;                                              // 0x0768(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPhysicsHandleComponent*                     PhysicsHandle;                                             // 0x0770(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    BoostTrail;                                                // 0x0778(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                             GroundPoint;                                               // 0x0780(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                         SpotLight;                                                 // 0x0788(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    MeParticle;                                                // 0x0790(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                            UpperWidget;                                               // 0x0798(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        PropMesh;                                                  // 0x07A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpringArmComponent*                         SpringArm;                                                 // 0x07A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                            Camera;                                                    // 0x07B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              ZoomingTimeline_Value_EE1BB870435F088273EF68BE29818938;    // 0x07B8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             ZoomingTimeline__Direction_EE1BB870435F088273EF68BE29818938; // 0x07BC(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_SRG6[0x3];                                     // 0x07BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          ZoomingTimeline;                                           // 0x07C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LerpStopProp_LerpStop_8D98594F43153956B237DEB37BAA9657;    // 0x07C8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             LerpStopProp__Direction_8D98594F43153956B237DEB37BAA9657;  // 0x07CC(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_JC7B[0x3];                                     // 0x07CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          LerpStopProp;                                              // 0x07D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SwitchViewModeTL_Value_5924E0D04BF6772E0CA3258E8A82DC6A;   // 0x07D8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             SwitchViewModeTL__Direction_5924E0D04BF6772E0CA3258E8A82DC6A; // 0x07DC(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_UBA7[0x3];                                     // 0x07DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          SwitchViewModeTL;                                          // 0x07E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LerpHealth_Value_E204FF894D9FF17B7B8E9FBED00093FC;         // 0x07E8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             LerpHealth__Direction_E204FF894D9FF17B7B8E9FBED00093FC;    // 0x07EC(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_VJ34[0x3];                                     // 0x07ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          LerpHealth;                                                // 0x07F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Self_Rotation_LerpSelf_429ECAE94C484795510A92A2D765BD4D;   // 0x07F8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Self_Rotation__Direction_429ECAE94C484795510A92A2D765BD4D; // 0x07FC(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_53EW[0x3];                                     // 0x07FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Self_Rotation;                                             // 0x0800(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LerpTime_Lerp_5B4F90F84F40B2C473049E96905DC996;            // 0x0808(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             LerpTime__Direction_5B4F90F84F40B2C473049E96905DC996;      // 0x080C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_HLUQ[0x3];                                     // 0x080D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          LerpTime;                                                  // 0x0810(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ControllerPitch;                                           // 0x0818(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PreviousControllerPitch;                                   // 0x081C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BaseTurnRate;                                              // 0x0820(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BaseLookUpRate;                                            // 0x0824(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MoveForward;                                               // 0x0828(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MoveRight;                                                 // 0x082C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PreviousMoveForward;                                       // 0x0830(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PreviousMoveRight;                                         // 0x0834(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_JUOB[0x8];                                     // 0x0838(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  PawnTransform;                                             // 0x0840(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              DefaultCameraDistance;                                     // 0x0870(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_Z4VT[0x4];                                     // 0x0874(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UObject*                                     ActualUpperWidget;                                         // 0x0878(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CurrentRotation;                                           // 0x0880(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PreviousRotation;                                          // 0x0884(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               AllowStealthView_;                                         // 0x0888(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_AVQ9[0x3];                                     // 0x0889(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                JumpCount;                                                 // 0x088C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ServerReady_;                                              // 0x0890(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_UUQL[0x3];                                     // 0x0891(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ServerDelayTime;                                           // 0x0894(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  JumpSound;                                                 // 0x0898(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Server_CurrentHealth;                                      // 0x08A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Server_MaxHealth;                                          // 0x08A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               EnableMovementMode_;                                       // 0x08A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_BLX7[0x3];                                     // 0x08A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Sync_thumbsUpCount;                                        // 0x08AC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	struct FPropList                                   Sync_PropInfo;                                             // 0x08B0(0x0060) (Edit, BlueprintVisible, Net, DisableEditOnInstance, RepNotify, HasGetValueTypeHash)
	bool                                               CanControl___Beginning_;                                   // 0x0910(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_94F9[0x7];                                     // 0x0911(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDateTime                                   KickTrigger;                                               // 0x0918(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int                                                HealthFrom;                                                // 0x0920(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                HealthTo;                                                  // 0x0924(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBasicInfo                                  BasicInfos;                                                // 0x0928(0x0028) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, RepNotify, HasGetValueTypeHash)
	float                                              DefaultWalkSpeed;                                          // 0x0950(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BoostWalkSpeed;                                            // 0x0954(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DefaultJumpHeight;                                         // 0x0958(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BoostJumpHeight;                                           // 0x095C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CanMakeTauntSounds_;                                       // 0x0960(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsInFirstPersonMode_;                                      // 0x0961(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_TJMJ[0x2];                                     // 0x0962(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     GrabbedPropLocation;                                       // 0x0964(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsHoldingProp_;                                            // 0x0970(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               AutoSwitchPerspective_;                                    // 0x0971(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               HighlightPropProp_;                                        // 0x0972(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_WHFG[0x5];                                     // 0x0973(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundBase*                                  BoostJumpSound;                                            // 0x0978(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               TogglePropBoostingSound;                                   // 0x0980(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_6ZWY[0x7];                                     // 0x0981(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AFPS_PC_C*                                   OriginalOwner;                                             // 0x0988(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FSCashItemsGameInfo                         CashItemInfo;                                              // 0x0990(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsFreezing_;                                               // 0x0998(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsBoostTime_;                                              // 0x0999(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               BlockPropRotation_;                                        // 0x099A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_X6LZ[0x5];                                     // 0x099B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  PawnTransform_Death_;                                      // 0x09A0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               CanStealthView_;                                           // 0x09D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_PQ79[0x3];                                     // 0x09D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DefaultZoomPosition;                                       // 0x09D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TempTargetArmValue;                                        // 0x09D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TempTargetArmLength;                                       // 0x09DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SavedTargetArmLength;                                      // 0x09E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsPropDead_;                                               // 0x09E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Prop.Prop_C");
		return ptr;
	}



	void ToggleViewPerspective(bool FirstPerson_, bool Notify_);
	void OnRep_BasicInfos();
	void AnimateDamage(int Damage);
	void OnRep_Sync_PropInfo();
	void OnRep_Sync_thumbsUpCount();
	void UpdateAdjustPropVisibility(bool MyWidgetVisibility, bool WidgetVisibility, TEnumAsByte<EOutlineEffects_EOutlineEffects> MyOutline, TEnumAsByte<EOutlineEffects_EOutlineEffects> Outline, bool IndicatorParticle);
	void UpperWidgetRef(class UUpperwidget2_C** AsUpper_Widget2);
	void OutlineEffects(TEnumAsByte<EOutlineEffects_EOutlineEffects> OutlineType);
	void FreezeCollisionWorks(bool Freeze_);
	void GI(class UGI2_C** AsGI2);
	void RotationCheck(bool* Sync_, float* RotationOutput);
	void RenderPlayerSelectParticle();
	void GM(class AFPS_GM_C** AsFPS_GM);
	void AmmoVisibility();
	void PC(class AFPS_PC_C** AsFPS_PC);
	void PS(class AFPS_PS_C** AsFPS_PS);
	void LerpTime__FinishedFunc();
	void LerpTime__UpdateFunc();
	void Self_Rotation__FinishedFunc();
	void Self_Rotation__UpdateFunc();
	void LerpHealth__FinishedFunc();
	void LerpHealth__UpdateFunc();
	void SwitchViewModeTL__FinishedFunc();
	void SwitchViewModeTL__UpdateFunc();
	void LerpStopProp__FinishedFunc();
	void LerpStopProp__UpdateFunc();
	void ZoomingTimeline__FinishedFunc();
	void ZoomingTimeline__UpdateFunc();
	void InpActEvt_Jump_K2Node_InputActionEvent_9(const struct FKey& Key);
	void InpActEvt_Freeze_K2Node_InputActionEvent_8(const struct FKey& Key);
	void InpActEvt_Flash_K2Node_InputActionEvent_7(const struct FKey& Key);
	void InpActEvt_Peek_K2Node_InputActionEvent_6(const struct FKey& Key);
	void InpActEvt_MakeTauntingSound_K2Node_InputActionEvent_5(const struct FKey& Key);
	void InpActEvt_TogglePerspective_K2Node_InputActionEvent_4(const struct FKey& Key);
	void InpActEvt_HoldProp_K2Node_InputActionEvent_3(const struct FKey& Key);
	void InpActEvt_HoldProp_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_Toggle_Outline_K2Node_InputActionEvent_1(const struct FKey& Key);
	void InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void ReceiveBeginPlay();
	void AddDamageToSelf(int Damage, class AActor* FpsCharacter);
	void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_80(float AxisValue);
	void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_91(float AxisValue);
	void OnOffFlash_Server(bool On_);
	void OnOffFlash_Multi(bool On_);
	void InpAxisEvt_LookUp_K2Node_InputAxisEvent_41(float AxisValue);
	void InpAxisEvt_Turn_K2Node_InputAxisEvent_48(float AxisValue);
	void Server_ControllerPitch(float PitchValue);
	void Controller_Pitch_Multi(float PitchValue);
	void OnLanded(const struct FHitResult& Hit);
	void Jump_Server();
	void ChangePropMesh(const struct FPropList& PropInfo);
	void Rotate_Multi(class AFPS_PC_C* TriggeredPlayer);
	void Rotate_Server(float RotationToSync, class AFPS_PC_C* TriggeredPlayer);
	void ClientOnlyRotation();
	void InpAxisEvt_MoveBackward_K2Node_InputAxisEvent_2(float AxisValue);
	void InpAxisEvt_MoveLeft_K2Node_InputAxisEvent_4(float AxisValue);
	void PacketDelayStart();
	void Multi_AnimateHealth(int Damage);
	void AnimateMyHealth(int from, int To, bool _Buffer);
	void ToggleMovementMode(bool EnableMovement_, bool Boost_);
	void SyncBasicInfos(const struct FBasicInfo& BasicInfo);
	void ReceiveDestroyed();
	void Init_Booster(bool On_);
	void BoosterMulti(bool On_);
	void Multi_DestroyEffect();
	void DeliverTauntSoundToServer(class AProp_C* Prop);
	void Drop();
	void SwitchViewModeLerp(float from, float To, bool SetOwnerNoSee);
	void ReceiveTick(float DeltaSeconds);
	void GrabServer(class AHoldableProp_C* Prop, const struct FVector& GrabLocation);
	void GrabMulticast(class AHoldableProp_C* Prop, const struct FVector& GrabLocation);
	void DropServer();
	void CustomSwitchViewMode();
	void OnAsyncLineTraced(const struct FString& Handle, TArray<struct FHitResult> outHits);
	void OnAsyncLineTraced_Particle_(const struct FString& Handle, TArray<struct FHitResult> outHits);
	void Jump_Multi();
	void Cough_Server();
	void Cough_Multi();
	void SyncCashInfo(const struct FSCashItemsGameInfo& CashInfo);
	void OnFreezePressed();
	void StealthView_On(const struct FTransform& CurrentCameraTransform__PropOnly_);
	void ToggleOriginalMovement_(bool Enable_);
	void ReceivePossessed(class AController* NewController);
	void EnableInputOnClient();
	void ExecuteUbergraph_Prop(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
