﻿#pragma once

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

// UserDefinedStruct F_EffectsStruct.F_EffectsStruct
// 0x0180
struct FF_EffectsStruct
{
	class UParticleSystem*                             DefaultParticle_24_CAA8C28747063FFD8C764D95A69FDE5E;       // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                          DefaultDecal_25_6CD095504F2F750DCCA0DAAB8544C7EB;          // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                             DirtParticle_2_16A1685848DC5FC90FD7E281697D1BA5;           // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                          DirtDecal_5_8A197BF64F11203FC533AC8092CEE1C7;              // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                             RockParticle_42_19E2F78142F20DE374888C972A2497C8;          // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                          RockDecal_37_6FF5E1FF46BAD8776A1F13B743270CE9;             // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                             SandParticle_43_3C9E06924EECE4F7A7178FA64CC9B46C;          // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                          SandDecal_38_2DA30F02439ABD0AA410BD9E94B30E2D;             // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                             WaterParticle_44_1AE74D384197962EC3A2569974EB77C4;         // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                          WaterDecal_39_ACAF350D4F27E4B0A52F47A846A3BBC6;            // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                             GlassParticle_45_5110CAA54BA5C2597EBD8C8260E3D15D;         // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                          GlassDecal_40_CA85DF0B4C3A3BBAE6DCF3914A3C8D50;            // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                             ClothParticle_46_8C84EB194BCEBF08240640BDC9C182A0;         // 0x0060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                          ClothDecal_41_206C120D45BE5D97566A17BB011ED895;            // 0x0068(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                             MetalParticle_47_AE531321454A36ADCE3DD59C9216EF39;         // 0x0070(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                          MetalDecal_72_D6F30B0B445F38D3912E5FB3429151EC;            // 0x0078(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                             WoodParticle_87_9C321D784CBFA96BE648138A45EA834B;          // 0x0080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                          WoodDecal_73_954928EE4AA17A02B3F200A44BBA9774;             // 0x0088(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                             GrassParticle_88_A99F99BD40F3930D011D20BE5F58E51A;         // 0x0090(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                          GrassDecal_74_F46994134A9CB5216BCFBC922D5D5344;            // 0x0098(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                             CarpetParticle_89_66696C6F4270D4140A6F88935B31BA73;        // 0x00A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                          CarpetDecal_75_62968F8040753FEFBD547092C6E4F874;           // 0x00A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                             ConcreteParticle_90_9A7FF24F4A59A09558E7388106FF7FC9;      // 0x00B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                          ConcreteDecal_76_E0EBEC5844AC1541A3689CB5C12FCEBC;         // 0x00B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                             SnowParticle_91_1C52FAB34F14DC01FEFF23BE4185D113;          // 0x00C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                          SnowDecal_77_7DD5855245F1E0EB3B8C35BCD30797C5;             // 0x00C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                             TileParticle_92_D5C4BF8D4AD8A9A88945A6998B58E388;          // 0x00D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                          TileDecal_78_F7054369493C135F645385947DF559A8;             // 0x00D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                             AsphaltParticle_93_60BC91F640F2D9263B9DC0A2C0B3C352;       // 0x00E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                          AsphaltDecal_79_B6FA951D440EE5BD070DD8AE6A0D1D04;          // 0x00E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                             BrickParticle_121_07866E8343B6FD4BC0DBE9967ED65877;        // 0x00F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                          BrickDecal_139_F09C9C30493AA7C3F4B543993B217FAC;           // 0x00F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                             CardboardParticle_122_86C0BC0B4F4B2E07D24744B330EC3EC5;    // 0x0100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                          CardboardDecal_140_697504E945B4FAECC676B3851716EDA8;       // 0x0108(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                             ClayParticle_123_65666BCA41795CE8E3D94588DDF32AEB;         // 0x0110(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                          ClayDecal_141_D5BB89F542E16E665A364D84278B8835;            // 0x0118(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                             PlasticParticle_124_7238B7AF40ACC3AE176669AA43C33A97;      // 0x0120(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                          PlasticDecal_142_877281744C916EA82401C89D8800358F;         // 0x0128(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                             ElectronicsParticle_125_684EAA544452D08525BB43A268816FD3;  // 0x0130(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                          ElectronicsDecal_143_9D589C784958DC3356673ABEEBF68C85;     // 0x0138(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                             SheetrockParticle_126_C579044F457F39DB3318B6B79A89C9AA;    // 0x0140(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                          SheetrockDecal_144_7063B33F45094A0313A3EB996ABC2442;       // 0x0148(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                             PlasterParticle_127_80CC242B43C5FEAF48461FA4BE57CCEB;      // 0x0150(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                          PlasterDecal_145_A926E2294E7B94BE9EF9A69AB251CBA9;         // 0x0158(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                             LeavesParticle_128_2F934A3A43D6EB199AE51B8E4284A8A1;       // 0x0160(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                          LeavesDecal_146_885AA7F34C830548C421EEBF019E0284;          // 0x0168(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                             BloodParticle_129_4DC29B254E423A51AA6A9D8FB3C84A6B;        // 0x0170(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                          BloodDecal_147_638987364DAEB691AE989FB40BC36CE0;           // 0x0178(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
