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

// Enum UIParticle.EUIParticlePropertyType
enum class UIParticle_EUIParticlePropertyType : uint8_t
{
	EUIParticlePropertyType__Float = 0,
	EUIParticlePropertyType__FloatRange = 1,
	EUIParticlePropertyType__FloatCurve = 2,
	EUIParticlePropertyType__FloatCurveRange = 3,
	EUIParticlePropertyType__Vector2D = 4,
	EUIParticlePropertyType__Vector2DRange = 5,
	EUIParticlePropertyType__LinearColorCurve = 6,
	EUIParticlePropertyType__LinearColorCurveRange = 7,
	EUIParticlePropertyType__EUIParticlePropertyType_MAX = 8,

};

// Enum UIParticle.EParticleDrawEffect
enum class UIParticle_EParticleDrawEffect : uint8_t
{
	EParticleDrawEffect__None      = 0,
	EParticleDrawEffect__NoBlending = 1,
	EParticleDrawEffect__PreMultipliedAlpha = 2,
	EParticleDrawEffect__NoGamma   = 3,
	EParticleDrawEffect__InvertAlpha = 4,
	EParticleDrawEffect__NoPixelSnapping = 5,
	EParticleDrawEffect__DisabledEffect = 6,
	EParticleDrawEffect__IgnoreTextureAlpha = 7,
	EParticleDrawEffect__ReverseGamma = 8,
	EParticleDrawEffect__EParticleDrawEffect_MAX = 9,

};

// Enum UIParticle.EPositionType
enum class UIParticle_EPositionType : uint8_t
{
	EPositionType__FREE            = 0,
	EPositionType__RELATIVE        = 1,
	EPositionType__EPositionType_MAX = 2,

};

// Enum UIParticle.EEmitterType
enum class UIParticle_EEmitterType : uint8_t
{
	EEmitterType__Gravity          = 0,
	EEmitterType__Radial           = 1,
	EEmitterType__Curve            = 2,
	EEmitterType__EEmitterType_MAX = 3,

};

