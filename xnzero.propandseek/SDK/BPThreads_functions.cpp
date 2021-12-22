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
//		Offset -> 0x0060D970
//		Name   -> Function BPThreads.AsyncComponent.AsyncSphereTraceByChannel
//		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FScriptDelegate                             theDelegate                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FVector                                     Start                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     End                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TEnumAsByte<Engine_ECollisionChannel>              TraceChannel                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<class AActor*>                              ActorsToIgnore                                             (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
//		bool                                               bTraceMultiple                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bTraceComplex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bIgnoreSelf                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UAsyncComponent::AsyncSphereTraceByChannel(const struct FScriptDelegate& theDelegate, const struct FVector& Start, const struct FVector& End, float Radius, TEnumAsByte<Engine_ECollisionChannel> TraceChannel, TArray<class AActor*> ActorsToIgnore, bool bTraceMultiple, bool bTraceComplex, bool bIgnoreSelf)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPThreads.AsyncComponent.AsyncSphereTraceByChannel");

	UAsyncComponent_AsyncSphereTraceByChannel_Params params {};
	params.theDelegate = theDelegate;
	params.Start = Start;
	params.End = End;
	params.Radius = Radius;
	params.TraceChannel = TraceChannel;
	params.ActorsToIgnore = ActorsToIgnore;
	params.bTraceMultiple = bTraceMultiple;
	params.bTraceComplex = bTraceComplex;
	params.bIgnoreSelf = bIgnoreSelf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0060D5E0
//		Name   -> Function BPThreads.AsyncComponent.AsyncLineTraceByObjectType
//		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FScriptDelegate                             theDelegate                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FVector                                     Start                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     End                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<TEnumAsByte<Engine_EObjectTypeQuery>>       ObjectTypes                                                (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
//		TArray<class AActor*>                              ActorsToIgnore                                             (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
//		bool                                               bTraceMultiple                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bTraceComplex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bIgnoreSelf                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UAsyncComponent::AsyncLineTraceByObjectType(const struct FScriptDelegate& theDelegate, const struct FVector& Start, const struct FVector& End, TArray<TEnumAsByte<Engine_EObjectTypeQuery>> ObjectTypes, TArray<class AActor*> ActorsToIgnore, bool bTraceMultiple, bool bTraceComplex, bool bIgnoreSelf)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPThreads.AsyncComponent.AsyncLineTraceByObjectType");

	UAsyncComponent_AsyncLineTraceByObjectType_Params params {};
	params.theDelegate = theDelegate;
	params.Start = Start;
	params.End = End;
	params.ObjectTypes = ObjectTypes;
	params.ActorsToIgnore = ActorsToIgnore;
	params.bTraceMultiple = bTraceMultiple;
	params.bTraceComplex = bTraceComplex;
	params.bIgnoreSelf = bIgnoreSelf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0060D2A0
//		Name   -> Function BPThreads.AsyncComponent.AsyncLineTraceByChannel
//		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FScriptDelegate                             theDelegate                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FVector                                     Start                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     End                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TEnumAsByte<Engine_ECollisionChannel>              TraceChannel                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<class AActor*>                              ActorsToIgnore                                             (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
//		bool                                               bTraceMultiple                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bTraceComplex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bIgnoreSelf                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UAsyncComponent::AsyncLineTraceByChannel(const struct FScriptDelegate& theDelegate, const struct FVector& Start, const struct FVector& End, TEnumAsByte<Engine_ECollisionChannel> TraceChannel, TArray<class AActor*> ActorsToIgnore, bool bTraceMultiple, bool bTraceComplex, bool bIgnoreSelf)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPThreads.AsyncComponent.AsyncLineTraceByChannel");

	UAsyncComponent_AsyncLineTraceByChannel_Params params {};
	params.theDelegate = theDelegate;
	params.Start = Start;
	params.End = End;
	params.TraceChannel = TraceChannel;
	params.ActorsToIgnore = ActorsToIgnore;
	params.bTraceMultiple = bTraceMultiple;
	params.bTraceComplex = bTraceComplex;
	params.bIgnoreSelf = bIgnoreSelf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0060CEE0
