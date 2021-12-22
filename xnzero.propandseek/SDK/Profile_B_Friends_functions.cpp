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
//		Name   -> Function Profile_B_Friends.Profile_B_Friends_C.GI
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UGI2_C*                                      AsGI2                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UProfile_B_Friends_C::GI(class UGI2_C** AsGI2)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Profile_B_Friends.Profile_B_Friends_C.GI");

	UProfile_B_Friends_C_GI_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsGI2 != nullptr)
		*AsGI2 = params.AsGI2;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Profile_B_Friends.Profile_B_Friends_C.PC
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class ALobbyPC2_C*                                 AsLobby_PC                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UProfile_B_Friends_C::PC(class ALobbyPC2_C** AsLobby_PC)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Profile_B_Friends.Profile_B_Friends_C.PC");

	UProfile_B_Friends_C_PC_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsLobby_PC != nullptr)
		*AsLobby_PC = params.AsLobby_PC;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Profile_B_Friends.Profile_B_Friends_C.Update
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<struct FsFriends>                           SortedFriendList                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UProfile_B_Friends_C::Update(TArray<struct FsFriends> SortedFriendList)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Profile_B_Friends.Profile_B_Friends_C.Update");

	UProfile_B_Friends_C_Update_Params params {};
	params.SortedFriendList = SortedFriendList;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Profile_B_Friends.Profile_B_Friends_C.ExecuteUbergraph_Profile_B_Friends
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UProfile_B_Friends_C::ExecuteUbergraph_Profile_B_Friends(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Profile_B_Friends.Profile_B_Friends_C.ExecuteUbergraph_Profile_B_Friends");

	UProfile_B_Friends_C_ExecuteUbergraph_Profile_B_Friends_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
