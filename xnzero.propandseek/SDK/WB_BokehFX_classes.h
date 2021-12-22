﻿#pragma once

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

// WidgetBlueprintGeneratedClass WB_BokehFX.WB_BokehFX_C
// 0x0038 (FullSize[0x0268] - InheritedSize[0x0230])
class UWB_BokehFX_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UOverlay*                                    OV_Content;                                                // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UOverlaySlot*>                        OV_SlotArray;                                              // 0x0240(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UWB_BokehChild_C*>                    BokehChilds;                                               // 0x0250(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              HorizontalValue;                                           // 0x0260(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              VerticalValue;                                             // 0x0264(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_BokehFX.WB_BokehFX_C");
		return ptr;
	}



	void CreateBokehFX(const struct FLinearColor& Color, TEnumAsByte<EJustification_EJustification> EJustification);
	void ExecuteUbergraph_WB_BokehFX(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
