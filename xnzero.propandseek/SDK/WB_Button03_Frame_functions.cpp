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
//		Name   -> Function WB_Button03_Frame.WB_Button03_Frame_C.Set_FrameColor
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                FrameColor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button03_Frame_C::Set_FrameColor(const struct FLinearColor& FrameColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Button03_Frame.WB_Button03_Frame_C.Set_FrameColor");

	UWB_Button03_Frame_C_Set_FrameColor_Params params {};
	params.FrameColor = FrameColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
