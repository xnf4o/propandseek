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

// Function InventoryUMG1.InventoryUMG1_C.OnSpectatorMenuPressed
struct UInventoryUMG1_C_OnSpectatorMenuPressed_Params
{
};

// Function InventoryUMG1.InventoryUMG1_C.UpdateCurrentUnlockType
struct UInventoryUMG1_C_UpdateCurrentUnlockType_Params
{
	TEnumAsByte<ItemUnlockType_EItemUnlockType>        Type;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Amount;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     DatabaseVariableName;                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function InventoryUMG1.InventoryUMG1_C.OnTauntingSoundsPressed
struct UInventoryUMG1_C_OnTauntingSoundsPressed_Params
{
};

// Function InventoryUMG1.InventoryUMG1_C.OnUseItemPressed
struct UInventoryUMG1_C_OnUseItemPressed_Params
{
};

// Function InventoryUMG1.InventoryUMG1_C.GI
struct UInventoryUMG1_C_GI_Params
{
	class UGI2_C*                                      AsGI2;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InventoryUMG1.InventoryUMG1_C.Get_CharacterExplanation_Text_1
struct UInventoryUMG1_C_Get_CharacterExplanation_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function InventoryUMG1.InventoryUMG1_C.Get_CurrentlyChosen_Text_1
struct UInventoryUMG1_C_Get_CurrentlyChosen_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function InventoryUMG1.InventoryUMG1_C.UpdateMenu
struct UInventoryUMG1_C_UpdateMenu_Params
{
};

// Function InventoryUMG1.InventoryUMG1_C.CheckEnoughMoney
struct UInventoryUMG1_C_CheckEnoughMoney_Params
{
	int                                                RequiredPrice;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<ItemUnlockType_EItemUnlockType>        WhichCurrency_;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               EnoughMoney_;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               AchievementOrLootBox;                                      // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function InventoryUMG1.InventoryUMG1_C.Get_Points_Text_1
struct UInventoryUMG1_C_Get_Points_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function InventoryUMG1.InventoryUMG1_C.Get_Cash_Text_1
struct UInventoryUMG1_C_Get_Cash_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function InventoryUMG1.InventoryUMG1_C.SetActivateButtons
struct UInventoryUMG1_C_SetActivateButtons_Params
{
	bool                                               Activate_;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                ItemNumber;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Owned_;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<ItemSection_EItemSection>              ItemSection;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InventoryUMG1.InventoryUMG1_C.PC
struct UInventoryUMG1_C_PC_Params
{
	class ALobbyPC2_C*                                 AsLobby_PC1;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InventoryUMG1.InventoryUMG1_C.OnUnlockButtonPressed
struct UInventoryUMG1_C_OnUnlockButtonPressed_Params
{
};

// Function InventoryUMG1.InventoryUMG1_C.OnEquipButtonPressed
struct UInventoryUMG1_C_OnEquipButtonPressed_Params
{
};

// Function InventoryUMG1.InventoryUMG1_C.SetToDefault
struct UInventoryUMG1_C_SetToDefault_Params
{
};

// Function InventoryUMG1.InventoryUMG1_C.OnAliasMenuPressed
struct UInventoryUMG1_C_OnAliasMenuPressed_Params
{
};

// Function InventoryUMG1.InventoryUMG1_C.OnPlayerIconMenuPressed
struct UInventoryUMG1_C_OnPlayerIconMenuPressed_Params
{
};

// Function InventoryUMG1.InventoryUMG1_C.OnEffectsMenuPressed
struct UInventoryUMG1_C_OnEffectsMenuPressed_Params
{
};

// Function InventoryUMG1.InventoryUMG1_C.OnOrnamentMenuPressed
struct UInventoryUMG1_C_OnOrnamentMenuPressed_Params
{
};

// Function InventoryUMG1.InventoryUMG1_C.OnItemMenuPressed
struct UInventoryUMG1_C_OnItemMenuPressed_Params
{
};

// Function InventoryUMG1.InventoryUMG1_C.OnCharacterMenuPressed
struct UInventoryUMG1_C_OnCharacterMenuPressed_Params
{
};

// Function InventoryUMG1.InventoryUMG1_C.InitRef
struct UInventoryUMG1_C_InitRef_Params
{
};

// Function InventoryUMG1.InventoryUMG1_C.Construct
struct UInventoryUMG1_C_Construct_Params
{
};

// Function InventoryUMG1.InventoryUMG1_C.BndEvt__UnlockButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UInventoryUMG1_C_BndEvt__UnlockButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function InventoryUMG1.InventoryUMG1_C.BndEvt__EquipButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UInventoryUMG1_C_BndEvt__EquipButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function InventoryUMG1.InventoryUMG1_C.BndEvt__EquipButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UInventoryUMG1_C_BndEvt__EquipButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function InventoryUMG1.InventoryUMG1_C.BndEvt__EquipButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
struct UInventoryUMG1_C_BndEvt__EquipButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function InventoryUMG1.InventoryUMG1_C.BndEvt__UnlockButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
struct UInventoryUMG1_C_BndEvt__UnlockButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function InventoryUMG1.InventoryUMG1_C.BndEvt__UnlockButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
struct UInventoryUMG1_C_BndEvt__UnlockButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function InventoryUMG1.InventoryUMG1_C.BndEvt__EquipButtonCustom_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
struct UInventoryUMG1_C_BndEvt__EquipButtonCustom_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params
{
};

// Function InventoryUMG1.InventoryUMG1_C.BndEvt__UnlockButtonCustom_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
struct UInventoryUMG1_C_BndEvt__UnlockButtonCustom_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params
{
};

// Function InventoryUMG1.InventoryUMG1_C.BndEvt__UseButton_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
struct UInventoryUMG1_C_BndEvt__UseButton_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature_Params
{
};

// Function InventoryUMG1.InventoryUMG1_C.BndEvt__SoundPlayButton_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
struct UInventoryUMG1_C_BndEvt__SoundPlayButton_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function InventoryUMG1.InventoryUMG1_C.ExecuteUbergraph_InventoryUMG1
struct UInventoryUMG1_C_ExecuteUbergraph_InventoryUMG1_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
