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

// WidgetBlueprintGeneratedClass Profile_C_FriendRequests.Profile_C_FriendRequests_C
// 0x000C (FullSize[0x023C] - InheritedSize[0x0230])
class UProfile_C_FriendRequests_C : public UUserWidget
{
public:
	class UGridPanel*                                  FriendRequestGrid;                                         // 0x0230(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int                                                SlotsPerRow;                                               // 0x0238(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Profile_C_FriendRequests.Profile_C_FriendRequests_C");
		return ptr;
	}



	void GI(class UGI2_C** AsGI2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
