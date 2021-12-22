#pragma once

// Name: pns, Version: 1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function UpperWidget_Lobby.UpperWidget_Lobby_C.UpdateUsername
struct UUpperWidget_Lobby_C_UpdateUsername_Params
{
	struct FText                                       userName;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function UpperWidget_Lobby.UpperWidget_Lobby_C.UpdateAlias
struct UUpperWidget_Lobby_C_UpdateAlias_Params
{
	struct FString                                     Alias;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TEnumAsByte<ItemLevel_EItemLevel>                  ItemLevel;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UpperWidget_Lobby.UpperWidget_Lobby_C.UpdateLobbyUpperwidget
struct UUpperWidget_Lobby_C_UpdateLobbyUpperwidget_Params
{
	struct FText                                       userName;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                Alias;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
