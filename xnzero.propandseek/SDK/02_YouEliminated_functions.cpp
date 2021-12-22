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
//		Name   -> Function 02_YouEliminated.02_YouEliminated_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void U02_YouEliminated_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function 02_YouEliminated.02_YouEliminated_C.Construct");

	U02_YouEliminated_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function 02_YouEliminated.02_YouEliminated_C.ExecuteUbergraph_02_YouEliminated
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void U02_YouEliminated_C::ExecuteUbergraph_02_YouEliminated(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function 02_YouEliminated.02_YouEliminated_C.ExecuteUbergraph_02_YouEliminated");

	U02_YouEliminated_C_ExecuteUbergraph_02_YouEliminated_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
