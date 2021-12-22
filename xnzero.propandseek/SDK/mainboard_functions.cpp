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
//		Name   -> Function mainboard.mainboard_C.UpdateAlives
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void Umainboard_C::UpdateAlives()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function mainboard.mainboard_C.UpdateAlives");

	Umainboard_C_UpdateAlives_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function mainboard.mainboard_C.UpdateWins
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                HunterWin                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                PropWin                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void Umainboard_C::UpdateWins(int HunterWin, int PropWin)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function mainboard.mainboard_C.UpdateWins");

	Umainboard_C_UpdateWins_Params params {};
	params.HunterWin = HunterWin;
	params.PropWin = PropWin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function mainboard.mainboard_C.UpdateTime
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Sec                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void Umainboard_C::UpdateTime(int Sec)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function mainboard.mainboard_C.UpdateTime");

	Umainboard_C_UpdateTime_Params params {};
	params.Sec = Sec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function mainboard.mainboard_C.UpdateComp
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Competitive_                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void Umainboard_C::UpdateComp(bool Competitive_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function mainboard.mainboard_C.UpdateComp");

	Umainboard_C_UpdateComp_Params params {};
	params.Competitive_ = Competitive_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function mainboard.mainboard_C.PC
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class AFPS_PC_C*                                   AsFPS_PC                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void Umainboard_C::PC(class AFPS_PC_C** AsFPS_PC)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function mainboard.mainboard_C.PC");

	Umainboard_C_PC_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsFPS_PC != nullptr)
		*AsFPS_PC = params.AsFPS_PC;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
