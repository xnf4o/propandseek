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

// Function CharDisplayer.CharDisplayer_C.SetUsername
struct ACharDisplayer_C_SetUsername_Params
{
	struct FText                                       userName;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function CharDisplayer.CharDisplayer_C.WhichSectionToChange?
struct ACharDisplayer_C_WhichSectionToChange__Params
{
	bool                                               IsStatic_;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<ItemSection_EItemSection>              WhichSection_;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CharDisplayer.CharDisplayer_C.HideAllWeapons
struct ACharDisplayer_C_HideAllWeapons_Params
{
};

// Function CharDisplayer.CharDisplayer_C.SetUsernameAndAlias
struct ACharDisplayer_C_SetUsernameAndAlias_Params
{
	struct FString                                     userName;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int                                                Alias;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CharDisplayer.CharDisplayer_C.UW
struct ACharDisplayer_C_UW_Params
{
	class UUpperWidget_Lobby_C*                        AsUpper_Widget;                                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CharDisplayer.CharDisplayer_C.WhichWeapon?
struct ACharDisplayer_C_WhichWeapon__Params
{
	TEnumAsByte<WeaponList_EWeaponList>                SelectedWeapon;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CharDisplayer.CharDisplayer_C.DefaultRotationTimeline__FinishedFunc
struct ACharDisplayer_C_DefaultRotationTimeline__FinishedFunc_Params
{
};

// Function CharDisplayer.CharDisplayer_C.DefaultRotationTimeline__UpdateFunc
struct ACharDisplayer_C_DefaultRotationTimeline__UpdateFunc_Params
{
};

// Function CharDisplayer.CharDisplayer_C.ReceiveBeginPlay
struct ACharDisplayer_C_ReceiveBeginPlay_Params
{
};

// Function CharDisplayer.CharDisplayer_C.SetToDefaultRotation
struct ACharDisplayer_C_SetToDefaultRotation_Params
{
};

// Function CharDisplayer.CharDisplayer_C.ToggleStaticSkeletalView
struct ACharDisplayer_C_ToggleStaticSkeletalView_Params
{
	bool                                               IsStatic_;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<ItemSection_EItemSection>              WhichSection_;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CharDisplayer.CharDisplayer_C.ExecuteUbergraph_CharDisplayer
struct ACharDisplayer_C_ExecuteUbergraph_CharDisplayer_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
