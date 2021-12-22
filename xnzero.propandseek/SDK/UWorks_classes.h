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

// Class UWorks.UWorks
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UUWorks : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorks.UWorks");
		return ptr;
	}



};

// Class UWorks.UWorksInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UUWorksInterface : public UUWorks
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorks.UWorksInterface");
		return ptr;
	}



};

// Class UWorks.UWorksRequest
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UUWorksRequest : public UUWorks
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorks.UWorksRequest");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
