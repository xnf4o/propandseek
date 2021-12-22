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
//		Name   -> Function BloodSplatterDecal.BloodSplatterDecal_C.Timeline_0__FinishedFunc
//		Flags  -> (BlueprintEvent)
void ABloodSplatterDecal_C::Timeline_0__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BloodSplatterDecal.BloodSplatterDecal_C.Timeline_0__FinishedFunc");

	ABloodSplatterDecal_C_Timeline_0__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function BloodSplatterDecal.BloodSplatterDecal_C.Timeline_0__UpdateFunc
//		Flags  -> (BlueprintEvent)
void ABloodSplatterDecal_C::Timeline_0__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BloodSplatterDecal.BloodSplatterDecal_C.Timeline_0__UpdateFunc");

	ABloodSplatterDecal_C_Timeline_0__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function BloodSplatterDecal.BloodSplatterDecal_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABloodSplatterDecal_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BloodSplatterDecal.BloodSplatterDecal_C.ReceiveBeginPlay");

	ABloodSplatterDecal_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function BloodSplatterDecal.BloodSplatterDecal_C.ExecuteUbergraph_BloodSplatterDecal
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABloodSplatterDecal_C::ExecuteUbergraph_BloodSplatterDecal(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BloodSplatterDecal.BloodSplatterDecal_C.ExecuteUbergraph_BloodSplatterDecal");

	ABloodSplatterDecal_C_ExecuteUbergraph_BloodSplatterDecal_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
