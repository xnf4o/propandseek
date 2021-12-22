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
// Parameters
//---------------------------------------------------------------------------

// Function OptionButton.OptionButton_C.SetToDefaults
struct UOptionButton_C_SetToDefaults_Params
{
};

// Function OptionButton.OptionButton_C.OnKeySelectedAxis
struct UOptionButton_C_OnKeySelectedAxis_Params
{
	struct FInputChord                                 InputChord;                                                // 0x0000(0x0020)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

// Function OptionButton.OptionButton_C.InitAxis
struct UOptionButton_C_InitAxis_Params
{
};

// Function OptionButton.OptionButton_C.OnKeySelectedAction
struct UOptionButton_C_OnKeySelectedAction_Params
{
	struct FInputChord                                 InputChord;                                                // 0x0000(0x0020)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

// Function OptionButton.OptionButton_C.InitAction
struct UOptionButton_C_InitAction_Params
{
};

// Function OptionButton.OptionButton_C.Construct
struct UOptionButton_C_Construct_Params
{
};

// Function OptionButton.OptionButton_C.BndEvt__InputKeySelector_391_K2Node_ComponentBoundEvent_3_OnKeySelected__DelegateSignature
struct UOptionButton_C_BndEvt__InputKeySelector_391_K2Node_ComponentBoundEvent_3_OnKeySelected__DelegateSignature_Params
{
	struct FInputChord                                 SelectedKey;                                               // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function OptionButton.OptionButton_C.ExecuteUbergraph_OptionButton
struct UOptionButton_C_ExecuteUbergraph_OptionButton_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
