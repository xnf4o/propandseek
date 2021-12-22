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
//		Name   -> Function ProfileUMG.ProfileUMG_C.PC
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class ALobbyPC2_C*                                 AsLobby_PC                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UProfileUMG_C::PC(class ALobbyPC2_C** AsLobby_PC)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ProfileUMG.ProfileUMG_C.PC");

	UProfileUMG_C_PC_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsLobby_PC != nullptr)
		*AsLobby_PC = params.AsLobby_PC;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ProfileUMG.ProfileUMG_C.UpdateProfileClicked
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<EProfileMode_EProfileMode>             To                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UProfileUMG_C::UpdateProfileClicked(TEnumAsByte<EProfileMode_EProfileMode> To)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ProfileUMG.ProfileUMG_C.UpdateProfileClicked");

	UProfileUMG_C_UpdateProfileClicked_Params params {};
	params.To = To;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ProfileUMG.ProfileUMG_C.ButtonSwitcher
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<EProfileMode_EProfileMode>             To                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UProfileUMG_C::ButtonSwitcher(TEnumAsByte<EProfileMode_EProfileMode> To)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ProfileUMG.ProfileUMG_C.ButtonSwitcher");

	UProfileUMG_C_ButtonSwitcher_Params params {};
	params.To = To;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ProfileUMG.ProfileUMG_C.Switcher
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<EProfileMode_EProfileMode>             To                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UProfileUMG_C::Switcher(TEnumAsByte<EProfileMode_EProfileMode> To)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ProfileUMG.ProfileUMG_C.Switcher");

	UProfileUMG_C_Switcher_Params params {};
	params.To = To;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ProfileUMG.ProfileUMG_C.VisibleClickedProfileMode
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<EProfileMode_EProfileMode>             To                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UProfileUMG_C::VisibleClickedProfileMode(TEnumAsByte<EProfileMode_EProfileMode> To)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ProfileUMG.ProfileUMG_C.VisibleClickedProfileMode");

	UProfileUMG_C_VisibleClickedProfileMode_Params params {};
	params.To = To;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ProfileUMG.ProfileUMG_C.HideCurrentProfileMode
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<EProfileMode_EProfileMode>             To                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               SameWidgetClicked_                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UProfileUMG_C::HideCurrentProfileMode(TEnumAsByte<EProfileMode_EProfileMode> To, bool* SameWidgetClicked_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ProfileUMG.ProfileUMG_C.HideCurrentProfileMode");

	UProfileUMG_C_HideCurrentProfileMode_Params params {};
	params.To = To;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SameWidgetClicked_ != nullptr)
		*SameWidgetClicked_ = params.SameWidgetClicked_;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ProfileUMG.ProfileUMG_C.OnAchievementsButtonClicked
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UProfileUMG_C::OnAchievementsButtonClicked()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ProfileUMG.ProfileUMG_C.OnAchievementsButtonClicked");

	UProfileUMG_C_OnAchievementsButtonClicked_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ProfileUMG.ProfileUMG_C.OnRankingButtonClicked
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UProfileUMG_C::OnRankingButtonClicked()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ProfileUMG.ProfileUMG_C.OnRankingButtonClicked");

	UProfileUMG_C_OnRankingButtonClicked_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ProfileUMG.ProfileUMG_C.OnFriendRequestButtonClicked
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UProfileUMG_C::OnFriendRequestButtonClicked()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ProfileUMG.ProfileUMG_C.OnFriendRequestButtonClicked");

	UProfileUMG_C_OnFriendRequestButtonClicked_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ProfileUMG.ProfileUMG_C.OnFriendButtonClicked
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UProfileUMG_C::OnFriendButtonClicked()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ProfileUMG.ProfileUMG_C.OnFriendButtonClicked");

	UProfileUMG_C_OnFriendButtonClicked_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ProfileUMG.ProfileUMG_C.OnProfileButtonClicked
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UProfileUMG_C::OnProfileButtonClicked()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ProfileUMG.ProfileUMG_C.OnProfileButtonClicked");

	UProfileUMG_C_OnProfileButtonClicked_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ProfileUMG.ProfileUMG_C.InitRef
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UProfileUMG_C::InitRef()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ProfileUMG.ProfileUMG_C.InitRef");

	UProfileUMG_C_InitRef_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ProfileUMG.ProfileUMG_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UProfileUMG_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ProfileUMG.ProfileUMG_C.Construct");

	UProfileUMG_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ProfileUMG.ProfileUMG_C.ExecuteUbergraph_ProfileUMG
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UProfileUMG_C::ExecuteUbergraph_ProfileUMG(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ProfileUMG.ProfileUMG_C.ExecuteUbergraph_ProfileUMG");

	UProfileUMG_C_ExecuteUbergraph_ProfileUMG_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
