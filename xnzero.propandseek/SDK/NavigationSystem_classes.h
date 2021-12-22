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

// Class NavigationSystem.NavigationData
// 0x01C0 (FullSize[0x04F0] - InheritedSize[0x0330])
class ANavigationData : public AActor
{
public:
	unsigned char                                      UnknownData_8LMP[0x8];                                     // 0x0330(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPrimitiveComponent*                         RenderingComp;                                             // 0x0338(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNavDataConfig                              NavDataConfig;                                             // 0x0340(0x0068) (Protected, NativeAccessSpecifierProtected)
	unsigned char                                      bEnableDrawing : 1;                                        // 0x03A8(0x0001) BIT_FIELD (Edit, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bForceRebuildOnLoad : 1;                                   // 0x03A8(0x0001) BIT_FIELD (Edit, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bCanBeMainNavData : 1;                                     // 0x03A8(0x0001) BIT_FIELD (Edit, Config, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bCanSpawnOnRebuild : 1;                                    // 0x03A8(0x0001) BIT_FIELD (Edit, Config, EditConst, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bRebuildAtRuntime : 1;                                     // 0x03A8(0x0001) BIT_FIELD (Config, Deprecated, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ESZF[0x3];                                     // 0x03A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	NavigationSystem_ERuntimeGenerationType            RuntimeGeneration;                                         // 0x03AC(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_E7IT[0x3];                                     // 0x03AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ObservedPathsTickInterval;                                 // 0x03B0(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint32_t                                           DataVersion;                                               // 0x03B4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_0C5X[0xD0];                                    // 0x03B8(0x00D0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FSupportedAreaData>                  SupportedAreas;                                            // 0x0488(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_FGEK[0x58];                                    // 0x0498(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class NavigationSystem.NavigationData");
		return ptr;
	}



};

// Class NavigationSystem.AbstractNavData
// 0x0000 (FullSize[0x04F0] - InheritedSize[0x04F0])
class AAbstractNavData : public ANavigationData
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class NavigationSystem.AbstractNavData");
		return ptr;
	}



};

// Class NavigationSystem.CrowdManagerBase
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UCrowdManagerBase : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class NavigationSystem.CrowdManagerBase");
		return ptr;
	}



};

// Class NavigationSystem.NavArea
// 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
class UNavArea : public UNavAreaBase
{
public:
	float                                              DefaultCost;                                               // 0x0030(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FixedAreaEnteringCost;                                     // 0x0034(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FColor                                      DrawColor;                                                 // 0x0038(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNavAgentSelector                           SupportedAgents;                                           // 0x003C(0x0004) (Edit, Config, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent0 : 1;                                       // 0x0040(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent1 : 1;                                       // 0x0040(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent2 : 1;                                       // 0x0040(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent3 : 1;                                       // 0x0040(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent4 : 1;                                       // 0x0040(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent5 : 1;                                       // 0x0040(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent6 : 1;                                       // 0x0040(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent7 : 1;                                       // 0x0040(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent8 : 1;                                       // 0x0041(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent9 : 1;                                       // 0x0041(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent10 : 1;                                      // 0x0041(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent11 : 1;                                      // 0x0041(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent12 : 1;                                      // 0x0041(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent13 : 1;                                      // 0x0041(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent14 : 1;                                      // 0x0041(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent15 : 1;                                      // 0x0041(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8OOA[0x6];                                     // 0x0042(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class NavigationSystem.NavArea");
		return ptr;
	}



};

// Class NavigationSystem.NavArea_Default
// 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
class UNavArea_Default : public UNavArea
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class NavigationSystem.NavArea_Default");
		return ptr;
	}



};

// Class NavigationSystem.NavArea_LowHeight
// 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
class UNavArea_LowHeight : public UNavArea
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class NavigationSystem.NavArea_LowHeight");
		return ptr;
	}



};

