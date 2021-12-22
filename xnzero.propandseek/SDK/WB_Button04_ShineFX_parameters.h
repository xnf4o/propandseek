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

// Function WB_Button04_ShineFX.WB_Button04_ShineFX_C.Construct
struct UWB_Button04_ShineFX_C_Construct_Params
{
};

// Function WB_Button04_ShineFX.WB_Button04_ShineFX_C.PreConstruct
struct UWB_Button04_ShineFX_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_Button04_ShineFX.WB_Button04_ShineFX_C.UpdateShineFX
struct UWB_Button04_ShineFX_C_UpdateShineFX_Params
{
	bool                                               bEnable;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_Button04_ShineFX.WB_Button04_ShineFX_C.UpdateShineColor
struct UWB_Button04_ShineFX_C_UpdateShineColor_Params
{
	struct FLinearColor                                ShineFX_BG_Color;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                ShineFX_ShineColor_Small;                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                ShineFX_ShineColor_Big;                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button04_ShineFX.WB_Button04_ShineFX_C.ExecuteUbergraph_WB_Button04_ShineFX
struct UWB_Button04_ShineFX_C_ExecuteUbergraph_WB_Button04_ShineFX_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
