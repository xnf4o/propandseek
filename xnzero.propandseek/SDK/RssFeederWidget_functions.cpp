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
//		Name   -> Function RssFeederWidget.RssFeederWidget_C.FpsPC
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class AFPS_PC_C*                                   AsFPS_PC                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URssFeederWidget_C::FpsPC(class AFPS_PC_C** AsFPS_PC)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RssFeederWidget.RssFeederWidget_C.FpsPC");

	URssFeederWidget_C_FpsPC_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsFPS_PC != nullptr)
		*AsFPS_PC = params.AsFPS_PC;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function RssFeederWidget.RssFeederWidget_C.EntryPC
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class AEntryPC_C*                                  AsEntry_PC                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URssFeederWidget_C::EntryPC(class AEntryPC_C** AsEntry_PC)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RssFeederWidget.RssFeederWidget_C.EntryPC");

	URssFeederWidget_C_EntryPC_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsEntry_PC != nullptr)
		*AsEntry_PC = params.AsEntry_PC;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function RssFeederWidget.RssFeederWidget_C.RunCountDown
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void URssFeederWidget_C::RunCountDown()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RssFeederWidget.RssFeederWidget_C.RunCountDown");

	URssFeederWidget_C_RunCountDown_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function RssFeederWidget.RssFeederWidget_C.UpdateAllowStatus
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Allow_                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void URssFeederWidget_C::UpdateAllowStatus(bool Allow_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RssFeederWidget.RssFeederWidget_C.UpdateAllowStatus");

	URssFeederWidget_C_UpdateAllowStatus_Params params {};
	params.Allow_ = Allow_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function RssFeederWidget.RssFeederWidget_C.LobbyPC
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class ALobbyPC2_C*                                 AsLobby_PC1                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URssFeederWidget_C::LobbyPC(class ALobbyPC2_C** AsLobby_PC1)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RssFeederWidget.RssFeederWidget_C.LobbyPC");

	URssFeederWidget_C_LobbyPC_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsLobby_PC1 != nullptr)
		*AsLobby_PC1 = params.AsLobby_PC1;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function RssFeederWidget.RssFeederWidget_C.CheckAllowMicrotxn
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Allow                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void URssFeederWidget_C::CheckAllowMicrotxn(bool* Allow)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RssFeederWidget.RssFeederWidget_C.CheckAllowMicrotxn");

	URssFeederWidget_C_CheckAllowMicrotxn_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Allow != nullptr)
		*Allow = params.Allow;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function RssFeederWidget.RssFeederWidget_C.UpdateUpdater
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     Title                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     Link                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     Date                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     HrMin                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     Content                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		bool                                               Display_                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void URssFeederWidget_C::UpdateUpdater(const struct FString& Title, const struct FString& Link, const struct FString& Date, const struct FString& HrMin, const struct FString& Content, bool Display_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RssFeederWidget.RssFeederWidget_C.UpdateUpdater");

	URssFeederWidget_C_UpdateUpdater_Params params {};
	params.Title = Title;
	params.Link = Link;
	params.Date = Date;
	params.HrMin = HrMin;
	params.Content = Content;
	params.Display_ = Display_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function RssFeederWidget.RssFeederWidget_C.BndEvt__CheckUpdateButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void URssFeederWidget_C::BndEvt__CheckUpdateButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RssFeederWidget.RssFeederWidget_C.BndEvt__CheckUpdateButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	URssFeederWidget_C_BndEvt__CheckUpdateButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function RssFeederWidget.RssFeederWidget_C.BndEvt__CheckUpdateButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void URssFeederWidget_C::BndEvt__CheckUpdateButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RssFeederWidget.RssFeederWidget_C.BndEvt__CheckUpdateButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	URssFeederWidget_C_BndEvt__CheckUpdateButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function RssFeederWidget.RssFeederWidget_C.BndEvt__CheckUpdateButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void URssFeederWidget_C::BndEvt__CheckUpdateButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RssFeederWidget.RssFeederWidget_C.BndEvt__CheckUpdateButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	URssFeederWidget_C_BndEvt__CheckUpdateButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function RssFeederWidget.RssFeederWidget_C.BndEvt__LinkButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void URssFeederWidget_C::BndEvt__LinkButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RssFeederWidget.RssFeederWidget_C.BndEvt__LinkButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	URssFeederWidget_C_BndEvt__LinkButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function RssFeederWidget.RssFeederWidget_C.BndEvt__LinkButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void URssFeederWidget_C::BndEvt__LinkButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RssFeederWidget.RssFeederWidget_C.BndEvt__LinkButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");

	URssFeederWidget_C_BndEvt__LinkButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function RssFeederWidget.RssFeederWidget_C.BndEvt__LinkButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void URssFeederWidget_C::BndEvt__LinkButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RssFeederWidget.RssFeederWidget_C.BndEvt__LinkButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	URssFeederWidget_C_BndEvt__LinkButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function RssFeederWidget.RssFeederWidget_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void URssFeederWidget_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RssFeederWidget.RssFeederWidget_C.Construct");

	URssFeederWidget_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function RssFeederWidget.RssFeederWidget_C.Countdown
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void URssFeederWidget_C::Countdown()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RssFeederWidget.RssFeederWidget_C.Countdown");

	URssFeederWidget_C_Countdown_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function RssFeederWidget.RssFeederWidget_C.ExecuteUbergraph_RssFeederWidget
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URssFeederWidget_C::ExecuteUbergraph_RssFeederWidget(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RssFeederWidget.RssFeederWidget_C.ExecuteUbergraph_RssFeederWidget");

	URssFeederWidget_C_ExecuteUbergraph_RssFeederWidget_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
