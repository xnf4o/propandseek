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
//		Name   -> Function Profile_A_Competitive.Profile_A_Competitive_C.UpdateProfile(Quick)
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UProfile_A_Competitive_C::UpdateProfile_Quick_()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Profile_A_Competitive.Profile_A_Competitive_C.UpdateProfile(Quick)");

	UProfile_A_Competitive_C_UpdateProfile_Quick__Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Profile_A_Competitive.Profile_A_Competitive_C.Main_Update
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UProfile_A_Competitive_C::Main_Update()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Profile_A_Competitive.Profile_A_Competitive_C.Main_Update");

	UProfile_A_Competitive_C_Main_Update_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Profile_A_Competitive.Profile_A_Competitive_C.UpdateProfile(Custom)
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UProfile_A_Competitive_C::UpdateProfile_Custom_()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Profile_A_Competitive.Profile_A_Competitive_C.UpdateProfile(Custom)");

	UProfile_A_Competitive_C_UpdateProfile_Custom__Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Profile_A_Competitive.Profile_A_Competitive_C.PC
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class ALobbyPC2_C*                                 AsLobby_PC1                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UProfile_A_Competitive_C::PC(class ALobbyPC2_C** AsLobby_PC1)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Profile_A_Competitive.Profile_A_Competitive_C.PC");

	UProfile_A_Competitive_C_PC_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsLobby_PC1 != nullptr)
		*AsLobby_PC1 = params.AsLobby_PC1;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Profile_A_Competitive.Profile_A_Competitive_C.Get_TierImage_Brush_1
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FSlateBrush                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FSlateBrush UProfile_A_Competitive_C::Get_TierImage_Brush_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Profile_A_Competitive.Profile_A_Competitive_C.Get_TierImage_Brush_1");

	UProfile_A_Competitive_C_Get_TierImage_Brush_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Profile_A_Competitive.Profile_A_Competitive_C.TierConverter
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		int                                                TierNumber                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<ETier_ETier>                           TierEnum                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UProfile_A_Competitive_C::TierConverter(int TierNumber, TEnumAsByte<ETier_ETier>* TierEnum)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Profile_A_Competitive.Profile_A_Competitive_C.TierConverter");

	UProfile_A_Competitive_C_TierConverter_Params params {};
	params.TierNumber = TierNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TierEnum != nullptr)
		*TierEnum = params.TierEnum;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Profile_A_Competitive.Profile_A_Competitive_C.GetText_1
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UProfile_A_Competitive_C::GetText_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Profile_A_Competitive.Profile_A_Competitive_C.GetText_1");

	UProfile_A_Competitive_C_GetText_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Profile_A_Competitive.Profile_A_Competitive_C.Get_TierText_Text_1
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UProfile_A_Competitive_C::Get_TierText_Text_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Profile_A_Competitive.Profile_A_Competitive_C.Get_TierText_Text_1");

	UProfile_A_Competitive_C_Get_TierText_Text_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Profile_A_Competitive.Profile_A_Competitive_C.NoZeros
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
//		bool                                               ContainsZero_                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FText                                       OutputText                                                 (Parm, OutParm)
void UProfile_A_Competitive_C::NoZeros(const struct FText& Text, bool* ContainsZero_, struct FText* OutputText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Profile_A_Competitive.Profile_A_Competitive_C.NoZeros");

	UProfile_A_Competitive_C_NoZeros_Params params {};
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ContainsZero_ != nullptr)
		*ContainsZero_ = params.ContainsZero_;
	if (OutputText != nullptr)
		*OutputText = params.OutputText;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Profile_A_Competitive.Profile_A_Competitive_C.GI
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UGI2_C*                                      AsGI2                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UProfile_A_Competitive_C::GI(class UGI2_C** AsGI2)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Profile_A_Competitive.Profile_A_Competitive_C.GI");

	UProfile_A_Competitive_C_GI_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsGI2 != nullptr)
		*AsGI2 = params.AsGI2;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Profile_A_Competitive.Profile_A_Competitive_C.UpdateProfile(Competitive)
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UProfile_A_Competitive_C::UpdateProfile_Competitive_()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Profile_A_Competitive.Profile_A_Competitive_C.UpdateProfile(Competitive)");

	UProfile_A_Competitive_C_UpdateProfile_Competitive__Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Profile_A_Competitive.Profile_A_Competitive_C.BndEvt__SelectCombobox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FString                                     SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		TEnumAsByte<SlateCore_ESelectInfo>                 SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UProfile_A_Competitive_C::BndEvt__SelectCombobox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<SlateCore_ESelectInfo> SelectionType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Profile_A_Competitive.Profile_A_Competitive_C.BndEvt__SelectCombobox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature");

	UProfile_A_Competitive_C_BndEvt__SelectCombobox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature_Params params {};
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Profile_A_Competitive.Profile_A_Competitive_C.ExecuteUbergraph_Profile_A_Competitive
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UProfile_A_Competitive_C::ExecuteUbergraph_Profile_A_Competitive(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Profile_A_Competitive.Profile_A_Competitive_C.ExecuteUbergraph_Profile_A_Competitive");

	UProfile_A_Competitive_C_ExecuteUbergraph_Profile_A_Competitive_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
