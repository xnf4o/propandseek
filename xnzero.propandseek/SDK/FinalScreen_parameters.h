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

// Function FinalScreen.FinalScreen_C.GI
struct UFinalScreen_C_GI_Params
{
	class UGI2_C*                                      AsGI2;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FinalScreen.FinalScreen_C.DeployInfo_GeneralBox
struct UFinalScreen_C_DeployInfo_GeneralBox_Params
{
	int                                                TotalPlayers;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FinalScreen.FinalScreen_C.PC
struct UFinalScreen_C_PC_Params
{
	class AFPS_PC_C*                                   AsFPS_PC;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FinalScreen.FinalScreen_C.UpdateFinalScreen
struct UFinalScreen_C_UpdateFinalScreen_Params
{
	TArray<struct FPlayerInfoGame>                     PlayerScores;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function FinalScreen.FinalScreen_C.StartFinalScreenAnim
struct UFinalScreen_C_StartFinalScreenAnim_Params
{
};

// Function FinalScreen.FinalScreen_C.GeneralboxAnimFinished
struct UFinalScreen_C_GeneralboxAnimFinished_Params
{
};

// Function FinalScreen.FinalScreen_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UFinalScreen_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function FinalScreen.FinalScreen_C.ExecuteUbergraph_FinalScreen
struct UFinalScreen_C_ExecuteUbergraph_FinalScreen_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
