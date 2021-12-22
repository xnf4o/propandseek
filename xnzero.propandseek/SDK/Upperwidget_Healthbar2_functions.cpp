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
//		Name   -> Function Upperwidget_Healthbar2.Upperwidget_Healthbar2_C.UpdateInstantHealth
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               _Buffer                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUpperwidget_Healthbar2_C::UpdateInstantHealth(bool _Buffer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Upperwidget_Healthbar2.Upperwidget_Healthbar2_C.UpdateInstantHealth");

	UUpperwidget_Healthbar2_C_UpdateInstantHealth_Params params {};
	params._Buffer = _Buffer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Upperwidget_Healthbar2.Upperwidget_Healthbar2_C.UpdateLerpHealth
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                CurrentHealth                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               _Buffer                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUpperwidget_Healthbar2_C::UpdateLerpHealth(int CurrentHealth, bool _Buffer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Upperwidget_Healthbar2.Upperwidget_Healthbar2_C.UpdateLerpHealth");

	UUpperwidget_Healthbar2_C_UpdateLerpHealth_Params params {};
	params.CurrentHealth = CurrentHealth;
	params._Buffer = _Buffer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Upperwidget_Healthbar2.Upperwidget_Healthbar2_C.SetHealth
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                CurrentHealth                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                MaxHealth                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               _Hunter                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUpperwidget_Healthbar2_C::SetHealth(int CurrentHealth, int MaxHealth, bool _Hunter)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Upperwidget_Healthbar2.Upperwidget_Healthbar2_C.SetHealth");

	UUpperwidget_Healthbar2_C_SetHealth_Params params {};
	params.CurrentHealth = CurrentHealth;
	params.MaxHealth = MaxHealth;
	params._Hunter = _Hunter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
