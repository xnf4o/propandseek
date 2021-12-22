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
//		Name   -> Function WB_HintIcon_20x20_02.WB_HintIcon_20x20_02_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWB_HintIcon_20x20_02_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_HintIcon_20x20_02.WB_HintIcon_20x20_02_C.Construct");

	UWB_HintIcon_20x20_02_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_HintIcon_20x20_02.WB_HintIcon_20x20_02_C.ExecuteUbergraph_WB_HintIcon_20x20_02
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_HintIcon_20x20_02_C::ExecuteUbergraph_WB_HintIcon_20x20_02(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_HintIcon_20x20_02.WB_HintIcon_20x20_02_C.ExecuteUbergraph_WB_HintIcon_20x20_02");

	UWB_HintIcon_20x20_02_C_ExecuteUbergraph_WB_HintIcon_20x20_02_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
