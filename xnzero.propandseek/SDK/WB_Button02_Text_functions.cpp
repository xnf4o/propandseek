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
//		Name   -> Function WB_Button02_Text.WB_Button02_Text_C.GetHB_Text_Size
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FVector2D                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FVector2D UWB_Button02_Text_C::GetHB_Text_Size()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_Text.WB_Button02_Text_C.GetHB_Text_Size");

	UWB_Button02_Text_C_GetHB_Text_Size_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button02_Text.WB_Button02_Text_C.UpdateFontInfo
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UFont*                                       Font                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UFontFace*                                   FontFace                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                FontSize                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button02_Text_C::UpdateFontInfo(class UFont* Font, class UFontFace* FontFace, int FontSize, const struct FLinearColor& Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_Text.WB_Button02_Text_C.UpdateFontInfo");

	UWB_Button02_Text_C_UpdateFontInfo_Params params {};
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
//		Name   -> Function WB_Button02_Text.WB_Button02_Text_C.AddHintIcon
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UClass*                                      Widget20x20                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button02_Text_C::AddHintIcon(class UClass* Widget20x20)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_Text.WB_Button02_Text_C.AddHintIcon");

	UWB_Button02_Text_C_AddHintIcon_Params params {};
	params.Widget20x20 = Widget20x20;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button02_Text.WB_Button02_Text_C.UpdateText
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
void UWB_Button02_Text_C::UpdateText(const struct FText& InText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_Text.WB_Button02_Text_C.UpdateText");

	UWB_Button02_Text_C_UpdateText_Params params {};
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button02_Text.WB_Button02_Text_C.UpdateJustification
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<EJustification_EJustification>         Justification                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button02_Text_C::UpdateJustification(TEnumAsByte<EJustification_EJustification> Justification)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_Text.WB_Button02_Text_C.UpdateJustification");

	UWB_Button02_Text_C_UpdateJustification_Params params {};
	params.Justification = Justification;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button02_Text.WB_Button02_Text_C.ExecuteUbergraph_WB_Button02_Text
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button02_Text_C::ExecuteUbergraph_WB_Button02_Text(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button02_Text.WB_Button02_Text_C.ExecuteUbergraph_WB_Button02_Text");

	UWB_Button02_Text_C_ExecuteUbergraph_WB_Button02_Text_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
