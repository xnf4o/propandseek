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
//		Name   -> Function ThumbsUpUMG.ThumbsUpUMG_C.SyncBaseMyInfo
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Count                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UThumbsUpUMG_C::SyncBaseMyInfo(int Count)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ThumbsUpUMG.ThumbsUpUMG_C.SyncBaseMyInfo");

	UThumbsUpUMG_C_SyncBaseMyInfo_Params params {};
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ThumbsUpUMG.ThumbsUpUMG_C.DisplayAnimThumbsUp
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                NewCountNumber                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UThumbsUpUMG_C::DisplayAnimThumbsUp(int NewCountNumber)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ThumbsUpUMG.ThumbsUpUMG_C.DisplayAnimThumbsUp");

	UThumbsUpUMG_C_DisplayAnimThumbsUp_Params params {};
	params.NewCountNumber = NewCountNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ThumbsUpUMG.ThumbsUpUMG_C.PC
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class AFPS_PC_C*                                   AsFPS_PC                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UThumbsUpUMG_C::PC(class AFPS_PC_C** AsFPS_PC)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ThumbsUpUMG.ThumbsUpUMG_C.PC");

	UThumbsUpUMG_C_PC_Params params {};

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
