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

// Function WB_Button01_FX.WB_Button01_FX_C.SetClickFX_Justification
struct UWB_Button01_FX_C_SetClickFX_Justification_Params
{
};

// Function WB_Button01_FX.WB_Button01_FX_C.IsRightAligned
struct UWB_Button01_FX_C_IsRightAligned_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WB_Button01_FX.WB_Button01_FX_C.IsCenterAligned
struct UWB_Button01_FX_C_IsCenterAligned_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WB_Button01_FX.WB_Button01_FX_C.GetShineBorders
struct UWB_Button01_FX_C_GetShineBorders_Params
{
	TArray<class UBorder*>                             Array;                                                     // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
};

// Function WB_Button01_FX.WB_Button01_FX_C.SetShineSizeBoxesRightPadding
struct UWB_Button01_FX_C_SetShineSizeBoxesRightPadding_Params
{
	TEnumAsByte<EJustification_EJustification>         Justification;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button01_FX.WB_Button01_FX_C.SetShineSizeBoxesHorizontalAlignment
struct UWB_Button01_FX_C_SetShineSizeBoxesHorizontalAlignment_Params
{
	TEnumAsByte<SlateCore_EHorizontalAlignment>        InHorizontalAlignment;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button01_FX.WB_Button01_FX_C.GetShineSizeBoxes
struct UWB_Button01_FX_C_GetShineSizeBoxes_Params
{
	TArray<class USizeBox*>                            Array;                                                     // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
};

// Function WB_Button01_FX.WB_Button01_FX_C.OnHovered
struct UWB_Button01_FX_C_OnHovered_Params
{
};

// Function WB_Button01_FX.WB_Button01_FX_C.OnUnhovered
struct UWB_Button01_FX_C_OnUnhovered_Params
{
};

// Function WB_Button01_FX.WB_Button01_FX_C.OnClicked
struct UWB_Button01_FX_C_OnClicked_Params
{
};

// Function WB_Button01_FX.WB_Button01_FX_C.UpdateJustification
struct UWB_Button01_FX_C_UpdateJustification_Params
{
	TEnumAsByte<EJustification_EJustification>         EJustification;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button01_FX.WB_Button01_FX_C.Update_OnHovered_FX
struct UWB_Button01_FX_C_Update_OnHovered_FX_Params
{
};

// Function WB_Button01_FX.WB_Button01_FX_C.Update_HoveredFX01_Color
struct UWB_Button01_FX_C_Update_HoveredFX01_Color_Params
{
	struct FLinearColor                                FX01_Color;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button01_FX.WB_Button01_FX_C.Update_HoveredFX02_Color
struct UWB_Button01_FX_C_Update_HoveredFX02_Color_Params
{
	struct FLinearColor                                FX02_Color;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button01_FX.WB_Button01_FX_C.ShowBaselinePreview
struct UWB_Button01_FX_C_ShowBaselinePreview_Params
{
	struct FLinearColor                                PreviewColor;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PreviewTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button01_FX.WB_Button01_FX_C.Update_OnClicked_FX
struct UWB_Button01_FX_C_Update_OnClicked_FX_Params
{
};

// Function WB_Button01_FX.WB_Button01_FX_C.UpdateOnClickedFontInfo
struct UWB_Button01_FX_C_UpdateOnClickedFontInfo_Params
{
	class UObject*                                     Font;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   FontFace;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FontSize;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button01_FX.WB_Button01_FX_C.UpdateOnClickedTextJustification
struct UWB_Button01_FX_C_UpdateOnClickedTextJustification_Params
{
	TEnumAsByte<EJustification_EJustification>         EJustification;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button01_FX.WB_Button01_FX_C.UpdateOnClickedText
struct UWB_Button01_FX_C_UpdateOnClickedText_Params
{
	struct FText                                       InText;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WB_Button01_FX.WB_Button01_FX_C.Update_ClickedFX_Color
struct UWB_Button01_FX_C_Update_ClickedFX_Color_Params
{
	struct FLinearColor                                Color;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button01_FX.WB_Button01_FX_C.ExecuteUbergraph_WB_Button01_FX
struct UWB_Button01_FX_C_ExecuteUbergraph_WB_Button01_FX_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
