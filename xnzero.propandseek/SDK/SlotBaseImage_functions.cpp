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
//		Name   -> Function SlotBaseImage.SlotBaseImage_C.DesignateProp
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPropList                                   Out_Row                                                    (Parm, OutParm, HasGetValueTypeHash)
void USlotBaseImage_C::DesignateProp(struct FPropList* Out_Row)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SlotBaseImage.SlotBaseImage_C.DesignateProp");

	USlotBaseImage_C_DesignateProp_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out_Row != nullptr)
		*Out_Row = params.Out_Row;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function SlotBaseImage.SlotBaseImage_C.GI
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UGI2_C*                                      AsGI2                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USlotBaseImage_C::GI(class UGI2_C** AsGI2)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SlotBaseImage.SlotBaseImage_C.GI");

	USlotBaseImage_C_GI_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsGI2 != nullptr)
		*AsGI2 = params.AsGI2;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function SlotBaseImage.SlotBaseImage_C.TrickChange_Up
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void USlotBaseImage_C::TrickChange_Up()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SlotBaseImage.SlotBaseImage_C.TrickChange_Up");

	USlotBaseImage_C_TrickChange_Up_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function SlotBaseImage.SlotBaseImage_C.TrickChange_Down
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void USlotBaseImage_C::TrickChange_Down()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SlotBaseImage.SlotBaseImage_C.TrickChange_Down");

	USlotBaseImage_C_TrickChange_Down_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function SlotBaseImage.SlotBaseImage_C.InitRandomProps
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void USlotBaseImage_C::InitRandomProps()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SlotBaseImage.SlotBaseImage_C.InitRandomProps");

	USlotBaseImage_C_InitRandomProps_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function SlotBaseImage.SlotBaseImage_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void USlotBaseImage_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SlotBaseImage.SlotBaseImage_C.Construct");

	USlotBaseImage_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function SlotBaseImage.SlotBaseImage_C.Roll_Normal_Start
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Up_                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              PlaybackSpeed                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USlotBaseImage_C::Roll_Normal_Start(bool Up_, float PlaybackSpeed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SlotBaseImage.SlotBaseImage_C.Roll_Normal_Start");

	USlotBaseImage_C_Roll_Normal_Start_Params params {};
	params.Up_ = Up_;
	params.PlaybackSpeed = PlaybackSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function SlotBaseImage.SlotBaseImage_C.Roll_End
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void USlotBaseImage_C::Roll_End()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SlotBaseImage.SlotBaseImage_C.Roll_End");

	USlotBaseImage_C_Roll_End_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function SlotBaseImage.SlotBaseImage_C.RunRollAgain
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void USlotBaseImage_C::RunRollAgain()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SlotBaseImage.SlotBaseImage_C.RunRollAgain");

	USlotBaseImage_C_RunRollAgain_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function SlotBaseImage.SlotBaseImage_C.ExecuteUbergraph_SlotBaseImage
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USlotBaseImage_C::ExecuteUbergraph_SlotBaseImage(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SlotBaseImage.SlotBaseImage_C.ExecuteUbergraph_SlotBaseImage");

	USlotBaseImage_C_ExecuteUbergraph_SlotBaseImage_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
