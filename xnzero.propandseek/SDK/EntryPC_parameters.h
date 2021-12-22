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

// Function EntryPC.EntryPC_C.CheckBanStatusDebugging
struct AEntryPC_C_CheckBanStatusDebugging_Params
{
};

// Function EntryPC.EntryPC_C.CheckBanStatus
struct AEntryPC_C_CheckBanStatus_Params
{
	bool                                               Found_;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FDateTime                                   BanDatetime;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Ereport_Ereport>                       Reason;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function EntryPC.EntryPC_C.TerminateTimer
struct AEntryPC_C_TerminateTimer_Params
{
};

// Function EntryPC.EntryPC_C.GM
struct AEntryPC_C_GM_Params
{
	class AEntryGM_C*                                  AsEntry_GM;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function EntryPC.EntryPC_C.InitWidget
struct AEntryPC_C_InitWidget_Params
{
};

// Function EntryPC.EntryPC_C.GI
struct AEntryPC_C_GI_Params
{
	class UGI2_C*                                      AsGI2;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function EntryPC.EntryPC_C.InpActEvt_Back_K2Node_InputActionEvent_1
struct AEntryPC_C_InpActEvt_Back_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function EntryPC.EntryPC_C.OnProcessReady
struct AEntryPC_C_OnProcessReady_Params
{
};

// Function EntryPC.EntryPC_C.ReceiveBeginPlay
struct AEntryPC_C_ReceiveBeginPlay_Params
{
};

// Function EntryPC.EntryPC_C.Timeout
struct AEntryPC_C_Timeout_Params
{
};

// Function EntryPC.EntryPC_C.OnGetAllGames
struct AEntryPC_C_OnGetAllGames_Params
{
};

// Function EntryPC.EntryPC_C.OnGetAllLobbies
struct AEntryPC_C_OnGetAllLobbies_Params
{
};

// Function EntryPC.EntryPC_C.Retry
struct AEntryPC_C_Retry_Params
{
};

// Function EntryPC.EntryPC_C.ExitToDesktop
struct AEntryPC_C_ExitToDesktop_Params
{
};

// Function EntryPC.EntryPC_C.IntroFinished?
struct AEntryPC_C_IntroFinished__Params
{
};

// Function EntryPC.EntryPC_C.OnRequestCompleted
struct AEntryPC_C_OnRequestCompleted_Params
{
	bool                                               bSuccessful;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FUWorksGameID                               GameID;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	UWorksCore_EUWorksResult                           Result;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUWorksSteamID                              SteamID;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function EntryPC.EntryPC_C.SetNewSettings
struct AEntryPC_C_SetNewSettings_Params
{
};

// Function EntryPC.EntryPC_C.OnAuthFinished
struct AEntryPC_C_OnAuthFinished_Params
{
};

// Function EntryPC.EntryPC_C.errorMessage
struct AEntryPC_C_errorMessage_Params
{
	struct FText                                       Error;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function EntryPC.EntryPC_C.ExecuteUbergraph_EntryPC
struct AEntryPC_C_ExecuteUbergraph_EntryPC_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function EntryPC.EntryPC_C.JoinLobbyMap__DelegateSignature
struct AEntryPC_C_JoinLobbyMap__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
