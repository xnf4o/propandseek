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

// Function ShopItemBox.ShopItemBox_C.TimeConverter
struct UShopItemBox_C_TimeConverter_Params
{
	struct FString                                     Input_CustomDateTime;                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FDateTime                                   DateTime;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// Function ShopItemBox.ShopItemBox_C.ShowThisItem?
struct UShopItemBox_C_ShowThisItem__Params
{
	struct FSShopItems                                 Input_info;                                                // 0x0000(0x00C0)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                               ShowThisItem_;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ShopItemBox.ShopItemBox_C.Init
struct UShopItemBox_C_Init_Params
{
};

// Function ShopItemBox.ShopItemBox_C.Construct
struct UShopItemBox_C_Construct_Params
{
};

// Function ShopItemBox.ShopItemBox_C.ExecuteUbergraph_ShopItemBox
struct UShopItemBox_C_ExecuteUbergraph_ShopItemBox_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
