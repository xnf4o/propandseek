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
//		Name   -> Function WB_Button04_Text.WB_Button04_Text_C.IsDescriptionTextEmpty
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWB_Button04_Text_C::IsDescriptionTextEmpty()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Text.WB_Button04_Text_C.IsDescriptionTextEmpty");

	UWB_Button04_Text_C_IsDescriptionTextEmpty_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_Text.WB_Button04_Text_C.SetFontInfoDescription
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UObject*                                     Font                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UFontFace*                                   FontFace                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                FontSize                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button04_Text_C::SetFontInfoDescription(class UObject* Font, class UFontFace* FontFace, int FontSize, const struct FLinearColor& Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Text.WB_Button04_Text_C.SetFontInfoDescription");

	UWB_Button04_Text_C_SetFontInfoDescription_Params params {};
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
//		Name   -> Function WB_Button04_Text.WB_Button04_Text_C.SetFontInfoHeadline
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UObject*                                     Font                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UFontFace*                                   FontFace                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                FontSize                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button04_Text_C::SetFontInfoHeadline(class UObject* Font, class UFontFace* FontFace, int FontSize, const struct FLinearColor& Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Text.WB_Button04_Text_C.SetFontInfoHeadline");

	UWB_Button04_Text_C_SetFontInfoHeadline_Params params {};
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
//		Name   -> Function WB_Button04_Text.WB_Button04_Text_C.SetJustification
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<EJustification_EJustification>         EJustification                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button04_Text_C::SetJustification(TEnumAsByte<EJustification_EJustification> EJustification)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Text.WB_Button04_Text_C.SetJustification");

	UWB_Button04_Text_C_SetJustification_Params params {};
	params.EJustification = EJustification;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_Text.WB_Button04_Text_C.SetTextDescription
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
void UWB_Button04_Text_C::SetTextDescription(const struct FText& InText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Text.WB_Button04_Text_C.SetTextDescription");

	UWB_Button04_Text_C_SetTextDescription_Params params {};
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_Text.WB_Button04_Text_C.SetTextHeadline
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
void UWB_Button04_Text_C::SetTextHeadline(const struct FText& InText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Text.WB_Button04_Text_C.SetTextHeadline");

	UWB_Button04_Text_C_SetTextHeadline_Params params {};
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_Text.WB_Button04_Text_C.SetTextColor
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button04_Text_C::SetTextColor(const struct FLinearColor& Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Text.WB_Button04_Text_C.SetTextColor");

	UWB_Button04_Text_C_SetTextColor_Params params {};
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_Text.WB_Button04_Text_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWB_Button04_Text_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Text.WB_Button04_Text_C.Construct");

	UWB_Button04_Text_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_Text.WB_Button04_Text_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_Button04_Text_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Text.WB_Button04_Text_C.PreConstruct");

	UWB_Button04_Text_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_Text.WB_Button04_Text_C.OnHovered
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWB_Button04_Text_C::OnHovered()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Text.WB_Button04_Text_C.OnHovered");

	UWB_Button04_Text_C_OnHovered_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_Text.WB_Button04_Text_C.OnClicked
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWB_Button04_Text_C::OnClicked()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Text.WB_Button04_Text_C.OnClicked");

	UWB_Button04_Text_C_OnClicked_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_Text.WB_Button04_Text_C.OnUnhovered
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWB_Button04_Text_C::OnUnhovered()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Text.WB_Button04_Text_C.OnUnhovered");

	UWB_Button04_Text_C_OnUnhovered_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_Text.WB_Button04_Text_C.OnDisabled
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWB_Button04_Text_C::OnDisabled()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Text.WB_Button04_Text_C.OnDisabled");

	UWB_Button04_Text_C_OnDisabled_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_Text.WB_Button04_Text_C.UpdateSize
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWB_Button04_Text_C::UpdateSize()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Text.WB_Button04_Text_C.UpdateSize");

	UWB_Button04_Text_C_UpdateSize_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_Text.WB_Button04_Text_C.ExecuteUbergraph_WB_Button04_Text
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button04_Text_C::ExecuteUbergraph_WB_Button04_Text(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Text.WB_Button04_Text_C.ExecuteUbergraph_WB_Button04_Text");

	UWB_Button04_Text_C_ExecuteUbergraph_WB_Button04_Text_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
