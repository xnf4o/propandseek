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
//		Name   -> Function TPP_Pistol_Magazine.TPP_Pistol_Magazine_C.OwnerSeeTiming__FinishedFunc
//		Flags  -> (BlueprintEvent)
void ATPP_Pistol_Magazine_C::OwnerSeeTiming__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TPP_Pistol_Magazine.TPP_Pistol_Magazine_C.OwnerSeeTiming__FinishedFunc");

	ATPP_Pistol_Magazine_C_OwnerSeeTiming__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function TPP_Pistol_Magazine.TPP_Pistol_Magazine_C.OwnerSeeTiming__UpdateFunc
//		Flags  -> (BlueprintEvent)
void ATPP_Pistol_Magazine_C::OwnerSeeTiming__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TPP_Pistol_Magazine.TPP_Pistol_Magazine_C.OwnerSeeTiming__UpdateFunc");

	ATPP_Pistol_Magazine_C_OwnerSeeTiming__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function TPP_Pistol_Magazine.TPP_Pistol_Magazine_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ATPP_Pistol_Magazine_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TPP_Pistol_Magazine.TPP_Pistol_Magazine_C.ReceiveBeginPlay");

	ATPP_Pistol_Magazine_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function TPP_Pistol_Magazine.TPP_Pistol_Magazine_C.DestroyThisActor
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ATPP_Pistol_Magazine_C::DestroyThisActor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TPP_Pistol_Magazine.TPP_Pistol_Magazine_C.DestroyThisActor");

	ATPP_Pistol_Magazine_C_DestroyThisActor_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function TPP_Pistol_Magazine.TPP_Pistol_Magazine_C.ExecuteUbergraph_TPP_Pistol_Magazine
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATPP_Pistol_Magazine_C::ExecuteUbergraph_TPP_Pistol_Magazine(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TPP_Pistol_Magazine.TPP_Pistol_Magazine_C.ExecuteUbergraph_TPP_Pistol_Magazine");

	ATPP_Pistol_Magazine_C_ExecuteUbergraph_TPP_Pistol_Magazine_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
