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

// AnimBlueprintGeneratedClass FlyBot_Anim.FlyBot_Anim_C
// 0x0261 (FullSize[0x04C9] - InheritedSize[0x0268])
class UFlyBot_Anim_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_ACQN[0x8];                                     // 0x0268(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_0DC3711E436C71B4F0DDB0B3BEC7F522;       // 0x0278(0x0020)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_906D7D334430197B4B6FA4A354165433; // 0x0298(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6E5CEB234BD59567D6B26E8286E78049; // 0x02C0(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3F40C824403BC33FBE6770AA58F69259; // 0x02E8(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_0A62C00E4F1BFD9166E00BB17B477650; // 0x0360(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B6900DC9463CE5DB363329A31C63415E; // 0x0380(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_BB874C1A42683CD4FEFB99B131C3D47F; // 0x03F8(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_DBE4BFC74C2FE10BDD83278FF0DFF0FD; // 0x0418(0x00B0)
	bool                                               Change_;                                                   // 0x04C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass FlyBot_Anim.FlyBot_Anim_C");
		return ptr;
	}



	void TriggerChange();
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_FlyBot_Anim(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
