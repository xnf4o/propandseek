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
//		Offset -> 0x01E433E0
//		Name   -> Function FieldSystemEngine.FieldSystemComponent.ApplyUniformVectorFalloffForce
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Direction                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Magnitude                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFieldSystemComponent::ApplyUniformVectorFalloffForce(bool Enabled, const struct FVector& Position, const struct FVector& Direction, float Radius, float Magnitude)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemComponent.ApplyUniformVectorFalloffForce");

	UFieldSystemComponent_ApplyUniformVectorFalloffForce_Params params {};
	params.Enabled = Enabled;
	params.Position = Position;
	params.Direction = Direction;
	params.Radius = Radius;
	params.Magnitude = Magnitude;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01E43270
//		Name   -> Function FieldSystemEngine.FieldSystemComponent.ApplyStayDynamicField
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                MaxLevelPerCommand                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFieldSystemComponent::ApplyStayDynamicField(bool Enabled, const struct FVector& Position, float Radius, int MaxLevelPerCommand)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemComponent.ApplyStayDynamicField");

	UFieldSystemComponent_ApplyStayDynamicField_Params params {};
	params.Enabled = Enabled;
	params.Position = Position;
	params.Radius = Radius;
	params.MaxLevelPerCommand = MaxLevelPerCommand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01E43100
//		Name   -> Function FieldSystemEngine.FieldSystemComponent.ApplyRadialVectorFalloffForce
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Magnitude                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFieldSystemComponent::ApplyRadialVectorFalloffForce(bool Enabled, const struct FVector& Position, float Radius, float Magnitude)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemComponent.ApplyRadialVectorFalloffForce");

	UFieldSystemComponent_ApplyRadialVectorFalloffForce_Params params {};
	params.Enabled = Enabled;
	params.Position = Position;
	params.Radius = Radius;
	params.Magnitude = Magnitude;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01E42FE0
//		Name   -> Function FieldSystemEngine.FieldSystemComponent.ApplyRadialForce
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Magnitude                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFieldSystemComponent::ApplyRadialForce(bool Enabled, const struct FVector& Position, float Magnitude)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemComponent.ApplyRadialForce");

	UFieldSystemComponent_ApplyRadialForce_Params params {};
	params.Enabled = Enabled;
	params.Position = Position;
	params.Magnitude = Magnitude;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01E42EC0
//		Name   -> Function FieldSystemEngine.FieldSystemComponent.ApplyLinearForce
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Direction                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Magnitude                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFieldSystemComponent::ApplyLinearForce(bool Enabled, const struct FVector& Direction, float Magnitude)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemComponent.ApplyLinearForce");

	UFieldSystemComponent_ApplyLinearForce_Params params {};
	params.Enabled = Enabled;
	params.Direction = Direction;
	params.Magnitude = Magnitude;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
