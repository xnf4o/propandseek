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

// AnimBlueprintGeneratedClass FPP_Shotgun_AB.FPP_Shotgun_AB_C
// 0x00F8 (FullSize[0x0360] - InheritedSize[0x0268])
class UFPP_Shotgun_AB_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_ARBX[0x8];                                     // 0x0268(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_8B4FABCC4AF5F5B6010F339C5450BCE7;       // 0x0278(0x0020)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_7AACB8B545F6C14F3942B088E03B847B;       // 0x0298(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_68ACB92540DCD854984B63BAE0F3D60C; // 0x02E0(0x0078)
	class AFPS_Character2_C*                           Character;                                                 // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass FPP_Shotgun_AB.FPP_Shotgun_AB_C");
		return ptr;
	}



	void AnimNotify_Sound_Shotgun_Reload_FPP();
	void AnimNotify_Sound_Fire_Shotgun_FPP();
	void AnimNotify_Shotgun_Reloadin();
	void AnimNotify_Shotgun_ReloadMag();
	void AnimNotify_Shotgun_ReloadMagOut();
	void AnimNotify_Shotgun_ReloadOut();
	void ExecuteUbergraph_FPP_Shotgun_AB(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
