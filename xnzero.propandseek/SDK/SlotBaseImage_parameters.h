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

// Function SlotBaseImage.SlotBaseImage_C.DesignateProp
struct USlotBaseImage_C_DesignateProp_Params
{
	struct FPropList                                   Out_Row;                                                   // 0x0000(0x0060)  (Parm, OutParm, HasGetValueTypeHash)
};

// Function SlotBaseImage.SlotBaseImage_C.GI
struct USlotBaseImage_C_GI_Params
{
	class UGI2_C*                                      AsGI2;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SlotBaseImage.SlotBaseImage_C.TrickChange_Up
struct USlotBaseImage_C_TrickChange_Up_Params
{
};

// Function SlotBaseImage.SlotBaseImage_C.TrickChange_Down
struct USlotBaseImage_C_TrickChange_Down_Params
{
};

// Function SlotBaseImage.SlotBaseImage_C.InitRandomProps
struct USlotBaseImage_C_InitRandomProps_Params
{
};

// Function SlotBaseImage.SlotBaseImage_C.Construct
struct USlotBaseImage_C_Construct_Params
{
};

// Function SlotBaseImage.SlotBaseImage_C.Roll_Normal_Start
struct USlotBaseImage_C_Roll_Normal_Start_Params
{
	bool                                               Up_;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              PlaybackSpeed;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SlotBaseImage.SlotBaseImage_C.Roll_End
struct USlotBaseImage_C_Roll_End_Params
{
};

// Function SlotBaseImage.SlotBaseImage_C.RunRollAgain
struct USlotBaseImage_C_RunRollAgain_Params
{
};

// Function SlotBaseImage.SlotBaseImage_C.ExecuteUbergraph_SlotBaseImage
struct USlotBaseImage_C_ExecuteUbergraph_SlotBaseImage_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
