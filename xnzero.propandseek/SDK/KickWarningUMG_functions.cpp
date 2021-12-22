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
//		Name   -> Function KickWarningUMG.KickWarningUMG_C.Remove
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UKickWarningUMG_C::Remove()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KickWarningUMG.KickWarningUMG_C.Remove");

	UKickWarningUMG_C_Remove_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function KickWarningUMG.KickWarningUMG_C.UpdateKickWarning
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                SecLeft                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UKickWarningUMG_C::UpdateKickWarning(int SecLeft)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KickWarningUMG.KickWarningUMG_C.UpdateKickWarning");

	UKickWarningUMG_C_UpdateKickWarning_Params params {};
	params.SecLeft = SecLeft;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function KickWarningUMG.KickWarningUMG_C.PC
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class AFPS_PC_C*                                   AsFPS_PC                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UKickWarningUMG_C::PC(class AFPS_PC_C** AsFPS_PC)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KickWarningUMG.KickWarningUMG_C.PC");

	UKickWarningUMG_C_PC_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsFPS_PC != nullptr)
		*AsFPS_PC = params.AsFPS_PC;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
