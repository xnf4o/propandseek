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
//		Offset -> 0x00680240
//		Name   -> Function LinearTimecode.LinearTimecodeComponent.SetDropTimecodeFrameNumber
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FDropTimecode                               Timecode                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		int                                                FrameNumber                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FDropTimecode                               OutTimecode                                                (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
void ULinearTimecodeComponent::STATIC_SetDropTimecodeFrameNumber(const struct FDropTimecode& Timecode, int FrameNumber, struct FDropTimecode* OutTimecode)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LinearTimecode.LinearTimecodeComponent.SetDropTimecodeFrameNumber");

	ULinearTimecodeComponent_SetDropTimecodeFrameNumber_Params params {};
	params.Timecode = Timecode;
	params.FrameNumber = FrameNumber;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutTimecode != nullptr)
		*OutTimecode = params.OutTimecode;

}


// Function:
//		Offset -> 0x00680150
//		Name   -> Function LinearTimecode.LinearTimecodeComponent.GetDropTimeCodeFrameNumber
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FDropTimecode                               Timecode                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		int                                                FrameNumber                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULinearTimecodeComponent::STATIC_GetDropTimeCodeFrameNumber(const struct FDropTimecode& Timecode, int* FrameNumber)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LinearTimecode.LinearTimecodeComponent.GetDropTimeCodeFrameNumber");

	ULinearTimecodeComponent_GetDropTimeCodeFrameNumber_Params params {};
	params.Timecode = Timecode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FrameNumber != nullptr)
		*FrameNumber = params.FrameNumber;

}


// Function:
//		Offset -> 0x00680120
//		Name   -> Function LinearTimecode.LinearTimecodeComponent.GetDropFrameNumber
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int ULinearTimecodeComponent::GetDropFrameNumber()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LinearTimecode.LinearTimecodeComponent.GetDropFrameNumber");

	ULinearTimecodeComponent_GetDropFrameNumber_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00680040
//		Name   -> Function LinearTimecode.DropTimecodeToStringConversion.Conv_DropTimecodeToString
//		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FDropTimecode                               InTimecode                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UDropTimecodeToStringConversion::STATIC_Conv_DropTimecodeToString(const struct FDropTimecode& InTimecode)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LinearTimecode.DropTimecodeToStringConversion.Conv_DropTimecodeToString");

	UDropTimecodeToStringConversion_Conv_DropTimecodeToString_Params params {};
	params.InTimecode = InTimecode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
