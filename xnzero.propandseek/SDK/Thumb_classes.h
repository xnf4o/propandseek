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

// WidgetBlueprintGeneratedClass Thumb.Thumb_C
// 0x0010 (FullSize[0x0240] - InheritedSize[0x0230])
class UThumb_C : public UUserWidget
{
public:
	class UWidgetAnimation*                            GiveThumbsUp;                                              // 0x0230(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                      BaseImage;                                                 // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Thumb.Thumb_C");
		return ptr;
	}



	void Give_a_thumbs_up();
	void Sync_a_Previous_Thumbs_Up(bool On_);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
