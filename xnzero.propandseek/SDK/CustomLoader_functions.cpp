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
//		Name   -> Function CustomLoader.CustomLoader_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UCustomLoader_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CustomLoader.CustomLoader_C.Construct");

	UCustomLoader_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function CustomLoader.CustomLoader_C.Loophere
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UCustomLoader_C::Loophere()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CustomLoader.CustomLoader_C.Loophere");

	UCustomLoader_C_Loophere_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function CustomLoader.CustomLoader_C.ExecuteUbergraph_CustomLoader
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCustomLoader_C::ExecuteUbergraph_CustomLoader(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CustomLoader.CustomLoader_C.ExecuteUbergraph_CustomLoader");

	UCustomLoader_C_ExecuteUbergraph_CustomLoader_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
