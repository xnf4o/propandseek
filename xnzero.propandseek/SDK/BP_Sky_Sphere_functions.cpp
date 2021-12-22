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
//		Name   -> Function BP_Sky_Sphere.BP_Sky_Sphere_C.RefreshMaterial
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ABP_Sky_Sphere_C::RefreshMaterial()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Sky_Sphere.BP_Sky_Sphere_C.RefreshMaterial");

	ABP_Sky_Sphere_C_RefreshMaterial_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function BP_Sky_Sphere.BP_Sky_Sphere_C.UpdateSunDirection
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ABP_Sky_Sphere_C::UpdateSunDirection()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Sky_Sphere.BP_Sky_Sphere_C.UpdateSunDirection");

	ABP_Sky_Sphere_C_UpdateSunDirection_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function BP_Sky_Sphere.BP_Sky_Sphere_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_Sky_Sphere_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Sky_Sphere.BP_Sky_Sphere_C.UserConstructionScript");

	ABP_Sky_Sphere_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
