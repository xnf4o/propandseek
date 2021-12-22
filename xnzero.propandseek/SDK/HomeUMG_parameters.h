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

// Function HomeUMG.HomeUMG_C.PC
struct UHomeUMG_C_PC_Params
{
	class ALobbyPC2_C*                                 AsLobby_PC2;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HomeUMG.HomeUMG_C.UpdateSlideButtons
struct UHomeUMG_C_UpdateSlideButtons_Params
{
	int                                                ButtonToColor;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HomeUMG.HomeUMG_C.GI
struct UHomeUMG_C_GI_Params
{
	class UGI2_C*                                      AsGI2;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HomeUMG.HomeUMG_C.UpdateNews
struct UHomeUMG_C_UpdateNews_Params
{
};

// Function HomeUMG.HomeUMG_C.MoveToRight
struct UHomeUMG_C_MoveToRight_Params
{
};

// Function HomeUMG.HomeUMG_C.ReachedEnd?
struct UHomeUMG_C_ReachedEnd__Params
{
};

// Function HomeUMG.HomeUMG_C.MoveToLeft
struct UHomeUMG_C_MoveToLeft_Params
{
};

// Function HomeUMG.HomeUMG_C.UpdateMaintenanceNotice
struct UHomeUMG_C_UpdateMaintenanceNotice_Params
{
	bool                                               Display_;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     Link;                                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Date;                                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     HrMin;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function HomeUMG.HomeUMG_C.UpdatePatchNote
struct UHomeUMG_C_UpdatePatchNote_Params
{
	struct FString                                     Version;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                               PatchNoteVisibility;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     Link;                                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function HomeUMG.HomeUMG_C.BndEvt__PatchNoteButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
struct UHomeUMG_C_BndEvt__PatchNoteButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params
{
};

// Function HomeUMG.HomeUMG_C.BndEvt__NewsSectionButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
struct UHomeUMG_C_BndEvt__NewsSectionButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function HomeUMG.HomeUMG_C.BndEvt__NewsSectionButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature
struct UHomeUMG_C_BndEvt__NewsSectionButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function HomeUMG.HomeUMG_C.BndEvt__Button_Right_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature
struct UHomeUMG_C_BndEvt__Button_Right_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature_Params
{
};

// Function HomeUMG.HomeUMG_C.BndEvt__LeftButton_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature
struct UHomeUMG_C_BndEvt__LeftButton_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature_Params
{
};

// Function HomeUMG.HomeUMG_C.Construct
struct UHomeUMG_C_Construct_Params
{
};

// Function HomeUMG.HomeUMG_C.Tick
struct UHomeUMG_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HomeUMG.HomeUMG_C.BndEvt__MaintenanceNoticeButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
struct UHomeUMG_C_BndEvt__MaintenanceNoticeButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params
{
};

// Function HomeUMG.HomeUMG_C.BndEvt__Button_01_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UHomeUMG_C_BndEvt__Button_01_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function HomeUMG.HomeUMG_C.BndEvt__Button_02_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UHomeUMG_C_BndEvt__Button_02_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function HomeUMG.HomeUMG_C.BndEvt__Button_03_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
struct UHomeUMG_C_BndEvt__Button_03_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function HomeUMG.HomeUMG_C.BndEvt__Button_04_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
struct UHomeUMG_C_BndEvt__Button_04_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function HomeUMG.HomeUMG_C.BndEvt__Button_05_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
struct UHomeUMG_C_BndEvt__Button_05_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function HomeUMG.HomeUMG_C.BndEvt__Exit_Yes_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
struct UHomeUMG_C_BndEvt__Exit_Yes_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params
{
};

// Function HomeUMG.HomeUMG_C.ExecuteUbergraph_HomeUMG
struct UHomeUMG_C_ExecuteUbergraph_HomeUMG_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
