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

// UserDefinedStruct SCashInfo.SCashInfo
// 0x0061
struct FSCashInfo
{
	struct FText                                       Name_3_D474142A40EC2FFCA8C8E29857D63A75;                   // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FText                                       Explanation_5_15A3621340047A1AE0309A8B86D6CAB0;            // 0x0018(0x0018) (Edit, BlueprintVisible)
	struct FText                                       Amount_11_616F31214E7CCB894861D5AE4C7095C2;                // 0x0030(0x0018) (Edit, BlueprintVisible)
	struct FText                                       CostOnlyNumberInUSD_8_E9FEA7894037F7601CAA2D8ACD594CAF;    // 0x0048(0x0018) (Edit, BlueprintVisible)
	TEnumAsByte<TxnType_ETxnType>                      MicrotransactionOption_16_F131F15F486A2582D75976B82237CE7E; // 0x0060(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
