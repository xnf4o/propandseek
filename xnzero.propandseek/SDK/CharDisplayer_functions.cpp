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
//		Name   -> Function CharDisplayer.CharDisplayer_C.SetUsername
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       userName                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
void ACharDisplayer_C::SetUsername(const struct FText& userName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CharDisplayer.CharDisplayer_C.SetUsername");

	ACharDisplayer_C_SetUsername_Params params {};
	params.userName = userName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function CharDisplayer.CharDisplayer_C.WhichSectionToChange?
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsStatic_                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		TEnumAsByte<ItemSection_EItemSection>              WhichSection_                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACharDisplayer_C::WhichSectionToChange_(bool IsStatic_, TEnumAsByte<ItemSection_EItemSection> WhichSection_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CharDisplayer.CharDisplayer_C.WhichSectionToChange?");

	ACharDisplayer_C_WhichSectionToChange__Params params {};
	params.IsStatic_ = IsStatic_;
	params.WhichSection_ = WhichSection_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function CharDisplayer.CharDisplayer_C.HideAllWeapons
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ACharDisplayer_C::HideAllWeapons()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CharDisplayer.CharDisplayer_C.HideAllWeapons");

	ACharDisplayer_C_HideAllWeapons_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function CharDisplayer.CharDisplayer_C.SetUsernameAndAlias
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     userName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		int                                                Alias                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACharDisplayer_C::SetUsernameAndAlias(const struct FString& userName, int Alias)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CharDisplayer.CharDisplayer_C.SetUsernameAndAlias");

	ACharDisplayer_C_SetUsernameAndAlias_Params params {};
	params.userName = userName;
	params.Alias = Alias;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function CharDisplayer.CharDisplayer_C.UW
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UUpperWidget_Lobby_C*                        AsUpper_Widget                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACharDisplayer_C::UW(class UUpperWidget_Lobby_C** AsUpper_Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CharDisplayer.CharDisplayer_C.UW");

	ACharDisplayer_C_UW_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsUpper_Widget != nullptr)
		*AsUpper_Widget = params.AsUpper_Widget;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function CharDisplayer.CharDisplayer_C.WhichWeapon?
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<WeaponList_EWeaponList>                SelectedWeapon                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACharDisplayer_C::WhichWeapon_(TEnumAsByte<WeaponList_EWeaponList> SelectedWeapon)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CharDisplayer.CharDisplayer_C.WhichWeapon?");

	ACharDisplayer_C_WhichWeapon__Params params {};
	params.SelectedWeapon = SelectedWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function CharDisplayer.CharDisplayer_C.DefaultRotationTimeline__FinishedFunc
//		Flags  -> (BlueprintEvent)
void ACharDisplayer_C::DefaultRotationTimeline__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CharDisplayer.CharDisplayer_C.DefaultRotationTimeline__FinishedFunc");

	ACharDisplayer_C_DefaultRotationTimeline__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function CharDisplayer.CharDisplayer_C.DefaultRotationTimeline__UpdateFunc
//		Flags  -> (BlueprintEvent)
void ACharDisplayer_C::DefaultRotationTimeline__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CharDisplayer.CharDisplayer_C.DefaultRotationTimeline__UpdateFunc");

	ACharDisplayer_C_DefaultRotationTimeline__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function CharDisplayer.CharDisplayer_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ACharDisplayer_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CharDisplayer.CharDisplayer_C.ReceiveBeginPlay");

	ACharDisplayer_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function CharDisplayer.CharDisplayer_C.SetToDefaultRotation
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ACharDisplayer_C::SetToDefaultRotation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CharDisplayer.CharDisplayer_C.SetToDefaultRotation");

	ACharDisplayer_C_SetToDefaultRotation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function CharDisplayer.CharDisplayer_C.ToggleStaticSkeletalView
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsStatic_                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		TEnumAsByte<ItemSection_EItemSection>              WhichSection_                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACharDisplayer_C::ToggleStaticSkeletalView(bool IsStatic_, TEnumAsByte<ItemSection_EItemSection> WhichSection_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CharDisplayer.CharDisplayer_C.ToggleStaticSkeletalView");

	ACharDisplayer_C_ToggleStaticSkeletalView_Params params {};
	params.IsStatic_ = IsStatic_;
	params.WhichSection_ = WhichSection_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function CharDisplayer.CharDisplayer_C.ExecuteUbergraph_CharDisplayer
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACharDisplayer_C::ExecuteUbergraph_CharDisplayer(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CharDisplayer.CharDisplayer_C.ExecuteUbergraph_CharDisplayer");

	ACharDisplayer_C_ExecuteUbergraph_CharDisplayer_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
