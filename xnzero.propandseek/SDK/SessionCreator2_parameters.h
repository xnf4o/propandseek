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

// Function SessionCreator2.SessionCreator2_C.EnableLicenseFeatures
struct USessionCreator2_C_EnableLicenseFeatures_Params
{
	bool                                               Enable_;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SessionCreator2.SessionCreator2_C.BadWordFilter
struct USessionCreator2_C_BadWordFilter_Params
{
	struct FString                                     Input;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                               Invalid_;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SessionCreator2.SessionCreator2_C.GI
struct USessionCreator2_C_GI_Params
{
	class UGI2_C*                                      AsGI2;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SessionCreator2.SessionCreator2_C.PC
struct USessionCreator2_C_PC_Params
{
	class ALobbyPC2_C*                                 AsLobby_PC1;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SessionCreator2.SessionCreator2_C.NumberFromPercentage
struct USessionCreator2_C_NumberFromPercentage_Params
{
	int                                                Min;                                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Max;                                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Value;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Number;                                                    // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SessionCreator2.SessionCreator2_C.SliderPercentage
struct USessionCreator2_C_SliderPercentage_Params
{
	int                                                Min;                                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Max;                                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Input;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Value;                                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SessionCreator2.SessionCreator2_C.CheckValidity
struct USessionCreator2_C_CheckValidity_Params
{
	struct FText                                       Input_text;                                                // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int                                                Min;                                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Max;                                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsValid_;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SessionCreator2.SessionCreator2_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct USessionCreator2_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function SessionCreator2.SessionCreator2_C.Construct
struct USessionCreator2_C_Construct_Params
{
};

// Function SessionCreator2.SessionCreator2_C.BndEvt__Password?_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature
struct USessionCreator2_C_BndEvt__Password__K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SessionCreator2.SessionCreator2_C.BndEvt__Password_Textbox_K2Node_ComponentBoundEvent_6_OnEditableTextBoxCommittedEvent__DelegateSignature
struct USessionCreator2_C_BndEvt__Password_Textbox_K2Node_ComponentBoundEvent_6_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<SlateCore_ETextCommit>                 CommitMethod;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SessionCreator2.SessionCreator2_C.BndEvt__ComboBoxString_365_K2Node_ComponentBoundEvent_7_OnSelectionChangedEvent__DelegateSignature
struct USessionCreator2_C_BndEvt__ComboBoxString_365_K2Node_ComponentBoundEvent_7_OnSelectionChangedEvent__DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TEnumAsByte<SlateCore_ESelectInfo>                 SelectionType;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SessionCreator2.SessionCreator2_C.RandomTitle
struct USessionCreator2_C_RandomTitle_Params
{
};

// Function SessionCreator2.SessionCreator2_C.BndEvt__DisableViewCheckbox_K2Node_ComponentBoundEvent_8_OnCheckBoxComponentStateChanged__DelegateSignature
struct USessionCreator2_C_BndEvt__DisableViewCheckbox_K2Node_ComponentBoundEvent_8_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SessionCreator2.SessionCreator2_C.BndEvt__Teamchat?_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature
struct USessionCreator2_C_BndEvt__Teamchat__K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SessionCreator2.SessionCreator2_C.BndEvt__AllowJoin?_K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature
struct USessionCreator2_C_BndEvt__AllowJoin__K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SessionCreator2.SessionCreator2_C.BndEvt__RoundsSlider_K2Node_ComponentBoundEvent_13_OnFloatValueChangedEvent__DelegateSignature
struct USessionCreator2_C_BndEvt__RoundsSlider_K2Node_ComponentBoundEvent_13_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float                                              Value;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SessionCreator2.SessionCreator2_C.BndEvt__MaxPlayerSlider_K2Node_ComponentBoundEvent_14_OnFloatValueChangedEvent__DelegateSignature
struct USessionCreator2_C_BndEvt__MaxPlayerSlider_K2Node_ComponentBoundEvent_14_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float                                              Value;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SessionCreator2.SessionCreator2_C.BndEvt__RoundInputText_K2Node_ComponentBoundEvent_15_OnEditableTextBoxCommittedEvent__DelegateSignature
struct USessionCreator2_C_BndEvt__RoundInputText_K2Node_ComponentBoundEvent_15_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<SlateCore_ETextCommit>                 CommitMethod;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SessionCreator2.SessionCreator2_C.BndEvt__MaxPlayerInputText_K2Node_ComponentBoundEvent_16_OnEditableTextBoxCommittedEvent__DelegateSignature
struct USessionCreator2_C_BndEvt__MaxPlayerInputText_K2Node_ComponentBoundEvent_16_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<SlateCore_ETextCommit>                 CommitMethod;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SessionCreator2.SessionCreator2_C.BndEvt__CheckBox_2_K2Node_ComponentBoundEvent_17_OnCheckBoxComponentStateChanged__DelegateSignature
struct USessionCreator2_C_BndEvt__CheckBox_2_K2Node_ComponentBoundEvent_17_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SessionCreator2.SessionCreator2_C.BndEvt__Password_Textbox_K2Node_ComponentBoundEvent_4_OnEditableTextBoxChangedEvent__DelegateSignature
struct USessionCreator2_C_BndEvt__Password_Textbox_K2Node_ComponentBoundEvent_4_OnEditableTextBoxChangedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function SessionCreator2.SessionCreator2_C.RunCheckDisableUntilFull
struct USessionCreator2_C_RunCheckDisableUntilFull_Params
{
};

// Function SessionCreator2.SessionCreator2_C.BndEvt__ViewMoreButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
struct USessionCreator2_C_BndEvt__ViewMoreButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function SessionCreator2.SessionCreator2_C.BndEvt__TitleTextbox_K2Node_ComponentBoundEvent_11_OnEditableTextBoxChangedEvent__DelegateSignature
struct USessionCreator2_C_BndEvt__TitleTextbox_K2Node_ComponentBoundEvent_11_OnEditableTextBoxChangedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function SessionCreator2.SessionCreator2_C.BndEvt__JoinButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
struct USessionCreator2_C_BndEvt__JoinButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
{
};

// Function SessionCreator2.SessionCreator2_C.BndEvt__RegionSelectionCombobox_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature
struct USessionCreator2_C_BndEvt__RegionSelectionCombobox_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TEnumAsByte<SlateCore_ESelectInfo>                 SelectionType;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SessionCreator2.SessionCreator2_C.BndEvt__DisablePropIndicationHoverB_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature
struct USessionCreator2_C_BndEvt__DisablePropIndicationHoverB_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function SessionCreator2.SessionCreator2_C.BndEvt__DisablePropIndicationHoverB_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature
struct USessionCreator2_C_BndEvt__DisablePropIndicationHoverB_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function SessionCreator2.SessionCreator2_C.BndEvt__DisableGlobalChatHoverB_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature
struct USessionCreator2_C_BndEvt__DisableGlobalChatHoverB_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function SessionCreator2.SessionCreator2_C.BndEvt__DisableGlobalChatHoverB_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature
struct USessionCreator2_C_BndEvt__DisableGlobalChatHoverB_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function SessionCreator2.SessionCreator2_C.BndEvt__DisableHunterIndicationHoverB_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature
struct USessionCreator2_C_BndEvt__DisableHunterIndicationHoverB_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function SessionCreator2.SessionCreator2_C.BndEvt__DisableHunterIndicationHoverB_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature
struct USessionCreator2_C_BndEvt__DisableHunterIndicationHoverB_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function SessionCreator2.SessionCreator2_C.BndEvt__DisableStartFullHoverB_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature
struct USessionCreator2_C_BndEvt__DisableStartFullHoverB_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function SessionCreator2.SessionCreator2_C.BndEvt__DisableStartFullHoverB_K2Node_ComponentBoundEvent_24_OnButtonHoverEvent__DelegateSignature
struct USessionCreator2_C_BndEvt__DisableStartFullHoverB_K2Node_ComponentBoundEvent_24_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function SessionCreator2.SessionCreator2_C.BndEvt__ViewMoreButton_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature
struct USessionCreator2_C_BndEvt__ViewMoreButton_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function SessionCreator2.SessionCreator2_C.BndEvt__ViewMoreButton_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature
struct USessionCreator2_C_BndEvt__ViewMoreButton_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function SessionCreator2.SessionCreator2_C.BndEvt__TitleTextbox_K2Node_ComponentBoundEvent_27_OnEditableTextBoxCommittedEvent__DelegateSignature
struct USessionCreator2_C_BndEvt__TitleTextbox_K2Node_ComponentBoundEvent_27_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<SlateCore_ETextCommit>                 CommitMethod;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SessionCreator2.SessionCreator2_C.BndEvt__LicenseButton_K2Node_ComponentBoundEvent_30_OnButtonHoverEvent__DelegateSignature
struct USessionCreator2_C_BndEvt__LicenseButton_K2Node_ComponentBoundEvent_30_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function SessionCreator2.SessionCreator2_C.BndEvt__LicenseButton_K2Node_ComponentBoundEvent_31_OnButtonHoverEvent__DelegateSignature
struct USessionCreator2_C_BndEvt__LicenseButton_K2Node_ComponentBoundEvent_31_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function SessionCreator2.SessionCreator2_C.BndEvt__DisableFreecamB_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature
struct USessionCreator2_C_BndEvt__DisableFreecamB_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function SessionCreator2.SessionCreator2_C.BndEvt__DisableFreecamB_K2Node_ComponentBoundEvent_29_OnButtonHoverEvent__DelegateSignature
struct USessionCreator2_C_BndEvt__DisableFreecamB_K2Node_ComponentBoundEvent_29_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function SessionCreator2.SessionCreator2_C.BndEvt__DisableFreecamB_K2Node_ComponentBoundEvent_32_OnButtonClickedEvent__DelegateSignature
struct USessionCreator2_C_BndEvt__DisableFreecamB_K2Node_ComponentBoundEvent_32_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function SessionCreator2.SessionCreator2_C.RandomMapOnStart
struct USessionCreator2_C_RandomMapOnStart_Params
{
};

// Function SessionCreator2.SessionCreator2_C.BndEvt__LicenseRequired_K2Node_ComponentBoundEvent_38_OnButtonHoverEvent__DelegateSignature
struct USessionCreator2_C_BndEvt__LicenseRequired_K2Node_ComponentBoundEvent_38_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function SessionCreator2.SessionCreator2_C.BndEvt__LicenseRequired_K2Node_ComponentBoundEvent_39_OnButtonHoverEvent__DelegateSignature
struct USessionCreator2_C_BndEvt__LicenseRequired_K2Node_ComponentBoundEvent_39_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function SessionCreator2.SessionCreator2_C.BndEvt__LicenseRequiredPassword_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature
struct USessionCreator2_C_BndEvt__LicenseRequiredPassword_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function SessionCreator2.SessionCreator2_C.BndEvt__LicenseRequiredPassword_K2Node_ComponentBoundEvent_29_OnButtonHoverEvent__DelegateSignature
struct USessionCreator2_C_BndEvt__LicenseRequiredPassword_K2Node_ComponentBoundEvent_29_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function SessionCreator2.SessionCreator2_C.ExecuteUbergraph_SessionCreator2
struct USessionCreator2_C_ExecuteUbergraph_SessionCreator2_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
