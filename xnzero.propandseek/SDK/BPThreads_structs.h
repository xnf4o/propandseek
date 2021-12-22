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
// Enums
//---------------------------------------------------------------------------

// Enum BPThreads.EBPThreadPriority
enum class BPThreads_EBPThreadPriority : uint8_t
{
	EBPThreadPriority__ETPri_Normal = 0,
	EBPThreadPriority__ETPri_AboveNormal = 1,
	EBPThreadPriority__ETPri_BelowNormal = 2,
	EBPThreadPriority__ETPri_Highest = 3,
	EBPThreadPriority__ETPri_Lowest = 4,
	EBPThreadPriority__ETPri_SlightlyBelowNormal = 5,
	EBPThreadPriority__ETPri_TimeCritical = 6,
	EBPThreadPriority__ETPri_MAX   = 7,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct BPThreads.WeakPointer
// 0x001C
struct FWeakPointer
{
	int                                                m_ID;                                                      // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UObject>                      m_object;                                                  // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             m_delegate;                                                // 0x000C(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
