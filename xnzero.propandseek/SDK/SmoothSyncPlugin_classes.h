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

// Class SmoothSyncPlugin.SmoothSync
// 0x0228 (FullSize[0x0320] - InheritedSize[0x00F8])
class USmoothSync : public UActorComponent
{
public:
	unsigned char                                      UnknownData_E5CE[0x2C];                                    // 0x00F8(0x002C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              interpolationBackTime;                                     // 0x0124(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SmoothSyncPlugin_ExtrapolationMode                 ExtrapolationMode;                                         // 0x0128(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               useExtrapolationTimeLimit;                                 // 0x0129(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MA8R[0x2];                                     // 0x012A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              extrapolationTimeLimit;                                    // 0x012C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               useExtrapolationDistanceLimit;                             // 0x0130(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_24V0[0x3];                                     // 0x0131(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              extrapolationDistanceLimit;                                // 0x0134(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              sendPositionThreshold;                                     // 0x0138(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              sendRotationThreshold;                                     // 0x013C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              sendScaleThreshold;                                        // 0x0140(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              sendVelocityThreshold;                                     // 0x0144(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              sendAngularVelocityThreshold;                              // 0x0148(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              receivedPositionThreshold;                                 // 0x014C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              receivedRotationThreshold;                                 // 0x0150(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              positionSnapThreshold;                                     // 0x0154(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              rotationSnapThreshold;                                     // 0x0158(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              scaleSnapThreshold;                                        // 0x015C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              timeCorrectionSpeed;                                       // 0x0160(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              snapTimeThreshold;                                         // 0x0164(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_35HI[0x4];                                     // 0x0168(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              positionLerpSpeed;                                         // 0x016C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              rotationLerpSpeed;                                         // 0x0170(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              scaleLerpSpeed;                                            // 0x0174(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SmoothSyncPlugin_ESyncMode                         syncPosition;                                              // 0x0178(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SmoothSyncPlugin_ESyncMode                         syncRotation;                                              // 0x0179(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SmoothSyncPlugin_ESyncMode                         syncScale;                                                 // 0x017A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SmoothSyncPlugin_ESyncMode                         syncVelocity;                                              // 0x017B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SmoothSyncPlugin_ESyncMode                         syncAngularVelocity;                                       // 0x017C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               syncMovementMode;                                          // 0x017D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               isPositionCompressed;                                      // 0x017E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               isRotationCompressed;                                      // 0x017F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               isScaleCompressed;                                         // 0x0180(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               isVelocityCompressed;                                      // 0x0181(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               isAngularVelocityCompressed;                               // 0x0182(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_O4Y8[0x1];                                     // 0x0183(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              sendRate;                                                  // 0x0184(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               isUsingOriginRebasing;                                     // 0x0188(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LC2Y[0x9F];                                    // 0x0189(0x009F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USceneComponent*                             realComponentToSync;                                       // 0x0228(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6NRT[0xD8];                                    // 0x0230(0x00D8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              atRestPositionThreshold;                                   // 0x0308(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              atRestRotationThreshold;                                   // 0x030C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FVWD[0x10];                                    // 0x0310(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SmoothSyncPlugin.SmoothSync");
		return ptr;
	}



	void teleport();
	void SmoothSyncTeleportServerToClients(const struct FVector& Position, const struct FVector& Rotation, const struct FVector& Scale, float tempOwnerTime);
	void SmoothSyncTeleportClientToServer(const struct FVector& Position, const struct FVector& Rotation, const struct FVector& Scale, float tempOwnerTime);
	void SmoothSyncEnableServerToClients(bool enable);
	void SmoothSyncEnableClientToServer(bool enable);
	void setSceneComponentToSync(class USceneComponent* theComponent);
	void ServerSendsTransformToEveryone(TArray<unsigned char> Value);
	void forceStateSendNextFrame();
	void enableSmoothSync(bool enable);
	void ClientSendsTransformToServer(TArray<unsigned char> Value);
	void clearBuffer();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
