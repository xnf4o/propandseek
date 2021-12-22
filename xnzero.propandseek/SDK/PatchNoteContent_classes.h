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

// WidgetBlueprintGeneratedClass PatchNoteContent.PatchNoteContent_C
// 0x0018 (FullSize[0x0248] - InheritedSize[0x0230])
class UPatchNoteContent_C : public UUserWidget
{
public:
	class UTextBlock*                                  ContentText;                                               // 0x0230(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FString                                     Content;                                                   // 0x0238(0x0010) (Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PatchNoteContent.PatchNoteContent_C");
		return ptr;
	}



	struct FText Get_ContentText_Text_1();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
