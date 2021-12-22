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
//		Name   -> Function InvenList_07_Items.InvenList_07_Items_C.PC
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class ALobbyPC2_C*                                 AsLobby_PC2                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInvenList_07_Items_C::PC(class ALobbyPC2_C** AsLobby_PC2)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InvenList_07_Items.InvenList_07_Items_C.PC");

	UInvenList_07_Items_C_PC_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsLobby_PC2 != nullptr)
		*AsLobby_PC2 = params.AsLobby_PC2;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function InvenList_07_Items.InvenList_07_Items_C.BeginplayUpdateList
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Default                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInvenList_07_Items_C::BeginplayUpdateList(int Default)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InvenList_07_Items.InvenList_07_Items_C.BeginplayUpdateList");

	UInvenList_07_Items_C_BeginplayUpdateList_Params params {};
	params.Default = Default;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function InvenList_07_Items.InvenList_07_Items_C.SetToDefault
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UInvenList_07_Items_C::SetToDefault()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InvenList_07_Items.InvenList_07_Items_C.SetToDefault");

	UInvenList_07_Items_C_SetToDefault_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function InvenList_07_Items.InvenList_07_Items_C.UpdatePreview
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                ItemNumber                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInvenList_07_Items_C::UpdatePreview(int ItemNumber)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InvenList_07_Items.InvenList_07_Items_C.UpdatePreview");

	UInvenList_07_Items_C_UpdatePreview_Params params {};
	params.ItemNumber = ItemNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function InvenList_07_Items.InvenList_07_Items_C.UpdateList
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UInvenList_07_Items_C::UpdateList()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InvenList_07_Items.InvenList_07_Items_C.UpdateList");

	UInvenList_07_Items_C_UpdateList_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function InvenList_07_Items.InvenList_07_Items_C.GI
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UGI2_C*                                      AsGI2                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInvenList_07_Items_C::GI(class UGI2_C** AsGI2)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InvenList_07_Items.InvenList_07_Items_C.GI");

	UInvenList_07_Items_C_GI_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsGI2 != nullptr)
		*AsGI2 = params.AsGI2;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function InvenList_07_Items.InvenList_07_Items_C.OnParentConstruct
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UInvenList_07_Items_C::OnParentConstruct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InvenList_07_Items.InvenList_07_Items_C.OnParentConstruct");

	UInvenList_07_Items_C_OnParentConstruct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function InvenList_07_Items.InvenList_07_Items_C.ExecuteUbergraph_InvenList_07_Items
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInvenList_07_Items_C::ExecuteUbergraph_InvenList_07_Items(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InvenList_07_Items.InvenList_07_Items_C.ExecuteUbergraph_InvenList_07_Items");

	UInvenList_07_Items_C_ExecuteUbergraph_InvenList_07_Items_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
