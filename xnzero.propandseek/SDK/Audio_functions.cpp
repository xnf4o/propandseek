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
//		Name   -> Function Audio.Audio_C.SetToDefault
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UAudio_C::SetToDefault()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Audio.Audio_C.SetToDefault");

	UAudio_C_SetToDefault_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Audio.Audio_C.Save
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UAudio_C::Save()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Audio.Audio_C.Save");

	UAudio_C_Save_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Audio.Audio_C.Init
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UAudio_C::Init()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Audio.Audio_C.Init");

	UAudio_C_Init_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Audio.Audio_C.GetText_4
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UAudio_C::GetText_4()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Audio.Audio_C.GetText_4");

	UAudio_C_GetText_4_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Audio.Audio_C.GetText_3
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UAudio_C::GetText_3()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Audio.Audio_C.GetText_3");

	UAudio_C_GetText_3_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Audio.Audio_C.GetText_2
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UAudio_C::GetText_2()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Audio.Audio_C.GetText_2");

	UAudio_C_GetText_2_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Audio.Audio_C.GI
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UGI2_C*                                      AsGI2                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAudio_C::GI(class UGI2_C** AsGI2)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Audio.Audio_C.GI");

	UAudio_C_GI_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsGI2 != nullptr)
		*AsGI2 = params.AsGI2;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Audio.Audio_C.GetText_1
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UAudio_C::GetText_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Audio.Audio_C.GetText_1");

	UAudio_C_GetText_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Audio.Audio_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UAudio_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Audio.Audio_C.Construct");

	UAudio_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Audio.Audio_C.BndEvt__WB_Button03_Options_K2Node_ComponentBoundEvent_1_OnSliderChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		float                                              ValueNormalized                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAudio_C::BndEvt__WB_Button03_Options_K2Node_ComponentBoundEvent_1_OnSliderChanged__DelegateSignature(float ValueNormalized, float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Audio.Audio_C.BndEvt__WB_Button03_Options_K2Node_ComponentBoundEvent_1_OnSliderChanged__DelegateSignature");

	UAudio_C_BndEvt__WB_Button03_Options_K2Node_ComponentBoundEvent_1_OnSliderChanged__DelegateSignature_Params params {};
	params.ValueNormalized = ValueNormalized;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Audio.Audio_C.BndEvt__Music_K2Node_ComponentBoundEvent_3_OnSliderChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		float                                              ValueNormalized                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAudio_C::BndEvt__Music_K2Node_ComponentBoundEvent_3_OnSliderChanged__DelegateSignature(float ValueNormalized, float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Audio.Audio_C.BndEvt__Music_K2Node_ComponentBoundEvent_3_OnSliderChanged__DelegateSignature");

	UAudio_C_BndEvt__Music_K2Node_ComponentBoundEvent_3_OnSliderChanged__DelegateSignature_Params params {};
	params.ValueNormalized = ValueNormalized;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Audio.Audio_C.BndEvt__UiSFX_K2Node_ComponentBoundEvent_4_OnSliderChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		float                                              ValueNormalized                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAudio_C::BndEvt__UiSFX_K2Node_ComponentBoundEvent_4_OnSliderChanged__DelegateSignature(float ValueNormalized, float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Audio.Audio_C.BndEvt__UiSFX_K2Node_ComponentBoundEvent_4_OnSliderChanged__DelegateSignature");

	UAudio_C_BndEvt__UiSFX_K2Node_ComponentBoundEvent_4_OnSliderChanged__DelegateSignature_Params params {};
	params.ValueNormalized = ValueNormalized;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Audio.Audio_C.BndEvt__GameSFX_K2Node_ComponentBoundEvent_5_OnSliderChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		float                                              ValueNormalized                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAudio_C::BndEvt__GameSFX_K2Node_ComponentBoundEvent_5_OnSliderChanged__DelegateSignature(float ValueNormalized, float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Audio.Audio_C.BndEvt__GameSFX_K2Node_ComponentBoundEvent_5_OnSliderChanged__DelegateSignature");

	UAudio_C_BndEvt__GameSFX_K2Node_ComponentBoundEvent_5_OnSliderChanged__DelegateSignature_Params params {};
	params.ValueNormalized = ValueNormalized;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Audio.Audio_C.BndEvt__Ambience_K2Node_ComponentBoundEvent_15_OnSliderChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		float                                              ValueNormalized                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAudio_C::BndEvt__Ambience_K2Node_ComponentBoundEvent_15_OnSliderChanged__DelegateSignature(float ValueNormalized, float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Audio.Audio_C.BndEvt__Ambience_K2Node_ComponentBoundEvent_15_OnSliderChanged__DelegateSignature");

	UAudio_C_BndEvt__Ambience_K2Node_ComponentBoundEvent_15_OnSliderChanged__DelegateSignature_Params params {};
	params.ValueNormalized = ValueNormalized;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Audio.Audio_C.OnModifiedC
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UAudio_C::OnModifiedC()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Audio.Audio_C.OnModifiedC");

	UAudio_C_OnModifiedC_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Audio.Audio_C.BndEvt__Announcer_K2Node_ComponentBoundEvent_0_OnSliderChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		float                                              ValueNormalized                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAudio_C::BndEvt__Announcer_K2Node_ComponentBoundEvent_0_OnSliderChanged__DelegateSignature(float ValueNormalized, float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Audio.Audio_C.BndEvt__Announcer_K2Node_ComponentBoundEvent_0_OnSliderChanged__DelegateSignature");

	UAudio_C_BndEvt__Announcer_K2Node_ComponentBoundEvent_0_OnSliderChanged__DelegateSignature_Params params {};
	params.ValueNormalized = ValueNormalized;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Audio.Audio_C.ExecuteUbergraph_Audio
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAudio_C::ExecuteUbergraph_Audio(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Audio.Audio_C.ExecuteUbergraph_Audio");

	UAudio_C_ExecuteUbergraph_Audio_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Audio.Audio_C.OnModified__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UAudio_C::OnModified__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Audio.Audio_C.OnModified__DelegateSignature");

	UAudio_C_OnModified__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
