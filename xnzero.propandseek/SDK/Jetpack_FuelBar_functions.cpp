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
//		Name   -> Function Jetpack_FuelBar.Jetpack_FuelBar_C.StartFuelingJetpack
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Consume_                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UJetpack_FuelBar_C::StartFuelingJetpack(bool Consume_, float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Jetpack_FuelBar.Jetpack_FuelBar_C.StartFuelingJetpack");

	UJetpack_FuelBar_C_StartFuelingJetpack_Params params {};
	params.Consume_ = Consume_;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Jetpack_FuelBar.Jetpack_FuelBar_C.ExecuteUbergraph_Jetpack_FuelBar
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UJetpack_FuelBar_C::ExecuteUbergraph_Jetpack_FuelBar(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Jetpack_FuelBar.Jetpack_FuelBar_C.ExecuteUbergraph_Jetpack_FuelBar");

	UJetpack_FuelBar_C_ExecuteUbergraph_Jetpack_FuelBar_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
