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
//		Name   -> Function WB_Button04_Image.WB_Button04_Image_C.SetVignetteColor
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                InContentColorAndOpacity                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button04_Image_C::SetVignetteColor(const struct FLinearColor& InContentColorAndOpacity)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Image.WB_Button04_Image_C.SetVignetteColor");

	UWB_Button04_Image_C_SetVignetteColor_Params params {};
	params.InContentColorAndOpacity = InContentColorAndOpacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_Image.WB_Button04_Image_C.SetImageColor
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button04_Image_C::SetImageColor(const struct FLinearColor& Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Image.WB_Button04_Image_C.SetImageColor");

	UWB_Button04_Image_C_SetImageColor_Params params {};
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_Image.WB_Button04_Image_C.UpdateSaturation
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Saturation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWB_Button04_Image_C::UpdateSaturation(float Saturation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Image.WB_Button04_Image_C.UpdateSaturation");

	UWB_Button04_Image_C_UpdateSaturation_Params params {};
	params.Saturation = Saturation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_Image.WB_Button04_Image_C.FindTextureSize
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UTexture2D*                                  Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector2D                                   Return_Value                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button04_Image_C::FindTextureSize(class UTexture2D* Texture, struct FVector2D* Return_Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Image.WB_Button04_Image_C.FindTextureSize");

	UWB_Button04_Image_C_FindTextureSize_Params params {};
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_Image.WB_Button04_Image_C.SetImageTranslation
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector2D                                   Translation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button04_Image_C::SetImageTranslation(const struct FVector2D& Translation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Image.WB_Button04_Image_C.SetImageTranslation");

	UWB_Button04_Image_C_SetImageTranslation_Params params {};
	params.Translation = Translation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_Image.WB_Button04_Image_C.SetImageBrush
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UObject*                                     Brush                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button04_Image_C::SetImageBrush(class UObject* Brush)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Image.WB_Button04_Image_C.SetImageBrush");

	UWB_Button04_Image_C_SetImageBrush_Params params {};
	params.Brush = Brush;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_Image.WB_Button04_Image_C.OnHovered
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWB_Button04_Image_C::OnHovered()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Image.WB_Button04_Image_C.OnHovered");

	UWB_Button04_Image_C_OnHovered_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_Image.WB_Button04_Image_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWB_Button04_Image_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Image.WB_Button04_Image_C.Construct");

	UWB_Button04_Image_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_Image.WB_Button04_Image_C.OnClicked
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWB_Button04_Image_C::OnClicked()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Image.WB_Button04_Image_C.OnClicked");

	UWB_Button04_Image_C_OnClicked_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_Image.WB_Button04_Image_C.OnUnhovered
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWB_Button04_Image_C::OnUnhovered()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Image.WB_Button04_Image_C.OnUnhovered");

	UWB_Button04_Image_C_OnUnhovered_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_Image.WB_Button04_Image_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_Button04_Image_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Image.WB_Button04_Image_C.PreConstruct");

	UWB_Button04_Image_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_Image.WB_Button04_Image_C.OnDisabled
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWB_Button04_Image_C::OnDisabled()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Image.WB_Button04_Image_C.OnDisabled");

	UWB_Button04_Image_C_OnDisabled_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_Button04_Image.WB_Button04_Image_C.ExecuteUbergraph_WB_Button04_Image
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button04_Image_C::ExecuteUbergraph_WB_Button04_Image(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button04_Image.WB_Button04_Image_C.ExecuteUbergraph_WB_Button04_Image");

	UWB_Button04_Image_C_ExecuteUbergraph_WB_Button04_Image_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
