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

// WidgetBlueprintGeneratedClass SlotBaseImage.SlotBaseImage_C
// 0x0254 (FullSize[0x0484] - InheritedSize[0x0230])
class USlotBaseImage_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            RunSlotAnim_Down;                                          // 0x0238(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            RunSlotAnim_End_Down;                                      // 0x0240(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            RunSlotAnim_End_Up;                                        // 0x0248(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                      Image_487;                                                 // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_489;                                                 // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      PropImage1;                                                // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      PropImage2_Down_Default;                                   // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      PropImage3_Up_Default;                                     // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      PropImage4;                                                // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                               Up_;                                                       // 0x0280(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_IFD6[0x7];                                     // 0x0281(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture2D*                                  NextImage;                                                 // 0x0288(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPropList                                   Output_PropInfo;                                           // 0x0290(0x0060) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FPropList                                   Image1_PropInfo;                                           // 0x02F0(0x0060) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FPropList                                   Image2_PropInfo;                                           // 0x0350(0x0060) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FPropList                                   Image3_PropInfo;                                           // 0x03B0(0x0060) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FPropList                                   Image4_PropInfo;                                           // 0x0410(0x0060) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	float                                              PlaybackSpeed;                                             // 0x0470(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Stop_;                                                     // 0x0474(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TEnumAsByte<EPropSelectionSlots_EPropSelectionSlots> WhichSlot_;                                                // 0x0475(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_AJKO[0x2];                                     // 0x0476(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPropSelectionUMG_C*                         PropSelectionUMG;                                          // 0x0478(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                SectionNumber;                                             // 0x0480(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SlotBaseImage.SlotBaseImage_C");
		return ptr;
	}



	void DesignateProp(struct FPropList* Out_Row);
	void GI(class UGI2_C** AsGI2);
	void TrickChange_Up();
	void TrickChange_Down();
	void InitRandomProps();
	void Construct();
	void Roll_Normal_Start(bool Up_, float PlaybackSpeed);
	void Roll_End();
	void RunRollAgain();
	void ExecuteUbergraph_SlotBaseImage(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
