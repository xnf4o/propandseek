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

// Function WB_Button04_Frame.WB_Button04_Frame_C.UpdateShineFX
struct UWB_Button04_Frame_C_UpdateShineFX_Params
{
	bool                                               bEnable;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_Button04_Frame.WB_Button04_Frame_C.UpdateShineFX_State
struct UWB_Button04_Frame_C_UpdateShineFX_State_Params
{
	struct FLinearColor                                InColor1;                                                  // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                InColor2;                                                  // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                InColor3;                                                  // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button04_Frame.WB_Button04_Frame_C.HasColor
struct UWB_Button04_Frame_C_HasColor_Params
{
	struct FLinearColor                                InColor;                                                   // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WB_Button04_Frame.WB_Button04_Frame_C.UpdateShineFX_Color
struct UWB_Button04_Frame_C_UpdateShineFX_Color_Params
{
	struct FLinearColor                                ShineFX_ColorBG;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                ShineFX_ColorSmall;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                ShineFX_ColorBig;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button04_Frame.WB_Button04_Frame_C.UpdateShineFX_Method
struct UWB_Button04_Frame_C_UpdateShineFX_Method_Params
{
	TEnumAsByte<EShineFXMethod_EShineFXMethod>         EShineFXMethod;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button04_Frame.WB_Button04_Frame_C.Set_ShineColor
struct UWB_Button04_Frame_C_Set_ShineColor_Params
{
	struct FLinearColor                                FrameColor;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button04_Frame.WB_Button04_Frame_C.Set_DynamicFrameColor
struct UWB_Button04_Frame_C_Set_DynamicFrameColor_Params
{
	struct FLinearColor                                FrameColor;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button04_Frame.WB_Button04_Frame_C.Set_FrameColor
struct UWB_Button04_Frame_C_Set_FrameColor_Params
{
	struct FLinearColor                                FrameColor;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button04_Frame.WB_Button04_Frame_C.PreConstruct
struct UWB_Button04_Frame_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_Button04_Frame.WB_Button04_Frame_C.Construct
struct UWB_Button04_Frame_C_Construct_Params
{
};

// Function WB_Button04_Frame.WB_Button04_Frame_C.OnHovered
struct UWB_Button04_Frame_C_OnHovered_Params
{
};

// Function WB_Button04_Frame.WB_Button04_Frame_C.OnClicked
struct UWB_Button04_Frame_C_OnClicked_Params
{
};

// Function WB_Button04_Frame.WB_Button04_Frame_C.OnUnhovered
struct UWB_Button04_Frame_C_OnUnhovered_Params
{
};

// Function WB_Button04_Frame.WB_Button04_Frame_C.OnDisabled
struct UWB_Button04_Frame_C_OnDisabled_Params
{
};

// Function WB_Button04_Frame.WB_Button04_Frame_C.UpdateFrameThickness
struct UWB_Button04_Frame_C_UpdateFrameThickness_Params
{
	float                                              FrameThickness;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button04_Frame.WB_Button04_Frame_C.ExecuteUbergraph_WB_Button04_Frame
struct UWB_Button04_Frame_C_ExecuteUbergraph_WB_Button04_Frame_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
