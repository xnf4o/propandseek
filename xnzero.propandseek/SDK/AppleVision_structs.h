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

// Enum AppleVision.EDetectedFaceFeatureType
enum class AppleVision_EDetectedFaceFeatureType : uint8_t
{
	EDetectedFaceFeatureType__Unkown = 0,
	EDetectedFaceFeatureType__FaceContour = 1,
	EDetectedFaceFeatureType__InnerLips = 2,
	EDetectedFaceFeatureType__LeftEye = 3,
	EDetectedFaceFeatureType__LeftEyebrow = 4,
	EDetectedFaceFeatureType__LeftPupil = 5,
	EDetectedFaceFeatureType__MedianLine = 6,
	EDetectedFaceFeatureType__Nose = 7,
	EDetectedFaceFeatureType__NoseCrest = 8,
	EDetectedFaceFeatureType__OuterLips = 9,
	EDetectedFaceFeatureType__RightEye = 10,
	EDetectedFaceFeatureType__RightEyebrow = 11,
	EDetectedFaceFeatureType__RightPupil = 12,
	EDetectedFaceFeatureType__EDetectedFaceFeatureType_MAX = 13,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AppleVision.DetectedFeature
// 0x0004
struct FDetectedFeature
{
	float                                              Confidence;                                                // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AppleVision.DetectedFeatureRegion
// 0x0014 (0x0018 - 0x0004)
struct FDetectedFeatureRegion : public FDetectedFeature
{
	unsigned char                                      UnknownData_1SNO[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FVector2D>                           Points;                                                    // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct AppleVision.DetectedFaceFeatureRegion
// 0x0008 (0x0020 - 0x0018)
struct FDetectedFaceFeatureRegion : public FDetectedFeatureRegion
{
	AppleVision_EDetectedFaceFeatureType               FeatureType;                                               // 0x0018(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Q6QX[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct AppleVision.DetectedFeature2D
// 0x0014 (0x0018 - 0x0004)
struct FDetectedFeature2D : public FDetectedFeature
{
	struct FBox2D                                      BoundingBox;                                               // 0x0004(0x0014) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct AppleVision.DetectedFaceFeature2D
// 0x0004 (0x001C - 0x0018)
struct FDetectedFaceFeature2D : public FDetectedFeature2D
{
	AppleVision_EDetectedFaceFeatureType               FeatureType;                                               // 0x0018(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CVQS[0x3];                                     // 0x0019(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct AppleVision.DetectedFace
// 0x0038 (0x0050 - 0x0018)
struct FDetectedFace : public FDetectedFeatureRegion
{
	struct FBox2D                                      BoundingBox;                                               // 0x0018(0x0014) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OTO0[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FDetectedFaceFeature2D>              Features;                                                  // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FDetectedFaceFeatureRegion>          FeatureRegions;                                            // 0x0040(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct AppleVision.FaceDetectionResult
// 0x0010
struct FFaceDetectionResult
{
	TArray<struct FDetectedFace>                       DetectedFaces;                                             // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
