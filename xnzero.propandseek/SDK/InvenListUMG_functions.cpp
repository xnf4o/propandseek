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
//		Name   -> Function InvenListUMG.InvenListUMG_C.ResetPreviousMenu
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<EInvenMenu_EInvenMenu>                 PreviousMenuToReset                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInvenListUMG_C::ResetPreviousMenu(TEnumAsByte<EInvenMenu_EInvenMenu> PreviousMenuToReset)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InvenListUMG.InvenListUMG_C.ResetPreviousMenu");

	UInvenListUMG_C_ResetPreviousMenu_Params params {};
	params.PreviousMenuToReset = PreviousMenuToReset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function InvenListUMG.InvenListUMG_C.UpdateAllSections
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UInvenListUMG_C::UpdateAllSections()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InvenListUMG.InvenListUMG_C.UpdateAllSections");

	UInvenListUMG_C_UpdateAllSections_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function InvenListUMG.InvenListUMG_C.PC
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class ALobbyPC2_C*                                 AsLobby_PC                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInvenListUMG_C::PC(class ALobbyPC2_C** AsLobby_PC)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InvenListUMG.InvenListUMG_C.PC");

	UInvenListUMG_C_PC_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsLobby_PC != nullptr)
		*AsLobby_PC = params.AsLobby_PC;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function InvenListUMG.InvenListUMG_C.UpdateMenu
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<EInvenMenu_EInvenMenu>                 ChangeInvenMenuTo                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInvenListUMG_C::UpdateMenu(TEnumAsByte<EInvenMenu_EInvenMenu> ChangeInvenMenuTo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InvenListUMG.InvenListUMG_C.UpdateMenu");

	UInvenListUMG_C_UpdateMenu_Params params {};
	params.ChangeInvenMenuTo = ChangeInvenMenuTo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function InvenListUMG.InvenListUMG_C.InifRef
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UInvenListUMG_C::InifRef()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InvenListUMG.InvenListUMG_C.InifRef");

	UInvenListUMG_C_InifRef_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function InvenListUMG.InvenListUMG_C.OnParentConstruct
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UInvenListUMG_C::OnParentConstruct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InvenListUMG.InvenListUMG_C.OnParentConstruct");

	UInvenListUMG_C_OnParentConstruct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function InvenListUMG.InvenListUMG_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UInvenListUMG_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InvenListUMG.InvenListUMG_C.Construct");

	UInvenListUMG_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function InvenListUMG.InvenListUMG_C.ExecuteUbergraph_InvenListUMG
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInvenListUMG_C::ExecuteUbergraph_InvenListUMG(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InvenListUMG.InvenListUMG_C.ExecuteUbergraph_InvenListUMG");

	UInvenListUMG_C_ExecuteUbergraph_InvenListUMG_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
