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
//		Name   -> Function HoldableWidget.HoldableWidget_C.Appear?
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Appear_                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UHoldableWidget_C::Appear_(bool Appear_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HoldableWidget.HoldableWidget_C.Appear?");

	UHoldableWidget_C_Appear__Params params {};
	params.Appear_ = Appear_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function HoldableWidget.HoldableWidget_C.ExecuteUbergraph_HoldableWidget
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UHoldableWidget_C::ExecuteUbergraph_HoldableWidget(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HoldableWidget.HoldableWidget_C.ExecuteUbergraph_HoldableWidget");

	UHoldableWidget_C_ExecuteUbergraph_HoldableWidget_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