// Class NavigationSystem.NavArea_Null
// 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
class UNavArea_Null : public UNavArea
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class NavigationSystem.NavArea_Null");
		return ptr;
	}



};

// Class NavigationSystem.NavArea_Obstacle
// 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
class UNavArea_Obstacle : public UNavArea
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class NavigationSystem.NavArea_Obstacle");
		return ptr;
	}



};

// Class NavigationSystem.NavAreaMeta
// 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
class UNavAreaMeta : public UNavArea
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class NavigationSystem.NavAreaMeta");
		return ptr;
	}



};

// Class NavigationSystem.NavAreaMeta_SwitchByAgent
// 0x0080 (FullSize[0x00C8] - InheritedSize[0x0048])
class UNavAreaMeta_SwitchByAgent : public UNavAreaMeta
{
public:
	class UClass*                                      Agent0Area;                                                // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      Agent1Area;                                                // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      Agent2Area;                                                // 0x0058(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      Agent3Area;                                                // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      Agent4Area;                                                // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      Agent5Area;                                                // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      Agent6Area;                                                // 0x0078(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      Agent7Area;                                                // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      Agent8Area;                                                // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      Agent9Area;                                                // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      Agent10Area;                                               // 0x0098(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      Agent11Area;                                               // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      Agent12Area;                                               // 0x00A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      Agent13Area;                                               // 0x00B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      Agent14Area;                                               // 0x00B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      Agent15Area;                                               // 0x00C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class NavigationSystem.NavAreaMeta_SwitchByAgent");
		return ptr;
	}



};

// Class NavigationSystem.NavCollision
// 0x0068 (FullSize[0x00D8] - InheritedSize[0x0070])
class UNavCollision : public UNavCollisionBase
{
public:
	unsigned char                                      UnknownData_GGRQ[0x10];                                    // 0x0070(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FNavCollisionCylinder>               CylinderCollision;                                         // 0x0080(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FNavCollisionBox>                    BoxCollision;                                              // 0x0090(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	class UClass*                                      AreaClass;                                                 // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bGatherConvexGeometry : 1;                                 // 0x00A8(0x0001) BIT_FIELD (Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bCreateOnClient : 1;                                       // 0x00A8(0x0001) BIT_FIELD (Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_565B[0x2F];                                    // 0x00A9(0x002F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class NavigationSystem.NavCollision");
		return ptr;
	}



};

// Class NavigationSystem.NavigationGraph
// 0x0000 (FullSize[0x04F0] - InheritedSize[0x04F0])
class ANavigationGraph : public ANavigationData
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class NavigationSystem.NavigationGraph");
		return ptr;
	}



};

// Class NavigationSystem.NavigationGraphNode
// 0x0000 (FullSize[0x0330] - InheritedSize[0x0330])
class ANavigationGraphNode : public AActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class NavigationSystem.NavigationGraphNode");
		return ptr;
	}



};

// Class NavigationSystem.NavigationGraphNodeComponent
// 0x0028 (FullSize[0x0280] - InheritedSize[0x0258])
class UNavigationGraphNodeComponent : public USceneComponent
{
public:
	struct FNavGraphNode                               Node;                                                      // 0x0258(0x0018) (NativeAccessSpecifierPublic)
	class UNavigationGraphNodeComponent*               NextNodeComponent;                                         // 0x0270(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNavigationGraphNodeComponent*               PrevNodeComponent;                                         // 0x0278(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class NavigationSystem.NavigationGraphNodeComponent");
		return ptr;
	}



};

// Class NavigationSystem.NavigationInvokerComponent
// 0x0008 (FullSize[0x0100] - InheritedSize[0x00F8])
class UNavigationInvokerComponent : public UActorComponent
{
public:
	float                                              TileGenerationRadius;                                      // 0x00F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              TileRemovalRadius;                                         // 0x00FC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class NavigationSystem.NavigationInvokerComponent");
		return ptr;
	}



};

