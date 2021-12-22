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
//		Name   -> Function PatchNoteContentUMG.PatchNoteContentUMG_C.UpdateContents
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     Version                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     OriginalContent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     Link                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UPatchNoteContentUMG_C::UpdateContents(const struct FString& Version, const struct FString& OriginalContent, const struct FString& Link)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PatchNoteContentUMG.PatchNoteContentUMG_C.UpdateContents");

	UPatchNoteContentUMG_C_UpdateContents_Params params {};
	params.Version = Version;
	params.OriginalContent = OriginalContent;
	params.Link = Link;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function PatchNoteContentUMG.PatchNoteContentUMG_C.BndEvt__ExitButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UPatchNoteContentUMG_C::BndEvt__ExitButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PatchNoteContentUMG.PatchNoteContentUMG_C.BndEvt__ExitButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UPatchNoteContentUMG_C_BndEvt__ExitButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function PatchNoteContentUMG.PatchNoteContentUMG_C.BndEvt__LinkButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UPatchNoteContentUMG_C::BndEvt__LinkButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PatchNoteContentUMG.PatchNoteContentUMG_C.BndEvt__LinkButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UPatchNoteContentUMG_C_BndEvt__LinkButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function PatchNoteContentUMG.PatchNoteContentUMG_C.BndEvt__LinkButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UPatchNoteContentUMG_C::BndEvt__LinkButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PatchNoteContentUMG.PatchNoteContentUMG_C.BndEvt__LinkButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UPatchNoteContentUMG_C_BndEvt__LinkButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function PatchNoteContentUMG.PatchNoteContentUMG_C.BndEvt__LinkButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UPatchNoteContentUMG_C::BndEvt__LinkButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PatchNoteContentUMG.PatchNoteContentUMG_C.BndEvt__LinkButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	UPatchNoteContentUMG_C_BndEvt__LinkButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function PatchNoteContentUMG.PatchNoteContentUMG_C.ExecuteUbergraph_PatchNoteContentUMG
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPatchNoteContentUMG_C::ExecuteUbergraph_PatchNoteContentUMG(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PatchNoteContentUMG.PatchNoteContentUMG_C.ExecuteUbergraph_PatchNoteContentUMG");

	UPatchNoteContentUMG_C_ExecuteUbergraph_PatchNoteContentUMG_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
