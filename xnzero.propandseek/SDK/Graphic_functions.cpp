// Name: pns, Version: 1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Graphic.Graphic_C.AdjustPostProcessing
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UGraphic_C::AdjustPostProcessing()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Graphic.Graphic_C.AdjustPostProcessing");

	UGraphic_C_AdjustPostProcessing_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Graphic.Graphic_C.CheckDeveloperMode
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UGraphic_C::CheckDeveloperMode()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Graphic.Graphic_C.CheckDeveloperMode");

	UGraphic_C_CheckDeveloperMode_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Graphic.Graphic_C.InitToDefault
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UGraphic_C::InitToDefault()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Graphic.Graphic_C.InitToDefault");

	UGraphic_C_InitToDefault_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Graphic.Graphic_C.ConvertFrameRateLimit
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		float                                              FrameRate                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                FrameRateOptionIndex                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGraphic_C::ConvertFrameRateLimit(float FrameRate, int* FrameRateOptionIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Graphic.Graphic_C.ConvertFrameRateLimit");

	UGraphic_C_ConvertFrameRateLimit_Params params {};
	params.FrameRate = FrameRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FrameRateOptionIndex != nullptr)
		*FrameRateOptionIndex = params.FrameRateOptionIndex;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Graphic.Graphic_C.DetectCurrent
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<int>                                        DetectedOptionsIndex                                       (Parm, OutParm, ZeroConstructor)
void UGraphic_C::DetectCurrent(TArray<int>* DetectedOptionsIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Graphic.Graphic_C.DetectCurrent");

	UGraphic_C_DetectCurrent_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DetectedOptionsIndex != nullptr)
		*DetectedOptionsIndex = params.DetectedOptionsIndex;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Graphic.Graphic_C.ToggleCinemaMode
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               On_                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGraphic_C::ToggleCinemaMode(bool On_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Graphic.Graphic_C.ToggleCinemaMode");

	UGraphic_C_ToggleCinemaMode_Params params {};
	params.On_ = On_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Graphic.Graphic_C.UpdateScreenMode
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UGraphic_C::UpdateScreenMode()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Graphic.Graphic_C.UpdateScreenMode");

	UGraphic_C_UpdateScreenMode_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Graphic.Graphic_C.UpdateResolution
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     Resolution                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UGraphic_C::UpdateResolution(const struct FString& Resolution)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Graphic.Graphic_C.UpdateResolution");

	UGraphic_C_UpdateResolution_Params params {};
	params.Resolution = Resolution;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Graphic.Graphic_C.InitScreenResolution
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UGraphic_C::InitScreenResolution()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Graphic.Graphic_C.InitScreenResolution");

	UGraphic_C_InitScreenResolution_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Graphic.Graphic_C.Save
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UGraphic_C::Save()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Graphic.Graphic_C.Save");

	UGraphic_C_Save_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Graphic.Graphic_C.Init
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UGraphic_C::Init()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Graphic.Graphic_C.Init");

	UGraphic_C_Init_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Graphic.Graphic_C.ToggleScreenshotMode
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ScreenShotMode                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGraphic_C::ToggleScreenshotMode(bool ScreenShotMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Graphic.Graphic_C.ToggleScreenshotMode");

	UGraphic_C_ToggleScreenshotMode_Params params {};
	params.ScreenShotMode = ScreenShotMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Graphic.Graphic_C.PC
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class AFPS_PC_C*                                   AsFPS_PC                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGraphic_C::PC(class AFPS_PC_C** AsFPS_PC)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Graphic.Graphic_C.PC");

	UGraphic_C_PC_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsFPS_PC != nullptr)
		*AsFPS_PC = params.AsFPS_PC;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Graphic.Graphic_C.UpdateScreenshotMode
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UGraphic_C::UpdateScreenshotMode()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Graphic.Graphic_C.UpdateScreenshotMode");

	UGraphic_C_UpdateScreenshotMode_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Graphic.Graphic_C.GI
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UGI2_C*                                      AsGI2                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGraphic_C::GI(class UGI2_C** AsGI2)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Graphic.Graphic_C.GI");

	UGraphic_C_GI_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsGI2 != nullptr)
		*AsGI2 = params.AsGI2;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Graphic.Graphic_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UGraphic_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Graphic.Graphic_C.Construct");

	UGraphic_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Graphic.Graphic_C.BndEvt__CinemaOn_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UGraphic_C::BndEvt__CinemaOn_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Graphic.Graphic_C.BndEvt__CinemaOn_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature");

	UGraphic_C_BndEvt__CinemaOn_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Graphic.Graphic_C.BndEvt__CinemaOff_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UGraphic_C::BndEvt__CinemaOff_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Graphic.Graphic_C.BndEvt__CinemaOff_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature");

	UGraphic_C_BndEvt__CinemaOff_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Graphic.Graphic_C.BndEvt__Menu03_VerticalSync_K2Node_ComponentBoundEvent_12_OnStateChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FName                                       StateName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                StateIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGraphic_C::BndEvt__Menu03_VerticalSync_K2Node_ComponentBoundEvent_12_OnStateChanged__DelegateSignature(const struct FName& StateName, int StateIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Graphic.Graphic_C.BndEvt__Menu03_VerticalSync_K2Node_ComponentBoundEvent_12_OnStateChanged__DelegateSignature");

	UGraphic_C_BndEvt__Menu03_VerticalSync_K2Node_ComponentBoundEvent_12_OnStateChanged__DelegateSignature_Params params {};
	params.StateName = StateName;
	params.StateIndex = StateIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Graphic.Graphic_C.BndEvt__Menu01_ScreenMode_K2Node_ComponentBoundEvent_14_OnSelectionChanged (ComboBox)__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FString                                     SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		TEnumAsByte<SlateCore_ESelectInfo>                 SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGraphic_C::BndEvt__Menu01_ScreenMode_K2Node_ComponentBoundEvent_14_OnSelectionChanged__ComboBox___DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<SlateCore_ESelectInfo> SelectionType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Graphic.Graphic_C.BndEvt__Menu01_ScreenMode_K2Node_ComponentBoundEvent_14_OnSelectionChanged (ComboBox)__DelegateSignature");

	UGraphic_C_BndEvt__Menu01_ScreenMode_K2Node_ComponentBoundEvent_14_OnSelectionChanged__ComboBox___DelegateSignature_Params params {};
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Graphic.Graphic_C.BndEvt__Menu02_ScreenResolution_K2Node_ComponentBoundEvent_15_OnSelectionChanged (ComboBox)__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FString                                     SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		TEnumAsByte<SlateCore_ESelectInfo>                 SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGraphic_C::BndEvt__Menu02_ScreenResolution_K2Node_ComponentBoundEvent_15_OnSelectionChanged__ComboBox___DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<SlateCore_ESelectInfo> SelectionType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Graphic.Graphic_C.BndEvt__Menu02_ScreenResolution_K2Node_ComponentBoundEvent_15_OnSelectionChanged (ComboBox)__DelegateSignature");

	UGraphic_C_BndEvt__Menu02_ScreenResolution_K2Node_ComponentBoundEvent_15_OnSelectionChanged__ComboBox___DelegateSignature_Params params {};
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Graphic.Graphic_C.BndEvt__Menu04_ScreenshotMode_K2Node_ComponentBoundEvent_16_OnStateChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FName                                       StateName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                StateIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGraphic_C::BndEvt__Menu04_ScreenshotMode_K2Node_ComponentBoundEvent_16_OnStateChanged__DelegateSignature(const struct FName& StateName, int StateIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Graphic.Graphic_C.BndEvt__Menu04_ScreenshotMode_K2Node_ComponentBoundEvent_16_OnStateChanged__DelegateSignature");

	UGraphic_C_BndEvt__Menu04_ScreenshotMode_K2Node_ComponentBoundEvent_16_OnStateChanged__DelegateSignature_Params params {};
	params.StateName = StateName;
	params.StateIndex = StateIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Graphic.Graphic_C.OnModified
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UGraphic_C::OnModified()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Graphic.Graphic_C.OnModified");

	UGraphic_C_OnModified_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Graphic.Graphic_C.BndEvt__Master_K2Node_ComponentBoundEvent_1_OnSliderChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		float                                              ValueNormalized                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGraphic_C::BndEvt__Master_K2Node_ComponentBoundEvent_1_OnSliderChanged__DelegateSignature(float ValueNormalized, float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Graphic.Graphic_C.BndEvt__Master_K2Node_ComponentBoundEvent_1_OnSliderChanged__DelegateSignature");

	UGraphic_C_BndEvt__Master_K2Node_ComponentBoundEvent_1_OnSliderChanged__DelegateSignature_Params params {};
	params.ValueNormalized = ValueNormalized;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Graphic.Graphic_C.BndEvt__Menu05_ViewChat_K2Node_ComponentBoundEvent_0_OnStateChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FName                                       StateName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                StateIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGraphic_C::BndEvt__Menu05_ViewChat_K2Node_ComponentBoundEvent_0_OnStateChanged__DelegateSignature(const struct FName& StateName, int StateIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Graphic.Graphic_C.BndEvt__Menu05_ViewChat_K2Node_ComponentBoundEvent_0_OnStateChanged__DelegateSignature");

	UGraphic_C_BndEvt__Menu05_ViewChat_K2Node_ComponentBoundEvent_0_OnStateChanged__DelegateSignature_Params params {};
	params.StateName = StateName;
	params.StateIndex = StateIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Graphic.Graphic_C.ExecuteUbergraph_Graphic
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGraphic_C::ExecuteUbergraph_Graphic(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Graphic.Graphic_C.ExecuteUbergraph_Graphic");

	UGraphic_C_ExecuteUbergraph_Graphic_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Graphic.Graphic_C.OnSettingsModified__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UGraphic_C::OnSettingsModified__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Graphic.Graphic_C.OnSettingsModified__DelegateSignature");

	UGraphic_C_OnSettingsModified__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
