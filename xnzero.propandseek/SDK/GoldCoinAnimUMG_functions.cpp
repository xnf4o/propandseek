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
//		Name   -> Function GoldCoinAnimUMG.GoldCoinAnimUMG_C.OnHovered
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Hover_                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGoldCoinAnimUMG_C::OnHovered(bool Hover_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GoldCoinAnimUMG.GoldCoinAnimUMG_C.OnHovered");

	UGoldCoinAnimUMG_C_OnHovered_Params params {};
	params.Hover_ = Hover_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function GoldCoinAnimUMG.GoldCoinAnimUMG_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UGoldCoinAnimUMG_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GoldCoinAnimUMG.GoldCoinAnimUMG_C.Construct");

	UGoldCoinAnimUMG_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function GoldCoinAnimUMG.GoldCoinAnimUMG_C.ExecuteUbergraph_GoldCoinAnimUMG
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGoldCoinAnimUMG_C::ExecuteUbergraph_GoldCoinAnimUMG(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GoldCoinAnimUMG.GoldCoinAnimUMG_C.ExecuteUbergraph_GoldCoinAnimUMG");

	UGoldCoinAnimUMG_C_ExecuteUbergraph_GoldCoinAnimUMG_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