// Class NavigationSystem.NavigationPath
// 0x0060 (FullSize[0x0088] - InheritedSize[0x0028])
class UNavigationPath : public UObject
{
public:
	struct FScriptMulticastDelegate                    PathUpdatedNotifier;                                       // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<struct FVector>                             PathPoints;                                                // 0x0038(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ENavigationOptionFlag>          RecalculateOnInvalidation;                                 // 0x0048(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_R51C[0x3F];                                    // 0x0049(0x003F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class NavigationSystem.NavigationPath");
		return ptr;
	}



	bool IsValid();
	bool IsStringPulled();
	bool IsPartial();
	float GetPathLength();
	float GetPathCost();
	struct FString GetDebugString();
	void EnableRecalculationOnInvalidation(TEnumAsByte<Engine_ENavigationOptionFlag> DoRecalculation);
	void EnableDebugDrawing(bool bShouldDrawDebugData, const struct FLinearColor& PathColor);
};

// Class NavigationSystem.NavigationPathGenerator
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UNavigationPathGenerator : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class NavigationSystem.NavigationPathGenerator");
		return ptr;
	}



};

// Class NavigationSystem.NavigationQueryFilter
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
class UNavigationQueryFilter : public UObject
{
public:
	TArray<struct FNavigationFilterArea>               Areas;                                                     // 0x0028(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FNavigationFilterFlags                      IncludeFlags;                                              // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FNavigationFilterFlags                      ExcludeFlags;                                              // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_T3N5[0x8];                                     // 0x0040(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class NavigationSystem.NavigationQueryFilter");
		return ptr;
	}



};

