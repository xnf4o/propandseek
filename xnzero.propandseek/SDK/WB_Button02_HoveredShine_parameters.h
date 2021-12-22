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

// Function WB_Button02_HoveredShine.WB_Button02_HoveredShine_C.OnAnimationFinished
struct UWB_Button02_HoveredShine_C_OnAnimationFinished_Params
{
	class UWidgetAnimation*                            Animation;                                                 // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button02_HoveredShine.WB_Button02_HoveredShine_C.OnHovered
struct UWB_Button02_HoveredShine_C_OnHovered_Params
{
	struct FLinearColor                                Color;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<EJustification_EJustification>         Justification;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button02_HoveredShine.WB_Button02_HoveredShine_C.OnUnhovered
struct UWB_Button02_HoveredShine_C_OnUnhovered_Params
{
};

// Function WB_Button02_HoveredShine.WB_Button02_HoveredShine_C.ExecuteUbergraph_WB_Button02_HoveredShine
struct UWB_Button02_HoveredShine_C_ExecuteUbergraph_WB_Button02_HoveredShine_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
