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

// Function BP_InputDetect_Instance.BP_InputDetect_Instance_C.SetShowMouse
struct UBP_InputDetect_Instance_C_SetShowMouse_Params
{
	bool                                               bShowMouse;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_InputDetect_Instance.BP_InputDetect_Instance_C.SetInputType
struct UBP_InputDetect_Instance_C_SetInputType_Params
{
	TEnumAsByte<EInputType_EInputType>                 InputType;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_InputDetect_Instance.BP_InputDetect_Instance_C.UpdateInputType__DelegateSignature
struct UBP_InputDetect_Instance_C_UpdateInputType__DelegateSignature_Params
{
	TEnumAsByte<EInputType_EInputType>                 InputType;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
