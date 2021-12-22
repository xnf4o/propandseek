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

// Function MainMenu.MainMenu_C.GI
struct UMainMenu_C_GI_Params
{
	class UGI2_C*                                      AsGI2;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MainMenu.MainMenu_C.ToggleChatboxVisibility
struct UMainMenu_C_ToggleChatboxVisibility_Params
{
	bool                                               Hide_;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function MainMenu.MainMenu_C.PC
struct UMainMenu_C_PC_Params
{
	class AFPS_PC_C*                                   AsFPS_PC;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MainMenu.MainMenu_C.Switcher
struct UMainMenu_C_Switcher_Params
{
	TEnumAsByte<MenuList_EMenuList>                    To;                                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MainMenu.MainMenu_C.CloseWidget
struct UMainMenu_C_CloseWidget_Params
{
};

// Function MainMenu.MainMenu_C.OnExitToDesktopButtonPressed
struct UMainMenu_C_OnExitToDesktopButtonPressed_Params
{
};

// Function MainMenu.MainMenu_C.OnLeaveGameButtonPressed
struct UMainMenu_C_OnLeaveGameButtonPressed_Params
{
};

// Function MainMenu.MainMenu_C.OnOptionsButtonPressed
struct UMainMenu_C_OnOptionsButtonPressed_Params
{
};

// Function MainMenu.MainMenu_C.BndEvt__OptionButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
struct UMainMenu_C_BndEvt__OptionButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
{
};

// Function MainMenu.MainMenu_C.BndEvt__LeaveGameButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
struct UMainMenu_C_BndEvt__LeaveGameButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
{
};

// Function MainMenu.MainMenu_C.BndEvt__ExitToDesktopButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
struct UMainMenu_C_BndEvt__ExitToDesktopButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params
{
};

// Function MainMenu.MainMenu_C.BndEvt__PlayersButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UMainMenu_C_BndEvt__PlayersButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function MainMenu.MainMenu_C.FOnLeave
struct UMainMenu_C_FOnLeave_Params
{
};

// Function MainMenu.MainMenu_C.OnBackButtonPressed
struct UMainMenu_C_OnBackButtonPressed_Params
{
};

// Function MainMenu.MainMenu_C.ExecuteUbergraph_MainMenu
struct UMainMenu_C_ExecuteUbergraph_MainMenu_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