// Class NavigationSystem.NavigationSystemV1
// 0x0408 (FullSize[0x0430] - InheritedSize[0x0028])
class UNavigationSystemV1 : public UNavigationSystemBase
{
public:
	class ANavigationData*                             MainNavData;                                               // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ANavigationData*                             AbstractNavData;                                           // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      CrowdManagerClass[0x28];                                   // 0x0038(0x0028) UNKNOWN PROPERTY: SoftClassProperty NavigationSystem.NavigationSystemV1.CrowdManagerClass
	unsigned char                                      bAutoCreateNavigationData : 1;                             // 0x0060(0x0001) BIT_FIELD (Edit, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bSpawnNavDataInNavBoundsLevel : 1;                         // 0x0060(0x0001) BIT_FIELD (Edit, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bAllowClientSideNavigation : 1;                            // 0x0060(0x0001) BIT_FIELD (Edit, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bShouldDiscardSubLevelNavData : 1;                         // 0x0060(0x0001) BIT_FIELD (Edit, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bTickWhilePaused : 1;                                      // 0x0060(0x0001) BIT_FIELD (Edit, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bSupportRebuilding : 1;                                    // 0x0060(0x0001) BIT_FIELD (NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bInitialBuildingLocked : 1;                                // 0x0060(0x0001) BIT_FIELD (Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QK9F : 1;                                      // 0x0060(0x0001) BIT_FIELD (PADDING)
	unsigned char                                      bSkipAgentHeightCheckWhenPickingNavData : 1;               // 0x0061(0x0001) BIT_FIELD (Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_S3DN[0x2];                                     // 0x0062(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	Engine_ENavDataGatheringModeConfig                 DataGatheringMode;                                         // 0x0064(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_M9WC[0x3];                                     // 0x0065(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bGenerateNavigationOnlyAroundNavigationInvokers : 1;       // 0x0068(0x0001) BIT_FIELD (Edit, Config, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_KGPT[0x3];                                     // 0x0069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ActiveTilesUpdateInterval;                                 // 0x006C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FNavDataConfig>                      SupportedAgents;                                           // 0x0070(0x0010) (Edit, ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
	float                                              DirtyAreasUpdateFreq;                                      // 0x0080(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UAZ2[0x4];                                     // 0x0084(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class ANavigationData*>                     NavDataSet;                                                // 0x0088(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class ANavigationData*>                     NavDataRegistrationQueue;                                  // 0x0098(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_D9CP[0x60];                                    // 0x00A8(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnNavDataRegisteredEvent;                                  // 0x0108(0x0010) (ZeroConstructor, Transient, InstancedReference, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnNavigationGenerationFinishedDelegate;                    // 0x0118(0x0010) (ZeroConstructor, Transient, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DTJP[0xCC];                                    // 0x0128(0x00CC) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	Engine_EFNavigationSystemRunMode                   OperationMode;                                             // 0x01F4(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_XHX8[0x23B];                                   // 0x01F5(0x023B) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class NavigationSystem.NavigationSystemV1");
		return ptr;
	}



	void UnregisterNavigationInvoker(class AActor* Invoker);
	void STATIC_SimpleMoveToLocation(class AController* Controller, const struct FVector& Goal);
	void STATIC_SimpleMoveToActor(class AController* Controller, class AActor* Goal);
	void SetMaxSimultaneousTileGenerationJobsCount(int MaxNumberOfJobs);
	void SetGeometryGatheringMode(Engine_ENavDataGatheringModeConfig NewMode);
	void ResetMaxSimultaneousTileGenerationJobsCount();
	void RegisterNavigationInvoker(class AActor* Invoker, float TileGenerationRadius, float TileRemovalRadius);
	struct FVector STATIC_ProjectPointToNavigation(class UObject* WorldContextObject, const struct FVector& Point, class ANavigationData* NavData, class UClass* FilterClass, const struct FVector& QueryExtent);
	void OnNavigationBoundsUpdated(class ANavMeshBoundsVolume* NavVolume);
	bool STATIC_NavigationRaycast(class UObject* WorldContextObject, const struct FVector& RayStart, const struct FVector& RayEnd, struct FVector* HitLocation, class UClass* FilterClass, class AController* Querier);
	bool STATIC_K2_ProjectPointToNavigation(class UObject* WorldContextObject, const struct FVector& Point, struct FVector* ProjectedLocation, class ANavigationData* NavData, class UClass* FilterClass, const struct FVector& QueryExtent);
	bool STATIC_K2_GetRandomReachablePointInRadius(class UObject* WorldContextObject, const struct FVector& Origin, struct FVector* RandomLocation, float Radius, class ANavigationData* NavData, class UClass* FilterClass);
	bool STATIC_K2_GetRandomPointInNavigableRadius(class UObject* WorldContextObject, const struct FVector& Origin, struct FVector* RandomLocation, float Radius, class ANavigationData* NavData, class UClass* FilterClass);
	bool STATIC_IsNavigationBeingBuiltOrLocked(class UObject* WorldContextObject);
	bool STATIC_IsNavigationBeingBuilt(class UObject* WorldContextObject);
	struct FVector STATIC_GetRandomReachablePointInRadius(class UObject* WorldContextObject, const struct FVector& Origin, float Radius, class ANavigationData* NavData, class UClass* FilterClass);
	struct FVector STATIC_GetRandomPointInNavigableRadius(class UObject* WorldContextObject, const struct FVector& Origin, float Radius, class ANavigationData* NavData, class UClass* FilterClass);
	TEnumAsByte<Engine_ENavigationQueryResult> STATIC_GetPathLength(class UObject* WorldContextObject, const struct FVector& PathStart, const struct FVector& PathEnd, float* PathLength, class ANavigationData* NavData, class UClass* FilterClass);
	TEnumAsByte<Engine_ENavigationQueryResult> STATIC_GetPathCost(class UObject* WorldContextObject, const struct FVector& PathStart, const struct FVector& PathEnd, float* PathCost, class ANavigationData* NavData, class UClass* FilterClass);
	class UNavigationSystemV1* STATIC_GetNavigationSystem(class UObject* WorldContextObject);
	class UNavigationPath* STATIC_FindPathToLocationSynchronously(class UObject* WorldContextObject, const struct FVector& PathStart, const struct FVector& PathEnd, class AActor* PathfindingContext, class UClass* FilterClass);
	class UNavigationPath* STATIC_FindPathToActorSynchronously(class UObject* WorldContextObject, const struct FVector& PathStart, class AActor* GoalActor, float TetherDistance, class AActor* PathfindingContext, class UClass* FilterClass);
};

