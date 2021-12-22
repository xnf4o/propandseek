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

// Function AdvancedDecalFunctions.AdvancedDecalFunctions_C.AdvancedDecal_GunHit
struct UAdvancedDecalFunctions_C_AdvancedDecal_GunHit_Params
{
	struct FHitResult                                  InHitResult;                                               // 0x0000(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FF_FXSet                                    InWeaponEffects;                                           // 0x0000(0x0540)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                              InIgnoreTrace;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     __WorldContext;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AdvancedDecalFunctions.AdvancedDecalFunctions_C.AdvancedDecal_GunSimple
struct UAdvancedDecalFunctions_C_AdvancedDecal_GunSimple_Params
{
	struct FVector                                     InFireStart;                                               // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     InForwardVector;                                           // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InFiringRange;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                              InIgnoreTrace;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FVector                                     InDecalSize;                                               // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FF_EffectsStruct                            WeaponEffects;                                             // 0x0000(0x0180)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  OutHitResult;                                              // 0x0000(0x0088)  (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                               OutDidHIt;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AdvancedDecalFunctions.AdvancedDecalFunctions_C.AdvancedDecal_Gun
struct UAdvancedDecalFunctions_C_AdvancedDecal_Gun_Params
{
	struct FF_EffectsStruct                            WeaponEffects;                                             // 0x0000(0x0180)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                InPlayerIndex;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     InFireStart;                                               // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     InForwardVector;                                           // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     InDecalSize;                                               // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                              InIgnoreTrace;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              InFireRange;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  OutHitResult;                                              // 0x0000(0x0088)  (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                               OutDidHIt;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AdvancedDecalFunctions.AdvancedDecalFunctions_C.AdvancedDecal_Custom
struct UAdvancedDecalFunctions_C_AdvancedDecal_Custom_Params
{
	struct FF_EffectsStruct                            WeaponEffects;                                             // 0x0000(0x0180)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  OutHitResult;                                              // 0x0000(0x0088)  (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function AdvancedDecalFunctions.AdvancedDecalFunctions_C.AdvancedDecal_Base
struct UAdvancedDecalFunctions_C_AdvancedDecal_Base_Params
{
	struct FF_EffectsStruct                            WeaponEffects;                                             // 0x0000(0x0180)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  OutHitResult;                                              // 0x0000(0x0088)  (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
