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

// Function UIParticle.UIParticle.StopEmit
struct UUIParticle_StopEmit_Params
{
};

// Function UIParticle.UIParticle.Stop
struct UUIParticle_Stop_Params
{
};

// Function UIParticle.UIParticle.SetPlayParticle
struct UUIParticle_SetPlayParticle_Params
{
	bool                                               InPlayParticle;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UIParticle.UIParticle.Play
struct UUIParticle_Play_Params
{
};

// Function UIParticle.UIParticleEmitter.StopEmit
struct UUIParticleEmitter_StopEmit_Params
{
};

// Function UIParticle.UIParticleEmitter.Stop
struct UUIParticleEmitter_Stop_Params
{
};

// Function UIParticle.UIParticleEmitter.SetPlayParticle
struct UUIParticleEmitter_SetPlayParticle_Params
{
	bool                                               InPlayParticle;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UIParticle.UIParticleEmitter.Play
struct UUIParticleEmitter_Play_Params
{
};

// Function UIParticle.UIParticleUtility.SetMultiThread
struct UUIParticleUtility_SetMultiThread_Params
{
	bool                                               Value;                                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UIParticle.UIParticleUtility.SetLOD
struct UUIParticleUtility_SetLOD_Params
{
	int                                                newlod;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UIParticle.UIParticleUtility.GetMultiThread
struct UUIParticleUtility_GetMultiThread_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UIParticle.UIParticleUtility.GetLOD
struct UUIParticleUtility_GetLOD_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