// Class NavigationSystem.NavigationSystemModuleConfig
// 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
class UNavigationSystemModuleConfig : public UNavigationSystemConfig
{
public:
	unsigned char                                      bStrictlyStatic : 1;                                       // 0x0048(0x0001) BIT_FIELD (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bCreateOnClient : 1;                                       // 0x0048(0x0001) BIT_FIELD (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bAutoSpawnMissingNavData : 1;                              // 0x0048(0x0001) BIT_FIELD (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bSpawnNavDataInNavBoundsLevel : 1;                         // 0x0048(0x0001) BIT_FIELD (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_SDR0[0x7];                                     // 0x0049(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class NavigationSystem.NavigationSystemModuleConfig");
		return ptr;
	}



};

// Class NavigationSystem.NavigationTestingActor
// 0x00E8 (FullSize[0x0418] - InheritedSize[0x0330])
class ANavigationTestingActor : public AActor
{
public:
	unsigned char                                      UnknownData_69ZD[0x10];                                    // 0x0330(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCapsuleComponent*                           CapsuleComponent;                                          // 0x0340(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UNavigationInvokerComponent*                 InvokerComponent;                                          // 0x0348(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      bActAsNavigationInvoker : 1;                               // 0x0350(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_K889[0x7];                                     // 0x0351(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FNavAgentProperties                         NavAgentProps;                                             // 0x0358(0x0030) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     QueryingExtent;                                            // 0x0388(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Z5GT[0x4];                                     // 0x0394(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ANavigationData*                             MyNavData;                                                 // 0x0398(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ProjectedLocation;                                         // 0x03A0(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bProjectedLocationValid : 1;                               // 0x03AC(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSearchStart : 1;                                          // 0x03AC(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bBacktracking : 1;                                         // 0x03AC(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUseHierarchicalPathfinding : 1;                           // 0x03AC(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bGatherDetailedInfo : 1;                                   // 0x03AC(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDrawDistanceToWall : 1;                                   // 0x03AC(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bShowNodePool : 1;                                         // 0x03AC(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bShowBestPath : 1;                                         // 0x03AC(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bShowDiffWithPreviousStep : 1;                             // 0x03AD(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bShouldBeVisibleInGame : 1;                                // 0x03AD(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OCRU[0x2];                                     // 0x03AE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<NavigationSystem_ENavCostDisplay>      CostDisplayMode;                                           // 0x03B0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_L3L0[0x3];                                     // 0x03B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   TextCanvasOffset;                                          // 0x03B4(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bPathExist : 1;                                            // 0x03BC(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bPathIsPartial : 1;                                        // 0x03BC(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bPathSearchOutOfNodes : 1;                                 // 0x03BC(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MY0B[0x3];                                     // 0x03BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              PathfindingTime;                                           // 0x03C0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PathCost;                                                  // 0x03C4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PathfindingSteps;                                          // 0x03C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_97RM[0x4];                                     // 0x03CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ANavigationTestingActor*                     OtherActor;                                                // 0x03D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      FilterClass;                                               // 0x03D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ShowStepIndex;                                             // 0x03E0(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OffsetFromCornersDistance;                                 // 0x03E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_A9J2[0x30];                                    // 0x03E8(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class NavigationSystem.NavigationTestingActor");
		return ptr;
	}



};

