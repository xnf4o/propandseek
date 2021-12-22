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
//		Name   -> Function HoverDetailWidget.HoverDetailWidget_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UHoverDetailWidget_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HoverDetailWidget.HoverDetailWidget_C.Construct");

	UHoverDetailWidget_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function HoverDetailWidget.HoverDetailWidget_C.ExecuteUbergraph_HoverDetailWidget
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UHoverDetailWidget_C::ExecuteUbergraph_HoverDetailWidget(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HoverDetailWidget.HoverDetailWidget_C.ExecuteUbergraph_HoverDetailWidget");

	UHoverDetailWidget_C_ExecuteUbergraph_HoverDetailWidget_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
