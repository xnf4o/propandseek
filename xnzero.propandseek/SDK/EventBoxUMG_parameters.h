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

// Function EventBoxUMG.EventBoxUMG_C.AlreadyDidThisEvent?
struct UEventBoxUMG_C_AlreadyDidThisEvent__Params
{
	bool                                               FoundMatch_;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               AlreadyHave_;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function EventBoxUMG.EventBoxUMG_C.RunNotification
struct UEventBoxUMG_C_RunNotification_Params
{
	bool                                               Success_;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function EventBoxUMG.EventBoxUMG_C.SetNotiColor
struct UEventBoxUMG_C_SetNotiColor_Params
{
	struct FSlateColor                                 ReturnValue;                                               // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
};

// Function EventBoxUMG.EventBoxUMG_C.SetNotiTxt
struct UEventBoxUMG_C_SetNotiTxt_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function EventBoxUMG.EventBoxUMG_C.PC
struct UEventBoxUMG_C_PC_Params
{
	class ALobbyPC2_C*                                 AsLobby_PC1;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function EventBoxUMG.EventBoxUMG_C.BndEvt__EditableTextBox_174_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UEventBoxUMG_C_BndEvt__EditableTextBox_174_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<SlateCore_ETextCommit>                 CommitMethod;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function EventBoxUMG.EventBoxUMG_C.BndEvt__SendButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
struct UEventBoxUMG_C_BndEvt__SendButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
{
};

// Function EventBoxUMG.EventBoxUMG_C.ExecuteUbergraph_EventBoxUMG
struct UEventBoxUMG_C_ExecuteUbergraph_EventBoxUMG_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
