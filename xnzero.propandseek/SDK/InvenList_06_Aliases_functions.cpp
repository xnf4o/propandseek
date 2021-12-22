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
//		Name   -> Function InvenList_06_Aliases.InvenList_06_Aliases_C.PC
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class ALobbyPC2_C*                                 AsLobby_PC1                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInvenList_06_Aliases_C::PC(class ALobbyPC2_C** AsLobby_PC1)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InvenList_06_Aliases.InvenList_06_Aliases_C.PC");

	UInvenList_06_Aliases_C_PC_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsLobby_PC1 != nullptr)
		*AsLobby_PC1 = params.AsLobby_PC1;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function InvenList_06_Aliases.InvenList_06_Aliases_C.BeginplayUpdateList
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Default                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInvenList_06_Aliases_C::BeginplayUpdateList(int Default)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InvenList_06_Aliases.InvenList_06_Aliases_C.BeginplayUpdateList");

	UInvenList_06_Aliases_C_BeginplayUpdateList_Params params {};
	params.Default = Default;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function InvenList_06_Aliases.InvenList_06_Aliases_C.SetToDefault
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UInvenList_06_Aliases_C::SetToDefault()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InvenList_06_Aliases.InvenList_06_Aliases_C.SetToDefault");

	UInvenList_06_Aliases_C_SetToDefault_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function InvenList_06_Aliases.InvenList_06_Aliases_C.UpdatePreview
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                ItemNumber                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInvenList_06_Aliases_C::UpdatePreview(int ItemNumber)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InvenList_06_Aliases.InvenList_06_Aliases_C.UpdatePreview");

	UInvenList_06_Aliases_C_UpdatePreview_Params params {};
	params.ItemNumber = ItemNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function InvenList_06_Aliases.InvenList_06_Aliases_C.UpdateList
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Upload_                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               SyncAsDefault                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UInvenList_06_Aliases_C::UpdateList(bool Upload_, bool SyncAsDefault)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InvenList_06_Aliases.InvenList_06_Aliases_C.UpdateList");

	UInvenList_06_Aliases_C_UpdateList_Params params {};
	params.Upload_ = Upload_;
	params.SyncAsDefault = SyncAsDefault;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function InvenList_06_Aliases.InvenList_06_Aliases_C.GI
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UGI2_C*                                      AsGI2                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInvenList_06_Aliases_C::GI(class UGI2_C** AsGI2)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InvenList_06_Aliases.InvenList_06_Aliases_C.GI");

	UInvenList_06_Aliases_C_GI_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsGI2 != nullptr)
		*AsGI2 = params.AsGI2;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function InvenList_06_Aliases.InvenList_06_Aliases_C.OnParentConstructA
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UInvenList_06_Aliases_C::OnParentConstructA()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InvenList_06_Aliases.InvenList_06_Aliases_C.OnParentConstructA");

	UInvenList_06_Aliases_C_OnParentConstructA_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function InvenList_06_Aliases.InvenList_06_Aliases_C.ExecuteUbergraph_InvenList_06_Aliases
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInvenList_06_Aliases_C::ExecuteUbergraph_InvenList_06_Aliases(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InvenList_06_Aliases.InvenList_06_Aliases_C.ExecuteUbergraph_InvenList_06_Aliases");

	UInvenList_06_Aliases_C_ExecuteUbergraph_InvenList_06_Aliases_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
