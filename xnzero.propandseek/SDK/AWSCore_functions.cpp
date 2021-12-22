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
//		Offset -> 0x004A8F10
//		Name   -> Function AWSCore.UUID.RandomUUID
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FAWSUUID                                    ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FAWSUUID UUUID::STATIC_RandomUUID()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AWSCore.UUID.RandomUUID");

	UUUID_RandomUUID_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
