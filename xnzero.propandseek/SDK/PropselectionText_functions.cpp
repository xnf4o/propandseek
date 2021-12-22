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
//		Name   -> Function PropselectionText.PropselectionText_C.UpdatePropSelectionText
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       GeneralText                                                (BlueprintVisible, BlueprintReadOnly, Parm)
//		bool                                               ShowPrice_                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		TEnumAsByte<EShopItemCostType_EShopItemCostType>   Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                PRICE                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPropselectionText_C::UpdatePropSelectionText(const struct FText& GeneralText, bool ShowPrice_, TEnumAsByte<EShopItemCostType_EShopItemCostType> Type, int PRICE)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PropselectionText.PropselectionText_C.UpdatePropSelectionText");

	UPropselectionText_C_UpdatePropSelectionText_Params params {};
	params.GeneralText = GeneralText;
	params.ShowPrice_ = ShowPrice_;
	params.Type = Type;
	params.PRICE = PRICE;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
