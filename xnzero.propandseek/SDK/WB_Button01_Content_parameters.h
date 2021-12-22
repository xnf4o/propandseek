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

// Function WB_Button01_Content.WB_Button01_Content_C.GetHB_Text_Size
struct UWB_Button01_Content_C_GetHB_Text_Size_Params
{
	struct FVector2D                                   ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button01_Content.WB_Button01_Content_C.UpdateFontInfo
struct UWB_Button01_Content_C_UpdateFontInfo_Params
{
	class UFont*                                       Font;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   FontFace;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FontSize;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button01_Content.WB_Button01_Content_C.AddHintIcon
struct UWB_Button01_Content_C_AddHintIcon_Params
{
	class UClass*                                      Widget20x20;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button01_Content.WB_Button01_Content_C.UpdateText
struct UWB_Button01_Content_C_UpdateText_Params
{
	struct FText                                       InText;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WB_Button01_Content.WB_Button01_Content_C.UpdateJustification
struct UWB_Button01_Content_C_UpdateJustification_Params
{
	TEnumAsByte<EJustification_EJustification>         Justification;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button01_Content.WB_Button01_Content_C.ExecuteUbergraph_WB_Button01_Content
struct UWB_Button01_Content_C_ExecuteUbergraph_WB_Button01_Content_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
