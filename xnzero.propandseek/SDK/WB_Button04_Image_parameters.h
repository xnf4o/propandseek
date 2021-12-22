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

// Function WB_Button04_Image.WB_Button04_Image_C.SetVignetteColor
struct UWB_Button04_Image_C_SetVignetteColor_Params
{
	struct FLinearColor                                InContentColorAndOpacity;                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button04_Image.WB_Button04_Image_C.SetImageColor
struct UWB_Button04_Image_C_SetImageColor_Params
{
	struct FLinearColor                                Color;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button04_Image.WB_Button04_Image_C.UpdateSaturation
struct UWB_Button04_Image_C_UpdateSaturation_Params
{
	float                                              Saturation;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WB_Button04_Image.WB_Button04_Image_C.FindTextureSize
struct UWB_Button04_Image_C_FindTextureSize_Params
{
	class UTexture2D*                                  Texture;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   Return_Value;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button04_Image.WB_Button04_Image_C.SetImageTranslation
struct UWB_Button04_Image_C_SetImageTranslation_Params
{
	struct FVector2D                                   Translation;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button04_Image.WB_Button04_Image_C.SetImageBrush
struct UWB_Button04_Image_C_SetImageBrush_Params
{
	class UObject*                                     Brush;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button04_Image.WB_Button04_Image_C.OnHovered
struct UWB_Button04_Image_C_OnHovered_Params
{
};

// Function WB_Button04_Image.WB_Button04_Image_C.Construct
struct UWB_Button04_Image_C_Construct_Params
{
};

// Function WB_Button04_Image.WB_Button04_Image_C.OnClicked
struct UWB_Button04_Image_C_OnClicked_Params
{
};

// Function WB_Button04_Image.WB_Button04_Image_C.OnUnhovered
struct UWB_Button04_Image_C_OnUnhovered_Params
{
};

// Function WB_Button04_Image.WB_Button04_Image_C.PreConstruct
struct UWB_Button04_Image_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_Button04_Image.WB_Button04_Image_C.OnDisabled
struct UWB_Button04_Image_C_OnDisabled_Params
{
};

// Function WB_Button04_Image.WB_Button04_Image_C.ExecuteUbergraph_WB_Button04_Image
struct UWB_Button04_Image_C_ExecuteUbergraph_WB_Button04_Image_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
