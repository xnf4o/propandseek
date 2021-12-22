// Name: pns, Version: 1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function AdvancedDecalFunctions.AdvancedDecalFunctions_C.AdvancedDecal_GunHit
//		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FHitResult                                  InHitResult                                                (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
//		struct FF_FXSet                                    InWeaponEffects                                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<class AActor*>                              InIgnoreTrace                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAdvancedDecalFunctions_C::STATIC_AdvancedDecal_GunHit(const struct FHitResult& InHitResult, const struct FF_FXSet& InWeaponEffects, TArray<class AActor*>* InIgnoreTrace, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdvancedDecalFunctions.AdvancedDecalFunctions_C.AdvancedDecal_GunHit");

	UAdvancedDecalFunctions_C_AdvancedDecal_GunHit_Params params {};
	params.InHitResult = InHitResult;
	params.InWeaponEffects = InWeaponEffects;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InIgnoreTrace != nullptr)
		*InIgnoreTrace = params.InIgnoreTrace;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function AdvancedDecalFunctions.AdvancedDecalFunctions_C.AdvancedDecal_GunSimple
//		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector                                     InFireStart                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     InForwardVector                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              InFiringRange                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<class AActor*>                              InIgnoreTrace                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
//		struct FVector                                     InDecalSize                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FF_EffectsStruct                            WeaponEffects                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FHitResult                                  OutHitResult                                               (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
//		bool                                               OutDidHIt                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAdvancedDecalFunctions_C::STATIC_AdvancedDecal_GunSimple(const struct FVector& InFireStart, const struct FVector& InForwardVector, float InFiringRange, TArray<class AActor*>* InIgnoreTrace, const struct FVector& InDecalSize, const struct FF_EffectsStruct& WeaponEffects, class UObject* __WorldContext, struct FHitResult* OutHitResult, bool* OutDidHIt)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdvancedDecalFunctions.AdvancedDecalFunctions_C.AdvancedDecal_GunSimple");

	UAdvancedDecalFunctions_C_AdvancedDecal_GunSimple_Params params {};
	params.InFireStart = InFireStart;
	params.InForwardVector = InForwardVector;
	params.InFiringRange = InFiringRange;
	params.InDecalSize = InDecalSize;
	params.WeaponEffects = WeaponEffects;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InIgnoreTrace != nullptr)
		*InIgnoreTrace = params.InIgnoreTrace;
	if (OutHitResult != nullptr)
		*OutHitResult = params.OutHitResult;
	if (OutDidHIt != nullptr)
		*OutDidHIt = params.OutDidHIt;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function AdvancedDecalFunctions.AdvancedDecalFunctions_C.AdvancedDecal_Gun
//		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FF_EffectsStruct                            WeaponEffects                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                InPlayerIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     InFireStart                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     InForwardVector                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     InDecalSize                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<class AActor*>                              InIgnoreTrace                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
//		float                                              InFireRange                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FHitResult                                  OutHitResult                                               (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
//		bool                                               OutDidHIt                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAdvancedDecalFunctions_C::STATIC_AdvancedDecal_Gun(const struct FF_EffectsStruct& WeaponEffects, int InPlayerIndex, const struct FVector& InFireStart, const struct FVector& InForwardVector, const struct FVector& InDecalSize, TArray<class AActor*>* InIgnoreTrace, float InFireRange, class UObject* __WorldContext, struct FHitResult* OutHitResult, bool* OutDidHIt)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdvancedDecalFunctions.AdvancedDecalFunctions_C.AdvancedDecal_Gun");

	UAdvancedDecalFunctions_C_AdvancedDecal_Gun_Params params {};
	params.WeaponEffects = WeaponEffects;
	params.InPlayerIndex = InPlayerIndex;
	params.InFireStart = InFireStart;
	params.InForwardVector = InForwardVector;
	params.InDecalSize = InDecalSize;
	params.InFireRange = InFireRange;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InIgnoreTrace != nullptr)
		*InIgnoreTrace = params.InIgnoreTrace;
	if (OutHitResult != nullptr)
		*OutHitResult = params.OutHitResult;
	if (OutDidHIt != nullptr)
		*OutDidHIt = params.OutDidHIt;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function AdvancedDecalFunctions.AdvancedDecalFunctions_C.AdvancedDecal_Custom
//		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FF_EffectsStruct                            WeaponEffects                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FHitResult                                  OutHitResult                                               (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void UAdvancedDecalFunctions_C::STATIC_AdvancedDecal_Custom(const struct FF_EffectsStruct& WeaponEffects, class UObject* __WorldContext, struct FHitResult* OutHitResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdvancedDecalFunctions.AdvancedDecalFunctions_C.AdvancedDecal_Custom");

	UAdvancedDecalFunctions_C_AdvancedDecal_Custom_Params params {};
	params.WeaponEffects = WeaponEffects;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutHitResult != nullptr)
		*OutHitResult = params.OutHitResult;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function AdvancedDecalFunctions.AdvancedDecalFunctions_C.AdvancedDecal_Base
//		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FF_EffectsStruct                            WeaponEffects                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FHitResult                                  OutHitResult                                               (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void UAdvancedDecalFunctions_C::STATIC_AdvancedDecal_Base(const struct FF_EffectsStruct& WeaponEffects, class UObject* __WorldContext, struct FHitResult* OutHitResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdvancedDecalFunctions.AdvancedDecalFunctions_C.AdvancedDecal_Base");

	UAdvancedDecalFunctions_C_AdvancedDecal_Base_Params params {};
	params.WeaponEffects = WeaponEffects;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutHitResult != nullptr)
		*OutHitResult = params.OutHitResult;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
