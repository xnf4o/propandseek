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
//		Name   -> Function ShopItemBox.ShopItemBox_C.TimeConverter
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FString                                     Input_CustomDateTime                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FDateTime                                   DateTime                                                   (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
void UShopItemBox_C::TimeConverter(const struct FString& Input_CustomDateTime, struct FDateTime* DateTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ShopItemBox.ShopItemBox_C.TimeConverter");

	UShopItemBox_C_TimeConverter_Params params {};
	params.Input_CustomDateTime = Input_CustomDateTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DateTime != nullptr)
		*DateTime = params.DateTime;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ShopItemBox.ShopItemBox_C.ShowThisItem?
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FSShopItems                                 Input_info                                                 (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
//		bool                                               ShowThisItem_                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UShopItemBox_C::ShowThisItem_(const struct FSShopItems& Input_info, bool* ShowThisItem_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ShopItemBox.ShopItemBox_C.ShowThisItem?");

	UShopItemBox_C_ShowThisItem__Params params {};
	params.Input_info = Input_info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ShowThisItem_ != nullptr)
		*ShowThisItem_ = params.ShowThisItem_;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ShopItemBox.ShopItemBox_C.Init
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UShopItemBox_C::Init()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ShopItemBox.ShopItemBox_C.Init");

	UShopItemBox_C_Init_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ShopItemBox.ShopItemBox_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UShopItemBox_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ShopItemBox.ShopItemBox_C.Construct");

	UShopItemBox_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ShopItemBox.ShopItemBox_C.ExecuteUbergraph_ShopItemBox
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UShopItemBox_C::ExecuteUbergraph_ShopItemBox(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ShopItemBox.ShopItemBox_C.ExecuteUbergraph_ShopItemBox");

	UShopItemBox_C_ExecuteUbergraph_ShopItemBox_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
