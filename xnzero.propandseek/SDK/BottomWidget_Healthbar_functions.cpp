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
//		Name   -> Function BottomWidget_Healthbar.BottomWidget_Healthbar_C.UpdateHealthInstant
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               _Buffer                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBottomWidget_Healthbar_C::UpdateHealthInstant(bool _Buffer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BottomWidget_Healthbar.BottomWidget_Healthbar_C.UpdateHealthInstant");

	UBottomWidget_Healthbar_C_UpdateHealthInstant_Params params {};
	params._Buffer = _Buffer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function BottomWidget_Healthbar.BottomWidget_Healthbar_C.SetHealth
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                CurrentHealth                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                MaxHealth                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBottomWidget_Healthbar_C::SetHealth(int CurrentHealth, int MaxHealth)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BottomWidget_Healthbar.BottomWidget_Healthbar_C.SetHealth");

	UBottomWidget_Healthbar_C_SetHealth_Params params {};
	params.CurrentHealth = CurrentHealth;
	params.MaxHealth = MaxHealth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function BottomWidget_Healthbar.BottomWidget_Healthbar_C.UpdateHealthBuffer
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                CurrentHealth                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               _Buffer                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBottomWidget_Healthbar_C::UpdateHealthBuffer(int CurrentHealth, bool _Buffer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BottomWidget_Healthbar.BottomWidget_Healthbar_C.UpdateHealthBuffer");

	UBottomWidget_Healthbar_C_UpdateHealthBuffer_Params params {};
	params.CurrentHealth = CurrentHealth;
	params._Buffer = _Buffer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function BottomWidget_Healthbar.BottomWidget_Healthbar_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBottomWidget_Healthbar_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BottomWidget_Healthbar.BottomWidget_Healthbar_C.Construct");

	UBottomWidget_Healthbar_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function BottomWidget_Healthbar.BottomWidget_Healthbar_C.ExecuteUbergraph_BottomWidget_Healthbar
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBottomWidget_Healthbar_C::ExecuteUbergraph_BottomWidget_Healthbar(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BottomWidget_Healthbar.BottomWidget_Healthbar_C.ExecuteUbergraph_BottomWidget_Healthbar");

	UBottomWidget_Healthbar_C_ExecuteUbergraph_BottomWidget_Healthbar_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
