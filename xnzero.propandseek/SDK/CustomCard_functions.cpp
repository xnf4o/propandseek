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
//		Name   -> Function CustomCard.CustomCard_C.FloatingEffect__FinishedFunc
//		Flags  -> (BlueprintEvent)
void ACustomCard_C::FloatingEffect__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CustomCard.CustomCard_C.FloatingEffect__FinishedFunc");

	ACustomCard_C_FloatingEffect__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function CustomCard.CustomCard_C.FloatingEffect__UpdateFunc
//		Flags  -> (BlueprintEvent)
void ACustomCard_C::FloatingEffect__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CustomCard.CustomCard_C.FloatingEffect__UpdateFunc");

	ACustomCard_C_FloatingEffect__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function CustomCard.CustomCard_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ACustomCard_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CustomCard.CustomCard_C.ReceiveBeginPlay");

	ACustomCard_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function CustomCard.CustomCard_C.InitiateEffect
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ACustomCard_C::InitiateEffect()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CustomCard.CustomCard_C.InitiateEffect");

	ACustomCard_C_InitiateEffect_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function CustomCard.CustomCard_C.ExecuteUbergraph_CustomCard
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACustomCard_C::ExecuteUbergraph_CustomCard(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CustomCard.CustomCard_C.ExecuteUbergraph_CustomCard");

	ACustomCard_C_ExecuteUbergraph_CustomCard_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
