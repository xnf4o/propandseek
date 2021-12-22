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
//		Name   -> Function FinalScreen.FinalScreen_C.GI
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UGI2_C*                                      AsGI2                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFinalScreen_C::GI(class UGI2_C** AsGI2)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FinalScreen.FinalScreen_C.GI");

	UFinalScreen_C_GI_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsGI2 != nullptr)
		*AsGI2 = params.AsGI2;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FinalScreen.FinalScreen_C.DeployInfo_GeneralBox
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                TotalPlayers                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFinalScreen_C::DeployInfo_GeneralBox(int TotalPlayers)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FinalScreen.FinalScreen_C.DeployInfo_GeneralBox");

	UFinalScreen_C_DeployInfo_GeneralBox_Params params {};
	params.TotalPlayers = TotalPlayers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FinalScreen.FinalScreen_C.PC
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class AFPS_PC_C*                                   AsFPS_PC                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFinalScreen_C::PC(class AFPS_PC_C** AsFPS_PC)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FinalScreen.FinalScreen_C.PC");

	UFinalScreen_C_PC_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsFPS_PC != nullptr)
		*AsFPS_PC = params.AsFPS_PC;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FinalScreen.FinalScreen_C.UpdateFinalScreen
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<struct FPlayerInfoGame>                     PlayerScores                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UFinalScreen_C::UpdateFinalScreen(TArray<struct FPlayerInfoGame>* PlayerScores)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FinalScreen.FinalScreen_C.UpdateFinalScreen");

	UFinalScreen_C_UpdateFinalScreen_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayerScores != nullptr)
		*PlayerScores = params.PlayerScores;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FinalScreen.FinalScreen_C.StartFinalScreenAnim
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UFinalScreen_C::StartFinalScreenAnim()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FinalScreen.FinalScreen_C.StartFinalScreenAnim");

	UFinalScreen_C_StartFinalScreenAnim_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FinalScreen.FinalScreen_C.GeneralboxAnimFinished
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UFinalScreen_C::GeneralboxAnimFinished()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FinalScreen.FinalScreen_C.GeneralboxAnimFinished");

	UFinalScreen_C_GeneralboxAnimFinished_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FinalScreen.FinalScreen_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UFinalScreen_C::BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FinalScreen.FinalScreen_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UFinalScreen_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FinalScreen.FinalScreen_C.ExecuteUbergraph_FinalScreen
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFinalScreen_C::ExecuteUbergraph_FinalScreen(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FinalScreen.FinalScreen_C.ExecuteUbergraph_FinalScreen");

	UFinalScreen_C_ExecuteUbergraph_FinalScreen_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
