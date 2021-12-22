#pragma once

// Name: pns, Version: 1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class FieldSystemEngine.FieldSystemActor
// 0x0008 (FullSize[0x0338] - InheritedSize[0x0330])
class AFieldSystemActor : public AActor
{
public:
	class UFieldSystemComponent*                       FieldSystemComponent;                                      // 0x0330(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FieldSystemEngine.FieldSystemActor");
		return ptr;
	}



};

// Class FieldSystemEngine.FieldSystemComponent
// 0x0018 (FullSize[0x0590] - InheritedSize[0x0578])
class UFieldSystemComponent : public UPrimitiveComponent
{
public:
	class UFieldSystem*                                FieldSystem;                                               // 0x0578(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3Z08[0x10];                                    // 0x0580(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FieldSystemEngine.FieldSystemComponent");
		return ptr;
	}



	void ApplyUniformVectorFalloffForce(bool Enabled, const struct FVector& Position, const struct FVector& Direction, float Radius, float Magnitude);
	void ApplyStayDynamicField(bool Enabled, const struct FVector& Position, float Radius, int MaxLevelPerCommand);
	void ApplyRadialVectorFalloffForce(bool Enabled, const struct FVector& Position, float Radius, float Magnitude);
	void ApplyRadialForce(bool Enabled, const struct FVector& Position, float Magnitude);
	void ApplyLinearForce(bool Enabled, const struct FVector& Direction, float Magnitude);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
