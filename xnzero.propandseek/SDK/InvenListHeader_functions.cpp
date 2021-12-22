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
//		Name   -> Function InvenListHeader.InvenListHeader_C.OnlyForDisplayUpdateHeaderBanner
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<ItemSection_EItemSection>              ItemSection                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInvenListHeader_C::OnlyForDisplayUpdateHeaderBanner(TEnumAsByte<ItemSection_EItemSection> ItemSection)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InvenListHeader.InvenListHeader_C.OnlyForDisplayUpdateHeaderBanner");

	UInvenListHeader_C_OnlyForDisplayUpdateHeaderBanner_Params params {};
	params.ItemSection = ItemSection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function InvenListHeader.InvenListHeader_C.UpdateHeaderBanner
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Owned                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Total                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<ItemSection_EItemSection>              ItemSection                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInvenListHeader_C::UpdateHeaderBanner(int Owned, int Total, TEnumAsByte<ItemSection_EItemSection> ItemSection)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InvenListHeader.InvenListHeader_C.UpdateHeaderBanner");

	UInvenListHeader_C_UpdateHeaderBanner_Params params {};
	params.Owned = Owned;
	params.Total = Total;
	params.ItemSection = ItemSection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function InvenListHeader.InvenListHeader_C.PC
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class ALobbyPC2_C*                                 AsLobby_PC1                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInvenListHeader_C::PC(class ALobbyPC2_C** AsLobby_PC1)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InvenListHeader.InvenListHeader_C.PC");

	UInvenListHeader_C_PC_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsLobby_PC1 != nullptr)
		*AsLobby_PC1 = params.AsLobby_PC1;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
