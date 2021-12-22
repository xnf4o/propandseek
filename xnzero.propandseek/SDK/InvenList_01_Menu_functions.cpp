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
//		Name   -> Function InvenList_01_Menu.InvenList_01_Menu_C.InitRef
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UInvenList_01_Menu_C::InitRef()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InvenList_01_Menu.InvenList_01_Menu_C.InitRef");

	UInvenList_01_Menu_C_InitRef_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function InvenList_01_Menu.InvenList_01_Menu_C.OnParentConstruct
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UInvenList_01_Menu_C::OnParentConstruct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InvenList_01_Menu.InvenList_01_Menu_C.OnParentConstruct");

	UInvenList_01_Menu_C_OnParentConstruct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function InvenList_01_Menu.InvenList_01_Menu_C.ExecuteUbergraph_InvenList_01_Menu
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInvenList_01_Menu_C::ExecuteUbergraph_InvenList_01_Menu(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InvenList_01_Menu.InvenList_01_Menu_C.ExecuteUbergraph_InvenList_01_Menu");

	UInvenList_01_Menu_C_ExecuteUbergraph_InvenList_01_Menu_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
