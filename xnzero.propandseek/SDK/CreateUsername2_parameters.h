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

// Function CreateUsername2.CreateUsername2_C.UpdateMode
struct UCreateUsername2_C_UpdateMode_Params
{
	bool                                               UsingNameChangeItem_;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function CreateUsername2.CreateUsername2_C.TextCheck(Space)
struct UCreateUsername2_C_TextCheck_Space__Params
{
	struct FString                                     SearchIn;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                               Valid_;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function CreateUsername2.CreateUsername2_C.OnCreateButtonPressed
struct UCreateUsername2_C_OnCreateButtonPressed_Params
{
};

// Function CreateUsername2.CreateUsername2_C.Init
struct UCreateUsername2_C_Init_Params
{
};

// Function CreateUsername2.CreateUsername2_C.GI
struct UCreateUsername2_C_GI_Params
{
	class UGI2_C*                                      AsGI2;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CreateUsername2.CreateUsername2_C.PC
struct UCreateUsername2_C_PC_Params
{
	class ALobbyPC2_C*                                 AsLobby_PC1;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CreateUsername2.CreateUsername2_C.Construct
struct UCreateUsername2_C_Construct_Params
{
};

// Function CreateUsername2.CreateUsername2_C.BndEvt__EditableTextBox_123_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature
struct UCreateUsername2_C_BndEvt__EditableTextBox_123_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function CreateUsername2.CreateUsername2_C.BndEvt__CreateButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
struct UCreateUsername2_C_BndEvt__CreateButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
{
};

// Function CreateUsername2.CreateUsername2_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
struct UCreateUsername2_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
{
};

// Function CreateUsername2.CreateUsername2_C.ExecuteUbergraph_CreateUsername2
struct UCreateUsername2_C_ExecuteUbergraph_CreateUsername2_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
