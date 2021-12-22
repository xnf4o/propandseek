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

// Function BP_HQUI_Functions.BP_HQUI_Functions_C.HandleResponsiveHovering
struct UBP_HQUI_Functions_C_HandleResponsiveHovering_Params
{
	bool                                               bResponsiveHovering;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UWB_NativeButton_C*                          ButtonToFocus;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                           OwningPlayer;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HQUI_Functions.BP_HQUI_Functions_C.UnhoverAllNativeButtons
struct UBP_HQUI_Functions_C_UnhoverAllNativeButtons_Params
{
	class UWB_NativeButton_C*                          Exception;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HQUI_Functions.BP_HQUI_Functions_C.GetPC_InputDetect
struct UBP_HQUI_Functions_C_GetPC_InputDetect_Params
{
	class UObject*                                     __WorldContext;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_PC_InputDetect_C*                        AsPC_Input_Detect;                                         // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HQUI_Functions.BP_HQUI_Functions_C.SetRightInputType
struct UBP_HQUI_Functions_C_SetRightInputType_Params
{
	struct FKey                                        InputKey;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                        LastPressed_Key;                                           // 0x0000(0x0018)  (Parm, OutParm, HasGetValueTypeHash)
};

// Function BP_HQUI_Functions.BP_HQUI_Functions_C.FindInputType
struct UBP_HQUI_Functions_C_FindInputType_Params
{
	struct FKey                                        InputKey;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                        LastPressed_Key;                                           // 0x0000(0x0018)  (Parm, OutParm, HasGetValueTypeHash)
	TEnumAsByte<EInputType_EInputType>                 InputType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HQUI_Functions.BP_HQUI_Functions_C.GetVRControllerKeys
struct UBP_HQUI_Functions_C_GetVRControllerKeys_Params
{
	class UObject*                                     __WorldContext;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FKey>                                Oculus_VR_Keys;                                            // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
};

// Function BP_HQUI_Functions.BP_HQUI_Functions_C.GetMouseKeys
struct UBP_HQUI_Functions_C_GetMouseKeys_Params
{
	class UObject*                                     __WorldContext;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FKey>                                MouseKeys;                                                 // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
};

// Function BP_HQUI_Functions.BP_HQUI_Functions_C.GetKeyboardKeys
struct UBP_HQUI_Functions_C_GetKeyboardKeys_Params
{
	class UObject*                                     __WorldContext;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FKey>                                KeyboardKeys;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
};

// Function BP_HQUI_Functions.BP_HQUI_Functions_C.GetGamepadKeys
struct UBP_HQUI_Functions_C_GetGamepadKeys_Params
{
	class UObject*                                     __WorldContext;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FKey>                                GamepadKeys;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
};

// Function BP_HQUI_Functions.BP_HQUI_Functions_C.GetShowMouse
struct UBP_HQUI_Functions_C_GetShowMouse_Params
{
	class UObject*                                     __WorldContext;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bShowMouse;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_HQUI_Functions.BP_HQUI_Functions_C.SetShowMouse
struct UBP_HQUI_Functions_C_SetShowMouse_Params
{
	bool                                               bShowMouse;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                     __WorldContext;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HQUI_Functions.BP_HQUI_Functions_C.UnbindOnInputTypeSwitched
struct UBP_HQUI_Functions_C_UnbindOnInputTypeSwitched_Params
{
	struct FScriptDelegate                             Event;                                                     // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	class UObject*                                     __WorldContext;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HQUI_Functions.BP_HQUI_Functions_C.BindOnInputTypeSwitched
struct UBP_HQUI_Functions_C_BindOnInputTypeSwitched_Params
{
	struct FScriptDelegate                             Event;                                                     // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	class UObject*                                     __WorldContext;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HQUI_Functions.BP_HQUI_Functions_C.SetInputType
struct UBP_HQUI_Functions_C_SetInputType_Params
{
	TEnumAsByte<EInputType_EInputType>                 InputType;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HQUI_Functions.BP_HQUI_Functions_C.GetInputType
struct UBP_HQUI_Functions_C_GetInputType_Params
{
	class UObject*                                     __WorldContext;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<EInputType_EInputType>                 InputType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HQUI_Functions.BP_HQUI_Functions_C.GetInputDetectGameInstance
struct UBP_HQUI_Functions_C_GetInputDetectGameInstance_Params
{
	class UObject*                                     __WorldContext;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_InputDetect_Instance_C*                  AsInput_Detect_Instance;                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
