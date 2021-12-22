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

// BlueprintGeneratedClass FPS_PC.FPS_PC_C
// 0x0328 (FullSize[0x09A0] - InheritedSize[0x0678])
class AFPS_PC_C : public APlayerController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0678(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              TotalScoreAnimTimeline_Xp_378AD0A9499302DAF317D4997D4787A2; // 0x0680(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             TotalScoreAnimTimeline__Direction_378AD0A9499302DAF317D4997D4787A2; // 0x0684(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_KZQP[0x3];                                     // 0x0685(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          TotalScoreAnimTimeline;                                    // 0x0688(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ScoreAnimTimeline_Xp_9DE85AFE4F87C99831FB22BB94A9B7EB;     // 0x0690(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             ScoreAnimTimeline__Direction_9DE85AFE4F87C99831FB22BB94A9B7EB; // 0x0694(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_HEBX[0x3];                                     // 0x0695(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          ScoreAnimTimeline;                                         // 0x0698(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              GoldAnimTimeline_Gold_D063E93A429104F3A1A845A159E14C69;    // 0x06A0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             GoldAnimTimeline__Direction_D063E93A429104F3A1A845A159E14C69; // 0x06A4(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_04VK[0x3];                                     // 0x06A5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          GoldAnimTimeline;                                          // 0x06A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              XpAnimTimeline_Xp_64A0745141B89D8A581FAEA97055D98E;        // 0x06B0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             XpAnimTimeline__Direction_64A0745141B89D8A581FAEA97055D98E; // 0x06B4(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_TCJY[0x3];                                     // 0x06B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          XpAnimTimeline;                                            // 0x06B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LerpGoldCoin_Value_693FA2354273E90B448259AC98BE6844;       // 0x06C0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             LerpGoldCoin__Direction_693FA2354273E90B448259AC98BE6844;  // 0x06C4(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_VDYK[0x3];                                     // 0x06C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          LerpGoldCoin;                                              // 0x06C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LerpExp_Value_259F9D9E487B48B5789DB5BA966AFDB1;            // 0x06D0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             LerpExp__Direction_259F9D9E487B48B5789DB5BA966AFDB1;       // 0x06D4(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_VC4F[0x3];                                     // 0x06D5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          LerpExp;                                                   // 0x06D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LerpHealth_Value_FA675C0F44A194752794D3A46EB2BA5D;         // 0x06E0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             LerpHealth__Direction_FA675C0F44A194752794D3A46EB2BA5D;    // 0x06E4(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_I2Y0[0x3];                                     // 0x06E5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          LerpHealth;                                                // 0x06E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameplayUMG_C*                              GameplayUMG;                                               // 0x06F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FPlayerInfoGame>                     CurrentPlayerInfo;                                         // 0x06F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               isHunter_;                                                 // 0x0708(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	unsigned char                                      UnknownData_R6JD[0x7];                                     // 0x0709(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  PawnTransform_Death_;                                      // 0x0710(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FTransform                                  PawnTransform_Stealth_;                                    // 0x0740(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FTransform                                  StartTransform;                                            // 0x0770(0x0030) (Edit, BlueprintVisible, Net, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UPropSelectionUMG_C*                         PropSelection;                                             // 0x07A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AProp_C*                                     PropObject;                                                // 0x07A8(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	class AFPS_Character2_C*                           HunterObject;                                              // 0x07B0(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsInvolvedInGame_;                                         // 0x07B8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_W49B[0x7];                                     // 0x07B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UFinalScreen_C*                              FinalScreenUMG;                                            // 0x07C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsChatFocused_;                                            // 0x07C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsDead_;                                                   // 0x07C9(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               GameStarted_;                                              // 0x07CA(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ScreenShotMode_;                                           // 0x07CB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               SettingsOpen;                                              // 0x07CC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ServerReady_;                                              // 0x07CD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_AGPQ[0x2];                                     // 0x07CE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ServerDelayTime;                                           // 0x07D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CanSendChat_;                                              // 0x07D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_IZ86[0x3];                                     // 0x07D5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     playerSessionId;                                           // 0x07D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     AuthSteamID;                                               // 0x07E8(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class UAudioComponent*                             OnFireMusic;                                               // 0x07F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             StartMusic;                                                // 0x0800(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             Ambience;                                                  // 0x0808(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ObserverVisibility;                                        // 0x0810(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Check_CanPeek;                                             // 0x0811(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_CF16[0x6];                                     // 0x0812(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AObserverA_C*                                ObserverAReference;                                        // 0x0818(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Check_CanFreeze;                                           // 0x0820(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               NoFreezePenalty;                                           // 0x0821(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsBottomInfoMine_;                                         // 0x0822(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               SendPkt_;                                                  // 0x0823(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int                                                PropWin;                                                   // 0x0824(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                HunterWin;                                                 // 0x0828(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Sync_CanCompliment_;                                       // 0x082C(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_FMHV[0x3];                                     // 0x082D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Ranking1;                                                  // 0x0830(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     Ranking2;                                                  // 0x0840(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     Ranking3;                                                  // 0x0850(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<int>                                        DebugString;                                               // 0x0860(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     DebugString2;                                              // 0x0870(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FDateTime                                   KickTrig;                                                  // 0x0880(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                               EnableKickPlayer_;                                         // 0x0888(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_UR9I[0x7];                                     // 0x0889(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                KickTimer;                                                 // 0x0890(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int                                                HealthFrom;                                                // 0x0898(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                HealthTo;                                                  // 0x089C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ExpFrom;                                                   // 0x08A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ExpTo;                                                     // 0x08A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                GoldCoinFrom;                                              // 0x08A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                GoldCoinTo;                                                // 0x08AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSExpGoldCoin                               ExpGoldCoin;                                               // 0x08B0(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	bool                                               Participated_;                                             // 0x08B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_5KHP[0x7];                                     // 0x08B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     userName;                                                  // 0x08C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class UAudioComponent*                             PropSelectionBGM;                                          // 0x08D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               PenaltyApplied_;                                           // 0x08D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               AllowPropDestroyEffect_;                                   // 0x08D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_PLF3[0x2];                                     // 0x08DA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                NewRanking;                                                // 0x08DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NewScore;                                                  // 0x08E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSCashItemsGameInfo                         CashItemGameInfo;                                          // 0x08E4(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_USXY[0x4];                                     // 0x08EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                MainboardTimer;                                            // 0x08F0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int                                                Countdown;                                                 // 0x08F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReadyForGame_;                                             // 0x08FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               BoostTime_;                                                // 0x08FD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_CIXP[0x2];                                     // 0x08FE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                GameWaitTimer;                                             // 0x0900(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int                                                WaitTimeSec;                                               // 0x0908(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               WaitingForGameToStart_;                                    // 0x090C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_YHC6[0x3];                                     // 0x090D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                NextRoundWait;                                             // 0x0910(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                HunterWaitTimeSec;                                         // 0x0914(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                                HunterWaitTimer;                                           // 0x0918(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                               BurningTime_;                                              // 0x0920(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ForceKick_;                                                // 0x0921(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               VotekickTime_;                                             // 0x0922(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               SyncWaitingPlayerNumber;                                   // 0x0923(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_D8CC[0x4];                                     // 0x0924(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundBase*                                  TauntSound;                                                // 0x0928(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsIdle_;                                                   // 0x0930(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_B2VF[0x7];                                     // 0x0931(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                KickCheckTimer;                                            // 0x0938(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int                                                KickCountVar;                                              // 0x0940(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_YYTE[0x4];                                     // 0x0944(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AHoldableProp_C*                             StoredPhysicsPropActor;                                    // 0x0948(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MyDefaultExp_ForDisplay_;                                  // 0x0950(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MyDefaultGoldCoin;                                         // 0x0954(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Server_IsKicked_;                                          // 0x0958(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               BlockToggleOutline_;                                       // 0x0959(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_51G0[0x2];                                     // 0x095A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MyVotekickTicket;                                          // 0x095C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Server_Accumulated_Gold;                                   // 0x0960(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Server_Accumulated_Exp;                                    // 0x0964(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ToggleOutline;                                             // 0x0968(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_99A7[0x7];                                     // 0x0969(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  Transform;                                                 // 0x0970(0x0030) (Edit, BlueprintVisible, Net, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass FPS_PC.FPS_PC_C");
		return ptr;
	}



	void UpdateKillFeeds(TArray<struct FString>* Killed, TArray<bool> IsKillerHunter_, TArray<struct FString>* Destroyed, TArray<bool>* IsDestroyedHunter_);
	void DeleteAllActors();
	void SyncDefaultExpGolds(const struct FUWorksSteamID& SteamID);
	void OnHoldablePropDetected_Aim_(bool Detected_);
	void OnHoldablePropDetected_ComponentProp_(class AHoldableProp_C* PhysicsProp, bool Detected_);
	void CancelChat();
	void UpdateWaitTime_Beginplay(bool* Reached0_);
	void UpdateHunterWaitTime(bool* Reached0_);
	void RunFocusMode();
	void OnRep_NewRanking();
	void DestroyAllActors();
	void ProcessGameSessionData();
	void UnfreezeWhen2_00(int Time);
	void UpdateRankingWidget(const struct FString& Ranking1SteamID);
	void OnRep_ExpGoldCoin();
	void ToggleBottomInfo(bool ShowMine_, bool isHunter_);
	void AnimateHealed(int Heal);
	void AnimateDamaged(int Damage);
	void KickedReasonSave(const struct FString& KickedReason);
	void ToggleKick(bool Kick_);
	void KickTimerFunction();
	void OnRep_PropObject();
	void DeleteAll();
	void UpdateAllActorVisibility(bool HunterVisibility, bool MyHunterVisibility, TEnumAsByte<EOutlineEffects_EOutlineEffects> HunterOutline, TEnumAsByte<EOutlineEffects_EOutlineEffects> MyHunterOutline, bool PropVIsib, bool MyPropVisib, TEnumAsByte<EOutlineEffects_EOutlineEffects> PropOutline, TEnumAsByte<EOutlineEffects_EOutlineEffects> MyPropOutline, bool PropIndicatorParticle, bool ObserverVisib);
	void CrosshairVisibility(bool Visible_);
	void MuteWhenRoundsEnd__OnFireMusic_();
	void MuteWhenRoundsEnd__Ambience_();
	void MuteWhenRoundsEnd__StartMusic_();
	void EndingTimeLeftVoice(int Sec);
	void _2ndMorphVoice(int Sec);
	void AdjustOptions();
	void SetHunterVisibility(class AFPS_Character2_C* HUNTER, bool Visibility);
	void SetPropVisibility(class AProp_C* Prop, bool Visibility);
	void OnRep_IsHunter_();
	void ChangeChatMode_NoServer();
	void OnChatPressed();
	void UpdateAlivePropHunterAmount(int* Prop, int* HUNTER);
	void UpdatePlayerState_Sort_(TArray<struct FPlayerInfoGame>* PlayerInfos1);
	void PropSelection_RetrieveData(const struct FPropList& PropInfo);
	void PropSelection_Start();
	void SortScore_Ranking_(TArray<struct FPlayerInfoGame>* Array, TArray<struct FPlayerInfoGame>* RankingSorted, bool* _0_length_);
	void GI(class UGI2_C** AsGI2);
	void SyncMainboard_Alives_(TArray<struct FSPlayerInfo>* AliveProps, TArray<struct FSPlayerInfo>* AliveHunters);
	void PS(class AFPS_PS_C** AsFPS_PS);
	void GM(class AFPS_GM_C** AsFPS_GM);
	void RemoveAllScorebars();
	void SortScore(TArray<struct FSPlayerInfo>* Array, TArray<struct FSPlayerInfo>* SortedArray, bool* _0_length_);
	void UpdateWaitTime(bool* Reached0_);
	void WidgetCreation();
	void XpAnimTimeline__FinishedFunc();
	void XpAnimTimeline__UpdateFunc();
	void GoldAnimTimeline__FinishedFunc();
	void GoldAnimTimeline__UpdateFunc();
	void ScoreAnimTimeline__FinishedFunc();
	void ScoreAnimTimeline__UpdateFunc();
	void TotalScoreAnimTimeline__FinishedFunc();
	void TotalScoreAnimTimeline__UpdateFunc();
	void LerpHealth__FinishedFunc();
	void LerpHealth__UpdateFunc();
	void LerpExp__FinishedFunc();
	void LerpExp__UpdateFunc();
	void LerpGoldCoin__FinishedFunc();
	void LerpGoldCoin__UpdateFunc();
	void InpActEvt_Chat_K2Node_InputActionEvent_6(const struct FKey& Key);
	void InpActEvt_F1_K2Node_InputKeyEvent_4(const struct FKey& Key);
	void InpActEvt_F1_K2Node_InputKeyEvent_3(const struct FKey& Key);
	void InpActEvt_F2_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_F2_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void InpActEvt_Back_K2Node_InputActionEvent_5(const struct FKey& Key);
	void InpActEvt_View_K2Node_InputActionEvent_4(const struct FKey& Key);
	void InpActEvt_View_K2Node_InputActionEvent_3(const struct FKey& Key);
	void InpActEvt_VoteYes_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_VoteNo_K2Node_InputActionEvent_1(const struct FKey& Key);
	void OnAuthFinished();
	void OnGetAllLobbies();
	void OnGetAllGames();
	void OnProcessReady();
	void _01XpAnim(int StartXp_Display_, int FinalXp_Display_, int EarnedXp_Display_);
	void _02GoldAnim(int StartG, int FinalG, int EarnedG);
	void _03EarnedScoreAnim(int EarnedAmount);
	void _04TotalScoreAnim(int StartS, int FinalS);
	void _05OfficialRankingAnim();
	void UpdateRankingScore(int Ranking, int Score);
	void _00XpAnimInit(int StartXp_Display_, int EarnedXp_Display_);
	void ReceiveBeginPlay();
	void Init_CountDownWaitTime(int Seconds);
	void Bind_CountDownTimer();
	void UpdatePlayerState_Scoreboard_(class AFPS_PC_C* Target, TArray<struct FPlayerInfoGame> PlayerInfos);
	void UpdateRound(int CurrentRound, int MaxRound);
	void UpdateWinSide(int PropWin, int HunterWin);
	void SendChatToServer(const struct FText& Message, TEnumAsByte<EChatMode_EChatMode> MyChatMode);
	void DisplayChat(const struct FString& userName, const struct FText& Message, TEnumAsByte<EChatMode_EChatMode> ChatMode, bool IsHunter, const struct FSlateColor& Color);
	void UpdateWinLose(bool HunterWon_, bool IsHunter, int Update_Win_Prop, int Update_Win_Hunter, int NextRoundWaitTime);
	void JoinLobbyClient();
	void PropSelectionStart_Client();
	void DebugReceiver(const struct FString& Message, bool Success);
	void UpdateFinalboard(TArray<struct FPlayerInfoGame> PlayerScores);
	void UpdateKillFeed(const struct FString& Killed, bool IsKillerHunter_, const struct FString& Destroyed, bool IsDestroyedHunter_);
	void MainNoti_01_SelfDamage(int DamageAmount);
	void MainNoti_02_YouEliminated(const struct FString& KilledUser, int ObtainedScore);
	void MainNoti_03_YouWereEliminatedBy(const struct FString& KilledMeUser, int LostScore);
	void MainNoti_04_SelfKilled(int LostScore);
	void MainNoti_05_AddHealth(int AddedHP);
	void MainNoti_06_DamagedBy(const struct FString& userName, int ReceivedDamage);
	void ChangeChatModeClient();
	void PropVisibility(class AProp_C* Prop, bool Visibility);
	void HunterVisibility(class AFPS_Character2_C* HUNTER, bool Visibility);
	void NotifyBurningTime();
	void Beginplay_Sounds();
	void StartVoice_OnlyProp(int Sec);
	void PlayStartMusic();
	void UpdatePropNoti_Freezing(bool FreezingOn_);
	void ResetJumpCount();
	void PacketDelayStart();
	void PacketDelayEnd();
	void SendChatToServerClient(const struct FText& Message, TEnumAsByte<EChatMode_EChatMode> ChatMode, class UChatSystemGame_C* ChatWidget);
	void DelaySendChat();
	void SetPlayerSession(const struct FString& userName, const struct FString& playerSessionId, const struct FSCashItemsGameInfo& CashItemGameInfo, const struct FText& ClientVersion);
	void AddToQueueServer(const struct FString& SteamID, TEnumAsByte<EWhichWorkGame_EWhichWorkGame> Work);
	void GetSteamId_Event();
	void SetSteamId_Event(const struct FString& SteamID);
	void BeginAuthProcess_Event();
	void AuthTicketResponse(const struct FUWorksTicketHandle& AuthTicket, UWorksCore_EUWorksResult Result);
	void AuthTicketOnServer_Event(TArray<unsigned char> Ticket);
	void AuthTicketServerResponse(const struct FUWorksSteamID& SteamID, UWorksCore_EUWorksAuthSessionResponse AuthSessionResponse, const struct FUWorksSteamID& OwnerSteamID);
	void KickClient(const struct FString& KickedReason);
	void Mute_StartMusic();
	void Mute_Ambience();
	void Mute_OnFireMusic();
	void DebugSyncStat();
	void InfoCheck();
	void Debug_ForceStartGame();
	void TogglePropPic(bool Show_);
	void _2ndMorphStartSoundEffect();
	void WinLoseAnnouncer(bool Win_);
	void PeekingNoti(bool On_);
	void EventDeath_Prop_();
	void EventDeath_Hunter_();
	void DelayPkt();
	void DelayFreezePeek();
	void UpdatePropNoti_Peeking(bool PeekingOn_);
	void AnimateMyHealth(int from, int To, bool _Buffer);
	void AnimateMyExp(int from, int To);
	void AnimateMyGoldCoin(int from, int To);
	void DeductGoldCoins(int DeductionAmount);
	void DeductStokens(int DeductionAmount);
	void PlayPropSelectionMusic(bool Stop_);
	void Count();
	void BeginCountDown(int CountDownSec);
	void CountDownWaitTimeTick();
	void Init_CountDownHunterWaitTime(int Seconds);
	void CountDownHunterWaitTimeTick();
	void CheckCurrentServerState();
	void ShowWaitingScreen();
	void KickNoVersionMatch(const struct FText& Server_Version);
	void OnVoteKickButtonPressed(const struct FString& SteamIdToKick, const struct FString& UsernameToKick);
	void ExecuteVoteKickOnServer(class AFPS_PC_C* RequestedPlayer, const struct FString& PlayerToKickSteamID, const struct FString& PlayerToKickUsername);
	void StartVoteKick(const struct FString& userName, const struct FString& SteamID);
	void SendVoteYes();
	void SendVoteNo();
	void BanThisPlayer(class AFPS_PC_C* RequestedPlayer, const struct FString& ToBanSteamID);
	void CustomEvent_1(bool bSuccessful, const struct FString& Content);
	void BanResult(bool Success_, const struct FString& Content);
	void PlayTauntSound(class AProp_C* PropActor, int TauntSoundNumber);
	void InitKickCheck();
	void KickCount();
	void KickStop();
	void PropsToRevertToStatic(TArray<class UPrimitiveComponent*> PropsToRevert);
	void KickOutPlayer();
	void RocketExplosionEffect_Client(const struct FVector& Location);
	void GrenadeExplosionEffect_Client(const struct FVector& Location);
	void UpdateMultipleKillFeeds(TArray<struct FString> Killed, TArray<bool> IsKillerHunter_, TArray<struct FString> Destroyed, TArray<bool> IsDestroyedHunter_);
	void StealthView_Widget_Off(bool Notify_);
	void CheckedValidCurrencyForRerolling(int TrialNumber);
	void RunObserverPossession(const struct FTransform& Transform);
	void RunPropPossession();
	void EventOnPropDestroyed();
	void VotekickClient();
	void SendReportInfoToServer(TEnumAsByte<Ereport_Ereport> ReportType, const struct FString& ReportedSteamID);
	void ExecuteUbergraph_FPS_PC(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
