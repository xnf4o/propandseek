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
//		Name   -> Function StokenAnimUMG.StokenAnimUMG_C.OnHovered
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Hover_                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UStokenAnimUMG_C::OnHovered(bool Hover_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StokenAnimUMG.StokenAnimUMG_C.OnHovered");

	UStokenAnimUMG_C_OnHovered_Params params {};
	params.Hover_ = Hover_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function StokenAnimUMG.StokenAnimUMG_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UStokenAnimUMG_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StokenAnimUMG.StokenAnimUMG_C.Construct");

	UStokenAnimUMG_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function StokenAnimUMG.StokenAnimUMG_C.ExecuteUbergraph_StokenAnimUMG
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStokenAnimUMG_C::ExecuteUbergraph_StokenAnimUMG(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StokenAnimUMG.StokenAnimUMG_C.ExecuteUbergraph_StokenAnimUMG");

	UStokenAnimUMG_C_ExecuteUbergraph_StokenAnimUMG_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
