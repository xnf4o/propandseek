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

// UserDefinedStruct Weapons.Weapons
// 0x00C4
struct FWeapons
{
	TEnumAsByte<WeaponList_EWeaponList>                Weapon_42_7722914C4ACDB21CDDD118884AD6DE86;                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_VB4W[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimMontage*                                FPP_ShootMontage_Arms_55_48E0F9C34DA302B8654423AB54474E7E; // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                FPP_ShootMontage_Weapon_35_D95D59BB40E03A337D896F86B2B1236D; // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                TPP_ShootMontage_Arms_Idle_57_A483F63E4361548B6B185A858012F671; // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                TPP_ShootMontage_Arms_Speed_58_043EB8014103C9C8CD4A969BF515C9EE; // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                TPP_ShootMontage_Weapon_41_4E61B39E4A9B61C4D9987987D5E6AE12; // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                FPP_ReloadMontage_Arms_43_FBD4F8C9481A10FB4BF39984C7ABC1C5; // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                FPP_ReloadMontage_Weapon_44_1357ABCC43E287BD9A2D9DABA41C5918; // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                TPP_ReloadMontage_Arms_Idle_60_B2B8C351464E2320D8231A867F4D3227; // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                TPP_ReloadMontage_Arms_Speed_61_2D4E367E43A3ED435BBB0F97DAB3E30E; // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                TPP_ReloadMontage_Weapon_48_CD434F0444A6861FB5610290C3F43530; // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_BMTC[0x8];                                     // 0x0058(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  FPP_ArmMesh_Transform_51_D284C0684501CC73A2C13F91E69BB361; // 0x0060(0x0030) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	float                                              ShootDelay_64_376588AB4421F9F305410F92A70A0742;            // 0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ReloadDelay_66_D4A3923C445DBD87D6C7138407C922BD;           // 0x0094(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                TPP_ShootMontage_Arms_Idle_Shadow_71_8D74AF734F3637224517C7BDB1FD7CEE; // 0x0098(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                TPP_ShootMontage_Arms_Speed_Shadow_72_D4C90EC54C5C21300D6C348CACF998EC; // 0x00A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                TPP_ReloadMontage_Arms_Idle_Shadow_75_2F4D7CFA483643416DCF35AD41DA867C; // 0x00A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                TPP_ReloadMontage_Arms_Speed_Shadow_76_65EFE46F4F62ECC12BD6C793E06FD306; // 0x00B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ShootSpeed_87_3104EAF24A19CFD51ADE088C30FD9324;            // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ReloadSpeed_88_DFF573E744B8A09C06046F8B0B3637F8;           // 0x00BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RecoilandShakeCamShake_91_3487E57242DB7C7BCDF7BD80D03B5660; // 0x00C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
