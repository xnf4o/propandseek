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

// Function WB_LightFX.WB_LightFX_C.CreateLightFX
struct UWB_LightFX_C_CreateLightFX_Params
{
	struct FLinearColor                                Color;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_LightFX.WB_LightFX_C.OnAnimationFinished
struct UWB_LightFX_C_OnAnimationFinished_Params
{
	class UWidgetAnimation*                            Animation;                                                 // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_LightFX.WB_LightFX_C.ResetTimer
struct UWB_LightFX_C_ResetTimer_Params
{
};

// Function WB_LightFX.WB_LightFX_C.UpdateLightMaterial
struct UWB_LightFX_C_UpdateLightMaterial_Params
{
};

// Function WB_LightFX.WB_LightFX_C.ExecuteUbergraph_WB_LightFX
struct UWB_LightFX_C_ExecuteUbergraph_WB_LightFX_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
