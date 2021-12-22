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
//		Name   -> Function ChatSystemGame_Line.ChatSystemGame_Line_C.GI
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UGI2_C*                                      AsGI2                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChatSystemGame_Line_C::GI(class UGI2_C** AsGI2)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChatSystemGame_Line.ChatSystemGame_Line_C.GI");

	UChatSystemGame_Line_C_GI_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsGI2 != nullptr)
		*AsGI2 = params.AsGI2;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ChatSystemGame_Line.ChatSystemGame_Line_C.Init
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UChatSystemGame_Line_C::Init()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChatSystemGame_Line.ChatSystemGame_Line_C.Init");

	UChatSystemGame_Line_C_Init_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ChatSystemGame_Line.ChatSystemGame_Line_C.PC
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class AFPS_PC_C*                                   AsFPS_PC                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChatSystemGame_Line_C::PC(class AFPS_PC_C** AsFPS_PC)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChatSystemGame_Line.ChatSystemGame_Line_C.PC");

	UChatSystemGame_Line_C_PC_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsFPS_PC != nullptr)
		*AsFPS_PC = params.AsFPS_PC;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ChatSystemGame_Line.ChatSystemGame_Line_C.UpdateUsernameTextColor
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UChatSystemGame_Line_C::UpdateUsernameTextColor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChatSystemGame_Line.ChatSystemGame_Line_C.UpdateUsernameTextColor");

	UChatSystemGame_Line_C_UpdateUsernameTextColor_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ChatSystemGame_Line.ChatSystemGame_Line_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UChatSystemGame_Line_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChatSystemGame_Line.ChatSystemGame_Line_C.Construct");

	UChatSystemGame_Line_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ChatSystemGame_Line.ChatSystemGame_Line_C.StartFading?
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Fade_                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UChatSystemGame_Line_C::StartFading_(bool Fade_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChatSystemGame_Line.ChatSystemGame_Line_C.StartFading?");

	UChatSystemGame_Line_C_StartFading__Params params {};
	params.Fade_ = Fade_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ChatSystemGame_Line.ChatSystemGame_Line_C.ExecuteUbergraph_ChatSystemGame_Line
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChatSystemGame_Line_C::ExecuteUbergraph_ChatSystemGame_Line(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChatSystemGame_Line.ChatSystemGame_Line_C.ExecuteUbergraph_ChatSystemGame_Line");

	UChatSystemGame_Line_C_ExecuteUbergraph_ChatSystemGame_Line_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
