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
// Parameters
//---------------------------------------------------------------------------

// Function OtherPlayerThumbUMG.OtherPlayerThumbUMG_C.SyncResetToDefault
struct UOtherPlayerThumbUMG_C_SyncResetToDefault_Params
{
};

// Function OtherPlayerThumbUMG.OtherPlayerThumbUMG_C.PC
struct UOtherPlayerThumbUMG_C_PC_Params
{
	class AFPS_PC_C*                                   AsFPS_PC;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function OtherPlayerThumbUMG.OtherPlayerThumbUMG_C.SyncPropImageTexture
struct UOtherPlayerThumbUMG_C_SyncPropImageTexture_Params
{
	class UTexture2D*                                  PropTextureImage;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     PropName;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function OtherPlayerThumbUMG.OtherPlayerThumbUMG_C.DisplayAddAnim
struct UOtherPlayerThumbUMG_C_DisplayAddAnim_Params
{
	int                                                CountToAdd;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function OtherPlayerThumbUMG.OtherPlayerThumbUMG_C.SyncBaseAmount
struct UOtherPlayerThumbUMG_C_SyncBaseAmount_Params
{
	int                                                SyncAmountNumber;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
