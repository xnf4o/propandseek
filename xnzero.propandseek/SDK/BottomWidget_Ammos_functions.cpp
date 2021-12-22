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
//		Name   -> Function BottomWidget_Ammos.BottomWidget_Ammos_C.PC
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class AFPS_PC_C*                                   AsFPS_PC                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBottomWidget_Ammos_C::PC(class AFPS_PC_C** AsFPS_PC)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BottomWidget_Ammos.BottomWidget_Ammos_C.PC");

	UBottomWidget_Ammos_C_PC_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsFPS_PC != nullptr)
		*AsFPS_PC = params.AsFPS_PC;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function BottomWidget_Ammos.BottomWidget_Ammos_C.StartFuel
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Increase_                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBottomWidget_Ammos_C::StartFuel(bool Increase_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BottomWidget_Ammos.BottomWidget_Ammos_C.StartFuel");

	UBottomWidget_Ammos_C_StartFuel_Params params {};
	params.Increase_ = Increase_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function BottomWidget_Ammos.BottomWidget_Ammos_C.GI
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UGI2_C*                                      AsGI2                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBottomWidget_Ammos_C::GI(class UGI2_C** AsGI2)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BottomWidget_Ammos.BottomWidget_Ammos_C.GI");

	UBottomWidget_Ammos_C_GI_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsGI2 != nullptr)
		*AsGI2 = params.AsGI2;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function BottomWidget_Ammos.BottomWidget_Ammos_C.ToggleJetpackIcon
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               JetpackOn_                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBottomWidget_Ammos_C::ToggleJetpackIcon(bool JetpackOn_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BottomWidget_Ammos.BottomWidget_Ammos_C.ToggleJetpackIcon");

	UBottomWidget_Ammos_C_ToggleJetpackIcon_Params params {};
	params.JetpackOn_ = JetpackOn_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function BottomWidget_Ammos.BottomWidget_Ammos_C.UpdateBurningTime
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               BurningTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBottomWidget_Ammos_C::UpdateBurningTime(bool BurningTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BottomWidget_Ammos.BottomWidget_Ammos_C.UpdateBurningTime");

	UBottomWidget_Ammos_C_UpdateBurningTime_Params params {};
	params.BurningTime = BurningTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function BottomWidget_Ammos.BottomWidget_Ammos_C.UpdateAmmos
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<WeaponList_EWeaponList>                Weapon                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                CurrentAmmo                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                MaxAmmo                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ApplyBurningTime_                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBottomWidget_Ammos_C::UpdateAmmos(TEnumAsByte<WeaponList_EWeaponList> Weapon, int CurrentAmmo, int MaxAmmo, bool ApplyBurningTime_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BottomWidget_Ammos.BottomWidget_Ammos_C.UpdateAmmos");

	UBottomWidget_Ammos_C_UpdateAmmos_Params params {};
	params.Weapon = Weapon;
	params.CurrentAmmo = CurrentAmmo;
	params.MaxAmmo = MaxAmmo;
	params.ApplyBurningTime_ = ApplyBurningTime_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function BottomWidget_Ammos.BottomWidget_Ammos_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBottomWidget_Ammos_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BottomWidget_Ammos.BottomWidget_Ammos_C.Construct");

	UBottomWidget_Ammos_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function BottomWidget_Ammos.BottomWidget_Ammos_C.StartFuelingJetpack
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Consume_                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBottomWidget_Ammos_C::StartFuelingJetpack(bool Consume_, float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BottomWidget_Ammos.BottomWidget_Ammos_C.StartFuelingJetpack");

	UBottomWidget_Ammos_C_StartFuelingJetpack_Params params {};
	params.Consume_ = Consume_;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function BottomWidget_Ammos.BottomWidget_Ammos_C.ExecuteUbergraph_BottomWidget_Ammos
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBottomWidget_Ammos_C::ExecuteUbergraph_BottomWidget_Ammos(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BottomWidget_Ammos.BottomWidget_Ammos_C.ExecuteUbergraph_BottomWidget_Ammos");

	UBottomWidget_Ammos_C_ExecuteUbergraph_BottomWidget_Ammos_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
