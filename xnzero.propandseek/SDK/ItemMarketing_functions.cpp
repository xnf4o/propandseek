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
//		Name   -> Function ItemMarketing.ItemMarketing_C.InitContents
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UItemMarketing_C::InitContents()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemMarketing.ItemMarketing_C.InitContents");

	UItemMarketing_C_InitContents_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ItemMarketing.ItemMarketing_C.GetAnimToPlay
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                CurrentStage                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                destination                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UWidgetAnimation*                            FinalAnimation                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UItemMarketing_C::GetAnimToPlay(int CurrentStage, int destination, class UWidgetAnimation** FinalAnimation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemMarketing.ItemMarketing_C.GetAnimToPlay");

	UItemMarketing_C_GetAnimToPlay_Params params {};
	params.CurrentStage = CurrentStage;
	params.destination = destination;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FinalAnimation != nullptr)
		*FinalAnimation = params.FinalAnimation;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ItemMarketing.ItemMarketing_C.SetFinalPlaybackSpeed
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		float                                              CurrentAnimTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              DestinationTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              FinalPlaybackSpeed                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               UseReverse_                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UItemMarketing_C::SetFinalPlaybackSpeed(float CurrentAnimTime, float DestinationTime, float* FinalPlaybackSpeed, bool* UseReverse_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemMarketing.ItemMarketing_C.SetFinalPlaybackSpeed");

	UItemMarketing_C_SetFinalPlaybackSpeed_Params params {};
	params.CurrentAnimTime = CurrentAnimTime;
	params.DestinationTime = DestinationTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FinalPlaybackSpeed != nullptr)
		*FinalPlaybackSpeed = params.FinalPlaybackSpeed;
	if (UseReverse_ != nullptr)
		*UseReverse_ = params.UseReverse_;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ItemMarketing.ItemMarketing_C.Resume_01
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UItemMarketing_C::Resume_01()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemMarketing.ItemMarketing_C.Resume_01");

	UItemMarketing_C_Resume_01_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ItemMarketing.ItemMarketing_C.OnClicked_Button_01_Event
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UItemMarketing_C::OnClicked_Button_01_Event()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemMarketing.ItemMarketing_C.OnClicked_Button_01_Event");

	UItemMarketing_C_OnClicked_Button_01_Event_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ItemMarketing.ItemMarketing_C.StartAnimLoop
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UItemMarketing_C::StartAnimLoop()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemMarketing.ItemMarketing_C.StartAnimLoop");

	UItemMarketing_C_StartAnimLoop_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ItemMarketing.ItemMarketing_C.InitBindingButtons
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UItemMarketing_C::InitBindingButtons()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemMarketing.ItemMarketing_C.InitBindingButtons");

	UItemMarketing_C_InitBindingButtons_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ItemMarketing.ItemMarketing_C.OnClicked_Button_02_Event
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UItemMarketing_C::OnClicked_Button_02_Event()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemMarketing.ItemMarketing_C.OnClicked_Button_02_Event");

	UItemMarketing_C_OnClicked_Button_02_Event_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ItemMarketing.ItemMarketing_C.OnClicked_Button_03_Event
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UItemMarketing_C::OnClicked_Button_03_Event()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemMarketing.ItemMarketing_C.OnClicked_Button_03_Event");

	UItemMarketing_C_OnClicked_Button_03_Event_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ItemMarketing.ItemMarketing_C.OnClicked_Button_04_Event
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UItemMarketing_C::OnClicked_Button_04_Event()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemMarketing.ItemMarketing_C.OnClicked_Button_04_Event");

	UItemMarketing_C_OnClicked_Button_04_Event_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ItemMarketing.ItemMarketing_C.OnClicked_Button_05_Event
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UItemMarketing_C::OnClicked_Button_05_Event()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemMarketing.ItemMarketing_C.OnClicked_Button_05_Event");

	UItemMarketing_C_OnClicked_Button_05_Event_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ItemMarketing.ItemMarketing_C.ResumeAnim
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                SectionNumber                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UItemMarketing_C::ResumeAnim(int SectionNumber)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemMarketing.ItemMarketing_C.ResumeAnim");

	UItemMarketing_C_ResumeAnim_Params params {};
	params.SectionNumber = SectionNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ItemMarketing.ItemMarketing_C.Resume_02
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UItemMarketing_C::Resume_02()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemMarketing.ItemMarketing_C.Resume_02");

	UItemMarketing_C_Resume_02_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ItemMarketing.ItemMarketing_C.Resume_03
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UItemMarketing_C::Resume_03()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemMarketing.ItemMarketing_C.Resume_03");

	UItemMarketing_C_Resume_03_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ItemMarketing.ItemMarketing_C.Resume_04
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UItemMarketing_C::Resume_04()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemMarketing.ItemMarketing_C.Resume_04");

	UItemMarketing_C_Resume_04_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ItemMarketing.ItemMarketing_C.Resume_05
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UItemMarketing_C::Resume_05()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemMarketing.ItemMarketing_C.Resume_05");

	UItemMarketing_C_Resume_05_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ItemMarketing.ItemMarketing_C.BndEvt__Button_Link_01_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UItemMarketing_C::BndEvt__Button_Link_01_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemMarketing.ItemMarketing_C.BndEvt__Button_Link_01_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	UItemMarketing_C_BndEvt__Button_Link_01_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ItemMarketing.ItemMarketing_C.BndEvt__Button_Link_02_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UItemMarketing_C::BndEvt__Button_Link_02_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemMarketing.ItemMarketing_C.BndEvt__Button_Link_02_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");

	UItemMarketing_C_BndEvt__Button_Link_02_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ItemMarketing.ItemMarketing_C.BndEvt__Button_Link_03_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UItemMarketing_C::BndEvt__Button_Link_03_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemMarketing.ItemMarketing_C.BndEvt__Button_Link_03_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature");

	UItemMarketing_C_BndEvt__Button_Link_03_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ItemMarketing.ItemMarketing_C.BndEvt__Button_Link_04_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UItemMarketing_C::BndEvt__Button_Link_04_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemMarketing.ItemMarketing_C.BndEvt__Button_Link_04_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature");

	UItemMarketing_C_BndEvt__Button_Link_04_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ItemMarketing.ItemMarketing_C.BndEvt__Button_Link_05_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UItemMarketing_C::BndEvt__Button_Link_05_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemMarketing.ItemMarketing_C.BndEvt__Button_Link_05_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature");

	UItemMarketing_C_BndEvt__Button_Link_05_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ItemMarketing.ItemMarketing_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UItemMarketing_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemMarketing.ItemMarketing_C.Construct");

	UItemMarketing_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ItemMarketing.ItemMarketing_C.BndEvt__Button_Link_01_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UItemMarketing_C::BndEvt__Button_Link_01_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemMarketing.ItemMarketing_C.BndEvt__Button_Link_01_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature");

	UItemMarketing_C_BndEvt__Button_Link_01_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ItemMarketing.ItemMarketing_C.BndEvt__Button_Link_01_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UItemMarketing_C::BndEvt__Button_Link_01_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemMarketing.ItemMarketing_C.BndEvt__Button_Link_01_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature");

	UItemMarketing_C_BndEvt__Button_Link_01_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ItemMarketing.ItemMarketing_C.BndEvt__Button_Link_02_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UItemMarketing_C::BndEvt__Button_Link_02_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemMarketing.ItemMarketing_C.BndEvt__Button_Link_02_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature");

	UItemMarketing_C_BndEvt__Button_Link_02_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ItemMarketing.ItemMarketing_C.BndEvt__Button_Link_02_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UItemMarketing_C::BndEvt__Button_Link_02_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemMarketing.ItemMarketing_C.BndEvt__Button_Link_02_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature");

	UItemMarketing_C_BndEvt__Button_Link_02_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ItemMarketing.ItemMarketing_C.BndEvt__Button_Link_03_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UItemMarketing_C::BndEvt__Button_Link_03_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemMarketing.ItemMarketing_C.BndEvt__Button_Link_03_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature");

	UItemMarketing_C_BndEvt__Button_Link_03_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ItemMarketing.ItemMarketing_C.BndEvt__Button_Link_03_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UItemMarketing_C::BndEvt__Button_Link_03_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemMarketing.ItemMarketing_C.BndEvt__Button_Link_03_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature");

	UItemMarketing_C_BndEvt__Button_Link_03_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ItemMarketing.ItemMarketing_C.BndEvt__Button_Link_04_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UItemMarketing_C::BndEvt__Button_Link_04_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemMarketing.ItemMarketing_C.BndEvt__Button_Link_04_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature");

	UItemMarketing_C_BndEvt__Button_Link_04_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ItemMarketing.ItemMarketing_C.BndEvt__Button_Link_04_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UItemMarketing_C::BndEvt__Button_Link_04_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemMarketing.ItemMarketing_C.BndEvt__Button_Link_04_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature");

	UItemMarketing_C_BndEvt__Button_Link_04_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ItemMarketing.ItemMarketing_C.BndEvt__Button_Link_05_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UItemMarketing_C::BndEvt__Button_Link_05_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemMarketing.ItemMarketing_C.BndEvt__Button_Link_05_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature");

	UItemMarketing_C_BndEvt__Button_Link_05_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ItemMarketing.ItemMarketing_C.BndEvt__Button_Link_05_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UItemMarketing_C::BndEvt__Button_Link_05_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemMarketing.ItemMarketing_C.BndEvt__Button_Link_05_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature");

	UItemMarketing_C_BndEvt__Button_Link_05_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ItemMarketing.ItemMarketing_C.ExecuteUbergraph_ItemMarketing
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UItemMarketing_C::ExecuteUbergraph_ItemMarketing(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemMarketing.ItemMarketing_C.ExecuteUbergraph_ItemMarketing");

	UItemMarketing_C_ExecuteUbergraph_ItemMarketing_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ItemMarketing.ItemMarketing_C.OnClicked_Button_05__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UItemMarketing_C::OnClicked_Button_05__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemMarketing.ItemMarketing_C.OnClicked_Button_05__DelegateSignature");

	UItemMarketing_C_OnClicked_Button_05__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ItemMarketing.ItemMarketing_C.OnClicked_Button_04__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UItemMarketing_C::OnClicked_Button_04__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemMarketing.ItemMarketing_C.OnClicked_Button_04__DelegateSignature");

	UItemMarketing_C_OnClicked_Button_04__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ItemMarketing.ItemMarketing_C.OnClicked_Button_03__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UItemMarketing_C::OnClicked_Button_03__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemMarketing.ItemMarketing_C.OnClicked_Button_03__DelegateSignature");

	UItemMarketing_C_OnClicked_Button_03__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ItemMarketing.ItemMarketing_C.OnClicked_Button_02__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UItemMarketing_C::OnClicked_Button_02__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemMarketing.ItemMarketing_C.OnClicked_Button_02__DelegateSignature");

	UItemMarketing_C_OnClicked_Button_02__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function ItemMarketing.ItemMarketing_C.OnClicked_Button_01__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UItemMarketing_C::OnClicked_Button_01__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemMarketing.ItemMarketing_C.OnClicked_Button_01__DelegateSignature");

	UItemMarketing_C_OnClicked_Button_01__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
