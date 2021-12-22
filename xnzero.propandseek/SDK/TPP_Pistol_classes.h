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

// AnimBlueprintGeneratedClass TPP_Pistol.TPP_Pistol_C
// 0x00F8 (FullSize[0x0360] - InheritedSize[0x0268])
class UTPP_Pistol_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_F4JI[0x8];                                     // 0x0268(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_B61D7B59450C311B2764969CD83035E7;       // 0x0278(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_261263B64F9F9FE6AABBF49E790A2D93; // 0x0298(0x0078)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_ED807891420ECA4A04DF20A4BC25E707;       // 0x0310(0x0048)
	class AFPS_Character2_C*                           Character;                                                 // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass TPP_Pistol.TPP_Pistol_C");
		return ptr;
	}



	void AnimNotify_Pistol_Fire();
	void AnimNotify_Pistol_Ammo_Fall();
	void ExecuteUbergraph_TPP_Pistol(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
