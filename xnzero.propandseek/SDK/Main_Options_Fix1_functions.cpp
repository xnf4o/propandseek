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
//		Name   -> Function Main_Options_Fix1.Main_Options_Fix1_C.ClearAll
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UMain_Options_Fix1_C::ClearAll()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Main_Options_Fix1.Main_Options_Fix1_C.ClearAll");

	UMain_Options_Fix1_C_ClearAll_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Main_Options_Fix1.Main_Options_Fix1_C.ToggleVisibility
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Visible_                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UMain_Options_Fix1_C::ToggleVisibility(bool Visible_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Main_Options_Fix1.Main_Options_Fix1_C.ToggleVisibility");

	UMain_Options_Fix1_C_ToggleVisibility_Params params {};
	params.Visible_ = Visible_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Main_Options_Fix1.Main_Options_Fix1_C.OnControlsButtonPressed
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UMain_Options_Fix1_C::OnControlsButtonPressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Main_Options_Fix1.Main_Options_Fix1_C.OnControlsButtonPressed");

	UMain_Options_Fix1_C_OnControlsButtonPressed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Main_Options_Fix1.Main_Options_Fix1_C.OnAudioButtonPressed
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UMain_Options_Fix1_C::OnAudioButtonPressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Main_Options_Fix1.Main_Options_Fix1_C.OnAudioButtonPressed");

	UMain_Options_Fix1_C_OnAudioButtonPressed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Main_Options_Fix1.Main_Options_Fix1_C.OnVideoButtonPressed
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UMain_Options_Fix1_C::OnVideoButtonPressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Main_Options_Fix1.Main_Options_Fix1_C.OnVideoButtonPressed");

	UMain_Options_Fix1_C_OnVideoButtonPressed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Main_Options_Fix1.Main_Options_Fix1_C.OnPreferencesButtonPressed
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UMain_Options_Fix1_C::OnPreferencesButtonPressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Main_Options_Fix1.Main_Options_Fix1_C.OnPreferencesButtonPressed");

	UMain_Options_Fix1_C_OnPreferencesButtonPressed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Main_Options_Fix1.Main_Options_Fix1_C.OnOpenOptionsMenu
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<EOptionsMenu_EOptionsMenu>             Initial                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMain_Options_Fix1_C::OnOpenOptionsMenu(TEnumAsByte<EOptionsMenu_EOptionsMenu> Initial)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Main_Options_Fix1.Main_Options_Fix1_C.OnOpenOptionsMenu");

	UMain_Options_Fix1_C_OnOpenOptionsMenu_Params params {};
	params.Initial = Initial;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Main_Options_Fix1.Main_Options_Fix1_C.BndEvt__GraphicButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UMain_Options_Fix1_C::BndEvt__GraphicButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Main_Options_Fix1.Main_Options_Fix1_C.BndEvt__GraphicButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UMain_Options_Fix1_C_BndEvt__GraphicButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Main_Options_Fix1.Main_Options_Fix1_C.BndEvt__AudioButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UMain_Options_Fix1_C::BndEvt__AudioButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Main_Options_Fix1.Main_Options_Fix1_C.BndEvt__AudioButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UMain_Options_Fix1_C_BndEvt__AudioButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Main_Options_Fix1.Main_Options_Fix1_C.BndEvt__InputButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UMain_Options_Fix1_C::BndEvt__InputButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Main_Options_Fix1.Main_Options_Fix1_C.BndEvt__InputButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	UMain_Options_Fix1_C_BndEvt__InputButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Main_Options_Fix1.Main_Options_Fix1_C.BndEvt__SaveButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UMain_Options_Fix1_C::BndEvt__SaveButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Main_Options_Fix1.Main_Options_Fix1_C.BndEvt__SaveButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");

	UMain_Options_Fix1_C_BndEvt__SaveButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Main_Options_Fix1.Main_Options_Fix1_C.BndEvt__SetToDefaultButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UMain_Options_Fix1_C::BndEvt__SetToDefaultButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Main_Options_Fix1.Main_Options_Fix1_C.BndEvt__SetToDefaultButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature");

	UMain_Options_Fix1_C_BndEvt__SetToDefaultButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Main_Options_Fix1.Main_Options_Fix1_C.BndEvt__PreferenceButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UMain_Options_Fix1_C::BndEvt__PreferenceButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Main_Options_Fix1.Main_Options_Fix1_C.BndEvt__PreferenceButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature");

	UMain_Options_Fix1_C_BndEvt__PreferenceButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Main_Options_Fix1.Main_Options_Fix1_C.OnBackButtonClicked (Custom)
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UMain_Options_Fix1_C::OnBackButtonClicked__Custom_()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Main_Options_Fix1.Main_Options_Fix1_C.OnBackButtonClicked (Custom)");

	UMain_Options_Fix1_C_OnBackButtonClicked__Custom__Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Main_Options_Fix1.Main_Options_Fix1_C.BndEvt__BackButton_Fix1_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UMain_Options_Fix1_C::BndEvt__BackButton_Fix1_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Main_Options_Fix1.Main_Options_Fix1_C.BndEvt__BackButton_Fix1_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature");

	UMain_Options_Fix1_C_BndEvt__BackButton_Fix1_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Main_Options_Fix1.Main_Options_Fix1_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UMain_Options_Fix1_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Main_Options_Fix1.Main_Options_Fix1_C.Construct");

	UMain_Options_Fix1_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Main_Options_Fix1.Main_Options_Fix1_C.BndEvt__Graphic_K2Node_ComponentBoundEvent_6_OnSettingsModified__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UMain_Options_Fix1_C::BndEvt__Graphic_K2Node_ComponentBoundEvent_6_OnSettingsModified__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Main_Options_Fix1.Main_Options_Fix1_C.BndEvt__Graphic_K2Node_ComponentBoundEvent_6_OnSettingsModified__DelegateSignature");

	UMain_Options_Fix1_C_BndEvt__Graphic_K2Node_ComponentBoundEvent_6_OnSettingsModified__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Main_Options_Fix1.Main_Options_Fix1_C.BndEvt__Audio_K2Node_ComponentBoundEvent_8_OnModified__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UMain_Options_Fix1_C::BndEvt__Audio_K2Node_ComponentBoundEvent_8_OnModified__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Main_Options_Fix1.Main_Options_Fix1_C.BndEvt__Audio_K2Node_ComponentBoundEvent_8_OnModified__DelegateSignature");

	UMain_Options_Fix1_C_BndEvt__Audio_K2Node_ComponentBoundEvent_8_OnModified__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Main_Options_Fix1.Main_Options_Fix1_C.BndEvt__Input_K2Node_ComponentBoundEvent_9_OnModified__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UMain_Options_Fix1_C::BndEvt__Input_K2Node_ComponentBoundEvent_9_OnModified__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Main_Options_Fix1.Main_Options_Fix1_C.BndEvt__Input_K2Node_ComponentBoundEvent_9_OnModified__DelegateSignature");

	UMain_Options_Fix1_C_BndEvt__Input_K2Node_ComponentBoundEvent_9_OnModified__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Main_Options_Fix1.Main_Options_Fix1_C.BndEvt__Preferences_A1_K2Node_ComponentBoundEvent_10_OnModified__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UMain_Options_Fix1_C::BndEvt__Preferences_A1_K2Node_ComponentBoundEvent_10_OnModified__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Main_Options_Fix1.Main_Options_Fix1_C.BndEvt__Preferences_A1_K2Node_ComponentBoundEvent_10_OnModified__DelegateSignature");

	UMain_Options_Fix1_C_BndEvt__Preferences_A1_K2Node_ComponentBoundEvent_10_OnModified__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Main_Options_Fix1.Main_Options_Fix1_C.ExecuteUbergraph_Main_Options_Fix1
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMain_Options_Fix1_C::ExecuteUbergraph_Main_Options_Fix1(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Main_Options_Fix1.Main_Options_Fix1_C.ExecuteUbergraph_Main_Options_Fix1");

	UMain_Options_Fix1_C_ExecuteUbergraph_Main_Options_Fix1_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Main_Options_Fix1.Main_Options_Fix1_C.OnRegionModified__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UMain_Options_Fix1_C::OnRegionModified__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Main_Options_Fix1.Main_Options_Fix1_C.OnRegionModified__DelegateSignature");

	UMain_Options_Fix1_C_OnRegionModified__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Main_Options_Fix1.Main_Options_Fix1_C.OnBackButtonClicked__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UMain_Options_Fix1_C::OnBackButtonClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Main_Options_Fix1.Main_Options_Fix1_C.OnBackButtonClicked__DelegateSignature");

	UMain_Options_Fix1_C_OnBackButtonClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
