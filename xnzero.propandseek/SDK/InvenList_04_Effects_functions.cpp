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
//		Name   -> Function InvenList_04_Effects.InvenList_04_Effects_C.BeginplayUpdateList
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Default                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInvenList_04_Effects_C::BeginplayUpdateList(int Default)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InvenList_04_Effects.InvenList_04_Effects_C.BeginplayUpdateList");

	UInvenList_04_Effects_C_BeginplayUpdateList_Params params {};
	params.Default = Default;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function InvenList_04_Effects.InvenList_04_Effects_C.SetToDefault
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UInvenList_04_Effects_C::SetToDefault()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InvenList_04_Effects.InvenList_04_Effects_C.SetToDefault");

	UInvenList_04_Effects_C_SetToDefault_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function InvenList_04_Effects.InvenList_04_Effects_C.UpdatePreview
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                ItemNumber                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInvenList_04_Effects_C::UpdatePreview(int ItemNumber)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InvenList_04_Effects.InvenList_04_Effects_C.UpdatePreview");

	UInvenList_04_Effects_C_UpdatePreview_Params params {};
	params.ItemNumber = ItemNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function InvenList_04_Effects.InvenList_04_Effects_C.UpdateList
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UInvenList_04_Effects_C::UpdateList()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InvenList_04_Effects.InvenList_04_Effects_C.UpdateList");

	UInvenList_04_Effects_C_UpdateList_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function InvenList_04_Effects.InvenList_04_Effects_C.GI
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UGI2_C*                                      AsGI2                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInvenList_04_Effects_C::GI(class UGI2_C** AsGI2)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InvenList_04_Effects.InvenList_04_Effects_C.GI");

	UInvenList_04_Effects_C_GI_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsGI2 != nullptr)
		*AsGI2 = params.AsGI2;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function InvenList_04_Effects.InvenList_04_Effects_C.OnParentConstruct
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UInvenList_04_Effects_C::OnParentConstruct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InvenList_04_Effects.InvenList_04_Effects_C.OnParentConstruct");

	UInvenList_04_Effects_C_OnParentConstruct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function InvenList_04_Effects.InvenList_04_Effects_C.ExecuteUbergraph_InvenList_04_Effects
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInvenList_04_Effects_C::ExecuteUbergraph_InvenList_04_Effects(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InvenList_04_Effects.InvenList_04_Effects_C.ExecuteUbergraph_InvenList_04_Effects");

	UInvenList_04_Effects_C_ExecuteUbergraph_InvenList_04_Effects_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
