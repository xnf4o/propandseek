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

// Function ChatSystemLobby.ChatSystemLobby_C.FadeAway
struct UChatSystemLobby_C_FadeAway_Params
{
	bool                                               On_;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ChatSystemLobby.ChatSystemLobby_C.Get_Username_Text_1
struct UChatSystemLobby_C_Get_Username_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function ChatSystemLobby.ChatSystemLobby_C.GI
struct UChatSystemLobby_C_GI_Params
{
	class UGI2_C*                                      AsGI2;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ChatSystemLobby.ChatSystemLobby_C.UpdateTextColor
struct UChatSystemLobby_C_UpdateTextColor_Params
{
};

// Function ChatSystemLobby.ChatSystemLobby_C.OnPreviewKeyDown
struct UChatSystemLobby_C_OnPreviewKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // 0x0000(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function ChatSystemLobby.ChatSystemLobby_C.DisplayChat
struct UChatSystemLobby_C_DisplayChat_Params
{
	struct FText                                       Message;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       userName;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	TEnumAsByte<EChatMode_EChatMode>                   ChatMode;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Myself_;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ChatSystemLobby.ChatSystemLobby_C.OnChatFocused
struct UChatSystemLobby_C_OnChatFocused_Params
{
};

// Function ChatSystemLobby.ChatSystemLobby_C.OnChatUnfocused
struct UChatSystemLobby_C_OnChatUnfocused_Params
{
};

// Function ChatSystemLobby.ChatSystemLobby_C.PC
struct UChatSystemLobby_C_PC_Params
{
	class ALobbyPC2_C*                                 AsLobby_PC;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ChatSystemLobby.ChatSystemLobby_C.BndEvt__EditableTextBox_708_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UChatSystemLobby_C_BndEvt__EditableTextBox_708_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<SlateCore_ETextCommit>                 CommitMethod;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ChatSystemLobby.ChatSystemLobby_C.DisplayChat_Main
struct UChatSystemLobby_C_DisplayChat_Main_Params
{
	struct FText                                       Message;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       userName;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	TEnumAsByte<EChatMode_EChatMode>                   ChatMode;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Myself_;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ChatSystemLobby.ChatSystemLobby_C.OnUnpressedChat
struct UChatSystemLobby_C_OnUnpressedChat_Params
{
};

// Function ChatSystemLobby.ChatSystemLobby_C.BndEvt__PressEnterButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UChatSystemLobby_C_BndEvt__PressEnterButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function ChatSystemLobby.ChatSystemLobby_C.ShrinkChatbox_Event
struct UChatSystemLobby_C_ShrinkChatbox_Event_Params
{
	bool                                               Shrink_;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ChatSystemLobby.ChatSystemLobby_C.Construct
struct UChatSystemLobby_C_Construct_Params
{
};

// Function ChatSystemLobby.ChatSystemLobby_C.ExecuteUbergraph_ChatSystemLobby
struct UChatSystemLobby_C_ExecuteUbergraph_ChatSystemLobby_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
