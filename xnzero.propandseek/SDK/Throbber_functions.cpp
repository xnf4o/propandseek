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
//		Name   -> Function Throbber.Throbber_C.UpdateLoadingMessage
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       InputConnectionText                                        (BlueprintVisible, BlueprintReadOnly, Parm)
void UThrobber_C::UpdateLoadingMessage(const struct FText& InputConnectionText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Throbber.Throbber_C.UpdateLoadingMessage");

	UThrobber_C_UpdateLoadingMessage_Params params {};
	params.InputConnectionText = InputConnectionText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
