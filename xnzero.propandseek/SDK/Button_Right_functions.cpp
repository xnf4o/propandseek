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
//		Name   -> Function Button_Right.Button_Right_C.OnHovered
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Forward_                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UButton_Right_C::OnHovered(bool Forward_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Button_Right.Button_Right_C.OnHovered");

	UButton_Right_C_OnHovered_Params params {};
	params.Forward_ = Forward_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Button_Right.Button_Right_C.OnAppear
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Forward                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UButton_Right_C::OnAppear(bool Forward)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Button_Right.Button_Right_C.OnAppear");

	UButton_Right_C_OnAppear_Params params {};
	params.Forward = Forward;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Button_Right.Button_Right_C.BndEvt__ArrowButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UButton_Right_C::BndEvt__ArrowButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Button_Right.Button_Right_C.BndEvt__ArrowButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UButton_Right_C_BndEvt__ArrowButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Button_Right.Button_Right_C.BndEvt__ArrowButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UButton_Right_C::BndEvt__ArrowButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Button_Right.Button_Right_C.BndEvt__ArrowButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UButton_Right_C_BndEvt__ArrowButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Button_Right.Button_Right_C.BndEvt__ArrowButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UButton_Right_C::BndEvt__ArrowButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Button_Right.Button_Right_C.BndEvt__ArrowButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature");

	UButton_Right_C_BndEvt__ArrowButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Button_Right.Button_Right_C.ExecuteUbergraph_Button_Right
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UButton_Right_C::ExecuteUbergraph_Button_Right(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Button_Right.Button_Right_C.ExecuteUbergraph_Button_Right");

	UButton_Right_C_ExecuteUbergraph_Button_Right_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Button_Right.Button_Right_C.OnClicked__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UButton_Right_C::OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Button_Right.Button_Right_C.OnClicked__DelegateSignature");

	UButton_Right_C_OnClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
