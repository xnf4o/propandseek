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

// AnimBlueprintGeneratedClass FPP_Sniper_AB.FPP_Sniper_AB_C
// 0x00F0 (FullSize[0x0358] - InheritedSize[0x0268])
class UFPP_Sniper_AB_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_KAE8[0x8];                                     // 0x0268(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_6468412446255909F070D6975C941B4A;       // 0x0278(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DC97C9FE4E5A6954021CF1BA1467AAD0; // 0x0298(0x0078)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_E95CC90D4FE76AEE55D49D9CEA84459A;       // 0x0310(0x0048)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass FPP_Sniper_AB.FPP_Sniper_AB_C");
		return ptr;
	}



	void ExecuteUbergraph_FPP_Sniper_AB(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
