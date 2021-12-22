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
//		Name   -> Function Upperwidget2.Upperwidget2_C.UpdatePropBoosterVisibility
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               BoosterMode_                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUpperwidget2_C::UpdatePropBoosterVisibility(bool BoosterMode_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Upperwidget2.Upperwidget2_C.UpdatePropBoosterVisibility");

	UUpperwidget2_C_UpdatePropBoosterVisibility_Params params {};
	params.BoosterMode_ = BoosterMode_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Upperwidget2.Upperwidget2_C.SetAsRank1
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Set_                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUpperwidget2_C::SetAsRank1(bool Set_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Upperwidget2.Upperwidget2_C.SetAsRank1");

	UUpperwidget2_C_SetAsRank1_Params params {};
	params.Set_ = Set_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Upperwidget2.Upperwidget2_C.InitDisplayInfo (Unused)
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               isHunter_                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FString                                     userName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		int                                                Alias                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Level                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUpperwidget2_C::InitDisplayInfo__Unused_(bool isHunter_, const struct FString& userName, int Alias, int Level)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Upperwidget2.Upperwidget2_C.InitDisplayInfo (Unused)");

	UUpperwidget2_C_InitDisplayInfo__Unused__Params params {};
	params.isHunter_ = isHunter_;
	params.userName = userName;
	params.Alias = Alias;
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Upperwidget2.Upperwidget2_C.UpdateHunter
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               isHunter_                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUpperwidget2_C::UpdateHunter(bool isHunter_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Upperwidget2.Upperwidget2_C.UpdateHunter");

	UUpperwidget2_C_UpdateHunter_Params params {};
	params.isHunter_ = isHunter_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Upperwidget2.Upperwidget2_C.UpdateAlias
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Alias                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUpperwidget2_C::UpdateAlias(int Alias)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Upperwidget2.Upperwidget2_C.UpdateAlias");

	UUpperwidget2_C_UpdateAlias_Params params {};
	params.Alias = Alias;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Upperwidget2.Upperwidget2_C.UpdateUsername
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     userName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UUpperwidget2_C::UpdateUsername(const struct FString& userName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Upperwidget2.Upperwidget2_C.UpdateUsername");

	UUpperwidget2_C_UpdateUsername_Params params {};
	params.userName = userName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Upperwidget2.Upperwidget2_C.PC
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class AFPS_PC_C*                                   AsFPS_PC                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUpperwidget2_C::PC(class AFPS_PC_C** AsFPS_PC)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Upperwidget2.Upperwidget2_C.PC");

	UUpperwidget2_C_PC_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsFPS_PC != nullptr)
		*AsFPS_PC = params.AsFPS_PC;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Upperwidget2.Upperwidget2_C.StartCough
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UUpperwidget2_C::StartCough()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Upperwidget2.Upperwidget2_C.StartCough");

	UUpperwidget2_C_StartCough_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Upperwidget2.Upperwidget2_C.ExecuteUbergraph_Upperwidget2
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUpperwidget2_C::ExecuteUbergraph_Upperwidget2(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Upperwidget2.Upperwidget2_C.ExecuteUbergraph_Upperwidget2");

	UUpperwidget2_C_ExecuteUbergraph_Upperwidget2_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
