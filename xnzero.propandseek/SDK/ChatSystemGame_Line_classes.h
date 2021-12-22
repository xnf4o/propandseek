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

// WidgetBlueprintGeneratedClass ChatSystemGame_Line.ChatSystemGame_Line_C
// 0x0091 (FullSize[0x02C1] - InheritedSize[0x0230])
class UChatSystemGame_Line_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            SystemAnim;                                                // 0x0238(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            FadeAway;                                                  // 0x0240(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                      Image_315;                                                 // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                                    SizeBox_1;                                                 // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  UsernameTxt;                                               // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FText                                       Message;                                                   // 0x0260(0x0018) (Edit, BlueprintVisible, ExposeOnSpawn)
	struct FText                                       userName;                                                  // 0x0278(0x0018) (Edit, BlueprintVisible, ExposeOnSpawn)
	TEnumAsByte<EChatMode_EChatMode>                   ChatMode;                                                  // 0x0290(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                               IsHunter;                                                  // 0x0291(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                               ChatOpened_;                                               // 0x0292(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_VFSU[0x5];                                     // 0x0293(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSlateColor                                 TextColor;                                                 // 0x0298(0x0028) (Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                               Load_;                                                     // 0x02C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ChatSystemGame_Line.ChatSystemGame_Line_C");
		return ptr;
	}



	void GI(class UGI2_C** AsGI2);
	struct FText Init();
	void PC(class AFPS_PC_C** AsFPS_PC);
	void UpdateUsernameTextColor();
	void Construct();
	void StartFading_(bool Fade_);
	void ExecuteUbergraph_ChatSystemGame_Line(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
