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
//		Name   -> Function Tier4_Dia.Tier4_Dia_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTier4_Dia_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Tier4_Dia.Tier4_Dia_C.Construct");

	UTier4_Dia_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Tier4_Dia.Tier4_Dia_C.ExecuteUbergraph_Tier4_Dia
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTier4_Dia_C::ExecuteUbergraph_Tier4_Dia(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Tier4_Dia.Tier4_Dia_C.ExecuteUbergraph_Tier4_Dia");

	UTier4_Dia_C_ExecuteUbergraph_Tier4_Dia_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
