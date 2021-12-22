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
//		Name   -> Function BGI.BGI_C.OpenLobbyAnim
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBGI_C::OpenLobbyAnim()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BGI.BGI_C.OpenLobbyAnim");

	UBGI_C_OpenLobbyAnim_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function BGI.BGI_C.ExecuteUbergraph_BGI
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBGI_C::ExecuteUbergraph_BGI(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BGI.BGI_C.ExecuteUbergraph_BGI");

	UBGI_C_ExecuteUbergraph_BGI_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
