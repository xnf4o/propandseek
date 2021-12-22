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
//		Name   -> Function TempBanUMG.TempBanUMG_C.PC
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class AEntryPC_C*                                  AsEntry_PC                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTempBanUMG_C::PC(class AEntryPC_C** AsEntry_PC)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TempBanUMG.TempBanUMG_C.PC");

	UTempBanUMG_C_PC_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsEntry_PC != nullptr)
		*AsEntry_PC = params.AsEntry_PC;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function TempBanUMG.TempBanUMG_C.InitTempBan
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FDateTime                                   BannedUntil                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<Ereport_Ereport>                       Reason                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTempBanUMG_C::InitTempBan(const struct FDateTime& BannedUntil, TEnumAsByte<Ereport_Ereport> Reason)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TempBanUMG.TempBanUMG_C.InitTempBan");

	UTempBanUMG_C_InitTempBan_Params params {};
	params.BannedUntil = BannedUntil;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function TempBanUMG.TempBanUMG_C.ClockTick
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTempBanUMG_C::ClockTick()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TempBanUMG.TempBanUMG_C.ClockTick");

	UTempBanUMG_C_ClockTick_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function TempBanUMG.TempBanUMG_C.ExecuteUbergraph_TempBanUMG
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTempBanUMG_C::ExecuteUbergraph_TempBanUMG(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TempBanUMG.TempBanUMG_C.ExecuteUbergraph_TempBanUMG");

	UTempBanUMG_C_ExecuteUbergraph_TempBanUMG_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
