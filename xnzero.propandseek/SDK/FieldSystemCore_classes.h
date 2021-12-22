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

// Class FieldSystemCore.FieldSystem
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UFieldSystem : public UObject
{
public:
	unsigned char                                      UnknownData_8FE3[0x18];                                    // 0x0028(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FieldSystemCore.FieldSystem");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
