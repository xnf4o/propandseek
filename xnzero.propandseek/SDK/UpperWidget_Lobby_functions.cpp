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
//		Name   -> Function UpperWidget_Lobby.UpperWidget_Lobby_C.UpdateUsername
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       userName                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
void UUpperWidget_Lobby_C::UpdateUsername(const struct FText& userName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UpperWidget_Lobby.UpperWidget_Lobby_C.UpdateUsername");

	UUpperWidget_Lobby_C_UpdateUsername_Params params {};
	params.userName = userName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function UpperWidget_Lobby.UpperWidget_Lobby_C.UpdateAlias
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     Alias                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		TEnumAsByte<ItemLevel_EItemLevel>                  ItemLevel                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUpperWidget_Lobby_C::UpdateAlias(const struct FString& Alias, TEnumAsByte<ItemLevel_EItemLevel> ItemLevel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UpperWidget_Lobby.UpperWidget_Lobby_C.UpdateAlias");

	UUpperWidget_Lobby_C_UpdateAlias_Params params {};
	params.Alias = Alias;
	params.ItemLevel = ItemLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function UpperWidget_Lobby.UpperWidget_Lobby_C.UpdateLobbyUpperwidget
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       userName                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
//		int                                                Alias                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUpperWidget_Lobby_C::UpdateLobbyUpperwidget(const struct FText& userName, int Alias)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UpperWidget_Lobby.UpperWidget_Lobby_C.UpdateLobbyUpperwidget");

	UUpperWidget_Lobby_C_UpdateLobbyUpperwidget_Params params {};
	params.userName = userName;
	params.Alias = Alias;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
