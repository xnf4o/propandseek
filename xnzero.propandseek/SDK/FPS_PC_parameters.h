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

// Function FPS_PC.FPS_PC_C.UpdateKillFeeds
struct AFPS_PC_C_UpdateKillFeeds_Params
{
	TArray<struct FString>                             Killed;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<bool>                                       IsKillerHunter_;                                           // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FString>                             Destroyed;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<bool>                                       IsDestroyedHunter_;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function FPS_PC.FPS_PC_C.DeleteAllActors
struct AFPS_PC_C_DeleteAllActors_Params
{
};

// Function FPS_PC.FPS_PC_C.SyncDefaultExpGolds
struct AFPS_PC_C_SyncDefaultExpGolds_Params
{
	struct FUWorksSteamID                              SteamID;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function FPS_PC.FPS_PC_C.OnHoldablePropDetected(Aim)
struct AFPS_PC_C_OnHoldablePropDetected_Aim__Params
{
	bool                                               Detected_;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FPS_PC.FPS_PC_C.OnHoldablePropDetected(ComponentProp)
struct AFPS_PC_C_OnHoldablePropDetected_ComponentProp__Params
{
	class AHoldableProp_C*                             PhysicsProp;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Detected_;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FPS_PC.FPS_PC_C.CancelChat
struct AFPS_PC_C_CancelChat_Params
{
};

// Function FPS_PC.FPS_PC_C.UpdateWaitTime_Beginplay
struct AFPS_PC_C_UpdateWaitTime_Beginplay_Params
{
	bool                                               Reached0_;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FPS_PC.FPS_PC_C.UpdateHunterWaitTime
struct AFPS_PC_C_UpdateHunterWaitTime_Params
{
	bool                                               Reached0_;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FPS_PC.FPS_PC_C.RunFocusMode
struct AFPS_PC_C_RunFocusMode_Params
{
};

// Function FPS_PC.FPS_PC_C.OnRep_NewRanking
struct AFPS_PC_C_OnRep_NewRanking_Params
{
};

// Function FPS_PC.FPS_PC_C.DestroyAllActors
struct AFPS_PC_C_DestroyAllActors_Params
{
};

// Function FPS_PC.FPS_PC_C.ProcessGameSessionData
struct AFPS_PC_C_ProcessGameSessionData_Params
{
};

// Function FPS_PC.FPS_PC_C.UnfreezeWhen2:00
struct AFPS_PC_C_UnfreezeWhen2_00_Params
{
	int                                                Time;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_PC.FPS_PC_C.UpdateRankingWidget
struct AFPS_PC_C_UpdateRankingWidget_Params
{
	struct FString                                     Ranking1SteamID;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function FPS_PC.FPS_PC_C.OnRep_ExpGoldCoin
struct AFPS_PC_C_OnRep_ExpGoldCoin_Params
{
};

// Function FPS_PC.FPS_PC_C.ToggleBottomInfo
struct AFPS_PC_C_ToggleBottomInfo_Params
{
	bool                                               ShowMine_;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               isHunter_;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FPS_PC.FPS_PC_C.AnimateHealed
struct AFPS_PC_C_AnimateHealed_Params
{
	int                                                Heal;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_PC.FPS_PC_C.AnimateDamaged
struct AFPS_PC_C_AnimateDamaged_Params
{
	int                                                Damage;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_PC.FPS_PC_C.KickedReasonSave
struct AFPS_PC_C_KickedReasonSave_Params
{
	struct FString                                     KickedReason;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function FPS_PC.FPS_PC_C.ToggleKick
struct AFPS_PC_C_ToggleKick_Params
{
	bool                                               Kick_;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FPS_PC.FPS_PC_C.KickTimerFunction
struct AFPS_PC_C_KickTimerFunction_Params
{
};

// Function FPS_PC.FPS_PC_C.OnRep_PropObject
struct AFPS_PC_C_OnRep_PropObject_Params
{
};

// Function FPS_PC.FPS_PC_C.DeleteAll
struct AFPS_PC_C_DeleteAll_Params
{
};

// Function FPS_PC.FPS_PC_C.UpdateAllActorVisibility
struct AFPS_PC_C_UpdateAllActorVisibility_Params
{
	bool                                               HunterVisibility;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               MyHunterVisibility;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<EOutlineEffects_EOutlineEffects>       HunterOutline;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<EOutlineEffects_EOutlineEffects>       MyHunterOutline;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               PropVIsib;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               MyPropVisib;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<EOutlineEffects_EOutlineEffects>       PropOutline;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<EOutlineEffects_EOutlineEffects>       MyPropOutline;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               PropIndicatorParticle;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ObserverVisib;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FPS_PC.FPS_PC_C.CrosshairVisibility
struct AFPS_PC_C_CrosshairVisibility_Params
{
	bool                                               Visible_;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FPS_PC.FPS_PC_C.MuteWhenRoundsEnd (OnFireMusic)
struct AFPS_PC_C_MuteWhenRoundsEnd__OnFireMusic__Params
{
};

// Function FPS_PC.FPS_PC_C.MuteWhenRoundsEnd (Ambience)
struct AFPS_PC_C_MuteWhenRoundsEnd__Ambience__Params
{
};

// Function FPS_PC.FPS_PC_C.MuteWhenRoundsEnd (StartMusic)
struct AFPS_PC_C_MuteWhenRoundsEnd__StartMusic__Params
{
};

// Function FPS_PC.FPS_PC_C.EndingTimeLeftVoice
struct AFPS_PC_C_EndingTimeLeftVoice_Params
{
	int                                                Sec;                                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_PC.FPS_PC_C.2ndMorphVoice
struct AFPS_PC_C__2ndMorphVoice_Params
{
	int                                                Sec;                                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_PC.FPS_PC_C.AdjustOptions
struct AFPS_PC_C_AdjustOptions_Params
{
};

// Function FPS_PC.FPS_PC_C.SetHunterVisibility
struct AFPS_PC_C_SetHunterVisibility_Params
{
	class AFPS_Character2_C*                           HUNTER;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Visibility;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FPS_PC.FPS_PC_C.SetPropVisibility
struct AFPS_PC_C_SetPropVisibility_Params
{
	class AProp_C*                                     Prop;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Visibility;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FPS_PC.FPS_PC_C.OnRep_IsHunter?
struct AFPS_PC_C_OnRep_IsHunter__Params
{
};

// Function FPS_PC.FPS_PC_C.ChangeChatMode_NoServer
struct AFPS_PC_C_ChangeChatMode_NoServer_Params
{
};

// Function FPS_PC.FPS_PC_C.OnChatPressed
struct AFPS_PC_C_OnChatPressed_Params
{
};

// Function FPS_PC.FPS_PC_C.UpdateAlivePropHunterAmount
struct AFPS_PC_C_UpdateAlivePropHunterAmount_Params
{
	int                                                Prop;                                                      // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                HUNTER;                                                    // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_PC.FPS_PC_C.UpdatePlayerState(Sort)
struct AFPS_PC_C_UpdatePlayerState_Sort__Params
{
	TArray<struct FPlayerInfoGame>                     PlayerInfos1;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function FPS_PC.FPS_PC_C.PropSelection_RetrieveData
struct AFPS_PC_C_PropSelection_RetrieveData_Params
{
	struct FPropList                                   PropInfo;                                                  // 0x0000(0x0060)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function FPS_PC.FPS_PC_C.PropSelection_Start
struct AFPS_PC_C_PropSelection_Start_Params
{
};

// Function FPS_PC.FPS_PC_C.SortScore(Ranking)
struct AFPS_PC_C_SortScore_Ranking__Params
{
	TArray<struct FPlayerInfoGame>                     Array;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FPlayerInfoGame>                     RankingSorted;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	bool                                               _0_length_;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FPS_PC.FPS_PC_C.GI
struct AFPS_PC_C_GI_Params
{
	class UGI2_C*                                      AsGI2;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_PC.FPS_PC_C.SyncMainboard(Alives)
struct AFPS_PC_C_SyncMainboard_Alives__Params
{
	TArray<struct FSPlayerInfo>                        AliveProps;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FSPlayerInfo>                        AliveHunters;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function FPS_PC.FPS_PC_C.PS
struct AFPS_PC_C_PS_Params
{
	class AFPS_PS_C*                                   AsFPS_PS;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_PC.FPS_PC_C.GM
struct AFPS_PC_C_GM_Params
{
	class AFPS_GM_C*                                   AsFPS_GM;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_PC.FPS_PC_C.RemoveAllScorebars
struct AFPS_PC_C_RemoveAllScorebars_Params
{
};

// Function FPS_PC.FPS_PC_C.SortScore
struct AFPS_PC_C_SortScore_Params
{
	TArray<struct FSPlayerInfo>                        Array;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FSPlayerInfo>                        SortedArray;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	bool                                               _0_length_;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FPS_PC.FPS_PC_C.UpdateWaitTime
struct AFPS_PC_C_UpdateWaitTime_Params
{
	bool                                               Reached0_;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FPS_PC.FPS_PC_C.WidgetCreation
struct AFPS_PC_C_WidgetCreation_Params
{
};

// Function FPS_PC.FPS_PC_C.XpAnimTimeline__FinishedFunc
struct AFPS_PC_C_XpAnimTimeline__FinishedFunc_Params
{
};

// Function FPS_PC.FPS_PC_C.XpAnimTimeline__UpdateFunc
struct AFPS_PC_C_XpAnimTimeline__UpdateFunc_Params
{
};

// Function FPS_PC.FPS_PC_C.GoldAnimTimeline__FinishedFunc
struct AFPS_PC_C_GoldAnimTimeline__FinishedFunc_Params
{
};

// Function FPS_PC.FPS_PC_C.GoldAnimTimeline__UpdateFunc
struct AFPS_PC_C_GoldAnimTimeline__UpdateFunc_Params
{
};

// Function FPS_PC.FPS_PC_C.ScoreAnimTimeline__FinishedFunc
struct AFPS_PC_C_ScoreAnimTimeline__FinishedFunc_Params
{
};

// Function FPS_PC.FPS_PC_C.ScoreAnimTimeline__UpdateFunc
struct AFPS_PC_C_ScoreAnimTimeline__UpdateFunc_Params
{
};

// Function FPS_PC.FPS_PC_C.TotalScoreAnimTimeline__FinishedFunc
struct AFPS_PC_C_TotalScoreAnimTimeline__FinishedFunc_Params
{
};

// Function FPS_PC.FPS_PC_C.TotalScoreAnimTimeline__UpdateFunc
struct AFPS_PC_C_TotalScoreAnimTimeline__UpdateFunc_Params
{
};

// Function FPS_PC.FPS_PC_C.LerpHealth__FinishedFunc
struct AFPS_PC_C_LerpHealth__FinishedFunc_Params
{
};

// Function FPS_PC.FPS_PC_C.LerpHealth__UpdateFunc
struct AFPS_PC_C_LerpHealth__UpdateFunc_Params
{
};

// Function FPS_PC.FPS_PC_C.LerpExp__FinishedFunc
struct AFPS_PC_C_LerpExp__FinishedFunc_Params
{
};

// Function FPS_PC.FPS_PC_C.LerpExp__UpdateFunc
struct AFPS_PC_C_LerpExp__UpdateFunc_Params
{
};

// Function FPS_PC.FPS_PC_C.LerpGoldCoin__FinishedFunc
struct AFPS_PC_C_LerpGoldCoin__FinishedFunc_Params
{
};

// Function FPS_PC.FPS_PC_C.LerpGoldCoin__UpdateFunc
struct AFPS_PC_C_LerpGoldCoin__UpdateFunc_Params
{
};

// Function FPS_PC.FPS_PC_C.InpActEvt_Chat_K2Node_InputActionEvent_6
struct AFPS_PC_C_InpActEvt_Chat_K2Node_InputActionEvent_6_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function FPS_PC.FPS_PC_C.InpActEvt_F1_K2Node_InputKeyEvent_4
struct AFPS_PC_C_InpActEvt_F1_K2Node_InputKeyEvent_4_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function FPS_PC.FPS_PC_C.InpActEvt_F1_K2Node_InputKeyEvent_3
struct AFPS_PC_C_InpActEvt_F1_K2Node_InputKeyEvent_3_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function FPS_PC.FPS_PC_C.InpActEvt_F2_K2Node_InputKeyEvent_2
struct AFPS_PC_C_InpActEvt_F2_K2Node_InputKeyEvent_2_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function FPS_PC.FPS_PC_C.InpActEvt_F2_K2Node_InputKeyEvent_1
struct AFPS_PC_C_InpActEvt_F2_K2Node_InputKeyEvent_1_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function FPS_PC.FPS_PC_C.InpActEvt_Back_K2Node_InputActionEvent_5
struct AFPS_PC_C_InpActEvt_Back_K2Node_InputActionEvent_5_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function FPS_PC.FPS_PC_C.InpActEvt_View_K2Node_InputActionEvent_4
struct AFPS_PC_C_InpActEvt_View_K2Node_InputActionEvent_4_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function FPS_PC.FPS_PC_C.InpActEvt_View_K2Node_InputActionEvent_3
struct AFPS_PC_C_InpActEvt_View_K2Node_InputActionEvent_3_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function FPS_PC.FPS_PC_C.InpActEvt_VoteYes_K2Node_InputActionEvent_2
struct AFPS_PC_C_InpActEvt_VoteYes_K2Node_InputActionEvent_2_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function FPS_PC.FPS_PC_C.InpActEvt_VoteNo_K2Node_InputActionEvent_1
struct AFPS_PC_C_InpActEvt_VoteNo_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function FPS_PC.FPS_PC_C.OnAuthFinished
struct AFPS_PC_C_OnAuthFinished_Params
{
};

// Function FPS_PC.FPS_PC_C.OnGetAllLobbies
struct AFPS_PC_C_OnGetAllLobbies_Params
{
};

// Function FPS_PC.FPS_PC_C.OnGetAllGames
struct AFPS_PC_C_OnGetAllGames_Params
{
};

// Function FPS_PC.FPS_PC_C.OnProcessReady
struct AFPS_PC_C_OnProcessReady_Params
{
};

// Function FPS_PC.FPS_PC_C.01XpAnim
struct AFPS_PC_C__01XpAnim_Params
{
	int                                                StartXp_Display_;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FinalXp_Display_;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                EarnedXp_Display_;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_PC.FPS_PC_C.02GoldAnim
struct AFPS_PC_C__02GoldAnim_Params
{
	int                                                StartG;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FinalG;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                EarnedG;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_PC.FPS_PC_C.03EarnedScoreAnim
struct AFPS_PC_C__03EarnedScoreAnim_Params
{
	int                                                EarnedAmount;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_PC.FPS_PC_C.04TotalScoreAnim
struct AFPS_PC_C__04TotalScoreAnim_Params
{
	int                                                StartS;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FinalS;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_PC.FPS_PC_C.05OfficialRankingAnim
struct AFPS_PC_C__05OfficialRankingAnim_Params
{
};

// Function FPS_PC.FPS_PC_C.UpdateRankingScore
struct AFPS_PC_C_UpdateRankingScore_Params
{
	int                                                Ranking;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Score;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_PC.FPS_PC_C.00XpAnimInit
struct AFPS_PC_C__00XpAnimInit_Params
{
	int                                                StartXp_Display_;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                EarnedXp_Display_;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_PC.FPS_PC_C.ReceiveBeginPlay
struct AFPS_PC_C_ReceiveBeginPlay_Params
{
};

// Function FPS_PC.FPS_PC_C.Init_CountDownWaitTime
struct AFPS_PC_C_Init_CountDownWaitTime_Params
{
	int                                                Seconds;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_PC.FPS_PC_C.Bind_CountDownTimer
struct AFPS_PC_C_Bind_CountDownTimer_Params
{
};

// Function FPS_PC.FPS_PC_C.UpdatePlayerState(Scoreboard)
struct AFPS_PC_C_UpdatePlayerState_Scoreboard__Params
{
	class AFPS_PC_C*                                   Target;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FPlayerInfoGame>                     PlayerInfos;                                               // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function FPS_PC.FPS_PC_C.UpdateRound
struct AFPS_PC_C_UpdateRound_Params
{
	int                                                CurrentRound;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxRound;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_PC.FPS_PC_C.UpdateWinSide
struct AFPS_PC_C_UpdateWinSide_Params
{
	int                                                PropWin;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                HunterWin;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_PC.FPS_PC_C.SendChatToServer
struct AFPS_PC_C_SendChatToServer_Params
{
	struct FText                                       Message;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	TEnumAsByte<EChatMode_EChatMode>                   MyChatMode;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_PC.FPS_PC_C.DisplayChat
struct AFPS_PC_C_DisplayChat_Params
{
	struct FString                                     userName;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FText                                       Message;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	TEnumAsByte<EChatMode_EChatMode>                   ChatMode;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsHunter;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FSlateColor                                 Color;                                                     // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function FPS_PC.FPS_PC_C.UpdateWinLose
struct AFPS_PC_C_UpdateWinLose_Params
{
	bool                                               HunterWon_;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsHunter;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                Update_Win_Prop;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Update_Win_Hunter;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NextRoundWaitTime;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_PC.FPS_PC_C.JoinLobbyClient
struct AFPS_PC_C_JoinLobbyClient_Params
{
};

// Function FPS_PC.FPS_PC_C.PropSelectionStart_Client
struct AFPS_PC_C_PropSelectionStart_Client_Params
{
};

// Function FPS_PC.FPS_PC_C.DebugReceiver
struct AFPS_PC_C_DebugReceiver_Params
{
	struct FString                                     Message;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                               Success;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FPS_PC.FPS_PC_C.UpdateFinalboard
struct AFPS_PC_C_UpdateFinalboard_Params
{
	TArray<struct FPlayerInfoGame>                     PlayerScores;                                              // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function FPS_PC.FPS_PC_C.UpdateKillFeed
struct AFPS_PC_C_UpdateKillFeed_Params
{
	struct FString                                     Killed;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                               IsKillerHunter_;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     Destroyed;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                               IsDestroyedHunter_;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FPS_PC.FPS_PC_C.MainNoti_01_SelfDamage
struct AFPS_PC_C_MainNoti_01_SelfDamage_Params
{
	int                                                DamageAmount;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_PC.FPS_PC_C.MainNoti_02_YouEliminated
struct AFPS_PC_C_MainNoti_02_YouEliminated_Params
{
	struct FString                                     KilledUser;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int                                                ObtainedScore;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_PC.FPS_PC_C.MainNoti_03_YouWereEliminatedBy
struct AFPS_PC_C_MainNoti_03_YouWereEliminatedBy_Params
{
	struct FString                                     KilledMeUser;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int                                                LostScore;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_PC.FPS_PC_C.MainNoti_04_SelfKilled
struct AFPS_PC_C_MainNoti_04_SelfKilled_Params
{
	int                                                LostScore;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_PC.FPS_PC_C.MainNoti_05_AddHealth
struct AFPS_PC_C_MainNoti_05_AddHealth_Params
{
	int                                                AddedHP;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_PC.FPS_PC_C.MainNoti_06_DamagedBy
struct AFPS_PC_C_MainNoti_06_DamagedBy_Params
{
	struct FString                                     userName;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int                                                ReceivedDamage;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_PC.FPS_PC_C.ChangeChatModeClient
struct AFPS_PC_C_ChangeChatModeClient_Params
{
};

// Function FPS_PC.FPS_PC_C.PropVisibility
struct AFPS_PC_C_PropVisibility_Params
{
	class AProp_C*                                     Prop;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Visibility;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FPS_PC.FPS_PC_C.HunterVisibility
struct AFPS_PC_C_HunterVisibility_Params
{
	class AFPS_Character2_C*                           HUNTER;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Visibility;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FPS_PC.FPS_PC_C.NotifyBurningTime
struct AFPS_PC_C_NotifyBurningTime_Params
{
};

// Function FPS_PC.FPS_PC_C.Beginplay_Sounds
struct AFPS_PC_C_Beginplay_Sounds_Params
{
};

// Function FPS_PC.FPS_PC_C.StartVoice_OnlyProp
struct AFPS_PC_C_StartVoice_OnlyProp_Params
{
	int                                                Sec;                                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_PC.FPS_PC_C.PlayStartMusic
struct AFPS_PC_C_PlayStartMusic_Params
{
};

// Function FPS_PC.FPS_PC_C.UpdatePropNoti_Freezing
struct AFPS_PC_C_UpdatePropNoti_Freezing_Params
{
	bool                                               FreezingOn_;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FPS_PC.FPS_PC_C.ResetJumpCount
struct AFPS_PC_C_ResetJumpCount_Params
{
};

// Function FPS_PC.FPS_PC_C.PacketDelayStart
struct AFPS_PC_C_PacketDelayStart_Params
{
};

// Function FPS_PC.FPS_PC_C.PacketDelayEnd
struct AFPS_PC_C_PacketDelayEnd_Params
{
};

// Function FPS_PC.FPS_PC_C.SendChatToServerClient
struct AFPS_PC_C_SendChatToServerClient_Params
{
	struct FText                                       Message;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	TEnumAsByte<EChatMode_EChatMode>                   ChatMode;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UChatSystemGame_C*                           ChatWidget;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_PC.FPS_PC_C.DelaySendChat
struct AFPS_PC_C_DelaySendChat_Params
{
};

// Function FPS_PC.FPS_PC_C.SetPlayerSession
struct AFPS_PC_C_SetPlayerSession_Params
{
	struct FString                                     userName;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     playerSessionId;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FSCashItemsGameInfo                         CashItemGameInfo;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       ClientVersion;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function FPS_PC.FPS_PC_C.AddToQueueServer
struct AFPS_PC_C_AddToQueueServer_Params
{
	struct FString                                     SteamID;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TEnumAsByte<EWhichWorkGame_EWhichWorkGame>         Work;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_PC.FPS_PC_C.GetSteamId_Event
struct AFPS_PC_C_GetSteamId_Event_Params
{
};

// Function FPS_PC.FPS_PC_C.SetSteamId_Event
struct AFPS_PC_C_SetSteamId_Event_Params
{
	struct FString                                     SteamID;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function FPS_PC.FPS_PC_C.BeginAuthProcess_Event
struct AFPS_PC_C_BeginAuthProcess_Event_Params
{
};

// Function FPS_PC.FPS_PC_C.AuthTicketResponse
struct AFPS_PC_C_AuthTicketResponse_Params
{
	struct FUWorksTicketHandle                         AuthTicket;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	UWorksCore_EUWorksResult                           Result;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_PC.FPS_PC_C.AuthTicketOnServer_Event
struct AFPS_PC_C_AuthTicketOnServer_Event_Params
{
	TArray<unsigned char>                              Ticket;                                                    // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function FPS_PC.FPS_PC_C.AuthTicketServerResponse
struct AFPS_PC_C_AuthTicketServerResponse_Params
{
	struct FUWorksSteamID                              SteamID;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	UWorksCore_EUWorksAuthSessionResponse              AuthSessionResponse;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUWorksSteamID                              OwnerSteamID;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function FPS_PC.FPS_PC_C.KickClient
struct AFPS_PC_C_KickClient_Params
{
	struct FString                                     KickedReason;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function FPS_PC.FPS_PC_C.Mute_StartMusic
struct AFPS_PC_C_Mute_StartMusic_Params
{
};

// Function FPS_PC.FPS_PC_C.Mute_Ambience
struct AFPS_PC_C_Mute_Ambience_Params
{
};

// Function FPS_PC.FPS_PC_C.Mute_OnFireMusic
struct AFPS_PC_C_Mute_OnFireMusic_Params
{
};

// Function FPS_PC.FPS_PC_C.DebugSyncStat
struct AFPS_PC_C_DebugSyncStat_Params
{
};

// Function FPS_PC.FPS_PC_C.InfoCheck
struct AFPS_PC_C_InfoCheck_Params
{
};

// Function FPS_PC.FPS_PC_C.Debug_ForceStartGame
struct AFPS_PC_C_Debug_ForceStartGame_Params
{
};

// Function FPS_PC.FPS_PC_C.TogglePropPic
struct AFPS_PC_C_TogglePropPic_Params
{
	bool                                               Show_;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FPS_PC.FPS_PC_C.2ndMorphStartSoundEffect
struct AFPS_PC_C__2ndMorphStartSoundEffect_Params
{
};

// Function FPS_PC.FPS_PC_C.WinLoseAnnouncer
struct AFPS_PC_C_WinLoseAnnouncer_Params
{
	bool                                               Win_;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FPS_PC.FPS_PC_C.PeekingNoti
struct AFPS_PC_C_PeekingNoti_Params
{
	bool                                               On_;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FPS_PC.FPS_PC_C.EventDeath(Prop)
struct AFPS_PC_C_EventDeath_Prop__Params
{
};

// Function FPS_PC.FPS_PC_C.EventDeath(Hunter)
struct AFPS_PC_C_EventDeath_Hunter__Params
{
};

// Function FPS_PC.FPS_PC_C.DelayPkt
struct AFPS_PC_C_DelayPkt_Params
{
};

// Function FPS_PC.FPS_PC_C.DelayFreezePeek
struct AFPS_PC_C_DelayFreezePeek_Params
{
};

// Function FPS_PC.FPS_PC_C.UpdatePropNoti_Peeking
struct AFPS_PC_C_UpdatePropNoti_Peeking_Params
{
	bool                                               PeekingOn_;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FPS_PC.FPS_PC_C.AnimateMyHealth
struct AFPS_PC_C_AnimateMyHealth_Params
{
	int                                                from;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                To;                                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               _Buffer;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FPS_PC.FPS_PC_C.AnimateMyExp
struct AFPS_PC_C_AnimateMyExp_Params
{
	int                                                from;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                To;                                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_PC.FPS_PC_C.AnimateMyGoldCoin
struct AFPS_PC_C_AnimateMyGoldCoin_Params
{
	int                                                from;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                To;                                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_PC.FPS_PC_C.DeductGoldCoins
struct AFPS_PC_C_DeductGoldCoins_Params
{
	int                                                DeductionAmount;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_PC.FPS_PC_C.DeductStokens
struct AFPS_PC_C_DeductStokens_Params
{
	int                                                DeductionAmount;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_PC.FPS_PC_C.PlayPropSelectionMusic
struct AFPS_PC_C_PlayPropSelectionMusic_Params
{
	bool                                               Stop_;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FPS_PC.FPS_PC_C.Count
struct AFPS_PC_C_Count_Params
{
};

// Function FPS_PC.FPS_PC_C.BeginCountDown
struct AFPS_PC_C_BeginCountDown_Params
{
	int                                                CountDownSec;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_PC.FPS_PC_C.CountDownWaitTimeTick
struct AFPS_PC_C_CountDownWaitTimeTick_Params
{
};

// Function FPS_PC.FPS_PC_C.Init_CountDownHunterWaitTime
struct AFPS_PC_C_Init_CountDownHunterWaitTime_Params
{
	int                                                Seconds;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_PC.FPS_PC_C.CountDownHunterWaitTimeTick
struct AFPS_PC_C_CountDownHunterWaitTimeTick_Params
{
};

// Function FPS_PC.FPS_PC_C.CheckCurrentServerState
struct AFPS_PC_C_CheckCurrentServerState_Params
{
};

// Function FPS_PC.FPS_PC_C.ShowWaitingScreen
struct AFPS_PC_C_ShowWaitingScreen_Params
{
};

// Function FPS_PC.FPS_PC_C.KickNoVersionMatch
struct AFPS_PC_C_KickNoVersionMatch_Params
{
	struct FText                                       Server_Version;                                            // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function FPS_PC.FPS_PC_C.OnVoteKickButtonPressed
struct AFPS_PC_C_OnVoteKickButtonPressed_Params
{
	struct FString                                     SteamIdToKick;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     UsernameToKick;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function FPS_PC.FPS_PC_C.ExecuteVoteKickOnServer
struct AFPS_PC_C_ExecuteVoteKickOnServer_Params
{
	class AFPS_PC_C*                                   RequestedPlayer;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     PlayerToKickSteamID;                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     PlayerToKickUsername;                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function FPS_PC.FPS_PC_C.StartVoteKick
struct AFPS_PC_C_StartVoteKick_Params
{
	struct FString                                     userName;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     SteamID;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function FPS_PC.FPS_PC_C.SendVoteYes
struct AFPS_PC_C_SendVoteYes_Params
{
};

// Function FPS_PC.FPS_PC_C.SendVoteNo
struct AFPS_PC_C_SendVoteNo_Params
{
};

// Function FPS_PC.FPS_PC_C.BanThisPlayer
struct AFPS_PC_C_BanThisPlayer_Params
{
	class AFPS_PC_C*                                   RequestedPlayer;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     ToBanSteamID;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function FPS_PC.FPS_PC_C.CustomEvent_1
struct AFPS_PC_C_CustomEvent_1_Params
{
	bool                                               bSuccessful;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     Content;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function FPS_PC.FPS_PC_C.BanResult
struct AFPS_PC_C_BanResult_Params
{
	bool                                               Success_;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     Content;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function FPS_PC.FPS_PC_C.PlayTauntSound
struct AFPS_PC_C_PlayTauntSound_Params
{
	class AProp_C*                                     PropActor;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                TauntSoundNumber;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_PC.FPS_PC_C.InitKickCheck
struct AFPS_PC_C_InitKickCheck_Params
{
};

// Function FPS_PC.FPS_PC_C.KickCount
struct AFPS_PC_C_KickCount_Params
{
};

// Function FPS_PC.FPS_PC_C.KickStop
struct AFPS_PC_C_KickStop_Params
{
};

// Function FPS_PC.FPS_PC_C.PropsToRevertToStatic
struct AFPS_PC_C_PropsToRevertToStatic_Params
{
	TArray<class UPrimitiveComponent*>                 PropsToRevert;                                             // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function FPS_PC.FPS_PC_C.KickOutPlayer
struct AFPS_PC_C_KickOutPlayer_Params
{
};

// Function FPS_PC.FPS_PC_C.RocketExplosionEffect_Client
struct AFPS_PC_C_RocketExplosionEffect_Client_Params
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_PC.FPS_PC_C.GrenadeExplosionEffect_Client
struct AFPS_PC_C_GrenadeExplosionEffect_Client_Params
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_PC.FPS_PC_C.UpdateMultipleKillFeeds
struct AFPS_PC_C_UpdateMultipleKillFeeds_Params
{
	TArray<struct FString>                             Killed;                                                    // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<bool>                                       IsKillerHunter_;                                           // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FString>                             Destroyed;                                                 // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<bool>                                       IsDestroyedHunter_;                                        // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function FPS_PC.FPS_PC_C.StealthView_Widget_Off
struct AFPS_PC_C_StealthView_Widget_Off_Params
{
	bool                                               Notify_;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FPS_PC.FPS_PC_C.CheckedValidCurrencyForRerolling
struct AFPS_PC_C_CheckedValidCurrencyForRerolling_Params
{
	int                                                TrialNumber;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FPS_PC.FPS_PC_C.RunObserverPossession
struct AFPS_PC_C_RunObserverPossession_Params
{
	struct FTransform                                  Transform;                                                 // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
};

// Function FPS_PC.FPS_PC_C.RunPropPossession
struct AFPS_PC_C_RunPropPossession_Params
{
};

// Function FPS_PC.FPS_PC_C.EventOnPropDestroyed
struct AFPS_PC_C_EventOnPropDestroyed_Params
{
};

// Function FPS_PC.FPS_PC_C.VotekickClient
struct AFPS_PC_C_VotekickClient_Params
{
};

// Function FPS_PC.FPS_PC_C.SendReportInfoToServer
struct AFPS_PC_C_SendReportInfoToServer_Params
{
	TEnumAsByte<Ereport_Ereport>                       ReportType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     ReportedSteamID;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function FPS_PC.FPS_PC_C.ExecuteUbergraph_FPS_PC
struct AFPS_PC_C_ExecuteUbergraph_FPS_PC_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
