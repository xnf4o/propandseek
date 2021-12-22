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

// Function WB_Button02_Frame.WB_Button02_Frame_C.Set_UseShine
struct UWB_Button02_Frame_C_Set_UseShine_Params
{
	bool                                               bUseShine;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_Button02_Frame.WB_Button02_Frame_C.Set_FrameColor
struct UWB_Button02_Frame_C_Set_FrameColor_Params
{
	struct FLinearColor                                FrameColor;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button02_Frame.WB_Button02_Frame_C.Set_FrameShineColor
struct UWB_Button02_Frame_C_Set_FrameShineColor_Params
{
	struct FLinearColor                                FrameShineColor;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button02_Frame.WB_Button02_Frame_C.GetImageDynamicMaterial
struct UWB_Button02_Frame_C_GetImageDynamicMaterial_Params
{
	class UMaterialInstanceDynamic*                    DynamicMaterial;                                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UImage*                                      Image;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button02_Frame.WB_Button02_Frame_C.PreConstruct
struct UWB_Button02_Frame_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_Button02_Frame.WB_Button02_Frame_C.CreateShine
struct UWB_Button02_Frame_C_CreateShine_Params
{
};

// Function WB_Button02_Frame.WB_Button02_Frame_C.Construct
struct UWB_Button02_Frame_C_Construct_Params
{
};

// Function WB_Button02_Frame.WB_Button02_Frame_C.OnHovered
struct UWB_Button02_Frame_C_OnHovered_Params
{
};

// Function WB_Button02_Frame.WB_Button02_Frame_C.OnClicked
struct UWB_Button02_Frame_C_OnClicked_Params
{
};

// Function WB_Button02_Frame.WB_Button02_Frame_C.OnUnhovered
struct UWB_Button02_Frame_C_OnUnhovered_Params
{
};

// Function WB_Button02_Frame.WB_Button02_Frame_C.OnDisabled
struct UWB_Button02_Frame_C_OnDisabled_Params
{
};

// Function WB_Button02_Frame.WB_Button02_Frame_C.UpdateDynamicShine
struct UWB_Button02_Frame_C_UpdateDynamicShine_Params
{
};

// Function WB_Button02_Frame.WB_Button02_Frame_C.ResetTimer
struct UWB_Button02_Frame_C_ResetTimer_Params
{
};

// Function WB_Button02_Frame.WB_Button02_Frame_C.ExecuteUbergraph_WB_Button02_Frame
struct UWB_Button02_Frame_C_ExecuteUbergraph_WB_Button02_Frame_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
