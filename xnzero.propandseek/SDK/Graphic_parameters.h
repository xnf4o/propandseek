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

// Function Graphic.Graphic_C.AdjustPostProcessing
struct UGraphic_C_AdjustPostProcessing_Params
{
};

// Function Graphic.Graphic_C.CheckDeveloperMode
struct UGraphic_C_CheckDeveloperMode_Params
{
};

// Function Graphic.Graphic_C.InitToDefault
struct UGraphic_C_InitToDefault_Params
{
};

// Function Graphic.Graphic_C.ConvertFrameRateLimit
struct UGraphic_C_ConvertFrameRateLimit_Params
{
	float                                              FrameRate;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FrameRateOptionIndex;                                      // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Graphic.Graphic_C.DetectCurrent
struct UGraphic_C_DetectCurrent_Params
{
	TArray<int>                                        DetectedOptionsIndex;                                      // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
};

// Function Graphic.Graphic_C.ToggleCinemaMode
struct UGraphic_C_ToggleCinemaMode_Params
{
	bool                                               On_;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Graphic.Graphic_C.UpdateScreenMode
struct UGraphic_C_UpdateScreenMode_Params
{
};

// Function Graphic.Graphic_C.UpdateResolution
struct UGraphic_C_UpdateResolution_Params
{
	struct FString                                     Resolution;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function Graphic.Graphic_C.InitScreenResolution
struct UGraphic_C_InitScreenResolution_Params
{
};

// Function Graphic.Graphic_C.Save
struct UGraphic_C_Save_Params
{
};

// Function Graphic.Graphic_C.Init
struct UGraphic_C_Init_Params
{
};

// Function Graphic.Graphic_C.ToggleScreenshotMode
struct UGraphic_C_ToggleScreenshotMode_Params
{
	bool                                               ScreenShotMode;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Graphic.Graphic_C.PC
struct UGraphic_C_PC_Params
{
	class AFPS_PC_C*                                   AsFPS_PC;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Graphic.Graphic_C.UpdateScreenshotMode
struct UGraphic_C_UpdateScreenshotMode_Params
{
};

// Function Graphic.Graphic_C.GI
struct UGraphic_C_GI_Params
{
	class UGI2_C*                                      AsGI2;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Graphic.Graphic_C.Construct
struct UGraphic_C_Construct_Params
{
};

// Function Graphic.Graphic_C.BndEvt__CinemaOn_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
struct UGraphic_C_BndEvt__CinemaOn_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Graphic.Graphic_C.BndEvt__CinemaOff_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
struct UGraphic_C_BndEvt__CinemaOff_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Graphic.Graphic_C.BndEvt__Menu03_VerticalSync_K2Node_ComponentBoundEvent_12_OnStateChanged__DelegateSignature
struct UGraphic_C_BndEvt__Menu03_VerticalSync_K2Node_ComponentBoundEvent_12_OnStateChanged__DelegateSignature_Params
{
	struct FName                                       StateName;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                StateIndex;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Graphic.Graphic_C.BndEvt__Menu01_ScreenMode_K2Node_ComponentBoundEvent_14_OnSelectionChanged (ComboBox)__DelegateSignature
struct UGraphic_C_BndEvt__Menu01_ScreenMode_K2Node_ComponentBoundEvent_14_OnSelectionChanged__ComboBox___DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TEnumAsByte<SlateCore_ESelectInfo>                 SelectionType;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Graphic.Graphic_C.BndEvt__Menu02_ScreenResolution_K2Node_ComponentBoundEvent_15_OnSelectionChanged (ComboBox)__DelegateSignature
struct UGraphic_C_BndEvt__Menu02_ScreenResolution_K2Node_ComponentBoundEvent_15_OnSelectionChanged__ComboBox___DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TEnumAsByte<SlateCore_ESelectInfo>                 SelectionType;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Graphic.Graphic_C.BndEvt__Menu04_ScreenshotMode_K2Node_ComponentBoundEvent_16_OnStateChanged__DelegateSignature
struct UGraphic_C_BndEvt__Menu04_ScreenshotMode_K2Node_ComponentBoundEvent_16_OnStateChanged__DelegateSignature_Params
{
	struct FName                                       StateName;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                StateIndex;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Graphic.Graphic_C.OnModified
struct UGraphic_C_OnModified_Params
{
};

// Function Graphic.Graphic_C.BndEvt__Master_K2Node_ComponentBoundEvent_1_OnSliderChanged__DelegateSignature
struct UGraphic_C_BndEvt__Master_K2Node_ComponentBoundEvent_1_OnSliderChanged__DelegateSignature_Params
{
	float                                              ValueNormalized;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Value;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Graphic.Graphic_C.BndEvt__Menu05_ViewChat_K2Node_ComponentBoundEvent_0_OnStateChanged__DelegateSignature
struct UGraphic_C_BndEvt__Menu05_ViewChat_K2Node_ComponentBoundEvent_0_OnStateChanged__DelegateSignature_Params
{
	struct FName                                       StateName;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                StateIndex;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Graphic.Graphic_C.ExecuteUbergraph_Graphic
struct UGraphic_C_ExecuteUbergraph_Graphic_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Graphic.Graphic_C.OnSettingsModified__DelegateSignature
struct UGraphic_C_OnSettingsModified__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
