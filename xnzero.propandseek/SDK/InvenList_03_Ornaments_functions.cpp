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
//		Name   -> Function InvenList_03_Ornaments.InvenList_03_Ornaments_C.BeginplayUpdateList
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Default                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInvenList_03_Ornaments_C::BeginplayUpdateList(int Default)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InvenList_03_Ornaments.InvenList_03_Ornaments_C.BeginplayUpdateList");

	UInvenList_03_Ornaments_C_BeginplayUpdateList_Params params {};
	params.Default = Default;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function InvenList_03_Ornaments.InvenList_03_Ornaments_C.SetToDefault
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UInvenList_03_Ornaments_C::SetToDefault()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InvenList_03_Ornaments.InvenList_03_Ornaments_C.SetToDefault");

	UInvenList_03_Ornaments_C_SetToDefault_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function InvenList_03_Ornaments.InvenList_03_Ornaments_C.UpdatePreview
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                ItemNumber                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInvenList_03_Ornaments_C::UpdatePreview(int ItemNumber)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InvenList_03_Ornaments.InvenList_03_Ornaments_C.UpdatePreview");

	UInvenList_03_Ornaments_C_UpdatePreview_Params params {};
	params.ItemNumber = ItemNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function InvenList_03_Ornaments.InvenList_03_Ornaments_C.UpdateList
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UInvenList_03_Ornaments_C::UpdateList()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InvenList_03_Ornaments.InvenList_03_Ornaments_C.UpdateList");

	UInvenList_03_Ornaments_C_UpdateList_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function InvenList_03_Ornaments.InvenList_03_Ornaments_C.GI
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UGI2_C*                                      AsGI2                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInvenList_03_Ornaments_C::GI(class UGI2_C** AsGI2)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InvenList_03_Ornaments.InvenList_03_Ornaments_C.GI");

	UInvenList_03_Ornaments_C_GI_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsGI2 != nullptr)
		*AsGI2 = params.AsGI2;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function InvenList_03_Ornaments.InvenList_03_Ornaments_C.OnParentConstruct
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UInvenList_03_Ornaments_C::OnParentConstruct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InvenList_03_Ornaments.InvenList_03_Ornaments_C.OnParentConstruct");

	UInvenList_03_Ornaments_C_OnParentConstruct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function InvenList_03_Ornaments.InvenList_03_Ornaments_C.ExecuteUbergraph_InvenList_03_Ornaments
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInvenList_03_Ornaments_C::ExecuteUbergraph_InvenList_03_Ornaments(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InvenList_03_Ornaments.InvenList_03_Ornaments_C.ExecuteUbergraph_InvenList_03_Ornaments");

	UInvenList_03_Ornaments_C_ExecuteUbergraph_InvenList_03_Ornaments_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
