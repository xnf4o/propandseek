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

// BlueprintGeneratedClass HoldableProp.HoldableProp_C
// 0x0028 (FullSize[0x0358] - InheritedSize[0x0330])
class AHoldableProp_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0330(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetComponent*                            Appear;                                                    // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USmoothSync*                                 SmoothSync;                                                // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        StaticMesh;                                                // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                                 StaticMeshActor;                                           // 0x0350(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass HoldableProp.HoldableProp_C");
		return ptr;
	}



	void GetHoldableWidget(class UHoldableWidget_C** AsHoldable_Widget);
	void OnDetectedOutline(bool Outline_);
	void ReceiveBeginPlay();
	void OnPropFocus(bool IsFocused_);
	void ExecuteUbergraph_HoldableProp(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
