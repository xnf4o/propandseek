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

// Class LinearTimecode.LinearTimecodeComponent
// 0x0068 (FullSize[0x02C0] - InheritedSize[0x0258])
class ULinearTimecodeComponent : public USceneComponent
{
public:
	class UMediaPlayer*                                MediaPlayer;                                               // 0x0258(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDropTimecode                               DropTimecode;                                              // 0x0260(0x001C) (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AMPT[0x4];                                     // 0x027C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnTimecodeChange;                                          // 0x0280(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6IFW[0x30];                                    // 0x0290(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class LinearTimecode.LinearTimecodeComponent");
		return ptr;
	}



	void STATIC_SetDropTimecodeFrameNumber(const struct FDropTimecode& Timecode, int FrameNumber, struct FDropTimecode* OutTimecode);
	void STATIC_GetDropTimeCodeFrameNumber(const struct FDropTimecode& Timecode, int* FrameNumber);
	int GetDropFrameNumber();
};

// Class LinearTimecode.DropTimecodeToStringConversion
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UDropTimecodeToStringConversion : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class LinearTimecode.DropTimecodeToStringConversion");
		return ptr;
	}



	struct FString STATIC_Conv_DropTimecodeToString(const struct FDropTimecode& InTimecode);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
