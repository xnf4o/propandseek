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

// Class UIParticle.UIParticle
// 0x0030 (FullSize[0x0138] - InheritedSize[0x0108])
class UUIParticle : public UWidget
{
public:
	class UUIParticleAsset*                            Asset;                                                     // 0x0108(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    EventOnEnd;                                                // 0x0110(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      bPlayParticle : 1;                                         // 0x0120(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsPlaying;                                                 // 0x0121(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EI5Y[0x16];                                    // 0x0122(0x0016) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UIParticle.UIParticle");
		return ptr;
	}



	void StopEmit();
	void Stop();
	void SetPlayParticle(bool InPlayParticle);
	void Play();
};

// Class UIParticle.UIParticleAsset
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UUIParticleAsset : public UObject
{
public:
	bool                                               AutoPlay;                                                  // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QUG7[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FUIParticleEmitterInfo>              Emitters;                                                  // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UIParticle.UIParticleAsset");
		return ptr;
	}



};

// Class UIParticle.UIParticleEmitter
// 0x0030 (FullSize[0x0138] - InheritedSize[0x0108])
class UUIParticleEmitter : public UWidget
{
public:
	class UUIParticleEmitterAsset*                     Asset;                                                     // 0x0108(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    EventOnEnd;                                                // 0x0110(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      bPlayParticle : 1;                                         // 0x0120(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsPlaying;                                                 // 0x0121(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZTGV[0x16];                                    // 0x0122(0x0016) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UIParticle.UIParticleEmitter");
		return ptr;
	}



	void StopEmit();
	void Stop();
	void SetPlayParticle(bool InPlayParticle);
	void Play();
};

