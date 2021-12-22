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
//		Name   -> Function TPP_Shotgun.TPP_Shotgun_C.MagazineHideTime__FinishedFunc
//		Flags  -> (BlueprintEvent)
void ATPP_Shotgun_C::MagazineHideTime__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TPP_Shotgun.TPP_Shotgun_C.MagazineHideTime__FinishedFunc");

	ATPP_Shotgun_C_MagazineHideTime__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function TPP_Shotgun.TPP_Shotgun_C.MagazineHideTime__UpdateFunc
//		Flags  -> (BlueprintEvent)
void ATPP_Shotgun_C::MagazineHideTime__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TPP_Shotgun.TPP_Shotgun_C.MagazineHideTime__UpdateFunc");

	ATPP_Shotgun_C_MagazineHideTime__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function TPP_Shotgun.TPP_Shotgun_C.DetachMagazine
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ATPP_Shotgun_C::DetachMagazine()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TPP_Shotgun.TPP_Shotgun_C.DetachMagazine");

	ATPP_Shotgun_C_DetachMagazine_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function TPP_Shotgun.TPP_Shotgun_C.AttachMagazine_Hand
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ATPP_Shotgun_C::AttachMagazine_Hand()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TPP_Shotgun.TPP_Shotgun_C.AttachMagazine_Hand");

	ATPP_Shotgun_C_AttachMagazine_Hand_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function TPP_Shotgun.TPP_Shotgun_C.AttachMagazine_Weapon
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ATPP_Shotgun_C::AttachMagazine_Weapon()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TPP_Shotgun.TPP_Shotgun_C.AttachMagazine_Weapon");

	ATPP_Shotgun_C_AttachMagazine_Weapon_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function TPP_Shotgun.TPP_Shotgun_C.ExecuteUbergraph_TPP_Shotgun
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATPP_Shotgun_C::ExecuteUbergraph_TPP_Shotgun(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TPP_Shotgun.TPP_Shotgun_C.ExecuteUbergraph_TPP_Shotgun");

	ATPP_Shotgun_C_ExecuteUbergraph_TPP_Shotgun_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
