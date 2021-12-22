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

// Function PP.PP_C.NotifyProcessTerminate
struct UPP_C_NotifyProcessTerminate_Params
{
};

// Function PP.PP_C.HealthCheck
struct UPP_C_HealthCheck_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function PP.PP_C.UpdateGameSession
struct UPP_C_UpdateGameSession_Params
{
	struct FUpdateGameSessionServer                    UpdateGameSession;                                         // 0x0000(0x00A8)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PP.PP_C.StartGameSession
struct UPP_C_StartGameSession_Params
{
	struct FAWSGameSessionServer                       GameSession;                                               // 0x0000(0x0090)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PP.PP_C.ProcessTerminate
struct UPP_C_ProcessTerminate_Params
{
};

// Function PP.PP_C.ExecuteUbergraph_PP
struct UPP_C_ExecuteUbergraph_PP_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
