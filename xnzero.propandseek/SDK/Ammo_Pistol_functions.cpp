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
//		Name   -> Function Ammo_Pistol.Ammo_Pistol_C.OwnerSeeTiming__FinishedFunc
//		Flags  -> (BlueprintEvent)
void AAmmo_Pistol_C::OwnerSeeTiming__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Ammo_Pistol.Ammo_Pistol_C.OwnerSeeTiming__FinishedFunc");

	AAmmo_Pistol_C_OwnerSeeTiming__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Ammo_Pistol.Ammo_Pistol_C.OwnerSeeTiming__UpdateFunc
//		Flags  -> (BlueprintEvent)
void AAmmo_Pistol_C::OwnerSeeTiming__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Ammo_Pistol.Ammo_Pistol_C.OwnerSeeTiming__UpdateFunc");

	AAmmo_Pistol_C_OwnerSeeTiming__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Ammo_Pistol.Ammo_Pistol_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void AAmmo_Pistol_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Ammo_Pistol.Ammo_Pistol_C.ReceiveBeginPlay");

	AAmmo_Pistol_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Ammo_Pistol.Ammo_Pistol_C.DestroyThisActor
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AAmmo_Pistol_C::DestroyThisActor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Ammo_Pistol.Ammo_Pistol_C.DestroyThisActor");

	AAmmo_Pistol_C_DestroyThisActor_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Ammo_Pistol.Ammo_Pistol_C.ExecuteUbergraph_Ammo_Pistol
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAmmo_Pistol_C::ExecuteUbergraph_Ammo_Pistol(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Ammo_Pistol.Ammo_Pistol_C.ExecuteUbergraph_Ammo_Pistol");

	AAmmo_Pistol_C_ExecuteUbergraph_Ammo_Pistol_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
