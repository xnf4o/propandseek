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
//		Name   -> Function GoldThumb.GoldThumb_C.StopCurrentlyDisplayingAnimation
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UGoldThumb_C::StopCurrentlyDisplayingAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GoldThumb.GoldThumb_C.StopCurrentlyDisplayingAnimation");

	UGoldThumb_C_StopCurrentlyDisplayingAnimation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function GoldThumb.GoldThumb_C.SyncBase
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               On_                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGoldThumb_C::SyncBase(bool On_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GoldThumb.GoldThumb_C.SyncBase");

	UGoldThumb_C_SyncBase_Params params {};
	params.On_ = On_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function GoldThumb.GoldThumb_C.Give_a_thumbs_up
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UGoldThumb_C::Give_a_thumbs_up()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GoldThumb.GoldThumb_C.Give_a_thumbs_up");

	UGoldThumb_C_Give_a_thumbs_up_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function GoldThumb.GoldThumb_C.ExecuteUbergraph_GoldThumb
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGoldThumb_C::ExecuteUbergraph_GoldThumb(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GoldThumb.GoldThumb_C.ExecuteUbergraph_GoldThumb");

	UGoldThumb_C_ExecuteUbergraph_GoldThumb_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
