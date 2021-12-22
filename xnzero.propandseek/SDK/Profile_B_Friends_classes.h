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

// WidgetBlueprintGeneratedClass Profile_B_Friends.Profile_B_Friends_C
// 0x0028 (FullSize[0x0258] - InheritedSize[0x0230])
class UProfile_B_Friends_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UGridPanel*                                  FriendGridPanel;                                           // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int                                                SlotsPerRow;                                               // 0x0240(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_TWEG[0x4];                                     // 0x0244(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FsFriends>                           Friend;                                                    // 0x0248(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Profile_B_Friends.Profile_B_Friends_C");
		return ptr;
	}



	void GI(class UGI2_C** AsGI2);
	void PC(class ALobbyPC2_C** AsLobby_PC);
	void Update(TArray<struct FsFriends> SortedFriendList);
	void ExecuteUbergraph_Profile_B_Friends(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
