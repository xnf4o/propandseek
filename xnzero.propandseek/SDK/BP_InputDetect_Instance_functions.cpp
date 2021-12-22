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
//		Name   -> Function BP_InputDetect_Instance.BP_InputDetect_Instance_C.SetShowMouse
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bShowMouse                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_InputDetect_Instance_C::SetShowMouse(bool bShowMouse)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_InputDetect_Instance.BP_InputDetect_Instance_C.SetShowMouse");

	UBP_InputDetect_Instance_C_SetShowMouse_Params params {};
	params.bShowMouse = bShowMouse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function BP_InputDetect_Instance.BP_InputDetect_Instance_C.SetInputType
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<EInputType_EInputType>                 InputType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_InputDetect_Instance_C::SetInputType(TEnumAsByte<EInputType_EInputType> InputType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_InputDetect_Instance.BP_InputDetect_Instance_C.SetInputType");

	UBP_InputDetect_Instance_C_SetInputType_Params params {};
	params.InputType = InputType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function BP_InputDetect_Instance.BP_InputDetect_Instance_C.UpdateInputType__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<EInputType_EInputType>                 InputType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_InputDetect_Instance_C::UpdateInputType__DelegateSignature(TEnumAsByte<EInputType_EInputType> InputType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_InputDetect_Instance.BP_InputDetect_Instance_C.UpdateInputType__DelegateSignature");

	UBP_InputDetect_Instance_C_UpdateInputType__DelegateSignature_Params params {};
	params.InputType = InputType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
