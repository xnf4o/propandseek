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

// AnimBlueprintGeneratedClass TPP_Shotgun_AB.TPP_Shotgun_AB_C
// 0x00F8 (FullSize[0x0360] - InheritedSize[0x0268])
class UTPP_Shotgun_AB_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_580E[0x8];                                     // 0x0268(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_B361D0D54E7AF109C461D49A08F4BAE6;       // 0x0278(0x0020)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_AD29502740291F52BD1D129E3D98A43D;       // 0x0298(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_836AAD8C4D49214956DDEE89919648E2; // 0x02E0(0x0078)
	class AFPS_Character2_C*                           Character;                                                 // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass TPP_Shotgun_AB.TPP_Shotgun_AB_C");
		return ptr;
	}



	void AnimNotify_Sound_Fire_Shotgun();
	void AnimNotify_Shotgun_Ammo_Out();
	void AnimNotify_Sound_Shotgun_Reload();
	void AnimNotify_Shotgun_Reloadin();
	void AnimNotify_Shotgun_ReloadMagOut();
	void AnimNotify_Shotgun_ReloadMag();
	void AnimNotify_Shotgun_ReloadOut();
	void ExecuteUbergraph_TPP_Shotgun_AB(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
