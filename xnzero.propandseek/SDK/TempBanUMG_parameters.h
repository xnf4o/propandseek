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

// Function TempBanUMG.TempBanUMG_C.PC
struct UTempBanUMG_C_PC_Params
{
	class AEntryPC_C*                                  AsEntry_PC;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TempBanUMG.TempBanUMG_C.InitTempBan
struct UTempBanUMG_C_InitTempBan_Params
{
	struct FDateTime                                   BannedUntil;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Ereport_Ereport>                       Reason;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TempBanUMG.TempBanUMG_C.ClockTick
struct UTempBanUMG_C_ClockTick_Params
{
};

// Function TempBanUMG.TempBanUMG_C.ExecuteUbergraph_TempBanUMG
struct UTempBanUMG_C_ExecuteUbergraph_TempBanUMG_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
