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
//		Name   -> Function WB_Button01_FX.WB_Button01_FX_C.SetClickFX_Justification
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWB_Button01_FX_C::SetClickFX_Justification()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button01_FX.WB_Button01_FX_C.SetClickFX_Justification");

	UWB_Button01_FX_C_SetClickFX_Justification_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button01_FX.WB_Button01_FX_C.IsRightAligned
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWB_Button01_FX_C::IsRightAligned()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button01_FX.WB_Button01_FX_C.IsRightAligned");

	UWB_Button01_FX_C_IsRightAligned_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button01_FX.WB_Button01_FX_C.IsCenterAligned
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWB_Button01_FX_C::IsCenterAligned()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button01_FX.WB_Button01_FX_C.IsCenterAligned");

	UWB_Button01_FX_C_IsCenterAligned_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button01_FX.WB_Button01_FX_C.GetShineBorders
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		TArray<class UBorder*>                             Array                                                      (Parm, OutParm, ZeroConstructor)
void UWB_Button01_FX_C::GetShineBorders(TArray<class UBorder*>* Array)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button01_FX.WB_Button01_FX_C.GetShineBorders");

	UWB_Button01_FX_C_GetShineBorders_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button01_FX.WB_Button01_FX_C.SetShineSizeBoxesRightPadding
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<EJustification_EJustification>         Justification                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button01_FX_C::SetShineSizeBoxesRightPadding(TEnumAsByte<EJustification_EJustification> Justification)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button01_FX.WB_Button01_FX_C.SetShineSizeBoxesRightPadding");

	UWB_Button01_FX_C_SetShineSizeBoxesRightPadding_Params params {};
	params.Justification = Justification;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button01_FX.WB_Button01_FX_C.SetShineSizeBoxesHorizontalAlignment
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<SlateCore_EHorizontalAlignment>        InHorizontalAlignment                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button01_FX_C::SetShineSizeBoxesHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button01_FX.WB_Button01_FX_C.SetShineSizeBoxesHorizontalAlignment");

	UWB_Button01_FX_C_SetShineSizeBoxesHorizontalAlignment_Params params {};
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button01_FX.WB_Button01_FX_C.GetShineSizeBoxes
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		TArray<class USizeBox*>                            Array                                                      (Parm, OutParm, ZeroConstructor)
void UWB_Button01_FX_C::GetShineSizeBoxes(TArray<class USizeBox*>* Array)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button01_FX.WB_Button01_FX_C.GetShineSizeBoxes");

	UWB_Button01_FX_C_GetShineSizeBoxes_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button01_FX.WB_Button01_FX_C.OnHovered
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWB_Button01_FX_C::OnHovered()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button01_FX.WB_Button01_FX_C.OnHovered");

	UWB_Button01_FX_C_OnHovered_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button01_FX.WB_Button01_FX_C.OnUnhovered
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWB_Button01_FX_C::OnUnhovered()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button01_FX.WB_Button01_FX_C.OnUnhovered");

	UWB_Button01_FX_C_OnUnhovered_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button01_FX.WB_Button01_FX_C.OnClicked
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWB_Button01_FX_C::OnClicked()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button01_FX.WB_Button01_FX_C.OnClicked");

	UWB_Button01_FX_C_OnClicked_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button01_FX.WB_Button01_FX_C.UpdateJustification
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<EJustification_EJustification>         EJustification                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button01_FX_C::UpdateJustification(TEnumAsByte<EJustification_EJustification> EJustification)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button01_FX.WB_Button01_FX_C.UpdateJustification");

	UWB_Button01_FX_C_UpdateJustification_Params params {};
	params.EJustification = EJustification;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button01_FX.WB_Button01_FX_C.Update_OnHovered_FX
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWB_Button01_FX_C::Update_OnHovered_FX()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button01_FX.WB_Button01_FX_C.Update_OnHovered_FX");

	UWB_Button01_FX_C_Update_OnHovered_FX_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button01_FX.WB_Button01_FX_C.Update_HoveredFX01_Color
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                FX01_Color                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button01_FX_C::Update_HoveredFX01_Color(const struct FLinearColor& FX01_Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button01_FX.WB_Button01_FX_C.Update_HoveredFX01_Color");

	UWB_Button01_FX_C_Update_HoveredFX01_Color_Params params {};
	params.FX01_Color = FX01_Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button01_FX.WB_Button01_FX_C.Update_HoveredFX02_Color
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                FX02_Color                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button01_FX_C::Update_HoveredFX02_Color(const struct FLinearColor& FX02_Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button01_FX.WB_Button01_FX_C.Update_HoveredFX02_Color");

	UWB_Button01_FX_C_Update_HoveredFX02_Color_Params params {};
	params.FX02_Color = FX02_Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button01_FX.WB_Button01_FX_C.ShowBaselinePreview
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                PreviewColor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              PreviewTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button01_FX_C::ShowBaselinePreview(const struct FLinearColor& PreviewColor, float PreviewTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button01_FX.WB_Button01_FX_C.ShowBaselinePreview");

	UWB_Button01_FX_C_ShowBaselinePreview_Params params {};
	params.PreviewColor = PreviewColor;
	params.PreviewTime = PreviewTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button01_FX.WB_Button01_FX_C.Update_OnClicked_FX
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWB_Button01_FX_C::Update_OnClicked_FX()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button01_FX.WB_Button01_FX_C.Update_OnClicked_FX");

	UWB_Button01_FX_C_Update_OnClicked_FX_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button01_FX.WB_Button01_FX_C.UpdateOnClickedFontInfo
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UObject*                                     Font                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UFontFace*                                   FontFace                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                FontSize                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button01_FX_C::UpdateOnClickedFontInfo(class UObject* Font, class UFontFace* FontFace, int FontSize, const struct FLinearColor& Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button01_FX.WB_Button01_FX_C.UpdateOnClickedFontInfo");

	UWB_Button01_FX_C_UpdateOnClickedFontInfo_Params params {};
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
//		Name   -> Function WB_Button01_FX.WB_Button01_FX_C.UpdateOnClickedTextJustification
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<EJustification_EJustification>         EJustification                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button01_FX_C::UpdateOnClickedTextJustification(TEnumAsByte<EJustification_EJustification> EJustification)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button01_FX.WB_Button01_FX_C.UpdateOnClickedTextJustification");

	UWB_Button01_FX_C_UpdateOnClickedTextJustification_Params params {};
	params.EJustification = EJustification;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button01_FX.WB_Button01_FX_C.UpdateOnClickedText
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
void UWB_Button01_FX_C::UpdateOnClickedText(const struct FText& InText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button01_FX.WB_Button01_FX_C.UpdateOnClickedText");

	UWB_Button01_FX_C_UpdateOnClickedText_Params params {};
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button01_FX.WB_Button01_FX_C.Update_ClickedFX_Color
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button01_FX_C::Update_ClickedFX_Color(const struct FLinearColor& Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button01_FX.WB_Button01_FX_C.Update_ClickedFX_Color");

	UWB_Button01_FX_C_Update_ClickedFX_Color_Params params {};
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button01_FX.WB_Button01_FX_C.ExecuteUbergraph_WB_Button01_FX
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button01_FX_C::ExecuteUbergraph_WB_Button01_FX(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button01_FX.WB_Button01_FX_C.ExecuteUbergraph_WB_Button01_FX");

	UWB_Button01_FX_C_ExecuteUbergraph_WB_Button01_FX_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
