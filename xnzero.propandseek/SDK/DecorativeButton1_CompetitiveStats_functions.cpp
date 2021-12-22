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
//		Name   -> Function DecorativeButton1_CompetitiveStats.DecorativeButton1_CompetitiveStats_C.UpdateInfo
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       Title                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FText                                       Subtitle                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
void UDecorativeButton1_CompetitiveStats_C::UpdateInfo(const struct FText& Title, const struct FText& Subtitle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DecorativeButton1_CompetitiveStats.DecorativeButton1_CompetitiveStats_C.UpdateInfo");

	UDecorativeButton1_CompetitiveStats_C_UpdateInfo_Params params {};
	params.Title = Title;
	params.Subtitle = Subtitle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function DecorativeButton1_CompetitiveStats.DecorativeButton1_CompetitiveStats_C.BndEvt__OrangeButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UDecorativeButton1_CompetitiveStats_C::BndEvt__OrangeButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DecorativeButton1_CompetitiveStats.DecorativeButton1_CompetitiveStats_C.BndEvt__OrangeButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UDecorativeButton1_CompetitiveStats_C_BndEvt__OrangeButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function DecorativeButton1_CompetitiveStats.DecorativeButton1_CompetitiveStats_C.BndEvt__OrangeButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UDecorativeButton1_CompetitiveStats_C::BndEvt__OrangeButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DecorativeButton1_CompetitiveStats.DecorativeButton1_CompetitiveStats_C.BndEvt__OrangeButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UDecorativeButton1_CompetitiveStats_C_BndEvt__OrangeButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function DecorativeButton1_CompetitiveStats.DecorativeButton1_CompetitiveStats_C.ExecuteUbergraph_DecorativeButton1_CompetitiveStats
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDecorativeButton1_CompetitiveStats_C::ExecuteUbergraph_DecorativeButton1_CompetitiveStats(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DecorativeButton1_CompetitiveStats.DecorativeButton1_CompetitiveStats_C.ExecuteUbergraph_DecorativeButton1_CompetitiveStats");

	UDecorativeButton1_CompetitiveStats_C_ExecuteUbergraph_DecorativeButton1_CompetitiveStats_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