//		Name   -> Function BPThreads.AsyncComponent.AsyncCapsuleTraceByChannel
//		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FScriptDelegate                             theDelegate                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FVector                                     Start                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     End                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              HalfHeight                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TEnumAsByte<Engine_ECollisionChannel>              TraceChannel                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<class AActor*>                              ActorsToIgnore                                             (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
//		bool                                               bTraceMultiple                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bTraceComplex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bIgnoreSelf                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UAsyncComponent::AsyncCapsuleTraceByChannel(const struct FScriptDelegate& theDelegate, const struct FVector& Start, const struct FVector& End, float Radius, float HalfHeight, TEnumAsByte<Engine_ECollisionChannel> TraceChannel, TArray<class AActor*> ActorsToIgnore, bool bTraceMultiple, bool bTraceComplex, bool bIgnoreSelf)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPThreads.AsyncComponent.AsyncCapsuleTraceByChannel");

	UAsyncComponent_AsyncCapsuleTraceByChannel_Params params {};
	params.theDelegate = theDelegate;
	params.Start = Start;
	params.End = End;
	params.Radius = Radius;
	params.HalfHeight = HalfHeight;
	params.TraceChannel = TraceChannel;
	params.ActorsToIgnore = ActorsToIgnore;
	params.bTraceMultiple = bTraceMultiple;
	params.bTraceComplex = bTraceComplex;
	params.bIgnoreSelf = bIgnoreSelf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0060CB30
//		Name   -> Function BPThreads.AsyncComponent.AsyncBoxTraceByChannel
//		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FScriptDelegate                             theDelegate                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FVector                                     Start                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     End                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     halfBoxExtent                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TEnumAsByte<Engine_ECollisionChannel>              TraceChannel                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<class AActor*>                              ActorsToIgnore                                             (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
//		bool                                               bTraceMultiple                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bTraceComplex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bIgnoreSelf                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UAsyncComponent::AsyncBoxTraceByChannel(const struct FScriptDelegate& theDelegate, const struct FVector& Start, const struct FVector& End, const struct FVector& halfBoxExtent, TEnumAsByte<Engine_ECollisionChannel> TraceChannel, TArray<class AActor*> ActorsToIgnore, bool bTraceMultiple, bool bTraceComplex, bool bIgnoreSelf)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPThreads.AsyncComponent.AsyncBoxTraceByChannel");

	UAsyncComponent_AsyncBoxTraceByChannel_Params params {};
	params.theDelegate = theDelegate;
	params.Start = Start;
	params.End = End;
	params.halfBoxExtent = halfBoxExtent;
	params.TraceChannel = TraceChannel;
	params.ActorsToIgnore = ActorsToIgnore;
	params.bTraceMultiple = bTraceMultiple;
	params.bTraceComplex = bTraceComplex;
	params.bIgnoreSelf = bIgnoreSelf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0060F010
//		Name   -> Function BPThreads.BPThreadsBPLibrary.SetWeakPointerObjectReference
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FWeakPointer                                ptr                                                        (Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
//		class UObject*                                     objectToReference                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBPThreadsBPLibrary::STATIC_SetWeakPointerObjectReference(struct FWeakPointer* ptr, class UObject* objectToReference)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPThreads.BPThreadsBPLibrary.SetWeakPointerObjectReference");

	UBPThreadsBPLibrary_SetWeakPointerObjectReference_Params params {};
	params.objectToReference = objectToReference;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ptr != nullptr)
		*ptr = params.ptr;

}


// Function:
//		Offset -> 0x0060EC70
//		Name   -> Function BPThreads.BPThreadsBPLibrary.ResetWeakPointer
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FWeakPointer                                ptr                                                        (Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void UBPThreadsBPLibrary::STATIC_ResetWeakPointer(struct FWeakPointer* ptr)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPThreads.BPThreadsBPLibrary.ResetWeakPointer");

	UBPThreadsBPLibrary_ResetWeakPointer_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ptr != nullptr)
		*ptr = params.ptr;

}


// Function:
//		Offset -> 0x0060E920
//		Name   -> Function BPThreads.BPThreadsBPLibrary.GetObjectThreadSafe
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FWeakPointer                                ptr                                                        (Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
//		bool                                               bEvenIfPendingKill                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bUseHardGCGuard                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBPThreadsBPLibrary::STATIC_GetObjectThreadSafe(struct FWeakPointer* ptr, bool bEvenIfPendingKill, bool bUseHardGCGuard)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPThreads.BPThreadsBPLibrary.GetObjectThreadSafe");

	UBPThreadsBPLibrary_GetObjectThreadSafe_Params params {};
	params.bEvenIfPendingKill = bEvenIfPendingKill;
	params.bUseHardGCGuard = bUseHardGCGuard;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ptr != nullptr)
		*ptr = params.ptr;

}


