﻿// Name: pns, Version: 1

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
//		Name   -> Function BloodSplashDecal.BloodSplashDecal_C.Timeline_0__FinishedFunc
//		Flags  -> (BlueprintEvent)
void ABloodSplashDecal_C::Timeline_0__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BloodSplashDecal.BloodSplashDecal_C.Timeline_0__FinishedFunc");

	ABloodSplashDecal_C_Timeline_0__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function BloodSplashDecal.BloodSplashDecal_C.Timeline_0__UpdateFunc
//		Flags  -> (BlueprintEvent)
void ABloodSplashDecal_C::Timeline_0__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BloodSplashDecal.BloodSplashDecal_C.Timeline_0__UpdateFunc");

	ABloodSplashDecal_C_Timeline_0__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function BloodSplashDecal.BloodSplashDecal_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABloodSplashDecal_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BloodSplashDecal.BloodSplashDecal_C.ReceiveBeginPlay");

	ABloodSplashDecal_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function BloodSplashDecal.BloodSplashDecal_C.ExecuteUbergraph_BloodSplashDecal
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABloodSplashDecal_C::ExecuteUbergraph_BloodSplashDecal(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BloodSplashDecal.BloodSplashDecal_C.ExecuteUbergraph_BloodSplashDecal");

	ABloodSplashDecal_C_ExecuteUbergraph_BloodSplashDecal_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
