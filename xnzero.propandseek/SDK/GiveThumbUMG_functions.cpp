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
//		Name   -> Function GiveThumbUMG.GiveThumbUMG_C.UpdateCanGiveThumb
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               CanGiveThumb_                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGiveThumbUMG_C::UpdateCanGiveThumb(bool CanGiveThumb_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GiveThumbUMG.GiveThumbUMG_C.UpdateCanGiveThumb");

	UGiveThumbUMG_C_UpdateCanGiveThumb_Params params {};
	params.CanGiveThumb_ = CanGiveThumb_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
