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

// Function EntryUMG.EntryUMG_C.UpdateRegionToJoin
struct UEntryUMG_C_UpdateRegionToJoin_Params
{
	TEnumAsByte<RegionList_ERegionList>                region;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function EntryUMG.EntryUMG_C.UpdateMaintenanceBox
struct UEntryUMG_C_UpdateMaintenanceBox_Params
{
	struct FString                                     MaintenanceLink;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                               Display_;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     Input_Date;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Input_HrMin;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function EntryUMG.EntryUMG_C.UpdateEntryUMG
struct UEntryUMG_C_UpdateEntryUMG_Params
{
};

// Function EntryUMG.EntryUMG_C.OnOptionsButtonPressed
struct UEntryUMG_C_OnOptionsButtonPressed_Params
{
};

// Function EntryUMG.EntryUMG_C.PC
struct UEntryUMG_C_PC_Params
{
	class AEntryPC_C*                                  AsEntry_PC;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function EntryUMG.EntryUMG_C.GI
struct UEntryUMG_C_GI_Params
{
	class UGI2_C*                                      AsGI2;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function EntryUMG.EntryUMG_C.Init
struct UEntryUMG_C_Init_Params
{
};

// Function EntryUMG.EntryUMG_C.OnPreferencesButtonPressed
struct UEntryUMG_C_OnPreferencesButtonPressed_Params
{
};

// Function EntryUMG.EntryUMG_C.OnRetryButtonPressed
struct UEntryUMG_C_OnRetryButtonPressed_Params
{
};

// Function EntryUMG.EntryUMG_C.Construct
struct UEntryUMG_C_Construct_Params
{
};

// Function EntryUMG.EntryUMG_C.BndEvt__Main_Options_Fix1_K2Node_ComponentBoundEvent_0_OnBackButtonClicked__DelegateSignature
struct UEntryUMG_C_BndEvt__Main_Options_Fix1_K2Node_ComponentBoundEvent_0_OnBackButtonClicked__DelegateSignature_Params
{
};

// Function EntryUMG.EntryUMG_C.BndEvt__PreferenceHintButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UEntryUMG_C_BndEvt__PreferenceHintButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function EntryUMG.EntryUMG_C.BndEvt__PreferenceHintButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UEntryUMG_C_BndEvt__PreferenceHintButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function EntryUMG.EntryUMG_C.BndEvt__PreferenceHintButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
struct UEntryUMG_C_BndEvt__PreferenceHintButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function EntryUMG.EntryUMG_C.BndEvt__MaintenanceNoticeButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
struct UEntryUMG_C_BndEvt__MaintenanceNoticeButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params
{
};

// Function EntryUMG.EntryUMG_C.BndEvt__FAQButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
struct UEntryUMG_C_BndEvt__FAQButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function EntryUMG.EntryUMG_C.BndEvt__FAQButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
struct UEntryUMG_C_BndEvt__FAQButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function EntryUMG.EntryUMG_C.BndEvt__FAQButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
struct UEntryUMG_C_BndEvt__FAQButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function EntryUMG.EntryUMG_C.BndEvt__Main_Options_Fix1_K2Node_ComponentBoundEvent_8_OnRegionModified__DelegateSignature
struct UEntryUMG_C_BndEvt__Main_Options_Fix1_K2Node_ComponentBoundEvent_8_OnRegionModified__DelegateSignature_Params
{
};

// Function EntryUMG.EntryUMG_C.ExecuteUbergraph_EntryUMG
struct UEntryUMG_C_ExecuteUbergraph_EntryUMG_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
