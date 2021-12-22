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

// Function LinearTimecode.LinearTimecodeComponent.SetDropTimecodeFrameNumber
struct ULinearTimecodeComponent_SetDropTimecodeFrameNumber_Params
{
	struct FDropTimecode                               Timecode;                                                  // 0x0000(0x001C)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                FrameNumber;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDropTimecode                               OutTimecode;                                               // 0x0000(0x001C)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function LinearTimecode.LinearTimecodeComponent.GetDropTimeCodeFrameNumber
struct ULinearTimecodeComponent_GetDropTimeCodeFrameNumber_Params
{
	struct FDropTimecode                               Timecode;                                                  // 0x0000(0x001C)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                FrameNumber;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LinearTimecode.LinearTimecodeComponent.GetDropFrameNumber
struct ULinearTimecodeComponent_GetDropFrameNumber_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LinearTimecode.DropTimecodeToStringConversion.Conv_DropTimecodeToString
struct UDropTimecodeToStringConversion_Conv_DropTimecodeToString_Params
{
	struct FDropTimecode                               InTimecode;                                                // 0x0000(0x001C)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
