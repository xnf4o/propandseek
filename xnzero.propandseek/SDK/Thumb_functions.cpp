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
//		Name   -> Function Thumb.Thumb_C.Give_a_thumbs_up
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UThumb_C::Give_a_thumbs_up()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Thumb.Thumb_C.Give_a_thumbs_up");

	UThumb_C_Give_a_thumbs_up_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Thumb.Thumb_C.Sync_a_Previous_Thumbs_Up
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               On_                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UThumb_C::Sync_a_Previous_Thumbs_Up(bool On_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Thumb.Thumb_C.Sync_a_Previous_Thumbs_Up");

	UThumb_C_Sync_a_Previous_Thumbs_Up_Params params {};
	params.On_ = On_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
