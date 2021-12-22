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

// Function BottomWidget_Healthbar.BottomWidget_Healthbar_C.UpdateHealthInstant
struct UBottomWidget_Healthbar_C_UpdateHealthInstant_Params
{
	bool                                               _Buffer;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BottomWidget_Healthbar.BottomWidget_Healthbar_C.SetHealth
struct UBottomWidget_Healthbar_C_SetHealth_Params
{
	int                                                CurrentHealth;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxHealth;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BottomWidget_Healthbar.BottomWidget_Healthbar_C.UpdateHealthBuffer
struct UBottomWidget_Healthbar_C_UpdateHealthBuffer_Params
{
	int                                                CurrentHealth;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               _Buffer;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BottomWidget_Healthbar.BottomWidget_Healthbar_C.Construct
struct UBottomWidget_Healthbar_C_Construct_Params
{
};

// Function BottomWidget_Healthbar.BottomWidget_Healthbar_C.ExecuteUbergraph_BottomWidget_Healthbar
struct UBottomWidget_Healthbar_C_ExecuteUbergraph_BottomWidget_Healthbar_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
