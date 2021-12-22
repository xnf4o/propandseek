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

// AnimBlueprintGeneratedClass SK_001_Stormbird_Anim.SK_001_Stormbird_Anim_C
// 0x0178 (FullSize[0x03E0] - InheritedSize[0x0268])
class USK_001_Stormbird_Anim_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_LPMX[0x8];                                     // 0x0268(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_5282F3504EAD03621A4E4C94CC4C616C;       // 0x0278(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_42680FED4A66FB8BA007AB8D23A3A42F; // 0x0298(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_624F58D842AABF8684FB39B0DC62AC18; // 0x0310(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_1D6D02A74F5DB3E459B13A92845184C4; // 0x0330(0x00B0)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass SK_001_Stormbird_Anim.SK_001_Stormbird_Anim_C");
		return ptr;
	}



	void ExecuteUbergraph_SK_001_Stormbird_Anim(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
