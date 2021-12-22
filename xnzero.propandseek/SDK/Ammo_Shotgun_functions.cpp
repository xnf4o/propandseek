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
//		Name   -> Function Ammo_Shotgun.Ammo_Shotgun_C.OwnerSeeTiming__FinishedFunc
//		Flags  -> (BlueprintEvent)
void AAmmo_Shotgun_C::OwnerSeeTiming__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Ammo_Shotgun.Ammo_Shotgun_C.OwnerSeeTiming__FinishedFunc");

	AAmmo_Shotgun_C_OwnerSeeTiming__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Ammo_Shotgun.Ammo_Shotgun_C.OwnerSeeTiming__UpdateFunc
//		Flags  -> (BlueprintEvent)
void AAmmo_Shotgun_C::OwnerSeeTiming__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Ammo_Shotgun.Ammo_Shotgun_C.OwnerSeeTiming__UpdateFunc");

	AAmmo_Shotgun_C_OwnerSeeTiming__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Ammo_Shotgun.Ammo_Shotgun_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void AAmmo_Shotgun_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Ammo_Shotgun.Ammo_Shotgun_C.ReceiveBeginPlay");

	AAmmo_Shotgun_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Ammo_Shotgun.Ammo_Shotgun_C.DestroyThisActor
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AAmmo_Shotgun_C::DestroyThisActor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Ammo_Shotgun.Ammo_Shotgun_C.DestroyThisActor");

	AAmmo_Shotgun_C_DestroyThisActor_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Ammo_Shotgun.Ammo_Shotgun_C.ExecuteUbergraph_Ammo_Shotgun
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAmmo_Shotgun_C::ExecuteUbergraph_Ammo_Shotgun(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Ammo_Shotgun.Ammo_Shotgun_C.ExecuteUbergraph_Ammo_Shotgun");

	AAmmo_Shotgun_C_ExecuteUbergraph_Ammo_Shotgun_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
