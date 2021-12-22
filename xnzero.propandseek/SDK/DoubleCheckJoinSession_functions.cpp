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
//		Name   -> Function DoubleCheckJoinSession.DoubleCheckJoinSession_C.UpdateJoiningSesionInfo
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     Creator                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     Title                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     Map                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     region                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UDoubleCheckJoinSession_C::UpdateJoiningSesionInfo(const struct FString& Creator, const struct FString& Title, const struct FString& Map, const struct FString& region)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DoubleCheckJoinSession.DoubleCheckJoinSession_C.UpdateJoiningSesionInfo");

	UDoubleCheckJoinSession_C_UpdateJoiningSesionInfo_Params params {};
	params.Creator = Creator;
	params.Title = Title;
	params.Map = Map;
	params.region = region;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function DoubleCheckJoinSession.DoubleCheckJoinSession_C.PC
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class ALobbyPC2_C*                                 AsLobby_PC1                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDoubleCheckJoinSession_C::PC(class ALobbyPC2_C** AsLobby_PC1)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DoubleCheckJoinSession.DoubleCheckJoinSession_C.PC");

	UDoubleCheckJoinSession_C_PC_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsLobby_PC1 != nullptr)
		*AsLobby_PC1 = params.AsLobby_PC1;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function DoubleCheckJoinSession.DoubleCheckJoinSession_C.GI
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UGI2_C*                                      AsGI2                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDoubleCheckJoinSession_C::GI(class UGI2_C** AsGI2)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DoubleCheckJoinSession.DoubleCheckJoinSession_C.GI");

	UDoubleCheckJoinSession_C_GI_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsGI2 != nullptr)
		*AsGI2 = params.AsGI2;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function DoubleCheckJoinSession.DoubleCheckJoinSession_C.BndEvt__JoinButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UDoubleCheckJoinSession_C::BndEvt__JoinButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DoubleCheckJoinSession.DoubleCheckJoinSession_C.BndEvt__JoinButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UDoubleCheckJoinSession_C_BndEvt__JoinButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function DoubleCheckJoinSession.DoubleCheckJoinSession_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UDoubleCheckJoinSession_C::BndEvt__CancelButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DoubleCheckJoinSession.DoubleCheckJoinSession_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UDoubleCheckJoinSession_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function DoubleCheckJoinSession.DoubleCheckJoinSession_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UDoubleCheckJoinSession_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DoubleCheckJoinSession.DoubleCheckJoinSession_C.Construct");

	UDoubleCheckJoinSession_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function DoubleCheckJoinSession.DoubleCheckJoinSession_C.BndEvt__LicenseButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UDoubleCheckJoinSession_C::BndEvt__LicenseButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DoubleCheckJoinSession.DoubleCheckJoinSession_C.BndEvt__LicenseButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");

	UDoubleCheckJoinSession_C_BndEvt__LicenseButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function DoubleCheckJoinSession.DoubleCheckJoinSession_C.BndEvt__LicenseButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UDoubleCheckJoinSession_C::BndEvt__LicenseButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DoubleCheckJoinSession.DoubleCheckJoinSession_C.BndEvt__LicenseButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");

	UDoubleCheckJoinSession_C_BndEvt__LicenseButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function DoubleCheckJoinSession.DoubleCheckJoinSession_C.ExecuteUbergraph_DoubleCheckJoinSession
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDoubleCheckJoinSession_C::ExecuteUbergraph_DoubleCheckJoinSession(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DoubleCheckJoinSession.DoubleCheckJoinSession_C.ExecuteUbergraph_DoubleCheckJoinSession");

	UDoubleCheckJoinSession_C_ExecuteUbergraph_DoubleCheckJoinSession_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
