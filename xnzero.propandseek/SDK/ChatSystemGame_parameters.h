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

// Function ChatSystemGame.ChatSystemGame_C.CheckDebuggingCommands
struct UChatSystemGame_C_CheckDebuggingCommands_Params
{
	struct FText                                       Message;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ChatSystemGame.ChatSystemGame_C.FadeAway
struct UChatSystemGame_C_FadeAway_Params
{
	bool                                               On_;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ChatSystemGame.ChatSystemGame_C.DisplayChat
struct UChatSystemGame_C_DisplayChat_Params
{
	struct FText                                       Message;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       userName;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	TEnumAsByte<EChatMode_EChatMode>                   ChatMode;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsHunter;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FSlateColor                                 Color;                                                     // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ChatSystemGame.ChatSystemGame_C.OnChatUnfocused
struct UChatSystemGame_C_OnChatUnfocused_Params
{
};

// Function ChatSystemGame.ChatSystemGame_C.GI
struct UChatSystemGame_C_GI_Params
{
	class UGI2_C*                                      AsGI2;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ChatSystemGame.ChatSystemGame_C.UpdateTextColor
struct UChatSystemGame_C_UpdateTextColor_Params
{
};

// Function ChatSystemGame.ChatSystemGame_C.Get_Username_Text_1
struct UChatSystemGame_C_Get_Username_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function ChatSystemGame.ChatSystemGame_C.OnPreviewKeyDown
struct UChatSystemGame_C_OnPreviewKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // 0x0000(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function ChatSystemGame.ChatSystemGame_C.OnChatFocused
struct UChatSystemGame_C_OnChatFocused_Params
{
};

// Function ChatSystemGame.ChatSystemGame_C.PC
struct UChatSystemGame_C_PC_Params
{
	class AFPS_PC_C*                                   AsFPS_PC;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ChatSystemGame.ChatSystemGame_C.BndEvt__EditableTextBox_708_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UChatSystemGame_C_BndEvt__EditableTextBox_708_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<SlateCore_ETextCommit>                 CommitMethod;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ChatSystemGame.ChatSystemGame_C.ScrollToTheEnd
struct UChatSystemGame_C_ScrollToTheEnd_Params
{
};

// Function ChatSystemGame.ChatSystemGame_C.OnChatUnpressed
struct UChatSystemGame_C_OnChatUnpressed_Params
{
};

// Function ChatSystemGame.ChatSystemGame_C.Construct
struct UChatSystemGame_C_Construct_Params
{
};

// Function ChatSystemGame.ChatSystemGame_C.ExecuteUbergraph_ChatSystemGame
struct UChatSystemGame_C_ExecuteUbergraph_ChatSystemGame_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
