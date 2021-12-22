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

// Function Inputs.Inputs_C.CustomUpdateMouseSensitivity
struct UInputs_C_CustomUpdateMouseSensitivity_Params
{
	float                                              Sensitivity;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Inputs.Inputs_C.Init
struct UInputs_C_Init_Params
{
};

// Function Inputs.Inputs_C.Save
struct UInputs_C_Save_Params
{
};

// Function Inputs.Inputs_C.GI
struct UInputs_C_GI_Params
{
	class UGI2_C*                                      AsGI2;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Inputs.Inputs_C.Get_MouseSensitivityTxt_Text_1
struct UInputs_C_Get_MouseSensitivityTxt_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function Inputs.Inputs_C.Get_NotiTxt_Text_1
struct UInputs_C_Get_NotiTxt_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function Inputs.Inputs_C.ClearAllChildren
struct UInputs_C_ClearAllChildren_Params
{
};

// Function Inputs.Inputs_C.OnUpdate
struct UInputs_C_OnUpdate_Params
{
	bool                                               Default_;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Inputs.Inputs_C.Construct
struct UInputs_C_Construct_Params
{
};

// Function Inputs.Inputs_C.BndEvt__MouseSensitivityBar_K2Node_ComponentBoundEvent_5_OnSliderChanged__DelegateSignature
struct UInputs_C_BndEvt__MouseSensitivityBar_K2Node_ComponentBoundEvent_5_OnSliderChanged__DelegateSignature_Params
{
	float                                              ValueNormalized;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Value;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Inputs.Inputs_C.BndEvt__Menu03_VerticalSync_K2Node_ComponentBoundEvent_7_OnStateChanged__DelegateSignature
struct UInputs_C_BndEvt__Menu03_VerticalSync_K2Node_ComponentBoundEvent_7_OnStateChanged__DelegateSignature_Params
{
	struct FName                                       StateName;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                StateIndex;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Inputs.Inputs_C.SetToDefault
struct UInputs_C_SetToDefault_Params
{
};

// Function Inputs.Inputs_C.OnModifiedC
struct UInputs_C_OnModifiedC_Params
{
};

// Function Inputs.Inputs_C.ExecuteUbergraph_Inputs
struct UInputs_C_ExecuteUbergraph_Inputs_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Inputs.Inputs_C.OnModified__DelegateSignature
struct UInputs_C_OnModified__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
