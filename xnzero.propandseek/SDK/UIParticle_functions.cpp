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
//		Offset -> 0x0048CB10
//		Name   -> Function UIParticle.UIParticle.StopEmit
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UUIParticle::StopEmit()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UIParticle.UIParticle.StopEmit");

	UUIParticle_StopEmit_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0048CAD0
//		Name   -> Function UIParticle.UIParticle.Stop
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UUIParticle::Stop()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UIParticle.UIParticle.Stop");

	UUIParticle_Stop_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0048C9B0
//		Name   -> Function UIParticle.UIParticle.SetPlayParticle
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               InPlayParticle                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUIParticle::SetPlayParticle(bool InPlayParticle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UIParticle.UIParticle.SetPlayParticle");

	UUIParticle_SetPlayParticle_Params params {};
	params.InPlayParticle = InPlayParticle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0048C880
//		Name   -> Function UIParticle.UIParticle.Play
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UUIParticle::Play()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UIParticle.UIParticle.Play");

	UUIParticle_Play_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0048CB30
//		Name   -> Function UIParticle.UIParticleEmitter.StopEmit
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UUIParticleEmitter::StopEmit()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UIParticle.UIParticleEmitter.StopEmit");

	UUIParticleEmitter_StopEmit_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0048CAF0
//		Name   -> Function UIParticle.UIParticleEmitter.Stop
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UUIParticleEmitter::Stop()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UIParticle.UIParticleEmitter.Stop");

	UUIParticleEmitter_Stop_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0048CA40
//		Name   -> Function UIParticle.UIParticleEmitter.SetPlayParticle
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               InPlayParticle                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUIParticleEmitter::SetPlayParticle(bool InPlayParticle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UIParticle.UIParticleEmitter.SetPlayParticle");

	UUIParticleEmitter_SetPlayParticle_Params params {};
	params.InPlayParticle = InPlayParticle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0048C8A0
//		Name   -> Function UIParticle.UIParticleEmitter.Play
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UUIParticleEmitter::Play()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UIParticle.UIParticleEmitter.Play");

	UUIParticleEmitter_Play_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0048C930
//		Name   -> Function UIParticle.UIParticleUtility.SetMultiThread
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		bool                                               Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUIParticleUtility::STATIC_SetMultiThread(bool Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UIParticle.UIParticleUtility.SetMultiThread");

	UUIParticleUtility_SetMultiThread_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0048C8C0
//		Name   -> Function UIParticle.UIParticleUtility.SetLOD
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		int                                                newlod                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUIParticleUtility::STATIC_SetLOD(int newlod)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UIParticle.UIParticleUtility.SetLOD");

	UUIParticleUtility_SetLOD_Params params {};
	params.newlod = newlod;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0048C850
//		Name   -> Function UIParticle.UIParticleUtility.GetMultiThread
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUIParticleUtility::STATIC_GetMultiThread()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UIParticle.UIParticleUtility.GetMultiThread");

	UUIParticleUtility_GetMultiThread_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0048C820
//		Name   -> Function UIParticle.UIParticleUtility.GetLOD
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUIParticleUtility::STATIC_GetLOD()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UIParticle.UIParticleUtility.GetLOD");

	UUIParticleUtility_GetLOD_Params params {};

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
