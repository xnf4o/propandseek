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

// Class CustomMeshComponent.CustomMeshComponent
// 0x0010 (FullSize[0x05B0] - InheritedSize[0x05A0])
class UCustomMeshComponent : public UMeshComponent
{
public:
	unsigned char                                      UnknownData_Y0C6[0x10];                                    // 0x05A0(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CustomMeshComponent.CustomMeshComponent");
		return ptr;
	}



	bool SetCustomMeshTriangles(TArray<struct FCustomMeshTriangle> Triangles);
	void ClearCustomMeshTriangles();
	void AddCustomMeshTriangles(TArray<struct FCustomMeshTriangle> Triangles);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
