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

// WidgetBlueprintGeneratedClass WB_B01_Native_Preset04.WB_B01_Native_Preset04_C
// 0x000F (FullSize[0x0470] - InheritedSize[0x0461])
class UWB_B01_Native_Preset04_C : public UWB_Button01_Native_C
{
public:
	unsigned char                                      UnknownData_NS1F[0x7];                                     // 0x0461(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0468(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_B01_Native_Preset04.WB_B01_Native_Preset04_C");
		return ptr;
	}



	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_WB_B01_Native_Preset04(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
