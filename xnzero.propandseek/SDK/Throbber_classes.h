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

// WidgetBlueprintGeneratedClass Throbber.Throbber_C
// 0x0028 (FullSize[0x0258] - InheritedSize[0x0230])
class UThrobber_C : public UUserWidget
{
public:
	class UTextBlock*                                  ConnectionStatus;                                          // 0x0230(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIParticleEmitter*                          LoadingParticleUMG;                                        // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FText                                       ConnectionText;                                            // 0x0240(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Throbber.Throbber_C");
		return ptr;
	}



	void UpdateLoadingMessage(const struct FText& InputConnectionText);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
