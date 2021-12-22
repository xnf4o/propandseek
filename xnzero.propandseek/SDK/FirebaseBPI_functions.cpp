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
//		Name   -> Function FirebaseBPI.FirebaseBPI_C.OnProcessReady
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UFirebaseBPI_C::OnProcessReady()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FirebaseBPI.FirebaseBPI_C.OnProcessReady");

	UFirebaseBPI_C_OnProcessReady_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FirebaseBPI.FirebaseBPI_C.OnGetAllGames
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UFirebaseBPI_C::OnGetAllGames()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FirebaseBPI.FirebaseBPI_C.OnGetAllGames");

	UFirebaseBPI_C_OnGetAllGames_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FirebaseBPI.FirebaseBPI_C.OnGetAllLobbies
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UFirebaseBPI_C::OnGetAllLobbies()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FirebaseBPI.FirebaseBPI_C.OnGetAllLobbies");

	UFirebaseBPI_C_OnGetAllLobbies_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function FirebaseBPI.FirebaseBPI_C.OnAuthFinished
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UFirebaseBPI_C::OnAuthFinished()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FirebaseBPI.FirebaseBPI_C.OnAuthFinished");

	UFirebaseBPI_C_OnAuthFinished_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
