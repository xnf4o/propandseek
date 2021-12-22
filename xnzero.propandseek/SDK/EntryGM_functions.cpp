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
//		Name   -> Function EntryGM.EntryGM_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void AEntryGM_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EntryGM.EntryGM_C.ReceiveBeginPlay");

	AEntryGM_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function EntryGM.EntryGM_C.ExecuteUbergraph_EntryGM
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AEntryGM_C::ExecuteUbergraph_EntryGM(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EntryGM.EntryGM_C.ExecuteUbergraph_EntryGM");

	AEntryGM_C_ExecuteUbergraph_EntryGM_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
