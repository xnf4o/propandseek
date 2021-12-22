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

// Function Upperwidget2.Upperwidget2_C.UpdatePropBoosterVisibility
struct UUpperwidget2_C_UpdatePropBoosterVisibility_Params
{
	bool                                               BoosterMode_;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Upperwidget2.Upperwidget2_C.SetAsRank1
struct UUpperwidget2_C_SetAsRank1_Params
{
	bool                                               Set_;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Upperwidget2.Upperwidget2_C.InitDisplayInfo (Unused)
struct UUpperwidget2_C_InitDisplayInfo__Unused__Params
{
	bool                                               isHunter_;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     userName;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int                                                Alias;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Level;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Upperwidget2.Upperwidget2_C.UpdateHunter
struct UUpperwidget2_C_UpdateHunter_Params
{
	bool                                               isHunter_;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Upperwidget2.Upperwidget2_C.UpdateAlias
struct UUpperwidget2_C_UpdateAlias_Params
{
	int                                                Alias;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Upperwidget2.Upperwidget2_C.UpdateUsername
struct UUpperwidget2_C_UpdateUsername_Params
{
	struct FString                                     userName;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function Upperwidget2.Upperwidget2_C.PC
struct UUpperwidget2_C_PC_Params
{
	class AFPS_PC_C*                                   AsFPS_PC;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Upperwidget2.Upperwidget2_C.StartCough
struct UUpperwidget2_C_StartCough_Params
{
};

// Function Upperwidget2.Upperwidget2_C.ExecuteUbergraph_Upperwidget2
struct UUpperwidget2_C_ExecuteUbergraph_Upperwidget2_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
