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

// WidgetBlueprintGeneratedClass Cashbox_Fixed1.Cashbox_Fixed1_C
// 0x0018 (FullSize[0x0248] - InheritedSize[0x0230])
class UCashbox_Fixed1_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCashHeader_C*                               CashHeader;                                                // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                ListToPurchase;                                            // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Cashbox_Fixed1.Cashbox_Fixed1_C");
		return ptr;
	}



	void PC(class ALobbyPC2_C** AsLobby_PC1);
	void Init();
	void Construct();
	void ExecuteUbergraph_Cashbox_Fixed1(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
