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

// WidgetBlueprintGeneratedClass UpperWidget_Lobby.UpperWidget_Lobby_C
// 0x0058 (FullSize[0x0288] - InheritedSize[0x0230])
class UUpperWidget_Lobby_C : public UUserWidget
{
public:
	class UTextBlock*                                  AliasText;                                                 // 0x0230(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_67;                                                  // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUpperWidget_Lobby_Healthbar_C*              UpperWidget_Lobby_Healthbar;                               // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  userName;                                                  // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FText                                       UsernameTxt;                                               // 0x0250(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FString                                     Alias;                                                     // 0x0268(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	TEnumAsByte<ItemLevel_EItemLevel>                  ItemLevel;                                                 // 0x0278(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_5KZ9[0x7];                                     // 0x0279(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      Actor;                                                     // 0x0280(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UpperWidget_Lobby.UpperWidget_Lobby_C");
		return ptr;
	}



	void UpdateUsername(const struct FText& userName);
	void UpdateAlias(const struct FString& Alias, TEnumAsByte<ItemLevel_EItemLevel> ItemLevel);
	void UpdateLobbyUpperwidget(const struct FText& userName, int Alias);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
