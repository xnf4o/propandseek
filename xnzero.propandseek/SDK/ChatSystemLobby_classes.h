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

// WidgetBlueprintGeneratedClass ChatSystemLobby.ChatSystemLobby_C
// 0x0080 (FullSize[0x02B0] - InheritedSize[0x0230])
class UChatSystemLobby_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            ShrinkChatbox;                                             // 0x0238(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            ChatModeAnim;                                              // 0x0240(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UScrollBox*                                  AddChat;                                                   // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Addon;                                                     // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Base;                                                      // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Base_chat;                                                 // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                            MessageBox;                                                // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Button02_Framed_C*                       PressEnterButton;                                          // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  userName;                                                  // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FText                                       Message;                                                   // 0x0280(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       Username1;                                                 // 0x0298(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ChatSystemLobby.ChatSystemLobby_C");
		return ptr;
	}



	void FadeAway(bool On_);
	struct FText Get_Username_Text_1();
	void GI(class UGI2_C** AsGI2);
	void UpdateTextColor();
	struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void DisplayChat(const struct FText& Message, const struct FText& userName, TEnumAsByte<EChatMode_EChatMode> ChatMode, bool Myself_);
	void OnChatFocused();
	void OnChatUnfocused();
	void PC(class ALobbyPC2_C** AsLobby_PC);
	void BndEvt__EditableTextBox_708_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<SlateCore_ETextCommit> CommitMethod);
	void DisplayChat_Main(const struct FText& Message, const struct FText& userName, TEnumAsByte<EChatMode_EChatMode> ChatMode, bool Myself_);
	void OnUnpressedChat();
	void BndEvt__PressEnterButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void ShrinkChatbox_Event(bool Shrink_);
	void Construct();
	void ExecuteUbergraph_ChatSystemLobby(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
