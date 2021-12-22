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
// Enums
//---------------------------------------------------------------------------

// Enum GeometryCollectionCore.EGeometryCollectionCacheType
enum class GeometryCollectionCore_EGeometryCollectionCacheType : uint8_t
{
	EGeometryCollectionCacheType__None = 0,
	EGeometryCollectionCacheType__Record = 1,
	EGeometryCollectionCacheType__Play = 2,
	EGeometryCollectionCacheType__RecordAndPlay = 3,
	EGeometryCollectionCacheType__EGeometryCollectionCacheType_MAX = 4,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GeometryCollectionCore.SolverCollisionData
// 0x0050
struct FSolverCollisionData
{
	unsigned char                                      UnknownData_7G9C[0x50];                                    // 0x0000(0x0050) MISSED OFFSET (PADDING)

};

// ScriptStruct GeometryCollectionCore.SolverTrailingData
// 0x0038
struct FSolverTrailingData
{
	unsigned char                                      UnknownData_A2DH[0x38];                                    // 0x0000(0x0038) MISSED OFFSET (PADDING)

};

// ScriptStruct GeometryCollectionCore.RecordedFrame
// 0x0068
struct FRecordedFrame
{
	TArray<struct FTransform>                          Transforms;                                                // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int>                                        TransformIndices;                                          // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int>                                        PreviousTransformIndices;                                  // 0x0020(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<bool>                                       DisabledFlags;                                             // 0x0030(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FSolverCollisionData>                Collisions;                                                // 0x0040(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FSolverTrailingData>                 Trailings;                                                 // 0x0050(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	float                                              Timestamp;                                                 // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8BOG[0x4];                                     // 0x0064(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct GeometryCollectionCore.RecordedTransformTrack
// 0x0010
struct FRecordedTransformTrack
{
	TArray<struct FRecordedFrame>                      records;                                                   // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
