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

// UserDefinedStruct sRegularNotice.sRegularNotice
// 0x0050
struct FsRegularNotice
{
	class UTexture2D*                                  Picture_4_6811892A4FB8C928D5FAA7A371EFC70D;                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     Title_8_82F63B0F4724BEC8F97815A9A90DF960;                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Explanation_9_EEB1B92B4CB1DF80E137F4B602ED907A;            // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                               HasLimitedOffer__12_FBB9A96C472FB87F0A485AB7DB9141DD;      // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_IKQG[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDateTime                                   Start_15_33A1AFE84CB533C0439047BC078DCE30;                 // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                                   End_17_A310C29A4716F220604FC6B2F034C87F;                   // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FString                                     ExternalLink_20_FD72A6B741F47F30B8A11886A68D0E47;          // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
