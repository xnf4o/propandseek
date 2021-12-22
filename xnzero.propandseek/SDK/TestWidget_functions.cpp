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
//		Name   -> Function TestWidget.TestWidget_C.Get_Status_Text_1
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UTestWidget_C::Get_Status_Text_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TestWidget.TestWidget_C.Get_Status_Text_1");

	UTestWidget_C_Get_Status_Text_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function TestWidget.TestWidget_C.Get_TestImage_Brush_1
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FSlateBrush                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FSlateBrush UTestWidget_C::Get_TestImage_Brush_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TestWidget.TestWidget_C.Get_TestImage_Brush_1");

	UTestWidget_C_Get_TestImage_Brush_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function TestWidget.TestWidget_C.Get_Description_Text_1
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UTestWidget_C::Get_Description_Text_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TestWidget.TestWidget_C.Get_Description_Text_1");

	UTestWidget_C_Get_Description_Text_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function TestWidget.TestWidget_C.Get_Name_Text_1
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UTestWidget_C::Get_Name_Text_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TestWidget.TestWidget_C.Get_Name_Text_1");

	UTestWidget_C_Get_Name_Text_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function TestWidget.TestWidget_C.Get_Progress_Text_1
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UTestWidget_C::Get_Progress_Text_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TestWidget.TestWidget_C.Get_Progress_Text_1");

	UTestWidget_C_Get_Progress_Text_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function TestWidget.TestWidget_C.Update
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     Description                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		class UTexture2D*                                  Icon                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bUnlock_                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		int                                                CurrentValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                MaxValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTestWidget_C::Update(const struct FString& Name, const struct FString& Description, class UTexture2D* Icon, bool bUnlock_, int CurrentValue, int MaxValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TestWidget.TestWidget_C.Update");

	UTestWidget_C_Update_Params params {};
	params.Name = Name;
	params.Description = Description;
	params.Icon = Icon;
	params.bUnlock_ = bUnlock_;
	params.CurrentValue = CurrentValue;
	params.MaxValue = MaxValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function TestWidget.TestWidget_C.ExecuteUbergraph_TestWidget
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTestWidget_C::ExecuteUbergraph_TestWidget(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TestWidget.TestWidget_C.ExecuteUbergraph_TestWidget");

	UTestWidget_C_ExecuteUbergraph_TestWidget_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
