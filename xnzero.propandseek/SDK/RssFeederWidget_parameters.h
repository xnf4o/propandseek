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

// Function RssFeederWidget.RssFeederWidget_C.FpsPC
struct URssFeederWidget_C_FpsPC_Params
{
	class AFPS_PC_C*                                   AsFPS_PC;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RssFeederWidget.RssFeederWidget_C.EntryPC
struct URssFeederWidget_C_EntryPC_Params
{
	class AEntryPC_C*                                  AsEntry_PC;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RssFeederWidget.RssFeederWidget_C.RunCountDown
struct URssFeederWidget_C_RunCountDown_Params
{
};

// Function RssFeederWidget.RssFeederWidget_C.UpdateAllowStatus
struct URssFeederWidget_C_UpdateAllowStatus_Params
{
	bool                                               Allow_;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function RssFeederWidget.RssFeederWidget_C.LobbyPC
struct URssFeederWidget_C_LobbyPC_Params
{
	class ALobbyPC2_C*                                 AsLobby_PC1;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RssFeederWidget.RssFeederWidget_C.CheckAllowMicrotxn
struct URssFeederWidget_C_CheckAllowMicrotxn_Params
{
	bool                                               Allow;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function RssFeederWidget.RssFeederWidget_C.UpdateUpdater
struct URssFeederWidget_C_UpdateUpdater_Params
{
	struct FString                                     Title;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Link;                                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Date;                                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     HrMin;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Content;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                               Display_;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function RssFeederWidget.RssFeederWidget_C.BndEvt__CheckUpdateButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
struct URssFeederWidget_C_BndEvt__CheckUpdateButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function RssFeederWidget.RssFeederWidget_C.BndEvt__CheckUpdateButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct URssFeederWidget_C_BndEvt__CheckUpdateButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function RssFeederWidget.RssFeederWidget_C.BndEvt__CheckUpdateButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
struct URssFeederWidget_C_BndEvt__CheckUpdateButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function RssFeederWidget.RssFeederWidget_C.BndEvt__LinkButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
struct URssFeederWidget_C_BndEvt__LinkButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function RssFeederWidget.RssFeederWidget_C.BndEvt__LinkButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
struct URssFeederWidget_C_BndEvt__LinkButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function RssFeederWidget.RssFeederWidget_C.BndEvt__LinkButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
struct URssFeederWidget_C_BndEvt__LinkButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function RssFeederWidget.RssFeederWidget_C.Construct
struct URssFeederWidget_C_Construct_Params
{
};

// Function RssFeederWidget.RssFeederWidget_C.Countdown
struct URssFeederWidget_C_Countdown_Params
{
};

// Function RssFeederWidget.RssFeederWidget_C.ExecuteUbergraph_RssFeederWidget
struct URssFeederWidget_C_ExecuteUbergraph_RssFeederWidget_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
