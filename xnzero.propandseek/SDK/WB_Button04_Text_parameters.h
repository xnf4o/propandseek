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

// Function WB_Button04_Text.WB_Button04_Text_C.IsDescriptionTextEmpty
struct UWB_Button04_Text_C_IsDescriptionTextEmpty_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WB_Button04_Text.WB_Button04_Text_C.SetFontInfoDescription
struct UWB_Button04_Text_C_SetFontInfoDescription_Params
{
	class UObject*                                     Font;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   FontFace;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FontSize;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button04_Text.WB_Button04_Text_C.SetFontInfoHeadline
struct UWB_Button04_Text_C_SetFontInfoHeadline_Params
{
	class UObject*                                     Font;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   FontFace;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FontSize;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button04_Text.WB_Button04_Text_C.SetJustification
struct UWB_Button04_Text_C_SetJustification_Params
{
	TEnumAsByte<EJustification_EJustification>         EJustification;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button04_Text.WB_Button04_Text_C.SetTextDescription
struct UWB_Button04_Text_C_SetTextDescription_Params
{
	struct FText                                       InText;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WB_Button04_Text.WB_Button04_Text_C.SetTextHeadline
struct UWB_Button04_Text_C_SetTextHeadline_Params
{
	struct FText                                       InText;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WB_Button04_Text.WB_Button04_Text_C.SetTextColor
struct UWB_Button04_Text_C_SetTextColor_Params
{
	struct FLinearColor                                Color;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button04_Text.WB_Button04_Text_C.Construct
struct UWB_Button04_Text_C_Construct_Params
{
};

// Function WB_Button04_Text.WB_Button04_Text_C.PreConstruct
struct UWB_Button04_Text_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_Button04_Text.WB_Button04_Text_C.OnHovered
struct UWB_Button04_Text_C_OnHovered_Params
{
};

// Function WB_Button04_Text.WB_Button04_Text_C.OnClicked
struct UWB_Button04_Text_C_OnClicked_Params
{
};

// Function WB_Button04_Text.WB_Button04_Text_C.OnUnhovered
struct UWB_Button04_Text_C_OnUnhovered_Params
{
};

// Function WB_Button04_Text.WB_Button04_Text_C.OnDisabled
struct UWB_Button04_Text_C_OnDisabled_Params
{
};

// Function WB_Button04_Text.WB_Button04_Text_C.UpdateSize
struct UWB_Button04_Text_C_UpdateSize_Params
{
};

// Function WB_Button04_Text.WB_Button04_Text_C.ExecuteUbergraph_WB_Button04_Text
struct UWB_Button04_Text_C_ExecuteUbergraph_WB_Button04_Text_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
