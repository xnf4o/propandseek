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
//		Name   -> Function Finalboard_Bars.Finalboard_Bars_C.GI
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UGI2_C*                                      AsGI2                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFinalboard_Bars_C::GI(class UGI2_C** AsGI2)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Finalboard_Bars.Finalboard_Bars_C.GI");

	UFinalboard_Bars_C_GI_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsGI2 != nullptr)
		*AsGI2 = params.AsGI2;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Finalboard_Bars.Finalboard_Bars_C.Initialization
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UFinalboard_Bars_C::Initialization()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Finalboard_Bars.Finalboard_Bars_C.Initialization");

	UFinalboard_Bars_C_Initialization_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Finalboard_Bars.Finalboard_Bars_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UFinalboard_Bars_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Finalboard_Bars.Finalboard_Bars_C.Construct");

	UFinalboard_Bars_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Finalboard_Bars.Finalboard_Bars_C.ExecuteUbergraph_Finalboard_Bars
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFinalboard_Bars_C::ExecuteUbergraph_Finalboard_Bars(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Finalboard_Bars.Finalboard_Bars_C.ExecuteUbergraph_Finalboard_Bars");

	UFinalboard_Bars_C_ExecuteUbergraph_Finalboard_Bars_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
