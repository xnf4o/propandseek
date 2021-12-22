﻿#pragma once

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

// BlueprintGeneratedClass BP_PC_InputDetect.BP_PC_InputDetect_C
// 0x0038 (FullSize[0x06B0] - InheritedSize[0x0678])
class ABP_PC_InputDetect_C : public APlayerController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0678(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FKey                                        LastPressedKey;                                            // 0x0680(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FKey                                        AnyKey;                                                    // 0x0698(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_PC_InputDetect.BP_PC_InputDetect_C");
		return ptr;
	}



	void FindRightInputType(const struct FKey& InputKey, struct FKey* LastPressedKey);
	bool GetIsMouseMoving();
	void InpActEvt_AnyKey_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void UpdateMouseCursor();
	void ExecuteUbergraph_BP_PC_InputDetect(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
