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

// Function InvenListUMG.InvenListUMG_C.ResetPreviousMenu
struct UInvenListUMG_C_ResetPreviousMenu_Params
{
	TEnumAsByte<EInvenMenu_EInvenMenu>                 PreviousMenuToReset;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InvenListUMG.InvenListUMG_C.UpdateAllSections
struct UInvenListUMG_C_UpdateAllSections_Params
{
};

// Function InvenListUMG.InvenListUMG_C.PC
struct UInvenListUMG_C_PC_Params
{
	class ALobbyPC2_C*                                 AsLobby_PC;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InvenListUMG.InvenListUMG_C.UpdateMenu
struct UInvenListUMG_C_UpdateMenu_Params
{
	TEnumAsByte<EInvenMenu_EInvenMenu>                 ChangeInvenMenuTo;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InvenListUMG.InvenListUMG_C.InifRef
struct UInvenListUMG_C_InifRef_Params
{
};

// Function InvenListUMG.InvenListUMG_C.OnParentConstruct
struct UInvenListUMG_C_OnParentConstruct_Params
{
};

// Function InvenListUMG.InvenListUMG_C.Construct
struct UInvenListUMG_C_Construct_Params
{
};

// Function InvenListUMG.InvenListUMG_C.ExecuteUbergraph_InvenListUMG
struct UInvenListUMG_C_ExecuteUbergraph_InvenListUMG_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
