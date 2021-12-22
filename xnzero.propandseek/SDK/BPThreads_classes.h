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
// Classes
//---------------------------------------------------------------------------

// Class BPThreads.AsyncComponent
// 0x0060 (FullSize[0x0158] - InheritedSize[0x00F8])
class UAsyncComponent : public UActorComponent
{
public:
	TMap<struct FString, struct FScriptDelegate>       m_delegatesMap;                                            // 0x00F8(0x0050) (ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_864D[0x10];                                    // 0x0148(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class BPThreads.AsyncComponent");
		return ptr;
	}



	struct FString AsyncSphereTraceByChannel(const struct FScriptDelegate& theDelegate, const struct FVector& Start, const struct FVector& End, float Radius, TEnumAsByte<Engine_ECollisionChannel> TraceChannel, TArray<class AActor*> ActorsToIgnore, bool bTraceMultiple, bool bTraceComplex, bool bIgnoreSelf);
	struct FString AsyncLineTraceByObjectType(const struct FScriptDelegate& theDelegate, const struct FVector& Start, const struct FVector& End, TArray<TEnumAsByte<Engine_EObjectTypeQuery>> ObjectTypes, TArray<class AActor*> ActorsToIgnore, bool bTraceMultiple, bool bTraceComplex, bool bIgnoreSelf);
	struct FString AsyncLineTraceByChannel(const struct FScriptDelegate& theDelegate, const struct FVector& Start, const struct FVector& End, TEnumAsByte<Engine_ECollisionChannel> TraceChannel, TArray<class AActor*> ActorsToIgnore, bool bTraceMultiple, bool bTraceComplex, bool bIgnoreSelf);
	struct FString AsyncCapsuleTraceByChannel(const struct FScriptDelegate& theDelegate, const struct FVector& Start, const struct FVector& End, float Radius, float HalfHeight, TEnumAsByte<Engine_ECollisionChannel> TraceChannel, TArray<class AActor*> ActorsToIgnore, bool bTraceMultiple, bool bTraceComplex, bool bIgnoreSelf);
	struct FString AsyncBoxTraceByChannel(const struct FScriptDelegate& theDelegate, const struct FVector& Start, const struct FVector& End, const struct FVector& halfBoxExtent, TEnumAsByte<Engine_ECollisionChannel> TraceChannel, TArray<class AActor*> ActorsToIgnore, bool bTraceMultiple, bool bTraceComplex, bool bIgnoreSelf);
};

// Class BPThreads.BPThreadsBPLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBPThreadsBPLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class BPThreads.BPThreadsBPLibrary");
		return ptr;
	}



	void STATIC_SetWeakPointerObjectReference(struct FWeakPointer* ptr, class UObject* objectToReference);
	void STATIC_ResetWeakPointer(struct FWeakPointer* ptr);
	void STATIC_GetObjectThreadSafe(struct FWeakPointer* ptr, bool bEvenIfPendingKill, bool bUseHardGCGuard);
	class UObject* STATIC_GetObjectOnMainThread(struct FWeakPointer* ptr, bool bEvenIfPendingKill);
	void STATIC_GCScopeLockGuard(const struct FScriptDelegate& theDelegate);
	struct FWeakPointer STATIC_CreateWeakPointerWithDereferenceDelegate(class UObject* objectToReference, const struct FScriptDelegate& theDelegate, int ID);
	struct FWeakPointer STATIC_CreateWeakPointer(class UObject* objectToReference, int ID);
	class UThreadObject* STATIC_CreateThreadWithDelegateFunctionName(class UObject* Object, const struct FString& FunctionName, BPThreads_EBPThreadPriority Priority, bool bAutoStart, bool bAutoLoop, float fSleepTime);
	class UThreadSafeBoolObject* STATIC_CreateThreadSafeBool();
	class UThreadObject* STATIC_CreateThread(const struct FScriptDelegate& theDelegate, BPThreads_EBPThreadPriority Priority, bool bAutoStart, bool bAutoLoop, float fSleepTime);
	class UMutex* STATIC_CreateMutex();
	class UEventObject* STATIC_CreateEvent();
	void STATIC_BindDereferenceDelegate(struct FWeakPointer* ptr, const struct FScriptDelegate& theDelegate);
};

// Class BPThreads.EventObject
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UEventObject : public UObject
{
public:
	unsigned char                                      UnknownData_MDPZ[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class BPThreads.EventObject");
		return ptr;
	}



	bool WaitForEventWithTimeout(int Timeout);
	bool WaitForEventForever();
	void TriggerEvent();
};

// Class BPThreads.Mutex
// 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
class UMutex : public UObject
{
public:
	unsigned char                                      UnknownData_HYZR[0x28];                                    // 0x0028(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class BPThreads.Mutex");
		return ptr;
	}



	void Unlock();
	bool TryLock();
	void ScopeLock(const struct FScriptDelegate& theDelegate);
	void Lock();
};

// Class BPThreads.ThreadComponent
// 0x0018 (FullSize[0x0110] - InheritedSize[0x00F8])
class UThreadComponent : public UActorComponent
{
public:
	class UThreadObject*                               m_threadObj;                                               // 0x00F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAutorun;                                                  // 0x0100(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAutoLoop;                                                 // 0x0101(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MKSX[0x2];                                     // 0x0102(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              fSleepTime;                                                // 0x0104(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	BPThreads_EBPThreadPriority                        Priority;                                                  // 0x0108(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EJ44[0x7];                                     // 0x0109(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class BPThreads.ThreadComponent");
		return ptr;
	}



	void Unlock();
	void StopThread();
	void StartThread();
	void SleepThread(float Seconds);
	void ScopeLock(const struct FScriptDelegate& theDelegate);
	void ResumeThread();
	bool PauseThread();
	void Lock();
	void BindthreadBodyByFunctionName(class UObject* Object, const struct FString& FunctionName);
	void BindthreadBody(const struct FScriptDelegate& theDelegate);
};

// Class BPThreads.ThreadObject
// 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
class UThreadObject : public UObject
{
public:
	struct FScriptDelegate                             OnRunDelegates;                                            // 0x0028(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_T91M[0x48];                                    // 0x0038(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class BPThreads.ThreadObject");
		return ptr;
	}



	void Unlock();
	bool TryLock();
	void StopThread();
	void StartThread();
	void SleepThread(float SleepTime);
	void ScopeLock(const struct FScriptDelegate& theDelegate);
	void ResumeThread();
	bool PauseThread();
	void Lock();
	void Initialize(BPThreads_EBPThreadPriority Priority, bool bAutoStart, bool bAutoLoop, float fSleepTime);
};

// Class BPThreads.ThreadSafeBoolObject
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UThreadSafeBoolObject : public UObject
{
public:
	bool                                               m_valid;                                                   // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MJJ9[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class BPThreads.ThreadSafeBoolObject");
		return ptr;
	}



	void SetBool(bool bNewValue);
	bool GetBool();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
