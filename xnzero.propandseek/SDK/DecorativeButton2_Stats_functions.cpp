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
//		Name   -> Function DecorativeButton2_Stats.DecorativeButton2_Stats_C.UpdateInfo
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       Title                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FText                                       Subtitle                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
void UDecorativeButton2_Stats_C::UpdateInfo(const struct FText& Title, const struct FText& Subtitle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DecorativeButton2_Stats.DecorativeButton2_Stats_C.UpdateInfo");

	UDecorativeButton2_Stats_C_UpdateInfo_Params params {};
	params.Title = Title;
	params.Subtitle = Subtitle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function DecorativeButton2_Stats.DecorativeButton2_Stats_C.BndEvt__BlueButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UDecorativeButton2_Stats_C::BndEvt__BlueButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DecorativeButton2_Stats.DecorativeButton2_Stats_C.BndEvt__BlueButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UDecorativeButton2_Stats_C_BndEvt__BlueButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function DecorativeButton2_Stats.DecorativeButton2_Stats_C.BndEvt__BlueButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UDecorativeButton2_Stats_C::BndEvt__BlueButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DecorativeButton2_Stats.DecorativeButton2_Stats_C.BndEvt__BlueButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UDecorativeButton2_Stats_C_BndEvt__BlueButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function DecorativeButton2_Stats.DecorativeButton2_Stats_C.ExecuteUbergraph_DecorativeButton2_Stats
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDecorativeButton2_Stats_C::ExecuteUbergraph_DecorativeButton2_Stats(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DecorativeButton2_Stats.DecorativeButton2_Stats_C.ExecuteUbergraph_DecorativeButton2_Stats");

	UDecorativeButton2_Stats_C_ExecuteUbergraph_DecorativeButton2_Stats_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
