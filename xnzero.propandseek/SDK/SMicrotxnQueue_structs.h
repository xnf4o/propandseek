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
// Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct SMicrotxnQueue.SMicrotxnQueue
// 0x0021
struct FSMicrotxnQueue
{
	struct FString                                     OrderID_3_2E89317847092BCA682676A23DE077B6;                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     RequestedSteamID_13_AE3124A142222804D088E2816D229733;      // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	TEnumAsByte<TxnType_ETxnType>                      WhichOne__11_7D65349F498A1DAB4594678BD4E0D7BD;             // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
