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
//		Name   -> Function ChatSystemLobby_Line.ChatSystemLobby_Line_C.GI
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UGI2_C*                                      AsGI2                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChatSystemLobby_Line_C::GI(class UGI2_C** AsGI2)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChatSystemLobby_Line.ChatSystemLobby_Line_C.GI");

	UChatSystemLobby_Line_C_GI_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsGI2 != nullptr)
		*AsGI2 = params.AsGI2;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ChatSystemLobby_Line.ChatSystemLobby_Line_C.UpdateChatLine
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UChatSystemLobby_Line_C::UpdateChatLine()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChatSystemLobby_Line.ChatSystemLobby_Line_C.UpdateChatLine");

	UChatSystemLobby_Line_C_UpdateChatLine_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ChatSystemLobby_Line.ChatSystemLobby_Line_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UChatSystemLobby_Line_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChatSystemLobby_Line.ChatSystemLobby_Line_C.Construct");

	UChatSystemLobby_Line_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ChatSystemLobby_Line.ChatSystemLobby_Line_C.StartFading?
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Fade_                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UChatSystemLobby_Line_C::StartFading_(bool Fade_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChatSystemLobby_Line.ChatSystemLobby_Line_C.StartFading?");

	UChatSystemLobby_Line_C_StartFading__Params params {};
	params.Fade_ = Fade_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ChatSystemLobby_Line.ChatSystemLobby_Line_C.ExecuteUbergraph_ChatSystemLobby_Line
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChatSystemLobby_Line_C::ExecuteUbergraph_ChatSystemLobby_Line(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChatSystemLobby_Line.ChatSystemLobby_Line_C.ExecuteUbergraph_ChatSystemLobby_Line");

	UChatSystemLobby_Line_C_ExecuteUbergraph_ChatSystemLobby_Line_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
