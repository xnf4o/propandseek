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

// Function ShopOptions.ShopOptions_C.UpdateAllowbox
struct UShopOptions_C_UpdateAllowbox_Params
{
	bool                                               Allow_;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ShopOptions.ShopOptions_C.ToggleLoading
struct UShopOptions_C_ToggleLoading_Params
{
	bool                                               Loading_;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ShopOptions.ShopOptions_C.GI
struct UShopOptions_C_GI_Params
{
	class UGI2_C*                                      AsGI2;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ShopOptions.ShopOptions_C.UpdatePriceInfo
struct UShopOptions_C_UpdatePriceInfo_Params
{
	TEnumAsByte<EShopItemCostType_EShopItemCostType>   PriceType;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ItemPrice;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Days;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ShopOptions.ShopOptions_C.WhichCostType?
struct UShopOptions_C_WhichCostType__Params
{
	TEnumAsByte<EShopItemCostType_EShopItemCostType>   PriceType;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ShopOptions.ShopOptions_C.TimeConverter
struct UShopOptions_C_TimeConverter_Params
{
	struct FString                                     CustomDateTime;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FDateTime                                   OfficialDateTime;                                          // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// Function ShopOptions.ShopOptions_C.WhichDisplayPeriod?
struct UShopOptions_C_WhichDisplayPeriod__Params
{
	TArray<struct FSShopDateTime>                      DisplayPeriod;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               Found_;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ShopOptions.ShopOptions_C.OnCancelButtonPressed
struct UShopOptions_C_OnCancelButtonPressed_Params
{
};

// Function ShopOptions.ShopOptions_C.PC
struct UShopOptions_C_PC_Params
{
	class ALobbyPC2_C*                                 AsLobby_PC2;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ShopOptions.ShopOptions_C.UpdateItemOptionList
struct UShopOptions_C_UpdateItemOptionList_Params
{
	struct FSShopItems                                 Info;                                                      // 0x0000(0x00C0)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function ShopOptions.ShopOptions_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UShopOptions_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function ShopOptions.ShopOptions_C.BndEvt__Purchase_Button_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
struct UShopOptions_C_BndEvt__Purchase_Button_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
{
};

// Function ShopOptions.ShopOptions_C.BndEvt__VisitButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
struct UShopOptions_C_BndEvt__VisitButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
{
};

// Function ShopOptions.ShopOptions_C.BndEvt__EffectButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
struct UShopOptions_C_BndEvt__EffectButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function ShopOptions.ShopOptions_C.BndEvt__EffectButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
struct UShopOptions_C_BndEvt__EffectButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function ShopOptions.ShopOptions_C.BndEvt__GoToStokensButton2_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
struct UShopOptions_C_BndEvt__GoToStokensButton2_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature_Params
{
};

// Function ShopOptions.ShopOptions_C.Construct
struct UShopOptions_C_Construct_Params
{
};

// Function ShopOptions.ShopOptions_C.ExecuteUbergraph_ShopOptions
struct UShopOptions_C_ExecuteUbergraph_ShopOptions_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
