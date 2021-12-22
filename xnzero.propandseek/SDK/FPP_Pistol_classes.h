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

// AnimBlueprintGeneratedClass FPP_Pistol.FPP_Pistol_C
// 0x00F8 (FullSize[0x0360] - InheritedSize[0x0268])
class UFPP_Pistol_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_KC3G[0x8];                                     // 0x0268(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_8A20C29948AB6788D00436AF41FFEE13;       // 0x0278(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7F4244F948E1DA37A5F3769A9EDA5E86; // 0x0298(0x0078)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_B0CC54F546AAFDFB58D2A187C94F962F;       // 0x0310(0x0048)
	class AFPS_Character2_C*                           Character;                                                 // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass FPP_Pistol.FPP_Pistol_C");
		return ptr;
	}



	void AnimNotify_Pistol_Fire();
	void ExecuteUbergraph_FPP_Pistol(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
