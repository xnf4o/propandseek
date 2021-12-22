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
//		Name   -> Function WB_ProgressSlider.WB_ProgressSlider_C.OnKeyUp
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWB_ProgressSlider_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_ProgressSlider.WB_ProgressSlider_C.OnKeyUp");

	UWB_ProgressSlider_C_OnKeyUp_Params params {};
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_ProgressSlider.WB_ProgressSlider_C.OnKeyDown
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWB_ProgressSlider_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_ProgressSlider.WB_ProgressSlider_C.OnKeyDown");

	UWB_ProgressSlider_C_OnKeyDown_Params params {};
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_ProgressSlider.WB_ProgressSlider_C.OnPreviewKeyDown
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWB_ProgressSlider_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_ProgressSlider.WB_ProgressSlider_C.OnPreviewKeyDown");

	UWB_ProgressSlider_C_OnPreviewKeyDown_Params params {};
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_ProgressSlider.WB_ProgressSlider_C.DecreaseSliderValue
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              StepSize                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_ProgressSlider_C::DecreaseSliderValue(float StepSize)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_ProgressSlider.WB_ProgressSlider_C.DecreaseSliderValue");

	UWB_ProgressSlider_C_DecreaseSliderValue_Params params {};
	params.StepSize = StepSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_ProgressSlider.WB_ProgressSlider_C.IncreaseSliderValue
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              StepSize                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_ProgressSlider_C::IncreaseSliderValue(float StepSize)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_ProgressSlider.WB_ProgressSlider_C.IncreaseSliderValue");

	UWB_ProgressSlider_C_IncreaseSliderValue_Params params {};
	params.StepSize = StepSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_ProgressSlider.WB_ProgressSlider_C.SetProgressTextValue
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              ProgressValue                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              MinValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              MaxValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FString                                     Definition                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UWB_ProgressSlider_C::SetProgressTextValue(float ProgressValue, float MinValue, float MaxValue, const struct FString& Definition)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_ProgressSlider.WB_ProgressSlider_C.SetProgressTextValue");

	UWB_ProgressSlider_C_SetProgressTextValue_Params params {};
	params.ProgressValue = ProgressValue;
	params.MinValue = MinValue;
	params.MaxValue = MaxValue;
	params.Definition = Definition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_ProgressSlider.WB_ProgressSlider_C.SetProgressFont
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UObject*                                     Font                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UFontFace*                                   FontFace                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                FontSize                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_ProgressSlider_C::SetProgressFont(class UObject* Font, class UFontFace* FontFace, int FontSize, const struct FLinearColor& Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_ProgressSlider.WB_ProgressSlider_C.SetProgressFont");

	UWB_ProgressSlider_C_SetProgressFont_Params params {};
	params.Font = Font;
	params.FontFace = FontFace;
	params.FontSize = FontSize;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_ProgressSlider.WB_ProgressSlider_C.SetSliderColor
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_ProgressSlider_C::SetSliderColor(const struct FLinearColor& Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_ProgressSlider.WB_ProgressSlider_C.SetSliderColor");

	UWB_ProgressSlider_C_SetSliderColor_Params params {};
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_ProgressSlider.WB_ProgressSlider_C.SetButtonsEnabled
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               BIsEnabled                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_ProgressSlider_C::SetButtonsEnabled(bool BIsEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_ProgressSlider.WB_ProgressSlider_C.SetButtonsEnabled");

	UWB_ProgressSlider_C_SetButtonsEnabled_Params params {};
	params.BIsEnabled = BIsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_ProgressSlider.WB_ProgressSlider_C.ConvertOpacityToNormal
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FLinearColor                                InColor                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FLinearColor UWB_ProgressSlider_C::ConvertOpacityToNormal(const struct FLinearColor& InColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_ProgressSlider.WB_ProgressSlider_C.ConvertOpacityToNormal");

	UWB_ProgressSlider_C_ConvertOpacityToNormal_Params params {};
	params.InColor = InColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_ProgressSlider.WB_ProgressSlider_C.Set_FontInfoHovered
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWB_ProgressSlider_C::Set_FontInfoHovered()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_ProgressSlider.WB_ProgressSlider_C.Set_FontInfoHovered");

	UWB_ProgressSlider_C_Set_FontInfoHovered_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_ProgressSlider.WB_ProgressSlider_C.Set_FontInfoNormal
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWB_ProgressSlider_C::Set_FontInfoNormal()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_ProgressSlider.WB_ProgressSlider_C.Set_FontInfoNormal");

	UWB_ProgressSlider_C_Set_FontInfoNormal_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_ProgressSlider.WB_ProgressSlider_C.HasAnyFocus
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWB_ProgressSlider_C::HasAnyFocus()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_ProgressSlider.WB_ProgressSlider_C.HasAnyFocus");

	UWB_ProgressSlider_C_HasAnyFocus_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_ProgressSlider.WB_ProgressSlider_C.CheckFocus
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWB_ProgressSlider_C::CheckFocus()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_ProgressSlider.WB_ProgressSlider_C.CheckFocus");

	UWB_ProgressSlider_C_CheckFocus_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_ProgressSlider.WB_ProgressSlider_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWB_ProgressSlider_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_ProgressSlider.WB_ProgressSlider_C.Construct");

	UWB_ProgressSlider_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_ProgressSlider.WB_ProgressSlider_C.BndEvt__ProgressSlider_K2Node_ComponentBoundEvent_27_OnFloatValueChangedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_ProgressSlider_C::BndEvt__ProgressSlider_K2Node_ComponentBoundEvent_27_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_ProgressSlider.WB_ProgressSlider_C.BndEvt__ProgressSlider_K2Node_ComponentBoundEvent_27_OnFloatValueChangedEvent__DelegateSignature");

	UWB_ProgressSlider_C_BndEvt__ProgressSlider_K2Node_ComponentBoundEvent_27_OnFloatValueChangedEvent__DelegateSignature_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_ProgressSlider.WB_ProgressSlider_C.UpdateSliderText
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWB_ProgressSlider_C::UpdateSliderText()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_ProgressSlider.WB_ProgressSlider_C.UpdateSliderText");

	UWB_ProgressSlider_C_UpdateSliderText_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_ProgressSlider.WB_ProgressSlider_C.SliderClickLeft
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWB_ProgressSlider_C::SliderClickLeft()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_ProgressSlider.WB_ProgressSlider_C.SliderClickLeft");

	UWB_ProgressSlider_C_SliderClickLeft_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_ProgressSlider.WB_ProgressSlider_C.SliderClickRight
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWB_ProgressSlider_C::SliderClickRight()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_ProgressSlider.WB_ProgressSlider_C.SliderClickRight");

	UWB_ProgressSlider_C_SliderClickRight_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_ProgressSlider.WB_ProgressSlider_C.CheckSliderHovered
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWB_ProgressSlider_C::CheckSliderHovered()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_ProgressSlider.WB_ProgressSlider_C.CheckSliderHovered");

	UWB_ProgressSlider_C_CheckSliderHovered_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_ProgressSlider.WB_ProgressSlider_C.OnValueChanged
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              SliderValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_ProgressSlider_C::OnValueChanged(float SliderValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_ProgressSlider.WB_ProgressSlider_C.OnValueChanged");

	UWB_ProgressSlider_C_OnValueChanged_Params params {};
	params.SliderValue = SliderValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_ProgressSlider.WB_ProgressSlider_C.BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_5_OnFocused__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWB_ProgressSlider_C::BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_5_OnFocused__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_ProgressSlider.WB_ProgressSlider_C.BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_5_OnFocused__DelegateSignature");

	UWB_ProgressSlider_C_BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_5_OnFocused__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_ProgressSlider.WB_ProgressSlider_C.BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_6_OnUnfocused__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWB_ProgressSlider_C::BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_6_OnUnfocused__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_ProgressSlider.WB_ProgressSlider_C.BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_6_OnUnfocused__DelegateSignature");

	UWB_ProgressSlider_C_BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_6_OnUnfocused__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_ProgressSlider.WB_ProgressSlider_C.BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_44_OnHovered__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWB_ProgressSlider_C::BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_44_OnHovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_ProgressSlider.WB_ProgressSlider_C.BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_44_OnHovered__DelegateSignature");

	UWB_ProgressSlider_C_BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_44_OnHovered__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_ProgressSlider.WB_ProgressSlider_C.BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_45_OnUnhovered__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWB_ProgressSlider_C::BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_45_OnUnhovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_ProgressSlider.WB_ProgressSlider_C.BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_45_OnUnhovered__DelegateSignature");

	UWB_ProgressSlider_C_BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_45_OnUnhovered__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_ProgressSlider.WB_ProgressSlider_C.BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_58_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWB_ProgressSlider_C::BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_58_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_ProgressSlider.WB_ProgressSlider_C.BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_58_OnClicked__DelegateSignature");

	UWB_ProgressSlider_C_BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_58_OnClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_ProgressSlider.WB_ProgressSlider_C.ExecuteUbergraph_WB_ProgressSlider
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_ProgressSlider_C::ExecuteUbergraph_WB_ProgressSlider(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_ProgressSlider.WB_ProgressSlider_C.ExecuteUbergraph_WB_ProgressSlider");

	UWB_ProgressSlider_C_ExecuteUbergraph_WB_ProgressSlider_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_ProgressSlider.WB_ProgressSlider_C.OnUnhovered__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWB_ProgressSlider_C::OnUnhovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_ProgressSlider.WB_ProgressSlider_C.OnUnhovered__DelegateSignature");

	UWB_ProgressSlider_C_OnUnhovered__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_ProgressSlider.WB_ProgressSlider_C.OnProgressChanged__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_ProgressSlider_C::OnProgressChanged__DelegateSignature(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_ProgressSlider.WB_ProgressSlider_C.OnProgressChanged__DelegateSignature");

	UWB_ProgressSlider_C_OnProgressChanged__DelegateSignature_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_ProgressSlider.WB_ProgressSlider_C.OnHovered__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWB_ProgressSlider_C::OnHovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_ProgressSlider.WB_ProgressSlider_C.OnHovered__DelegateSignature");

	UWB_ProgressSlider_C_OnHovered__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