// Class NavigationSystem.NavLinkComponent
// 0x0018 (FullSize[0x0590] - InheritedSize[0x0578])
class UNavLinkComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData_SBGC[0x8];                                     // 0x0578(0x0008) Fix Super Size
	TArray<struct FNavigationLink>                     Links;                                                     // 0x0580(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class NavigationSystem.NavLinkComponent");
		return ptr;
	}



};

// Class NavigationSystem.NavRelevantComponent
// 0x0030 (FullSize[0x0128] - InheritedSize[0x00F8])
class UNavRelevantComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_ZLKZ[0x24];                                    // 0x00F8(0x0024) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bAttachToOwnersRoot : 1;                                   // 0x011C(0x0001) BIT_FIELD (NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_4IBU[0x3];                                     // 0x011D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UObject*                                     CachedNavParent;                                           // 0x0120(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class NavigationSystem.NavRelevantComponent");
		return ptr;
	}



	void SetNavigationRelevancy(bool bRelevant);
};

// Class NavigationSystem.NavLinkCustomComponent
// 0x00A8 (FullSize[0x01D0] - InheritedSize[0x0128])
class UNavLinkCustomComponent : public UNavRelevantComponent
{
public:
	unsigned char                                      UnknownData_98J1[0x8];                                     // 0x0128(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	uint32_t                                           NavLinkUserId;                                             // 0x0130(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_UUWK[0x4];                                     // 0x0134(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      EnabledAreaClass;                                          // 0x0138(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      DisabledAreaClass;                                         // 0x0140(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                                     LinkRelativeStart;                                         // 0x0148(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                                     LinkRelativeEnd;                                           // 0x0154(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TEnumAsByte<Engine_ENavLinkDirection>              LinkDirection;                                             // 0x0160(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_FSMP[0x3];                                     // 0x0161(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bLinkEnabled : 1;                                          // 0x0164(0x0001) BIT_FIELD (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bNotifyWhenEnabled : 1;                                    // 0x0164(0x0001) BIT_FIELD (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bNotifyWhenDisabled : 1;                                   // 0x0164(0x0001) BIT_FIELD (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bCreateBoxObstacle : 1;                                    // 0x0164(0x0001) BIT_FIELD (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_8QF8[0x3];                                     // 0x0165(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     ObstacleOffset;                                            // 0x0168(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                                     ObstacleExtent;                                            // 0x0174(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      ObstacleAreaClass;                                         // 0x0180(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              BroadcastRadius;                                           // 0x0188(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              BroadcastInterval;                                         // 0x018C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TEnumAsByte<Engine_ECollisionChannel>              BroadcastChannel;                                          // 0x0190(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_VQ8A[0x3F];                                    // 0x0191(0x003F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class NavigationSystem.NavLinkCustomComponent");
		return ptr;
	}



};

// Class NavigationSystem.NavLinkCustomInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UNavLinkCustomInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class NavigationSystem.NavLinkCustomInterface");
		return ptr;
	}



};

// Class NavigationSystem.NavLinkHostInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UNavLinkHostInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class NavigationSystem.NavLinkHostInterface");
		return ptr;
	}



};

// Class NavigationSystem.NavLinkRenderingComponent
// 0x0008 (FullSize[0x0580] - InheritedSize[0x0578])
class UNavLinkRenderingComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData_U73G[0x8];                                     // 0x0578(0x0008) Fix Super Size


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class NavigationSystem.NavLinkRenderingComponent");
		return ptr;
	}



};

// Class NavigationSystem.NavLinkTrivial
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class UNavLinkTrivial : public UNavLinkDefinition
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class NavigationSystem.NavLinkTrivial");
		return ptr;
	}



};

// Class NavigationSystem.NavMeshBoundsVolume
// 0x0008 (FullSize[0x0370] - InheritedSize[0x0368])
class ANavMeshBoundsVolume : public AVolume
{
public:
	struct FNavAgentSelector                           SupportedAgents;                                           // 0x0368(0x0004) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LPE4[0x4];                                     // 0x036C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class NavigationSystem.NavMeshBoundsVolume");
		return ptr;
	}



};

