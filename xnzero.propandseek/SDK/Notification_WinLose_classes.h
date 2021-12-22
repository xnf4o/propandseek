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

// WidgetBlueprintGeneratedClass Notification_WinLose.Notification_WinLose_C
// 0x0048 (FullSize[0x0278] - InheritedSize[0x0230])
class UNotification_WinLose_C : public UUserWidget
{
public:
	class UImage*                                      Image_110;                                                 // 0x0230(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  Text;                                                      // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  WhichSideWon_;                                             // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FText                                       PropHunterWinText;                                         // 0x0248(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       YouWinLoseText;                                            // 0x0260(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Notification_WinLose.Notification_WinLose_C");
		return ptr;
	}



	void UpdateYouWinLoseNoti(const struct FText& YouWinLose);
	void UpdatePropHunterWinLoseNoti(const struct FText& PropHunterWinLose);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
