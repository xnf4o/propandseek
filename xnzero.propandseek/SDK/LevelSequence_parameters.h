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

// Function LevelSequence.LevelSequence.RemoveMetaDataByClass
struct ULevelSequence_RemoveMetaDataByClass_Params
{
	class UClass*                                      InClass;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LevelSequence.LevelSequence.FindOrAddMetaDataByClass
struct ULevelSequence_FindOrAddMetaDataByClass_Params
{
	class UClass*                                      InClass;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LevelSequence.LevelSequence.FindMetaDataByClass
struct ULevelSequence_FindMetaDataByClass_Params
{
	class UClass*                                      InClass;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LevelSequence.LevelSequence.CopyMetaData
struct ULevelSequence_CopyMetaData_Params
{
	class UObject*                                     InMetaData;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LevelSequence.LevelSequenceBurnInOptions.SetBurnIn
struct ULevelSequenceBurnInOptions_SetBurnIn_Params
{
	struct FSoftClassPath                              InBurnInClass;                                             // 0x0000(0x0018)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function LevelSequence.LevelSequenceActor.SetSequence
struct ALevelSequenceActor_SetSequence_Params
{
	class ULevelSequence*                              InSequence;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LevelSequence.LevelSequenceActor.SetReplicatePlayback
struct ALevelSequenceActor_SetReplicatePlayback_Params
{
	bool                                               ReplicatePlayback;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LevelSequence.LevelSequenceActor.SetEventReceivers
struct ALevelSequenceActor_SetEventReceivers_Params
{
	TArray<class AActor*>                              AdditionalReceivers;                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function LevelSequence.LevelSequenceActor.SetBinding
struct ALevelSequenceActor_SetBinding_Params
{
	struct FMovieSceneObjectBindingID                  Binding;                                                   // 0x0000(0x0018)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                              Actors;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               bAllowBindingsFromAsset;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LevelSequence.LevelSequenceActor.ResetBindings
struct ALevelSequenceActor_ResetBindings_Params
{
};

// Function LevelSequence.LevelSequenceActor.ResetBinding
struct ALevelSequenceActor_ResetBinding_Params
{
	struct FMovieSceneObjectBindingID                  Binding;                                                   // 0x0000(0x0018)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LevelSequence.LevelSequenceActor.RemoveBinding
struct ALevelSequenceActor_RemoveBinding_Params
{
	struct FMovieSceneObjectBindingID                  Binding;                                                   // 0x0000(0x0018)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction LevelSequence.LevelSequenceActor.OnLevelSequenceLoaded__DelegateSignature
struct ALevelSequenceActor_OnLevelSequenceLoaded__DelegateSignature_Params
{
};

// Function LevelSequence.LevelSequenceActor.LoadSequence
struct ALevelSequenceActor_LoadSequence_Params
{
	class ULevelSequence*                              ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LevelSequence.LevelSequenceActor.GetSequencePlayer
struct ALevelSequenceActor_GetSequencePlayer_Params
{
	class ULevelSequencePlayer*                        ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LevelSequence.LevelSequenceActor.GetSequence
struct ALevelSequenceActor_GetSequence_Params
{
	class ULevelSequence*                              ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LevelSequence.LevelSequenceActor.AddBinding
struct ALevelSequenceActor_AddBinding_Params
{
	struct FMovieSceneObjectBindingID                  Binding;                                                   // 0x0000(0x0018)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowBindingsFromAsset;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LevelSequence.LevelSequenceBurnIn.SetSettings
struct ULevelSequenceBurnIn_SetSettings_Params
{
	class UObject*                                     InSettings;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LevelSequence.LevelSequenceBurnIn.GetSettingsClass
struct ULevelSequenceBurnIn_GetSettingsClass_Params
{
	class UClass*                                      ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LevelSequence.LevelSequenceDirector.OnCreated
struct ULevelSequenceDirector_OnCreated_Params
{
};

// Function LevelSequence.LevelSequencePlayer.GetActiveCameraComponent
struct ULevelSequencePlayer_GetActiveCameraComponent_Params
{
	class UCameraComponent*                            ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LevelSequence.LevelSequencePlayer.CreateLevelSequencePlayer
struct ULevelSequencePlayer_CreateLevelSequencePlayer_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULevelSequence*                              LevelSequence;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneSequencePlaybackSettings         Settings;                                                  // 0x0000(0x0014)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	class ALevelSequenceActor*                         OutActor;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULevelSequencePlayer*                        ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
