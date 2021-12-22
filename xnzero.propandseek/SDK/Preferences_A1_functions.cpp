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
//		Name   -> Function Preferences_A1.Preferences_A1_C.TestServerCheck
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UPreferences_A1_C::TestServerCheck()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Preferences_A1.Preferences_A1_C.TestServerCheck");

	UPreferences_A1_C_TestServerCheck_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Preferences_A1.Preferences_A1_C.SetToDefault
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UPreferences_A1_C::SetToDefault()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Preferences_A1.Preferences_A1_C.SetToDefault");

	UPreferences_A1_C_SetToDefault_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Preferences_A1.Preferences_A1_C.Save
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UPreferences_A1_C::Save()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Preferences_A1.Preferences_A1_C.Save");

	UPreferences_A1_C_Save_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Preferences_A1.Preferences_A1_C.Init
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UPreferences_A1_C::Init()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Preferences_A1.Preferences_A1_C.Init");

	UPreferences_A1_C_Init_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Preferences_A1.Preferences_A1_C.GI
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UGI2_C*                                      AsGI2                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPreferences_A1_C::GI(class UGI2_C** AsGI2)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Preferences_A1.Preferences_A1_C.GI");

	UPreferences_A1_C_GI_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsGI2 != nullptr)
		*AsGI2 = params.AsGI2;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Preferences_A1.Preferences_A1_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UPreferences_A1_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Preferences_A1.Preferences_A1_C.Construct");

	UPreferences_A1_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Preferences_A1.Preferences_A1_C.BndEvt__Region_K2Node_ComponentBoundEvent_0_OnStateChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FName                                       StateName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                StateIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPreferences_A1_C::BndEvt__Region_K2Node_ComponentBoundEvent_0_OnStateChanged__DelegateSignature(const struct FName& StateName, int StateIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Preferences_A1.Preferences_A1_C.BndEvt__Region_K2Node_ComponentBoundEvent_0_OnStateChanged__DelegateSignature");

	UPreferences_A1_C_BndEvt__Region_K2Node_ComponentBoundEvent_0_OnStateChanged__DelegateSignature_Params params {};
	params.StateName = StateName;
	params.StateIndex = StateIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Preferences_A1.Preferences_A1_C.OnModifiedC
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UPreferences_A1_C::OnModifiedC()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Preferences_A1.Preferences_A1_C.OnModifiedC");

	UPreferences_A1_C_OnModifiedC_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Preferences_A1.Preferences_A1_C.ExecuteUbergraph_Preferences_A1
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPreferences_A1_C::ExecuteUbergraph_Preferences_A1(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Preferences_A1.Preferences_A1_C.ExecuteUbergraph_Preferences_A1");

	UPreferences_A1_C_ExecuteUbergraph_Preferences_A1_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Preferences_A1.Preferences_A1_C.OnModified__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UPreferences_A1_C::OnModified__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Preferences_A1.Preferences_A1_C.OnModified__DelegateSignature");

	UPreferences_A1_C_OnModified__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