// Class NavigationSystem.NavMeshRenderingComponent
// 0x0018 (FullSize[0x0590] - InheritedSize[0x0578])
class UNavMeshRenderingComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData_OAFQ[0x8];                                     // 0x0578(0x0008) Fix Super Size
	unsigned char                                      UnknownData_DJKO[0x10];                                    // 0x0580(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class NavigationSystem.NavMeshRenderingComponent");
		return ptr;
	}



};

// Class NavigationSystem.NavModifierComponent
// 0x0028 (FullSize[0x0150] - InheritedSize[0x0128])
class UNavModifierComponent : public UNavRelevantComponent
{
public:
	class UClass*                                      AreaClass;                                                 // 0x0128(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     FailsafeExtent;                                            // 0x0130(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bIncludeAgentHeight : 1;                                   // 0x013C(0x0001) BIT_FIELD (Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MDFJ[0x13];                                    // 0x013D(0x0013) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class NavigationSystem.NavModifierComponent");
		return ptr;
	}



	void SetAreaClass(class UClass* NewAreaClass);
};

// Class NavigationSystem.NavModifierVolume
// 0x0010 (FullSize[0x0378] - InheritedSize[0x0368])
class ANavModifierVolume : public AVolume
{
public:
	unsigned char                                      UnknownData_KKN9[0x8];                                     // 0x0368(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      AreaClass;                                                 // 0x0370(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class NavigationSystem.NavModifierVolume");
		return ptr;
	}



	void SetAreaClass(class UClass* NewAreaClass);
};

// Class NavigationSystem.NavNodeInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UNavNodeInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class NavigationSystem.NavNodeInterface");
		return ptr;
	}



};

// Class NavigationSystem.NavSystemConfigOverride
// 0x0010 (FullSize[0x0340] - InheritedSize[0x0330])
class ANavSystemConfigOverride : public AActor
{
public:
	class UNavigationSystemConfig*                     NavigationSystemConfig;                                    // 0x0330(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bLoadOnClient : 1;                                         // 0x0338(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_BE0O[0x7];                                     // 0x0339(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class NavigationSystem.NavSystemConfigOverride");
		return ptr;
	}



};

// Class NavigationSystem.NavTestRenderingComponent
// 0x0008 (FullSize[0x0580] - InheritedSize[0x0578])
class UNavTestRenderingComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData_Y5X2[0x8];                                     // 0x0578(0x0008) Fix Super Size


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class NavigationSystem.NavTestRenderingComponent");
		return ptr;
	}



};

// Class NavigationSystem.RecastFilter_UseDefaultArea
// 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
class URecastFilter_UseDefaultArea : public UNavigationQueryFilter
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class NavigationSystem.RecastFilter_UseDefaultArea");
		return ptr;
	}



};

