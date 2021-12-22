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

// WidgetBlueprintGeneratedClass GiveThumbUMG.GiveThumbUMG_C
// 0x0010 (FullSize[0x0240] - InheritedSize[0x0230])
class UGiveThumbUMG_C : public UUserWidget
{
public:
	class UImage*                                      Image_113;                                                 // 0x0230(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                                    Root;                                                      // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GiveThumbUMG.GiveThumbUMG_C");
		return ptr;
	}



	void UpdateCanGiveThumb(bool CanGiveThumb_);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
