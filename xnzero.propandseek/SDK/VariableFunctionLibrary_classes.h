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

// BlueprintGeneratedClass VariableFunctionLibrary.VariableFunctionLibrary_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UVariableFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass VariableFunctionLibrary.VariableFunctionLibrary_C");
		return ptr;
	}



	void STATIC_CalculateTier2(int Ranking, int TierScore, class UObject* __WorldContext, struct FString* TierName, class UTexture2D** TierImage);
	void STATIC_EndTimer(const struct FDateTime& EndDateTime, class UObject* __WorldContext, bool* Finished_, struct FString* TimeLeft);
	void STATIC_CalculateTier(bool Ranker, int TierScore, class UObject* __WorldContext, int* Tier, struct FString* TierName, class UTexture2D** TierImage);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
