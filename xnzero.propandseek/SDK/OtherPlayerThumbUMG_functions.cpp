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
//		Name   -> Function OtherPlayerThumbUMG.OtherPlayerThumbUMG_C.SyncResetToDefault
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UOtherPlayerThumbUMG_C::SyncResetToDefault()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OtherPlayerThumbUMG.OtherPlayerThumbUMG_C.SyncResetToDefault");

	UOtherPlayerThumbUMG_C_SyncResetToDefault_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function OtherPlayerThumbUMG.OtherPlayerThumbUMG_C.PC
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class AFPS_PC_C*                                   AsFPS_PC                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UOtherPlayerThumbUMG_C::PC(class AFPS_PC_C** AsFPS_PC)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OtherPlayerThumbUMG.OtherPlayerThumbUMG_C.PC");

	UOtherPlayerThumbUMG_C_PC_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsFPS_PC != nullptr)
		*AsFPS_PC = params.AsFPS_PC;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function OtherPlayerThumbUMG.OtherPlayerThumbUMG_C.SyncPropImageTexture
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTexture2D*                                  PropTextureImage                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FString                                     PropName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UOtherPlayerThumbUMG_C::SyncPropImageTexture(class UTexture2D* PropTextureImage, const struct FString& PropName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OtherPlayerThumbUMG.OtherPlayerThumbUMG_C.SyncPropImageTexture");

	UOtherPlayerThumbUMG_C_SyncPropImageTexture_Params params {};
	params.PropTextureImage = PropTextureImage;
	params.PropName = PropName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function OtherPlayerThumbUMG.OtherPlayerThumbUMG_C.DisplayAddAnim
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                CountToAdd                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UOtherPlayerThumbUMG_C::DisplayAddAnim(int CountToAdd)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OtherPlayerThumbUMG.OtherPlayerThumbUMG_C.DisplayAddAnim");

	UOtherPlayerThumbUMG_C_DisplayAddAnim_Params params {};
	params.CountToAdd = CountToAdd;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function OtherPlayerThumbUMG.OtherPlayerThumbUMG_C.SyncBaseAmount
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                SyncAmountNumber                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UOtherPlayerThumbUMG_C::SyncBaseAmount(int SyncAmountNumber)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OtherPlayerThumbUMG.OtherPlayerThumbUMG_C.SyncBaseAmount");

	UOtherPlayerThumbUMG_C_SyncBaseAmount_Params params {};
	params.SyncAmountNumber = SyncAmountNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
