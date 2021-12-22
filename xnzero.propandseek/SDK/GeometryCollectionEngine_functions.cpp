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
//		Offset -> 0x01E4BD10
//		Name   -> Function GeometryCollectionEngine.GeometryCollectionActor.RaycastSingle
//		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FVector                                     Start                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     End                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FHitResult                                  OutHit                                                     (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AGeometryCollectionActor::RaycastSingle(const struct FVector& Start, const struct FVector& End, struct FHitResult* OutHit)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.GeometryCollectionActor.RaycastSingle");

	AGeometryCollectionActor_RaycastSingle_Params params {};
	params.Start = Start;
	params.End = End;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutHit != nullptr)
		*OutHit = params.OutHit;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
