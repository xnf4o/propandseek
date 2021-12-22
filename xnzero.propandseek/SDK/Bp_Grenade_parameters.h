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

// Function Bp_Grenade.Bp_Grenade_C.OnRep_IsSmoking?
struct ABp_Grenade_C_OnRep_IsSmoking__Params
{
};

// Function Bp_Grenade.Bp_Grenade_C.GM
struct ABp_Grenade_C_GM_Params
{
	class AFPS_GM_C*                                   AsFPS_GM;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Bp_Grenade.Bp_Grenade_C.ReceiveBeginPlay
struct ABp_Grenade_C_ReceiveBeginPlay_Params
{
};

// Function Bp_Grenade.Bp_Grenade_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABp_Grenade_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bFromSweep;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  SweepResult;                                               // 0x0000(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function Bp_Grenade.Bp_Grenade_C.BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature
struct ABp_Grenade_C_BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature_Params
{
	struct FHitResult                                  ImpactResult;                                              // 0x0000(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function Bp_Grenade.Bp_Grenade_C.BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_2_OnProjectileBounceDelegate__DelegateSignature
struct ABp_Grenade_C_BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_2_OnProjectileBounceDelegate__DelegateSignature_Params
{
	struct FHitResult                                  ImpactResult;                                              // 0x0000(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                                     ImpactVelocity;                                            // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Bp_Grenade.Bp_Grenade_C.ExecuteUbergraph_Bp_Grenade
struct ABp_Grenade_C_ExecuteUbergraph_Bp_Grenade_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
