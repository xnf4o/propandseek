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
//		Name   -> Function GameBrowser_Body.GameBrowser_Body_C.Init
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UGameBrowser_Body_C::Init()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameBrowser_Body.GameBrowser_Body_C.Init");

	UGameBrowser_Body_C_Init_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function GameBrowser_Body.GameBrowser_Body_C.OnClickedBar
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UGameBrowser_Body_C::OnClickedBar()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameBrowser_Body.GameBrowser_Body_C.OnClickedBar");

	UGameBrowser_Body_C_OnClickedBar_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function GameBrowser_Body.GameBrowser_Body_C.GI
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UGI2_C*                                      AsGI2                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameBrowser_Body_C::GI(class UGI2_C** AsGI2)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameBrowser_Body.GameBrowser_Body_C.GI");

	UGameBrowser_Body_C_GI_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsGI2 != nullptr)
		*AsGI2 = params.AsGI2;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function GameBrowser_Body.GameBrowser_Body_C.PC
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class ALobbyPC2_C*                                 AsLobby_PC1                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameBrowser_Body_C::PC(class ALobbyPC2_C** AsLobby_PC1)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameBrowser_Body.GameBrowser_Body_C.PC");

	UGameBrowser_Body_C_PC_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsLobby_PC1 != nullptr)
		*AsLobby_PC1 = params.AsLobby_PC1;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function GameBrowser_Body.GameBrowser_Body_C.BndEvt__RoomButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UGameBrowser_Body_C::BndEvt__RoomButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameBrowser_Body.GameBrowser_Body_C.BndEvt__RoomButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UGameBrowser_Body_C_BndEvt__RoomButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function GameBrowser_Body.GameBrowser_Body_C.BndEvt__RoomButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UGameBrowser_Body_C::BndEvt__RoomButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameBrowser_Body.GameBrowser_Body_C.BndEvt__RoomButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UGameBrowser_Body_C_BndEvt__RoomButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function GameBrowser_Body.GameBrowser_Body_C.BndEvt__RoomButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UGameBrowser_Body_C::BndEvt__RoomButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameBrowser_Body.GameBrowser_Body_C.BndEvt__RoomButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UGameBrowser_Body_C_BndEvt__RoomButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function GameBrowser_Body.GameBrowser_Body_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UGameBrowser_Body_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameBrowser_Body.GameBrowser_Body_C.Construct");

	UGameBrowser_Body_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function GameBrowser_Body.GameBrowser_Body_C.ExecuteUbergraph_GameBrowser_Body
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameBrowser_Body_C::ExecuteUbergraph_GameBrowser_Body(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameBrowser_Body.GameBrowser_Body_C.ExecuteUbergraph_GameBrowser_Body");

	UGameBrowser_Body_C_ExecuteUbergraph_GameBrowser_Body_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
