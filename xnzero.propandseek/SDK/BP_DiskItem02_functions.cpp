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
//		Name   -> Function BP_DiskItem02.BP_DiskItem02_C.DiskScaleTimeline__FinishedFunc
//		Flags  -> (BlueprintEvent)
void ABP_DiskItem02_C::DiskScaleTimeline__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DiskItem02.BP_DiskItem02_C.DiskScaleTimeline__FinishedFunc");

	ABP_DiskItem02_C_DiskScaleTimeline__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function BP_DiskItem02.BP_DiskItem02_C.DiskScaleTimeline__UpdateFunc
//		Flags  -> (BlueprintEvent)
void ABP_DiskItem02_C::DiskScaleTimeline__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DiskItem02.BP_DiskItem02_C.DiskScaleTimeline__UpdateFunc");

	ABP_DiskItem02_C_DiskScaleTimeline__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function BP_DiskItem02.BP_DiskItem02_C.DiskHideTimeline__FinishedFunc
//		Flags  -> (BlueprintEvent)
void ABP_DiskItem02_C::DiskHideTimeline__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DiskItem02.BP_DiskItem02_C.DiskHideTimeline__FinishedFunc");

	ABP_DiskItem02_C_DiskHideTimeline__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function BP_DiskItem02.BP_DiskItem02_C.DiskHideTimeline__UpdateFunc
//		Flags  -> (BlueprintEvent)
void ABP_DiskItem02_C::DiskHideTimeline__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DiskItem02.BP_DiskItem02_C.DiskHideTimeline__UpdateFunc");

	ABP_DiskItem02_C_DiskHideTimeline__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function BP_DiskItem02.BP_DiskItem02_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_DiskItem02_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DiskItem02.BP_DiskItem02_C.ReceiveBeginPlay");

	ABP_DiskItem02_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function BP_DiskItem02.BP_DiskItem02_C.ShowItem
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_DiskItem02_C::ShowItem()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DiskItem02.BP_DiskItem02_C.ShowItem");

	ABP_DiskItem02_C_ShowItem_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function BP_DiskItem02.BP_DiskItem02_C.HideItem
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_DiskItem02_C::HideItem()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DiskItem02.BP_DiskItem02_C.HideItem");

	ABP_DiskItem02_C_HideItem_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function BP_DiskItem02.BP_DiskItem02_C.ExecuteUbergraph_BP_DiskItem02
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_DiskItem02_C::ExecuteUbergraph_BP_DiskItem02(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DiskItem02.BP_DiskItem02_C.ExecuteUbergraph_BP_DiskItem02");

	ABP_DiskItem02_C_ExecuteUbergraph_BP_DiskItem02_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