// Class UIParticle.UIParticleEmitterAsset
// 0xD618 (FullSize[0xD640] - InheritedSize[0x0028])
class UUIParticleEmitterAsset : public UObject
{
public:
	bool                                               AutoPlay;                                                  // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9TYM[0x3];                                     // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              StartTimeOffset;                                           // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SamplingTimes;                                             // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UIParticle_EEmitterType                            EmitterType;                                               // 0x0034(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FXXT[0x3];                                     // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              EmitSeconds;                                               // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HDY8[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FUIParticleProperty                         MaxParticleCount;                                          // 0x0040(0x07E8) (Edit, NativeAccessSpecifierPublic)
	struct FUIParticleProperty                         SpawnParticlePerSecond;                                    // 0x0828(0x07E8) (Edit, NativeAccessSpecifierPublic)
	struct FUIParticleProperty                         ParticleEmitAngle;                                         // 0x1010(0x07E8) (Edit, NativeAccessSpecifierPublic)
	struct FRange_Vector2D                             EmitPosRange;                                              // 0x17F8(0x0014) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0GL7[0x4];                                     // 0x180C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPosotion_Vector2DCurve                     EmitPosition;                                              // 0x1810(0x0FD0) (Edit, NativeAccessSpecifierPublic)
	bool                                               AutoEmitPosRange;                                          // 0x27E0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AutoScale;                                                 // 0x27E1(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ScaleByX;                                                  // 0x27E2(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3PYI[0x1];                                     // 0x27E3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   DesignSize;                                                // 0x27E4(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               EmitAngleByWidgetAngle;                                    // 0x27EC(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UIParticle_EPositionType                           PositionType;                                              // 0x27ED(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PY41[0x2];                                     // 0x27EE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FUIParticleProperty                         LifeSpan;                                                  // 0x27F0(0x07E8) (Edit, NativeAccessSpecifierPublic)
	struct FUIParticleProperty                         Size;                                                      // 0x2FD8(0x07E8) (Edit, NativeAccessSpecifierPublic)
	struct FUIParticleProperty                         Pivot;                                                     // 0x37C0(0x07E8) (Edit, NativeAccessSpecifierPublic)
	struct FUIParticleProperty                         RotationStart;                                             // 0x3FA8(0x07E8) (Edit, NativeAccessSpecifierPublic)
	struct FUIParticleProperty                         RotationSpeed;                                             // 0x4790(0x07E8) (Edit, NativeAccessSpecifierPublic)
	struct FUIParticleProperty                         Color;                                                     // 0x4F78(0x07E8) (Edit, NativeAccessSpecifierPublic)
	class UObject*                                     ResourceObject;                                            // 0x5760(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               RotationFollowSpeed;                                       // 0x5768(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               UseSeparateSize;                                           // 0x5769(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_B0W9[0x6];                                     // 0x576A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FUIParticleProperty                         Gravity;                                                   // 0x5770(0x07E8) (Edit, NativeAccessSpecifierPublic)
	struct FUIParticleProperty                         StartSpeed;                                                // 0x5F58(0x07E8) (Edit, NativeAccessSpecifierPublic)
	struct FUIParticleProperty                         AirResistance;                                             // 0x6740(0x07E8) (Edit, NativeAccessSpecifierPublic)
	struct FUIParticleProperty                         RadialAcceleration;                                        // 0x6F28(0x07E8) (Edit, NativeAccessSpecifierPublic)
	struct FUIParticleProperty                         TangentialAcceleration;                                    // 0x7710(0x07E8) (Edit, NativeAccessSpecifierPublic)
	struct FUIParticleProperty                         Radius;                                                    // 0x7EF8(0x07E8) (Edit, NativeAccessSpecifierPublic)
	struct FUIParticleProperty                         DegreePerSecond;                                           // 0x86E0(0x07E8) (Edit, NativeAccessSpecifierPublic)
	struct FUIParticleProperty                         PositionX;                                                 // 0x8EC8(0x07E8) (Edit, NativeAccessSpecifierPublic)
	struct FUIParticleProperty                         PositionY;                                                 // 0x96B0(0x07E8) (Edit, NativeAccessSpecifierPublic)
	TArray<struct FChildEmitter>                       ChildrenEmitters;                                          // 0x9E98(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FScalarParamCurve>                   ScalarParams;                                              // 0x9EA8(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FScalarParamCurve>                   ScalarParamsWhenStart;                                     // 0x9EB8(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	UIParticle_EParticleDrawEffect                     DrawEffect;                                                // 0x9EC8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               UseScaleFollowSpeedDirection;                              // 0x9EC9(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_X3YP[0x6];                                     // 0x9ECA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FUIParticleProperty                         ScaleFollowSpeedDirection;                                 // 0x9ED0(0x07E8) (Edit, NativeAccessSpecifierPublic)
	bool                                               UseScaleFollowSpeedVertical;                               // 0xA6B8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NI96[0x7];                                     // 0xA6B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FUIParticleProperty                         ScaleFollowSpeedVertical;                                  // 0xA6C0(0x07E8) (Edit, NativeAccessSpecifierPublic)
	struct FUIParticleProperty                         DirectionScale;                                            // 0xAEA8(0x07E8) (Edit, NativeAccessSpecifierPublic)
	struct FUIParticleProperty                         VerticalDirectionScale;                                    // 0xB690(0x07E8) (Edit, NativeAccessSpecifierPublic)
	struct FUIParticleProperty                         SineDirectionStart;                                        // 0xBE78(0x07E8) (Edit, NativeAccessSpecifierPublic)
	struct FUIParticleProperty                         SineDirectionSpeed;                                        // 0xC660(0x07E8) (Edit, NativeAccessSpecifierPublic)
	struct FUIParticleProperty                         SineDirectionRange;                                        // 0xCE48(0x07E8) (Edit, NativeAccessSpecifierPublic)
	TArray<class UUIParticleEmitterAsset*>             LevelOfDetail;                                             // 0xD630(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UIParticle.UIParticleEmitterAsset");
		return ptr;
	}



};

// Class UIParticle.UIParticleUtility
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UUIParticleUtility : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UIParticle.UIParticleUtility");
		return ptr;
	}



	void STATIC_SetMultiThread(bool Value);
	void STATIC_SetLOD(int newlod);
	bool STATIC_GetMultiThread();
	int STATIC_GetLOD();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
