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

// Function WB_KeyRebindingKey.WB_KeyRebindingKey_C.OnPreviewKeyDown
struct UWB_KeyRebindingKey_C_OnPreviewKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // 0x0000(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function WB_KeyRebindingKey.WB_KeyRebindingKey_C.SetButtonSounds
struct UWB_KeyRebindingKey_C_SetButtonSounds_Params
{
	class USoundBase*                                  HoveredSound;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  ClickedSound;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_KeyRebindingKey.WB_KeyRebindingKey_C.UnhoverAllKeyButtons
struct UWB_KeyRebindingKey_C_UnhoverAllKeyButtons_Params
{
};

// Function WB_KeyRebindingKey.WB_KeyRebindingKey_C.FindKeyboardKey
struct UWB_KeyRebindingKey_C_FindKeyboardKey_Params
{
	struct FInputChord                                 InputChord;                                                // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function WB_KeyRebindingKey.WB_KeyRebindingKey_C.TranslateCombKey
struct UWB_KeyRebindingKey_C_TranslateCombKey_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	bool                                               IsCombKey;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     A;                                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function WB_KeyRebindingKey.WB_KeyRebindingKey_C.TranslateGamepadKeys
struct UWB_KeyRebindingKey_C_TranslateGamepadKeys_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	struct FText                                       Key_Text;                                                  // 0x0000(0x0018)  (Parm, OutParm)
};

// Function WB_KeyRebindingKey.WB_KeyRebindingKey_C.GetIsGamepadKey
struct UWB_KeyRebindingKey_C_GetIsGamepadKey_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                               bIsGamepadKey;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_KeyRebindingKey.WB_KeyRebindingKey_C.GetIsKeyboardKey
struct UWB_KeyRebindingKey_C_GetIsKeyboardKey_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                               bIsKeyboardKey;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_KeyRebindingKey.WB_KeyRebindingKey_C.SetCurrentMappingByIndex
struct UWB_KeyRebindingKey_C_SetCurrentMappingByIndex_Params
{
	int                                                MappingIndex;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_KeyRebindingKey.WB_KeyRebindingKey_C.GetIsAxisMapping
struct UWB_KeyRebindingKey_C_GetIsAxisMapping_Params
{
	struct FName                                       ItemToFind;                                                // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsAxisMapping;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_KeyRebindingKey.WB_KeyRebindingKey_C.GetIsActionMapping
struct UWB_KeyRebindingKey_C_GetIsActionMapping_Params
{
	struct FName                                       ItemToFind;                                                // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsActionMapping;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_KeyRebindingKey.WB_KeyRebindingKey_C.SetKeymappingName
struct UWB_KeyRebindingKey_C_SetKeymappingName_Params
{
	struct FText                                       KeymappingText;                                            // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WB_KeyRebindingKey.WB_KeyRebindingKey_C.SetInfo_Normal
struct UWB_KeyRebindingKey_C_SetInfo_Normal_Params
{
};

// Function WB_KeyRebindingKey.WB_KeyRebindingKey_C.SetInfo_Hovered
struct UWB_KeyRebindingKey_C_SetInfo_Hovered_Params
{
};

// Function WB_KeyRebindingKey.WB_KeyRebindingKey_C.SetButtonInfo
struct UWB_KeyRebindingKey_C_SetButtonInfo_Params
{
	class UFont*                                       Font;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   FontFace;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FontSize;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                TextColor;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                FrameColor;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                FillColor;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_KeyRebindingKey.WB_KeyRebindingKey_C.PreConstruct
struct UWB_KeyRebindingKey_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_KeyRebindingKey.WB_KeyRebindingKey_C.BndEvt__Input_KeySelector_K2Node_ComponentBoundEvent_289_OnKeySelected__DelegateSignature
struct UWB_KeyRebindingKey_C_BndEvt__Input_KeySelector_K2Node_ComponentBoundEvent_289_OnKeySelected__DelegateSignature_Params
{
	struct FInputChord                                 SelectedKey;                                               // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function WB_KeyRebindingKey.WB_KeyRebindingKey_C.BndEvt__Input_KeySelector_K2Node_ComponentBoundEvent_290_OnIsSelectingKeyChanged__DelegateSignature
struct UWB_KeyRebindingKey_C_BndEvt__Input_KeySelector_K2Node_ComponentBoundEvent_290_OnIsSelectingKeyChanged__DelegateSignature_Params
{
};

// Function WB_KeyRebindingKey.WB_KeyRebindingKey_C.InitConstruct
struct UWB_KeyRebindingKey_C_InitConstruct_Params
{
};

// Function WB_KeyRebindingKey.WB_KeyRebindingKey_C.CheckHovered
struct UWB_KeyRebindingKey_C_CheckHovered_Params
{
};

// Function WB_KeyRebindingKey.WB_KeyRebindingKey_C.SetNoKeySpecifiedText
struct UWB_KeyRebindingKey_C_SetNoKeySpecifiedText_Params
{
	struct FText                                       InNoKeySpecifiedText;                                      // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WB_KeyRebindingKey.WB_KeyRebindingKey_C.SetSelectedKey
struct UWB_KeyRebindingKey_C_SetSelectedKey_Params
{
	struct FInputChord                                 InSelectedKey;                                             // 0x0000(0x0020)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

// Function WB_KeyRebindingKey.WB_KeyRebindingKey_C.SetKeyRebindingText
struct UWB_KeyRebindingKey_C_SetKeyRebindingText_Params
{
	struct FText                                       InText;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WB_KeyRebindingKey.WB_KeyRebindingKey_C.SetKeySelectionText
struct UWB_KeyRebindingKey_C_SetKeySelectionText_Params
{
	struct FText                                       InKeySelectionText;                                        // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WB_KeyRebindingKey.WB_KeyRebindingKey_C.SetEnabled
struct UWB_KeyRebindingKey_C_SetEnabled_Params
{
	bool                                               bEnabled;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_KeyRebindingKey.WB_KeyRebindingKey_C.SetAllowGamepadKeys
struct UWB_KeyRebindingKey_C_SetAllowGamepadKeys_Params
{
	bool                                               AllowGamepadKeys;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_KeyRebindingKey.WB_KeyRebindingKey_C.SetAllowModifierKeys
struct UWB_KeyRebindingKey_C_SetAllowModifierKeys_Params
{
	bool                                               bAllowModifierKeys;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_KeyRebindingKey.WB_KeyRebindingKey_C.SetEscapeKeys
struct UWB_KeyRebindingKey_C_SetEscapeKeys_Params
{
	TArray<struct FKey>                                InKeys;                                                    // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WB_KeyRebindingKey.WB_KeyRebindingKey_C.UpdateKeyInfo
struct UWB_KeyRebindingKey_C_UpdateKeyInfo_Params
{
};

// Function WB_KeyRebindingKey.WB_KeyRebindingKey_C.SetResponsiveHovering
struct UWB_KeyRebindingKey_C_SetResponsiveHovering_Params
{
	bool                                               bResponsiveHovering;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_KeyRebindingKey.WB_KeyRebindingKey_C.SetLocalSize
struct UWB_KeyRebindingKey_C_SetLocalSize_Params
{
	struct FVector2D                                   LocalSize;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_KeyRebindingKey.WB_KeyRebindingKey_C.ExecuteUbergraph_WB_KeyRebindingKey
struct UWB_KeyRebindingKey_C_ExecuteUbergraph_WB_KeyRebindingKey_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_KeyRebindingKey.WB_KeyRebindingKey_C.OnHovered__DelegateSignature
struct UWB_KeyRebindingKey_C_OnHovered__DelegateSignature_Params
{
};

// Function WB_KeyRebindingKey.WB_KeyRebindingKey_C.OnKeyEmptied__DelegateSignature
struct UWB_KeyRebindingKey_C_OnKeyEmptied__DelegateSignature_Params
{
	struct FInputChord                                 LastSelectedKey;                                           // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function WB_KeyRebindingKey.WB_KeyRebindingKey_C.OnKeySelected__DelegateSignature
struct UWB_KeyRebindingKey_C_OnKeySelected__DelegateSignature_Params
{
	TEnumAsByte<EMappingType_EMappingType>             MappingType;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputChord                                 SelectedKey;                                               // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