// Enum UIParticle.ECurveType
enum class UIParticle_ECurveType : uint8_t
{
	ECurveType__ParticleLifePercent = 0,
	ECurveType__ParticleLifeTime   = 1,
	ECurveType__EmitLifeTime       = 2,
	ECurveType__ECurveType_MAX     = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct UIParticle.UIParticleEmitterInfo
// 0x0018
struct FUIParticleEmitterInfo
{
	bool                                               Disable;                                                   // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ROI2[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ActiveDelay;                                               // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ZOrder;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9Q76[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UUIParticleEmitterAsset*                     Asset;                                                     // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct UIParticle.Range_Float
// 0x0008
struct FRange_Float
{
	float                                              Min;                                                       // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Max;                                                       // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct UIParticle.UIParticleFloatCurve
// 0x0088
struct FUIParticleFloatCurve
{
	struct FRichCurve                                  CurveData;                                                 // 0x0000(0x0080) (Edit, NativeAccessSpecifierPublic)
	UIParticle_ECurveType                              CurveType;                                                 // 0x0080(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Loop;                                                      // 0x0081(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_E985[0x6];                                     // 0x0082(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct UIParticle.ChildEmitter
// 0x0018
struct FChildEmitter
{
	float                                              ActivityInParentLifeTime;                                  // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               FollowParentPosition;                                      // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QL13[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FollowParentSpeedPercent;                                  // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ZOrderOffset;                                              // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UUIParticleEmitterAsset*                     ChildrenAsset;                                             // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct UIParticle.Range_FloatCurve
// 0x0110
struct FRange_FloatCurve
{
	struct FUIParticleFloatCurve                       Min;                                                       // 0x0000(0x0088) (Edit, NativeAccessSpecifierPublic)
	struct FUIParticleFloatCurve                       Max;                                                       // 0x0088(0x0088) (Edit, NativeAccessSpecifierPublic)

};

// ScriptStruct UIParticle.Range_Vector2D
// 0x0014
struct FRange_Vector2D
{
	struct FVector2D                                   Min;                                                       // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   Max;                                                       // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               RandomKey_X_Y;                                             // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NRBZ[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct UIParticle.UIParticleLinearColorCurve
// 0x0208
struct FUIParticleLinearColorCurve
{
	struct FRichCurve                                  ColorCurves[0x4];                                          // 0x0000(0x0200) (Edit, NativeAccessSpecifierPublic)
	UIParticle_ECurveType                              CurveType;                                                 // 0x0200(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Loop;                                                      // 0x0201(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RR2K[0x6];                                     // 0x0202(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct UIParticle.Range_LinearColorCurve
// 0x0418
struct FRange_LinearColorCurve
{
	struct FUIParticleLinearColorCurve                 Min;                                                       // 0x0000(0x0208) (Edit, NativeAccessSpecifierPublic)
	struct FUIParticleLinearColorCurve                 Max;                                                       // 0x0208(0x0208) (Edit, NativeAccessSpecifierPublic)
	bool                                               RandomKey_R_G;                                             // 0x0410(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               RandomKey_R_B;                                             // 0x0411(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               RandomKey_R_A;                                             // 0x0412(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               RandomKey_G_B;                                             // 0x0413(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               RandomKey_G_A;                                             // 0x0414(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               RandomKey_B_A;                                             // 0x0415(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QDRK[0x2];                                     // 0x0416(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct UIParticle.UIParticleProperty
// 0x07E8
struct FUIParticleProperty
{
	UIParticle_EUIParticlePropertyType                 Type;                                                      // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JQSS[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FloatValue;                                                // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRange_Float                                FloatRangeValue;                                           // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FUIParticleFloatCurve                       FloatCurveValue;                                           // 0x0010(0x0088) (Edit, NativeAccessSpecifierPublic)
	struct FRange_FloatCurve                           FloatCurveRangeValue;                                      // 0x0098(0x0110) (Edit, NativeAccessSpecifierPublic)
	struct FVector2D                                   Vector2DValue;                                             // 0x01A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRange_Vector2D                             Vector2DRangeValue;                                        // 0x01B0(0x0014) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZRPN[0x4];                                     // 0x01C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FUIParticleLinearColorCurve                 LinearColorCurveValue;                                     // 0x01C8(0x0208) (Edit, NativeAccessSpecifierPublic)
	struct FRange_LinearColorCurve                     LinearColorCurveRangeValue;                                // 0x03D0(0x0418) (Edit, NativeAccessSpecifierPublic)

};

// ScriptStruct UIParticle.ScalarParamCurve
// 0x07F0
struct FScalarParamCurve
{
	struct FName                                       ScalarParamName;                                           // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUIParticleProperty                         Value;                                                     // 0x0008(0x07E8) (Edit, NativeAccessSpecifierPublic)

};

// ScriptStruct UIParticle.Posotion_Vector2DCurve
// 0x0FD0
struct FPosotion_Vector2DCurve
{
	struct FUIParticleProperty                         X;                                                         // 0x0000(0x07E8) (Edit, NativeAccessSpecifierPublic)
	struct FUIParticleProperty                         Y;                                                         // 0x07E8(0x07E8) (Edit, NativeAccessSpecifierPublic)

};

// ScriptStruct UIParticle.Size_Vector2DCurve
// 0x0FD0
struct FSize_Vector2DCurve
{
	struct FUIParticleProperty                         Min;                                                       // 0x0000(0x07E8) (Edit, NativeAccessSpecifierPublic)
	struct FUIParticleProperty                         Max;                                                       // 0x07E8(0x07E8) (Edit, NativeAccessSpecifierPublic)

};

// ScriptStruct UIParticle.ScalarParamFloat
// 0x0010
struct FScalarParamFloat
{
	struct FName                                       ScalarParamName;                                           // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRange_Float                                Value;                                                     // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct UIParticle.LerpKeyColor
// 0x0010
struct FLerpKeyColor
{
	unsigned char                                      UnknownData_C2NU[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct UIParticle.LerpKeyVector2D
// 0x0008
struct FLerpKeyVector2D
{
	unsigned char                                      UnknownData_CG76[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
