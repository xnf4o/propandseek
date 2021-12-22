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
//		Name   -> Function WB_B01_Native_Preset04.WB_B01_Native_Preset04_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_B01_Native_Preset04_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_B01_Native_Preset04.WB_B01_Native_Preset04_C.PreConstruct");

	UWB_B01_Native_Preset04_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_B01_Native_Preset04.WB_B01_Native_Preset04_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWB_B01_Native_Preset04_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_B01_Native_Preset04.WB_B01_Native_Preset04_C.Construct");

	UWB_B01_Native_Preset04_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_B01_Native_Preset04.WB_B01_Native_Preset04_C.ExecuteUbergraph_WB_B01_Native_Preset04
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_B01_Native_Preset04_C::ExecuteUbergraph_WB_B01_Native_Preset04(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_B01_Native_Preset04.WB_B01_Native_Preset04_C.ExecuteUbergraph_WB_B01_Native_Preset04");

	UWB_B01_Native_Preset04_C_ExecuteUbergraph_WB_B01_Native_Preset04_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
