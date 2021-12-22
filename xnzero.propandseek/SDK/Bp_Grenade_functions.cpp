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
//		Name   -> Function Bp_Grenade.Bp_Grenade_C.OnRep_IsSmoking?
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABp_Grenade_C::OnRep_IsSmoking_()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Bp_Grenade.Bp_Grenade_C.OnRep_IsSmoking?");

	ABp_Grenade_C_OnRep_IsSmoking__Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Bp_Grenade.Bp_Grenade_C.GM
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class AFPS_GM_C*                                   AsFPS_GM                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABp_Grenade_C::GM(class AFPS_GM_C** AsFPS_GM)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Bp_Grenade.Bp_Grenade_C.GM");

	ABp_Grenade_C_GM_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsFPS_GM != nullptr)
		*AsFPS_GM = params.AsFPS_GM;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Bp_Grenade.Bp_Grenade_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABp_Grenade_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Bp_Grenade.Bp_Grenade_C.ReceiveBeginPlay");

	ABp_Grenade_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Bp_Grenade.Bp_Grenade_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
//		Flags  -> (HasOutParms, BlueprintEvent)
// Parameters:
//		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void ABp_Grenade_C::BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Bp_Grenade.Bp_Grenade_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABp_Grenade_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Bp_Grenade.Bp_Grenade_C.BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature
//		Flags  -> (HasOutParms, BlueprintEvent)
// Parameters:
//		struct FHitResult                                  ImpactResult                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void ABp_Grenade_C::BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature(const struct FHitResult& ImpactResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Bp_Grenade.Bp_Grenade_C.BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature");

	ABp_Grenade_C_BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature_Params params {};
	params.ImpactResult = ImpactResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Bp_Grenade.Bp_Grenade_C.BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_2_OnProjectileBounceDelegate__DelegateSignature
//		Flags  -> (HasOutParms, BlueprintEvent)
// Parameters:
//		struct FHitResult                                  ImpactResult                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
//		struct FVector                                     ImpactVelocity                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABp_Grenade_C::BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_2_OnProjectileBounceDelegate__DelegateSignature(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Bp_Grenade.Bp_Grenade_C.BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_2_OnProjectileBounceDelegate__DelegateSignature");

	ABp_Grenade_C_BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_2_OnProjectileBounceDelegate__DelegateSignature_Params params {};
	params.ImpactResult = ImpactResult;
	params.ImpactVelocity = ImpactVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A0CE40
//		Name   -> Function Bp_Grenade.Bp_Grenade_C.ExecuteUbergraph_Bp_Grenade
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABp_Grenade_C::ExecuteUbergraph_Bp_Grenade(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Bp_Grenade.Bp_Grenade_C.ExecuteUbergraph_Bp_Grenade");

	ABp_Grenade_C_ExecuteUbergraph_Bp_Grenade_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
