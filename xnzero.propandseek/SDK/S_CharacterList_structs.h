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
// Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct S_CharacterList.S_CharacterList
// 0x009C
struct FS_CharacterList
{
	struct FString                                     CharacterName_4_FDFE940446E415FDEEC179A97E201466;          // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     CharacterExplanation_6_187CA79840B65E65B8A3499BCBA2A0F5;   // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class USkeletalMesh*                               ActualCharacterTPPSkeletal_32_1C1C639448A7A995B61278BC9CE3D99E; // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      AnimClassTpp_37_BA0C96EF47F43CD6F165A2A978F07804;          // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                               ActualCharacterArmFPPSkeletal_33_AFB5805A493D91AC7EECE38FBDF962D0; // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      AnimClassFpp_36_5A29D4724048BD1A343601A4D051437C;          // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                                 ActualCharacterStatic_16_22469D9443875E84CAF0A7BAC0ED557E; // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ItemNumber_12_F8A3198E4A3BD2D4B76469B2962DA3D4;            // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsStaticMesh__19_B4F90EBA46D53EE869BD42851EBEFBE9;         // 0x004C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_VF17[0x3];                                     // 0x004D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CapsuleHeight_48_353051134A1A7F4167CBE4A5316A4440;         // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_3T3V[0xC];                                     // 0x0054(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  JetpackTransform_47_DB72F9B8401458DEC31A27A3686CD8DD;      // 0x0060(0x0030) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	struct FVector                                     SpectatorSize_51_7337789641644E0F0771A4BA65F5D9E5;         // 0x0090(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
