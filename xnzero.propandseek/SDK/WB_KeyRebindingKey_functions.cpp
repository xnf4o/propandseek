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
//		Name   -> Function WB_KeyRebindingKey.WB_KeyRebindingKey_C.OnPreviewKeyDown
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWB_KeyRebindingKey_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_KeyRebindingKey.WB_KeyRebindingKey_C.OnPreviewKeyDown");

	UWB_KeyRebindingKey_C_OnPreviewKeyDown_Params params {};
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_KeyRebindingKey.WB_KeyRebindingKey_C.SetButtonSounds
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class USoundBase*                                  HoveredSound                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class USoundBase*                                  ClickedSound                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_KeyRebindingKey_C::SetButtonSounds(class USoundBase* HoveredSound, class USoundBase* ClickedSound)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_KeyRebindingKey.WB_KeyRebindingKey_C.SetButtonSounds");

	UWB_KeyRebindingKey_C_SetButtonSounds_Params params {};
	params.HoveredSound = HoveredSound;
	params.ClickedSound = ClickedSound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_KeyRebindingKey.WB_KeyRebindingKey_C.UnhoverAllKeyButtons
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWB_KeyRebindingKey_C::UnhoverAllKeyButtons()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_KeyRebindingKey.WB_KeyRebindingKey_C.UnhoverAllKeyButtons");

	UWB_KeyRebindingKey_C_UnhoverAllKeyButtons_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_KeyRebindingKey.WB_KeyRebindingKey_C.FindKeyboardKey
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FInputChord                                 InputChord                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UWB_KeyRebindingKey_C::FindKeyboardKey(struct FInputChord* InputChord)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_KeyRebindingKey.WB_KeyRebindingKey_C.FindKeyboardKey");

	UWB_KeyRebindingKey_C_FindKeyboardKey_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InputChord != nullptr)
		*InputChord = params.InputChord;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_KeyRebindingKey.WB_KeyRebindingKey_C.TranslateCombKey
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FKey                                        Key                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
//		bool                                               IsCombKey                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FString                                     A                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UWB_KeyRebindingKey_C::TranslateCombKey(const struct FKey& Key, bool IsCombKey, const struct FString& A)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_KeyRebindingKey.WB_KeyRebindingKey_C.TranslateCombKey");

	UWB_KeyRebindingKey_C_TranslateCombKey_Params params {};
	params.Key = Key;
	params.IsCombKey = IsCombKey;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_KeyRebindingKey.WB_KeyRebindingKey_C.TranslateGamepadKeys
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
//		struct FText                                       Key_Text                                                   (Parm, OutParm)
void UWB_KeyRebindingKey_C::TranslateGamepadKeys(const struct FKey& Key, struct FText* Key_Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_KeyRebindingKey.WB_KeyRebindingKey_C.TranslateGamepadKeys");

	UWB_KeyRebindingKey_C_TranslateGamepadKeys_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Key_Text != nullptr)
		*Key_Text = params.Key_Text;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_KeyRebindingKey.WB_KeyRebindingKey_C.GetIsGamepadKey
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
//		bool                                               bIsGamepadKey                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_KeyRebindingKey_C::GetIsGamepadKey(const struct FKey& Key, bool* bIsGamepadKey)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_KeyRebindingKey.WB_KeyRebindingKey_C.GetIsGamepadKey");

	UWB_KeyRebindingKey_C_GetIsGamepadKey_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bIsGamepadKey != nullptr)
		*bIsGamepadKey = params.bIsGamepadKey;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_KeyRebindingKey.WB_KeyRebindingKey_C.GetIsKeyboardKey
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
//		bool                                               bIsKeyboardKey                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_KeyRebindingKey_C::GetIsKeyboardKey(const struct FKey& Key, bool* bIsKeyboardKey)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_KeyRebindingKey.WB_KeyRebindingKey_C.GetIsKeyboardKey");

	UWB_KeyRebindingKey_C_GetIsKeyboardKey_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bIsKeyboardKey != nullptr)
		*bIsKeyboardKey = params.bIsKeyboardKey;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_KeyRebindingKey.WB_KeyRebindingKey_C.SetCurrentMappingByIndex
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                MappingIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_KeyRebindingKey_C::SetCurrentMappingByIndex(int MappingIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_KeyRebindingKey.WB_KeyRebindingKey_C.SetCurrentMappingByIndex");

	UWB_KeyRebindingKey_C_SetCurrentMappingByIndex_Params params {};
	params.MappingIndex = MappingIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_KeyRebindingKey.WB_KeyRebindingKey_C.GetIsAxisMapping
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FName                                       ItemToFind                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bIsAxisMapping                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_KeyRebindingKey_C::GetIsAxisMapping(const struct FName& ItemToFind, bool* bIsAxisMapping)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_KeyRebindingKey.WB_KeyRebindingKey_C.GetIsAxisMapping");

	UWB_KeyRebindingKey_C_GetIsAxisMapping_Params params {};
	params.ItemToFind = ItemToFind;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bIsAxisMapping != nullptr)
		*bIsAxisMapping = params.bIsAxisMapping;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_KeyRebindingKey.WB_KeyRebindingKey_C.GetIsActionMapping
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FName                                       ItemToFind                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bIsActionMapping                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_KeyRebindingKey_C::GetIsActionMapping(const struct FName& ItemToFind, bool* bIsActionMapping)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_KeyRebindingKey.WB_KeyRebindingKey_C.GetIsActionMapping");

	UWB_KeyRebindingKey_C_GetIsActionMapping_Params params {};
	params.ItemToFind = ItemToFind;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bIsActionMapping != nullptr)
		*bIsActionMapping = params.bIsActionMapping;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_KeyRebindingKey.WB_KeyRebindingKey_C.SetKeymappingName
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       KeymappingText                                             (BlueprintVisible, BlueprintReadOnly, Parm)
void UWB_KeyRebindingKey_C::SetKeymappingName(const struct FText& KeymappingText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_KeyRebindingKey.WB_KeyRebindingKey_C.SetKeymappingName");

	UWB_KeyRebindingKey_C_SetKeymappingName_Params params {};
	params.KeymappingText = KeymappingText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_KeyRebindingKey.WB_KeyRebindingKey_C.SetInfo_Normal
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWB_KeyRebindingKey_C::SetInfo_Normal()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_KeyRebindingKey.WB_KeyRebindingKey_C.SetInfo_Normal");

	UWB_KeyRebindingKey_C_SetInfo_Normal_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_KeyRebindingKey.WB_KeyRebindingKey_C.SetInfo_Hovered
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWB_KeyRebindingKey_C::SetInfo_Hovered()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_KeyRebindingKey.WB_KeyRebindingKey_C.SetInfo_Hovered");

	UWB_KeyRebindingKey_C_SetInfo_Hovered_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_KeyRebindingKey.WB_KeyRebindingKey_C.SetButtonInfo
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UFont*                                       Font                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UFontFace*                                   FontFace                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                FontSize                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                TextColor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                FrameColor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                FillColor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_KeyRebindingKey_C::SetButtonInfo(class UFont* Font, class UFontFace* FontFace, int FontSize, const struct FLinearColor& TextColor, const struct FLinearColor& FrameColor, const struct FLinearColor& FillColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_KeyRebindingKey.WB_KeyRebindingKey_C.SetButtonInfo");

	UWB_KeyRebindingKey_C_SetButtonInfo_Params params {};
	params.Font = Font;
	params.FontFace = FontFace;
	params.FontSize = FontSize;
	params.TextColor = TextColor;
	params.FrameColor = FrameColor;
	params.FillColor = FillColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_KeyRebindingKey.WB_KeyRebindingKey_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_KeyRebindingKey_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_KeyRebindingKey.WB_KeyRebindingKey_C.PreConstruct");

	UWB_KeyRebindingKey_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_KeyRebindingKey.WB_KeyRebindingKey_C.BndEvt__Input_KeySelector_K2Node_ComponentBoundEvent_289_OnKeySelected__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FInputChord                                 SelectedKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UWB_KeyRebindingKey_C::BndEvt__Input_KeySelector_K2Node_ComponentBoundEvent_289_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_KeyRebindingKey.WB_KeyRebindingKey_C.BndEvt__Input_KeySelector_K2Node_ComponentBoundEvent_289_OnKeySelected__DelegateSignature");

	UWB_KeyRebindingKey_C_BndEvt__Input_KeySelector_K2Node_ComponentBoundEvent_289_OnKeySelected__DelegateSignature_Params params {};
	params.SelectedKey = SelectedKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_KeyRebindingKey.WB_KeyRebindingKey_C.BndEvt__Input_KeySelector_K2Node_ComponentBoundEvent_290_OnIsSelectingKeyChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWB_KeyRebindingKey_C::BndEvt__Input_KeySelector_K2Node_ComponentBoundEvent_290_OnIsSelectingKeyChanged__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_KeyRebindingKey.WB_KeyRebindingKey_C.BndEvt__Input_KeySelector_K2Node_ComponentBoundEvent_290_OnIsSelectingKeyChanged__DelegateSignature");

	UWB_KeyRebindingKey_C_BndEvt__Input_KeySelector_K2Node_ComponentBoundEvent_290_OnIsSelectingKeyChanged__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_KeyRebindingKey.WB_KeyRebindingKey_C.InitConstruct
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWB_KeyRebindingKey_C::InitConstruct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_KeyRebindingKey.WB_KeyRebindingKey_C.InitConstruct");

	UWB_KeyRebindingKey_C_InitConstruct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_KeyRebindingKey.WB_KeyRebindingKey_C.CheckHovered
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWB_KeyRebindingKey_C::CheckHovered()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_KeyRebindingKey.WB_KeyRebindingKey_C.CheckHovered");

	UWB_KeyRebindingKey_C_CheckHovered_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_KeyRebindingKey.WB_KeyRebindingKey_C.SetNoKeySpecifiedText
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       InNoKeySpecifiedText                                       (BlueprintVisible, BlueprintReadOnly, Parm)
void UWB_KeyRebindingKey_C::SetNoKeySpecifiedText(const struct FText& InNoKeySpecifiedText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_KeyRebindingKey.WB_KeyRebindingKey_C.SetNoKeySpecifiedText");

	UWB_KeyRebindingKey_C_SetNoKeySpecifiedText_Params params {};
	params.InNoKeySpecifiedText = InNoKeySpecifiedText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_KeyRebindingKey.WB_KeyRebindingKey_C.SetSelectedKey
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FInputChord                                 InSelectedKey                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
void UWB_KeyRebindingKey_C::SetSelectedKey(const struct FInputChord& InSelectedKey)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_KeyRebindingKey.WB_KeyRebindingKey_C.SetSelectedKey");

	UWB_KeyRebindingKey_C_SetSelectedKey_Params params {};
	params.InSelectedKey = InSelectedKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_KeyRebindingKey.WB_KeyRebindingKey_C.SetKeyRebindingText
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
void UWB_KeyRebindingKey_C::SetKeyRebindingText(const struct FText& InText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_KeyRebindingKey.WB_KeyRebindingKey_C.SetKeyRebindingText");

	UWB_KeyRebindingKey_C_SetKeyRebindingText_Params params {};
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_KeyRebindingKey.WB_KeyRebindingKey_C.SetKeySelectionText
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       InKeySelectionText                                         (BlueprintVisible, BlueprintReadOnly, Parm)
void UWB_KeyRebindingKey_C::SetKeySelectionText(const struct FText& InKeySelectionText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_KeyRebindingKey.WB_KeyRebindingKey_C.SetKeySelectionText");

	UWB_KeyRebindingKey_C_SetKeySelectionText_Params params {};
	params.InKeySelectionText = InKeySelectionText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_KeyRebindingKey.WB_KeyRebindingKey_C.SetEnabled
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bEnabled                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_KeyRebindingKey_C::SetEnabled(bool bEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_KeyRebindingKey.WB_KeyRebindingKey_C.SetEnabled");

	UWB_KeyRebindingKey_C_SetEnabled_Params params {};
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_KeyRebindingKey.WB_KeyRebindingKey_C.SetAllowGamepadKeys
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               AllowGamepadKeys                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_KeyRebindingKey_C::SetAllowGamepadKeys(bool AllowGamepadKeys)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_KeyRebindingKey.WB_KeyRebindingKey_C.SetAllowGamepadKeys");

	UWB_KeyRebindingKey_C_SetAllowGamepadKeys_Params params {};
	params.AllowGamepadKeys = AllowGamepadKeys;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_KeyRebindingKey.WB_KeyRebindingKey_C.SetAllowModifierKeys
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bAllowModifierKeys                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_KeyRebindingKey_C::SetAllowModifierKeys(bool bAllowModifierKeys)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_KeyRebindingKey.WB_KeyRebindingKey_C.SetAllowModifierKeys");

	UWB_KeyRebindingKey_C_SetAllowModifierKeys_Params params {};
	params.bAllowModifierKeys = bAllowModifierKeys;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_KeyRebindingKey.WB_KeyRebindingKey_C.SetEscapeKeys
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<struct FKey>                                InKeys                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UWB_KeyRebindingKey_C::SetEscapeKeys(TArray<struct FKey> InKeys)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_KeyRebindingKey.WB_KeyRebindingKey_C.SetEscapeKeys");

	UWB_KeyRebindingKey_C_SetEscapeKeys_Params params {};
	params.InKeys = InKeys;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_KeyRebindingKey.WB_KeyRebindingKey_C.UpdateKeyInfo
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWB_KeyRebindingKey_C::UpdateKeyInfo()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_KeyRebindingKey.WB_KeyRebindingKey_C.UpdateKeyInfo");

	UWB_KeyRebindingKey_C_UpdateKeyInfo_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_KeyRebindingKey.WB_KeyRebindingKey_C.SetResponsiveHovering
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bResponsiveHovering                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_KeyRebindingKey_C::SetResponsiveHovering(bool bResponsiveHovering)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_KeyRebindingKey.WB_KeyRebindingKey_C.SetResponsiveHovering");

	UWB_KeyRebindingKey_C_SetResponsiveHovering_Params params {};
	params.bResponsiveHovering = bResponsiveHovering;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_KeyRebindingKey.WB_KeyRebindingKey_C.SetLocalSize
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector2D                                   LocalSize                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_KeyRebindingKey_C::SetLocalSize(const struct FVector2D& LocalSize)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_KeyRebindingKey.WB_KeyRebindingKey_C.SetLocalSize");

	UWB_KeyRebindingKey_C_SetLocalSize_Params params {};
	params.LocalSize = LocalSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_KeyRebindingKey.WB_KeyRebindingKey_C.ExecuteUbergraph_WB_KeyRebindingKey
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_KeyRebindingKey_C::ExecuteUbergraph_WB_KeyRebindingKey(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_KeyRebindingKey.WB_KeyRebindingKey_C.ExecuteUbergraph_WB_KeyRebindingKey");

	UWB_KeyRebindingKey_C_ExecuteUbergraph_WB_KeyRebindingKey_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_KeyRebindingKey.WB_KeyRebindingKey_C.OnHovered__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWB_KeyRebindingKey_C::OnHovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_KeyRebindingKey.WB_KeyRebindingKey_C.OnHovered__DelegateSignature");

	UWB_KeyRebindingKey_C_OnHovered__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_KeyRebindingKey.WB_KeyRebindingKey_C.OnKeyEmptied__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FInputChord                                 LastSelectedKey                                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UWB_KeyRebindingKey_C::OnKeyEmptied__DelegateSignature(const struct FInputChord& LastSelectedKey)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_KeyRebindingKey.WB_KeyRebindingKey_C.OnKeyEmptied__DelegateSignature");

	UWB_KeyRebindingKey_C_OnKeyEmptied__DelegateSignature_Params params {};
	params.LastSelectedKey = LastSelectedKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function WB_KeyRebindingKey.WB_KeyRebindingKey_C.OnKeySelected__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<EMappingType_EMappingType>             MappingType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FInputChord                                 SelectedKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UWB_KeyRebindingKey_C::OnKeySelected__DelegateSignature(TEnumAsByte<EMappingType_EMappingType> MappingType, const struct FInputChord& SelectedKey)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_KeyRebindingKey.WB_KeyRebindingKey_C.OnKeySelected__DelegateSignature");

	UWB_KeyRebindingKey_C_OnKeySelected__DelegateSignature_Params params {};
	params.MappingType = MappingType;
	params.SelectedKey = SelectedKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
