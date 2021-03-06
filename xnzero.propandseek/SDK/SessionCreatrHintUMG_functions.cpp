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
//		Name   -> Function SessionCreatrHintUMG.SessionCreatrHintUMG_C.UpdateSessionCreatorHintText
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     Content                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void USessionCreatrHintUMG_C::UpdateSessionCreatorHintText(const struct FString& Content)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SessionCreatrHintUMG.SessionCreatrHintUMG_C.UpdateSessionCreatorHintText");

	USessionCreatrHintUMG_C_UpdateSessionCreatorHintText_Params params {};
	params.Content = Content;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
