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
//		Name   -> Function MenuWeaponBox.MenuWeaponBox_C.PC
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class AFPS_PC_C*                                   AsFPS_PC                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMenuWeaponBox_C::PC(class AFPS_PC_C** AsFPS_PC)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MenuWeaponBox.MenuWeaponBox_C.PC");

	UMenuWeaponBox_C_PC_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsFPS_PC != nullptr)
		*AsFPS_PC = params.AsFPS_PC;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function MenuWeaponBox.MenuWeaponBox_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UMenuWeaponBox_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MenuWeaponBox.MenuWeaponBox_C.Construct");

	UMenuWeaponBox_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function MenuWeaponBox.MenuWeaponBox_C.UpdateWeaponNumber
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                RequestedWeaponNumber                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMenuWeaponBox_C::UpdateWeaponNumber(int RequestedWeaponNumber)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MenuWeaponBox.MenuWeaponBox_C.UpdateWeaponNumber");

	UMenuWeaponBox_C_UpdateWeaponNumber_Params params {};
	params.RequestedWeaponNumber = RequestedWeaponNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function MenuWeaponBox.MenuWeaponBox_C.ExecuteUbergraph_MenuWeaponBox
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMenuWeaponBox_C::ExecuteUbergraph_MenuWeaponBox(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MenuWeaponBox.MenuWeaponBox_C.ExecuteUbergraph_MenuWeaponBox");

	UMenuWeaponBox_C_ExecuteUbergraph_MenuWeaponBox_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
