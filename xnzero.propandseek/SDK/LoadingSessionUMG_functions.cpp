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
//		Name   -> Function LoadingSessionUMG.LoadingSessionUMG_C.PC
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class ALobbyPC2_C*                                 AsLobby_PC1                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULoadingSessionUMG_C::PC(class ALobbyPC2_C** AsLobby_PC1)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LoadingSessionUMG.LoadingSessionUMG_C.PC");

	ULoadingSessionUMG_C_PC_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsLobby_PC1 != nullptr)
		*AsLobby_PC1 = params.AsLobby_PC1;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LoadingSessionUMG.LoadingSessionUMG_C.InitLoading
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ULoadingSessionUMG_C::InitLoading()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LoadingSessionUMG.LoadingSessionUMG_C.InitLoading");

	ULoadingSessionUMG_C_InitLoading_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function LoadingSessionUMG.LoadingSessionUMG_C.ExecuteUbergraph_LoadingSessionUMG
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULoadingSessionUMG_C::ExecuteUbergraph_LoadingSessionUMG(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LoadingSessionUMG.LoadingSessionUMG_C.ExecuteUbergraph_LoadingSessionUMG");

	ULoadingSessionUMG_C_ExecuteUbergraph_LoadingSessionUMG_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
