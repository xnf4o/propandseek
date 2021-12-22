// Name: pns, Version: 1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function BP_HQUI_Functions.BP_HQUI_Functions_C.HandleResponsiveHovering
//		Flags  -> (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bResponsiveHovering                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UWB_NativeButton_C*                          ButtonToFocus                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class APlayerController*                           OwningPlayer                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_HQUI_Functions_C::STATIC_HandleResponsiveHovering(bool bResponsiveHovering, class UWB_NativeButton_C* ButtonToFocus, class APlayerController* OwningPlayer, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HQUI_Functions.BP_HQUI_Functions_C.HandleResponsiveHovering");

	UBP_HQUI_Functions_C_HandleResponsiveHovering_Params params {};
	params.bResponsiveHovering = bResponsiveHovering;
	params.ButtonToFocus = ButtonToFocus;
	params.OwningPlayer = OwningPlayer;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function BP_HQUI_Functions.BP_HQUI_Functions_C.UnhoverAllNativeButtons
//		Flags  -> (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWB_NativeButton_C*                          Exception                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_HQUI_Functions_C::STATIC_UnhoverAllNativeButtons(class UWB_NativeButton_C* Exception, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HQUI_Functions.BP_HQUI_Functions_C.UnhoverAllNativeButtons");

	UBP_HQUI_Functions_C_UnhoverAllNativeButtons_Params params {};
	params.Exception = Exception;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function BP_HQUI_Functions.BP_HQUI_Functions_C.GetPC_InputDetect
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class ABP_PC_InputDetect_C*                        AsPC_Input_Detect                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_HQUI_Functions_C::STATIC_GetPC_InputDetect(class UObject* __WorldContext, class ABP_PC_InputDetect_C** AsPC_Input_Detect)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HQUI_Functions.BP_HQUI_Functions_C.GetPC_InputDetect");

	UBP_HQUI_Functions_C_GetPC_InputDetect_Params params {};
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsPC_Input_Detect != nullptr)
		*AsPC_Input_Detect = params.AsPC_Input_Detect;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function BP_HQUI_Functions.BP_HQUI_Functions_C.SetRightInputType
//		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FKey                                        InputKey                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FKey                                        LastPressed_Key                                            (Parm, OutParm, HasGetValueTypeHash)
void UBP_HQUI_Functions_C::STATIC_SetRightInputType(const struct FKey& InputKey, class UObject* __WorldContext, struct FKey* LastPressed_Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HQUI_Functions.BP_HQUI_Functions_C.SetRightInputType");

	UBP_HQUI_Functions_C_SetRightInputType_Params params {};
	params.InputKey = InputKey;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LastPressed_Key != nullptr)
		*LastPressed_Key = params.LastPressed_Key;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function BP_HQUI_Functions.BP_HQUI_Functions_C.FindInputType
//		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FKey                                        InputKey                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FKey                                        LastPressed_Key                                            (Parm, OutParm, HasGetValueTypeHash)
//		TEnumAsByte<EInputType_EInputType>                 InputType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_HQUI_Functions_C::STATIC_FindInputType(const struct FKey& InputKey, class UObject* __WorldContext, struct FKey* LastPressed_Key, TEnumAsByte<EInputType_EInputType>* InputType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HQUI_Functions.BP_HQUI_Functions_C.FindInputType");

	UBP_HQUI_Functions_C_FindInputType_Params params {};
	params.InputKey = InputKey;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LastPressed_Key != nullptr)
		*LastPressed_Key = params.LastPressed_Key;
	if (InputType != nullptr)
		*InputType = params.InputType;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function BP_HQUI_Functions.BP_HQUI_Functions_C.GetVRControllerKeys
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<struct FKey>                                Oculus_VR_Keys                                             (Parm, OutParm, ZeroConstructor)
void UBP_HQUI_Functions_C::STATIC_GetVRControllerKeys(class UObject* __WorldContext, TArray<struct FKey>* Oculus_VR_Keys)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HQUI_Functions.BP_HQUI_Functions_C.GetVRControllerKeys");

	UBP_HQUI_Functions_C_GetVRControllerKeys_Params params {};
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Oculus_VR_Keys != nullptr)
		*Oculus_VR_Keys = params.Oculus_VR_Keys;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function BP_HQUI_Functions.BP_HQUI_Functions_C.GetMouseKeys
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<struct FKey>                                MouseKeys                                                  (Parm, OutParm, ZeroConstructor)
void UBP_HQUI_Functions_C::STATIC_GetMouseKeys(class UObject* __WorldContext, TArray<struct FKey>* MouseKeys)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HQUI_Functions.BP_HQUI_Functions_C.GetMouseKeys");

	UBP_HQUI_Functions_C_GetMouseKeys_Params params {};
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MouseKeys != nullptr)
		*MouseKeys = params.MouseKeys;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function BP_HQUI_Functions.BP_HQUI_Functions_C.GetKeyboardKeys
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<struct FKey>                                KeyboardKeys                                               (Parm, OutParm, ZeroConstructor)
void UBP_HQUI_Functions_C::STATIC_GetKeyboardKeys(class UObject* __WorldContext, TArray<struct FKey>* KeyboardKeys)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HQUI_Functions.BP_HQUI_Functions_C.GetKeyboardKeys");

	UBP_HQUI_Functions_C_GetKeyboardKeys_Params params {};
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (KeyboardKeys != nullptr)
		*KeyboardKeys = params.KeyboardKeys;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function BP_HQUI_Functions.BP_HQUI_Functions_C.GetGamepadKeys
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<struct FKey>                                GamepadKeys                                                (Parm, OutParm, ZeroConstructor)
void UBP_HQUI_Functions_C::STATIC_GetGamepadKeys(class UObject* __WorldContext, TArray<struct FKey>* GamepadKeys)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HQUI_Functions.BP_HQUI_Functions_C.GetGamepadKeys");

	UBP_HQUI_Functions_C_GetGamepadKeys_Params params {};
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (GamepadKeys != nullptr)
		*GamepadKeys = params.GamepadKeys;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function BP_HQUI_Functions.BP_HQUI_Functions_C.GetShowMouse
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bShowMouse                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_HQUI_Functions_C::STATIC_GetShowMouse(class UObject* __WorldContext, bool* bShowMouse)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HQUI_Functions.BP_HQUI_Functions_C.GetShowMouse");

	UBP_HQUI_Functions_C_GetShowMouse_Params params {};
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bShowMouse != nullptr)
		*bShowMouse = params.bShowMouse;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function BP_HQUI_Functions.BP_HQUI_Functions_C.SetShowMouse