// Function:
//		Offset -> 0x0060E820
//		Name   -> Function BPThreads.BPThreadsBPLibrary.GetObjectOnMainThread
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FWeakPointer                                ptr                                                        (Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
//		bool                                               bEvenIfPendingKill                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UObject*                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UObject* UBPThreadsBPLibrary::STATIC_GetObjectOnMainThread(struct FWeakPointer* ptr, bool bEvenIfPendingKill)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPThreads.BPThreadsBPLibrary.GetObjectOnMainThread");

	UBPThreadsBPLibrary_GetObjectOnMainThread_Params params {};
	params.bEvenIfPendingKill = bEvenIfPendingKill;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ptr != nullptr)
		*ptr = params.ptr;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0060E740
//		Name   -> Function BPThreads.BPThreadsBPLibrary.GCScopeLockGuard
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FScriptDelegate                             theDelegate                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UBPThreadsBPLibrary::STATIC_GCScopeLockGuard(const struct FScriptDelegate& theDelegate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPThreads.BPThreadsBPLibrary.GCScopeLockGuard");

	UBPThreadsBPLibrary_GCScopeLockGuard_Params params {};
	params.theDelegate = theDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0060E5D0
//		Name   -> Function BPThreads.BPThreadsBPLibrary.CreateWeakPointerWithDereferenceDelegate
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     objectToReference                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FScriptDelegate                             theDelegate                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		int                                                ID                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FWeakPointer                                ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
struct FWeakPointer UBPThreadsBPLibrary::STATIC_CreateWeakPointerWithDereferenceDelegate(class UObject* objectToReference, const struct FScriptDelegate& theDelegate, int ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPThreads.BPThreadsBPLibrary.CreateWeakPointerWithDereferenceDelegate");

	UBPThreadsBPLibrary_CreateWeakPointerWithDereferenceDelegate_Params params {};
	params.objectToReference = objectToReference;
	params.theDelegate = theDelegate;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0060E4E0
//		Name   -> Function BPThreads.BPThreadsBPLibrary.CreateWeakPointer
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     objectToReference                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ID                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FWeakPointer                                ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
struct FWeakPointer UBPThreadsBPLibrary::STATIC_CreateWeakPointer(class UObject* objectToReference, int ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPThreads.BPThreadsBPLibrary.CreateWeakPointer");

	UBPThreadsBPLibrary_CreateWeakPointer_Params params {};
	params.objectToReference = objectToReference;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0060E2D0
//		Name   -> Function BPThreads.BPThreadsBPLibrary.CreateThreadWithDelegateFunctionName
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     Object                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     FunctionName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		BPThreads_EBPThreadPriority                        Priority                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bAutoStart                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bAutoLoop                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              fSleepTime                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UThreadObject*                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UThreadObject* UBPThreadsBPLibrary::STATIC_CreateThreadWithDelegateFunctionName(class UObject* Object, const struct FString& FunctionName, BPThreads_EBPThreadPriority Priority, bool bAutoStart, bool bAutoLoop, float fSleepTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPThreads.BPThreadsBPLibrary.CreateThreadWithDelegateFunctionName");

	UBPThreadsBPLibrary_CreateThreadWithDelegateFunctionName_Params params {};
	params.Object = Object;
	params.FunctionName = FunctionName;
	params.Priority = Priority;
	params.bAutoStart = bAutoStart;
	params.bAutoLoop = bAutoLoop;
	params.fSleepTime = fSleepTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0060E2A0
//		Name   -> Function BPThreads.BPThreadsBPLibrary.CreateThreadSafeBool
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UThreadSafeBoolObject*                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UThreadSafeBoolObject* UBPThreadsBPLibrary::STATIC_CreateThreadSafeBool()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPThreads.BPThreadsBPLibrary.CreateThreadSafeBool");

	UBPThreadsBPLibrary_CreateThreadSafeBool_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0060E0E0
//		Name   -> Function BPThreads.BPThreadsBPLibrary.CreateThread
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FScriptDelegate                             theDelegate                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		BPThreads_EBPThreadPriority                        Priority                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bAutoStart                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bAutoLoop                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              fSleepTime                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UThreadObject*                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UThreadObject* UBPThreadsBPLibrary::STATIC_CreateThread(const struct FScriptDelegate& theDelegate, BPThreads_EBPThreadPriority Priority, bool bAutoStart, bool bAutoLoop, float fSleepTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPThreads.BPThreadsBPLibrary.CreateThread");

	UBPThreadsBPLibrary_CreateThread_Params params {};
	params.theDelegate = theDelegate;
	params.Priority = Priority;
	params.bAutoStart = bAutoStart;
	params.bAutoLoop = bAutoLoop;
	params.fSleepTime = fSleepTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0060E0B0
//		Name   -> Function BPThreads.BPThreadsBPLibrary.CreateMutex
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UMutex*                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMutex* UBPThreadsBPLibrary::STATIC_CreateMutex()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPThreads.BPThreadsBPLibrary.CreateMutex");

	UBPThreadsBPLibrary_CreateMutex_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0060E080
//		Name   -> Function BPThreads.BPThreadsBPLibrary.CreateEvent
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UEventObject*                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UEventObject* UBPThreadsBPLibrary::STATIC_CreateEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPThreads.BPThreadsBPLibrary.CreateEvent");

	UBPThreadsBPLibrary_CreateEvent_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0060DD00
//		Name   -> Function BPThreads.BPThreadsBPLibrary.BindDereferenceDelegate
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FWeakPointer                                ptr                                                        (Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
//		struct FScriptDelegate                             theDelegate                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UBPThreadsBPLibrary::STATIC_BindDereferenceDelegate(struct FWeakPointer* ptr, const struct FScriptDelegate& theDelegate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPThreads.BPThreadsBPLibrary.BindDereferenceDelegate");

	UBPThreadsBPLibrary_BindDereferenceDelegate_Params params {};
	params.theDelegate = theDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ptr != nullptr)
		*ptr = params.ptr;

}


// Function:
//		Offset -> 0x0060F390
//		Name   -> Function BPThreads.EventObject.WaitForEventWithTimeout
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                Timeout                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UEventObject::WaitForEventWithTimeout(int Timeout)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPThreads.EventObject.WaitForEventWithTimeout");

	UEventObject_WaitForEventWithTimeout_Params params {};
	params.Timeout = Timeout;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0060F360
//		Name   -> Function BPThreads.EventObject.WaitForEventForever
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UEventObject::WaitForEventForever()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPThreads.EventObject.WaitForEventForever");

	UEventObject_WaitForEventForever_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0060F280
//		Name   -> Function BPThreads.EventObject.TriggerEvent
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UEventObject::TriggerEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPThreads.EventObject.TriggerEvent");

	UEventObject_TriggerEvent_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0060F300
//		Name   -> Function BPThreads.Mutex.Unlock
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UMutex::Unlock()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPThreads.Mutex.Unlock");

	UMutex_Unlock_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0060F2A0
//		Name   -> Function BPThreads.Mutex.TryLock
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMutex::TryLock()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPThreads.Mutex.TryLock");

	UMutex_TryLock_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0060ED50
//		Name   -> Function BPThreads.Mutex.ScopeLock
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FScriptDelegate                             theDelegate                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UMutex::ScopeLock(const struct FScriptDelegate& theDelegate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPThreads.Mutex.ScopeLock");

	UMutex_ScopeLock_Params params {};
	params.theDelegate = theDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0060EBB0
//		Name   -> Function BPThreads.Mutex.Lock
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UMutex::Lock()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPThreads.Mutex.Lock");

	UMutex_Lock_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0060F320
//		Name   -> Function BPThreads.ThreadComponent.Unlock
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UThreadComponent::Unlock()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPThreads.ThreadComponent.Unlock");

	UThreadComponent_Unlock_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0060F240
//		Name   -> Function BPThreads.ThreadComponent.StopThread
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UThreadComponent::StopThread()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPThreads.ThreadComponent.StopThread");

	UThreadComponent_StopThread_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0060F200
//		Name   -> Function BPThreads.ThreadComponent.StartThread
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UThreadComponent::StartThread()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPThreads.ThreadComponent.StartThread");

	UThreadComponent_StartThread_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0060F100
//		Name   -> Function BPThreads.ThreadComponent.SleepThread
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              Seconds                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UThreadComponent::SleepThread(float Seconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPThreads.ThreadComponent.SleepThread");

	UThreadComponent_SleepThread_Params params {};
	params.Seconds = Seconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0060EE10
//		Name   -> Function BPThreads.ThreadComponent.ScopeLock
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FScriptDelegate                             theDelegate                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UThreadComponent::ScopeLock(const struct FScriptDelegate& theDelegate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPThreads.ThreadComponent.ScopeLock");

	UThreadComponent_ScopeLock_Params params {};
	params.theDelegate = theDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0060ED10
//		Name   -> Function BPThreads.ThreadComponent.ResumeThread
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UThreadComponent::ResumeThread()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPThreads.ThreadComponent.ResumeThread");

	UThreadComponent_ResumeThread_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0060EC10
//		Name   -> Function BPThreads.ThreadComponent.PauseThread
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UThreadComponent::PauseThread()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPThreads.ThreadComponent.PauseThread");

	UThreadComponent_PauseThread_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0060EBD0
//		Name   -> Function BPThreads.ThreadComponent.Lock
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UThreadComponent::Lock()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPThreads.ThreadComponent.Lock");

	UThreadComponent_Lock_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0060DF20
//		Name   -> Function BPThreads.ThreadComponent.BindthreadBodyByFunctionName
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     Object                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     FunctionName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UThreadComponent::BindthreadBodyByFunctionName(class UObject* Object, const struct FString& FunctionName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPThreads.ThreadComponent.BindthreadBodyByFunctionName");

	UThreadComponent_BindthreadBodyByFunctionName_Params params {};
	params.Object = Object;
	params.FunctionName = FunctionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0060DE20
//		Name   -> Function BPThreads.ThreadComponent.BindthreadBody
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FScriptDelegate                             theDelegate                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UThreadComponent::BindthreadBody(const struct FScriptDelegate& theDelegate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPThreads.ThreadComponent.BindthreadBody");

	UThreadComponent_BindthreadBody_Params params {};
	params.theDelegate = theDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0060F340
//		Name   -> Function BPThreads.ThreadObject.Unlock
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UThreadObject::Unlock()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPThreads.ThreadObject.Unlock");

	UThreadObject_Unlock_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0060F2D0
//		Name   -> Function BPThreads.ThreadObject.TryLock
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UThreadObject::TryLock()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPThreads.ThreadObject.TryLock");

	UThreadObject_TryLock_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0060F260
//		Name   -> Function BPThreads.ThreadObject.StopThread
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UThreadObject::StopThread()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPThreads.ThreadObject.StopThread");

	UThreadObject_StopThread_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0060F220
//		Name   -> Function BPThreads.ThreadObject.StartThread
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UThreadObject::StartThread()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPThreads.ThreadObject.StartThread");

	UThreadObject_StartThread_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0060F180
//		Name   -> Function BPThreads.ThreadObject.SleepThread
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              SleepTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UThreadObject::SleepThread(float SleepTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPThreads.ThreadObject.SleepThread");

	UThreadObject_SleepThread_Params params {};
	params.SleepTime = SleepTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0060EED0
//		Name   -> Function BPThreads.ThreadObject.ScopeLock
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FScriptDelegate                             theDelegate                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UThreadObject::ScopeLock(const struct FScriptDelegate& theDelegate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPThreads.ThreadObject.ScopeLock");

	UThreadObject_ScopeLock_Params params {};
	params.theDelegate = theDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0060ED30
//		Name   -> Function BPThreads.ThreadObject.ResumeThread
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UThreadObject::ResumeThread()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPThreads.ThreadObject.ResumeThread");

	UThreadObject_ResumeThread_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0060EC40
//		Name   -> Function BPThreads.ThreadObject.PauseThread
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UThreadObject::PauseThread()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPThreads.ThreadObject.PauseThread");

	UThreadObject_PauseThread_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0060EBF0
//		Name   -> Function BPThreads.ThreadObject.Lock
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UThreadObject::Lock()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPThreads.ThreadObject.Lock");

	UThreadObject_Lock_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0060EA50
//		Name   -> Function BPThreads.ThreadObject.Initialize
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		BPThreads_EBPThreadPriority                        Priority                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bAutoStart                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bAutoLoop                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              fSleepTime                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UThreadObject::Initialize(BPThreads_EBPThreadPriority Priority, bool bAutoStart, bool bAutoLoop, float fSleepTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPThreads.ThreadObject.Initialize");

	UThreadObject_Initialize_Params params {};
	params.Priority = Priority;
	params.bAutoStart = bAutoStart;
	params.bAutoLoop = bAutoLoop;
	params.fSleepTime = fSleepTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0060EF90
//		Name   -> Function BPThreads.ThreadSafeBoolObject.SetBool
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bNewValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UThreadSafeBoolObject::SetBool(bool bNewValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPThreads.ThreadSafeBoolObject.SetBool");

	UThreadSafeBoolObject_SetBool_Params params {};
	params.bNewValue = bNewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0060E7F0
//		Name   -> Function BPThreads.ThreadSafeBoolObject.GetBool
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UThreadSafeBoolObject::GetBool()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPThreads.ThreadSafeBoolObject.GetBool");

	UThreadSafeBoolObject_GetBool_Params params {};

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
