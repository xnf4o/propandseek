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
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AdvancedDecalFunctions.AdvancedDecalFunctions_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAdvancedDecalFunctions_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass AdvancedDecalFunctions.AdvancedDecalFunctions_C");
		return ptr;
	}



	void STATIC_AdvancedDecal_GunHit(const struct FHitResult& InHitResult, const struct FF_FXSet& InWeaponEffects, TArray<class AActor*>* InIgnoreTrace, class UObject* __WorldContext);
	void STATIC_AdvancedDecal_GunSimple(const struct FVector& InFireStart, const struct FVector& InForwardVector, float InFiringRange, TArray<class AActor*>* InIgnoreTrace, const struct FVector& InDecalSize, const struct FF_EffectsStruct& WeaponEffects, class UObject* __WorldContext, struct FHitResult* OutHitResult, bool* OutDidHIt);
	void STATIC_AdvancedDecal_Gun(const struct FF_EffectsStruct& WeaponEffects, int InPlayerIndex, const struct FVector& InFireStart, const struct FVector& InForwardVector, const struct FVector& InDecalSize, TArray<class AActor*>* InIgnoreTrace, float InFireRange, class UObject* __WorldContext, struct FHitResult* OutHitResult, bool* OutDidHIt);
	void STATIC_AdvancedDecal_Custom(const struct FF_EffectsStruct& WeaponEffects, class UObject* __WorldContext, struct FHitResult* OutHitResult);
	void STATIC_AdvancedDecal_Base(const struct FF_EffectsStruct& WeaponEffects, class UObject* __WorldContext, struct FHitResult* OutHitResult);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