//		Flags  -> (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bShowMouse                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_HQUI_Functions_C::STATIC_SetShowMouse(bool bShowMouse, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HQUI_Functions.BP_HQUI_Functions_C.SetShowMouse");

	UBP_HQUI_Functions_C_SetShowMouse_Params params {};
	params.bShowMouse = bShowMouse;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function BP_HQUI_Functions.BP_HQUI_Functions_C.UnbindOnInputTypeSwitched
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FScriptDelegate                             Event                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_HQUI_Functions_C::STATIC_UnbindOnInputTypeSwitched(const struct FScriptDelegate& Event, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HQUI_Functions.BP_HQUI_Functions_C.UnbindOnInputTypeSwitched");

	UBP_HQUI_Functions_C_UnbindOnInputTypeSwitched_Params params {};
	params.Event = Event;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function BP_HQUI_Functions.BP_HQUI_Functions_C.BindOnInputTypeSwitched
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FScriptDelegate                             Event                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_HQUI_Functions_C::STATIC_BindOnInputTypeSwitched(const struct FScriptDelegate& Event, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HQUI_Functions.BP_HQUI_Functions_C.BindOnInputTypeSwitched");

	UBP_HQUI_Functions_C_BindOnInputTypeSwitched_Params params {};
	params.Event = Event;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function BP_HQUI_Functions.BP_HQUI_Functions_C.SetInputType
//		Flags  -> (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<EInputType_EInputType>                 InputType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_HQUI_Functions_C::STATIC_SetInputType(TEnumAsByte<EInputType_EInputType> InputType, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HQUI_Functions.BP_HQUI_Functions_C.SetInputType");

	UBP_HQUI_Functions_C_SetInputType_Params params {};
	params.InputType = InputType;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function BP_HQUI_Functions.BP_HQUI_Functions_C.GetInputType
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<EInputType_EInputType>                 InputType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_HQUI_Functions_C::STATIC_GetInputType(class UObject* __WorldContext, TEnumAsByte<EInputType_EInputType>* InputType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HQUI_Functions.BP_HQUI_Functions_C.GetInputType");

	UBP_HQUI_Functions_C_GetInputType_Params params {};
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InputType != nullptr)
		*InputType = params.InputType;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function BP_HQUI_Functions.BP_HQUI_Functions_C.GetInputDetectGameInstance
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UBP_InputDetect_Instance_C*                  AsInput_Detect_Instance                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_HQUI_Functions_C::STATIC_GetInputDetectGameInstance(class UObject* __WorldContext, class UBP_InputDetect_Instance_C** AsInput_Detect_Instance)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HQUI_Functions.BP_HQUI_Functions_C.GetInputDetectGameInstance");

	UBP_HQUI_Functions_C_GetInputDetectGameInstance_Params params {};
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsInput_Detect_Instance != nullptr)
		*AsInput_Detect_Instance = params.AsInput_Detect_Instance;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
