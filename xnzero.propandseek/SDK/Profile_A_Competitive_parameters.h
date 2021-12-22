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

// Function Profile_A_Competitive.Profile_A_Competitive_C.UpdateProfile(Quick)
struct UProfile_A_Competitive_C_UpdateProfile_Quick__Params
{
};

// Function Profile_A_Competitive.Profile_A_Competitive_C.Main_Update
struct UProfile_A_Competitive_C_Main_Update_Params
{
};

// Function Profile_A_Competitive.Profile_A_Competitive_C.UpdateProfile(Custom)
struct UProfile_A_Competitive_C_UpdateProfile_Custom__Params
{
};

// Function Profile_A_Competitive.Profile_A_Competitive_C.PC
struct UProfile_A_Competitive_C_PC_Params
{
	class ALobbyPC2_C*                                 AsLobby_PC1;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Profile_A_Competitive.Profile_A_Competitive_C.Get_TierImage_Brush_1
struct UProfile_A_Competitive_C_Get_TierImage_Brush_1_Params
{
	struct FSlateBrush                                 ReturnValue;                                               // 0x0000(0x0088)  (Parm, OutParm, ReturnParm)
};

// Function Profile_A_Competitive.Profile_A_Competitive_C.TierConverter
struct UProfile_A_Competitive_C_TierConverter_Params
{
	int                                                TierNumber;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<ETier_ETier>                           TierEnum;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Profile_A_Competitive.Profile_A_Competitive_C.GetText_1
struct UProfile_A_Competitive_C_GetText_1_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function Profile_A_Competitive.Profile_A_Competitive_C.Get_TierText_Text_1
struct UProfile_A_Competitive_C_Get_TierText_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function Profile_A_Competitive.Profile_A_Competitive_C.NoZeros
struct UProfile_A_Competitive_C_NoZeros_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               ContainsZero_;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FText                                       OutputText;                                                // 0x0000(0x0018)  (Parm, OutParm)
};

// Function Profile_A_Competitive.Profile_A_Competitive_C.GI
struct UProfile_A_Competitive_C_GI_Params
{
	class UGI2_C*                                      AsGI2;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Profile_A_Competitive.Profile_A_Competitive_C.UpdateProfile(Competitive)
struct UProfile_A_Competitive_C_UpdateProfile_Competitive__Params
{
};

// Function Profile_A_Competitive.Profile_A_Competitive_C.BndEvt__SelectCombobox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
struct UProfile_A_Competitive_C_BndEvt__SelectCombobox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TEnumAsByte<SlateCore_ESelectInfo>                 SelectionType;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Profile_A_Competitive.Profile_A_Competitive_C.ExecuteUbergraph_Profile_A_Competitive
struct UProfile_A_Competitive_C_ExecuteUbergraph_Profile_A_Competitive_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
