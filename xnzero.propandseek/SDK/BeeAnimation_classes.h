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

// AnimBlueprintGeneratedClass BeeAnimation.BeeAnimation_C
// 0x00A8 (FullSize[0x0310] - InheritedSize[0x0268])
class UBeeAnimation_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_A19N[0x8];                                     // 0x0268(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_A5FA6456479FE29A3B845DA3E105A35F;       // 0x0278(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C31D3D514DE98AC7EFF4128B72FD524C; // 0x0298(0x0078)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass BeeAnimation.BeeAnimation_C");
		return ptr;
	}



	void ExecuteUbergraph_BeeAnimation(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