// Class NavigationSystem.RecastNavMesh
// 0x00B8 (FullSize[0x05A8] - InheritedSize[0x04F0])
class ARecastNavMesh : public ANavigationData
{
public:
	unsigned char                                      bDrawTriangleEdges : 1;                                    // 0x04F0(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDrawPolyEdges : 1;                                        // 0x04F0(0x0001) BIT_FIELD (Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDrawFilledPolys : 1;                                      // 0x04F0(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDrawNavMeshEdges : 1;                                     // 0x04F0(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDrawTileBounds : 1;                                       // 0x04F0(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDrawPathCollidingGeometry : 1;                            // 0x04F0(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDrawTileLabels : 1;                                       // 0x04F0(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDrawPolygonLabels : 1;                                    // 0x04F0(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDrawDefaultPolygonCost : 1;                               // 0x04F1(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDrawLabelsOnPathNodes : 1;                                // 0x04F1(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDrawNavLinks : 1;                                         // 0x04F1(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDrawFailedNavLinks : 1;                                   // 0x04F1(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDrawClusters : 1;                                         // 0x04F1(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDrawOctree : 1;                                           // 0x04F1(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDrawOctreeDetails : 1;                                    // 0x04F1(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDistinctlyDrawTilesBeingBuilt : 1;                        // 0x04F1(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDrawNavMesh : 1;                                          // 0x04F2(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_A3MF[0x1];                                     // 0x04F3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DrawOffset;                                                // 0x04F4(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bFixedTilePoolSize : 1;                                    // 0x04F8(0x0001) BIT_FIELD (Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YXKP[0x3];                                     // 0x04F9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                TilePoolSize;                                              // 0x04FC(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TileSizeUU;                                                // 0x0500(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CellSize;                                                  // 0x0504(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CellHeight;                                                // 0x0508(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AgentRadius;                                               // 0x050C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AgentHeight;                                               // 0x0510(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AgentMaxHeight;                                            // 0x0514(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AgentMaxSlope;                                             // 0x0518(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AgentMaxStepHeight;                                        // 0x051C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinRegionArea;                                             // 0x0520(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MergeRegionSize;                                           // 0x0524(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxSimplificationError;                                    // 0x0528(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxSimultaneousTileGenerationJobsCount;                    // 0x052C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TileNumberHardLimit;                                       // 0x0530(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PolyRefTileBits;                                           // 0x0534(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PolyRefNavPolyBits;                                        // 0x0538(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PolyRefSaltBits;                                           // 0x053C(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     NavMeshOriginOffset;                                       // 0x0540(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DefaultDrawDistance;                                       // 0x054C(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DefaultMaxSearchNodes;                                     // 0x0550(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DefaultMaxHierarchicalSearchNodes;                         // 0x0554(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<NavigationSystem_ERecastPartitioning>  RegionPartitioning;                                        // 0x0558(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<NavigationSystem_ERecastPartitioning>  LayerPartitioning;                                         // 0x0559(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9Q5I[0x2];                                     // 0x055A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                RegionChunkSplits;                                         // 0x055C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LayerChunkSplits;                                          // 0x0560(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSortNavigationAreasByCost : 1;                            // 0x0564(0x0001) BIT_FIELD (Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bPerformVoxelFiltering : 1;                                // 0x0564(0x0001) BIT_FIELD (Edit, Config, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bMarkLowHeightAreas : 1;                                   // 0x0564(0x0001) BIT_FIELD (Edit, Config, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bFilterLowSpanSequences : 1;                               // 0x0564(0x0001) BIT_FIELD (Edit, Config, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bFilterLowSpanFromTileCache : 1;                           // 0x0564(0x0001) BIT_FIELD (Edit, Config, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDoFullyAsyncNavDataGathering : 1;                         // 0x0564(0x0001) BIT_FIELD (Edit, Config, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUseBetterOffsetsFromCorners : 1;                          // 0x0564(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bStoreEmptyTileLayers : 1;                                 // 0x0564(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUseVirtualFilters : 1;                                    // 0x0565(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAllowNavLinkAsPathEnd : 1;                                // 0x0565(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUseVoxelCache : 1;                                        // 0x0565(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_724N[0x2];                                     // 0x0566(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TileSetUpdateInterval;                                     // 0x0568(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              HeuristicScale;                                            // 0x056C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              VerticalDeviationFromGroundCompensation;                   // 0x0570(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HPDS[0x34];                                    // 0x0574(0x0034) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class NavigationSystem.RecastNavMesh");
		return ptr;
	}



};

// Class NavigationSystem.RecastNavMeshDataChunk
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class URecastNavMeshDataChunk : public UNavigationDataChunk
{
public:
	unsigned char                                      UnknownData_R2UJ[0x10];                                    // 0x0030(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class NavigationSystem.RecastNavMeshDataChunk");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
