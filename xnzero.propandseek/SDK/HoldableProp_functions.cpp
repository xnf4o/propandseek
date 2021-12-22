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
//		Name   -> Function HoldableProp.HoldableProp_C.GetHoldableWidget
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UHoldableWidget_C*                           AsHoldable_Widget                                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHoldableProp_C::GetHoldableWidget(class UHoldableWidget_C** AsHoldable_Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HoldableProp.HoldableProp_C.GetHoldableWidget");

	AHoldableProp_C_GetHoldableWidget_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsHoldable_Widget != nullptr)
		*AsHoldable_Widget = params.AsHoldable_Widget;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function HoldableProp.HoldableProp_C.OnDetectedOutline
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Outline_                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHoldableProp_C::OnDetectedOutline(bool Outline_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HoldableProp.HoldableProp_C.OnDetectedOutline");

	AHoldableProp_C_OnDetectedOutline_Params params {};
	params.Outline_ = Outline_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function HoldableProp.HoldableProp_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void AHoldableProp_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HoldableProp.HoldableProp_C.ReceiveBeginPlay");

	AHoldableProp_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function HoldableProp.HoldableProp_C.OnPropFocus
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsFocused_                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHoldableProp_C::OnPropFocus(bool IsFocused_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HoldableProp.HoldableProp_C.OnPropFocus");

	AHoldableProp_C_OnPropFocus_Params params {};
	params.IsFocused_ = IsFocused_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function HoldableProp.HoldableProp_C.ExecuteUbergraph_HoldableProp
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHoldableProp_C::ExecuteUbergraph_HoldableProp(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HoldableProp.HoldableProp_C.ExecuteUbergraph_HoldableProp");

	AHoldableProp_C_ExecuteUbergraph_HoldableProp_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
