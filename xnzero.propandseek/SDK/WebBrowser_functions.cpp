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
//		Name   -> Function WebBrowser.WebBrowser_C.UpdateWebBrowser
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     URL                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UWebBrowser_C::UpdateWebBrowser(const struct FString& URL)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WebBrowser.WebBrowser_C.UpdateWebBrowser");

	UWebBrowser_C_UpdateWebBrowser_Params params {};
	params.URL = URL;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WebBrowser.WebBrowser_C.BndEvt__ExitButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWebBrowser_C::BndEvt__ExitButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WebBrowser.WebBrowser_C.BndEvt__ExitButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UWebBrowser_C_BndEvt__ExitButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WebBrowser.WebBrowser_C.ExecuteUbergraph_WebBrowser
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWebBrowser_C::ExecuteUbergraph_WebBrowser(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WebBrowser.WebBrowser_C.ExecuteUbergraph_WebBrowser");

	UWebBrowser_C_ExecuteUbergraph_WebBrowser_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
