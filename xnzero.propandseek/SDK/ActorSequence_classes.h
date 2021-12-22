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

// Class ActorSequence.ActorSequence
// 0x0028 (FullSize[0x0370] - InheritedSize[0x0348])
class UActorSequence : public UMovieSceneSequence
{
public:
	class UMovieScene*                                 MovieScene;                                                // 0x0348(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FActorSequenceObjectReferenceMap            ObjectReferences;                                          // 0x0350(0x0020) (NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ActorSequence.ActorSequence");
		return ptr;
	}



};

// Class ActorSequence.ActorSequenceComponent
// 0x0028 (FullSize[0x0120] - InheritedSize[0x00F8])
class UActorSequenceComponent : public UActorComponent
{
public:
	struct FMovieSceneSequencePlaybackSettings         PlaybackSettings;                                          // 0x00F8(0x0014) (Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_1YPJ[0x4];                                     // 0x010C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UActorSequence*                              Sequence;                                                  // 0x0110(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UActorSequencePlayer*                        SequencePlayer;                                            // 0x0118(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ActorSequence.ActorSequenceComponent");
		return ptr;
	}



};

// Class ActorSequence.ActorSequencePlayer
// 0x0000 (FullSize[0x07C8] - InheritedSize[0x07C8])
class UActorSequencePlayer : public UMovieSceneSequencePlayer
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ActorSequence.ActorSequencePlayer");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
