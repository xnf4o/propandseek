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
//		Name   -> Function SpecUpWidget.SpecUpWidget_C.UpdateAlias
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                NewAlias                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USpecUpWidget_C::UpdateAlias(int NewAlias)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpecUpWidget.SpecUpWidget_C.UpdateAlias");

	USpecUpWidget_C_UpdateAlias_Params params {};
	params.NewAlias = NewAlias;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function SpecUpWidget.SpecUpWidget_C.UpdateUsername
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     NewUsername                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void USpecUpWidget_C::UpdateUsername(const struct FString& NewUsername)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpecUpWidget.SpecUpWidget_C.UpdateUsername");

	USpecUpWidget_C_UpdateUsername_Params params {};
	params.NewUsername = NewUsername;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
