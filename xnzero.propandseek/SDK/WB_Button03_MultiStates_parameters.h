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

// Function WB_Button03_MultiStates.WB_Button03_MultiStates_C.SetButtonsEnabled
struct UWB_Button03_MultiStates_C_SetButtonsEnabled_Params
{
	bool                                               BIsEnabled;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_Button03_MultiStates.WB_Button03_MultiStates_C.SetButtonIcon
struct UWB_Button03_MultiStates_C_SetButtonIcon_Params
{
	class UObject*                                     Icon;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button03_MultiStates.WB_Button03_MultiStates_C.ConvertOpacityToNormal
struct UWB_Button03_MultiStates_C_ConvertOpacityToNormal_Params
{
	struct FLinearColor                                InColor;                                                   // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button03_MultiStates.WB_Button03_MultiStates_C.GetNavStateKeys
struct UWB_Button03_MultiStates_C_GetNavStateKeys_Params
{
	TArray<struct FName>                               Keys;                                                      // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
};

// Function WB_Button03_MultiStates.WB_Button03_MultiStates_C.GetNavStateValues
struct UWB_Button03_MultiStates_C_GetNavStateValues_Params
{
	TArray<class UWB_NavState_C*>                      Values;                                                    // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
};

// Function WB_Button03_MultiStates.WB_Button03_MultiStates_C.Set_FontInfoHovered
struct UWB_Button03_MultiStates_C_Set_FontInfoHovered_Params
{
};

// Function WB_Button03_MultiStates.WB_Button03_MultiStates_C.Set_FontInfoNormal
struct UWB_Button03_MultiStates_C_Set_FontInfoNormal_Params
{
};

// Function WB_Button03_MultiStates.WB_Button03_MultiStates_C.HandleFontInfo
struct UWB_Button03_MultiStates_C_HandleFontInfo_Params
{
	class UObject*                                     Font;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   FontFace;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FontSize;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button03_MultiStates.WB_Button03_MultiStates_C.HasAnyFocus
struct UWB_Button03_MultiStates_C_HasAnyFocus_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WB_Button03_MultiStates.WB_Button03_MultiStates_C.OnKeyDown
struct UWB_Button03_MultiStates_C_OnKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // 0x0000(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function WB_Button03_MultiStates.WB_Button03_MultiStates_C.GetCurrentStateByName
struct UWB_Button03_MultiStates_C_GetCurrentStateByName_Params
{
	struct FName                                       State;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button03_MultiStates.WB_Button03_MultiStates_C.GetCurrentStateByIndex
struct UWB_Button03_MultiStates_C_GetCurrentStateByIndex_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button03_MultiStates.WB_Button03_MultiStates_C.SetAllButtonIconColor
struct UWB_Button03_MultiStates_C_SetAllButtonIconColor_Params
{
	struct FLinearColor                                Color;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button03_MultiStates.WB_Button03_MultiStates_C.GetButtonRight
struct UWB_Button03_MultiStates_C_GetButtonRight_Params
{
	class UButton*                                     Native_Button;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button03_MultiStates.WB_Button03_MultiStates_C.GetButtonLeft
struct UWB_Button03_MultiStates_C_GetButtonLeft_Params
{
	class UButton*                                     Native_Button;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button03_MultiStates.WB_Button03_MultiStates_C.CheckFocus
struct UWB_Button03_MultiStates_C_CheckFocus_Params
{
};

// Function WB_Button03_MultiStates.WB_Button03_MultiStates_C.BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature
struct UWB_Button03_MultiStates_C_BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature_Params
{
};

// Function WB_Button03_MultiStates.WB_Button03_MultiStates_C.BndEvt__ButtonRight_K2Node_ComponentBoundEvent_4_OnHovered__DelegateSignature
struct UWB_Button03_MultiStates_C_BndEvt__ButtonRight_K2Node_ComponentBoundEvent_4_OnHovered__DelegateSignature_Params
{
};

// Function WB_Button03_MultiStates.WB_Button03_MultiStates_C.Construct
struct UWB_Button03_MultiStates_C_Construct_Params
{
};

// Function WB_Button03_MultiStates.WB_Button03_MultiStates_C.BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
struct UWB_Button03_MultiStates_C_BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params
{
};

// Function WB_Button03_MultiStates.WB_Button03_MultiStates_C.BndEvt__ButtonRight_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
struct UWB_Button03_MultiStates_C_BndEvt__ButtonRight_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature_Params
{
};

// Function WB_Button03_MultiStates.WB_Button03_MultiStates_C.InitStates
struct UWB_Button03_MultiStates_C_InitStates_Params
{
	TArray<struct FName>                               States;                                                    // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WB_Button03_MultiStates.WB_Button03_MultiStates_C.SetNewStateText
struct UWB_Button03_MultiStates_C_SetNewStateText_Params
{
	struct FText                                       InText;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bIncrease;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_Button03_MultiStates.WB_Button03_MultiStates_C.SetStateByIndex
struct UWB_Button03_MultiStates_C_SetStateByIndex_Params
{
	int                                                State_Index;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bExecute;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_Button03_MultiStates.WB_Button03_MultiStates_C.SetStateByName
struct UWB_Button03_MultiStates_C_SetStateByName_Params
{
	struct FName                                       State_Name;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bExecute;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_Button03_MultiStates.WB_Button03_MultiStates_C.ClickLeft
struct UWB_Button03_MultiStates_C_ClickLeft_Params
{
};

// Function WB_Button03_MultiStates.WB_Button03_MultiStates_C.ClickRight
struct UWB_Button03_MultiStates_C_ClickRight_Params
{
};

// Function WB_Button03_MultiStates.WB_Button03_MultiStates_C.HandleNavigationOverview
struct UWB_Button03_MultiStates_C_HandleNavigationOverview_Params
{
	bool                                               bUseNavOverview;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              NavOverviewRoom;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                NavStateColor_Normal_Active;                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                NavStateColor_Hovered_Active;                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button03_MultiStates.WB_Button03_MultiStates_C.CheckNavStateColor
struct UWB_Button03_MultiStates_C_CheckNavStateColor_Params
{
};

// Function WB_Button03_MultiStates.WB_Button03_MultiStates_C.PreConstruct
struct UWB_Button03_MultiStates_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_Button03_MultiStates.WB_Button03_MultiStates_C.ExecuteUbergraph_WB_Button03_MultiStates
struct UWB_Button03_MultiStates_C_ExecuteUbergraph_WB_Button03_MultiStates_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button03_MultiStates.WB_Button03_MultiStates_C.OnStateChanged__DelegateSignature
struct UWB_Button03_MultiStates_C_OnStateChanged__DelegateSignature_Params
{
	struct FName                                       State_Name;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                State_Index;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button03_MultiStates.WB_Button03_MultiStates_C.OnHovered__DelegateSignature
struct UWB_Button03_MultiStates_C_OnHovered__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
