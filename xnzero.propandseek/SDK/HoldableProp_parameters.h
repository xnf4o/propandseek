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

// Function HoldableProp.HoldableProp_C.GetHoldableWidget
struct AHoldableProp_C_GetHoldableWidget_Params
{
	class UHoldableWidget_C*                           AsHoldable_Widget;                                         // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HoldableProp.HoldableProp_C.OnDetectedOutline
struct AHoldableProp_C_OnDetectedOutline_Params
{
	bool                                               Outline_;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HoldableProp.HoldableProp_C.ReceiveBeginPlay
struct AHoldableProp_C_ReceiveBeginPlay_Params
{
};

// Function HoldableProp.HoldableProp_C.OnPropFocus
struct AHoldableProp_C_OnPropFocus_Params
{
	bool                                               IsFocused_;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HoldableProp.HoldableProp_C.ExecuteUbergraph_HoldableProp
struct AHoldableProp_C_ExecuteUbergraph_HoldableProp_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
