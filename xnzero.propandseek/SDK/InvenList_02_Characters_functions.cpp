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
//		Name   -> Function InvenList_02_Characters.InvenList_02_Characters_C.PC
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class ALobbyPC2_C*                                 AsLobby_PC1                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInvenList_02_Characters_C::PC(class ALobbyPC2_C** AsLobby_PC1)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InvenList_02_Characters.InvenList_02_Characters_C.PC");

	UInvenList_02_Characters_C_PC_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsLobby_PC1 != nullptr)
		*AsLobby_PC1 = params.AsLobby_PC1;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function InvenList_02_Characters.InvenList_02_Characters_C.BeginplayUpdateList
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Default                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInvenList_02_Characters_C::BeginplayUpdateList(int Default)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InvenList_02_Characters.InvenList_02_Characters_C.BeginplayUpdateList");

	UInvenList_02_Characters_C_BeginplayUpdateList_Params params {};
	params.Default = Default;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function InvenList_02_Characters.InvenList_02_Characters_C.SetToDefault
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UInvenList_02_Characters_C::SetToDefault()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InvenList_02_Characters.InvenList_02_Characters_C.SetToDefault");

	UInvenList_02_Characters_C_SetToDefault_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function InvenList_02_Characters.InvenList_02_Characters_C.UpdatePreview(Characters)
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                ItemNumber                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInvenList_02_Characters_C::UpdatePreview_Characters_(int ItemNumber)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InvenList_02_Characters.InvenList_02_Characters_C.UpdatePreview(Characters)");

	UInvenList_02_Characters_C_UpdatePreview_Characters__Params params {};
	params.ItemNumber = ItemNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function InvenList_02_Characters.InvenList_02_Characters_C.UpdateList
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Upload_                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               SyncAsDefault_                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UInvenList_02_Characters_C::UpdateList(bool Upload_, bool SyncAsDefault_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InvenList_02_Characters.InvenList_02_Characters_C.UpdateList");

	UInvenList_02_Characters_C_UpdateList_Params params {};
	params.Upload_ = Upload_;
	params.SyncAsDefault_ = SyncAsDefault_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function InvenList_02_Characters.InvenList_02_Characters_C.GI
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UGI2_C*                                      AsGI2                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInvenList_02_Characters_C::GI(class UGI2_C** AsGI2)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InvenList_02_Characters.InvenList_02_Characters_C.GI");

	UInvenList_02_Characters_C_GI_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsGI2 != nullptr)
		*AsGI2 = params.AsGI2;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function InvenList_02_Characters.InvenList_02_Characters_C.OnParentConstruct
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UInvenList_02_Characters_C::OnParentConstruct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InvenList_02_Characters.InvenList_02_Characters_C.OnParentConstruct");

	UInvenList_02_Characters_C_OnParentConstruct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function InvenList_02_Characters.InvenList_02_Characters_C.ExecuteUbergraph_InvenList_02_Characters
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInvenList_02_Characters_C::ExecuteUbergraph_InvenList_02_Characters(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InvenList_02_Characters.InvenList_02_Characters_C.ExecuteUbergraph_InvenList_02_Characters");

	UInvenList_02_Characters_C_ExecuteUbergraph_InvenList_02_Characters_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
