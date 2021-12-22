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

// WidgetBlueprintGeneratedClass LobbyUMG2.LobbyUMG2_C
// 0x0379 (FullSize[0x05A9] - InheritedSize[0x0230])
class ULobbyUMG2_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            CompanyAnim;                                               // 0x0238(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            YoutubeAnim;                                               // 0x0240(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            TwiiterAnim;                                               // 0x0248(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            FacebookAnim;                                              // 0x0250(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            LootboxAnim;                                               // 0x0258(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            OnHoverQuit;                                               // 0x0260(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            OnHoverOptions;                                            // 0x0268(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            OnHoverShop;                                               // 0x0270(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            OnHoverInventory;                                          // 0x0278(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            OnHoverProfile;                                            // 0x0280(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            OnHoverPlay;                                               // 0x0288(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            JoinDiscordAnim;                                           // 0x0290(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            ShopAnim;                                                  // 0x0298(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            OnTitleDisappear;                                          // 0x02A0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            OnTitleHovered;                                            // 0x02A8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            SessionCreatorAnim;                                        // 0x02B0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            GameBrowserAnim;                                           // 0x02B8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            InvenAnim;                                                 // 0x02C0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            EntryAnim;                                                 // 0x02C8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            FirstStart;                                                // 0x02D0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            Home;                                                      // 0x02D8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBackButton_Fix1_C*                          BackButton_Fix1;                                           // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBGI_C*                                      BGI;                                                       // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UChatSystemLobby_C*                          ChatSystemLobby;                                           // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Company_Button;                                            // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              Companybox;                                                // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UContract_C*                                 Contract;                                                  // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCreateUsername2_C*                          CreateUsername2;                                           // 0x0310(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              DiscordBox;                                                // 0x0318(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     DiscordButton;                                             // 0x0320(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDoubleCheckJoinSession_C*                   DoubleCheckJoinSession;                                    // 0x0328(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDropRateUMG_C*                              DropRateUMG;                                               // 0x0330(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEnterPassword_C*                            EnterPassword;                                             // 0x0338(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  ErrorMessage_text;                                         // 0x0340(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Facebook_button;                                           // 0x0348(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      FromEntryMapImage;                                         // 0x0350(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGameBrowserUMG_C*                           GameBrowserUMG;                                            // 0x0358(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    HomeTitleLogo;                                             // 0x0360(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHomeUMG_C*                                  HomeUMG;                                                   // 0x0368(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_1;                                                   // 0x0370(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_2;                                                   // 0x0378(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_3;                                                   // 0x0380(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_4;                                                   // 0x0388(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_5;                                                   // 0x0390(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_6;                                                   // 0x0398(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_102;                                                 // 0x03A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_344;                                                 // 0x03A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_349;                                                 // 0x03B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInventoryUMG1_C*                            InventoryUMG1;                                             // 0x03B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  JoinDiscordText;                                           // 0x03C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULoadingSessionUMG_C*                        LoadingSessionUMG;                                         // 0x03C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULobby_RetryButton_C*                        Lobby_RetryButton;                                         // 0x03D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWebBrowser_C*                               LobbyWebBrowser;                                           // 0x03D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  LootboxAmountTxt;                                          // 0x03E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIParticleEmitter*                          LootboxEmitter;                                            // 0x03E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIParticleEmitter*                          LootboxEmitter2;                                           // 0x03F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      LootboxImage;                                              // 0x03F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULootBoxUMG_C*                               LootBoxUMG;                                                // 0x0400(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_B01_Native_Preset04_C*                   Main_InventoryButton;                                      // 0x0408(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_B01_Native_Preset04_C*                   Main_Lootbox;                                              // 0x0410(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_B01_Native_Preset04_C*                   Main_Options;                                              // 0x0418(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMain_Options_Fix1_C*                        Main_Options_Fix1;                                         // 0x0420(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_B01_Native_Preset04_C*                   Main_Play;                                                 // 0x0428(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_B01_Native_Preset04_C*                   Main_ProfileButton;                                        // 0x0430(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_B01_Native_Preset04_C*                   Main_Quit;                                                 // 0x0438(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_B01_Native_Preset04_C*                   Main_ShopButton;                                           // 0x0440(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_B01_Native_Preset04_C*                   Main_Tutorial;                                             // 0x0448(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                MenuList;                                                  // 0x0450(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMyProfileBox2_C*                            MyProfileBox2;                                             // 0x0458(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPatchNoteContentUMG_C*                      PatchNoteBox;                                              // 0x0460(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPlayUMG_C*                                  PlayUMG;                                                   // 0x0468(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      ProfileAnim;                                               // 0x0470(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProfileUMG_C*                               ProfileUMG;                                                // 0x0478(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQueueWaitTimer_C*                           QueueWaitTimer;                                            // 0x0480(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuitUMG_C*                                  QuitUMG;                                                   // 0x0488(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  RegionTxt;                                                 // 0x0490(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URssFeederWidget_C*                          RssFeederWidget;                                           // 0x0498(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  ServerNameText;                                            // 0x04A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USessionCreator2_C*                          SessionCreator2;                                           // 0x04A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShopAlternativeUMG_C*                       ShopAlternativeUMG;                                        // 0x04B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              SocialMediaBox;                                            // 0x04B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                            SteamVACTxt;                                               // 0x04C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_1;                                               // 0x04C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_2;                                               // 0x04D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UThrobber_C*                                 Throbber;                                                  // 0x04D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     TitleButton;                                               // 0x04E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTitleMenuBox_C*                             TitleMenuBox;                                              // 0x04E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Twitter_Button;                                            // 0x04F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  VersionTxt;                                                // 0x04F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Youtube_Button;                                            // 0x0500(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ALobbyPC2_C*                                 LobbyPC;                                                   // 0x0508(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TEnumAsByte<ELobbyMode_ELobbyMode>                 LobbyMode;                                                 // 0x0510(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<ESwitcher_Entry_ESwitcher_Entry>       EntryStatus;                                               // 0x0511(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<ESwitcher_Home_ESwitcher_Home>         HomeStatus;                                                // 0x0512(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<ePlayUMG_EePlayUMG>                    PlayStatus;                                                // 0x0513(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<eGameBrowser_EeGameBrowser>            GameBrowserStatus;                                         // 0x0514(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_UTXK[0x3];                                     // 0x0515(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       errorMessage;                                              // 0x0518(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               DefaultsChanged_;                                          // 0x0530(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TEnumAsByte<EPasswordUMG_EPasswordUMG>             Sessions;                                                  // 0x0531(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_0U5D[0x6];                                     // 0x0532(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UObject*                                     ReportPostbox;                                             // 0x0538(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               PlayHovered_;                                              // 0x0540(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ProfileHovered_;                                           // 0x0541(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               InventoryHovered_;                                         // 0x0542(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ShopHovered_;                                              // 0x0543(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               OptionHovered_;                                            // 0x0544(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               QuitHovered_;                                              // 0x0545(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_OUN7[0x2];                                     // 0x0546(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       ReportTextGameIDProcess;                                   // 0x0548(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class ABP_LootBoxSpawner_C*                        SpawnerREF;                                                // 0x0560(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     FacebookLink;                                              // 0x0568(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     TwitterLink;                                               // 0x0578(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     YoutubeLink;                                               // 0x0588(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     CompanySteamHomepageLink;                                  // 0x0598(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	TEnumAsByte<ESwitcherLootbox_ESwitcherLootbox>     LootBoxModeStatus;                                         // 0x05A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LobbyUMG2.LobbyUMG2_C");
		return ptr;
	}



	void Sub_Switcher_Lootbox(TEnumAsByte<ESwitcherLootbox_ESwitcherLootbox> SubStatusTo);
	void UpdateLootboxAmountDisplay(int LootboxAmount);
	void LootboxVisibility(bool Visibility);
	void OnLootboxButtonPressed();
	void UpdateRegion(TEnumAsByte<RegionList_ERegionList> region);
	void AIO_UpdateCurrencies(int GoldCoin, int Stoken);
	void Main_UpdateInventory(int GoldCoins, int S_Tokens, int DefaultCharacter, int DefaultAlias, int DefaultTauntSound, int DefaultSpectator);
	void SubSub_Sessions(TEnumAsByte<EPasswordUMG_EPasswordUMG> SubStatusTo);
	void Sub_Switcher_GameBrowser(TEnumAsByte<eGameBrowser_EeGameBrowser> SubStatusTo);
	void PC(class ALobbyPC2_C** AsLobby_PC1);
	void GI(class UGI2_C** AsGI2);
	void OptionsVisibility(bool Visibility);
	void OnOptionsButtonPressed();
	void Sub_Switcher_Inventory(TEnumAsByte<EInvenMenu_EInvenMenu> InvenMenuTo);
	void Sub_Switcher_Play(bool HideAll_, bool ShowDefault_, TEnumAsByte<ePlayUMG_EePlayUMG> SubStatusTo);
	void Sub_Switcher_Home(TEnumAsByte<ESwitcher_Home_ESwitcher_Home> SubStatusTo);
	void Sub_Switcher_Entry(bool HideAll_, TEnumAsByte<ESwitcher_Entry_ESwitcher_Entry> SubStatusTo, const struct FText& TxtConnection, const struct FText& TxtError);
	void InventoryVisibility(bool Visibility);
	void ShopVisibility(bool Visibility);
	void EntryVisibility(bool Visibility);
	void PlayUMGVisibility(bool Visibility);
	void QuitVisibility(bool Visibility);
	void ProfileVisibility(bool Visibility);
	void HomeVisibility(bool Visibility);
	void OnHomeButtonPressed();
	void OnQuitButtonPressed();
	void OnProfileButtonPressed();
	void OnShopButtonPressed();
	void OnInventoryButtonPressed();
	void OnPlayButtonPressed();
	void InitRef();
	void Switcher(TEnumAsByte<ELobbyMode_ELobbyMode> ChangeTo);
	void BndEvt__Main_Options_Fix1_K2Node_ComponentBoundEvent_6_OnBackButtonClicked__DelegateSignature();
	void BndEvt__BackButton_Fix1_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature();
	void BndEvt__Main_ProfileButton_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature();
	void BndEvt__Main_InventoryButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature();
	void BndEvt__Main_ShopButton_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature();
	void BndEvt__Main_Options_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature();
	void BndEvt__Main_Quit_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature();
	void BndEvt__WB_B01_Native_Preset04_C_6_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature();
	void BndEvt__DiscordButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__TitleButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__DiscordButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__DiscordButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__TitleButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__TitleButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void Construct();
	void BndEvt__PlayButton_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Main_Play_K2Node_ComponentBoundEvent_40_OnHovered__DelegateSignature();
	void BndEvt__Main_Play_K2Node_ComponentBoundEvent_41_OnUnhovered__DelegateSignature();
	void BndEvt__Main_ProfileButton_K2Node_ComponentBoundEvent_42_OnHovered__DelegateSignature();
	void BndEvt__Main_ProfileButton_K2Node_ComponentBoundEvent_43_OnUnhovered__DelegateSignature();
	void BndEvt__Main_InventoryButton_K2Node_ComponentBoundEvent_44_OnHovered__DelegateSignature();
	void BndEvt__Main_InventoryButton_K2Node_ComponentBoundEvent_45_OnUnhovered__DelegateSignature();
	void BndEvt__Main_ShopButton_K2Node_ComponentBoundEvent_46_OnHovered__DelegateSignature();
	void BndEvt__Main_ShopButton_K2Node_ComponentBoundEvent_48_OnUnhovered__DelegateSignature();
	void BndEvt__Main_Options_K2Node_ComponentBoundEvent_49_OnHovered__DelegateSignature();
	void BndEvt__Main_Options_K2Node_ComponentBoundEvent_50_OnUnhovered__DelegateSignature();
	void BndEvt__Main_Quit_K2Node_ComponentBoundEvent_51_OnHovered__DelegateSignature();
	void BndEvt__Main_Quit_K2Node_ComponentBoundEvent_52_OnUnhovered__DelegateSignature();
	void BndEvt__EditableTextBox_98_K2Node_ComponentBoundEvent_14_OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text);
	void BndEvt__PurchaseLinkButton_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Main_Lootbox_K2Node_ComponentBoundEvent_18_OnClicked__DelegateSignature();
	void BndEvt__Facebook_button_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Facebook_button_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Facebook_button_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Twitter_Button_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Twitter_Button_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Twitter_Button_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Youtube_Button_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Youtube_Button_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Youtube_Button_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Company_Button_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Company_Button_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Company_Button_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature();
	void ExecuteUbergraph_LobbyUMG2(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
