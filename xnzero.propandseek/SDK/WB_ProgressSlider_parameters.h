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

// Function WB_ProgressSlider.WB_ProgressSlider_C.OnKeyUp
struct UWB_ProgressSlider_C_OnKeyUp_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // 0x0000(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function WB_ProgressSlider.WB_ProgressSlider_C.OnKeyDown
struct UWB_ProgressSlider_C_OnKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // 0x0000(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function WB_ProgressSlider.WB_ProgressSlider_C.OnPreviewKeyDown
struct UWB_ProgressSlider_C_OnPreviewKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // 0x0000(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function WB_ProgressSlider.WB_ProgressSlider_C.DecreaseSliderValue
struct UWB_ProgressSlider_C_DecreaseSliderValue_Params
{
	float                                              StepSize;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_ProgressSlider.WB_ProgressSlider_C.IncreaseSliderValue
struct UWB_ProgressSlider_C_IncreaseSliderValue_Params
{
	float                                              StepSize;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_ProgressSlider.WB_ProgressSlider_C.SetProgressTextValue
struct UWB_ProgressSlider_C_SetProgressTextValue_Params
{
	float                                              ProgressValue;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinValue;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxValue;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     Definition;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function WB_ProgressSlider.WB_ProgressSlider_C.SetProgressFont
struct UWB_ProgressSlider_C_SetProgressFont_Params
{
	class UObject*                                     Font;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   FontFace;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FontSize;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_ProgressSlider.WB_ProgressSlider_C.SetSliderColor
struct UWB_ProgressSlider_C_SetSliderColor_Params
{
	struct FLinearColor                                Color;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_ProgressSlider.WB_ProgressSlider_C.SetButtonsEnabled
struct UWB_ProgressSlider_C_SetButtonsEnabled_Params
{
	bool                                               BIsEnabled;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_ProgressSlider.WB_ProgressSlider_C.ConvertOpacityToNormal
struct UWB_ProgressSlider_C_ConvertOpacityToNormal_Params
{
	struct FLinearColor                                InColor;                                                   // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_ProgressSlider.WB_ProgressSlider_C.Set_FontInfoHovered
struct UWB_ProgressSlider_C_Set_FontInfoHovered_Params
{
};

// Function WB_ProgressSlider.WB_ProgressSlider_C.Set_FontInfoNormal
struct UWB_ProgressSlider_C_Set_FontInfoNormal_Params
{
};

// Function WB_ProgressSlider.WB_ProgressSlider_C.HasAnyFocus
struct UWB_ProgressSlider_C_HasAnyFocus_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WB_ProgressSlider.WB_ProgressSlider_C.CheckFocus
struct UWB_ProgressSlider_C_CheckFocus_Params
{
};

// Function WB_ProgressSlider.WB_ProgressSlider_C.Construct
struct UWB_ProgressSlider_C_Construct_Params
{
};

// Function WB_ProgressSlider.WB_ProgressSlider_C.BndEvt__ProgressSlider_K2Node_ComponentBoundEvent_27_OnFloatValueChangedEvent__DelegateSignature
struct UWB_ProgressSlider_C_BndEvt__ProgressSlider_K2Node_ComponentBoundEvent_27_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float                                              Value;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_ProgressSlider.WB_ProgressSlider_C.UpdateSliderText
struct UWB_ProgressSlider_C_UpdateSliderText_Params
{
};

// Function WB_ProgressSlider.WB_ProgressSlider_C.SliderClickLeft
struct UWB_ProgressSlider_C_SliderClickLeft_Params
{
};

// Function WB_ProgressSlider.WB_ProgressSlider_C.SliderClickRight
struct UWB_ProgressSlider_C_SliderClickRight_Params
{
};

// Function WB_ProgressSlider.WB_ProgressSlider_C.CheckSliderHovered
struct UWB_ProgressSlider_C_CheckSliderHovered_Params
{
};

// Function WB_ProgressSlider.WB_ProgressSlider_C.OnValueChanged
struct UWB_ProgressSlider_C_OnValueChanged_Params
{
	float                                              SliderValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_ProgressSlider.WB_ProgressSlider_C.BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_5_OnFocused__DelegateSignature
struct UWB_ProgressSlider_C_BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_5_OnFocused__DelegateSignature_Params
{
};

// Function WB_ProgressSlider.WB_ProgressSlider_C.BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_6_OnUnfocused__DelegateSignature
struct UWB_ProgressSlider_C_BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_6_OnUnfocused__DelegateSignature_Params
{
};

// Function WB_ProgressSlider.WB_ProgressSlider_C.BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_44_OnHovered__DelegateSignature
struct UWB_ProgressSlider_C_BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_44_OnHovered__DelegateSignature_Params
{
};

// Function WB_ProgressSlider.WB_ProgressSlider_C.BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_45_OnUnhovered__DelegateSignature
struct UWB_ProgressSlider_C_BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_45_OnUnhovered__DelegateSignature_Params
{
};

// Function WB_ProgressSlider.WB_ProgressSlider_C.BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_58_OnClicked__DelegateSignature
struct UWB_ProgressSlider_C_BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_58_OnClicked__DelegateSignature_Params
{
};

// Function WB_ProgressSlider.WB_ProgressSlider_C.ExecuteUbergraph_WB_ProgressSlider
struct UWB_ProgressSlider_C_ExecuteUbergraph_WB_ProgressSlider_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_ProgressSlider.WB_ProgressSlider_C.OnUnhovered__DelegateSignature
struct UWB_ProgressSlider_C_OnUnhovered__DelegateSignature_Params
{
};

// Function WB_ProgressSlider.WB_ProgressSlider_C.OnProgressChanged__DelegateSignature
struct UWB_ProgressSlider_C_OnProgressChanged__DelegateSignature_Params
{
	float                                              Value;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_ProgressSlider.WB_ProgressSlider_C.OnHovered__DelegateSignature
struct UWB_ProgressSlider_C_OnHovered__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
