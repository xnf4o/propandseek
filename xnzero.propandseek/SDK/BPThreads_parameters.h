#pragma once

// Name: pns, Version: 1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BPThreads.AsyncComponent.AsyncSphereTraceByChannel
struct UAsyncComponent_AsyncSphereTraceByChannel_Params
{
	struct FScriptDelegate                             theDelegate;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     Start;                                                     // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     End;                                                       // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Radius;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ECollisionChannel>              TraceChannel;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                              ActorsToIgnore;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bTraceMultiple;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTraceComplex;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIgnoreSelf;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function BPThreads.AsyncComponent.AsyncLineTraceByObjectType
struct UAsyncComponent_AsyncLineTraceByObjectType_Params
{
	struct FScriptDelegate                             theDelegate;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     Start;                                                     // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     End;                                                       // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TEnumAsByte<Engine_EObjectTypeQuery>>       ObjectTypes;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class AActor*>                              ActorsToIgnore;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bTraceMultiple;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTraceComplex;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIgnoreSelf;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function BPThreads.AsyncComponent.AsyncLineTraceByChannel
struct UAsyncComponent_AsyncLineTraceByChannel_Params
{
	struct FScriptDelegate                             theDelegate;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     Start;                                                     // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     End;                                                       // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ECollisionChannel>              TraceChannel;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                              ActorsToIgnore;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bTraceMultiple;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTraceComplex;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIgnoreSelf;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function BPThreads.AsyncComponent.AsyncCapsuleTraceByChannel
struct UAsyncComponent_AsyncCapsuleTraceByChannel_Params
{
	struct FScriptDelegate                             theDelegate;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     Start;                                                     // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     End;                                                       // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Radius;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HalfHeight;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ECollisionChannel>              TraceChannel;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                              ActorsToIgnore;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bTraceMultiple;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTraceComplex;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIgnoreSelf;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function BPThreads.AsyncComponent.AsyncBoxTraceByChannel
struct UAsyncComponent_AsyncBoxTraceByChannel_Params
{
	struct FScriptDelegate                             theDelegate;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     Start;                                                     // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     End;                                                       // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     halfBoxExtent;                                             // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ECollisionChannel>              TraceChannel;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                              ActorsToIgnore;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bTraceMultiple;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTraceComplex;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIgnoreSelf;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function BPThreads.BPThreadsBPLibrary.SetWeakPointerObjectReference
struct UBPThreadsBPLibrary_SetWeakPointerObjectReference_Params
{
	struct FWeakPointer                                ptr;                                                       // 0x0000(0x001C)  (Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UObject*                                     objectToReference;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function BPThreads.BPThreadsBPLibrary.ResetWeakPointer
struct UBPThreadsBPLibrary_ResetWeakPointer_Params
{
	struct FWeakPointer                                ptr;                                                       // 0x0000(0x001C)  (Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function BPThreads.BPThreadsBPLibrary.GetObjectThreadSafe
struct UBPThreadsBPLibrary_GetObjectThreadSafe_Params
{
	struct FWeakPointer                                ptr;                                                       // 0x0000(0x001C)  (Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                               bEvenIfPendingKill;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseHardGCGuard;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function BPThreads.BPThreadsBPLibrary.GetObjectOnMainThread
struct UBPThreadsBPLibrary_GetObjectOnMainThread_Params
{
	struct FWeakPointer                                ptr;                                                       // 0x0000(0x001C)  (Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                               bEvenIfPendingKill;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function BPThreads.BPThreadsBPLibrary.GCScopeLockGuard
struct UBPThreadsBPLibrary_GCScopeLockGuard_Params
{
	struct FScriptDelegate                             theDelegate;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function BPThreads.BPThreadsBPLibrary.CreateWeakPointerWithDereferenceDelegate
struct UBPThreadsBPLibrary_CreateWeakPointerWithDereferenceDelegate_Params
{
	class UObject*                                     objectToReference;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             theDelegate;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                ID;                                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWeakPointer                                ReturnValue;                                               // 0x0000(0x001C)  (Parm, OutParm, ReturnParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function BPThreads.BPThreadsBPLibrary.CreateWeakPointer
struct UBPThreadsBPLibrary_CreateWeakPointer_Params
{
	class UObject*                                     objectToReference;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ID;                                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWeakPointer                                ReturnValue;                                               // 0x0000(0x001C)  (Parm, OutParm, ReturnParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function BPThreads.BPThreadsBPLibrary.CreateThreadWithDelegateFunctionName
struct UBPThreadsBPLibrary_CreateThreadWithDelegateFunctionName_Params
{
	class UObject*                                     Object;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     FunctionName;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	BPThreads_EBPThreadPriority                        Priority;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAutoStart;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAutoLoop;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              fSleepTime;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UThreadObject*                               ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function BPThreads.BPThreadsBPLibrary.CreateThreadSafeBool
struct UBPThreadsBPLibrary_CreateThreadSafeBool_Params
{
	class UThreadSafeBoolObject*                       ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function BPThreads.BPThreadsBPLibrary.CreateThread
struct UBPThreadsBPLibrary_CreateThread_Params
{
	struct FScriptDelegate                             theDelegate;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	BPThreads_EBPThreadPriority                        Priority;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAutoStart;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAutoLoop;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              fSleepTime;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UThreadObject*                               ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function BPThreads.BPThreadsBPLibrary.CreateMutex
struct UBPThreadsBPLibrary_CreateMutex_Params
{
	class UMutex*                                      ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function BPThreads.BPThreadsBPLibrary.CreateEvent
struct UBPThreadsBPLibrary_CreateEvent_Params
{
	class UEventObject*                                ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function BPThreads.BPThreadsBPLibrary.BindDereferenceDelegate
struct UBPThreadsBPLibrary_BindDereferenceDelegate_Params
{
	struct FWeakPointer                                ptr;                                                       // 0x0000(0x001C)  (Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             theDelegate;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function BPThreads.EventObject.WaitForEventWithTimeout
struct UEventObject_WaitForEventWithTimeout_Params
{
	int                                                Timeout;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function BPThreads.EventObject.WaitForEventForever
struct UEventObject_WaitForEventForever_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function BPThreads.EventObject.TriggerEvent
struct UEventObject_TriggerEvent_Params
{
};

// Function BPThreads.Mutex.Unlock
struct UMutex_Unlock_Params
{
};

// Function BPThreads.Mutex.TryLock
struct UMutex_TryLock_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function BPThreads.Mutex.ScopeLock
struct UMutex_ScopeLock_Params
{
	struct FScriptDelegate                             theDelegate;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function BPThreads.Mutex.Lock
struct UMutex_Lock_Params
{
};

// Function BPThreads.ThreadComponent.Unlock
struct UThreadComponent_Unlock_Params
{
};

// Function BPThreads.ThreadComponent.StopThread
struct UThreadComponent_StopThread_Params
{
};

// Function BPThreads.ThreadComponent.StartThread
struct UThreadComponent_StartThread_Params
{
};

// Function BPThreads.ThreadComponent.SleepThread
struct UThreadComponent_SleepThread_Params
{
	float                                              Seconds;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function BPThreads.ThreadComponent.ScopeLock
struct UThreadComponent_ScopeLock_Params
{
	struct FScriptDelegate                             theDelegate;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function BPThreads.ThreadComponent.ResumeThread
struct UThreadComponent_ResumeThread_Params
{
};

// Function BPThreads.ThreadComponent.PauseThread
struct UThreadComponent_PauseThread_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function BPThreads.ThreadComponent.Lock
struct UThreadComponent_Lock_Params
{
};

// Function BPThreads.ThreadComponent.BindthreadBodyByFunctionName
struct UThreadComponent_BindthreadBodyByFunctionName_Params
{
	class UObject*                                     Object;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     FunctionName;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function BPThreads.ThreadComponent.BindthreadBody
struct UThreadComponent_BindthreadBody_Params
{
	struct FScriptDelegate                             theDelegate;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function BPThreads.ThreadObject.Unlock
struct UThreadObject_Unlock_Params
{
};

// Function BPThreads.ThreadObject.TryLock
struct UThreadObject_TryLock_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function BPThreads.ThreadObject.StopThread
struct UThreadObject_StopThread_Params
{
};

// Function BPThreads.ThreadObject.StartThread
struct UThreadObject_StartThread_Params
{
};

// Function BPThreads.ThreadObject.SleepThread
struct UThreadObject_SleepThread_Params
{
	float                                              SleepTime;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function BPThreads.ThreadObject.ScopeLock
struct UThreadObject_ScopeLock_Params
{
	struct FScriptDelegate                             theDelegate;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function BPThreads.ThreadObject.ResumeThread
struct UThreadObject_ResumeThread_Params
{
};

// Function BPThreads.ThreadObject.PauseThread
struct UThreadObject_PauseThread_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function BPThreads.ThreadObject.Lock
struct UThreadObject_Lock_Params
{
};

// Function BPThreads.ThreadObject.Initialize
struct UThreadObject_Initialize_Params
{
	BPThreads_EBPThreadPriority                        Priority;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAutoStart;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAutoLoop;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              fSleepTime;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function BPThreads.ThreadSafeBoolObject.SetBool
struct UThreadSafeBoolObject_SetBool_Params
{
	bool                                               bNewValue;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function BPThreads.ThreadSafeBoolObject.GetBool
struct UThreadSafeBoolObject_GetBool_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
