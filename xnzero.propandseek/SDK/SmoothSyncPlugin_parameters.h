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
// Parameters
//---------------------------------------------------------------------------

// Function SmoothSyncPlugin.SmoothSync.teleport
struct USmoothSync_teleport_Params
{
};

// Function SmoothSyncPlugin.SmoothSync.SmoothSyncTeleportServerToClients
struct USmoothSync_SmoothSyncTeleportServerToClients_Params
{
	struct FVector                                     Position;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Rotation;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Scale;                                                     // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              tempOwnerTime;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SmoothSyncPlugin.SmoothSync.SmoothSyncTeleportClientToServer
struct USmoothSync_SmoothSyncTeleportClientToServer_Params
{
	struct FVector                                     Position;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Rotation;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Scale;                                                     // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              tempOwnerTime;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SmoothSyncPlugin.SmoothSync.SmoothSyncEnableServerToClients
struct USmoothSync_SmoothSyncEnableServerToClients_Params
{
	bool                                               enable;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SmoothSyncPlugin.SmoothSync.SmoothSyncEnableClientToServer
struct USmoothSync_SmoothSyncEnableClientToServer_Params
{
	bool                                               enable;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SmoothSyncPlugin.SmoothSync.setSceneComponentToSync
struct USmoothSync_setSceneComponentToSync_Params
{
	class USceneComponent*                             theComponent;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SmoothSyncPlugin.SmoothSync.ServerSendsTransformToEveryone
struct USmoothSync_ServerSendsTransformToEveryone_Params
{
	TArray<unsigned char>                              Value;                                                     // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function SmoothSyncPlugin.SmoothSync.forceStateSendNextFrame
struct USmoothSync_forceStateSendNextFrame_Params
{
};

// Function SmoothSyncPlugin.SmoothSync.enableSmoothSync
struct USmoothSync_enableSmoothSync_Params
{
	bool                                               enable;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SmoothSyncPlugin.SmoothSync.ClientSendsTransformToServer
struct USmoothSync_ClientSendsTransformToServer_Params
{
	TArray<unsigned char>                              Value;                                                     // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function SmoothSyncPlugin.SmoothSync.clearBuffer
struct USmoothSync_clearBuffer_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
