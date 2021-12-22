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
//		Name   -> Function HomeUMG.HomeUMG_C.PC
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class ALobbyPC2_C*                                 AsLobby_PC2                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UHomeUMG_C::PC(class ALobbyPC2_C** AsLobby_PC2)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HomeUMG.HomeUMG_C.PC");

	UHomeUMG_C_PC_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsLobby_PC2 != nullptr)
		*AsLobby_PC2 = params.AsLobby_PC2;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function HomeUMG.HomeUMG_C.UpdateSlideButtons
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                ButtonToColor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UHomeUMG_C::UpdateSlideButtons(int ButtonToColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HomeUMG.HomeUMG_C.UpdateSlideButtons");

	UHomeUMG_C_UpdateSlideButtons_Params params {};
	params.ButtonToColor = ButtonToColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function HomeUMG.HomeUMG_C.GI
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UGI2_C*                                      AsGI2                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UHomeUMG_C::GI(class UGI2_C** AsGI2)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HomeUMG.HomeUMG_C.GI");

	UHomeUMG_C_GI_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsGI2 != nullptr)
		*AsGI2 = params.AsGI2;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function HomeUMG.HomeUMG_C.UpdateNews
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UHomeUMG_C::UpdateNews()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HomeUMG.HomeUMG_C.UpdateNews");

	UHomeUMG_C_UpdateNews_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function HomeUMG.HomeUMG_C.MoveToRight
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UHomeUMG_C::MoveToRight()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HomeUMG.HomeUMG_C.MoveToRight");

	UHomeUMG_C_MoveToRight_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function HomeUMG.HomeUMG_C.ReachedEnd?
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UHomeUMG_C::ReachedEnd_()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HomeUMG.HomeUMG_C.ReachedEnd?");

	UHomeUMG_C_ReachedEnd__Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function HomeUMG.HomeUMG_C.MoveToLeft
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UHomeUMG_C::MoveToLeft()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HomeUMG.HomeUMG_C.MoveToLeft");

	UHomeUMG_C_MoveToLeft_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function HomeUMG.HomeUMG_C.UpdateMaintenanceNotice
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Display_                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FString                                     Link                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     Date                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     HrMin                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UHomeUMG_C::UpdateMaintenanceNotice(bool Display_, const struct FString& Link, const struct FString& Date, const struct FString& HrMin)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HomeUMG.HomeUMG_C.UpdateMaintenanceNotice");

	UHomeUMG_C_UpdateMaintenanceNotice_Params params {};
	params.Display_ = Display_;
	params.Link = Link;
	params.Date = Date;
	params.HrMin = HrMin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function HomeUMG.HomeUMG_C.UpdatePatchNote
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     Version                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		bool                                               PatchNoteVisibility                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FString                                     Link                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UHomeUMG_C::UpdatePatchNote(const struct FString& Version, bool PatchNoteVisibility, const struct FString& Link)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HomeUMG.HomeUMG_C.UpdatePatchNote");

	UHomeUMG_C_UpdatePatchNote_Params params {};
	params.Version = Version;
	params.PatchNoteVisibility = PatchNoteVisibility;
	params.Link = Link;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function HomeUMG.HomeUMG_C.BndEvt__PatchNoteButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UHomeUMG_C::BndEvt__PatchNoteButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HomeUMG.HomeUMG_C.BndEvt__PatchNoteButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature");

	UHomeUMG_C_BndEvt__PatchNoteButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function HomeUMG.HomeUMG_C.BndEvt__NewsSectionButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UHomeUMG_C::BndEvt__NewsSectionButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HomeUMG.HomeUMG_C.BndEvt__NewsSectionButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature");

	UHomeUMG_C_BndEvt__NewsSectionButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function HomeUMG.HomeUMG_C.BndEvt__NewsSectionButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UHomeUMG_C::BndEvt__NewsSectionButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HomeUMG.HomeUMG_C.BndEvt__NewsSectionButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature");

	UHomeUMG_C_BndEvt__NewsSectionButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function HomeUMG.HomeUMG_C.BndEvt__Button_Right_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UHomeUMG_C::BndEvt__Button_Right_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HomeUMG.HomeUMG_C.BndEvt__Button_Right_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature");

	UHomeUMG_C_BndEvt__Button_Right_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function HomeUMG.HomeUMG_C.BndEvt__LeftButton_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UHomeUMG_C::BndEvt__LeftButton_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HomeUMG.HomeUMG_C.BndEvt__LeftButton_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature");

	UHomeUMG_C_BndEvt__LeftButton_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function HomeUMG.HomeUMG_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UHomeUMG_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HomeUMG.HomeUMG_C.Construct");

	UHomeUMG_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function HomeUMG.HomeUMG_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UHomeUMG_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HomeUMG.HomeUMG_C.Tick");

	UHomeUMG_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function HomeUMG.HomeUMG_C.BndEvt__MaintenanceNoticeButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UHomeUMG_C::BndEvt__MaintenanceNoticeButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HomeUMG.HomeUMG_C.BndEvt__MaintenanceNoticeButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature");

	UHomeUMG_C_BndEvt__MaintenanceNoticeButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function HomeUMG.HomeUMG_C.BndEvt__Button_01_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UHomeUMG_C::BndEvt__Button_01_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HomeUMG.HomeUMG_C.BndEvt__Button_01_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UHomeUMG_C_BndEvt__Button_01_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function HomeUMG.HomeUMG_C.BndEvt__Button_02_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UHomeUMG_C::BndEvt__Button_02_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HomeUMG.HomeUMG_C.BndEvt__Button_02_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UHomeUMG_C_BndEvt__Button_02_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function HomeUMG.HomeUMG_C.BndEvt__Button_03_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UHomeUMG_C::BndEvt__Button_03_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HomeUMG.HomeUMG_C.BndEvt__Button_03_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UHomeUMG_C_BndEvt__Button_03_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function HomeUMG.HomeUMG_C.BndEvt__Button_04_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UHomeUMG_C::BndEvt__Button_04_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HomeUMG.HomeUMG_C.BndEvt__Button_04_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UHomeUMG_C_BndEvt__Button_04_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function HomeUMG.HomeUMG_C.BndEvt__Button_05_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UHomeUMG_C::BndEvt__Button_05_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HomeUMG.HomeUMG_C.BndEvt__Button_05_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");

	UHomeUMG_C_BndEvt__Button_05_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function HomeUMG.HomeUMG_C.BndEvt__Exit_Yes_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UHomeUMG_C::BndEvt__Exit_Yes_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HomeUMG.HomeUMG_C.BndEvt__Exit_Yes_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature");

	UHomeUMG_C_BndEvt__Exit_Yes_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function HomeUMG.HomeUMG_C.ExecuteUbergraph_HomeUMG
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UHomeUMG_C::ExecuteUbergraph_HomeUMG(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HomeUMG.HomeUMG_C.ExecuteUbergraph_HomeUMG");

	UHomeUMG_C_ExecuteUbergraph_HomeUMG_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
